"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os
os.environ["KERAS_BACKEND"] = "torch"
import pickle
import random
import keras
import numpy as np
import tensorflow as tf
from dotenv import load_dotenv, dotenv_values
# from model_garden.klAnnealing import *
from model_garden.tevae_keras3 import *

for seed in range(1, 6):
    # Declare constants
    AD_MODE = 'us'  # or 'ss'
    MODEL_NAME = 'tevae'  # or 'tcnae', 'omnianomaly', 'sisvae', 'lwvae'

    # Set fixed seed for random operations
    random.seed(seed)
    np.random.seed(seed)
    keras.utils.set_random_seed(seed)
    os.environ['PYTHONHASHSEED'] = str(seed)

    # Load variables in .env file
    config = dotenv_values("../.env")

    # Load directory paths from .env file
    data_path = config['data_path']
    model_path = config['model_path']

    for fold_idx in range(3):
        # Declare model name and paths
        if AD_MODE == 'us':
            data_load_path = os.path.join(data_path, '2_preprocessed', 'unsupervised')
        else:
            data_load_path = os.path.join(data_path, '2_preprocessed', 'semisupervised')
        model_save_path = os.path.join(model_path, MODEL_NAME + '_' + AD_MODE + '_' + str(fold_idx) + '_' + str(seed))

        # Load data
        tfdata_train = tf.data.Dataset.load(os.path.join(data_load_path, 'fold_' + str(fold_idx), 'train')).take(256)
        tfdata_val = tf.data.Dataset.load(os.path.join(data_load_path, 'fold_' + str(fold_idx), 'val')).take(256)

        tfdata_train = tfdata_train.unbatch().batch(128).cache()
        tfdata_val = tfdata_val.unbatch().batch(128).cache()

        # Establish callbacks
        early_stopping = keras.callbacks.EarlyStopping(
            monitor='val_rec_loss',
            mode='min',
            verbose=1,
            patience=250,
            restore_best_weights=True,
        )

        # KL Annealing
        annealing = KL_annealing(
            annealing_epochs=25,
            annealing_type="cyclical",
            grace_period=25,
            start=1e-3,
            end=1e-0,
        )

        # Define model
        window_size = tfdata_train.element_spec.shape[1]
        features = tfdata_train.element_spec.shape[2]
        latent_dim = features // 2
        key_dim = features // 8
        hidden_units = features * 16
        encoder = TeVAE_Encoder(seq_len=window_size, latent_dim=latent_dim, features=features, hidden_units=hidden_units, seed=seed)
        decoder = TeVAE_Decoder(seq_len=window_size, latent_dim=latent_dim, features=features, hidden_units=hidden_units, seed=seed)
        ma = MA(seq_len=window_size, latent_dim=latent_dim, key_dim=key_dim, features=features)
        model = TeVAE(encoder, decoder, ma)
        callback_list = [early_stopping, annealing]

        optimiser = keras.optimizers.Adam(amsgrad=True)
        model.compile(optimizer=optimiser)

        # Fit vae model
        history = model.fit(tfdata_train,
                            epochs=10000,
                            callbacks=callback_list,
                            validation_data=tfdata_val,
                            verbose=1
                            )

        # Save model
        model.save(model_save_path + '.keras')
        with open(os.path.join(model_save_path, 'final_loss.txt'), 'x') as f:
            f.write(str(min(history.history['val_rec_loss'])))
        keras.backend.clear_session()

        # model_loaded = keras.models.load_model("tevae_model.keras", custom_objects={
        #     "Sampling": Sampling,
        #     "TeVAE_Encoder": TeVAE_Encoder,
        #     "TeVAE_Decoder": TeVAE_Decoder,
        #     "MA": MA,
        #     "TeVAE": TeVAE,
        # })
