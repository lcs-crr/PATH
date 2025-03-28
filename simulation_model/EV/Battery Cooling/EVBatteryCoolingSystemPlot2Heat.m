% Code to plot simulation results from EVBatteryCoolingSystem
%% Plot Description:
%
% This figure shows the total heat flow rate generated by batteries, the 
% total heat flow into to the coolant and the total heat flow extracted from 
% the coolant, and the contribution of each cooling system.

% Copyright 2018-2022 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('simlog_EVBatteryCoolingSystem', 'var')
    sim('EVBatteryCoolingSystem')
end

% Reuse figure if it exists, else create new figure
if ~exist('h2_EVBatteryCoolingSystem', 'var') || ...
        ~isgraphics(h2_EVBatteryCoolingSystem, 'figure')
    h2_EVBatteryCoolingSystem = figure('Name', 'EVBatteryCoolingSystem');
end
figure(h2_EVBatteryCoolingSystem)
clf(h2_EVBatteryCoolingSystem)

plotHeat(simlog_EVBatteryCoolingSystem)

% Create plots from simulation results
function plotHeat(simlog)

% Get simulation results
t = simlog.Battery.Input_Current.i.series.time;

% Battery subsytem
Q_pack1 = simlog.Battery.Heat_Flow_Rate_Sensor.Q.series.values('kW');
Q_pack2 = simlog.Battery.Heat_Flow_Rate_Sensor1.Q.series.values('kW');
Q_pack3 = simlog.Battery.Heat_Flow_Rate_Sensor2.Q.series.values('kW');
Q_pack4 = simlog.Battery.Heat_Flow_Rate_Sensor3.Q.series.values('kW');

% Total heat flow generated by battery packs
Q_batteries = Q_pack1 + Q_pack2 + Q_pack3 + Q_pack4;

% Cold plate
Q_pipe_in_L1 = simlog.Cold_Plate.Pipe_in_L1.Q_H.series.values('kW');
Q_pipe_out_L2 = simlog.Cold_Plate.Pipe_out_L2.Q_H.series.values('kW');
Q_pack1_pipe = Q_pipe_in_L1 + Q_pipe_out_L2;

Q_pipe_in_L2 = simlog.Cold_Plate.Pipe_in_L2.Q_H.series.values('kW');
Q_pipe_out_L1 = simlog.Cold_Plate.Pipe_out_L1.Q_H.series.values('kW');
Q_pack2_pipe = Q_pipe_in_L2 + Q_pipe_out_L1;

Q_pipe_in_R1 = simlog.Cold_Plate.Pipe_in_R1.Q_H.series.values('kW');
Q_pipe_out_R2 = simlog.Cold_Plate.Pipe_out_R2.Q_H.series.values('kW');
Q_pack3_pipe = Q_pipe_in_R1 + Q_pipe_out_R2;

Q_pipe_in_R2 = simlog.Cold_Plate.Pipe_in_R2.Q_H.series.values('kW');
Q_pipe_out_R1 = simlog.Cold_Plate.Pipe_out_R1.Q_H.series.values('kW');
Q_pack4_pipe = Q_pipe_in_R2 + Q_pipe_out_R1;

Q_total_liquid = Q_pack1_pipe + Q_pack2_pipe + Q_pack3_pipe + Q_pack4_pipe;

% Total energy removed by Heating and Cooling Subsystem
Q_refrigerant = simlog.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.Q_H.series.values('kW');
Q_radiator = simlog.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.Q.series.values('kW');
Q_heater = simlog.Heating_Cooling_Unit.Heater.Pipe_TL.Q_H.series.values('kW');

Q_heating_cooling = Q_refrigerant + Q_radiator + Q_heater;

% Plot results
handles(1) = subplot(3, 1, 1);
plot(t, Q_batteries, 'LineWidth', 1.5)
hold on
plot(t, Q_pack1, '--', 'LineWidth', 1)
plot(t, Q_pack2, '--', 'LineWidth', 1)
plot(t, Q_pack3, '--', 'LineWidth', 1)
plot(t, Q_pack4, '--', 'LineWidth', 1)
hold off
grid on
title('Heat Generated by Battery Packs')
legend('Total','Pack1', 'Pack2','Pack3','Pack4')

handles(2) = subplot(3, 1, 2);
plot(t, Q_total_liquid, 'LineWidth', 1)
hold on
plot(t, -Q_heating_cooling, 'LineWidth', 1)
hold off
title('Total Heat Flow')
grid on
legend('Total heat into coolant', 'Total heat extracted from coolant')
ylabel('Heat Flow Rate (kW)')

handles(3) = subplot(3,1,3);
plot(t, -Q_refrigerant, 'LineWidth', 1)
hold on 
plot(t, -Q_radiator, 'LineWidth', 1)
hold off
grid on
legend('Refrigerant system', 'Radiator')
title('Contribution of Cooling Branches')
xlabel('Time (s)')

linkaxes(handles, 'x')

end