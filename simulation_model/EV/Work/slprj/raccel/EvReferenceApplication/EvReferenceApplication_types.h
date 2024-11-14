#ifndef RTW_HEADER_EvReferenceApplication_types_h_
#define RTW_HEADER_EvReferenceApplication_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SRE_
#define DEFINED_TYPEDEF_FOR_SRE_
typedef enum { Balancing = 0 , Charging , Driving } SRE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_State_Enum_
#define DEFINED_TYPEDEF_FOR_BMS_State_Enum_
typedef enum { BMS_Standby = 0 , BMS_Charging , BMS_Driving , BMS_Fault }
BMS_State_Enum ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Sensors_
#define DEFINED_TYPEDEF_FOR_Sensors_
typedef struct { real32_T Cell_Voltages [ 96 ] ; real32_T Pack_Voltage ;
real32_T Pack_Current ; real32_T Cell_Temperatures [ 96 ] ; real32_T
Vout_Chgr ; real32_T Vout_Invtr ; } Sensors ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_CurrentLimits_
#define DEFINED_TYPEDEF_FOR_CurrentLimits_
typedef struct { real32_T DischargeCurrentLimit ; real32_T ChargeCurrentLimit
; } CurrentLimits ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Contactors_Cmd_
#define DEFINED_TYPEDEF_FOR_Contactors_Cmd_
typedef struct { boolean_T PosContactorChgrCmd ; boolean_T
PreChargeRelayChgrCmd ; boolean_T NegContactorChgrCmd ; boolean_T
PosContactorInvtrCmd ; boolean_T PreChargeRelayInvtrCmd ; boolean_T
NegContactorInvtrCmd ; uint8_T sl_padding0 [ 2 ] ; } Contactors_Cmd ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_BMS_Cmd_
#define DEFINED_TYPEDEF_FOR_BMS_Cmd_
typedef struct { CurrentLimits CurrentLimits_Bus ; real32_T ChargeCurrentReq
; uint8_T sl_padding0 [ 4 ] ; Contactors_Cmd ContactorsCmd_Bus ; boolean_T
BalCmd [ 96 ] ; } BMS_Cmd ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_3VsPydWBoiqQQizi9a3DAE_
#define DEFINED_TYPEDEF_FOR_struct_3VsPydWBoiqQQizi9a3DAE_
typedef struct { real_T area_air ; real_T volume_air ; real_T area_liquid ;
real_T volume_liquid ; real_T mdot_air [ 2 ] ; real_T mdot_liquid [ 2 ] ;
real_T SD [ 4 ] ; real_T dp_air [ 2 ] ; real_T dp_liquid [ 2 ] ; }
struct_3VsPydWBoiqQQizi9a3DAE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_MnlE2uNdAoiKpaBUKAg05D_
#define DEFINED_TYPEDEF_FOR_struct_MnlE2uNdAoiKpaBUKAg05D_
typedef struct { real_T omega ; real_T displacement ; }
struct_MnlE2uNdAoiKpaBUKAg05D ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 39
#endif
#ifndef SS_INT64
#define SS_INT64 40
#endif
typedef struct konn1m5pjfe_ konn1m5pjfe ;
#endif
