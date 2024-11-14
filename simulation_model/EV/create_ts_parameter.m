% Lucas Correia
% LIACS | Leiden University
% Einsteinweg 55 | 2333 CC Leiden | The Netherlands

function anomalous_parameter = create_ts_parameter(time_axis, anomaly_type, anomaly_start_perc, anomaly_coefficient)

if anomaly_type == "braking_regen"
    braking_regen = ones(length(time_axis), 1);
    anomaly_start_idx = round(length(time_axis)*anomaly_start_perc);
    if anomaly_start_idx == 0
        anomaly_start_idx = 1;
    end
    braking_regen(anomaly_start_idx:end) = anomaly_coefficient;
    % anomalous_parameter = timeseries(anomalous_parameter,time_axis);
    anomalous_parameter = array2timetable(braking_regen, 'SampleRate', 100);
    % anomalous_parameter = setuniformtime(anomalous_parameter,'Interval',0.01);

elseif anomaly_type == "ext_wind"
    ext_wind = zeros(length(time_axis), 1);
    anomaly_start_idx = round(length(time_axis)*anomaly_start_perc);
    if anomaly_start_idx == 0
        anomaly_start_idx = 1;
    end
    ext_wind(anomaly_start_idx:end) = anomaly_coefficient;
    % anomalous_parameter = timeseries(anomalous_parameter,time_axis);
    anomalous_parameter = array2timetable(ext_wind, 'SampleRate', 100);
    % anomalous_parameter = setuniformtime(anomalous_parameter,'Interval',0.01);

elseif anomaly_type == "pump_speed"
    pump_speed = ones(length(time_axis), 1);
    anomaly_start_idx = round(length(time_axis)*anomaly_start_perc);
    if anomaly_start_idx == 0
        anomaly_start_idx = 1;
    end
    pump_speed(anomaly_start_idx:end) = anomaly_coefficient;
    % anomalous_parameter = timeseries(anomalous_parameter,time_axis);
    anomalous_parameter = array2timetable(pump_speed, 'SampleRate', 100);
    % anomalous_parameter = setuniformtime(anomalous_parameter,'Interval',0.01);

elseif anomaly_type == "accel_pedal"
    accel_pedal = ones(length(time_axis), 1);
    anomaly_start_idx = round(length(time_axis)*anomaly_start_perc);
    if anomaly_start_idx == 0
        anomaly_start_idx = 1;
    end
    accel_pedal(anomaly_start_idx:end) = anomaly_coefficient;
    % anomalous_parameter = timeseries(anomalous_parameter,time_axis);
    anomalous_parameter = array2timetable(accel_pedal, 'SampleRate', 100);
    % anomalous_parameter = setuniformtime(anomalous_parameter,'Interval',0.01);

elseif anomaly_type == "wheel_diameter" || anomaly_type == "driver_reaction"
    anomalous_parameter = anomaly_coefficient;

end

end

