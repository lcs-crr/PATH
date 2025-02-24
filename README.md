# PATH: A Dataset for Evaluating Online Anomaly Detection Approaches for Discrete Multivariate Time Series

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT) [![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.13255120.svg)](https://doi.org/10.5281/zenodo.13255120)

We propose a diverse, extensive, and non-trivial data set generated via state-of-the-art simulation tools that reflect realistic behaviour of an automotive powertrain, including its multivariate, dynamic and variable-state properties. 
To cater for both unsupervised and semi-supervised anomaly detection settings, as well as time series generation and forecasting, different versions of the data set are made available, where training and test subsets are offered in contaminated and clean versions, depending on the task.
The preprint of the paper corresponding to this repository can be found on [arXiv](https://arxiv.org/abs/2411.13951).

## Simulation
The multivariate time series composing the proposed data set are generated using a Simulink simulation model and are provided so you don't have to simulate yourself. 

Simulation is both financially and computationally expensive, but if you do really want to simulate yourself, find relevant scripts for data set generation under `simulation_model/EV` folder, which should be set as the working directory:
- `simulation_script_normal_parallel.m` performs the simulation of normal sequences
- `simulation_script_anomaly_parallel.m` performs the simulation of anomalous sequences

The scripts are written to leverage multi-core CPUs to run multiple simulations at once.

Each simulation yields a multivariate time series and is saved as a `.mat` file in the format `A_B_C_D_E.mat`, where:
- `A` = drive cycle
- `B` = battery temperature in °C multiplied by 10
- `C` = battery state of charge in % multiplied by 10
- `D` = label (anomaly type, control or normal)
- `E` = start of anomaly, if applicable 

Note that to generate the data set, [Matlab](https://www.mathworks.com/products/matlab.html) and [Simulink](https://www.mathworks.com/products/simulink.html) as well as the following toolboxes are required:
- [Parallel Computing Toolbox](https://de.mathworks.com/products/parallel-computing.html)
- [Statistics and Machine Learning Toolbox](https://de.mathworks.com/products/statistics.html)
- [Powertrain Blockset](https://de.mathworks.com/products/powertrain.html)
- [Simscape](https://de.mathworks.com/products/simscape.html)
- [Simscape Fluids](https://de.mathworks.com/products/simscape-fluids.html)
- [Simscape Electric Plant](https://www.mathworks.com/products/simscape-electrical.html)

For simulation `Matlab 23.2` was used, which applies to Simulink and all toolboxes as well. After simulation all processes (data processing, model training, inference, evaluation) are done using `Python 3.10`. 

## Data Set Download
The data set consists of three states, each with a folder associated with it:
- `0_simulation`, where the raw simulation output is saved
- `1_postsim`, where files are saved after post-simulation processing 
- `2_preprocessed`, where files are saved after downsampling, standardising, and windowing

The `0_simulation` and `1_postsim` folders can be found on [Zenodo](https://doi.org/10.5281/zenodo.13255120). The `0_simulation` folder consists of the raw `.mat` files, each representing a multivariate time series, whereas the `1_postsim folder` consists of the following pickle files:
- `normal.pkl`, which contains all nominal sequences 
- `anomalous.pkl`, which contains all anomalous sequences 
- `control.pkl`, which contains all control-counterparts to anomalous.pkl
- `training.pkl`, which contains all pre-determined folds for training
- `training_clean.pkl`, a version of training.pkl without anomalous sequences
- `testing.pkl`, which contains all pre-determined folds for testing
- `testing_clean.pkl`, a version of testing.pkl without anomalous sequences

Each pickle file is a list of several 2D NumPy arrays, each representing a multivariate time series. The name of the corresponding `.mat` file (and, by extension, the label) is present in the metadata. For NumPy object `array`, it can be read by calling `array.dtype.metadata['file_name']`.

We decided to omit the data belonging to the `2_preprocessed` folder as the contents are specific to the TensorFlow data pipeline and the same data host limitations would apply. If needed, the contents can be obtained by running `1_data.py`; for more details, see the **Reproducing Results** section below.

## Reproducing Results 
Working scripts for `OmniAnomaly`, `TCN-AE`, `SISVAE`, `LW-VAE`, and `TeVAE` can be found in the `src` folder: 
- `0_postsim.py` performs post simulation processing (trimming, adding noise, comparing with control simulations, splitting into folds and training/test subsets) on outputs of the simulation (`.mat` files). This script is only relevant if you want to generate the data set yourself and want to process it after simulation.
- `1_data.py` performs data processing prior to training (downsampling, standardising, windowing, converting to tf.data).
- `2_training.py` performs model training.
- `3_inference.py` does the inference on the validation and testing subsets.
- `4_evaluation.py` evaluates the results from inference.

### :exclamation: **Important** :exclamation: **Users that do not wish to generate the data set themselves, can skip `0_postsim.py` and use the `train(_clean).pkl` and `test(_clean).pkl` pickle files in the `1_postsim` data folder.** ### 

The remaining scripts can be executed in that order to obtain the results in the paper.

Utility functions can be found in the `utilities` folder in this repository. It contains all the classes and the corresponding methods used throughout this work.

Custom model classes for each of the tested approaches can be found in the `model_garden` folder in this repository.

Typically, a `.env` file should be excluded from version control, though we have added a dummy one (`.env_dummy`) to illustrate the file structure.

`requirements.txt` (venv) and `pyprojects.toml` (uv) contain all libraries used.

`TSADIS` requires a separate environment on Python 3.9 due to incompatibility with Pyton 3.10. See README.md in the `tsadis` folder in this repository for more details.

## Questions?
If any questions or doubts persist, feel free to contact `Lucas Correia` via [Email](mailto:l.ferreira.correia@liacs.leidenuniv.nl) or [LinkedIn](https://www.linkedin.com/in/lcs-crr/).
