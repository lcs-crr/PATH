#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "EVBatteryCoolingSystem_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 26
#endif
#ifndef SS_INT64
#define SS_INT64 27
#endif
#else
#include "builtin_typeid_types.h"
#include "EVBatteryCoolingSystem.h"
#include "EVBatteryCoolingSystem_capi.h"
#include "EVBatteryCoolingSystem_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Air Stream/Air velocity [m//s]" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Air Stream/Product" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Product" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 0 } , { 4 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Pump response delay" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Pump Power/kW" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 6 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Solver Configuration/RTP_1" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 7 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Subsystem/T_max" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 8 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Subsystem/T_min" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 9 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/System Inputs/From Workspace" ) , TARGET_STRING (
"Current" ) , 0 , 0 , 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/System Inputs/fromWS_Signal 1" ) , TARGET_STRING (
"Speed" ) , 0 , 0 , 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Sum2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 0 , 1 , 2 } , { 14 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Efficiency" )
, TARGET_STRING ( "Power" ) , 0 , 0 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING
( "EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Anti-windup/Back Calculation/Kb"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Anti-windup/Back Calculation/SumI2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Anti-windup/Back Calculation/SumI4"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/D Gain/Internal Parameters/Derivative Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Filter/Cont. Filter/Filter"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Filter/Cont. Filter/SumD"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/I Gain/Internal Parameters/Integral Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Integrator/Continuous/Integrator"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/N Gain/Internal Parameters/Filter Coefficient"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Parallel P Gain/Internal Parameters/Proportional Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Saturation/Enabled/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Sum/Sum_PID/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 34 , TARGET_STRING (
"EVBatteryCoolingSystem/Air Stream/Air velocity [m//s]" ) , TARGET_STRING (
"Bias" ) , 0 , 0 , 0 } , { 35 , TARGET_STRING (
"EVBatteryCoolingSystem/Air Stream/Air density [kg//m^3]" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Relay" ) , TARGET_STRING ( "OnSwitchValue"
) , 0 , 0 , 0 } , { 37 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Relay" ) , TARGET_STRING (
"OffSwitchValue" ) , 0 , 0 , 0 } , { 38 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Relay" ) , TARGET_STRING ( "OnOutputValue"
) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Relay" ) , TARGET_STRING (
"OffOutputValue" ) , 0 , 0 , 0 } , { 40 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Pump response delay" ) , TARGET_STRING (
"A" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"EVBatteryCoolingSystem/Controller/Pump response delay" ) , TARGET_STRING (
"C" ) , 0 , 0 , 0 } , { 42 , TARGET_STRING (
"EVBatteryCoolingSystem/Pump Power/kW" ) , TARGET_STRING ( "Gain" ) , 0 , 0 ,
0 } , { 43 , TARGET_STRING (
"EVBatteryCoolingSystem/System Inputs/From Workspace" ) , TARGET_STRING (
"Time0" ) , 0 , 4 , 0 } , { 44 , TARGET_STRING (
"EVBatteryCoolingSystem/System Inputs/From Workspace" ) , TARGET_STRING (
"Data0" ) , 0 , 4 , 0 } , { 45 , TARGET_STRING (
"EVBatteryCoolingSystem/System Inputs/fromWS_Signal 1" ) , TARGET_STRING (
"Time0" ) , 0 , 4 , 0 } , { 46 , TARGET_STRING (
"EVBatteryCoolingSystem/System Inputs/fromWS_Signal 1" ) , TARGET_STRING (
"Data0" ) , 0 , 4 , 0 } , { 47 , TARGET_STRING (
 "EVBatteryCoolingSystem/Subsystem_around_RTP_A90ABFEE_level/Subsystem_around_RTP_A90ABFEE_level"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
 "EVBatteryCoolingSystem/Subsystem_around_RTP_A90ABFEE_p_gas/Subsystem_around_RTP_A90ABFEE_p_gas"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 49 , TARGET_STRING (
 "EVBatteryCoolingSystem/Subsystem_around_RTP_A90ABFEE_volume_liquid/Subsystem_around_RTP_A90ABFEE_volume_liquid"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 50 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "P" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "I" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "D" ) , 0 , 0 , 0 } , { 53 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "N" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForIntegrator" ) , 0 , 0 , 0 } , { 55 ,
TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "InitialConditionForFilter" ) , 0 , 0 , 0 } , { 56 ,
TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING
( "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING
( "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller" ) ,
TARGET_STRING ( "Kb" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Gain" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 2 } , { 64 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 1 } , { 65 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 1 , 0 , 1 } , { 66 , TARGET_STRING (
"EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Efficiency" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "A_pr" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "A_ir" ) , 2 , 0 , 0 } , { 69 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "A_jc" ) , 2 , 5 , 0 } , { 70 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "B_pr" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "B_ir" ) , 2 , 0 , 0 } , { 72 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "B_jc" ) , 2 , 5 , 0 } , { 73 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "C_pr" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "C_ir" ) , 2 , 0 , 0 } , { 75 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "C_jc" ) , 2 , 5 , 0 } , { 76 , TARGET_STRING (
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn (with initial outputs)/State Space"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 77 , TARGET_STRING
(
 "EVBatteryCoolingSystem/Battery/Pack 1/Thermal Model/Subsystem_around_RTP_731D9D8D_T/Subsystem_around_RTP_731D9D8D_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
 "EVBatteryCoolingSystem/Battery/Pack 2/Thermal Model/Subsystem_around_RTP_7EE98BC0_T/Subsystem_around_RTP_7EE98BC0_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
 "EVBatteryCoolingSystem/Battery/Pack 3/Thermal Model/Subsystem_around_RTP_95CC90AC_T/Subsystem_around_RTP_95CC90AC_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING (
 "EVBatteryCoolingSystem/Battery/Pack 4/Thermal Model/Subsystem_around_RTP_7D09336B_T/Subsystem_around_RTP_7D09336B_T"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 81 , TARGET_STRING (
"radiator" ) , 3 , 0 , 0 } , { 82 , TARGET_STRING ( "pump" ) , 4 , 0 , 0 } ,
{ 83 , TARGET_STRING ( "T_env" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
"T_init" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING ( "T_set" ) , 0 , 0 , 0 } , {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . kvdm2qa4kz , & rtB . bdmsuutsho ,
& rtB . cbztcpotvv , & rtB . ne3aknl42j , & rtB . awjh3m2i52 , & rtB .
e2egazwdtp , & rtB . g5jq2txgex , & rtB . onxkezlpwm , & rtB . g4gjxqt3j1 , &
rtB . jjbuzly2c4 , & rtB . hdgi0ckwmt , & rtB . guzkycy441 , & rtB .
ek2xrgvbnw , & rtB . pat4o3qai3 , & rtB . eaf2lxhueg , & rtB . g4x5d1kqrr [ 0
] , & rtB . c4vppbzui3 [ 0 ] , & rtB . apvg0yhoqc [ 0 ] , & rtB . hmdfvofm2d
[ 0 ] , & rtB . cizm5vaana [ 0 ] , & rtB . ci1eqffra0 [ 0 ] , & rtB .
kj5ged5ouv , & rtB . mijc1dwvec , & rtB . obweg0l22f , & rtB . gmef4hcfga , &
rtB . ktxsqan1ix , & rtB . ox2ag4rjwi , & rtB . ktdys5yo0t , & rtB .
j4w0fnlfbw , & rtB . daxysc2t0q , & rtB . jdzew5kwiu , & rtB . e4dmel4npm , &
rtB . cwyp0u4fxj , & rtB . n1kdcxnjx2 , & rtP . Airvelocityms_Bias , & rtP .
Airdensitykgm3_Value , & rtP . Relay_OnVal , & rtP . Relay_OffVal , & rtP .
Relay_YOn , & rtP . Relay_YOff , & rtP . Pumpresponsedelay_A , & rtP .
Pumpresponsedelay_C , & rtP . kW_Gain , & rtP . FromWorkspace_Time0 [ 0 ] , &
rtP . FromWorkspace_Data0 [ 0 ] , & rtP . fromWS_Signal1_Time0 [ 0 ] , & rtP
. fromWS_Signal1_Data0 [ 0 ] , & rtP . RTP_A90ABFEE_level_Value , & rtP .
RTP_A90ABFEE_p_gas_Value , & rtP . RTP_A90ABFEE_volume_liquid_Value , & rtP .
PIDController_P , & rtP . PIDController_I , & rtP . PIDController_D , & rtP .
PIDController_N , & rtP . PIDController_InitialConditionForIntegrator , & rtP
. PIDController_InitialConditionForFilter , & rtP .
PIDController_UpperSaturationLimit , & rtP .
PIDController_LowerSaturationLimit , & rtP . PIDController_Kb , & rtP .
Constant_Value , & rtP . Constant1_Value , & rtP . Constant2_Value , & rtP .
Constant3_Value , & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP . Gain2_Gain
, & rtP . Efficiency_Gain , & rtP . StateSpace_A_pr , & rtP . StateSpace_A_ir
, & rtP . StateSpace_A_jc [ 0 ] , & rtP . StateSpace_B_pr , & rtP .
StateSpace_B_ir , & rtP . StateSpace_B_jc [ 0 ] , & rtP . StateSpace_C_pr , &
rtP . StateSpace_C_ir , & rtP . StateSpace_C_jc [ 0 ] , & rtP .
StateSpace_InitialCondition , & rtP . RTP_731D9D8D_T_Value , & rtP .
RTP_7EE98BC0_T_Value , & rtP . RTP_95CC90AC_T_Value , & rtP .
RTP_7D09336B_T_Value , & rtP . radiator , & rtP . pump , & rtP . T_env , &
rtP . T_init , & rtP . T_set , } ; static int32_T * rtVarDimsAddrMap [ ] = {
( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "struct" ,
"struct_3VsPydWBoiqQQizi9a3DAE" , 9 , 1 , sizeof (
struct_3VsPydWBoiqQQizi9a3DAE ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } , {
"struct" , "struct_MnlE2uNdAoiKpaBUKAg05D" , 2 , 10 , sizeof (
struct_MnlE2uNdAoiKpaBUKAg05D ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "area_air" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE ,
area_air ) , 0 , 6 , 0 } , { "volume_air" , rt_offsetof (
struct_3VsPydWBoiqQQizi9a3DAE , volume_air ) , 0 , 6 , 0 } , { "area_liquid"
, rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , area_liquid ) , 0 , 6 , 0 } ,
{ "volume_liquid" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE ,
volume_liquid ) , 0 , 6 , 0 } , { "mdot_air" , rt_offsetof (
struct_3VsPydWBoiqQQizi9a3DAE , mdot_air ) , 0 , 7 , 0 } , { "mdot_liquid" ,
rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , mdot_liquid ) , 0 , 7 , 0 } , {
"SD" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , SD ) , 0 , 8 , 0 } , {
"dp_air" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , dp_air ) , 0 , 7 , 0
} , { "dp_liquid" , rt_offsetof ( struct_3VsPydWBoiqQQizi9a3DAE , dp_liquid )
, 0 , 7 , 0 } , { "omega" , rt_offsetof ( struct_MnlE2uNdAoiKpaBUKAg05D ,
omega ) , 0 , 6 , 0 } , { "displacement" , rt_offsetof (
struct_MnlE2uNdAoiKpaBUKAg05D , displacement ) , 0 , 6 , 0 } } ; static const
rtwCAPI_DimensionMap rtDimensionMap [ ] = { { rtwCAPI_SCALAR , 0 , 2 , 0 } ,
{ rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 4 , 2 , 0 } , {
rtwCAPI_VECTOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } , {
rtwCAPI_VECTOR , 10 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 14 , 2
, 0 } } ; static const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 7 , 1
, 583 , 1 , 264079 , 1 , 2 , 1 , 1 , 2 , 2 , 2 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , (
boolean_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 8 , - 5 ,
( boolean_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , rtwCAPI_FIX_UNIFORM_SCALING , 8 , - 6 ,
( boolean_T ) 0 } } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ]
= { { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void *
) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] ,
( int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 34 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 47 ,
rtModelParameters , 5 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 2345401999U , 1799780700U , 1412942005U , 74665851U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * EVBatteryCoolingSystem_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void EVBatteryCoolingSystem_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void EVBatteryCoolingSystem_host_InitializeDataMapInfo (
EVBatteryCoolingSystem_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
