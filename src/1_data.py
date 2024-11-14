"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os
import pickle
import numpy as np
import tensorflow as tf
import random
import math
from sklearn.model_selection import train_test_split
from dotenv import dotenv_values
from ts_functions import ts_processor

# Declare constants
SEED = 1
FREQ_TARGET = 2
FREQ_ORIG = 10
FILTER_ORDER = 1
AD_MODE = 'us'  # or 'ss'

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

# Specify paths for loading and saving data
data_load_path = os.path.join(data_path, '1_postsim')
if AD_MODE == 'us':
    data_save_path = os.path.join(data_path, '2_preprocessed', 'unsupervised')
    train_list_fold = ts_processor.load_pickle(os.path.join(data_load_path, 'train.pkl'))
else:
    data_save_path = os.path.join(data_path, '2_preprocessed', 'semisupervised')
    train_list_fold = ts_processor.load_pickle(os.path.join(data_load_path, 'train_clean.pkl'))
test_list_fold = ts_processor.load_pickle(os.path.join(data_load_path, 'test.pkl'))

for fold_idx, _ in enumerate(train_list_fold):
    train_list_resampled = []
    for _, train_ts in enumerate(train_list_fold[fold_idx]):
        file_name = train_ts.dtype.metadata['file_name']

        # Apply low pass filter to signals
        train_ts_resampled_list = []
        for _, feature in enumerate(np.rollaxis(train_ts, 1)):
            # Pad signal to avoid oscillations
            pad_amount = FREQ_TARGET * 100
            feature_pad = np.pad(feature, (pad_amount, pad_amount), 'constant', constant_values=(feature[0], feature[-1]))

            # Apply low pass filter and downsample
            train_ts_resampled_list.append(ts_processor.downsample(feature_pad, FREQ_TARGET // 2, FREQ_ORIG, FILTER_ORDER)[pad_amount:-pad_amount:int(FREQ_ORIG // FREQ_TARGET)])

        # Check if all channels are same size
        try:
            train_ts_resampled_array = np.vstack(train_ts_resampled_list).T
        except:
            continue

        # Make sure the resulting array has no NaNs
        if not np.any(np.isnan(train_ts_resampled_array)):
            pass
        else:
            continue

        train_ts_resampled_array = train_ts_resampled_array.astype(np.dtype('float32', metadata={"file_name": file_name}))
        train_list_resampled.append(train_ts_resampled_array)

    test_list_resampled = []
    for _, test_ts in enumerate(test_list_fold[fold_idx]):
        file_name = test_ts.dtype.metadata['file_name']

        # Apply low pass filter to signals
        test_ts_resampled_list = []
        for _, feature in enumerate(np.rollaxis(test_ts, 1)):
            # Pad signal to avoid oscillations
            pad_amount = FREQ_TARGET * 100
            feature_pad = np.pad(feature, (pad_amount, pad_amount), 'constant', constant_values=(feature[0], feature[-1]))
            # Apply low pass filter and downsample
            test_ts_resampled_list.append(ts_processor.downsample(feature_pad, FREQ_TARGET // 2, FREQ_ORIG, FILTER_ORDER)[pad_amount:-pad_amount:int(FREQ_ORIG // FREQ_TARGET)])

        # Check if all channels are same size
        try:
            test_ts_resampled_array = np.vstack(test_ts_resampled_list).T
        except:
            continue

        # Make sure the resulting array has no NaNs
        if not np.any(np.isnan(test_ts_resampled_array)):
            pass
        else:
            continue

        test_ts_resampled_array = test_ts_resampled_array.astype(np.dtype('float32', metadata={"file_name": file_name}))
        test_list_resampled.append(test_ts_resampled_array)

    # Find the most suitable window size (power of 2) and the corresponding window shift
    window_size = max([ts_processor.find_window_size(series) for series in train_list_resampled])
    upper_window_size = 2 ** (math.ceil(math.log(window_size, 2)))
    lower_window_size = 2 ** (math.floor(math.log(window_size, 2)))
    if upper_window_size - window_size > window_size - lower_window_size:
        window_size = lower_window_size
    else:
        window_size = upper_window_size
    window_shift = window_size // 2

    train_list_resampled, val_list_resampled = train_test_split(train_list_resampled, random_state=SEED, test_size=0.2)

    # Find mean, std, etc. metrics
    scalers = ts_processor.find_scalers(train_list_resampled)

    # Scale data
    scaled_train_list = list(ts_processor.scale_list(train_list_resampled, scalers, 'z-score'))
    scaled_val_list = list(ts_processor.scale_list(val_list_resampled, scalers, 'z-score'))
    scaled_test_list = list(ts_processor.scale_list(test_list_resampled, scalers, 'z-score'))

    # Window sequences inside lists
    scaled_train_window = ts_processor.window_list(scaled_train_list, window_size, window_shift)
    scaled_val_window = ts_processor.window_list(scaled_val_list, window_size, window_shift)

    # Create tf.data objects
    tfdata_train = tf.data.Dataset.from_tensor_slices(scaled_train_window.astype(np.dtype('float32')))
    tfdata_val = tf.data.Dataset.from_tensor_slices(scaled_val_window.astype(np.dtype('float32')))

    # Shuffle and batch tf.data objects
    tfdata_train = tfdata_train.shuffle(tfdata_train.cardinality(), seed=SEED).batch(1).prefetch(tf.data.AUTOTUNE)
    tfdata_val = tfdata_val.shuffle(tfdata_val.cardinality(), seed=SEED).batch(1).prefetch(tf.data.AUTOTUNE)

    # Save training and validation data as tf.data
    tf.data.Dataset.save(tfdata_train, os.path.join(data_save_path, 'fold_' + str(fold_idx), 'train'))
    tf.data.Dataset.save(tfdata_val, os.path.join(data_save_path, 'fold_' + str(fold_idx), 'val'))

    # Save training, validation and testing data as pickle files
    ts_processor.dump_pickle(scaled_train_list, os.path.join(data_save_path, 'fold_' + str(fold_idx), 'train.pkl'))
    ts_processor.dump_pickle(scaled_val_list, os.path.join(data_save_path, 'fold_' + str(fold_idx), 'val.pkl'))
    ts_processor.dump_pickle(scaled_test_list, os.path.join(data_save_path, 'fold_' + str(fold_idx), 'test.pkl'))
    print()