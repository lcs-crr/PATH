"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import math
import numpy as np
from scipy.signal import butter, lfilter
from statsmodels.tsa import stattools
from typing import List, Union
from utilities import base_class


class DataProcessor(base_class.BaseProcessor):
    def __init__(
            self,
            window_size: int = None,
            original_sampling_rate: int = None,
            target_sampling_rate: int = None,
            scale_method: str = None,
            window_shift: Union[int, str] = 'half',
    ) -> None:
        """
        This class comprises all required functions to evaluate the anomaly detection performance of a given model.

        :param window_size: window size
        :param original_sampling_rate: original sampling rate of raw data
        :param target_sampling_rate: target sampling rate of processed data
        :param scale_method: scaling method, either 'z-score' or 'min-max'
        :param window_shift: window overlap, integer refers to number of time steps, half to half a window
        """
        super().__init__()
        self.window_size = window_size
        self.original_sampling_rate = original_sampling_rate
        self.target_sampling_rate = target_sampling_rate
        self.scale_method = scale_method
        self.window_shift = window_shift

    def window_list(
            self,
            input_list: List[np.ndarray],
    ) -> np.ndarray:
        """
        Generates windows from an array.

        :param input_list: multivariate time series of shape (number_of_timesteps, channels)
        :return: array of windows of shape (number_of_windows, window_size, channels)
        """

        assert isinstance(input_list, list), 'input_list argument must be a list!'
        assert all(isinstance(input_array, np.ndarray) for input_array in input_list), 'All items in input_list must be numpy arrays!'
        assert all(input_array.ndim == 2 for input_array in input_list), 'All items in input_list must be 2D numpy arrays!'

        if self.window_size is None:
            self.window_size = self._find_window_size_from_list(input_list)

        if not isinstance(self.window_shift, int):
            if self.window_shift == 'half':
                self.window_shift = self.window_size // 2

        output_list = [self.window_array(input_array, self.window_size, self.window_shift) for input_array in input_list]
        return np.vstack(output_list)

    def _find_scalers_from_list(
            self,
            input_list: List[np.ndarray],
    ) -> None:
        """
        This function finds the channel-wise minimum, maximum, mean and standard deviation for each channel in a list of arrays.

        :param input_list: list of multivariate time series, each of shape (number_of_timesteps, channels)
        """

        self.minimum = np.min(np.vstack(input_list), axis=0)
        self.maximum = np.max(np.vstack(input_list), axis=0)
        self.mean = np.mean(np.vstack(input_list), axis=0)
        self.standard_deviation = np.std(np.vstack(input_list), axis=0)

    def scale_list(
            self,
            input_list: List[np.ndarray],
    ) -> List[np.ndarray]:
        """
        This function scales a list of multivariate time series according to the provided method.

        :param input_list: list of multivariate time series, each of shape (number_of_timesteps, channels)
        """

        assert isinstance(input_list, list), 'input_list argument must be a list!'
        assert all(isinstance(input_array, np.ndarray) for input_array in input_list), 'All items in input_list must be numpy arrays!'
        assert all(input_array.ndim == 2 for input_array in input_list), 'All items in input_list must be 2D numpy arrays!'
        assert self.scale_method is not None, 'scale_method must be provided!'

        self._find_scalers_from_list(input_list)

        if self.scale_method == 'z-score':
            return [(time_series - self.mean) / self.standard_deviation for time_series in input_list]
        elif self.scale_method == 'min-max':
            return [(time_series - self.minimum) / (self.maximum - self.minimum) for time_series in input_list]
        else:
            return [time_series for time_series in input_list]

    def downsample_list(
            self,
            input_list: List[np.ndarray],
            reduce: bool = True,
    ) -> List[np.ndarray]:
        """
        This function applies a low-pass Butterworth filter to a multivariate time series.

        :param input_list: list of multivariate time series, each of shape (number_of_timesteps, channels)
        :param reduce: if true, reduce signal to target sampling frequency
        """

        assert isinstance(input_list, list), 'input_list argument must be a list!'
        assert all(isinstance(input_array, np.ndarray) for input_array in input_list), 'All items in input_list must be numpy arrays!'
        assert all(input_array.ndim == 2 for input_array in input_list), 'All items in input_list must be 2D numpy arrays!'
        assert self.original_sampling_rate is not None, 'original_sampling_rate must be provided!'
        assert self.target_sampling_rate is not None, 'target_sampling_rate must be provided!'

        assert self.original_sampling_rate > self.target_sampling_rate, 'target_sampling_rate must be lower than original_sampling_rate!'
        assert self.original_sampling_rate % self.target_sampling_rate == 0, 'target_sampling_rate must be a multiple of original_sampling_rate!'

        output_list = []
        for _, input_array in enumerate(input_list):
            file_name = input_array.dtype.metadata['file_name']
            lowpass_input_array = np.zeros_like(input_array)
            for channel_idx, channel in enumerate(np.rollaxis(input_array, 1)):
                pad_amount = self.target_sampling_rate * 100  # Pad signal to avoid oscillations
                channel_padded = np.pad(channel, (pad_amount, pad_amount), 'constant',
                                        constant_values=(channel[0], channel[-1]))
                b, a = butter(N=1, Wn=self.target_sampling_rate // 2, fs=self.original_sampling_rate, btype='low')
                low_pass_channel = lfilter(b, a, channel_padded)
                lowpass_input_array[:, channel_idx] = low_pass_channel[pad_amount:-pad_amount]

                assert not np.any(np.isnan(lowpass_input_array)), 'There is NaNs in the data after downsampling!'
            if reduce:
                lowpass_input_array = lowpass_input_array[::self.original_sampling_rate // self.target_sampling_rate]

            lowpass_input_array = lowpass_input_array.astype(
                np.dtype('float32', metadata={'file_name': file_name}))
            output_list.append(lowpass_input_array)
        return output_list

    @staticmethod
    def _find_window_size_from_list(
            data_list: List[np.ndarray],
    ) -> int:
        """
        This function plots the autocorrelation for each channel in a multivariate time series.

        :param data_list: list of multivariate input time series
        """

        # Pre-allocate list for possible window sizes
        possible_window_sizes = []
        # Iterate through list of multivariate time series
        for data_ts in data_list:
            intersection_list = []
            # Iterate through channels
            for channel in range(data_ts.shape[-1]):
                corr_array = stattools.acf(data_ts[:, channel], alpha=0.01, nlags=4096)
                upper_y = corr_array[1][:, 1] - corr_array[0]
                corr = corr_array[0]
                try:
                    intersection_list.append(np.min(np.where(corr - upper_y < 0)[0]))
                except:
                    continue
            # Append maximum window size for each channel
            possible_window_sizes.append(np.max(intersection_list))
        # Choose maximum window size in list
        candidate_window_size = np.max(possible_window_sizes)
        # If window_size is not supposed to be rounded, return it as is
        round_to_power = 2
        upper_window_size = round_to_power ** (np.ceil(math.log(candidate_window_size, round_to_power)))
        lower_window_size = round_to_power ** (np.floor(math.log(candidate_window_size, round_to_power)))
        # Find which rounded window size is closer to the candidate window size and return it
        if upper_window_size - candidate_window_size > candidate_window_size - lower_window_size:
            return int(lower_window_size)
        else:
            return int(upper_window_size)
