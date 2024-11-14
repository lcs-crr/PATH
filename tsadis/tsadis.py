"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands

Original paper DOI: 10.1137/1.9781611977653.ch77
"""

from dotenv import dotenv_values
import random
import openpyxl
from sklearn import metrics
from helper_functions import *

# Declare constants
SEED = 1
AD_MODE = 'us'
# AD_MODE = 'ss'
MODEL_NAME = 'tsadis'

# Set fixed seed for random operations
random.seed(SEED)
np.random.seed(SEED)

# Load variables in .env file
config = dotenv_values("../.env")

# Load directory paths from .env file
data_path = config['data_path']
model_path = config['model_path']

# Declare channel_list for plots if needed
channel_list = [
    'Motor Speed [-]',
    'Motor Torque [-]',
    'Axle Torque Front [-]',
    'Axle Torque Rear [-]',
    'Battery SoC [-]',
    'Battery Current [-]',
    'Battery Power [-]',
    'Axle Force Front [-]',
    'Axle Force Rear [-]',
    'Axle Speed Front [-]',
    'Axle Speed Rear [-]',
    'Accelerator Pedal [-]',
    'Brake Pedal [-]',
    'Battery Temperature [-]',
    'Pump Power [-]',
    'Refrigerator Power [-]',
]

results = pd.DataFrame()
results_best = pd.DataFrame()
for fold_idx in range(3):
    model_seed = SEED
    model_name = MODEL_NAME + '_' + AD_MODE + '_' + str(fold_idx) + '_' + str(model_seed)
    if AD_MODE == 'us':
        data_load_path = os.path.join(data_path, '2_preprocessed', 'unsupervised', 'fold_' + str(fold_idx))
    else:
        data_load_path = os.path.join(data_path, '2_preprocessed', 'semisupervised', 'fold_' + str(fold_idx))
    model_load_path = os.path.join(model_path, model_name)

    val_list = load_pickle(os.path.join(data_load_path, 'val.pkl'))
    test_list = load_pickle(os.path.join(data_load_path, 'test.pkl'))

    reverse_window_mode = 'mean'
    window_size = 256
    sampling_rate = 2
    # Process validation data
    if os.path.isfile(os.path.join(model_load_path, 'val_detection_score' + '.pkl')) \
            and os.path.isfile(os.path.join(model_load_path, 'val_rootcause_score' + '.pkl')):
        val_detection_score = load_pickle(os.path.join(model_load_path, 'val_detection_score' + '.pkl'))
        val_rootcause_score = load_pickle(os.path.join(model_load_path, 'val_rootcause_score' + '.pkl'))
    else:
        val_detection_score = []
        val_rootcause_score = []
        for val_idx, val_ts in enumerate(tqdm(val_list)):
            mps = cal_tags_mps(val_ts, win=window_size)
            q = None  # we set the q to None since data is not noisey
            if q is None:
                kdps, kdps_idx = fast_find_anomalies(mps)
            else:
                kdps, kdps_idx = fast_find_anomalies(remove_base(mps, q))
            str_name = idx_to_str(kdps_idx)
            scoring_method = 'sum'
            rootcause_score = get_score(kdps, scoring_method)
            detection_score = rootcause_score.sum(axis=1)[:, np.newaxis]
            val_detection_score.append(detection_score)
            val_rootcause_score.append(rootcause_score)
        dump_pickle(val_detection_score, os.path.join(model_load_path, 'val_detection_score' + '.pkl'))
        dump_pickle(val_rootcause_score, os.path.join(model_load_path, 'val_rootcause_score' + '.pkl'))

    # Process test data
    if os.path.isfile(os.path.join(model_load_path, 'test_detection_score' + '.pkl')) \
            and os.path.isfile(os.path.join(model_load_path, 'test_rootcause_score' + '.pkl')):
        test_detection_score = load_pickle(os.path.join(model_load_path, 'test_detection_score' + '.pkl'))
        test_rootcause_score = load_pickle(os.path.join(model_load_path, 'test_rootcause_score' + '.pkl'))
    else:
        test_detection_score = []
        test_rootcause_score = []
        for test_idx, test_ts in enumerate(tqdm(test_list)):
            mps = cal_tags_mps(test_ts, win=window_size)
            q = None  # we set the q to None since data is not noisey
            if q is None:
                kdps, kdps_idx = fast_find_anomalies(mps)
            else:
                kdps, kdps_idx = fast_find_anomalies(remove_base(mps, q))
            str_name = idx_to_str(kdps_idx)
            scoring_method = 'sum'
            rootcause_score = get_score(kdps, scoring_method)
            detection_score = rootcause_score.sum(axis=1)[:, np.newaxis]
            test_detection_score.append(detection_score)
            test_rootcause_score.append(rootcause_score)
        dump_pickle(test_detection_score, os.path.join(model_load_path, 'test_detection_score' + '.pkl'))
        dump_pickle(test_rootcause_score, os.path.join(model_load_path, 'test_rootcause_score' + '.pkl'))

    percentile = 100
    # Evaluate validation data to obtain threshold
    reduced_val_data_error = []
    for score_ts in val_detection_score:
        reduced_val_data_error.append(np.percentile(score_ts, percentile))
    reduced_val_data_error = np.vstack(reduced_val_data_error)
    threshold = np.percentile(reduced_val_data_error, percentile)

    # Evaluate test data to obtain TN and FP
    FP = 0
    TN = 0
    FN = 0
    TP = 0
    total_test_detection_score = []
    total_delays = []
    test_rootcause_channels_sorted = []
    groundtruth_labels = []
    predicted_labels = []
    for idx_test, score_ts in enumerate(test_detection_score):
        score_ts = score_ts[:, 0]
        # Ground-truth normal time series
        if test_list[idx_test].dtype.metadata['file_name'].split('_')[-2] == 'normal':
            # >0 time steps in anomaly score higher than threshold
            # False positive
            if np.sum(score_ts >= threshold) > 0:
                predicted_anomaly_start = np.argwhere(score_ts >= threshold)[0][0]
                FP += 1
                predicted_labels.append(True)
                groundtruth_labels.append(False)
                test_rootcause_channels_sorted.append(np.argsort(test_rootcause_score[idx_test][predicted_anomaly_start]))
            # =0 time steps in anomaly score higher than threshold
            # True negative
            else:
                TN += 1
                predicted_labels.append(False)
                groundtruth_labels.append(False)
                test_rootcause_channels_sorted.append(np.nan)
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
                    TP += 1
                    predicted_labels.append(True)
                    groundtruth_labels.append(True)
                    delay, _ = find_detection_delay(score_ts, threshold, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                    total_delays.append(delay)
                    test_rootcause_channels_sorted.append(np.argsort(test_rootcause_score[idx_test][predicted_anomaly_start]))
                # First predicted anomalous time step is before the groundtruth anomaly start
                # False positive
                else:
                    FP += 1
                    predicted_labels.append(True)
                    groundtruth_labels.append(False)
                    delay, _ = find_detection_delay(score_ts, threshold, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                    total_delays.append(delay)
                    test_rootcause_channels_sorted.append(np.argsort(test_rootcause_score[idx_test][predicted_anomaly_start]))
            # =0 time steps in anomaly score higher than threshold
            # False negative
            else:
                FN += 1
                predicted_labels.append(False)
                groundtruth_labels.append(True)
                delay = (len(score_ts) - groundtruth_anomaly_start) / sampling_rate
                total_delays.append(delay)
                test_rootcause_channels_sorted.append(np.nan)
        # ts_plotter.plot_vae_results(
        #     test_list[idx_test],
        #     test_output[idx_test],
        #     [score_ts],
        #     channel_list,
        #     threshold=threshold,
        #     title=test_list[idx_test].dtype.metadata['file_name'],
        #     save_path=os.path.join(model_load_path, 'plots'),
        # )
        total_test_detection_score.append(score_ts)

    results.loc[(model_seed - 1) * 3 + fold_idx, 'Seed'] = model_seed
    results.loc[(model_seed - 1) * 3 + fold_idx, 'Fold'] = fold_idx
    results.loc[(model_seed - 1) * 3 + fold_idx, 'F1'] = metrics.f1_score(groundtruth_labels, predicted_labels, zero_division=0.0)  # TP / (TP + 0.5 * (FP + FN))
    results.loc[(model_seed - 1) * 3 + fold_idx, 'Precision'] = metrics.precision_score(groundtruth_labels, predicted_labels, zero_division=0.0)  # TP / (TP + FP)
    results.loc[(model_seed - 1) * 3 + fold_idx, 'Recall'] = metrics.recall_score(groundtruth_labels, predicted_labels, zero_division=0.0)  # TP / (TP + FN)
    results.loc[(model_seed - 1) * 3 + fold_idx, 'Delay'] = np.mean(total_delays)
    results.loc[(model_seed - 1) * 3 + fold_idx, 'Threshold'] = threshold
    results.loc[(model_seed - 1) * 3 + fold_idx, 'TP'] = TP
    results.loc[(model_seed - 1) * 3 + fold_idx, 'FN'] = FN
    results.loc[(model_seed - 1) * 3 + fold_idx, 'TN'] = TN
    results.loc[(model_seed - 1) * 3 + fold_idx, 'FP'] = FP

    precision_list = []
    recall_list = []
    f1_list = []
    reduced_test_detection_score = np.concatenate(total_test_detection_score).ravel()
    percentile_array = np.arange(0, 100.01, 0.01)
    for threshold_percentile in percentile_array:
        threshold_temp = np.percentile(reduced_test_detection_score, threshold_percentile)
        groundtruth_labels = []
        predicted_labels = []
        for idx_test, score_ts in enumerate(test_detection_score):
            score_ts = score_ts[:, 0]
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

    # Evaluate test data to obtain TN and FP
    FP = 0
    TN = 0
    FN = 0
    TP = 0
    total_delays_best = []
    test_rootcause_channels_sorted_best = []
    groundtruth_labels_best = []
    predicted_labels_best = []
    for idx_test, score_ts in enumerate(test_detection_score):
        score_ts = score_ts[:, 0]
        # Ground-truth normal time series
        if test_list[idx_test].dtype.metadata['file_name'].split('_')[-2] == 'normal':
            # >0 time steps in anomaly score higher than threshold
            # False positive
            if np.sum(score_ts >= threshold_best) > 0:
                FP += 1
                predicted_labels_best.append(True)
                groundtruth_labels_best.append(False)
                predicted_anomaly_start = np.argwhere(score_ts >= threshold_best)[0][0]
                test_rootcause_channels_sorted_best.append(np.argsort(test_rootcause_score[idx_test][predicted_anomaly_start]))
            # =0 time steps in anomaly score higher than threshold
            # True negative
            else:
                TN += 1
                predicted_labels_best.append(False)
                groundtruth_labels_best.append(False)
                test_rootcause_channels_sorted_best.append(np.nan)
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
                    TP += 1
                    predicted_labels_best.append(True)
                    groundtruth_labels_best.append(True)
                    delay, _ = find_detection_delay(score_ts, threshold_best, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                    total_delays_best.append(delay)
                    test_rootcause_channels_sorted_best.append(np.argsort(test_rootcause_score[idx_test][predicted_anomaly_start]))
                # First predicted anomalous time step is before the groundtruth anomaly start
                # False positive
                else:
                    FP += 1
                    predicted_labels_best.append(True)
                    groundtruth_labels_best.append(False)
                    delay, _ = find_detection_delay(score_ts, threshold_best, sampling_rate, reverse_window_mode, window_size, len(score_ts), groundtruth_anomaly_start)
                    total_delays_best.append(delay)
                    test_rootcause_channels_sorted.append(np.argsort(test_rootcause_score[idx_test][predicted_anomaly_start]))
            # =0 time steps in anomaly score higher than threshold
            # False negative
            else:
                FN += 1
                predicted_labels_best.append(False)
                groundtruth_labels_best.append(True)
                delay = (len(score_ts) - groundtruth_anomaly_start) / sampling_rate
                total_delays_best.append(delay)
                test_rootcause_channels_sorted.append(np.nan)

    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Seed'] = model_seed
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Fold'] = fold_idx
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'F1'] = metrics.f1_score(groundtruth_labels_best, predicted_labels_best, zero_division=0.0)  # TP / (TP + 0.5 * (FP + FN))
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Precision'] = metrics.precision_score(groundtruth_labels_best, predicted_labels_best, zero_division=0.0)  # TP / (TP + FP)
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Recall'] = metrics.recall_score(groundtruth_labels_best, predicted_labels_best, zero_division=0.0)  # TP / (TP + FN)
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Delay'] = np.mean(total_delays_best)
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'Threshold'] = threshold_best
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'TP'] = TP
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'FN'] = FN
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'TN'] = TN
    results_best.loc[(model_seed - 1) * 3 + fold_idx, 'FP'] = FP

# Check if results file exists
if not os.path.isfile(os.path.join(model_path, 'results.xlsx')):
    openpyxl.Workbook().save(filename=os.path.join(model_path, 'results.xlsx'))
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
