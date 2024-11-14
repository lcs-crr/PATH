"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os
import pickle
import copy as cp
import numpy as np
import pandas as pd
import matrixprofile as mpx
from tqdm import tqdm
from scipy.signal import find_peaks
from sklearn.preprocessing import StandardScaler, MinMaxScaler
import warnings
warnings.filterwarnings("ignore")


def get_win(x):
    this_tag = np.squeeze(MinMaxScaler((0, np.abs(2 * np.average(x)))).fit_transform(x.reshape(-1, 1)))
    peaks = find_peaks(this_tag, prominence=np.abs(np.average(x) / 2))[0]
    return np.median(np.diff(peaks, axis=-1))


def cal_tags_mps(ts, win=None, train_range=None):
    all_tags_profiles = []
    win_size = win
    if np.ndim(ts) == 1:
        if win_size is None:
            win_size = get_win(ts)
            print('win:', win_size)
        profile = mpx.compute(ts, win_size)['mp']
        return np.asarray([profile]).T
    for i in np.arange(ts.shape[1]):
        this_tag = ts[:, i]
        if win is None:
            win_size = get_win(this_tag)
            print('win:', win_size)
        profile = mpx.compute(this_tag, win_size)['mp']
        pad_size = len(this_tag) - len(profile)
        profile = np.insert(profile, len(profile), [np.min(profile)] * pad_size)
        all_tags_profiles.append(profile)
    all_tags_profiles = np.asarray(all_tags_profiles).T
    return all_tags_profiles


def remove_base(mps_, quantile=0.75):
    num_of_tags = mps_.shape[1]
    bases = np.abs(np.quantile(mps_, quantile, axis=0))
    mps_scaled = mps_ - bases
    for i in np.arange(num_of_tags):
        temp = cp.deepcopy(mps_scaled[:, i])
        temp = (temp[temp < 0])
        if temp.size > 0:
            threshold_to_zero_out = -1 * np.min(temp)
        else:
            threshold_to_zero_out = 0
        mps_scaled[:, i][mps_scaled[:, i] < threshold_to_zero_out] = 0
    return mps_scaled


def fast_find_anomalies(mps):
    # get all-kdp-profils (def. 14)
    KDPs = np.sort(mps, axis=1)
    KDPs_idx = np.argsort(mps, axis=1)
    return np.flip(KDPs, axis=1), np.flip(KDPs_idx, axis=1)  # flip the rows odered just for visualization, otherwise does not impact the result


def idx_to_str(idxs):
    idxs = idxs.astype(int)
    all_ = []
    for k in np.arange(idxs.shape[1]):
        this_p = idxs[:, :k + 1]
        string_p = []
        for i in np.arange(len(this_p)):
            string_p.append(str(set(this_p[i, :])))
        all_.append(string_p)
    return np.asarray(all_)


def get_score(val, method='sum'):
    if method == 'sum':
        all_ = np.zeros_like(val)
        for i in np.arange(val.shape[1]):
            all_[:, i] = np.sum(val[:, :i + 1], axis=1)
        return all_
    elif method == 'min':
        return val

def load_pickle(path):
    """
    :param path: path to load from
    :type path: str
    :return: pickle_obj: pickle object
    """
    with open(path, 'rb') as f:
        pickle_obj = pickle.load(f)
    return pickle_obj


def dump_pickle(obj, path):
    """
    :param path: path to load from
    :type path: str
    :param obj: object to dump
    """
    try:
        os.makedirs(os.path.dirname(path))
    except:
        pass
    with open(path, 'wb') as f:
        pickle.dump(obj, f)
    return


def find_detection_delay(score, threshold, sampling_frequency, rev_mode, window_size, sequence_length, anomaly_start):
    """
    This function calculates the total detection delay for a given reverse window mode.

    :param score: anomaly score
    :type score: array (M, 1)
    :param threshold: anomaly threshold
    :type threshold: float
    :param sampling_frequency: sampling frequency
    :type sampling_frequency: float
    :param rev_mode: reverse window mode
    :type rev_mode: str
    :param window_size: window size
    :type window_size: int
    :param sequence_length: sequence length
    :type sequence_length: int
    :param anomaly_start: time step of anomaly start
    :type anomaly_start: float
    :return: delay
    :rtype: float
    """
    # Find first time step above threshold
    time_step_detection = np.argwhere(score >= threshold)[0, 0]
    # If reverse window mode is mean or first
    if rev_mode == 'mean' or rev_mode == 'first':
        # If detection time step is before sequence_length - window_size
        if time_step_detection < sequence_length - window_size:
            rev_window_penalty = window_size
        # If detection time step is within last window_size time steps
        else:
            rev_window_penalty = sequence_length - time_step_detection
    elif rev_mode == 'last':
        # If detection time step is within first window_size time steps
        if time_step_detection < window_size:
            rev_window_penalty = window_size - time_step_detection
        # If detection time step is after first window_size time steps
        else:
            rev_window_penalty = 0
    # Sum detection delay with reverse window delay penalty and subtract in case of SS anomaly, then convert to seconds
    delay = abs((time_step_detection + rev_window_penalty - anomaly_start) / sampling_frequency)
    return delay, time_step_detection + rev_window_penalty