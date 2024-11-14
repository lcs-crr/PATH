#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Balancing_Logic_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 18
#endif
#ifndef SS_INT64
#define SS_INT64 19
#endif
#else
#include "builtin_typeid_types.h"
#include "Balancing_Logic.h"
#include "Balancing_Logic_capi.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Balancing_Logic/Balancing/DeltaCellVolt" ) , TARGET_STRING ( "DeltaCellVolt"
) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 }
} ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1 , ( NULL ) , ( NULL
) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { - 1 } ;
#ifndef HOST_CAPI_BUILD
static void Balancing_Logic_InitializeDataAddr ( void * dataAddr [ ] ) {
dataAddr [ 0 ] = ( void * ) ( & ipz30jq5ukn . dp41utki0j ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Balancing_Logic_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void Balancing_Logic_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
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
} ; static const real_T rtcapiStoredFloats [ ] = { 5.0 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 3 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 , 0 } } ;
static rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 3 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 1 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 0 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1129932553U , 2273169683U , 702768722U , 735943791U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * Balancing_Logic_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void Balancing_Logic_InitializeSystemRan ( j5fbhmpe40 * const
mkofz0smxg , sysRanDType * systemRan [ ] , int_T systemTid [ ] , void *
rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER ( mkofz0smxg ) ; systemRan [
0 ] = ( sysRanDType * ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ;
systemRan [ 2 ] = ( NULL ) ; systemTid [ 1 ] = lao0s4sfjc [ 0 ] ; systemTid [
2 ] = lao0s4sfjc [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 0 ; rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void Balancing_Logic_InitializeDataMapInfo ( j5fbhmpe40 * const mkofz0smxg ,
void * sysRanPtr , int contextTid ) { rtwCAPI_SetVersion ( mkofz0smxg ->
DataMapInfo . mmi , 1 ) ; rtwCAPI_SetStaticMap ( mkofz0smxg -> DataMapInfo .
mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( mkofz0smxg -> DataMapInfo
. mmi , & mmiStaticInfoLogging ) ; Balancing_Logic_InitializeDataAddr (
mkofz0smxg -> DataMapInfo . dataAddress ) ; rtwCAPI_SetDataAddressMap (
mkofz0smxg -> DataMapInfo . mmi , mkofz0smxg -> DataMapInfo . dataAddress ) ;
Balancing_Logic_InitializeVarDimsAddr ( mkofz0smxg -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( mkofz0smxg -> DataMapInfo .
mmi , mkofz0smxg -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
mkofz0smxg -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
mkofz0smxg -> DataMapInfo . mmi , ( NULL ) ) ;
Balancing_Logic_InitializeLoggingFunctions ( mkofz0smxg -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( mkofz0smxg -> DataMapInfo . mmi ,
mkofz0smxg -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
mkofz0smxg -> DataMapInfo . mmi , & mkofz0smxg -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( mkofz0smxg -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( mkofz0smxg -> DataMapInfo .
mmi , 0 ) ; Balancing_Logic_InitializeSystemRan ( mkofz0smxg , mkofz0smxg ->
DataMapInfo . systemRan , mkofz0smxg -> DataMapInfo . systemTid , sysRanPtr ,
contextTid ) ; rtwCAPI_SetSystemRan ( mkofz0smxg -> DataMapInfo . mmi ,
mkofz0smxg -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid ( mkofz0smxg
-> DataMapInfo . mmi , mkofz0smxg -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( mkofz0smxg -> DataMapInfo . mmi , & lao0s4sfjc [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void Balancing_Logic_host_InitializeDataMapInfo (
Balancing_Logic_host_DataMapInfo_T * dataMap , const char * path ) {
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
