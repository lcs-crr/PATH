#ifndef RTW_HEADER_SOC_Estimation_h_
#define RTW_HEADER_SOC_Estimation_h_
#ifndef SOC_Estimation_COMMON_INCLUDES_
#define SOC_Estimation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SOC_Estimation_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
extern real32_T rtP_bat_soc_init ; extern void cketgpc2z3 ( void ) ; extern
void h41aqbjehq ( void ) ; extern void f4ikgzst5j ( void ) ; extern void
SOC_Estimation ( const real32_T * oebofow2tm , const real32_T ovzw2mh4vi [ 96
] , real32_T * mtifma1xgg ) ; extern void cefw35nic3 ( void ) ; extern void
ekir1iaqx0 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr
, int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SOC_Estimation_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SOC_Estimation_GetDWork (
) ; extern void mr_SOC_Estimation_SetDWork ( const mxArray * ssDW ) ; extern
void mr_SOC_Estimation_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_SOC_Estimation_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SOC_Estimation_GetCAPIStaticMap ( void ) ;
void mr_SOC_Estimation_CreateInitRestoreData ( ) ; void
mr_SOC_Estimation_CopyFromInitRestoreData ( ) ; void
mr_SOC_Estimation_DestroyInitRestoreData ( ) ;
#endif
