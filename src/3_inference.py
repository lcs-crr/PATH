"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os
import random
from tqdm import tqdm
from dotenv import dotenv_values
from ts_functions import ts_processor
from model_garden.tevae import *

# Declare constants
SEED = 1
AD_MODE = 'us'  # or 'ss'
MODEL_NAME = 'tevae'

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

# Iterate over all seeds and folds
for model_seed in range(1, 6):
    for fold_idx in range(3):
        # Declare model name and paths
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
        # Check if detection scores and outputs are already saved
        if os.path.isfile(os.path.join(model_load_path, 'val_detection_score_' + reverse_window_mode + '.pkl')) \
                and os.path.isfile(os.path.join(model_load_path, 'val_output_' + reverse_window_mode + '.pkl')):
            pass
        else:
            # Load model
            model = keras.models.load_model(os.path.join(model_load_path, 'model.keras'), custom_objects={
                "Sampling": Sampling,
                "TeVAE_Encoder": TeVAE_Encoder,
                "TeVAE_Decoder": TeVAE_Decoder,
                "MA": MA,
                "TeVAE": TeVAE,
            })
            val_detection_score = []
            val_output = []
            # Iterate over all validation time series
            for val_ts in tqdm(val_list):
                # Do inference on each validation time series in val_list. Key for score_function argument:
                # - tevae: 'negloglik'
                detection_score, output = ts_processor.inference(model, val_ts, window_size, score_function='negloglik')
                val_detection_score.append(detection_score.numpy())
                val_output.append(output)
            # Save detection scores and outputs
            ts_processor.dump_pickle(val_detection_score, os.path.join(model_load_path, 'val_detection_score_' + reverse_window_mode + '.pkl'))
            ts_processor.dump_pickle(val_output, os.path.join(model_load_path, 'val_output_' + reverse_window_mode + '.pkl'))

        # Process test data
        if os.path.isfile(os.path.join(model_load_path, 'test_detection_score_' + reverse_window_mode + '.pkl')) \
                and os.path.isfile(os.path.join(model_load_path, 'test_output_' + reverse_window_mode + '.pkl')):
            pass
        else:
            # Load model
            model = keras.models.load_model(os.path.join(model_load_path, 'model.keras'), custom_objects={
                "Sampling": Sampling,
                "TeVAE_Encoder": TeVAE_Encoder,
                "TeVAE_Decoder": TeVAE_Decoder,
                "MA": MA,
                "TeVAE": TeVAE,
            })
            test_detection_score = []
            test_output = []
            # Iterate over all test time series
            for test_ts in tqdm(test_list):
                # Do inference on each test time series in test_list. Key for score_function argument:
                # - tevae: 'negloglik'
                detection_score, output = ts_processor.inference(model, test_ts, window_size, score_function='negloglik')
                test_detection_score.append(detection_score.numpy())
                test_output.append(output)
            # Save detection scores and outputs
            ts_processor.dump_pickle(test_detection_score, os.path.join(model_load_path, 'test_detection_score_' + reverse_window_mode + '.pkl'))
            ts_processor.dump_pickle(test_output, os.path.join(model_load_path, 'test_output_' + reverse_window_mode + '.pkl'))
