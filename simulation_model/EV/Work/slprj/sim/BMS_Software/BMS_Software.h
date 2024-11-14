#ifndef RTW_HEADER_BMS_Software_h_
#define RTW_HEADER_BMS_Software_h_
#ifndef BMS_Software_COMMON_INCLUDES_
#define BMS_Software_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "BMS_Software_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
extern real32_T rtP_bat_soc_init ; extern void nzo0dhvfq4 ( void ) ; extern
void hy4zrtbl2l ( void ) ; extern void igzgwxk4wl ( void ) ; extern void
hvmwpriba1 ( void ) ; extern void bzlntq4fju ( const Sensors * bw0jkduw4i ) ;
extern void BMS_Software ( const SRE * mzvuetpgie , boolean_T * hxpjmzven2 ,
boolean_T * cll2qfmtgx , boolean_T * d2mkyedv2u , boolean_T * af0zpblzf1 ,
boolean_T * enfplctspi , boolean_T * nzrfu2eq1r , boolean_T * ku42qe24ds ,
boolean_T * fy1of2hhab , BMS_State_Enum * ovrgqo2r22 , real32_T * cthtzpvx1t
, BMS_Cmd * pxm3p1qldi ) ; extern void hwt4nru52w ( void ) ; extern void
gwi0ifigyi ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_BMS_Software_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T
* modelName , int_T * retVal ) ; extern mxArray * mr_BMS_Software_GetDWork (
) ; extern void mr_BMS_Software_SetDWork ( const mxArray * ssDW ) ; extern
void mr_BMS_Software_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_BMS_Software_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BMS_Software_GetCAPIStaticMap ( void ) ;
extern const Sensors BMS_Software_rtZSensors ; extern const CurrentLimits
BMS_Software_rtZCurrentLimits ; extern const Min_Max_Cells
BMS_Software_rtZMin_Max_Cells ; void mr_BMS_Software_CreateInitRestoreData (
) ; void mr_BMS_Software_CopyFromInitRestoreData ( ) ; void
mr_BMS_Software_DestroyInitRestoreData ( ) ;
#endif
