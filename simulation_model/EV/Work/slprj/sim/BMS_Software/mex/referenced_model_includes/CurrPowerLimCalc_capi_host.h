#ifndef RTW_HEADER_CurrPowerLimCalc_cap_host_h__
#define RTW_HEADER_CurrPowerLimCalc_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
CurrPowerLimCalc_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void CurrPowerLimCalc_host_InitializeDataMapInfo (
CurrPowerLimCalc_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
