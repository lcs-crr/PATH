#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "BMS_Software_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 29
#endif
#ifndef SS_INT64
#define SS_INT64 30
#endif
#else
#include "builtin_typeid_types.h"
#include "BMS_Software.h"
#include "BMS_Software_capi.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_SignalHierLoggingInfo rtSigHierLoggingInfo [ ] = { { ""
, 6 , 0 } , { "Cell_Voltages" , 0 , - 1 } , { "Pack_Voltage" , 0 , - 1 } , {
"Pack_Current" , 0 , - 1 } , { "Cell_Temperatures" , 0 , - 1 } , {
"Vout_Chgr" , 0 , - 1 } , { "Vout_Invtr" , 0 , - 1 } } ; static const uint_T
rtSigHierLoggingChildIdxs [ ] = { 1 , 2 , 3 , 4 , 5 , 6 } ; static
rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0
, 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1 ,
TARGET_STRING ( "BMS_Software/Unit Delay" ) , TARGET_STRING ( "DSTATE" ) , ""
, 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T rt_LoggedStateIdxList
[ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void BMS_Software_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & klvauzhxrgs . mxdhgdid02 ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMS_Software_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ] )
{ vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void BMS_Software_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} , { "struct" , "Sensors" , 6 , 1 , sizeof ( Sensors ) , ( uint8_T )
SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "Cell_Voltages" , rt_offsetof ( Sensors , Cell_Voltages ) , 0
, 0 , 0 } , { "Pack_Voltage" , rt_offsetof ( Sensors , Pack_Voltage ) , 0 , 1
, 0 } , { "Pack_Current" , rt_offsetof ( Sensors , Pack_Current ) , 0 , 1 , 0
} , { "Cell_Temperatures" , rt_offsetof ( Sensors , Cell_Temperatures ) , 0 ,
0 , 0 } , { "Vout_Chgr" , rt_offsetof ( Sensors , Vout_Chgr ) , 0 , 1 , 0 } ,
{ "Vout_Invtr" , rt_offsetof ( Sensors , Vout_Invtr ) , 0 , 1 , 0 } } ;
static rtwCAPI_DimensionMap rtDimensionMap [ ] = { { rtwCAPI_VECTOR , 0 , 2 ,
0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] =
{ 96 , 1 , 1 , 1 } ; static const real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0
} ; static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 7 ,
rtSigHierLoggingInfo , rtSigHierLoggingChildIdxs } , 0 , ( NULL ) } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 0 , ( NULL )
, 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL ) , 0 } , { rtBlockStates , 1
} , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 697388811U , 3850982584U ,
2663582213U , 1130535725U } , & mmiStaticInfoLogging , 0 , ( boolean_T ) 0 ,
rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo *
BMS_Software_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void BMS_Software_InitializeSystemRan ( cd3pbbexvj * const cwyxhy01pz
, sysRanDType * systemRan [ ] , int_T systemTid [ ] , void * rootSysRanPtr ,
int rootTid ) { UNUSED_PARAMETER ( cwyxhy01pz ) ; systemRan [ 0 ] = (
sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemTid [ 1 ]
= jh2jgiamr0 [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] = 0 ;
rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void BMS_Software_InitializeDataMapInfo ( cd3pbbexvj * const cwyxhy01pz ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( cwyxhy01pz ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( cwyxhy01pz -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( cwyxhy01pz -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; BMS_Software_InitializeDataAddr (
cwyxhy01pz -> DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap (
cwyxhy01pz -> DataMapInfo . mmi , cwyxhy01pz -> DataMapInfo . dataAddress ) ;
BMS_Software_InitializeVarDimsAddr ( cwyxhy01pz -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( cwyxhy01pz -> DataMapInfo .
mmi , cwyxhy01pz -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
cwyxhy01pz -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
cwyxhy01pz -> DataMapInfo . mmi , ( NULL ) ) ;
BMS_Software_InitializeLoggingFunctions ( cwyxhy01pz -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( cwyxhy01pz -> DataMapInfo . mmi ,
cwyxhy01pz -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
cwyxhy01pz -> DataMapInfo . mmi , & cwyxhy01pz -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( cwyxhy01pz -> DataMapInfo .
mmi , cwyxhy01pz -> DataMapInfo . childMMI ) ; rtwCAPI_SetChildMMIArrayLen (
cwyxhy01pz -> DataMapInfo . mmi , 5 ) ; BMS_Software_InitializeSystemRan (
cwyxhy01pz , cwyxhy01pz -> DataMapInfo . systemRan , cwyxhy01pz ->
DataMapInfo . systemTid , sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan (
cwyxhy01pz -> DataMapInfo . mmi , cwyxhy01pz -> DataMapInfo . systemRan ) ;
rtwCAPI_SetSystemTid ( cwyxhy01pz -> DataMapInfo . mmi , cwyxhy01pz ->
DataMapInfo . systemTid ) ; rtwCAPI_SetGlobalTIDMap ( cwyxhy01pz ->
DataMapInfo . mmi , & jh2jgiamr0 [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void BMS_Software_host_InitializeDataMapInfo (
BMS_Software_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi )
; Balancing_Logic_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"BMS_Software/Balancing_Logic" ) ; dataMap -> childMMI [ 1 ] = & ( dataMap ->
child1 . mmi ) ; BMS_Out_host_InitializeDataMapInfo ( & ( dataMap -> child1 )
, "BMS_Software/BMS_Out" ) ; dataMap -> childMMI [ 2 ] = & ( dataMap ->
child2 . mmi ) ; CurrPowerLimCalc_host_InitializeDataMapInfo ( & ( dataMap ->
child2 ) , "BMS_Software/Current_Power_Limits_Calc" ) ; dataMap -> childMMI [
3 ] = & ( dataMap -> child3 . mmi ) ;
SOC_Estimation_host_InitializeDataMapInfo ( & ( dataMap -> child3 ) ,
"BMS_Software/SOC_Estimation" ) ; dataMap -> childMMI [ 4 ] = & ( dataMap ->
child4 . mmi ) ; State_Machine_host_InitializeDataMapInfo ( & ( dataMap ->
child4 ) , "BMS_Software/State_Machine" ) ; rtwCAPI_SetChildMMIArray (
dataMap -> mmi , dataMap -> childMMI ) ; rtwCAPI_SetChildMMIArrayLen (
dataMap -> mmi , 5 ) ; }
#ifdef __cplusplus
}
#endif
#endif
