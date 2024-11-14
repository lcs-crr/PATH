% Code to plot simulation results from EVBatteryCoolingSystem
%% Plot Description:
%
% This figure shows the mechanical energy input for the cooling system.

% Copyright 2018 The MathWorks, Inc.

% Generate simulation results if they don't exist
if ~exist('simlog_EVBatteryCoolingSystem', 'var')
    sim('EVBatteryCoolingSystem')
end

% Reuse figure if it exists, else create new figure
if ~exist('h3_EVBatteryCoolingSystem', 'var') || ...
        ~isgraphics(h3_EVBatteryCoolingSystem, 'figure')
    h3_EVBatteryCoolingSystem = figure('Name', 'EVBatteryCoolingSystem');
end
figure(h3_EVBatteryCoolingSystem)
clf(h3_EVBatteryCoolingSystem)

plotEnergy(simlog_EVBatteryCoolingSystem)

% Create plots from simulation results
function plotEnergy(simlog)

% Get simulation results
t = simlog.Battery.Input_Current.i.series.time;
pump_power = simlog.Pump.mechanical_power.series.values('kW');
refrigerant_efficiency = 0.7;
refrigerant_power = refrigerant_efficiency .* ...
    simlog.Heating_Cooling_Unit.Refrigerant_System.Heat_Flow_Rate_Sensor.Q.series.values('kW');

% Total energy input
power_input = pump_power + refrigerant_power;
total_energy_input = cumtrapz(t, power_input)./3600; % kWh

% Plot results
handles(1) = subplot(2,1,1);
plot(t, pump_power, 'LineWidth', 1)
hold on
plot(t, refrigerant_power, 'LineWidth', 1)
hold off
grid on
title('Input Mechanical Power')
ylabel('Power (kW)')
legend('Pump', 'Refrigerant system')

handles(2)= subplot(2,1,2);
plot(t, total_energy_input, 'LineWidth', 1)
grid on
title('Cumulative Input Mechanical Energy to Pump and Refrigerant System')
ylabel('Energy (kWh)')
xlabel('Time (s)')

linkaxes(handles, 'x')

end