"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os

# os.environ["CUDA_VISIBLE_DEVICES"] = "1"
os.environ['TF_CPP_MIN_LOG_LEVEL'] = '3'
import random
import numpy as np
import tensorflow as tf
from tqdm import tqdm
from dotenv import dotenv_values
from utilities import inference_class

# Declare constants
SEED = 1
AD_MODE = 'us'  # or 'ss'
MODEL_NAME = 'tevae'  # or 'tcnae', 'omnianomaly', 'sisvae', 'lwvae'

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

        inferencer = inference_class.Inferencer(
            model_path=model_load_path,
            window_size=256,
            window_shift=1,
        )

        # Load data
        val_list = inferencer.load_pickle(os.path.join(data_load_path, 'val.pkl'))
        test_list = inferencer.load_pickle(os.path.join(data_load_path, 'test.pkl'))

        # Check if detection scores and outputs are already saved else do inference
        subset_name = 'val'
        val_detection_score_list, val_output = inferencer.inference_list(
            val_list,
            subset_name=subset_name,
            save_inference_results=True
        )

        # Check if detection scores and outputs are already saved else do inference
        subset_name = 'test'
        test_detection_score_list, test_output = inferencer.inference_list(
            test_list,
            subset_name=subset_name,
            save_inference_results=True
        )
