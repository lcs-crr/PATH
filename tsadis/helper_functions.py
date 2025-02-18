"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os
import numpy as np
import matrixprofile as mpx
from scipy.signal import find_peaks
from sklearn.preprocessing import MinMaxScaler
import warnings

warnings.filterwarnings("ignore")


def get_win(x):
    this_tag = np.squeeze(MinMaxScaler((0, np.abs(2 * np.average(x)))).fit_transform(x.reshape(-1, 1)))
    peaks = find_peaks(this_tag, prominence=np.abs(np.average(x) / 2))[0]
    return np.median(np.diff(peaks, axis=-1))


def cal_tags_mps(ts, win=None):
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


def fast_find_anomalies(mps):
    # get all-kdp-profils (def. 14)
    KDPs = np.sort(mps, axis=1)
    KDPs_idx = np.argsort(mps, axis=1)
    return np.flip(KDPs, axis=1), np.flip(KDPs_idx, axis=1)  # flip the rows odered just for visualization, otherwise does not impact the result


def get_score(val, method='sum'):
    if method == 'sum':
        all_ = np.zeros_like(val)
        for i in np.arange(val.shape[1]):
            all_[:, i] = np.sum(val[:, :i + 1], axis=1)
        return all_
    elif method == 'min':
        return val
