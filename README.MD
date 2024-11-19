### The `keras3` branch is **experimental** and not yet ready for use.

It is a reimplementation of the original MAPS-AD codebase in Keras 3, which unlike Keras 2 supports `PyTorch` and `JAX` in addition to just `TensorFlow`.

So far, only `TeVAE` with the `PyTorch` backend is implemented, since `TensorFlow Probability` does not support Keras 3, hindering the use of the `TensorFlow` backend.
`JAX`-compatible code is planned for the future.

Also, `keras.distributed` only supports the `JAX` backend for now, hence model training can only run on a single GPU.