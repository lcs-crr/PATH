"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

from typing import List, Tuple
import numpy as np
from utilities import base_class


class AnomalyDetector(base_class.BaseProcessor):
    def __init__(
            self,
            model_path: str = None,
            window_size: int = None,
            sampling_rate: int = None,
            original_sampling_rate: int = None,
            calculate_delay: bool = None,
            reverse_window_penalty: bool = True,
    ) -> None:
        """
        This class comprises all required functions to evaluate the anomaly detection performance of a given model.

        :param model_path: path to the trained model
        :param window_size: window size
        :param sampling_rate: sampling rate of input signal
        :param original_sampling_rate: sampling rate of the original data
        :param calculate_delay: boolean indicating to calculate delay
        :param reverse_window_penalty: boolean indicating to apply reverse window penalty
        """

        super().__init__()
        self.model_path = model_path
        self.window_size = window_size
        self.sampling_rate = sampling_rate
        self.original_sampling_rate = original_sampling_rate
        self.calculate_delay = calculate_delay
        self.reverse_window_penalty = reverse_window_penalty

    @staticmethod
    def unsupervised_threshold(
            detection_score_list: List[np.ndarray],
    ) -> float:
        """
        This function calculates the unsupervised threshold.

        :param detection_score_list: list of detection scores, each of shape (number_of_timesteps, channels)
        :return: threshold
        """

        assert isinstance(detection_score_list, list), 'detection_score_list argument must be a list!'
        assert all(isinstance(detection_score, np.ndarray) for detection_score in detection_score_list), 'All items in detection_score_list must be numpy arrays!'

        max_detection_scores = []
        for detection_score in detection_score_list:
            if len(detection_score.shape) == 2:
                detection_score = detection_score.sum(axis=-1)
            max_detection_scores.append(np.max(detection_score))
        return np.max(np.array(max_detection_scores)).astype(float)

    def _find_detection_delay(
            self,
            detection_score: np.ndarray,
            threshold: float,
            sequence_length: int,
            anomaly_start: float,
    ) -> Tuple[float, int]:
        """
        This function calculates the total detection delay for a given reverse window mode.

        :param detection_score: detection score of shape (number_of_timesteps, channels)
        :param threshold: anomaly threshold
        :param sequence_length: sequence length
        :param anomaly_start: time step of anomaly start
        :return: delay
        :return: time step of detection
        """

        assert detection_score.ndim == 1, 'detection_score must be a 1D numpy array of shape (time_steps,)!'
        assert self.window_size is not None, 'window_size must be provided!'
        assert self.sampling_rate is not None, 'sampling_rate must be provided!'

        # Find first time step above threshold
        time_step_detection = np.argwhere(detection_score >= threshold)[0, 0]
        # If detection time step is before sequence_length - window_size
        if time_step_detection < sequence_length - self.window_size:
            rev_window_penalty = self.window_size
        # If detection time step is within last window_size time steps
        else:
            rev_window_penalty = sequence_length - time_step_detection
        # Sum detection delay with reverse window delay penalty and subtract in case of SS anomaly, then convert to seconds
        delay = abs((time_step_detection + rev_window_penalty - anomaly_start) / self.sampling_rate)
        return delay, time_step_detection + rev_window_penalty

    def extract_groundtruth(
            self,
            input_list: List[np.ndarray],
            label_keyword: str = None,
    ) -> Tuple[List[int], List[float]]:
        """
        This function extracts the groundtruth labels and start times from the file names.

        :param input_list: list of multivariate time series, each of shape (number_of_timesteps, channels)
        :param label_keyword: label to identify nominal data
        :return:
        """

        assert isinstance(input_list, list), 'input_list must be a list!'
        assert all(isinstance(input_array, np.ndarray) for input_array in input_list), 'All items in input_list must be numpy arrays!'
        assert all(input_array.ndim == 2 for input_array in input_list), 'All items in input_list must be 2D numpy arrays!'
        assert isinstance(label_keyword, str), 'label_keyword must be a string!'

        groundtruth_labels = [data_ts.dtype.metadata['file_name'].split('_')[-2] != label_keyword for idx_data, data_ts in enumerate(input_list)]
        groundtruth_start_list = [int(data_ts.dtype.metadata['file_name'].split('_')[-1].split('.')[0]) / (self.original_sampling_rate / self.sampling_rate) for
                                  idx_data, data_ts in enumerate(input_list)]
        return groundtruth_labels, groundtruth_start_list

    def evaluate(
            self,
            input_list: List[np.ndarray],
            detection_score_list: List[np.ndarray],
            threshold: float = None,
            groundtruth_labels: List[int] = None,
            groundtruth_start_list: List[float] = None,
    ) -> Tuple[List[int], List[float]]:
        """
        This function evaluates the anomaly detection performance of a given model.

        :param input_list: list of multivariate time series, each of shape (number_of_timesteps, channels)
        :param detection_score_list: list of detection scores, each of shape (number_of_timesteps, channels)
        :param threshold: detection threshold
        :param groundtruth_labels: list of groundtruth labels
        :param groundtruth_start_list: list of groundtruth anomaly start times
        """

        assert isinstance(input_list, list), 'input_list must be a list!'
        assert all(isinstance(input_array, np.ndarray) for input_array in input_list), 'All items in input_list must be numpy arrays!'
        assert all(input_array.ndim == 2 for input_array in input_list), 'All items in input_list must be 2D numpy arrays!'
        assert isinstance(detection_score_list, list), 'detection_score_list must be a list!'
        assert all(isinstance(detection_score, np.ndarray) for detection_score in detection_score_list), 'All items in detection_score_list must be numpy arrays!'
        assert isinstance(threshold, float), 'threshold must be a float!'
        assert isinstance(groundtruth_labels, list), 'groundtruth_labels must be a list!'
        assert all(isinstance(groundtruth_label, int) for groundtruth_label in groundtruth_labels), 'All items in groundtruth_labels must be integers!'
        assert isinstance(groundtruth_start_list, list), 'groundtruth_start_list must be a list!'
        assert all(isinstance(groundtruth_start, float) for groundtruth_start in groundtruth_start_list), 'All items in groundtruth_start_list must be floats!'

        assert self.sampling_rate is not None, 'sampling_rate must be provided!'
        assert self.original_sampling_rate is not None, 'original_sampling_rate must be provided!'

        total_delays = []
        predicted_labels = []
        for idx_detection_score, detection_score in enumerate(detection_score_list):
            if len(detection_score.shape) == 2:
                detection_score = detection_score.sum(axis=-1)
            # Ground-truth normal time series
            if not groundtruth_labels[idx_detection_score]:
                # >0 time steps in anomaly score higher than threshold
                # False positive
                if np.sum(detection_score >= threshold) > 0:
                    predicted_labels.append(True)
                # =0 time steps in anomaly score higher than threshold
                # True negative
                else:
                    predicted_labels.append(False)
            # Ground-truth anomalous time series
            else:
                # Extract groundtruth anomaly start from file name and correct it for lower sampling rate
                groundtruth_start = groundtruth_start_list[idx_detection_score]
                # >0 time steps in anomaly score higher than threshold
                # Anomaly predicted
                if np.sum(detection_score >= threshold) > 0:
                    predicted_anomaly_start = np.argwhere(detection_score >= threshold)[0][0]
                    # First predicted anomalous time step is after the groundtruth anomaly start
                    # True positive
                    if predicted_anomaly_start >= groundtruth_start:
                        predicted_labels.append(True)
                    # First predicted anomalous time step is before the groundtruth anomaly start
                    # False positive
                    else:
                        predicted_labels.append(True)
                    if self.calculate_delay:
                        if self.reverse_window_penalty:
                            delay, _ = self._find_detection_delay(detection_score, threshold, len(detection_score), groundtruth_start)
                        else:
                            delay = abs(predicted_anomaly_start - groundtruth_start) / self.sampling_rate
                        total_delays.append(delay)
                # =0 time steps in anomaly score higher than threshold
                # False negative
                else:
                    predicted_labels.append(False)
                    if self.calculate_delay:
                        delay = (len(detection_score) - groundtruth_start) / self.sampling_rate
                        total_delays.append(delay)
        return predicted_labels, total_delays
