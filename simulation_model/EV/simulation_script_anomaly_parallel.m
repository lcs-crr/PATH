% Lucas Correia
% LIACS | Leiden University
% Einsteinweg 55 | 2333 CC Leiden | The Netherlands

clear
clc

rng(1)

open("EV.prj")
load("Battery Cooling/CoolingParameters.mat")

save_path = "../../data/0_simulation";

cycle_name_list = {
    % 'FTP72'
    'FTP75'
    'US06'
    'SC03'
    'HWFET'
    'NYCC'
    'HUDDS'
    'LA92'
    % 'LA92Short'
    'IM240'
    'UDDS'
    'WLTP Class 1'
    'WLTP Class 2'
    'WLTP Class 3'
    % 'ECE R15 (single cycle)'
    % 'ECE R15 (four cycles)'
    % 'EUDC'
    % 'ECE Extra-Urban Driving Cycle (Low Powered Vehicles)'
    % 'NEDC'
    % 'ADAC BAB 130'
    'Artemis Urban'
    'Artemis Rural Road'
    'Artemis Motorway 130 kmph'
    'Artemis Motorway 150 kmph'
    'JC08'
    'JC08 Hot'
    % 'Japanese 10 Mode'
    % 'Japanese 15 Mode'
    % 'Japanese 10-15 Mode'
    'World Harmonized Vehicle Cycle (WHVC)'
    'Braunschweig City Driving Cycle'
    % 'Central Business District (CBD) Cycle'
    % 'Business Arterial Commuter (BAC) - Arterial Cycle'
    % 'Business Arterial Commuter (BAC) - Commuter Cycle'
    % 'City Suburban Heavy Vehicle Cycle (CSC)'
    % 'Neighborhood Refuse Truck Cycle'
    % 'New York Composite Cycle'
    % 'New York Bus Cycle'
    % 'Manhattan Bus Cycle'
    % 'Heavy Heavy-Duty Diesel Truck (HHDDT) - Creep Mode'
    % 'Heavy Heavy-Duty Diesel Truck (HHDDT) - Transient Mode'
    % 'Heavy Heavy-Duty Diesel Truck (HHDDT) - Cruise Mode'
    % 'Orange County Bus Cycle'
    % 'West Virginia University 5-Peak Truck Cycle'
    'RTS 95'
    'ETC FIGE Version 4'
    % 'JE05 Japanese Transient Mode for vehicles > 3500 kg GVW'
    'CUEDC Petrol cycle'
    'CUEDC SPC240 cycle'
    'CUEDC diesel cycle - MC'
    'CUEDC diesel cycle - NA'
    'CUEDC diesel cycle - NB'
    'CUEDC diesel cycle - ME'
    'CUEDC diesel cycle - NC'
    'CUEDC diesel cycle - NCH'
    % 'EPA Federal Test Procedure(FTP75) - Without the Hot Soak Phase'
    % 'EPA Federal Test Procedure(FTP75) - Cold Start Phase'
    % 'EPA Federal Test Procedure(FTP75) - Cold Stabilized Phase'
    % 'EPA Federal Test Procedure(FTP75) - Hot Start Phase'
    'China Light-Duty Vehicle Test Cycle for Passenger Car'
    'China Light-Duty Vehicle Test Cycle for Commercial Vehicles'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Bus'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Coach'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Dumper'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Light Truck'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Heavy Truck'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Tractor-Trailer'
    % 'Chinese Typical City Bus Drivecycle'
    'China Worldwide Transient Vehicle Cycle'
    };

cycle_save_list = {
    % 'FTP72'
    'FTP75'
    'US06'
    'SC03'
    'HWFET'
    'NYCC'
    'HUDDS'
    'LA92'
    % 'LA92Short'
    'IM240'
    'UDDS'
    'WLTP1'
    'WLTP2'
    'WLTP3'
    % 'ECE R15 (single cycle)'
    % 'ECE R15 (four cycles)'
    % 'EUDC'
    % 'ECE Extra-Urban Driving Cycle (Low Powered Vehicles)'
    % 'NEDC'
    % 'ADAC BAB 130'
    'CADCUrban'
    'CADCRural'
    'CADC130'
    'CADC150'
    'JC08'
    'JC08Hot'
    % 'Japanese 10 Mode'
    % 'Japanese 15 Mode'
    % 'Japanese 10-15 Mode'
    'WHVC'
    'BCDC'
    % 'Central Business District (CBD) Cycle'
    % 'Business Arterial Commuter (BAC) - Arterial Cycle'
    % 'Business Arterial Commuter (BAC) - Commuter Cycle'
    % 'City Suburban Heavy Vehicle Cycle (CSC)'
    % 'Neighborhood Refuse Truck Cycle'
    % 'New York Composite Cycle'
    % 'New York Bus Cycle'
    % 'Manhattan Bus Cycle'
    % 'Heavy Heavy-Duty Diesel Truck (HHDDT) - Creep Mode'
    % 'Heavy Heavy-Duty Diesel Truck (HHDDT) - Transient Mode'
    % 'Heavy Heavy-Duty Diesel Truck (HHDDT) - Cruise Mode'
    % 'Orange County Bus Cycle'
    % 'West Virginia University 5-Peak Truck Cycle'
    'RTS95'
    'ETCFIGE4'
    % 'JE05 Japanese Transient Mode for vehicles > 3500 kg GVW'
    'CUEDCPetrol'
    'CUEDCSPC240'
    'CUEDCDieselMC'
    'CUEDCDieselNA'
    'CUEDCDieselNB'
    'CUEDCDieselME'
    'CUEDCDieselNC'
    'CUEDCDieselNCH'
    % 'EPA Federal Test Procedure(FTP75) - Without the Hot Soak Phase'
    % 'EPA Federal Test Procedure(FTP75) - Cold Start Phase'
    % 'EPA Federal Test Procedure(FTP75) - Cold Stabilized Phase'
    % 'EPA Federal Test Procedure(FTP75) - Hot Start Phase'
    'CLTCPassenger'
    'CLTCCommercial'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Bus'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Coach'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Dumper'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Light Truck'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Heavy Truck'
    % 'China Heavy-Duty Commercial Vehicle Test Cycle for Tractor-Trailer'
    % 'Chinese Typical City Bus Drivecycle'
    'CWTVC'
    };

% Channel list
%
% (Vehicle Speed)
% Motor Speed
% Motor Torque
% Axle Torque Front
% Axle Torque Rear
% Battery SoC
% Battery Current
% Battery Power
% Axle Force Front
% Axle Force Rear
% Axle Speed Front
% Axle Speed Rear
% Accelerator Pedal
% Break Pedal
% Battery Temperature
% Pump Power
% Refrigerator Power

anomaly_type_list = {
    'braking_regen'
    'ext_wind'
    'pump_speed'
    'torque_req'
    'wheel_diameter'
    'driver_reaction'
    };

anomaly_coefficients = {
    0
    5
    0.9
    0.9
    1.1
    4
    };

normal_coefficients = {
    1
    0
    1
    1
    1
    1
    };

model = 'EvReferenceApplication';
load_system(model)
set_param(model,'Solver','daessc');

% Create array with request signals
for i = 1:length(cycle_name_list)
    set_param([model '/Drive Cycle Source'],'cycleVar', cycle_name_list{i})
    sim_time = get_param([model '/Drive Cycle Source'],'tfinal');
    sim_time = str2num(sim_time(1:end-9));
    set_param(model, 'StopTime', num2str(sim_time))
    set_param(model,'Solver','daessc');
    save_system(model)

    anomaly_start_list = zeros(length(anomaly_type_list), 4);
    for row = 1:4
        anomaly_start_list(row, 2) = round(unifrnd(0.2, 0.8), 2, "significant");
    end

    % Set normal variables for parallel simulation
    % Pre-allocate simulation paramter matrix
    in(1:size(anomaly_start_list, 1), 1:size(anomaly_start_list, 2)) = Simulink.SimulationInput(model);
    % for every type of anomaly
    for j = 1:size(anomaly_start_list, 1)
        % Sample initial battery temperature from range of 10°C to 30°C
        bat_temp_init1 = round(unifrnd(10, 30), 3, "significant");
        bat_temp_init2 = round(unifrnd(10, 30), 3, "significant");
        % Sample initial battery state of charge from range of 10% to 100%
        bat_soc_init1 = round(unifrnd(0.1, 1), 3, "significant");
        bat_soc_init2 = round(unifrnd(0.1, 1), 3, "significant");
        % for every anomaly length
        for k = 1:size(anomaly_start_list, 2)
            anomaly_start = anomaly_start_list(j, k);

            % Set variables for simulation
            % for every parameter
            for l = 1:size(anomaly_start_list, 1)
                if j == l && k < 3
                    parameter = anomaly_coefficients{l};
                else
                    parameter = normal_coefficients{l};
                end
                in(j, k) = in(j, k).setVariable(anomaly_type_list{l}, parameter);
            end

            if mod(k,2)
                in(j, k) = in(j, k).setVariable('bat_temp_init', bat_temp_init1);
                in(j, k) = in(j, k).setVariable('bat_soc_init', bat_soc_init1);
            else
                in(j, k) = in(j, k).setVariable('bat_temp_init', bat_temp_init2);
                in(j, k) = in(j, k).setVariable('bat_soc_init', bat_soc_init2);
            end

            in(j, k) = in(j, k).setVariable('anomaly_start', anomaly_start);
            % Set a upper limit for simulation time, 1hr more than enough
            % to simulate each cycle assuming it does not encounter
            % numerical under/overflow
            in(j, k) = in(j, k).setModelParameter('TimeOut', 3600);
        end
    end

    out = parsim(in, ...
        'TransferBaseWorkspaceVariables','on', ...
        'ShowSimulationManager','off');

    % Filter out extreme data and save the measurement
    for j = 1:length(anomaly_type_list)
        for k = 1:2
            % File names for each of the anomalies and their respective
            % control counterparts
            title_anomaly = strcat(cycle_save_list(i), '_', ...
                string(round(in(j, k).Variables(1, end-2).Value, 1)*10), '_', ...
                string(round(in(j, k).Variables(1, end-1).Value*100, 1)*10), '_', ...
                erase(anomaly_type_list{j}, '_'), '_', ...
                num2str(round(anomaly_start_list(j, k)*(sim_time*10+1))));

            title_control = strcat(cycle_save_list(i), '_', ...
                string(round(in(j, k+2).Variables(1, end-2).Value, 1)*10), '_', ...
                string(round(in(j, k+2).Variables(1, end-1).Value*100, 1)*10), '_', ...
                erase(anomaly_type_list{j}, '_'), '_', ...
                'control');

            simout_anomaly = out(j, k).ScopeData.signals(2:end);
            array_anomaly = simout_anomaly(1).values;

            simout_control = out(j, k+2).ScopeData.signals(2:end);
            array_control = simout_control(1).values;

            for l = 2:length(simout_anomaly)
                array_anomaly = cat(2, array_anomaly, simout_anomaly(l).values);
                array_control = cat(2, array_control, simout_control(l).values);
            end

            if j == 5 && k == 2 || j == 6 && k == 2
                continue
            else
                if min(array_anomaly(:, 5)) > 5 || min(array_control(:, 5)) > 5
                    if size(array_anomaly, 1) == size(array_control, 1)
                        array = array_anomaly;
                        save(strcat(save_path, "/", title_anomaly, ".mat"), "array")
                        clear array

                        array = array_control;
                        save(strcat(save_path, "/", title_control, ".mat"), "array")
                        clear array
                    end
                end
            end
        end
    end
end

