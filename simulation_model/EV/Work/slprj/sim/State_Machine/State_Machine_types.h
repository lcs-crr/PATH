#ifndef RTW_HEADER_State_Machine_types_h_
#define RTW_HEADER_State_Machine_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SRE_
#define DEFINED_TYPEDEF_FOR_SRE_
typedef enum { Balancing = 0 , Charging , Driving } SRE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Contactors_Cmd_
#define DEFINED_TYPEDEF_FOR_Contactors_Cmd_
typedef struct { boolean_T PosContactorChgrCmd ; boolean_T
PreChargeRelayChgrCmd ; boolean_T NegContactorChgrCmd ; boolean_T
PosContactorInvtrCmd ; boolean_T PreChargeRelayInvtrCmd ; boolean_T
NegContactorInvtrCmd ; uint8_T sl_padding0 [ 2 ] ; } Contactors_Cmd ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Charge_Mode_Enum_
#define DEFINED_TYPEDEF_FOR_Charge_Mode_Enum_
typedef enum { Init_Mode = 0 , CC_Mode , CV_Mode } Charge_Mode_Enum ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Contact_
#define DEFINED_TYPEDEF_FOR_Contact_
typedef int8_T Contact ;
#define Contact_Init ((Contact)0)
#define Contact_Open ((Contact)1) 
#define Contact_Close ((Contact)2)
#endif
#ifndef DEFINED_TYPEDEF_FOR_MonitorCellTempModeType_
#define DEFINED_TYPEDEF_FOR_MonitorCellTempModeType_
typedef enum { MonitorCellTempModeType_None = 0 ,
MonitorCellTempModeType_NoCellTempFault ,
MonitorCellTempModeType_HighTemperatureFault ,
MonitorCellTempModeType_LowTemperatureFault } MonitorCellTempModeType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_MonitorCellVoltageModeType_
#define DEFINED_TYPEDEF_FOR_MonitorCellVoltageModeType_
typedef enum { MonitorCellVoltageModeType_None = 0 ,
MonitorCellVoltageModeType_NoCellVoltFault ,
MonitorCellVoltageModeType_OverVoltageFault ,
MonitorCellVoltageModeType_SensorFaut ,
MonitorCellVoltageModeType_UnderVoltageFault } MonitorCellVoltageModeType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_MonitorCurrLimModeType_
#define DEFINED_TYPEDEF_FOR_MonitorCurrLimModeType_
typedef enum { MonitorCurrLimModeType_None = 0 ,
MonitorCurrLimModeType_NoCurrLimFault , MonitorCurrLimModeType_Wait ,
MonitorCurrLimModeType_OverCurrentFault } MonitorCurrLimModeType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_State_Enum_
#define DEFINED_TYPEDEF_FOR_BMS_State_Enum_
typedef enum { BMS_Standby = 0 , BMS_Charging , BMS_Driving , BMS_Fault }
BMS_State_Enum ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Faults_
#define DEFINED_TYPEDEF_FOR_Faults_
typedef struct { boolean_T VoltSensor ; boolean_T OverCurrent ; boolean_T
HighTemp ; boolean_T LowTemp ; boolean_T OverVolt ; boolean_T UnderVolt ;
boolean_T Charger ; boolean_T Inverter ; } Faults ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 29
#endif
#ifndef SS_INT64
#define SS_INT64 30
#endif
typedef struct nphnkzl1z3p_ nphnkzl1z3p ; typedef struct i3du3bnr0k
p4isk5qdk5 ;
#endif
