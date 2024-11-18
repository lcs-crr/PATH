"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands

Original paper DOI:
"""

import numpy as np
import keras
import torch
import tensorflow as tf

kl = keras.layers
ko = keras.ops
td = torch.distributions

keras.saving.get_custom_objects().clear()

@keras.saving.register_keras_serializable(package="TeVAE")
class Sampling(keras.Layer):
    def __init__(self, seed, **kwargs):
        super().__init__()
        self.seed = seed
        self.seed_generator = keras.random.SeedGenerator(seed=self.seed)

    def call(self, inputs):
        z_mean, z_logvar = inputs
        eps = keras.random.normal(shape=keras.ops.shape(z_mean), seed=self.seed_generator)
        return z_mean + ko.exp(0.5 * z_logvar) * eps

    def get_config(self):
        config = super().get_config()
        config.update({
            "seed": self.seed
        })
        return config

    @classmethod
    def from_config(cls, config):
        return cls(**config)


@keras.saving.register_keras_serializable(package="TeVAE")
class KL_annealing(keras.callbacks.Callback):
    def __init__(self, annealing_epochs=25, annealing_type="normal", grace_period=25, start=1e-3, end=1e0):
        super(KL_annealing, self).__init__()
        self.annealing_epochs = annealing_epochs
        self.annealing_type = annealing_type
        self.grace_period = grace_period
        self.grace_period_idx = ko.maximum(0, grace_period - 1)  # Starting from 0
        self.start = start
        self.end = end
        if annealing_type in ["cyclical", "monotonic"]:
            self.beta_values = ko.linspace(start, end, annealing_epochs)

    def on_epoch_begin(self, epoch,logs=None):
        shifted_epochs = ko.maximum(0.0, epoch - self.grace_period_idx)
        if epoch < self.grace_period_idx or self.annealing_type == "normal":
            new_value = self.start
            self.model.beta.assign(new_value)
        elif self.annealing_type == "monotonic":
            new_value = self.beta_values[min(epoch, self.annealing_epochs - 1)]
            self.model.beta.assign(new_value)
        elif self.annealing_type == "cyclical":
            new_value = self.beta_values[int(shifted_epochs % self.annealing_epochs)]
            self.model.beta.assign(new_value)

    def get_config(self):
        return {
            "annealing_epochs": self.annealing_epochs,
            "annealing_type": self.annealing_type,
            "grace_period": self.grace_period,
            "start": self.start,
            "end": self.end,
        }

    @classmethod
    def from_config(cls, config):
        return cls(**config)


@keras.saving.register_keras_serializable(package="TeVAE")
class TeVAE_Encoder(keras.Model):
    def __init__(self, seq_len, latent_dim, features, hidden_units, seed, name=None):
        super(TeVAE_Encoder, self).__init__(name=name)
        self.seq_len = seq_len
        self.latent_dim = latent_dim
        self.features = features
        self.hidden_units = hidden_units
        self.seed = seed
        self.encoder = self.build_encoder()

    def build_encoder(self):
        enc_input = kl.Input(shape=(self.seq_len, self.features))
        enc_input = kl.GaussianNoise(0.01, seed=self.seed)(enc_input)
        bilstm = kl.Bidirectional(kl.LSTM(self.hidden_units*2, return_sequences=True, name="bilstm1"))(enc_input)
        bilstm = kl.Bidirectional(kl.LSTM(self.hidden_units, return_sequences=True, name="bilstm2"))(bilstm)
        z_mean = kl.TimeDistributed(kl.Dense(self.latent_dim, name="Z_mean"))(bilstm)
        z_logvar = kl.TimeDistributed(kl.Dense(self.latent_dim, name="Z_logvar"))(bilstm)
        z = Sampling(seed=self.seed)([z_mean, z_logvar])
        return keras.Model(enc_input, [z_mean, z_logvar, z], name="encoder")

    def call(self, inputs, **kwargs):
        return self.encoder(inputs, **kwargs)

    def get_config(self):
        config = super().get_config()
        config.update({
            "seq_len": self.seq_len,
            "latent_dim": self.latent_dim,
            "features": self.features,
            "hidden_units": self.hidden_units,
            "seed": self.seed,
        })
        return config

    @classmethod
    def from_config(cls, config):
        return cls(
            seq_len=config['seq_len'],
            latent_dim=config['latent_dim'],
            features=config['features'],
            hidden_units=config['hidden_units'],
            seed=config['seed'],
            name=config['name']
        )


@keras.saving.register_keras_serializable(package="TeVAE")
class TeVAE_Decoder(keras.Model):
    def __init__(self, seq_len, latent_dim, features, hidden_units, seed, name=None):
        super(TeVAE_Decoder, self).__init__(name=name)
        self.seq_len = seq_len
        self.latent_dim = latent_dim
        self.features = features
        self.hidden_units = hidden_units
        self.seed = seed
        self.decoder = self.build_decoder()

    def build_decoder(self):
        dec_input = kl.Input(shape=(self.seq_len, self.latent_dim))
        bilstm = kl.Bidirectional(kl.LSTM(self.hidden_units, return_sequences=True, name="bilstm3"))(dec_input)
        bilstm = kl.Bidirectional(kl.LSTM(self.hidden_units*2, return_sequences=True, name="bilstm4"))(bilstm)
        xhat_mean = kl.TimeDistributed(kl.Dense(self.features), name="Xhat_mean")(bilstm)
        xhat_logvar = kl.TimeDistributed(kl.Dense(self.features), name="Xhat_logvar")(bilstm)
        xhat = Sampling(seed=self.seed)([xhat_mean, xhat_logvar])
        return keras.Model(dec_input, [xhat_mean, xhat_logvar, xhat], name="decoder")

    def call(self, inputs, **kwargs):
        return self.decoder(inputs, **kwargs)

    def get_config(self):
        config = super().get_config()
        config.update({
            "seq_len": self.seq_len,
            "latent_dim": self.latent_dim,
            "features": self.features,
            "hidden_units": self.hidden_units,
            "seed": self.seed,
        })
        return config

    @classmethod
    def from_config(cls, config):
        return cls(
            seq_len=config['seq_len'],
            latent_dim=config['latent_dim'],
            features=config['features'],
            hidden_units=config['hidden_units'],
            seed=config['seed'],
            name=config['name']
        )


@keras.saving.register_keras_serializable(package="TeVAE")
class MA(keras.Model):
    def __init__(self, seq_len, latent_dim, key_dim, features, name=None):
        super(MA, self).__init__(name=name)
        self.seq_len = seq_len
        self.features = features
        self.latent_dim = latent_dim
        self.key_dim = key_dim
        self.ma = self.build_MA()

    def build_MA(self):
        attention = kl.MultiHeadAttention(
            num_heads=8,
            key_dim=self.key_dim,
            output_shape=self.latent_dim,
            name="C"
        )

        raw_input = kl.Input(shape=(self.seq_len, self.features))
        latent_input = kl.Input(shape=(self.seq_len, self.latent_dim))
        c = attention(query=raw_input, key=raw_input, value=latent_input)
        return keras.Model([raw_input, latent_input], c, name="MA")

    def call(self, inputs, **kwargs):
        return self.ma(inputs, **kwargs)

    def get_config(self):
        config = super().get_config()
        config.update({
            "seq_len": self.seq_len,
            "features": self.features,
            "latent_dim": self.latent_dim,
            "key_dim": self.key_dim,
        })
        return config

    @classmethod
    def from_config(cls, config):
        return cls(
            seq_len=config['seq_len'],
            latent_dim=config['latent_dim'],
            key_dim=config['key_dim'],
            features=config['features'],
            name=config['name']
        )

    
@keras.saving.register_keras_serializable(package="TeVAE")
class TeVAE(keras.Model):
    def __init__(self, encoder, decoder, ma, beta=1e0, name=None, **kwargs):
        super().__init__(name=name, **kwargs)
        self.encoder = encoder
        self.decoder = decoder
        self.ma = ma
        self.beta_tracker = keras.metrics.Mean(name="beta")
        self.total_loss_tracker = keras.metrics.Mean(name="total_loss")
        self.negloglik_loss_tracker = keras.metrics.Mean(name="rec_loss")
        self.kl_loss_tracker = keras.metrics.Mean(name="kl_loss")
        # Modifiable weight for KL-loss
        self.beta = keras.Variable(beta, trainable=False)  # Weight for KL-Loss, can be modified with a callback

    @property
    def metrics(self):
        return [
            self.beta_tracker,
            self.total_loss_tracker,
            self.negloglik_loss_tracker,
            self.kl_loss_tracker,
        ]

    def jax_loss_fn(self, x, xhat, xhat_mean, xhat_logvar, z_mean, z_logvar):
        pass

    def tensorflow_loss_fn(self, x, xhat, xhat_mean, xhat_logvar, z_mean, z_logvar):
        pass

    def torch_loss_fn(self, x, xhat, xhat_mean, xhat_logvar, z_mean, z_logvar):
        # Calculate negative log likelihood
        loglik = torch.distributions.MultivariateNormal(loc=xhat_mean, scale_tril=torch.diag_embed(torch.sqrt(torch.exp(xhat_logvar)))).log_prob(x)
        # Calculate KL divergence
        kl_loss =  td.kl.kl_divergence(
            torch.distributions.MultivariateNormal(loc=z_mean, scale_tril=torch.diag_embed(torch.sqrt(torch.exp(z_logvar)))),
            torch.distributions.MultivariateNormal(loc=torch.zeros_like(z_mean), scale_tril=torch.diag_embed(torch.ones_like(z_logvar)))
        )
        return torch.mean(torch.sum(-loglik, axis=1)), torch.mean(torch.sum(kl_loss, axis=1))

    def train_step(self, *args, **kwargs):
        if keras.backend.backend() == "jax":
            return self._jax_train_step(*args, **kwargs)
        elif keras.backend.backend() == "tensorflow":
            return self._tensorflow_train_step(*args, **kwargs)
        elif keras.backend.backend() == "torch":
            return self._torch_train_step(*args, **kwargs)

    def _jax_train_step(self, x):
        pass

    def _tensorflow_train_step(self, x):
        pass

    def _torch_train_step(self, x):
        # Zero the gradients
        self.zero_grad()
        # Forward pass of encoder and decoder
        z_mean, z_logvar, z = self.encoder(x, training=True)  # Get the encoded values
        c = self.ma([x, z], training=True)
        xhat_mean, xhat_logvar, xhat = self.decoder(c, training=True)  # Decode the latent representation
        # Compute loss
        negloglik, kl_div = self.torch_loss_fn(x, xhat, xhat_mean, xhat_logvar, z_mean, z_logvar)
        total_loss = negloglik + self.beta * kl_div
        # Backpropagation
        total_loss.backward()
        trainable_weights = [v for v in self.trainable_weights]
        gradients = [v.value.grad for v in trainable_weights]
        # Update weights
        with torch.no_grad():
            self.optimizer.apply(gradients, trainable_weights)
        # Update loss trackers
        self.beta_tracker.update_state(self.beta)
        self.total_loss_tracker.update_state(total_loss.item())
        self.negloglik_loss_tracker.update_state(negloglik.item())
        self.kl_loss_tracker.update_state(kl_div.item())
        return {
            "beta": self.beta_tracker.result(),
            "loss": self.total_loss_tracker.result(),
            "rec_loss": self.negloglik_loss_tracker.result(),
            "kl_loss": self.kl_loss_tracker.result(),
        }


    def test_step(self, *args, **kwargs):
        if keras.backend.backend() == "jax":
            return self._jax_test_step(*args, **kwargs)
        elif keras.backend.backend() == "tensorflow":
            return self._tensorflow_test_step(*args, **kwargs)
        elif keras.backend.backend() == "torch":
            return self._torch_test_step(*args, **kwargs)

    def _jax_test_step(self, x):
        pass

    def _tensorflow_test_step(self, x):
        pass

    def _torch_test_step(self, x):
        # Forward pass of encoder and decoder
        z_mean, z_logvar, z = self.encoder(x, training=False)  # Get the encoded values
        c = self.ma([x, z_mean], training=True)
        xhat_mean, xhat_logvar, xhat = self.decoder(c, training=False)  # Decode the latent representation
        # Compute loss
        negloglik, kl_div = self.torch_loss_fn(x, xhat, xhat_mean, xhat_logvar, z_mean, z_logvar)
        total_loss = negloglik + self.beta * kl_div
        # Update loss trackers
        self.total_loss_tracker.update_state(total_loss.item())
        self.negloglik_loss_tracker.update_state(negloglik.item())
        self.kl_loss_tracker.update_state(kl_div.item())
        return {m.name: m.result() for m in self.metrics if m.name == 'rec_loss'}


    def call(self, x, *args, **kwargs):
        # Forward pass of encoder and decoder
        z_mean, z_logvar, z = self.encoder(x, training=False)
        c = self.ma([x, z_mean], training=True)
        xhat_mean, xhat_logvar, xhat = self.decoder(c, training=False)
        return xhat_mean, xhat_logvar, xhat, z_mean, z_logvar, z

    def get_config(self):
        config = super().get_config()
        config.update({
            "encoder": self.encoder.get_config(),
            "decoder": self.decoder.get_config(),
            "ma": self.ma.get_config(),
            "beta": float(self.beta.numpy()),
        })
        return config

    @classmethod
    def from_config(cls, config):
        encoder = TeVAE_Encoder.from_config(config["encoder"])
        decoder = TeVAE_Decoder.from_config(config["decoder"])
        ma = MA.from_config(config["ma"])
        return cls(encoder=encoder, decoder=decoder, ma=ma, beta=config["beta"])

if __name__ == "__main__":
    pass
