This folder contains the main working scripts for data preprocessing, training, inference and evaluation:
- `0_postsim.py` performs post simulation processing (trimming, adding noise, comparing with control simulations, splitting into folds+train/test) on outputs of the simulation (.mat files). This script is only relevant if you want to generate the data set yourself and want to process it after simulation.
- `1_data.py` performs data processing prior to training (downsampling, standardising, windowing, converting to tf.data).
- `2_training.py` performs model training.
- `3_inference.py` does the inference on the validation and testing subsets.
- `4_evaluation.py` evaluates the results from inference.
