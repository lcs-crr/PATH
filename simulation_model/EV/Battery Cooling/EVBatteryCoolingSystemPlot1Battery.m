% Code to plot simulation results from EVBatteryCoolingSystem
%% Plot Description:
%
% This figure shows the performance of series of four lithium-ion battery 
% packs. The data used for each cell is based on T. Huria, M. Ceraolo, J. 
% Gazzarri,R. Jackey. "High Fidelity Electrical Model with Thermal 
% Dependence for Characterization and Simulation of High Power Lithium 
% Battery Cells," IEEE International Electric Vehicle Conference, March 2012.

% Copyright 2018 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('simlog_EVBatteryCoolingSystem', 'var')
    sim('EVBatteryCoolingSystem')
end

% Reuse figure if it exists, else create new figure
if ~exist('h1_EVBatteryCoolingSystem', 'var') || ...
        ~isgraphics(h1_EVBatteryCoolingSystem, 'figure')
    h1_EVBatteryCoolingSystem = figure('Name', 'EVBatteryCoolingSystem');
end
figure(h1_EVBatteryCoolingSystem)
clf(h1_EVBatteryCoolingSystem)

plotBattery(simlog_EVBatteryCoolingSystem)

% Create plots from simulation results
function plotBattery(simlog)

% Get simulation results
t = simlog.Battery.Input_Current.i.series.time;
current = simlog.Battery.Input_Current.i.series.values('A');
voltage = simlog.Battery.Voltage_Sensor.Voltage_Sensor.V.series.values('V');
SOC1 = simlog.Battery.Pack_1.Lithium_Cell_1RC.SOC.series.values('1');
SOC2 = simlog.Battery.Pack_2.Lithium_Cell_1RC.SOC.series.values('1');
SOC3 = simlog.Battery.Pack_3.Lithium_Cell_1RC.SOC.series.values('1');
SOC4 = simlog.Battery.Pack_4.Lithium_Cell_1RC.SOC.series.values('1');
T1 = simlog.Battery.Pack_1.T.series.values('degC');
T2 = simlog.Battery.Pack_2.T.series.values('degC');
T3 = simlog.Battery.Pack_3.T.series.values('degC');
T4 = simlog.Battery.Pack_4.T.series.values('degC');

% Plot results
handles(1) = subplot(4, 1, 1);
plot(t, current, 'LineWidth', 1)
grid on
title('Battery Packs')
ylabel('Current (A)')

handles(2) = subplot(4, 1, 2);
plot(t, voltage, 'LineWidth', 1)
grid on
ylabel('Voltage (V)')

handles(3) = subplot(4, 1, 3);
plot(t, SOC1, 'LineWidth', 1)
hold on
plot(t, SOC2, 'LineWidth', 1)
plot(t, SOC3, 'LineWidth', 1)
plot(t, SOC4, 'LineWidth', 1)
hold off
grid on
legend('Pack 1', 'Pack 2', 'Pack 3', 'Pack 4')
ylabel({'State Of Charge'; '(SOC)'})

handles(4) = subplot(4, 1, 4);
plot(t, T1, 'LineWidth', 1)
hold on
plot(t, T2, 'LineWidth', 1)
plot(t, T3, 'LineWidth', 1)
plot(t, T4, 'LineWidth', 1)
hold off
grid on
legend('Pack 1', 'Pack 2', 'Pack 3', 'Pack 4')
ylabel('Temperature (C)')
xlabel('Time (s)')

linkaxes(handles, 'x')

end
