"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands

Original paper DOI: 10.1016/j.asoc.2021.107751
"""

import numpy as np
import tensorflow as tf

tfkl = tf.keras.layers


class TCNAE(tf.keras.Model):
    def __init__(self, encoder, decoder):
        super(TCNAE, self).__init__()

        # Model
        self.encoder = encoder
        self.decoder = decoder

        # Metrics
        self.loss_tracker = tf.keras.metrics.Mean(name="rec_loss")

    @tf.function
    def loss_fn(self, X, X_hat):
        return tf.losses.LogCosh()(X, X_hat)

    # @tf.function
    def train_step(self, X):
        if isinstance(X, tuple):
            X = X[0]
        # Forward pass through models
        with tf.GradientTape() as tape:
            Z = self.encoder(X)
            X_hat = self.decoder(Z)
            loss = self.loss_fn(X, X_hat)
        # Calculate gradients in backward pass
        grads = tape.gradient(loss, self.trainable_weights)
        # Apply gradients
        self.optimizer.apply_gradients(zip(grads, self.trainable_weights))
        # Track losses
        self.loss_tracker.update_state(loss)
        return {
            "rec_loss": self.loss_tracker.result(),
        }

    # @tf.function
    def test_step(self, X):
        if isinstance(X, tuple):
            X = X[0]
        # Forward pass through encoder
        Z = self.encoder(X)
        X_hat = self.decoder(Z)
        loss = self.loss_fn(X, X_hat)
        self.loss_tracker.update_state(loss)
        return {m.name: m.result() for m in self.metrics}

    @property
    def metrics(self):
        return [
            self.loss_tracker
        ]

    @tf.function
    def call(self, X, **kwargs):
        Z = self.encoder(X)
        X_hat = self.decoder(Z)
        return X_hat, Z


class TCNAE_Encoder(tf.keras.Model):
    def __init__(self, seq_len, latent_dim, features, hidden_units, dilations, kernel_size, padding, sampling_factor, seed):
        super(TCNAE_Encoder, self).__init__()

        self.seq_len = seq_len
        self.latent_dim = latent_dim
        self.features = features
        self.hidden_units = hidden_units
        self.dilations = dilations
        self.kernel_size = kernel_size
        self.padding = padding
        self.sampling_factor = sampling_factor
        self.seed = seed
        self.encoder = self.build_encoder()

    def build_encoder(self):
        enc_input = tfkl.Input(shape=(self.seq_len, self.features))
        e = enc_input
        dil_layers = []
        for k in self.dilations:
            e = tfkl.Conv1D(filters=self.hidden_units*4, kernel_size=self.kernel_size, activation="relu", padding=self.padding, dilation_rate=k)(e)
            e = tfkl.Conv1D(filters=self.hidden_units, kernel_size=1, activation="relu", padding=self.padding)(e)
            dil_layers.append(e)
        e = tfkl.Concatenate(axis=-1)(dil_layers)
        enc_flat = tfkl.Conv1D(filters=self.latent_dim, kernel_size=self.kernel_size, activation="relu", padding=self.padding)(e)
        enc_output = tfkl.MaxPooling1D(pool_size=self.sampling_factor, strides=None, padding='valid')(enc_flat)
        return tf.keras.Model(enc_input, enc_output, name="encoder")

    @tf.function
    def call(self, inputs, **kwargs):
        return self.encoder(inputs, **kwargs)


class TCNAE_Decoder(tf.keras.Model):
    def __init__(self, seq_len, latent_dim, features, hidden_units, dilations, kernel_size, padding, sampling_factor, seed):
        super(TCNAE_Decoder, self).__init__()

        self.seq_len = seq_len
        self.latent_dim = latent_dim
        self.features = features
        self.hidden_units = hidden_units
        self.dilations = dilations
        self.kernel_size = kernel_size
        self.padding = padding
        self.sampling_factor = sampling_factor
        self.seed = seed
        self.decoder = self.build_decoder()

    def build_decoder(self):
        dec_input = tfkl.Input(shape=(self.seq_len // self.sampling_factor, self.latent_dim))
        d = tfkl.UpSampling1D(size=self.sampling_factor)(dec_input)
        dil_layers = []
        for k in reversed(self.dilations):
            d = tfkl.Conv1DTranspose(filters=self.hidden_units*4, kernel_size=self.kernel_size, activation="relu", padding=self.padding, dilation_rate=k)(d)
            d = tfkl.Conv1DTranspose(filters=self.hidden_units, kernel_size=1, activation="relu", padding=self.padding)(d)
            dil_layers.append(d)
        d = tfkl.Concatenate(axis=-1)(dil_layers)
        dec_output = tfkl.Conv1D(filters=self.features, kernel_size=1, activation='linear', padding=self.padding)(d)
        return tf.keras.Model(dec_input, dec_output, name="decoder")

    @tf.function
    def call(self, inputs, **kwargs):
        return self.decoder(inputs, **kwargs)


if __name__ == "__main__":
    pass
