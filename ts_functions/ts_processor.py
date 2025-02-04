"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import numpy as np
from scipy.signal import butter, lfilter
import tensorflow_probability as tfp
import tensorflow as tf
from statsmodels.tsa import stattools
import os
import pickle
from typing import List, Tuple, Optional


def window_list(
        input_list: List[np.ndarray],
        window_size: int,
        shift: int,
) -> np.ndarray:

    """
    This function generates windows from a list of arrays.
    The windows are concatenated into a single array.

    :param input_list: list of multivariate time series, each of shape (time steps, channels)
    :param window_size: window size
    :param shift: number of time steps between windows
    :return: array of windows of shape (number_of_windows, window_size, channels)
    """

    assert isinstance(input_list, list), 'input_list argument must be a list.'
    assert isinstance(window_size, int), 'window_size argument must be an integer.'
    assert isinstance(shift, int), 'shift argument must be an integer.'

    # Pre-allocate list
    window_list_temp = []
    # For each multivariate time series in the list
    for time_series in input_list:
        # Calculate the number of windows
        set_window_count = (time_series.shape[0] - window_size) // shift + 1
        # Pre-allocate array
        window_data = np.zeros((set_window_count, window_size, time_series.shape[1]))
        # For each window
        for j in range(set_window_count):
            window_data[j] = time_series[j * shift:window_size + j * shift]
        # Append windows to list
        window_list_temp.append(window_data)
    # Concatenate windows into a single array
    windows = np.concatenate(window_list_temp[:], axis=0)
    # Return windows
    return windows


def reverse_window(
        input_windows: np.ndarray,
        shift: int,
        mode: str,
) -> np.ndarray:

    """
    This function reconstructs a continuous multivariate time series from windows.

    :param input_windows: array of windows of shape (number_of_windows, window_size, channels)
    :param shift: time steps between windows
    :param mode: reverse window mode
    :return: multivariate time series of shape (time steps, channels)
    """

    assert isinstance(input_windows, np.ndarray), 'windows argument must be a numpy array.'
    assert len(input_windows.shape) == 3, 'windows argument must be a 3D numpy array.'
    assert isinstance(shift, int), 'shift argument must be an integer.'
    assert isinstance(mode, str), 'mode argument must be an string.'

    num_windows, window_size, num_channels = input_windows.shape
    data = np.zeros(((num_windows - 1) * shift + window_size, num_channels))  # Pre-allocate array
    if mode == 'last':
        data[:window_size, :] = input_windows[0, :, :]  # First window
        for i in range(1, num_windows):
            data[(i - 1) * shift + window_size: i * shift + window_size, :] = input_windows[i, -shift:, :]
    elif mode == 'first':
        for i in range(num_windows - 1):
            data[i * shift: (i + 1) * shift, :] = input_windows[i, :shift, :]
        data[-window_size:, :] = input_windows[-1, :, :]  # Last window
    elif mode == 'mean':
        data = np.full((num_windows, (num_windows - 1) * shift + window_size, num_channels), np.nan)  # Pre-allocate array
        for i in range(num_windows):
            data[i, i * shift: i * shift + window_size] = input_windows[i]
        data = np.nanmean(data, axis=0)
    return data


def find_scalers(
        input_list: List[np.ndarray],
) -> Tuple[np.ndarray, np.ndarray, np.ndarray, np.ndarray]:

    """
    This function finds the minimum, maximum, mean and standard deviation for each channel in a list of arrays.

    :param input_list: list of multivariate time series
    :return: list of scalers
    """

    assert isinstance(input_list, list), 'input_list argument must be a list.'

    # Calculate minimum of all time series for each channel
    minimum = np.min(np.vstack(input_list), axis=0)
    # Calculate maximum of all time series for each channel
    maximum = np.max(np.vstack(input_list), axis=0)
    # Calculate mean of all time series for each channel
    mean = np.mean(np.vstack(input_list), axis=0)
    # Calculate standard deviation of all time series for each channel
    standard_deviation = np.std(np.vstack(input_list), axis=0)
    # Return scalers
    return minimum, maximum, mean, standard_deviation


def scale_list(
        input_list: List[np.ndarray],
        scalers: Tuple[np.ndarray, np.ndarray, np.ndarray, np.ndarray],
        scale_type: str,
) -> List[np.ndarray]:

    """
    This function scales a multivariate time series. The scalers input must come from find_scalers() function.

    :param input_list: list of multivariate time series, each of shape (number_of_timesteps, channels)
    :param scalers: list of scalers
    :param scale_type: scaling type, either 'z-score' or 'min-max'
    :return:
    """

    assert isinstance(input_list, list), 'input_list argument must be a list.'
    assert isinstance(scalers, tuple), 'scalers argument must be a tuple.'
    assert isinstance(scale_type, str), 'scale_type argument must be a string.'

    # Assign min, max, mean and std scaler value from scalers input
    minimum, maximum, mean, standard_deviation = scalers
    # If scale type is z-score
    if scale_type == 'z-score':
        data_scaled = [(time_series - mean) / standard_deviation for time_series in input_list]
    # Else if scale type is min-max
    elif scale_type == 'min-max':
        data_scaled = [(time_series - minimum) / (maximum - minimum) for time_series in input_list]
    # Else do nothing
    else:
        data_scaled = [time_series for time_series in input_list]
    # Return scaled data
    return data_scaled


def downsample(
        input_array: np.ndarray,
        cutoff_frequency: int,
        sampling_frequency: int,
        filter_order: int,
) -> np.ndarray:

    """
    This function applies a low-pass Butterworth filter to a multivariate time series.

    :param input_array: multivariate time series of shape (number_of_timesteps, channels)
    :param cutoff_frequency: cutoff frequency
    :param sampling_frequency: sampling frequency
    :param filter_order: filter order
    :return: low-pass filtered multivariate time series
    """

    assert isinstance(input_array, np.ndarray), 'input_array argument must be a numpy array.'
    assert len(input_array.shape) == 1, 'input_array argument must be a 1D numpy array.'
    assert isinstance(cutoff_frequency, int), 'cutoff_frequency argument must be an integer.'
    assert isinstance(sampling_frequency, int), 'sampling_frequency argument must be an integer.'
    assert isinstance(filter_order, int), 'filter_order argument must be a integer.'

    # Calculate Butterworth filter coefficients
    b, a = butter(filter_order, cutoff_frequency, fs=sampling_frequency, btype='low', analog=False)
    # Apply filter to time series
    filtered_array = lfilter(b, a, input_array)
    # Return filtered time series
    return filtered_array


def negative_log_likelihood(
        mean: np.ndarray,
        standard_deviation: np.ndarray,
        sample: np.ndarray,
) -> np.ndarray:

    """
    Calculates the negative log likelihood for Gaussian distribution parameters given sample

    :param mean: Mean parameter of Gaussian distribution of shape (time_steps, channels)
    :param standard_deviation: Standard deviation parameter of Gaussian distribution of shape (time_steps, channels)
    :param sample: Observed sample of shape (time_steps, channels)
    :return: negative log likelihood of shape (time_steps, 1)
    """

    assert isinstance(mean, np.ndarray), 'input_array argument must be a numpy array.'
    assert len(mean.shape) == 2, 'input_array argument must be a 2D numpy array.'
    assert isinstance(standard_deviation, np.ndarray), 'input_array argument must be a numpy array.'
    assert len(standard_deviation.shape) == 2, 'input_array argument must be a 2D numpy array.'
    assert isinstance(sample, np.ndarray), 'input_array argument must be a numpy array.'
    assert len(sample.shape) == 2, 'input_array argument must be a 2D numpy array.'

    outputDist = tfp.distributions.MultivariateNormalDiag(loc=mean, scale_diag=standard_deviation)
    negloglik = tf.expand_dims(-outputDist.log_prob(sample), axis=1)  # (time_steps, 1)
    return negloglik


def inference(
        model: tf.keras.Model,
        input_array: np.ndarray,
        window_size: int,
        rev_mode: Optional[str] = 'mean',
        batch_size: Optional[int] = 512,
        score_function: Optional[str] ='negloglik'
) -> Tuple[np.ndarray, List[np.ndarray]]:

    """
    Inference function for stochastic output variational autoencoder.

    :param model: trained model
    :param input_array: multivariate time series of shape (time_steps, channels)
    :param rev_mode: reverse window mode
    :param window_size: window size
    :param batch_size: batch size
    :param score_function: anomaly score function
    :return: anomaly score
    :return: model outputs
    """
    
    assert isinstance(model, tf.keras.Model), 'model argument must be a tf.keras.Model.'
    assert isinstance(input_array, np.ndarray), 'input_array argument must be a numpy array.'
    assert len(input_array.shape) == 2, 'input_array argument must be a 2D numpy array.'
    assert isinstance(rev_mode, str), 'rev_mode argument must be a string.'
    assert isinstance(window_size, int), 'window_size argument must be a integer.'
    assert isinstance(batch_size, int), 'batch_size argument must be a integer.'
    assert isinstance(score_function, str), 'score_function argument must be a string.'

    # Window input array
    input_windows = window_list([input_array], window_size, 1)
    # Predict output windows
    output_windows = model.predict(input_windows, batch_size=batch_size, verbose=0, steps=None, callbacks=None)
    if score_function == 'negloglik':
        # Assign outputs
        Xhat_mean = output_windows[0]
        Xhat_logvar = output_windows[1]
        Xhat = output_windows[2]
        # Calculate variance parameter
        Xhat_var = np.exp(Xhat_logvar)
        # If window size is provided
        if window_size:
            # Reverse window mean parameter
            Xhat_mean = reverse_window(Xhat_mean, 1, rev_mode)
            # Reverse window variance parameter
            Xhat_var = reverse_window(Xhat_var, 1, rev_mode)
            # Reverse window reconstruction
            Xhat = reverse_window(Xhat, 1, rev_mode)
            # Calculate standard deviation parameter
            Xhat_std = np.sqrt(Xhat_var)
    else:
        # Assign outputs
        Xhat = output_windows[1]
        # If window size is provided
        if window_size:
            # Reverse window reconstruction
            Xhat = reverse_window(Xhat, 1, rev_mode)
    # Calculate anomaly score
    if score_function == 'negloglik':
        anomaly_score = negative_log_likelihood(Xhat_mean, Xhat_std, input_array)
    elif score_function == 'logcosh':
        anomaly_score = tf.losses.LogCosh(reduction=tf.keras.losses.Reduction.NONE)(input_array, Xhat).numpy()[:, np.newaxis]
        anomaly_score = tf.reduce_sum(anomaly_score, axis=-1)[:, np.newaxis]
    elif score_function == 'rss':
        anomaly_score = (input_array - Xhat) ** 2
        anomaly_score = tf.reduce_sum(anomaly_score, axis=-1)[:, np.newaxis]
    # Clear GPU memory before next call
    tf.keras.backend.clear_session()
    # Return anomaly score and model outputs
    return anomaly_score, [Xhat_mean, Xhat_std, Xhat]


def find_window_size(
        series: np.ndarray,
) -> int:

    """
    This function plots the autocorrelation for each channel in a multivariate time series.

    :param series: multivariate time series of shape (time_steps, channels)
    :return window size: integer
    """
    
    assert isinstance(series, np.ndarray), 'series argument must be a numpy array.'

    intersection_list = []
    for channel in range(series.shape[-1]):
        corr_array = stattools.acf(series[:, channel], alpha=0.01, nlags=4096)
        upper_y = corr_array[1][:, 1] - corr_array[0]
        # upper_y = np.around(upper_y, 3)
        corr = corr_array[0]
        # corr = np.around(corr, 3)
        try:
            intersection_list.append(min(np.where(corr - upper_y < 0)[0]))
        except:
            pass
    return np.max(intersection_list)


def find_detection_delay(
        score: np.ndarray,
        threshold: float,
        sampling_frequency: float,
        rev_mode: str,
        window_size: int,
        sequence_length: int,
        anomaly_start: float
) -> Tuple[float, float]:

    """
    This function calculates the total detection delay for a given reverse window mode.

    :param score: anomaly score of shape (time_steps, 1)
    :param threshold: anomaly threshold
    :param sampling_frequency: sampling frequency
    :param rev_mode: reverse window mode
    :param window_size: window size
    :param sequence_length: sequence length
    :param anomaly_start: time step of anomaly start
    :return: delay
    :return: time of detection
    """
    
    assert isinstance(score, np.ndarray), 'score argument must be a numpy array.'
    assert len(score.shape) == 2, 'score argument must be a 2D numpy array.'
    assert isinstance(threshold, float), 'threshold argument must be a float.'
    assert isinstance(sampling_frequency, float), 'sampling_frequency argument must be a float.'
    assert isinstance(rev_mode, str), 'rev_mode argument must be a string.'
    assert isinstance(window_size, int), 'window_size argument must be a integer.'
    assert isinstance(sequence_length, int), 'sequence_length argument must be a integer.'
    assert isinstance(anomaly_start, float), 'anomaly_start argument must be a float.'
    
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
