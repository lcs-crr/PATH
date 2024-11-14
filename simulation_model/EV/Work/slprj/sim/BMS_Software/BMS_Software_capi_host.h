#ifndef RTW_HEADER_BMS_Software_cap_host_h__
#define RTW_HEADER_BMS_Software_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "Balancing_Logic_capi_host.h"
#include "BMS_Out_capi_host.h"
#include "CurrPowerLimCalc_capi_host.h"
#include "SOC_Estimation_capi_host.h"
#include "State_Machine_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 5 ] ; Balancing_Logic_host_DataMapInfo_T child0 ;
BMS_Out_host_DataMapInfo_T child1 ; CurrPowerLimCalc_host_DataMapInfo_T
child2 ; SOC_Estimation_host_DataMapInfo_T child3 ;
State_Machine_host_DataMapInfo_T child4 ; } BMS_Software_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void BMS_Software_host_InitializeDataMapInfo (
BMS_Software_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
