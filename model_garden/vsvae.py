"""
Lucas Correia
LIACS | Leiden University
Einsteinweg 55 | 2333 CC Leiden | The Netherlands

Original paper DOI: 10.1109/ICMLA.2018.00207
"""

import tensorflow as tf
import tensorflow_probability as tfp

tfkl = tf.keras.layers
tfd = tfp.distributions


@tf.keras.saving.register_keras_serializable(package="VSVAE")
class KLAnnealing(tf.keras.callbacks.Callback):
    def __init__(
            self,
            annealing_epochs: int = 25,
            annealing_type: str = "normal",
            grace_period: int = 25,
            start: float = 1e-3,
            end: float = 1e0
    ) -> None:
        super(KLAnnealing, self).__init__()
        self.annealing_epochs = annealing_epochs
        self.annealing_type = annealing_type
        self.grace_period = grace_period
        self.grace_period_idx = tf.math.maximum(0.0, grace_period - 1)  # Starting from 0
        self.start = start
        self.end = end
        if annealing_type in ["cyclical", "monotonic"]:
            self.beta_values = tf.linspace(start, end, annealing_epochs)

    def on_epoch_begin(self, epoch, logs=None):
        shifted_epochs = tf.math.maximum(0.0, epoch - self.grace_period_idx)
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


@tf.keras.saving.register_keras_serializable(package="VSVAE")
class VSVAE(tf.keras.Model):
    def __init__(
            self,
            encoder: tf.keras.Model,
            decoder: tf.keras.Model,
            vs: tf.keras.Model,
            beta: float = 1.0,
            att_beta: float = 0.01,
            name: str = None,
            **kwargs,
    ) -> None:
        super(VSVAE, self).__init__(name=name, **kwargs)
        self.encoder = encoder
        self.decoder = decoder
        self.vs = vs
        self.beta_tracker = tf.keras.metrics.Mean(name="beta")
        self.loss_tracker = tf.keras.metrics.Mean(name="loss")
        self.rec_loss_tracker = tf.keras.metrics.Mean(name="rec_loss")
        self.kl_loss_tracker = tf.keras.metrics.Mean(name="kl_loss")
        self.att_loss_tracker = tf.keras.metrics.Mean(name="att_loss")
        self.beta = tf.Variable(beta, trainable=False)  # Weight for KL-Loss, can be modified with a callback
        self.att_beta = tf.constant(att_beta)  # Is not modified

    @staticmethod
    def rec_fn(x, xhat_params, reduce=True):
        xhat_mean, xhat_logvar = xhat_params
        # Configure distribution with output parameters
        output_dist = tfd.Laplace(loc=xhat_mean, scale=tf.sqrt(tf.math.exp(xhat_logvar)))
        # Calculate log probability of input data given output distribution
        loglik_loss = output_dist.log_prob(x)
        if reduce:
            return -tf.reduce_sum(loglik_loss, axis=(-1, -2))
        else:
            return -loglik_loss

    @staticmethod
    def kldiv_fn(z_params, reduce=True):
        z_mean, z_logvar = z_params
        # Configure distribution with latent parameters
        latent_dist = tfd.Normal(loc=z_mean, scale=tf.sqrt(tf.math.exp(z_logvar)))
        # Calculate KL-Divergence between latent distribution and standard Gaussian
        kl_loss = latent_dist.kl_divergence(
            tfd.Normal(loc=tf.zeros_like(z_mean), scale=tf.ones_like(z_logvar))
        )
        if reduce:
            return tf.reduce_sum(kl_loss, axis=(-1, -2))
        else:
            return kl_loss

    @staticmethod
    def att_fn(att_params, reduce=True):
        a_mean, a_logvar = att_params
        # Configure distribution with latent parameters
        latent_dist = tfd.Normal(loc=a_mean, scale=tf.sqrt(tf.math.exp(a_logvar)))
        # Calculate KL-Divergence between latent distribution and standard Gaussian
        att_loss = latent_dist.kl_divergence(
            tfd.Normal(loc=tf.zeros_like(a_mean), scale=tf.ones_like(a_logvar))
        )
        if reduce:
            return tf.reduce_sum(att_loss, axis=(-1, -2))
        else:
            return att_loss

    def train_step(self, x, **kwargs):
        with tf.GradientTape() as tape:
            # Forward pass through encoder
            z_mean, z_logvar, z, states = self.encoder(x, training=True)
            # Forward pass through VS
            a_mean, a_logvar, a = self.vs(states, training=True)
            # Forward pass through decoder
            xhat_mean, xhat_logvar, xhat = self.decoder([z, a], training=True)
            # Calculate losses from parameters
            rec_loss = self.rec_fn(x, [xhat_mean, xhat_logvar])
            kl_loss = self.kldiv_fn([z_mean, z_logvar])
            att_loss = self.att_fn([a_mean, a_logvar])
            # Calculate total loss from different losses
            loss = rec_loss + self.beta * (kl_loss + self.att_beta * att_loss)
        # Calculate gradients in backward pass
        grads = tape.gradient(loss, self.trainable_weights)
        # Apply gradients
        self.optimizer.apply_gradients(zip(grads, self.trainable_weights))
        # Track losses
        self.beta_tracker.update_state(self.beta)
        self.loss_tracker.update_state(loss)
        self.rec_loss_tracker.update_state(rec_loss)
        self.kl_loss_tracker.update_state(kl_loss)
        self.att_loss_tracker.update_state(att_loss)
        return {
            "beta": self.beta_tracker.result(),
            "loss": self.loss_tracker.result(),
            "rec_loss": self.rec_loss_tracker.result(),
            "kl_loss": self.kl_loss_tracker.result(),
            "att_loss": self.att_loss_tracker.result(),
        }

    def test_step(self, x, **kwargs):
        # Forward pass through encoder
        z_mean, z_logvar, z, states = self.encoder(x, training=False)
        # Forward pass through VS
        a_mean, a_logvar, a = self.vs(states, training=False)
        # Forward pass through decoder
        xhat_mean, xhat_logvar, xhat = self.decoder([z, a], training=False)
        # Calculate losses from parameters
        rec_loss = self.rec_fn(x, [xhat_mean, xhat_logvar])
        kl_loss = self.kldiv_fn([z_mean, z_logvar])
        att_loss = self.att_fn([a_mean, a_logvar])
        loss = rec_loss + self.beta * (kl_loss + self.att_beta * att_loss)
        self.loss_tracker.update_state(loss)
        self.rec_loss_tracker.update_state(rec_loss)
        self.kl_loss_tracker.update_state(kl_loss)
        self.att_loss_tracker.update_state(att_loss)
        return {m.name: m.result() for m in self.metrics if m.name == 'rec_loss'}

    @property
    def metrics(self):
        return [
            self.beta_tracker,
            self.loss_tracker,
            self.rec_loss_tracker,
            self.kl_loss_tracker,
            self.att_loss_tracker,
        ]

    @tf.function
    def call(self, x, **kwargs):
        z_mean, z_logvar, z, states = self.encoder(x, training=False)
        a_mean, a_logvar, a = self.vs(states, training=False)
        xhat_mean, xhat_logvar, xhat = self.decoder([z, a], training=False)
        return xhat_mean, xhat_logvar, xhat, z_mean, z_logvar, z, a

    def get_config(self):
        config = super().get_config()
        config.update({
            "encoder": self.encoder.get_config(),
            "decoder": self.decoder.get_config(),
            "vs": self.vs.get_config(),
            "beta": float(self.beta.numpy()),
            "att_beta": float(self.att_beta.numpy()),
        })
        return config

    @classmethod
    def from_config(cls, config, **kwargs):
        encoder = VSVAE_Encoder.from_config(config["encoder"])
        decoder = VSVAE_Decoder.from_config(config["decoder"])
        vs = VS.from_config(config["vs"])
        return cls(encoder=encoder, decoder=decoder, vs=vs, beta=config["beta"], att_beta=config["att_beta"])


@tf.keras.saving.register_keras_serializable(package="VSVAE")
class VSVAE_Encoder(tf.keras.Model):
    def __init__(
            self,
            seq_len: int,
            latent_dim: int,
            features: int,
            hidden_units: int,
            seed: int,
            name: str = None,
    ) -> None:
        super(VSVAE_Encoder, self).__init__(name=name)
        self.seq_len = seq_len
        self.latent_dim = latent_dim
        self.features = features
        self.hidden_units = hidden_units
        self.seed = seed
        self.encoder = self.build_encoder()

    def build_encoder(self):
        enc_input = tfkl.Input(shape=(self.seq_len, self.features))
        noised_input = tfkl.GaussianNoise(0.1, seed=self.seed)(enc_input)
        bilstm = tfkl.Bidirectional(tfkl.LSTM(self.hidden_units, return_sequences=True))(noised_input)
        bilstm = tfkl.ActivityRegularization(l1=1e-8)(bilstm)
        last_states = bilstm[:, -1, :]
        z_mean = tfkl.Dense(self.latent_dim)(last_states)
        z_logvar = tfkl.Dense(self.latent_dim)(last_states)
        output_dist = tfp.distributions.Normal(loc=0., scale=1.)
        eps = output_dist.sample(tf.shape(z_mean), seed=self.seed)
        z = z_mean + tf.sqrt(tf.math.exp(z_logvar)) * eps
        return tf.keras.Model(enc_input, [z_mean, z_logvar, z, bilstm])

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
            seed=config['seed'],
            name=config['name']
        )


@tf.keras.saving.register_keras_serializable(package="VSVAE")
class VSVAE_Decoder(tf.keras.Model):
    def __init__(
            self,
            seq_len: int,
            latent_dim: int,
            features: int,
            hidden_units: int,
            seed: int,
            name: str = None,
    ):
        super(VSVAE_Decoder, self).__init__(name=name)

        self.seq_len = seq_len
        self.latent_dim = latent_dim
        self.features = features
        self.hidden_units = hidden_units
        self.seed = seed
        self.decoder = self.build_decoder()

    def build_decoder(self):
        dec_input = tfkl.Input(shape=(self.latent_dim,))
        rep_input = tfkl.RepeatVector(self.seq_len)(dec_input)
        attention_input = tfkl.Input(shape=(self.seq_len, self.latent_dim))
        conc = tfkl.Concatenate(axis=-1)([rep_input, attention_input])
        bilstm = tfkl.Bidirectional(tfkl.LSTM(self.hidden_units, return_sequences=True))(conc)
        bilstm = tf.keras.layers.ActivityRegularization(l1=1e-8)(bilstm)
        xhat_mean = tfkl.TimeDistributed(tfkl.Dense(self.features))(bilstm)
        xhat_logvar = tfkl.TimeDistributed(tfkl.Dense(self.features))(bilstm)
        output_dist = tfp.distributions.Laplace(loc=0., scale=1.)
        eps = output_dist.sample(tf.shape(xhat_mean), seed=self.seed)
        xhat = xhat_mean + tf.sqrt(tf.math.exp(xhat_logvar)) * eps
        return tf.keras.Model([dec_input, attention_input], [xhat_mean, xhat_logvar, xhat])

    @tf.function
    def call(self, x, **kwargs):
        return self.decoder(x, **kwargs)

    def get_config(self):
        config = super().get_config()
        config.update({
            "seq_len": self.seq_len,
            "latent_dim": self.latent_dim,
            "features": self.features,
            "hidden_units": self.hidden_units,
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
            seed=config['seed'],
            name=config['name']
        )


@tf.keras.saving.register_keras_serializable(package="VSVAE")
class VS(tf.keras.Model):
    def __init__(
            self,
            seq_len: int,
            latent_dim: int,
            features: int,
            seed: int,
            name: str = None
    ):
        super(VS, self).__init__(name=name)
        self.seq_len = seq_len
        self.latent_dim = latent_dim
        self.features = features
        self.seed = seed
        self.vs = self.build_VS()

    def build_VS(self):
        vs_input = tfkl.Input(shape=(self.seq_len, 256))
        s_det = tf.divide(tf.matmul(vs_input, vs_input, transpose_b=True),
                          tf.sqrt(tf.cast(vs_input.shape[-1], 'float32')))
        a_det = tf.matmul(tf.nn.softmax(s_det), vs_input)
        a_mean = tfkl.TimeDistributed(tfkl.Dense(self.latent_dim))(a_det)
        a_logvar = tfkl.TimeDistributed(tfkl.Dense(self.latent_dim))(a_det)
        output_dist = tfp.distributions.Normal(loc=0., scale=1.)
        eps = output_dist.sample(tf.shape(a_mean), seed=self.seed)
        a = a_mean + tf.sqrt(tf.math.exp(a_logvar)) * eps
        return tf.keras.Model(vs_input, [a_mean, a_logvar, a])

    @tf.function
    def call(self, inputs, **kwargs):
        return self.vs(inputs, **kwargs)

    def get_config(self):
        config = super().get_config()
        config.update({
            "seq_len": self.seq_len,
            "latent_dim": self.latent_dim,
            "features": self.features,
            "name": self.name,
        })
        return config

    @classmethod
    def from_config(cls, config, **kwargs):
        return cls(
            seq_len=config['seq_len'],
            latent_dim=config['latent_dim'],
            features=config['features'],
            name=config['name']
        )


if __name__ == "__main__":
    pass
