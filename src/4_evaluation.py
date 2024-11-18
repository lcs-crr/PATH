"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os
import random
import openpyxl
import numpy as np
import pandas as pd
import tensorflow as tf
from dotenv import dotenv_values
from sklearn import metrics
from ts_functions import ts_processor

# Declare constants
SEED = 1
AD_MODE = 'us'  # or 'ss'
MODEL_NAME = 'tevae'  # or 'tcnae', 'omnianomaly', 'sisvae', 'lwvae'

# Set fixed seed for random operations
random.seed(SEED)
np.random.seed(SEED)
tf.random.set_seed(SEED)
os.environ['PYTHONHASHSEED'] = str(SEED)

# Load variables in .env file
config = dotenv_values("../.env")

# Load directory paths from .env file
data_path = config['data_path']
model_path = config['model_path']

# Pre-allocate results dataframes
results = pd.DataFrame()
results_best = pd.DataFrame()
# Iterate over all seeds and folds
for model_seed in range(1, 6):
    for fold_idx in range(3):
        model_name = MODEL_NAME + '_' + AD_MODE + '_' + str(fold_idx) + '_' + str(model_seed)
        if AD_MODE == 'us':
            data_load_path = os.path.join(data_path, '2_preprocessed', 'unsupervised', 'fold_' + str(fold_idx))
        else:
            data_load_path = os.path.join(data_path, '2_preprocessed', 'semisupervised', 'fold_' + str(fold_idx))
        model_load_path = os.path.join(model_path, model_name)

        # Load data
        val_list = ts_processor.load_pickle(os.path.join(data_load_path, 'val.pkl'))
        test_list = ts_processor.load_pickle(os.path.join(data_load_path, 'test.pkl'))

        # Declare reverse window mode, window size and sampling rate
        reverse_window_mode = 'mean'
        window_size = 256
        sampling_rate = 2
        # Load inference results from 3_inference.py
        val_detection_score = ts_processor.load_pickle(os.path.join(model_load_path, 'val_detection_score_' + reverse_window_mode + '.pkl'))
        val_output = ts_processor.load_pickle(os.path.join(model_load_path, 'val_output_' + reverse_window_mode + '.pkl'))

        # Load inference results from 3_inference.py
        test_detection_score = ts_processor.load_pickle(os.path.join(model_load_path, 'test_detection_score_' + reverse_window_mode + '.pkl'))
        test_output = ts_processor.load_pickle(os.path.join(model_load_path, 'test_output_' + reverse_window_mode + '.pkl'))

        percentile = 100
        # Evaluate validation data to obtain threshold
        reduced_val_data_error = []
        for score_ts in val_detection_score:
            reduced_val_data_error.append(np.percentile(score_ts, percentile))
        reduced_val_data_error = np.vstack(reduced_val_data_error)
        threshold = np.percentile(reduced_val_data_error, percentile)

        # Pre-allocate lists
        total_test_detection_score = []
        total_delays = []
        groundtruth_labels = []
        predicted_labels = []
        # Iterate over all test time series with unsupervised threshold
        for idx_test, score_ts in enumerate(test_detection_score):
            score_ts = score_ts.numpy()[:, 0]
            # Ground-truth normal time series
            if test_list[idx_test].dtype.metadata['file_name'].split('_')[-2] == 'normal':
                # >0 time steps in anomaly score higher than threshold
                # False positive
                if np.sum(score_ts >= threshold) > 0:
                    predicted_anomaly_start = np.argwhere(score_ts >= threshold)[0][0]
                    predicted_labels.append(True)
                    groundtruth_labels.append(False)
                # =0 time steps in anomaly score higher than threshold
                # True negative
                else:
                    predicted_labels.append(False)
                    groundtruth_labels.append(False)
            # Ground-truth anomalous time series
            else:
                # Extract groundtruth anomaly start from file name and correct it for lower sampling rate
                groundtruth_anomaly_start = int(test_list[idx_test].dtype.metadata['file_name'].split('_')[-1].split('.')[0]) / (10 / sampling_rate)
                # >0 time steps in anomaly score higher than threshold
                # Anomaly predicted
                if np.sum(score_ts >= threshold) > 0:
                    predicted_anomaly_start = np.argwhere(score_ts >= threshold)[0][0]
                    # First predicted anomalous time step is after the groundtruth anomaly start
                    # True positive
                    if predicted_anomaly_start >= groundtruth_anomaly_start:
                        predicted_labels.append(True)
                        groundtruth_labels.append(True)
                        delay, _ = ts_processor.find_detection_delay(score_ts, threshold, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                        total_delays.append(delay)
                    # First predicted anomalous time step is before the groundtruth anomaly start
                    # False positive
                    else:
                        predicted_labels.append(True)
                        groundtruth_labels.append(False)
                        delay, _ = ts_processor.find_detection_delay(score_ts, threshold, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                        total_delays.append(delay)
                # =0 time steps in anomaly score higher than threshold
                # False negative
                else:
                    predicted_labels.append(False)
                    groundtruth_labels.append(True)
                    delay = (len(score_ts) - groundtruth_anomaly_start) / sampling_rate
                    total_delays.append(delay)
            total_test_detection_score.append(score_ts)

        # Store results in dataframe
        results.loc[(model_seed - 1) * 3 + fold_idx, 'Seed'] = model_seed
        results.loc[(model_seed - 1) * 3 + fold_idx, 'Fold'] = fold_idx
        results.loc[(model_seed - 1) * 3 + fold_idx, 'F1'] = metrics.f1_score(groundtruth_labels, predicted_labels, zero_division=0.0)  # TP / (TP + 0.5 * (FP + FN))
        results.loc[(model_seed - 1) * 3 + fold_idx, 'Precision'] = metrics.precision_score(groundtruth_labels, predicted_labels, zero_division=0.0)  # TP / (TP + FP)
        results.loc[(model_seed - 1) * 3 + fold_idx, 'Recall'] = metrics.recall_score(groundtruth_labels, predicted_labels, zero_division=0.0)  # TP / (TP + FN)
        results.loc[(model_seed - 1) * 3 + fold_idx, 'Delay'] = np.mean(total_delays)
        results.loc[(model_seed - 1) * 3 + fold_idx, 'Threshold'] = threshold

        # Pre-allocate lists
        precision_list = []
        recall_list = []
        f1_list = []
        reduced_test_detection_score = np.concatenate(total_test_detection_score).ravel()
        percentile_array = np.arange(0, 100.01, 0.01)
        # Iterate over all percentiles to find the best threshold
        for threshold_percentile in percentile_array:
            threshold_temp = np.percentile(reduced_test_detection_score, threshold_percentile)
            groundtruth_labels = []
            predicted_labels = []
            for idx_test, score_ts in enumerate(test_detection_score):
                score_ts = score_ts.numpy()[:, 0]
                # Ground-truth normal time series
                if test_list[idx_test].dtype.metadata['file_name'].split('_')[-2] == 'normal':
                    # >0 time steps in anomaly score higher than threshold
                    # False positive
                    if np.sum(score_ts >= threshold_temp) > 0:
                        predicted_labels.append(True)
                        groundtruth_labels.append(False)
                    # =0 time steps in anomaly score higher than threshold
                    # True negative
                    else:
                        predicted_labels.append(False)
                        groundtruth_labels.append(False)
                # Ground-truth anomalous time series
                else:
                    groundtruth_anomaly_start = int(test_list[idx_test].dtype.metadata['file_name'].split('_')[-1].split('.')[0]) // (10 / sampling_rate)
                    # >0 time steps in anomaly score higher than threshold
                    # Anomaly predicted
                    if np.sum(score_ts >= threshold_temp) > 0:
                        predicted_anomaly_start = np.argwhere(score_ts >= threshold_temp)[0][0]
                        # First predicted anomalous time step is after the groundtruth anomaly start
                        # True positive
                        if predicted_anomaly_start > groundtruth_anomaly_start:
                            predicted_labels.append(True)
                            groundtruth_labels.append(True)
                        # First predicted anomalous time step is before the groundtruth anomaly start
                        # False positive
                        else:
                            predicted_labels.append(True)
                            groundtruth_labels.append(False)
                    # =0 time steps in anomaly score higher than threshold
                    # False negative
                    else:
                        predicted_labels.append(False)
                        groundtruth_labels.append(True)
            precision = metrics.precision_score(groundtruth_labels, predicted_labels, zero_division=0.0)
            recall = metrics.recall_score(groundtruth_labels, predicted_labels, zero_division=0.0)
            f1 = metrics.f1_score(groundtruth_labels, predicted_labels, zero_division=0.0)
            precision_list.append(precision)
            recall_list.append(recall)
            f1_list.append(f1)
        f1_list = np.vstack(f1_list)
        threshold_best = np.percentile(reduced_test_detection_score, percentile_array[np.argmax(f1_list)])

        # Pre-allocate lists
        total_delays_best = []
        groundtruth_labels_best = []
        predicted_labels_best = []
        # Iterate over all test time series with the best threshold
        for idx_test, score_ts in enumerate(test_detection_score):
            score_ts = score_ts.numpy()[:, 0]
            # Ground-truth normal time series
            if test_list[idx_test].dtype.metadata['file_name'].split('_')[-2] == 'normal':
                # >0 time steps in anomaly score higher than threshold
                # False positive
                if np.sum(score_ts >= threshold_best) > 0:
                    predicted_labels_best.append(True)
                    groundtruth_labels_best.append(False)
                    predicted_anomaly_start = np.argwhere(score_ts >= threshold_best)[0][0]
                # =0 time steps in anomaly score higher than threshold
                # True negative
                else:
                    predicted_labels_best.append(False)
                    groundtruth_labels_best.append(False)
            # Ground-truth anomalous time series
            else:
                # Extract groundtruth anomaly start from file name
                groundtruth_anomaly_start = int(test_list[idx_test].dtype.metadata['file_name'].split('_')[-1].split('.')[0]) // (10 / sampling_rate)
                # >0 time steps in anomaly score higher than threshold
                # Anomaly predicted
                if np.sum(score_ts >= threshold_best) > 0:
                    predicted_anomaly_start = np.argwhere(score_ts >= threshold_best)[0][0]
                    # First predicted anomalous time step is after the groundtruth anomaly start
                    # True positive
                    if predicted_anomaly_start >= groundtruth_anomaly_start:
                        predicted_labels_best.append(True)
                        groundtruth_labels_best.append(True)
                        delay, _ = ts_processor.find_detection_delay(score_ts, threshold_best, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                        total_delays_best.append(delay)
                    # First predicted anomalous time step is before the groundtruth anomaly start
                    # False positive
                    else:
                        predicted_labels_best.append(True)
                        groundtruth_labels_best.append(False)
                        delay, _ = ts_processor.find_detection_delay(score_ts, threshold_best, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                        total_delays_best.append(delay)
                # =0 time steps in anomaly score higher than threshold
                # False negative
                else:
                    predicted_labels_best.append(False)
                    groundtruth_labels_best.append(True)
                    delay = (len(score_ts) - groundtruth_anomaly_start) / sampling_rate
                    total_delays_best.append(delay)

        results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Seed'] = model_seed
        results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Fold'] = fold_idx
        results_best.loc[(model_seed - 1) * 3 + fold_idx, 'F1'] = metrics.f1_score(groundtruth_labels_best, predicted_labels_best, zero_division=0.0)  # TP / (TP + 0.5 * (FP + FN))
        results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Precision'] = metrics.precision_score(groundtruth_labels_best, predicted_labels_best, zero_division=0.0)  # TP / (TP + FP)
        results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Recall'] = metrics.recall_score(groundtruth_labels_best, predicted_labels_best, zero_division=0.0)  # TP / (TP + FN)
        results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Delay'] = np.mean(total_delays_best)
        results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Threshold'] = threshold_best

# Check if results file exists
if not os.path.isfile(os.path.join(model_path, 'results.xlsx')):
    openpyxl.Workbook().save(filename=os.path.join(model_path, 'results.xlsx'))
# Save results and results_best in Excel file
with pd.ExcelWriter(os.path.join(model_path, 'results.xlsx'), mode='a', if_sheet_exists='replace') as writer:
    results.to_excel(writer, index=False, sheet_name=MODEL_NAME + '_' + AD_MODE)
    results_best.to_excel(writer, index=False, sheet_name=MODEL_NAME + '_' + AD_MODE + '_best')
try:
    workbook = openpyxl.load_workbook(os.path.join(model_path, 'results.xlsx'))
    if 'Sheet' in workbook.sheetnames:
        workbook.remove(workbook['Sheet'])
    workbook.save(os.path.join(model_path, 'results.xlsx'))
except:
    pass
