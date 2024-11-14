"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands
"""

import os
import pickle
import random
import numpy as np
import tensorflow as tf
from dotenv import load_dotenv, dotenv_values
from model_garden.klAnnealing import *
from model_garden.tevae import *
from model_garden.tcnae import *
from model_garden.omnianomaly import *
from model_garden.sisvae import *
from model_garden.lwvae import *

strategy = tf.distribute.MirroredStrategy()
print('Number of devices: {}'.format(strategy.num_replicas_in_sync))

for seed in range(1, 6):
    # Declare constants
    AD_MODE = 'us'  # or 'ss'
    MODEL_NAME = 'tevae'  # or 'tcnae', 'omnianomaly', 'sisvae', 'lwvae'

    # Set fixed seed for random operations
    random.seed(seed)
    np.random.seed(seed)
    tf.random.set_seed(seed)
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
        model_save_path = os.path.join(model_path, 'tevae' + '_' + AD_MODE + '_' + str(fold_idx) + '_' + str(seed))

        # Load data
        tfdata_train = tf.data.Dataset.load(os.path.join(data_load_path, 'fold_' + str(fold_idx), 'train'))
        tfdata_val = tf.data.Dataset.load(os.path.join(data_load_path, 'fold_' + str(fold_idx), 'val'))

        tfdata_train = tfdata_train.unbatch().batch(1024).cache()
        tfdata_val = tfdata_val.unbatch().batch(1024).cache()

        # Establish callbacks
        early_stopping = tf.keras.callbacks.EarlyStopping(
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
        with strategy.scope():
            if MODEL_NAME == 'tevae':
                latent_dim = features // 2
                key_dim = features // 8
                hidden_units = features * 16
                encoder = TeVAE_Encoder(seq_len=window_size, latent_dim=latent_dim, features=features, hidden_units=hidden_units, seed=seed)
                decoder = TeVAE_Decoder(seq_len=window_size, latent_dim=latent_dim, features=features, hidden_units=hidden_units, seed=seed)
                ma = MA(seq_len=window_size, latent_dim=latent_dim, key_dim=key_dim, features=features)
                model = TeVAE(encoder, decoder, ma)
                callback_list = [early_stopping, annealing]

            elif MODEL_NAME == 'tcnae':
                latent_dim = 4
                hidden_units = 16
                dilations = [1, 2, 4, 8, 16, 32, 64]
                kernel_size = 8
                padding = 'same'
                sampling_factor = 32
                encoder = TCNAE_Encoder(seq_len=window_size, latent_dim=latent_dim, features=features, hidden_units=hidden_units, dilations=dilations, kernel_size=kernel_size, padding=padding, sampling_factor=sampling_factor, seed=seed)
                decoder = TCNAE_Decoder(seq_len=window_size, latent_dim=latent_dim, features=features, hidden_units=hidden_units, dilations=dilations, kernel_size=kernel_size, padding=padding, sampling_factor=sampling_factor, seed=seed)
                model = TCNAE(encoder, decoder)
                callback_list = [early_stopping]

            elif MODEL_NAME == 'omnianomaly':
                latent_dim = 3
                encoder = OmniAnomaly_Encoder(seq_len=window_size, latent_dim=latent_dim, features=features, seed=seed)
                decoder = OmniAnomaly_Decoder(seq_len=window_size, latent_dim=latent_dim, features=features, seed=seed)
                model = OmniAnomaly(encoder, decoder)
                callback_list = [early_stopping]

            elif MODEL_NAME == 'sisvae':
                latent_dim = 40
                encoder = SISVAE_Encoder(seq_len=window_size, latent_dim=latent_dim, features=features, seed=seed)
                decoder = SISVAE_Decoder(seq_len=window_size, latent_dim=latent_dim, features=features, seed=seed)
                model = SISVAE(encoder, decoder)
                callback_list = [early_stopping]

            elif MODEL_NAME == 'lwvae':
                latent_dim = 64
                encoder = LWVAE_Encoder(seq_len=window_size, latent_dim=latent_dim, features=features, seed=seed)
                decoder = LWVAE_Decoder(seq_len=window_size, latent_dim=latent_dim, features=features, seed=seed)
                model = LWVAE(encoder, decoder)
                callback_list = [early_stopping]

            optimiser = tf.keras.optimizers.Adam(amsgrad=True)
            model.compile(optimizer=optimiser)

        # Fit vae model
        history = model.fit(tfdata_train,
                            epochs=10000,
                            callbacks=callback_list,
                            validation_data=tfdata_val,
                            verbose=2
                            )

        # Run and save model
        model.predict(tf.random.normal((32, window_size, features)), verbose=0)
        model.save(model_save_path)
        with open(os.path.join(model_save_path, 'final_loss.txt'), 'x') as f:
            f.write(str(min(history.history['val_rec_loss'])))
        tf.keras.backend.clear_session()
