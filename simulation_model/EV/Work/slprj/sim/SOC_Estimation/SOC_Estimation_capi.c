#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SOC_Estimation_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 19
#endif
#ifndef SS_INT64
#define SS_INT64 20
#endif
#else
#include "builtin_typeid_types.h"
#include "SOC_Estimation.h"
#include "SOC_Estimation_capi.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"SOC_Estimation/Coulomb Counting" ) , TARGET_STRING ( "SOC_CC" ) , 0 , 0 , 0
, 0 , 0 } , { 1 , 1 , TARGET_STRING (
"SOC_Estimation/Coulomb Counting/Discrete-Time Integrator" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0
, 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 2 , - 1 ,
TARGET_STRING ( "SOC_Estimation/Coulomb Counting/Discrete-Time\nIntegrator" )
, TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 ,
- 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & jxmwlezzui4 . lcaflqhfdt ) ; dataAddr [ 1 ] =
( void * ) ( & jxmwlezzui4 . lcaflqhfdt ) ; dataAddr [ 2 ] = ( void * ) ( &
m3hvauf25pt . pe4apvu41x ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; loggingPtrs [ 1 ] = ( NULL
) ; loggingPtrs [ 2 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.1 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 2 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 ,
"SOC_Estimation/Coulomb Counting/Discrete-Time Integrator" , 0 , 0 } , { 1 ,
0 , "SOC_Estimation/Coulomb Counting/Discrete-Time Integrator" , 0 , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 2 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 2 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 823083328U , 4275837545U , 1876508671U , 4281024501U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * SOC_Estimation_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void SOC_Estimation_InitializeSystemRan ( egzjadadgd * const
j1wfl5js5r , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( j1wfl5js5r ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemTid [ 1 ] = dvyla3jdqx [ 0 ] ; systemTid [ 0 ] = rootTid ;
rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void SOC_Estimation_InitializeDataMapInfo ( egzjadadgd * const j1wfl5js5r ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( j1wfl5js5r ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( j1wfl5js5r -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( j1wfl5js5r -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; SOC_Estimation_InitializeDataAddr (
j1wfl5js5r -> DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap (
j1wfl5js5r -> DataMapInfo . mmi , j1wfl5js5r -> DataMapInfo . dataAddress ) ;
SOC_Estimation_InitializeVarDimsAddr ( j1wfl5js5r -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( j1wfl5js5r -> DataMapInfo .
mmi , j1wfl5js5r -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
j1wfl5js5r -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
j1wfl5js5r -> DataMapInfo . mmi , ( NULL ) ) ;
SOC_Estimation_InitializeLoggingFunctions ( j1wfl5js5r -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( j1wfl5js5r -> DataMapInfo . mmi ,
j1wfl5js5r -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
j1wfl5js5r -> DataMapInfo . mmi , & j1wfl5js5r -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( j1wfl5js5r -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( j1wfl5js5r -> DataMapInfo .
mmi , 0 ) ; SOC_Estimation_InitializeSystemRan ( j1wfl5js5r , j1wfl5js5r ->
DataMapInfo . systemRan , j1wfl5js5r -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( j1wfl5js5r -> DataMapInfo . mmi ,
j1wfl5js5r -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( j1wfl5js5r
-> DataMapInfo . mmi , j1wfl5js5r -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( j1wfl5js5r -> DataMapInfo . mmi , & dvyla3jdqx [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SOC_Estimation_host_InitializeDataMapInfo (
SOC_Estimation_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
