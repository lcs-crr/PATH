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


def window_list(input_list, window_size, shift):
    """
    This function generates windows from a list of arrays.
    The windows are concatenated into a single array.

    :param input_list: list of multivariate time series
    :type input_list: list[array (time_steps, channels)]
    :param window_size: window size
    :type window_size: int
    :param shift: number of time steps between windows
    :type shift: int
    :return: array of windows
    :rtype: array (number of windows, window size, channels)
    """
    # If input is a single array, convert it to a list
    if isinstance(input_list, np.ndarray):
        input_list = [input_list]
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


def reverse_window(windows, shift, mode):
    """
    This function reconstructs a continuous multivariate time series from windows.

    :param windows: array of windows
    :type windows: array (number of windows, window size, channels)
    :param shift: time steps between windows
    :type shift: int
    :param mode: reverse window mode
    :type mode: str
    :return: multivariate time series
    :rtype: array (time_steps, channels)
    """
    num_windows, window_size, num_channels = windows.shape
    data = np.zeros(((num_windows - 1) * shift + window_size, num_channels))  # Pre-allocate array
    if mode == 'last':
        data[:window_size, :] = windows[0, :, :]  # First window
        for i in range(1, num_windows):
            data[(i - 1) * shift + window_size: i * shift + window_size, :] = windows[i, -shift:, :]
    elif mode == 'first':
        for i in range(num_windows - 1):
            data[i * shift: (i + 1) * shift, :] = windows[i, :shift, :]
        data[-window_size:, :] = windows[-1, :, :]  # Last window
    elif mode == 'mean':
        data = np.full((num_windows, (num_windows - 1) * shift + window_size, num_channels), np.nan)  # Pre-allocate array
        for i in range(num_windows):
            data[i, i * shift: i * shift + window_size] = windows[i]
        data = np.nanmean(data, axis=0)
    return data


def find_scalers(input_list):
    """
    This function finds the minimum, maximum, mean and standard deviation for each channel in a list of arrays.

    :param input_list: list of multivariate time series
    :type input_list: list[array (time_steps, channels)]
    :return: list of scalers
    :rtype: list[array (channels)]
    """
    # Calculate minimum of all time series for each channel
    minimum = np.min(np.vstack(input_list), axis=0)
    # Calculate maximum of all time series for each channel
    maximum = np.max(np.vstack(input_list), axis=0)
    # Calculate mean of all time series for each channel
    mean = np.mean(np.vstack(input_list), axis=0)
    # Calculate standard deviation of all time series for each channel
    standard_deviation = np.std(np.vstack(input_list), axis=0)
    # Return scalers
    return [minimum, maximum, mean, standard_deviation]


def scale_list(input_list, scalers, scale_type):
    """
    This function scales a multivariate time series. The scalers input must come from find_scalers() function.
    :param input_list: list of multivariate time series
    :type input_list: list[array (time_steps, channels)]
    :param scalers: list of scalers
    :type scalers: list[array (channels)]
    :param scale_type: scaling type
    :type scale_type: str
    :return: data_scaled: list of multivariate time series
    :rtype: list[array (time_steps, channels)]
    """
    # Assign minimum scaler value from scalers input
    minimum = scalers[0]
    # Assign maximum scaler value from scalers input
    maximum = scalers[1]
    # Assign mean scaler value from scalers input
    mean = scalers[2]
    # Assign standard deviation scaler value from scalers input
    standard_deviation = scalers[3]
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


def downsample(time_series, cutoff_frequency, sampling_frequency, filter_order):
    """
    This function applies a low-pass Butterworth filter to a multivariate time series.
    :param time_series: multivariate time series
    :type time_series: array (time_steps, channels)
    :param cutoff_frequency: cutoff frequency
    :type cutoff_frequency: float
    :param sampling_frequency: sampling frequency
    :type sampling_frequency: float
    :param filter_order: filter order
    :type filter_order: int
    :return: low-pass filtered multivariate time series
    :rtype: array (time_steps, channels)
    """
    # Calculate Butterworth filter coefficients
    b, a = butter(filter_order, cutoff_frequency, fs=sampling_frequency, btype='low', analog=False)
    # Apply filter to time series
    filtered_time_series = lfilter(b, a, time_series)
    # Return filtered time series
    return filtered_time_series


def negative_log_likelihood(mean, standard_deviation, sample):
    """
    Calculates the negative log likelihood for Gaussian distribution parameters given sample
    :param mean: Mean parameter of Gaussian distribution
    :type mean: array (time_steps, features)
    :param standard_deviation: Standard deviation parameter of Gaussian distribution
    :type standard_deviation: array (time_steps, features)
    :param sample: Observed sample
    :type sample: array (time_steps, features)
    :return: negative log likelihood
    :rtype: array (time_steps,)
    """
    outputDist = tfp.distributions.MultivariateNormalDiag(loc=mean, scale_diag=standard_deviation)
    negloglik = tf.expand_dims(-outputDist.log_prob(sample), axis=1)  # (time_steps, 1)
    return negloglik


def inference(model, input_array, window_size, rev_mode='mean', batch_size=512, score_function='negloglik'):
    """
    Inference function for stochastic output variational autoencoder.

    :param model: trained model
    :type model: tf.keras.Model
    :param input_array: multivariate time series
    :type input_array: array (time_steps, channels)
    :param rev_mode: reverse window mode
    :type rev_mode: str
    :param window_size: window size
    :type window_size: int
    :param batch_size: batch size
    :type batch_size: int
    :param score_function: anomaly score function
    :type score_function: str
    :return: anomaly score
    :rtype: array (time_steps, 1)
    :return: model outputs
    :rtype: list[list[array (time_steps, features), array (time_steps, features), array (time_steps, features)]]
    """
    # Window input array
    input_windows = window_list(input_array, window_size, 1)
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


def find_window_size(series):
    """
    This function plots the autocorrelation for each channel in a multivariate time series.

    :param series: multivariate input time series
    :type series: array (time_steps, channels)
    :return window size: integer
    """

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


def find_detection_delay(score, threshold, sampling_frequency, rev_mode, window_size, sequence_length, anomaly_start):
    """
    This function calculates the total detection delay for a given reverse window mode.

    :param score: anomaly score
    :type score: array (time_steps, 1)
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
    :return: time of detection
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
