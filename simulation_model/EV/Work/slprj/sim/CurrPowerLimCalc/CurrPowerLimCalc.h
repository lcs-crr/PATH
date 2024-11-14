#ifndef RTW_HEADER_CurrPowerLimCalc_h_
#define RTW_HEADER_CurrPowerLimCalc_h_
#ifndef CurrPowerLimCalc_COMMON_INCLUDES_
#define CurrPowerLimCalc_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "CurrPowerLimCalc_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
extern void CurrPowerLimCalc ( const real32_T pdtykrnyuy [ 96 ] , const
real32_T ogpv2grnvi [ 96 ] , CurrentLimits * dbds4lso1o , Min_Max_Cells *
drsszh5sm5 ) ; extern void kegbnk20qt ( void ) ; extern void dp1ymck0d2 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_CurrPowerLimCalc_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_CurrPowerLimCalc_GetDWork
( ) ; extern void mr_CurrPowerLimCalc_SetDWork ( const mxArray * ssDW ) ;
extern void mr_CurrPowerLimCalc_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_CurrPowerLimCalc_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * CurrPowerLimCalc_GetCAPIStaticMap (
void ) ;
#endif
