#ifndef RTW_HEADER_EvReferenceApplication_cap_host_h__
#define RTW_HEADER_EvReferenceApplication_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "DrivetrainEv_capi_host.h"
#include "BattEv_capi_host.h"
#include "MotGenEvMapped_capi_host.h"
#include "BMS_Software_capi_host.h"
#include "EvPowertrainController_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 5 ] ; DrivetrainEv_host_DataMapInfo_T child0 ;
BattEv_host_DataMapInfo_T child1 ; MotGenEvMapped_host_DataMapInfo_T child2 ;
BMS_Software_host_DataMapInfo_T child3 ;
EvPowertrainController_host_DataMapInfo_T child4 ; }
EvReferenceApplication_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void EvReferenceApplication_host_InitializeDataMapInfo (
EvReferenceApplication_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
