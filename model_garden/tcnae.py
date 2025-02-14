"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands

Original paper DOI: 10.1016/j.asoc.2021.107751
"""

import numpy as np
import tensorflow as tf

tfkl = tf.keras.layers


@tf.keras.saving.register_keras_serializable(package="TCNAE")
class TCNAE(tf.keras.Model):
    def __init__(
            self,
            encoder: tf.keras.Model,
            decoder: tf.keras.Model,
            name: str = None,
            **kwargs,
    ) -> None:
        super(TCNAE, self).__init__(name=name, **kwargs)
        self.encoder = encoder
        self.decoder = decoder
        self.loss_tracker = tf.keras.metrics.Mean(name="rec_loss")

    @staticmethod
    def rec_fn(x, x_hat, reduce=True):
        if reduce:
            return tf.reduce_sum(tf.losses.LogCosh('none')(x, x_hat), axis=-1)
        else:
            return tf.losses.LogCosh('none')(x, x_hat)

    def train_step(self, x, **kwargs):
        with tf.GradientTape() as tape:
            # Forward pass through models
            z = self.encoder(x)
            x_hat = self.decoder(z)
            loss = self.rec_fn(x, x_hat)
        # Calculate gradients in backward pass
        grads = tape.gradient(loss, self.trainable_weights)
        # Apply gradients
        self.optimizer.apply_gradients(zip(grads, self.trainable_weights))
        # Track losses
        self.loss_tracker.update_state(loss)
        return {
            "rec_loss": self.loss_tracker.result(),
        }

    def test_step(self, x, **kwargs):
        # Forward pass through encoder
        z = self.encoder(x, training=False)
        x_hat = self.decoder(z, training=False)
        loss = self.rec_fn(x, x_hat)
        self.loss_tracker.update_state(loss)
        return {m.name: m.result() for m in self.metrics}

    @property
    def metrics(self):
        return [
            self.loss_tracker
        ]

    @tf.function
    def call(self, x, **kwargs):
        z = self.encoder(x, training=False)
        x_hat = self.decoder(z, training=False)
        return x_hat, z

    def get_config(self):
        config = super().get_config()
        config.update({
            "encoder": self.encoder.get_config(),
            "decoder": self.decoder.get_config(),
        })
        return config

    @classmethod
    def from_config(cls, config, **kwargs):
        encoder = TCNAE_Encoder.from_config(config["encoder"])
        decoder = TCNAE_Decoder.from_config(config["decoder"])
        return cls(encoder=encoder, decoder=decoder)


@tf.keras.saving.register_keras_serializable(package="TCNAE")
class TCNAE_Encoder(tf.keras.Model):
    def __init__(
            self,
            seq_len: int,
            latent_dim: int,
            features: int,
            hidden_units: int,
            dilations: list,
            kernel_size: int,
            padding: str,
            sampling_factor: int,
            seed: int,
            name: str = None,
    ) -> None:
        super(TCNAE_Encoder, self).__init__(name=name)
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
        for diltation_size in self.dilations:
            e = tfkl.Conv1D(filters=self.hidden_units * 4, kernel_size=self.kernel_size, activation="relu", padding=self.padding, dilation_rate=diltation_size)(e)
            e = tfkl.Conv1D(filters=self.hidden_units, kernel_size=1, activation="relu", padding=self.padding)(e)
            dil_layers.append(e)
        e = tfkl.Concatenate(axis=-1)(dil_layers)
        enc_flattened = tfkl.Conv1D(filters=self.latent_dim, kernel_size=self.kernel_size, activation="relu", padding=self.padding)(e)
        enc_output = tfkl.MaxPooling1D(pool_size=self.sampling_factor, strides=None, padding='valid')(enc_flattened)
        return tf.keras.Model(enc_input, enc_output)

    @tf.function
    def call(self, x, **kwargs):
        return self.encoder(x, **kwargs)

    def get_config(self):
        config = super().get_config()
        config.update({
            "seq_len": self.seq_len,
            "latent_dim": self.latent_dim,
            "features": self.features,
            "hidden_units": self.hidden_units,
            "dilations": self.dilations,
            "kernel_size": self.kernel_size,
            "padding": self.padding,
            "sampling_factor": self.sampling_factor,
            "seed": self.seed,
            "name": self.name,
        })
        return config

    @classmethod
    def from_config(cls, config, **kwargs):
        return cls(
            seq_len=config['seq_len'],
            latent_dim=config['latent_dim'],
            features=config['features'],
            hidden_units=config['hidden_units'],
            dilations=config['dilations'],
            kernel_size=config['kernel_size'],
            padding=config['padding'],
            sampling_factor=config['sampling_factor'],
            seed=config['seed'],
            name=config['name']
        )


@tf.keras.saving.register_keras_serializable(package="TCNAE")
class TCNAE_Decoder(tf.keras.Model):
    def __init__(
            self,
            seq_len: int,
            latent_dim: int,
            features: int,
            hidden_units: int,
            dilations: list,
            kernel_size: int,
            padding: str,
            sampling_factor: int,
            seed: int,
            name: str = None,
    ) -> None:
        super(TCNAE_Decoder, self).__init__(name=name)
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
        for dilation_size in reversed(self.dilations):
            d = tfkl.Conv1DTranspose(filters=self.hidden_units * 4, kernel_size=self.kernel_size, activation="relu", padding=self.padding, dilation_rate=dilation_size)(d)
            d = tfkl.Conv1DTranspose(filters=self.hidden_units, kernel_size=1, activation="relu", padding=self.padding)(d)
            dil_layers.append(d)
        d = tfkl.Concatenate(axis=-1)(dil_layers)
        dec_output = tfkl.Conv1D(filters=self.features, kernel_size=1, activation='linear', padding=self.padding)(d)
        return tf.keras.Model(dec_input, dec_output)

    @tf.function
    def call(self, inputs, **kwargs):
        return self.decoder(inputs, **kwargs)

    def get_config(self):
        config = super().get_config()
        config.update({
            "seq_len": self.seq_len,
            "latent_dim": self.latent_dim,
            "features": self.features,
            "hidden_units": self.hidden_units,
            "dilations": self.dilations,
            "kernel_size": self.kernel_size,
            "padding": self.padding,
            "sampling_factor": self.sampling_factor,
            "seed": self.seed,
            "name": self.name,
        })
        return config

    @classmethod
    def from_config(cls, config, **kwargs):
        return cls(
            seq_len=config['seq_len'],
            latent_dim=config['latent_dim'],
            features=config['features'],
            hidden_units=config['hidden_units'],
            dilations=config['dilations'],
            kernel_size=config['kernel_size'],
            padding=config['padding'],
            sampling_factor=config['sampling_factor'],
            seed=config['seed'],
            name=config['name']
        )


if __name__ == "__main__":
    pass
