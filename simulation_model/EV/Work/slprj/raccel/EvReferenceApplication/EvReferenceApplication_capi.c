#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EvReferenceApplication_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 39
#endif
#ifndef SS_INT64
#define SS_INT64 40
#endif
#else
#include "builtin_typeid_types.h"
#include "EvReferenceApplication.h"
#include "EvReferenceApplication_capi.h"
#include "EvReferenceApplication_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
1 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
2 , 0 , 0 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
3 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
4 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
5 , 0 , 0 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
6 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain" ) , TARGET_STRING ( "" ) ,
7 , 0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition1" ) , TARGET_STRING (
"Battery SOC (%)" ) , 0 , 0 , 0 , 0 , 1 } , { 9 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition10" ) , TARGET_STRING (
"AxlSpdF" ) , 0 , 0 , 0 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition10" ) , TARGET_STRING (
"AxlSpdR" ) , 0 , 0 , 0 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition11" ) , TARGET_STRING (
"Battery Temperature (°C)" ) , 0 , 1 , 1 , 0 , 1 } , { 12 , 0 , TARGET_STRING
( "EvReferenceApplication/Visualization/Rate Transition12" ) , TARGET_STRING
( "Pump Power [W] (signal 1)" ) , 0 , 0 , 0 , 0 , 1 } , { 13 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Visualization/Rate Transition12" ) ,
TARGET_STRING ( "Pump Power [W] (signal 2)" ) , 0 , 0 , 0 , 0 , 1 } , { 14 ,
0 , TARGET_STRING ( "EvReferenceApplication/Visualization/Rate Transition2" )
, TARGET_STRING ( "Motor Speed (rad/s)" ) , 0 , 0 , 0 , 0 , 1 } , { 15 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Visualization/Rate Transition3" ) ,
TARGET_STRING ( "Battery Power (W)" ) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Visualization/Rate Transition4" ) ,
TARGET_STRING ( "Vehicle Speed (m/s)" ) , 0 , 0 , 0 , 0 , 1 } , { 17 , 0 ,
TARGET_STRING ( "EvReferenceApplication/Visualization/Rate Transition5" ) ,
TARGET_STRING ( "AxlTrqF" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING
( "EvReferenceApplication/Visualization/Rate Transition5" ) , TARGET_STRING (
"AxTrqR" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition6" ) , TARGET_STRING (
"Battery Current (A)" ) , 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition7" ) , TARGET_STRING (
"AxlFrcF" ) , 0 , 0 , 0 , 0 , 1 } , { 21 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition7" ) , TARGET_STRING (
"AxlFrcR" ) , 0 , 0 , 0 , 0 , 1 } , { 22 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition8" ) , TARGET_STRING (
"signal1" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition8" ) , TARGET_STRING (
"signal2" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING (
"EvReferenceApplication/Visualization/Rate Transition9" ) , TARGET_STRING (
"Motor Torque (Nm)" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 1 , 2 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 2 , 2 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 3 , 2 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 4 , 2 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 5 , 2 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 6 , 2 , 0 , 0 , 1 } , { 32 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 7 , 2 , 0 , 0 , 1 } , { 33 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 8 , 3 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "" ) , 9 , 1 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) , TARGET_STRING ( "BMS_Cmd" ) , 10 , 6 , 0 , 0 , 1 } , { 36 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Powertrain Control Module (PCM)"
) , TARGET_STRING ( "MotTrqCmd" ) , 0 , 0 , 0 , 0 , 2 } , { 37 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Powertrain Control Module (PCM)"
) , TARGET_STRING ( "BrkCmd" ) , 1 , 0 , 0 , 0 , 2 } , { 38 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Signal Routing/UnitConversion" ) ,
TARGET_STRING ( "Reference Speed" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "BrkCmd" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "MotTrqCmd" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Digital Clock"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 42 , 0 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Add1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Switch" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Product"
) , TARGET_STRING ( "BattPwr" ) , 0 , 0 , 0 , 0 , 0 } , { 46 , 0 ,
TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Add"
) , TARGET_STRING ( "BattCrnt" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Discharge Dynamics"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor Coupling Dynamics"
) , TARGET_STRING ( "MotTrq" ) , 0 , 0 , 0 , 0 , 0 } , { 49 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Sum7"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Average Battery Temperature/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Average Battery Temperature/Sum of Elements"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/BMS Signal Creation/Bus Creator"
) , TARGET_STRING ( "BMS_Sensors" ) , 0 , 7 , 0 , 0 , 0 } , { 54 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/BMS Signal Creation/Data Type Conversion4"
) , TARGET_STRING ( "Vout_Chgr" ) , 0 , 1 , 0 , 0 , 4 } , { 55 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Gain"
) , TARGET_STRING ( "Pump Power [W]" ) , 0 , 0 , 0 , 0 , 0 } , { 56 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Gain1"
) , TARGET_STRING ( "Pump Power [W]" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor/MotGenEvMapped"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor/MotGenEvMapped"
) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 59 , 14 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/div0protect - poly/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/div0protect - poly/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 61 , 14 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/div0protect - poly/Switch1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/div0protect - poly/Unary Minus"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 63 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air Stream/Air velocity [m//s]"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air Stream/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 66 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Pump response delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/RTP_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 69 , 8 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup"
) , TARGET_STRING ( "" ) , 1 , 0 , 3 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Setup/is_active_c8_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c8_autolibsharedcommon" ) , 0 , 8 , 0 , 0 , 0
} , { 71 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Vehicle/is_active_c7_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c7_autolibsharedcommon" ) , 0 , 8 , 0 , 0 , 0
} , { 72 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 73 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add1"
) , TARGET_STRING ( "u_o(t)" ) , 0 , 0 , 0 , 0 , 0 } , { 78 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add2"
) , TARGET_STRING ( "y(t+T*)" ) , 0 , 0 , 0 , 0 , 0 } , { 79 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Add4"
) , TARGET_STRING ( "e(t+T*)" ) , 0 , 0 , 0 , 0 , 0 } , { 80 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 2 } , { 83 , 13 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 84 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/is_active_c6_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c6_autolibsharedcommon" ) , 0 , 8 , 0 , 0 , 5
} , { 85 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_active_GearSelect"
) , TARGET_STRING ( "is_active_GearSelect" ) , 0 , 8 , 0 , 0 , 5 } , { 86 , 0
, TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_GearSelect"
) , TARGET_STRING ( "is_GearSelect" ) , 0 , 9 , 0 , 0 , 5 } , { 87 , 0 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Sum2"
) , TARGET_STRING ( "" ) , 0 , 8 , 0 , 1 , 4 } , { 90 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 4 } , { 97 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 4 } , { 101 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 103 , 2 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 4 } , { 105 , 5 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 4 } , { 107 , 0 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Compare"
) , TARGET_STRING ( "" ) , 0 , 2 , 0 , 0 , 5 } , { 108 , 2 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 109 , 5 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Anti-windup/Back Calculation/Kb"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Anti-windup/Back Calculation/SumI2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Anti-windup/Back Calculation/SumI4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Filter/Cont. Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 115 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Filter/Cont. Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 121 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 122 , TARGET_STRING (
"EvReferenceApplication/Environment/Constant2" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 123 , TARGET_STRING (
"EvReferenceApplication/Environment/Constant3" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 124 , TARGET_STRING (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Enumerated Constant"
) , TARGET_STRING ( "Value" ) , 10 , 0 , 0 } , { 125 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "m" ) , 0 , 0 , 0 } , { 126 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "Kpt" ) , 0 , 0 , 0 } , { 127 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tau" ) , 0 , 0 , 0 } , { 128 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "L" ) , 0 , 0 , 0 } , { 129 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "aR" ) , 0 , 0 , 0 } , { 130 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "bR" ) , 0 , 0 , 0 } , { 131 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "cR" ) , 0 , 0 , 0 } , { 132 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "g" ) , 0 , 0 , 0 } , { 133 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "GearInit" ) , 0 , 0 , 0 } , { 134 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model"
) , TARGET_STRING ( "tShift" ) , 0 , 0 , 0 } , { 135 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 136 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Drivetrain Plant Input/First Order Hold"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 137 , TARGET_STRING
(
"EvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 138 , TARGET_STRING (
"EvReferenceApplication/Passenger Car/Electric Plant Input/First Order Hold"
) , TARGET_STRING ( "ErrorTolerance" ) , 0 , 0 , 0 } , { 139 , TARGET_STRING
( "EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/repeat" )
, TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 140 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/tFinal" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 141 , TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Hit  Crossing"
) , TARGET_STRING ( "HitCrossingOffset" ) , 0 , 0 , 0 } , { 142 ,
TARGET_STRING (
 "EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 8 , 0 } , { 143 , TARGET_STRING (
 "EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 8 , 0 } , { 144 ,
TARGET_STRING (
"EvReferenceApplication/Drive Cycle Source/Timing Mode/Continuous/Switch" ) ,
TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 145 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Discharge Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 146 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Discharge Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 147 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor Coupling Dynamics"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 148 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor Coupling Dynamics"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 149 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/div0protect - poly"
) , TARGET_STRING ( "thresh" ) , 0 , 0 , 0 } , { 150 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/Accessory Load W"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 151 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Average Battery Temperature/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 152 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/BMS Signal Creation/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 153 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/BMS Signal Creation/Gain"
) , TARGET_STRING ( "Gain" ) , 1 , 1 , 0 } , { 154 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/BMS Signal Creation/Gain1"
) , TARGET_STRING ( "Gain" ) , 1 , 1 , 0 } , { 155 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/BMS Signal Creation/Gain2"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 156 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 157 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 158 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Subsystem2/convert2percent"
) , TARGET_STRING ( "Gain" ) , 1 , 0 , 0 } , { 159 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/div0protect - poly/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 160 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Accessory Load/div0protect - poly/Switch1"
) , TARGET_STRING ( "Threshold" ) , 0 , 0 , 0 } , { 161 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air Stream/Air velocity [m//s]"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 162 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air Stream/Air density [kg//m^3]"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 163 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Relay"
) , TARGET_STRING ( "OnSwitchValue" ) , 0 , 0 , 0 } , { 164 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Relay"
) , TARGET_STRING ( "OffSwitchValue" ) , 0 , 0 , 0 } , { 165 , TARGET_STRING
(
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Relay"
) , TARGET_STRING ( "OnOutputValue" ) , 0 , 0 , 0 } , { 166 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Relay"
) , TARGET_STRING ( "OffOutputValue" ) , 0 , 0 , 0 } , { 167 , TARGET_STRING
(
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Pump response delay"
) , TARGET_STRING ( "A" ) , 0 , 0 , 0 } , { 168 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Pump response delay"
) , TARGET_STRING ( "C" ) , 0 , 0 , 0 } , { 169 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Pump Power/kW"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 170 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Subsystem_around_RTP_7CC9AFD0_level/Subsystem_around_RTP_7CC9AFD0_level"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 171 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Subsystem_around_RTP_7CC9AFD0_p_gas/Subsystem_around_RTP_7CC9AFD0_p_gas"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 172 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Subsystem_around_RTP_7CC9AFD0_volume_liquid/Subsystem_around_RTP_7CC9AFD0_volume_liquid"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 173 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 174 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 9 , 0 } , { 175 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 176 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 177 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 178 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 179 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 180 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 181 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 182 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 183 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller"
) , TARGET_STRING ( "Kb" ) , 0 , 0 , 0 } , { 184 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 185 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 186 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 187 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 188 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Gain"
) , TARGET_STRING ( "Gain" ) , 8 , 0 , 2 } , { 189 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Gain1"
) , TARGET_STRING ( "Gain" ) , 8 , 0 , 1 } , { 190 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Gain2"
) , TARGET_STRING ( "Gain" ) , 8 , 0 , 1 } , { 191 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Efficiency"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 192 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 193 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 194 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 195 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 196 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 197 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 198 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 199 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 0 , 0 } , { 200 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 201 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 202 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 203 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 204 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 205 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 206 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 207 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "A_pr" ) , 0 , 0 , 0 } , { 208 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "A_ir" ) , 9 , 0 , 0 } , { 209 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "A_jc" ) , 9 , 4 , 0 } , { 210 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "B_pr" ) , 0 , 0 , 0 } , { 211 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "B_ir" ) , 9 , 0 , 0 } , { 212 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "B_jc" ) , 9 , 4 , 0 } , { 213 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "C_pr" ) , 0 , 0 , 0 } , { 214 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "C_ir" ) , 9 , 0 , 0 } , { 215 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "C_jc" ) , 9 , 4 , 0 } , { 216 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 217 ,
TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 218 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 219 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Thermal Model/Subsystem_around_RTP_87B9D3CA_T/Subsystem_around_RTP_87B9D3CA_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 220 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Thermal Model/Subsystem_around_RTP_6F7C700D_T/Subsystem_around_RTP_6F7C700D_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 221 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Thermal Model/Subsystem_around_RTP_8D439205_T/Subsystem_around_RTP_8D439205_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 222 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Thermal Model/Subsystem_around_RTP_28B86618_T/Subsystem_around_RTP_28B86618_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 223 , 31 ,
TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Discharge Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 224 , 0 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor Coupling Dynamics"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 225 , 33 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Pump response delay"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 226 , 378 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 227 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 4 , 0 , 2 , 0 , - 1 , 0 } , {
228 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
229 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "FirstOutput" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 }
, { 230 , 32 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Air_Stream.Simulink_PS_Converter1.outputFiltered_2751968174_0"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air Stream/Simulink-PS\nConverter1"
) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 231 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 4 , 0 , 0 , 0 , - 1 , 0 } , {
232 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , {
233 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "FirstOutput" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 }
, { 234 , 37 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Controller.Simulink_PS_Converter.outputFiltered_3737641166_0"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Simulink-PS\nConverter"
) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0 } , { 235 , - 1 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 4 , 0 , 0 , 0 , - 1 , 0 } , {
236 , 38 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Thermal_Model.Battery_Thermal_Mass.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 237 , 39 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Thermal_Model.Battery_Thermal_Mass.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 238 , 40 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Thermal_Model.Battery_Thermal_Mass.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 239 , 41 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Thermal_Model.Battery_Thermal_Mass.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 240 , 42 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.C1.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 241 , 43 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.Em_table.Qe"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 242 , 44 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.C1.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 243 , 45 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.Em_table.Qe"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 244 , 46 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.C1.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 245 , 47 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.Em_table.Qe"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 246 , 48 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.C1.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 247 , 49 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.Em_table.Qe"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 248 , 50 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 249 , 51 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 250 , 52 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 251 , 53 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 252 , 54 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 253 , 55 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 254 , 56 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_1.Plate_mass_left.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 1)/Plate mass left "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 255 , 57 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_1.Plate_mass_right.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 1)/Plate mass right"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 256 , 58 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_2.Plate_mass_left.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 2)/Plate mass left "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 257 , 59 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_2.Plate_mass_right.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 2)/Plate mass right"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 258 , 60 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_3.Plate_mass_left.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 3)/Plate mass left "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 259 , 61 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_3.Plate_mass_right.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 3)/Plate mass right"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 260 , 62 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_4.Plate_mass_left.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 4)/Plate mass left "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 261 , 63 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_4.Plate_mass_right.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 4)/Plate mass right"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 262 , 64 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 263 , 65 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 264 , 66 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L2.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 265 , 67 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L2.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 266 , 68 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 267 , 69 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 268 , 70 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R2.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 269 , 71 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R2.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 270 , 72 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 271 , 73 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 272 , 74 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L2.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 273 , 75 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L2.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 274 , 76 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 275 , 77 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 276 , 78 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R2.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 277 , 79 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R2.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 278 , 80 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Controller.Sensors.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Sensors/Ideal Rotational Motion Sensor"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 279 , 81 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.T_gas"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 280 , 82 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.T_liquid"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 281 , 83 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 282 , 84 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 283 , 85 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 284 , 86 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 285 , 87 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Pipe_TL.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 286 , 88 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Pipe_TL.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 287 , 89 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 288 , 90 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 289 , 91 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 290 , 92 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 291 , 93 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 292 , 94 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 293 , 95 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_return.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator return"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 294 , 96 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_return.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator return"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 295 , 97 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.p_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 296 , 98 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.T_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 297 , 99 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.p_gas"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 298 , 100 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.mass_liquid"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 299 , 101 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Air_flow_rate.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air flow rate"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 300 , 102 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Air_flow_rate.A.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air flow rate"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 301 , 103 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Air_flow_rate.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air flow rate"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 302 , 104 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Air_flow_rate.B.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air flow rate"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 303 , 105 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Air_flow_rate.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air flow rate"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 304 , 106 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Air_flow_rate.convection_A.ht_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Air flow rate"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 305 , 107 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_1.Battery_to_plate_conduction_left.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 1)/Battery to plate conduction left"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 306 , 108 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_1.Battery_to_plate_conduction_right.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 1)/Battery to plate conduction right "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 307 , 109 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_2.Battery_to_plate_conduction_left.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 2)/Battery to plate conduction left"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 308 , 110 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_2.Battery_to_plate_conduction_right.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 2)/Battery to plate conduction right "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 309 , 111 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_3.Battery_to_plate_conduction_left.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 3)/Battery to plate conduction left"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 310 , 112 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_3.Battery_to_plate_conduction_right.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 3)/Battery to plate conduction right "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 311 , 113 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_4.Battery_to_plate_conduction_left.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 4)/Battery to plate conduction left"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 312 , 114 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Cooling_Plate_Pack_4.Battery_to_plate_conduction_right.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Cooling Plate (Pack 4)/Battery to plate conduction right "
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 313 , 115 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Controlled_Voltage_Source.n.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Controlled Voltage Source"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 314 , 116 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.C1.p.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 315 , 117 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.Em_table.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 316 , 118 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.C1.SOC"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 317 , 119 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.R1.i"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 318 , 120 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.Em_table.C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 319 , 121 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Thermal_Model.Battery_Thermal_Mass.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 320 , 122 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_1.Lithium_Cell_1RC.PS_Add.I2"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 1/Lithium Cell 1RC/PS Add"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 321 , 123 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Controlled_Voltage_Source.n.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Controlled Voltage Source"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 322 , 124 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.Em_table.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 323 , 125 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.R0.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/R0"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 324 , 126 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.C1.SOC"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 325 , 127 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.R1.i"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 326 , 128 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.Em_table.C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 327 , 129 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Thermal_Model.Battery_Thermal_Mass.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 328 , 130 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_2.Lithium_Cell_1RC.PS_Add.I2"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 2/Lithium Cell 1RC/PS Add"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 329 , 131 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Controlled_Voltage_Source.n.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Controlled Voltage Source"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 330 , 132 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.Em_table.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 331 , 133 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.R0.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/R0"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 332 , 134 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.C1.SOC"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 333 , 135 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.R1.i"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 334 , 136 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.Em_table.C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 335 , 137 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Thermal_Model.Battery_Thermal_Mass.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 336 , 138 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_3.Lithium_Cell_1RC.PS_Add.I2"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 3/Lithium Cell 1RC/PS Add"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 337 , 139 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.Em_table.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 338 , 140 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.R0.v"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/R0"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 339 , 141 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.C1.SOC"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/C1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 340 , 142 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.R1.i"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 341 , 143 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.Em_table.C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/Em_table"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 342 , 144 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Thermal_Model.Battery_Thermal_Mass.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Thermal Model/Battery Thermal Mass"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 343 , 145 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Battery1.Pack_4.Lithium_Cell_1RC.PS_Add.I2"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Battery1/Pack 4/Lithium Cell 1RC/PS Add"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 344 , 146 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cap_G.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cap (G)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 345 , 147 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cap_G.A.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cap (G)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 346 , 148 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cap_G1.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cap (G)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 347 , 149 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cap_G1.A.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cap (G)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 348 , 150 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 349 , 151 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 350 , 152 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 351 , 153 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 352 , 154 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 353 , 155 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.Phi_C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 354 , 156 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 355 , 157 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.convection_A.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 356 , 158 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 357 , 159 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 358 , 160 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 359 , 161 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.convection_C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 360 , 162 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.convection_C.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 361 , 163 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL.rho_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 362 , 164 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 363 , 165 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 364 , 166 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 365 , 167 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 366 , 168 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 367 , 169 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.Phi_C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 368 , 170 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 369 , 171 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.convection_A.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 370 , 172 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 371 , 173 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 372 , 174 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 373 , 175 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.convection_C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 374 , 176 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.convection_C.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 375 , 177 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL1.rho_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 376 , 178 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 377 , 179 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 378 , 180 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 379 , 181 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 380 , 182 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 381 , 183 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 382 , 184 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.Phi_C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 383 , 185 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 384 , 186 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 385 , 187 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 386 , 188 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 387 , 189 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 388 , 190 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 389 , 191 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.convection_C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 390 , 192 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.convection_C.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 391 , 193 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Constant_Volume_Chamber_TL2.rho_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Constant Volume Chamber (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 392 , 194 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 393 , 195 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L2.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 394 , 196 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L2.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 395 , 197 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 396 , 198 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R2.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 397 , 199 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 398 , 200 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 399 , 201 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R2.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 400 , 202 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 401 , 203 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.B.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 402 , 204 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 403 , 205 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 404 , 206 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 405 , 207 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 406 , 208 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 407 , 209 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L1.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 408 , 210 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L2.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 409 , 211 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L2.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 410 , 212 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L2.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 411 , 213 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_L2.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 412 , 214 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 413 , 215 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.B.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 414 , 216 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 415 , 217 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 416 , 218 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 417 , 219 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 418 , 220 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 419 , 221 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R1.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 420 , 222 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R2.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 421 , 223 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R2.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 422 , 224 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R2.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 423 , 225 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_in_R2.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_in_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 424 , 226 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 425 , 227 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.A.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 426 , 228 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 427 , 229 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.convection_A.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 428 , 230 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 429 , 231 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 430 , 232 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 431 , 233 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L1.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 432 , 234 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L2.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 433 , 235 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L2.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 434 , 236 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L2.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 435 , 237 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_L2.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_L2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 436 , 238 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 437 , 239 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.A.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 438 , 240 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 439 , 241 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.convection_A.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 440 , 242 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 441 , 243 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 442 , 244 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 443 , 245 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R1.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 444 , 246 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R2.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 445 , 247 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R2.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 446 , 248 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R2.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 447 , 249 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Cold_Plate.Pipe_out_R2.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Cold Plate/Pipe_out_R2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 448 , 250 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Controller.Ideal_Angular_Velocity_Source.t"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Controller/Ideal Angular Velocity Source"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 449 , 251 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.A2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 450 , 252 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.A2.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 451 , 253 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.B1.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 452 , 254 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.B1.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 453 , 255 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.B2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 454 , 256 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 455 , 257 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 456 , 258 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.D.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 457 , 259 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 458 , 260 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 459 , 261 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_C"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 460 , 262 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_D"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 461 , 263 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 462 , 264 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 463 , 265 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 464 , 266 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_B.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 465 , 267 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_C.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 466 , 268 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_C.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 467 , 269 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_D.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 468 , 270 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_D.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 469 , 271 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.rho_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Constant Volume Chamber (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 470 , 272 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 471 , 273 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.B.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 472 , 274 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.H.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 473 , 275 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 474 , 276 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Mass_Energy_Flow_Rate_Sensor_TL.PHI"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Mass & Energy Flow Rate Sensor (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 475 , 277 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 476 , 278 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Mass_Energy_Flow_Rate_Sensor_TL.PHI"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Mass & Energy Flow Rate Sensor (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 477 , 279 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.convection_A.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 478 , 280 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Heater_Temperature.PS_Subtract.I1"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Heater Temperature/PS Subtract"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 479 , 281 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_A.mdot"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 480 , 282 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Mass_Energy_Flow_Rate_Sensor_TL.M"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Mass & Energy Flow Rate Sensor (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 481 , 283 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 482 , 284 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 483 , 285 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 484 , 286 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Cooling_Inlet.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Cooling Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 485 , 287 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 486 , 288 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.A.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 487 , 289 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Heater_Temperature.PS_Add.I1"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Heater Temperature/PS Add"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 488 , 290 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Controlled_Temperature_Source1.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Controlled Temperature Source1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 489 , 291 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Pipe_TL.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 490 , 292 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Pipe_TL.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 491 , 293 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Pipe_TL.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 492 , 294 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Heater.Pipe_TL.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Heater/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 493 , 295 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.A2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 494 , 296 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.A2.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 495 , 297 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Perfect_Insulator1.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Perfect Insulator1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 496 , 298 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Perfect_Insulator2.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Perfect Insulator2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 497 , 299 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.A2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 498 , 300 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.A2.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 499 , 301 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.B2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 500 , 302 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.B2.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 501 , 303 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.H.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 502 , 304 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.mdot_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 503 , 305 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 504 , 306 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.Q_H"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 505 , 307 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.rho_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 506 , 308 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.rho_in_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 507 , 309 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.gas_1.rho_in_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 508 , 310 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.CP2"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 509 , 311 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.H2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 510 , 312 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.mdot_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 511 , 313 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.mdot_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 512 , 314 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.SD"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 513 , 315 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.SD_max"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 514 , 316 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.Phi_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 515 , 317 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.Phi_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 516 , 318 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.T_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 517 , 319 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.T_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 518 , 320 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.rho_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 519 , 321 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.rho_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 520 , 322 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.u_A"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 521 , 323 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.u_B"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 522 , 324 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 523 , 325 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 524 , 326 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 525 , 327 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 526 , 328 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 527 , 329 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_return.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator return"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 528 , 330 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_return.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator return"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 529 , 331 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_return.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator return"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 530 , 332 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Radiator.Radiator_return.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Radiator/Radiator return"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 531 , 333 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 532 , 334 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.A.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 533 , 335 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Refrigerant_Temperature.PS_Add.I1"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Refrigerant  Temperature/PS Add"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 534 , 336 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Controlled_Temperature_Source.Q"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Controlled Temperature Source"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 535 , 337 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 536 , 338 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 537 , 339 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 538 , 340 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_B.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 539 , 341 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 540 , 342 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 541 , 343 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 542 , 344 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL1.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 543 , 345 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL1.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 544 , 346 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL1.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 545 , 347 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL2.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 546 , 348 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL2.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 547 , 349 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL2.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)2"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 548 , 350 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Inlet.convection_A.ht_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Inlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 549 , 351 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 550 , 352 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL.B.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 551 , 353 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 552 , 354 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 553 , 355 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 554 , 356 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL.velocity"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 555 , 357 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL1.B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 556 , 358 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL1.B.p"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 557 , 359 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL1.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 558 , 360 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL1.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 559 , 361 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL1.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 560 , 362 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Local_Restriction_TL1.velocity"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Local Restriction (TL)1"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 561 , 363 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Outlet.convection_A.ht_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Outlet"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 562 , 364 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Pump.convection_A.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Pump"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 563 , 365 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Pump.convection_A.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Pump"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 564 , 366 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Pump.convection_B.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Pump"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 565 , 367 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.volume_liquid"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 566 , 368 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.convection_A1.ht_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 567 , 369 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.convection_A2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 568 , 370 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.convection_A2.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 569 , 371 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.convection_B1.ht_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 570 , 372 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.convection_B2.T"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 571 , 373 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.convection_B2.u_I"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 572 , 374 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "EvReferenceApplication.Passenger_Car.Electric_Plant.Powertrain_Blockset.Battery_Cooling.Tank.rho_gas"
) , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Tank"
) , 0 , 0 , 10 , 0 , 0 , 1 , - 1 , 0 } , { 573 , 377 , TARGET_STRING (
 "EvReferenceApplication/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver Model/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 574 , 34 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/Transfer Fcn\n(with initial outputs)/State Space"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 575 , 36 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Filter/Cont. Filter/Filter"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 576 , 35 , TARGET_STRING (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Heating-Cooling Unit/Controller/PID Controller/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 2 , 0 , 4 , 13 , 6 ,
0 , 1 , 3 , 3 , 4 , 5 , 8 , 2 , 9 , 12 , 5 , 7 , 6 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 577 , TARGET_STRING (
"radiator" ) , 11 , 0 , 0 } , { 578 , TARGET_STRING ( "pump" ) , 12 , 0 , 0 }
, { 579 , TARGET_STRING ( "T_env" ) , 0 , 0 , 0 } , { 580 , TARGET_STRING (
"T_init" ) , 0 , 0 , 0 } , { 581 , TARGET_STRING ( "T_set" ) , 0 , 0 , 0 } ,
{ 582 , TARGET_STRING ( "_BattSocInit2f2BMS_Software_DD_sldd_" ) , 0 , 0 , 0
} , { 583 , TARGET_STRING ( "enable_regen" ) , 0 , 0 , 0 } , { 584 ,
TARGET_STRING ( "bat_soc_init" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 }
} ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & cuhiq2he3xv . lrkperxqkh , &
cuhiq2he3xv . f32ubspqi4 , & cuhiq2he3xv . go1fcnlopp , & cuhiq2he3xv .
dsdqzbwj3v , & cuhiq2he3xv . aa3fdhivvr , & cuhiq2he3xv . ed5zbrqgc5 , &
cuhiq2he3xv . btgdxjpot5 , & cuhiq2he3xv . pjihd5zicd , & cuhiq2he3xv .
f3xfryzo45 , & cuhiq2he3xv . l3rmegtqm5 , & cuhiq2he3xv . n1ivhteclj , &
cuhiq2he3xv . jnh3l0n1k5 [ 0 ] , & cuhiq2he3xv . lg320qgezp , & cuhiq2he3xv .
pam35l1pg2 , & cuhiq2he3xv . brrexts5jl , & cuhiq2he3xv . eg4mfruiee , &
cuhiq2he3xv . a5qnq1dc0o , & cuhiq2he3xv . g1j2t5ryrl , & cuhiq2he3xv .
i303hxmk4s , & cuhiq2he3xv . lwwxzl5qzf , & cuhiq2he3xv . dcpucpuzjn , &
cuhiq2he3xv . eqgmmqi3cf , & cuhiq2he3xv . nrgoj0estv , & cuhiq2he3xv .
ij3l3krian , & cuhiq2he3xv . olcjbaurbk , & cuhiq2he3xv . fd5vhxn522 , &
cuhiq2he3xv . hlr5waurua , & cuhiq2he3xv . lt2astw3oy , & cuhiq2he3xv .
dbbveecmrs , & cuhiq2he3xv . kwuy3vap0b , & cuhiq2he3xv . ddw4r03rdd , &
cuhiq2he3xv . pvq5cdapvp , & cuhiq2he3xv . b0dgot5a0g , & cuhiq2he3xv .
przvd0w4hd , & cuhiq2he3xv . obtzbv3oqr , & cuhiq2he3xv . jan2ijhoyt , &
cuhiq2he3xv . oigt4h5oa0 , & cuhiq2he3xv . eaez13ma04 , & cuhiq2he3xv .
cwygjkza2r , & cuhiq2he3xv . lz5vtehujl , & cuhiq2he3xv . l2r3hwo42w , &
cuhiq2he3xv . bkfce3mmg3 , & cuhiq2he3xv . iumj4ipipu , & cuhiq2he3xv .
a54tevlqes , & cuhiq2he3xv . bcp2j24ktn , & cuhiq2he3xv . mfbcndbdnw , &
cuhiq2he3xv . jmv50argl1 , & cuhiq2he3xv . aam4cx4xp2 , & cuhiq2he3xv .
bht55s5qq3 , & cuhiq2he3xv . bgyxx3obeb , & cuhiq2he3xv . hxtcmjvpb2 , &
cuhiq2he3xv . mq2rmflx5a , & cuhiq2he3xv . bglj00uwmx , & cuhiq2he3xv .
fgglakce4f , & cuhiq2he3xv . bexoc20jd2 , & cuhiq2he3xv . mjgpn01dl2 , &
cuhiq2he3xv . elrvsc3nih , & cuhiq2he3xv . ghjwcqfy1n , & cuhiq2he3xv .
mvfxkga0xl , & cuhiq2he3xv . mqqrzg0clr , & cuhiq2he3xv . nwplhjp5pc , &
cuhiq2he3xv . pfur2fmy1z , & cuhiq2he3xv . ifsszmtacm , & cuhiq2he3xv .
lrzxrumeie , & cuhiq2he3xv . biin5otx1a , & cuhiq2he3xv . kpz0fum4jx , &
cuhiq2he3xv . k25qje3rlu , & cuhiq2he3xv . j3ew0k2ceg , & cuhiq2he3xv .
kktsse5wr3 , & cuhiq2he3xv . jspshln155 [ 0 ] , & giqt2tul5wr . inllocuypf ,
& giqt2tul5wr . emkg42qjo3 , & cuhiq2he3xv . imnt2v1zkq , & cuhiq2he3xv .
klgwp0bl1e , & cuhiq2he3xv . b0xsyyulsa , & cuhiq2he3xv . ceif11edac , &
cuhiq2he3xv . fvfcqphwub , & cuhiq2he3xv . hyeok2w0lk , & cuhiq2he3xv .
jcja03y2ta , & cuhiq2he3xv . eyxsiaqd30 , & cuhiq2he3xv . mapbxuiz5v , &
cuhiq2he3xv . kj51ocjbc3 [ 0 ] , & cuhiq2he3xv . kyoewhwiba [ 0 ] , &
cuhiq2he3xv . o5bbi4nmva , & giqt2tul5wr . gmldgqtpy3 , & giqt2tul5wr .
o23aklsczm , & giqt2tul5wr . imczkcsnw3 , & cuhiq2he3xv . d4gyom2cqd , &
cuhiq2he3xv . pf3kdhnsui , & cuhiq2he3xv . eeny0h4lwy , & cuhiq2he3xv .
el3bc3rvwv [ 0 ] , & cuhiq2he3xv . omqn5wlmzw [ 0 ] , & cuhiq2he3xv .
j4oygusifp [ 0 ] , & cuhiq2he3xv . hm1fmdpdgy [ 0 ] , & cuhiq2he3xv .
enqmayw5zb [ 0 ] , & cuhiq2he3xv . pvxotluv5b [ 0 ] , & cuhiq2he3xv .
fjngm2jfcz , & cuhiq2he3xv . kmsp0cd1e1 , & cuhiq2he3xv . nxipfqo4ge , &
cuhiq2he3xv . as3zb4xmb3 , & cuhiq2he3xv . by2opoctqb , & cuhiq2he3xv .
ab4upgrnrw [ 0 ] , & cuhiq2he3xv . g5t5qx3zcf , & cuhiq2he3xv . g30v1kdrwbo .
bd2ndavyho , & cuhiq2he3xv . ide52jc1xl , & cuhiq2he3xv . ciwxigmsq2 .
bd2ndavyho , & cuhiq2he3xv . h4vbxbl4u1 , & cuhiq2he3xv . l3da1b0tbm , &
cuhiq2he3xv . g30v1kdrwbo . bd2ndavyho , & cuhiq2he3xv . ciwxigmsq2 .
bd2ndavyho , & cuhiq2he3xv . mlkrs1nwnz , & cuhiq2he3xv . avyl4rftay , &
cuhiq2he3xv . m1l1u42xrf , & cuhiq2he3xv . lx1jkj3hhs , & cuhiq2he3xv .
juyzoqqgba , & cuhiq2he3xv . incncr24ln , & cuhiq2he3xv . lw2sqz3qnd , &
cuhiq2he3xv . kodvah5jo3 , & cuhiq2he3xv . gavoqkfufz , & cuhiq2he3xv .
icvg51iljz , & cuhiq2he3xv . loitizpkx4 , & cuhiq2he3xv . dnav505y5o , &
konn1m5pjf . Constant2_Value , & konn1m5pjf . Constant3_Value , & konn1m5pjf
. EnumeratedConstant_Value , & konn1m5pjf . LongitudinalDriverModel_m , &
konn1m5pjf . LongitudinalDriverModel_Kpt , & konn1m5pjf .
LongitudinalDriverModel_tau , & konn1m5pjf . LongitudinalDriverModel_L , &
konn1m5pjf . LongitudinalDriverModel_aR , & konn1m5pjf .
LongitudinalDriverModel_bR , & konn1m5pjf . LongitudinalDriverModel_cR , &
konn1m5pjf . LongitudinalDriverModel_g , & konn1m5pjf .
LongitudinalDriverModel_GearInit , & konn1m5pjf .
LongitudinalDriverModel_tShift , & konn1m5pjf . FirstOrderHold_IniOut , &
konn1m5pjf . FirstOrderHold_ErrTol , & konn1m5pjf .
FirstOrderHold_IniOut_jie5nbhxr2 , & konn1m5pjf .
FirstOrderHold_ErrTol_llzlt0txj1 , & konn1m5pjf . repeat_Value , & konn1m5pjf
. tFinal_Value , & konn1m5pjf . HitCrossing_Offset , & konn1m5pjf .
uDLookupTable_tableData [ 0 ] , & konn1m5pjf . uDLookupTable_bp01Data [ 0 ] ,
& konn1m5pjf . Switch_Threshold , & konn1m5pjf . BatteryDischargeDynamics_A ,
& konn1m5pjf . BatteryDischargeDynamics_C , & konn1m5pjf .
MotorCouplingDynamics_A , & konn1m5pjf . MotorCouplingDynamics_C , &
konn1m5pjf . div0protectpoly_thresh , & konn1m5pjf . AccessoryLoadW_Value , &
konn1m5pjf . Constant_Value_h2wdon5quy , & konn1m5pjf .
Constant_Value_gqtbi3ry5p , & konn1m5pjf . Gain_Gain_dztmjyp2yi [ 0 ] , &
konn1m5pjf . Gain1_Gain_kogwmhjid4 [ 0 ] , & konn1m5pjf . Gain2_Gain , &
konn1m5pjf . Gain_Gain , & konn1m5pjf . Gain1_Gain , & konn1m5pjf .
convert2percent_Gain , & konn1m5pjf . Constant_Value_nys5l042yz , &
konn1m5pjf . Switch1_Threshold , & konn1m5pjf . Airvelocityms_Bias , &
konn1m5pjf . Airdensitykgm3_Value , & konn1m5pjf . Relay_OnVal , & konn1m5pjf
. Relay_OffVal , & konn1m5pjf . Relay_YOn , & konn1m5pjf . Relay_YOff , &
konn1m5pjf . Pumpresponsedelay_A , & konn1m5pjf . Pumpresponsedelay_C , &
konn1m5pjf . kW_Gain , & konn1m5pjf . RTP_7CC9AFD0_level_Value , & konn1m5pjf
. RTP_7CC9AFD0_p_gas_Value , & konn1m5pjf . RTP_7CC9AFD0_volume_liquid_Value
, & konn1m5pjf . Integrator2_IC , & konn1m5pjf . UnitDelay_InitialCondition [
0 ] , & konn1m5pjf . PIDController_P , & konn1m5pjf . PIDController_I , &
konn1m5pjf . PIDController_D , & konn1m5pjf . PIDController_N , & konn1m5pjf
. PIDController_InitialConditionForIntegrator , & konn1m5pjf .
PIDController_InitialConditionForFilter , & konn1m5pjf .
PIDController_UpperSaturationLimit , & konn1m5pjf .
PIDController_LowerSaturationLimit , & konn1m5pjf . PIDController_Kb , &
konn1m5pjf . Constant_Value_cxscovwunu , & konn1m5pjf .
Constant1_Value_cbg3kt12vf , & konn1m5pjf . Constant2_Value_mma10cnxvb , &
konn1m5pjf . Constant3_Value_ikmr2cncbv , & konn1m5pjf . Gain_Gain_gsslgakjt4
, & konn1m5pjf . Gain1_Gain_mjnwmk25rl , & konn1m5pjf . Gain2_Gain_nxczdnguyh
, & konn1m5pjf . Efficiency_Gain , & konn1m5pjf . SignalHold_IC , &
konn1m5pjf . Constant_Value_mg0ii2c5jx , & konn1m5pjf . u1_UpperSat , &
konn1m5pjf . u1_LowerSat , & konn1m5pjf . Saturation_UpperSat , & konn1m5pjf
. Saturation_LowerSat , & konn1m5pjf . Integrator1_IC , & konn1m5pjf .
SignalHold_IC_k5etbcnmrh , & konn1m5pjf . Constant_Value_lfd1si2n0l , &
konn1m5pjf . u0_UpperSat , & konn1m5pjf . u0_LowerSat , & konn1m5pjf .
Saturation_UpperSat_n5cfzewtp3 , & konn1m5pjf .
Saturation_LowerSat_jdvecoiqp4 , & konn1m5pjf . Constant_Value_fb5mg350bv , &
konn1m5pjf . Constant1_Value , & konn1m5pjf . StateSpace_A_pr , & konn1m5pjf
. StateSpace_A_ir , & konn1m5pjf . StateSpace_A_jc [ 0 ] , & konn1m5pjf .
StateSpace_B_pr , & konn1m5pjf . StateSpace_B_ir , & konn1m5pjf .
StateSpace_B_jc [ 0 ] , & konn1m5pjf . StateSpace_C_pr , & konn1m5pjf .
StateSpace_C_ir , & konn1m5pjf . StateSpace_C_jc [ 0 ] , & konn1m5pjf .
StateSpace_InitialCondition , & konn1m5pjf . Constant_Value , & konn1m5pjf .
Constant_Value_nhp3htkj21 , & konn1m5pjf . RTP_87B9D3CA_T_Value , &
konn1m5pjf . RTP_6F7C700D_T_Value , & konn1m5pjf . RTP_8D439205_T_Value , &
konn1m5pjf . RTP_28B86618_T_Value , & i344fcmwfc1 . g14mueghy3 , &
i344fcmwfc1 . deyyyt5ypg , & i344fcmwfc1 . fljoxgkrbw , & i344fcmwfc1 .
niplvsv1th , & giqt2tul5wr . l4pn2msb3d [ 0 ] , & giqt2tul5wr . p3iatbuorl ,
& giqt2tul5wr . oyf31f32r1 , & i344fcmwfc1 . k55ybo3o50 , & giqt2tul5wr .
juhg1joriu [ 0 ] , & giqt2tul5wr . phmddq1zkx , & giqt2tul5wr . jwpc1uzeor ,
& i344fcmwfc1 . a0egidfcb5 , & giqt2tul5wr . dlo02ztcii [ 0 ] , & i344fcmwfc1
. mgxxfhkfdi [ 0 ] , & i344fcmwfc1 . mgxxfhkfdi [ 1 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 2 ] , & i344fcmwfc1 . mgxxfhkfdi [ 3 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 4 ] , & i344fcmwfc1 . mgxxfhkfdi [ 5 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 6 ] , & i344fcmwfc1 . mgxxfhkfdi [ 7 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 8 ] , & i344fcmwfc1 . mgxxfhkfdi [ 9 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 10 ] , & i344fcmwfc1 . mgxxfhkfdi [ 11 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 12 ] , & i344fcmwfc1 . mgxxfhkfdi [ 13 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 14 ] , & i344fcmwfc1 . mgxxfhkfdi [ 15 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 16 ] , & i344fcmwfc1 . mgxxfhkfdi [ 17 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 18 ] , & i344fcmwfc1 . mgxxfhkfdi [ 19 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 20 ] , & i344fcmwfc1 . mgxxfhkfdi [ 21 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 22 ] , & i344fcmwfc1 . mgxxfhkfdi [ 23 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 24 ] , & i344fcmwfc1 . mgxxfhkfdi [ 25 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 26 ] , & i344fcmwfc1 . mgxxfhkfdi [ 27 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 28 ] , & i344fcmwfc1 . mgxxfhkfdi [ 29 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 30 ] , & i344fcmwfc1 . mgxxfhkfdi [ 31 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 32 ] , & i344fcmwfc1 . mgxxfhkfdi [ 33 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 34 ] , & i344fcmwfc1 . mgxxfhkfdi [ 35 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 36 ] , & i344fcmwfc1 . mgxxfhkfdi [ 37 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 38 ] , & i344fcmwfc1 . mgxxfhkfdi [ 39 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 40 ] , & i344fcmwfc1 . mgxxfhkfdi [ 41 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 42 ] , & i344fcmwfc1 . mgxxfhkfdi [ 43 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 44 ] , & i344fcmwfc1 . mgxxfhkfdi [ 45 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 46 ] , & i344fcmwfc1 . mgxxfhkfdi [ 47 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 48 ] , & i344fcmwfc1 . mgxxfhkfdi [ 49 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 50 ] , & i344fcmwfc1 . mgxxfhkfdi [ 51 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 52 ] , & i344fcmwfc1 . mgxxfhkfdi [ 53 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 54 ] , & i344fcmwfc1 . mgxxfhkfdi [ 55 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 56 ] , & i344fcmwfc1 . mgxxfhkfdi [ 57 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 58 ] , & i344fcmwfc1 . mgxxfhkfdi [ 59 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 60 ] , & i344fcmwfc1 . mgxxfhkfdi [ 61 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 62 ] , & i344fcmwfc1 . mgxxfhkfdi [ 63 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 64 ] , & i344fcmwfc1 . mgxxfhkfdi [ 65 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 66 ] , & i344fcmwfc1 . mgxxfhkfdi [ 67 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 68 ] , & i344fcmwfc1 . mgxxfhkfdi [ 69 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 70 ] , & i344fcmwfc1 . mgxxfhkfdi [ 71 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 72 ] , & i344fcmwfc1 . mgxxfhkfdi [ 73 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 74 ] , & i344fcmwfc1 . mgxxfhkfdi [ 75 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 76 ] , & i344fcmwfc1 . mgxxfhkfdi [ 77 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 78 ] , & i344fcmwfc1 . mgxxfhkfdi [ 79 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 80 ] , & i344fcmwfc1 . mgxxfhkfdi [ 81 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 82 ] , & i344fcmwfc1 . mgxxfhkfdi [ 83 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 84 ] , & i344fcmwfc1 . mgxxfhkfdi [ 85 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 86 ] , & i344fcmwfc1 . mgxxfhkfdi [ 87 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 88 ] , & i344fcmwfc1 . mgxxfhkfdi [ 89 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 90 ] , & i344fcmwfc1 . mgxxfhkfdi [ 91 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 92 ] , & i344fcmwfc1 . mgxxfhkfdi [ 93 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 94 ] , & i344fcmwfc1 . mgxxfhkfdi [ 95 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 96 ] , & i344fcmwfc1 . mgxxfhkfdi [ 97 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 98 ] , & i344fcmwfc1 . mgxxfhkfdi [ 99 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 100 ] , & i344fcmwfc1 . mgxxfhkfdi [ 101 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 102 ] , & i344fcmwfc1 . mgxxfhkfdi [ 103 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 104 ] , & i344fcmwfc1 . mgxxfhkfdi [ 105 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 106 ] , & i344fcmwfc1 . mgxxfhkfdi [ 107 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 108 ] , & i344fcmwfc1 . mgxxfhkfdi [ 109 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 110 ] , & i344fcmwfc1 . mgxxfhkfdi [ 111 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 112 ] , & i344fcmwfc1 . mgxxfhkfdi [ 113 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 114 ] , & i344fcmwfc1 . mgxxfhkfdi [ 115 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 116 ] , & i344fcmwfc1 . mgxxfhkfdi [ 117 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 118 ] , & i344fcmwfc1 . mgxxfhkfdi [ 119 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 120 ] , & i344fcmwfc1 . mgxxfhkfdi [ 121 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 122 ] , & i344fcmwfc1 . mgxxfhkfdi [ 123 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 124 ] , & i344fcmwfc1 . mgxxfhkfdi [ 125 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 126 ] , & i344fcmwfc1 . mgxxfhkfdi [ 127 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 128 ] , & i344fcmwfc1 . mgxxfhkfdi [ 129 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 130 ] , & i344fcmwfc1 . mgxxfhkfdi [ 131 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 132 ] , & i344fcmwfc1 . mgxxfhkfdi [ 133 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 134 ] , & i344fcmwfc1 . mgxxfhkfdi [ 135 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 136 ] , & i344fcmwfc1 . mgxxfhkfdi [ 137 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 138 ] , & i344fcmwfc1 . mgxxfhkfdi [ 139 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 140 ] , & i344fcmwfc1 . mgxxfhkfdi [ 141 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 142 ] , & i344fcmwfc1 . mgxxfhkfdi [ 143 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 144 ] , & i344fcmwfc1 . mgxxfhkfdi [ 145 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 146 ] , & i344fcmwfc1 . mgxxfhkfdi [ 147 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 148 ] , & i344fcmwfc1 . mgxxfhkfdi [ 149 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 150 ] , & i344fcmwfc1 . mgxxfhkfdi [ 151 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 152 ] , & i344fcmwfc1 . mgxxfhkfdi [ 153 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 154 ] , & i344fcmwfc1 . mgxxfhkfdi [ 155 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 156 ] , & i344fcmwfc1 . mgxxfhkfdi [ 157 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 158 ] , & i344fcmwfc1 . mgxxfhkfdi [ 159 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 160 ] , & i344fcmwfc1 . mgxxfhkfdi [ 161 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 162 ] , & i344fcmwfc1 . mgxxfhkfdi [ 163 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 164 ] , & i344fcmwfc1 . mgxxfhkfdi [ 165 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 166 ] , & i344fcmwfc1 . mgxxfhkfdi [ 167 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 168 ] , & i344fcmwfc1 . mgxxfhkfdi [ 169 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 170 ] , & i344fcmwfc1 . mgxxfhkfdi [ 171 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 172 ] , & i344fcmwfc1 . mgxxfhkfdi [ 173 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 174 ] , & i344fcmwfc1 . mgxxfhkfdi [ 175 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 176 ] , & i344fcmwfc1 . mgxxfhkfdi [ 177 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 178 ] , & i344fcmwfc1 . mgxxfhkfdi [ 179 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 180 ] , & i344fcmwfc1 . mgxxfhkfdi [ 181 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 182 ] , & i344fcmwfc1 . mgxxfhkfdi [ 183 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 184 ] , & i344fcmwfc1 . mgxxfhkfdi [ 185 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 186 ] , & i344fcmwfc1 . mgxxfhkfdi [ 187 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 188 ] , & i344fcmwfc1 . mgxxfhkfdi [ 189 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 190 ] , & i344fcmwfc1 . mgxxfhkfdi [ 191 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 192 ] , & i344fcmwfc1 . mgxxfhkfdi [ 193 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 194 ] , & i344fcmwfc1 . mgxxfhkfdi [ 195 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 196 ] , & i344fcmwfc1 . mgxxfhkfdi [ 197 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 198 ] , & i344fcmwfc1 . mgxxfhkfdi [ 199 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 200 ] , & i344fcmwfc1 . mgxxfhkfdi [ 201 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 202 ] , & i344fcmwfc1 . mgxxfhkfdi [ 203 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 204 ] , & i344fcmwfc1 . mgxxfhkfdi [ 205 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 206 ] , & i344fcmwfc1 . mgxxfhkfdi [ 207 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 208 ] , & i344fcmwfc1 . mgxxfhkfdi [ 209 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 210 ] , & i344fcmwfc1 . mgxxfhkfdi [ 211 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 212 ] , & i344fcmwfc1 . mgxxfhkfdi [ 213 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 214 ] , & i344fcmwfc1 . mgxxfhkfdi [ 215 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 216 ] , & i344fcmwfc1 . mgxxfhkfdi [ 217 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 218 ] , & i344fcmwfc1 . mgxxfhkfdi [ 219 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 220 ] , & i344fcmwfc1 . mgxxfhkfdi [ 221 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 222 ] , & i344fcmwfc1 . mgxxfhkfdi [ 223 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 224 ] , & i344fcmwfc1 . mgxxfhkfdi [ 225 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 226 ] , & i344fcmwfc1 . mgxxfhkfdi [ 227 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 228 ] , & i344fcmwfc1 . mgxxfhkfdi [ 229 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 230 ] , & i344fcmwfc1 . mgxxfhkfdi [ 231 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 232 ] , & i344fcmwfc1 . mgxxfhkfdi [ 233 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 234 ] , & i344fcmwfc1 . mgxxfhkfdi [ 235 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 236 ] , & i344fcmwfc1 . mgxxfhkfdi [ 237 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 238 ] , & i344fcmwfc1 . mgxxfhkfdi [ 239 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 240 ] , & i344fcmwfc1 . mgxxfhkfdi [ 241 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 242 ] , & i344fcmwfc1 . mgxxfhkfdi [ 243 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 244 ] , & i344fcmwfc1 . mgxxfhkfdi [ 245 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 246 ] , & i344fcmwfc1 . mgxxfhkfdi [ 247 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 248 ] , & i344fcmwfc1 . mgxxfhkfdi [ 249 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 250 ] , & i344fcmwfc1 . mgxxfhkfdi [ 251 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 252 ] , & i344fcmwfc1 . mgxxfhkfdi [ 253 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 254 ] , & i344fcmwfc1 . mgxxfhkfdi [ 255 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 256 ] , & i344fcmwfc1 . mgxxfhkfdi [ 257 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 258 ] , & i344fcmwfc1 . mgxxfhkfdi [ 259 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 260 ] , & i344fcmwfc1 . mgxxfhkfdi [ 261 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 262 ] , & i344fcmwfc1 . mgxxfhkfdi [ 263 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 264 ] , & i344fcmwfc1 . mgxxfhkfdi [ 265 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 266 ] , & i344fcmwfc1 . mgxxfhkfdi [ 267 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 268 ] , & i344fcmwfc1 . mgxxfhkfdi [ 269 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 270 ] , & i344fcmwfc1 . mgxxfhkfdi [ 271 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 272 ] , & i344fcmwfc1 . mgxxfhkfdi [ 273 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 274 ] , & i344fcmwfc1 . mgxxfhkfdi [ 275 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 276 ] , & i344fcmwfc1 . mgxxfhkfdi [ 277 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 278 ] , & i344fcmwfc1 . mgxxfhkfdi [ 279 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 280 ] , & i344fcmwfc1 . mgxxfhkfdi [ 281 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 282 ] , & i344fcmwfc1 . mgxxfhkfdi [ 283 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 284 ] , & i344fcmwfc1 . mgxxfhkfdi [ 285 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 286 ] , & i344fcmwfc1 . mgxxfhkfdi [ 287 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 288 ] , & i344fcmwfc1 . mgxxfhkfdi [ 289 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 290 ] , & i344fcmwfc1 . mgxxfhkfdi [ 291 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 292 ] , & i344fcmwfc1 . mgxxfhkfdi [ 293 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 294 ] , & i344fcmwfc1 . mgxxfhkfdi [ 295 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 296 ] , & i344fcmwfc1 . mgxxfhkfdi [ 297 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 298 ] , & i344fcmwfc1 . mgxxfhkfdi [ 299 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 300 ] , & i344fcmwfc1 . mgxxfhkfdi [ 301 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 302 ] , & i344fcmwfc1 . mgxxfhkfdi [ 303 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 304 ] , & i344fcmwfc1 . mgxxfhkfdi [ 305 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 306 ] , & i344fcmwfc1 . mgxxfhkfdi [ 307 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 308 ] , & i344fcmwfc1 . mgxxfhkfdi [ 309 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 310 ] , & i344fcmwfc1 . mgxxfhkfdi [ 311 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 312 ] , & i344fcmwfc1 . mgxxfhkfdi [ 313 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 314 ] , & i344fcmwfc1 . mgxxfhkfdi [ 315 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 316 ] , & i344fcmwfc1 . mgxxfhkfdi [ 317 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 318 ] , & i344fcmwfc1 . mgxxfhkfdi [ 319 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 320 ] , & i344fcmwfc1 . mgxxfhkfdi [ 321 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 322 ] , & i344fcmwfc1 . mgxxfhkfdi [ 323 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 324 ] , & i344fcmwfc1 . mgxxfhkfdi [ 325 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 326 ] , & i344fcmwfc1 . mgxxfhkfdi [ 327 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 328 ] , & i344fcmwfc1 . mgxxfhkfdi [ 329 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 330 ] , & i344fcmwfc1 . mgxxfhkfdi [ 331 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 332 ] , & i344fcmwfc1 . mgxxfhkfdi [ 333 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 334 ] , & i344fcmwfc1 . mgxxfhkfdi [ 335 ] , & i344fcmwfc1 .
mgxxfhkfdi [ 336 ] , & i344fcmwfc1 . piwaeu0cyd , & i344fcmwfc1 . lwcj1rfkgv
, & i344fcmwfc1 . ommjwylk33 , & i344fcmwfc1 . f5i3cl2axt , & rtP_radiator ,
& rtP_pump , & rtP_T_env , & rtP_T_init , & rtP_T_set , &
rtP__BattSocInit2f2BMS_Software_DD_sldd_ , & rtP_enable_regen , &
rtP_bat_soc_init , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "float" , "real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE
, 0 , 0 , 0 } , { "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T
) , ( uint8_T ) SS_BOOLEAN , 0 , 0 , 0 } , { "numeric" , "BMS_State_Enum" , 0
, 0 , sizeof ( BMS_State_Enum ) , ( uint8_T ) SS_ENUM_TYPE , 0 , 0 , SS_INT32
} , { "struct" , "CurrentLimits" , 2 , 1 , sizeof ( CurrentLimits ) , (
uint8_T ) SS_STRUCT , 0 , 0 , 0 } , { "struct" , "Contactors_Cmd" , 6 , 3 ,
sizeof ( Contactors_Cmd ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , { "struct"
, "BMS_Cmd" , 4 , 9 , sizeof ( BMS_Cmd ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0
} , { "struct" , "Sensors" , 6 , 13 , sizeof ( Sensors ) , ( uint8_T )
SS_STRUCT , 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" ,
"uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0
} , { "numeric" , "SRE" , 0 , 0 , sizeof ( SRE ) , ( uint8_T ) SS_ENUM_TYPE ,
0 , 0 , SS_INT32 } , { "struct" , "struct_3VsPydWBoiqQQizi9a3DAE" , 9 , 19 ,
sizeof ( struct_3VsPydWBoiqQQizi9a3DAE ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0
} , { "struct" , "struct_MnlE2uNdAoiKpaBUKAg05D" , 2 , 28 , sizeof (
struct_MnlE2uNdAoiKpaBUKAg05D ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "DischargeCurrentLimit" , rt_offsetof ( CurrentLimits ,
DischargeCurrentLimit ) , 1 , 0 , 0 } , { "ChargeCurrentLimit" , rt_offsetof
( CurrentLimits , ChargeCurrentLimit ) , 1 , 0 , 0 } , {
"PosContactorChgrCmd" , rt_offsetof ( Contactors_Cmd , PosContactorChgrCmd )
, 2 , 0 , 0 } , { "PreChargeRelayChgrCmd" , rt_offsetof ( Contactors_Cmd ,
PreChargeRelayChgrCmd ) , 2 , 0 , 0 } , { "NegContactorChgrCmd" , rt_offsetof
( Contactors_Cmd , NegContactorChgrCmd ) , 2 , 0 , 0 } , {
"PosContactorInvtrCmd" , rt_offsetof ( Contactors_Cmd , PosContactorInvtrCmd
) , 2 , 0 , 0 } , { "PreChargeRelayInvtrCmd" , rt_offsetof ( Contactors_Cmd ,
PreChargeRelayInvtrCmd ) , 2 , 0 , 0 } , { "NegContactorInvtrCmd" ,
rt_offsetof ( Contactors_Cmd , NegContactorInvtrCmd ) , 2 , 0 , 0 } , {
"CurrentLimits_Bus" , rt_offsetof ( BMS_Cmd , CurrentLimits_Bus ) , 4 , 0 , 0
} , { "ChargeCurrentReq" , rt_offsetof ( BMS_Cmd , ChargeCurrentReq ) , 1 , 0
, 0 } , { "ContactorsCmd_Bus" , rt_offsetof ( BMS_Cmd , ContactorsCmd_Bus ) ,
5 , 0 , 0 } , { "BalCmd" , rt_offsetof ( BMS_Cmd , BalCmd ) , 2 , 2 , 0 } , {
"Cell_Voltages" , rt_offsetof ( Sensors , Cell_Voltages ) , 1 , 1 , 0 } , {
"Pack_Voltage" , rt_offsetof ( Sensors , Pack_Voltage ) , 1 , 0 , 0 } , {
"Pack_Current" , rt_offsetof ( Sensors , Pack_Current ) , 1 , 0 , 0 } , {
"Cell_Temperatures" , rt_offsetof ( Sensors , Cell_Temperatures ) , 1 , 1 , 0
} , { "Vout_Chgr" , rt_offsetof ( Sensors , Vout_Chgr ) , 1 , 0 , 0 } , {
"Vout_Invtr" , rt_offsetof ( Sensors , Vout_Invtr ) , 1 , 0 , 0 } , {
"area_air" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , area_air ) , 0 ,
11 , 0 } , { "volume_air" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE ,
volume_air ) , 0 , 11 , 0 } , { "area_liquid" , rt_offsetof (
struct_3VsPydWBoiqQQizi9a3DAE , area_liquid ) , 0 , 11 , 0 } , {
"volume_liquid" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , volume_liquid
) , 0 , 11 , 0 } , { "mdot_air" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE
, mdot_air ) , 0 , 12 , 0 } , { "mdot_liquid" , rt_offsetof (
struct_3VsPydWBoiqQQizi9a3DAE , mdot_liquid ) , 0 , 12 , 0 } , { "SD" ,
rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , SD ) , 0 , 13 , 0 } , {
"dp_air" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , dp_air ) , 0 , 12 ,
0 } , { "dp_liquid" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , dp_liquid
) , 0 , 12 , 0 } , { "omega" , rt_offsetof ( struct_MnlE2uNdAoiKpaBUKAg05D ,
omega ) , 0 , 11 , 0 } , { "displacement" , rt_offsetof (
struct_MnlE2uNdAoiKpaBUKAg05D , displacement ) , 0 , 11 , 0 } } ; static
const rtwCAPI_DimensionMap rtDimensionMap [ ] = { { rtwCAPI_SCALAR , 0 , 2 ,
0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0
} , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 }
, { rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 0 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 16 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 18 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 1 , 1 , 96 , 1 , 1 , 96 , 2 , 1 , 4 , 1 , 7 , 1 ,
583 , 1 , 1801 , 1 , 1 , 2 , 2 , 2 } ; static const real_T rtcapiStoredFloats
[ ] = { 0.0 , 0.1 , 0.01 , 0.5 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 8 , - 5 ,
( boolean_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 8 , - 6 ,
( boolean_T ) 0 } } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] ,
( int8_T ) 3 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2
] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T )
0 } , { ( const void * ) & rtcapiStoredFloats [ 3 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 4 , ( uint8_T ) 0 } , { ( NULL ) , (
NULL ) , 6 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const
void * ) & rtcapiStoredFloats [ 4 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ;
static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 122 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 101 ,
rtModelParameters , 8 } , { rtBlockStates , 354 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1678879199U , 458555119U , 784608942U ,
1656421520U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo *
EvReferenceApplication_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void EvReferenceApplication_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( * rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 5 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EvReferenceApplication_host_InitializeDataMapInfo (
EvReferenceApplication_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; DrivetrainEv_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"EvReferenceApplication/Passenger Car/Drivetrain" ) ; dataMap -> childMMI [ 1
] = & ( dataMap -> child1 . mmi ) ; BattEv_host_InitializeDataMapInfo ( & (
dataMap -> child1 ) ,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery"
) ; dataMap -> childMMI [ 2 ] = & ( dataMap -> child2 . mmi ) ;
MotGenEvMapped_host_InitializeDataMapInfo ( & ( dataMap -> child2 ) ,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor/MotGenEvMapped"
) ; dataMap -> childMMI [ 3 ] = & ( dataMap -> child3 . mmi ) ;
BMS_Software_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) ; dataMap -> childMMI [ 4 ] = & ( dataMap -> child4 . mmi ) ;
EvPowertrainController_host_InitializeDataMapInfo ( & ( dataMap -> child4 ) ,
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Powertrain Control Module (PCM)"
) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 5 ) ; }
#ifdef __cplusplus
}
#endif
#endif
