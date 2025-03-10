"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os

os.environ["CUDA_VISIBLE_DEVICES"] = "-1"
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'
import scipy
import numpy as np
import random
from sklearn.model_selection import RepeatedKFold
from dotenv import dotenv_values
from utilities import data_class

# Declare constants
SEED = 1

# Set fixed seed for random operations
random.seed(SEED)
np.random.seed(SEED)
os.environ['PYTHONHASHSEED'] = str(SEED)

# Load variables in .env file
config = dotenv_values("../.env")

# Load directory paths from .env file
data_path = config['data_path']
model_path = config['model_path']

# Specify paths for loading and saving data
data_load_path = os.path.join(data_path, '0_simulation')
data_save_path = os.path.join(data_path, '1_postsim')
os.makedirs(data_save_path, exist_ok=True)

# Load file names of normal and anomalous time series
normal_file_name_list = sorted([f for f in os.listdir(data_load_path) if f.endswith('_normal_0.mat')])
control_file_name_list = sorted([f for f in os.listdir(data_load_path) if f.endswith('_control.mat')])
anomalous_file_name_list = sorted([f for f in os.listdir(data_load_path) if not (f.endswith('_normal_0.mat') or f.endswith('_control.mat'))])

# Load .mat files as numpy arrays and add file names as metadata
normal_list = [scipy.io.loadmat(os.path.join(data_load_path, file_name))['array'].astype(np.dtype('float32', metadata={"file_name": file_name})) for file_name in normal_file_name_list]
control_list = [scipy.io.loadmat(os.path.join(data_load_path, file_name))['array'].astype(np.dtype('float32', metadata={"file_name": file_name})) for file_name in control_file_name_list]
anomalous_list = [scipy.io.loadmat(os.path.join(data_load_path, file_name))['array'].astype(np.dtype('float32', metadata={"file_name": file_name})) for file_name in anomalous_file_name_list]

# Make sure anomalous_list and control_list are equally long
assert len(anomalous_list) == len(control_list)

# Find indices of anomalous time series identic to their control counterparts
# Trim random amount from beginning of each anomalous time series and adjust file name
# Trim same amount from beginning of each corresponding control time series
remove_index = []
for anomalous_idx, anomalous_ts in enumerate(anomalous_list):
    # Find indices of anomalous time series identic to their control counterparts
    if np.mean(abs(control_list[anomalous_idx] - anomalous_ts)) < 1:
        remove_index.append(anomalous_idx)
    else:
        file_name = anomalous_ts.dtype.metadata['file_name']
        anomaly_start_time_components = file_name.split('_')
        anomaly_start_time, _ = anomaly_start_time_components[-1].split('.')
        anomaly_start_time = int(anomaly_start_time)
        trimmed_start_time = int(len(anomalous_ts) * round(np.random.uniform(0, 0.1), 2))
        # Trim random amount from beginning of each anomalous time series
        anomalous_ts = anomalous_ts[trimmed_start_time:]
        # Trim same amount from beginning of each corresponding control time series
        control_ts = control_list[anomalous_idx][trimmed_start_time:]
        # Adjust file_name in metadata to new anomaly start time
        if anomaly_start_time != 0:
            new_anomaly_start_time = anomaly_start_time - trimmed_start_time
            new_file_name = '_'.join(anomaly_start_time_components[:-1]) + '_' + str(new_anomaly_start_time) + '.mat'
        else:
            new_file_name = '_'.join(anomaly_start_time_components[:-1]) + '_' + str(anomaly_start_time) + '.mat'
        anomalous_ts = anomalous_ts.astype(np.dtype('float32', metadata={"file_name": new_file_name}))
        anomalous_list[anomalous_idx] = anomalous_ts
        control_list[anomalous_idx] = control_ts

# Remove anomalous time series identic to their control counterparts and viceversa
anomalous_list = [anomalous_ts for anomalous_idx, anomalous_ts in enumerate(anomalous_list) if anomalous_idx not in remove_index]
control_list = [control_ts for control_idx, control_ts in enumerate(control_list) if control_idx not in remove_index]

# Trim random amount from beginning of each normal time series
normal_list = [normal_ts[int(len(normal_ts) * round(np.random.uniform(0, 0.1), 2)):, :] for normal_ts in normal_list]

# Find standard deviation of all time series
stddev = np.std(np.vstack(normal_list + anomalous_list), axis=0)

for anomalous_idx, anomalous_ts in enumerate(anomalous_list):
    anomalous_file_name = anomalous_ts.dtype.metadata['file_name']
    control_file_name = control_list[anomalous_idx].dtype.metadata['file_name']
    # Sample noise vector
    noise = np.random.normal(0, 0.01 * stddev, (len(anomalous_ts), len(stddev)))
    # Add noise vector to anomalous sequences and their corresponding control sequences
    anomalous_list[anomalous_idx] = (anomalous_ts + noise).astype(np.dtype('float32', metadata={"file_name": anomalous_file_name}))
    control_list[anomalous_idx] = (control_list[anomalous_idx] + noise).astype(np.dtype('float32', metadata={"file_name": control_file_name}))

for normal_idx, normal_ts in enumerate(normal_list):
    file_name = normal_ts.dtype.metadata['file_name']
    # Sample noise vector
    noise = np.random.normal(0, 0.01 * stddev, (len(normal_ts), len(stddev)))
    # Add noise vector to normal sequences
    normal_list[normal_idx] = (normal_ts + noise).astype(np.dtype('float32', metadata={"file_name": file_name}))

# Combine normal_list and anomalous_list and shuffle the resulting list
total_list = normal_list + anomalous_list
random.shuffle(total_list)

# Instatiate RepeatedKFold object with 3 folds
rkf = RepeatedKFold(n_splits=3, n_repeats=1, random_state=SEED)

# Split all data into 3 folds
train_list_fold = []
test_list_fold = []
for fold_idx, (train_indices, test_indices) in enumerate(rkf.split(total_list)):
    train_list = [total_list[train_idx] for train_idx in train_indices]
    train_list_fold.append(train_list)
    test_list = [total_list[test_idx] for test_idx in test_indices]
    test_list_fold.append(test_list)

# Create clean versions of train_list and test_list for semi-supervised anomaly detection, time-series prediction or time-series generation
train_list_fold_clean = []
for train_idx, train_list in enumerate(train_list_fold):
    train_list_fold_clean.append([train_ts for train_ts in train_list if 'normal' in train_ts.dtype.metadata['file_name']])
test_list_fold_clean = []
for test_idx, test_list in enumerate(test_list_fold):
    test_list_fold_clean.append([test_ts for test_ts in test_list if 'normal' in test_ts.dtype.metadata['file_name']])

# Save normal_list, anomalous_list and control_list as pickle files
data_class.DataProcessor().dump_pickle(normal_list, os.path.join(data_save_path, 'normal.pkl'))
data_class.DataProcessor().dump_pickle(anomalous_list, os.path.join(data_save_path, 'anomalous.pkl'))
data_class.DataProcessor().dump_pickle(control_list, os.path.join(data_save_path, 'control.pkl'))

# Save train_list, test_list, train_list_clean and test_list_clean as pickle files
data_class.DataProcessor().dump_pickle(train_list_fold, os.path.join(data_save_path, 'train.pkl'))
data_class.DataProcessor().dump_pickle(test_list_fold, os.path.join(data_save_path, 'test.pkl'))
data_class.DataProcessor().dump_pickle(train_list_fold_clean, os.path.join(data_save_path, 'train_clean.pkl'))
data_class.DataProcessor().dump_pickle(test_list_fold_clean, os.path.join(data_save_path, 'test_clean.pkl'))
