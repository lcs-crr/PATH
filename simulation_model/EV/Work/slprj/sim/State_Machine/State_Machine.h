#ifndef RTW_HEADER_State_Machine_h_
#define RTW_HEADER_State_Machine_h_
#ifndef State_Machine_COMMON_INCLUDES_
#define State_Machine_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "State_Machine_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
extern void fbbdju2hyi ( real32_T * fa1b0a12b3 , Contactors_Cmd * mc35bywmc2
, Faults * j4cf21m101 , BMS_State_Enum * nt5rorpg1b ) ; extern void
awd1kde5gy ( real32_T * fa1b0a12b3 , Faults * j4cf21m101 , BMS_State_Enum *
nt5rorpg1b ) ; extern void State_Machine ( const SRE * jg5y0voasf , const
real32_T edvo1h4h5d [ 96 ] , const real32_T * dh2300l5l2 , const real32_T *
lufgeyu1q4 , const real32_T * i1fk1kqhye , const real32_T * jessxdgyjk ,
const real32_T * kvr4iguryb , const real32_T * pglwzlktfp , const real32_T *
jyfgdhef1c , const real32_T * dv5h5mzyst , const real32_T * lff5okeqnz ,
const real32_T * g2rhhq2a5z , real32_T * fa1b0a12b3 , Contactors_Cmd *
mc35bywmc2 , Faults * j4cf21m101 , BMS_State_Enum * nt5rorpg1b ) ; extern
void nvavifp0ml ( void ) ; extern void co3mxuet1t ( SimStruct * _mdlRefSfcnS
, int_T mdlref_TID0 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_State_Machine_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_State_Machine_GetDWork ( ) ; extern
void mr_State_Machine_SetDWork ( const mxArray * ssDW ) ; extern void
mr_State_Machine_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_State_Machine_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * State_Machine_GetCAPIStaticMap ( void ) ;
void mr_State_Machine_CreateInitRestoreData ( ) ; void
mr_State_Machine_CopyFromInitRestoreData ( ) ; void
mr_State_Machine_DestroyInitRestoreData ( ) ;
#endif
