#ifndef RTW_HEADER_Balancing_Logic_h_
#define RTW_HEADER_Balancing_Logic_h_
#ifndef Balancing_Logic_COMMON_INCLUDES_
#define Balancing_Logic_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "Balancing_Logic_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
extern void ke3bmpbgy1 ( boolean_T n0dhexuye5 [ 96 ] ) ; extern void
epo0ltx0d0 ( boolean_T n0dhexuye5 [ 96 ] ) ; extern void Balancing_Logic (
const BMS_State_Enum * enyqnwlxig , const real32_T icxju2bicn [ 96 ] , const
real32_T * ija4kayim5 , const real32_T * ojgf0gssql , boolean_T n0dhexuye5 [
96 ] ) ; extern void fqfmn1ydgn ( void ) ; extern void evmer3ke3c ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Balancing_Logic_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Balancing_Logic_GetDWork (
) ; extern void mr_Balancing_Logic_SetDWork ( const mxArray * ssDW ) ; extern
void mr_Balancing_Logic_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Balancing_Logic_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Balancing_Logic_GetCAPIStaticMap ( void ) ;
void mr_Balancing_Logic_CreateInitRestoreData ( ) ; void
mr_Balancing_Logic_CopyFromInitRestoreData ( ) ; void
mr_Balancing_Logic_DestroyInitRestoreData ( ) ;
#endif
