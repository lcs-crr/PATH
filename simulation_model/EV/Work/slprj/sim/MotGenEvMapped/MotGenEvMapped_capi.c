#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "MotGenEvMapped_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "MotGenEvMapped.h"
#include "MotGenEvMapped_capi.h"
#include "MotGenEvMapped_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , 0 ,
TARGET_STRING (
 "MotGenEvMapped/Mapped Motor/Mapped Motor Core Speed 2/Maximum Torque and Power /Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void MotGenEvMapped_InitializeDataAddr ( void * dataAddr [ ] ,
e4ld3xwh5m * localDW , had2nm4nh5 * localX ) { dataAddr [ 0 ] = ( void * ) (
& localX -> boofytynkf ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotGenEvMapped_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void MotGenEvMapped_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 4 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 4 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 3380538223U , 3626056453U , 728979910U , 1394782293U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * MotGenEvMapped_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void MotGenEvMapped_InitializeSystemRan ( p5veghsq5l * const
evs52r32sz , sysRanDType * systemRan [ ] , e4ld3xwh5m * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
evs52r32sz ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( sysRanDType * ) & localDW ->
nnobr021gq ; systemRan [ 2 ] = ( sysRanDType * ) & localDW -> p0ylzwrrqf ;
systemRan [ 3 ] = ( NULL ) ; systemTid [ 1 ] = evs52r32sz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 2 ] = evs52r32sz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 3 ] = evs52r32sz -> Timing .
mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] = rootTid ; rtContextSystems [ 0 ] =
0 ; rtContextSystems [ 1 ] = 1 ; rtContextSystems [ 2 ] = 2 ;
rtContextSystems [ 3 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void MotGenEvMapped_InitializeDataMapInfo ( p5veghsq5l * const evs52r32sz ,
e4ld3xwh5m * localDW , had2nm4nh5 * localX , void * sysRanPtr , int
contextTid ) { rtwCAPI_SetVersion ( evs52r32sz -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( evs52r32sz -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( evs52r32sz -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; MotGenEvMapped_InitializeDataAddr ( evs52r32sz ->
DataMapInfo . dataAddress , localDW , localX ) ; rtwCAPI_SetDataAddressMap (
evs52r32sz -> DataMapInfo . mmi , evs52r32sz -> DataMapInfo . dataAddress ) ;
MotGenEvMapped_InitializeVarDimsAddr ( evs52r32sz -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( evs52r32sz -> DataMapInfo .
mmi , evs52r32sz -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
evs52r32sz -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
evs52r32sz -> DataMapInfo . mmi , ( NULL ) ) ;
MotGenEvMapped_InitializeLoggingFunctions ( evs52r32sz -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( evs52r32sz -> DataMapInfo . mmi ,
evs52r32sz -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
evs52r32sz -> DataMapInfo . mmi , & evs52r32sz -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( evs52r32sz -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( evs52r32sz -> DataMapInfo .
mmi , 0 ) ; MotGenEvMapped_InitializeSystemRan ( evs52r32sz , evs52r32sz ->
DataMapInfo . systemRan , localDW , evs52r32sz -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( evs52r32sz -> DataMapInfo .
mmi , evs52r32sz -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
evs52r32sz -> DataMapInfo . mmi , evs52r32sz -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( evs52r32sz -> DataMapInfo . mmi , & evs52r32sz ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void MotGenEvMapped_host_InitializeDataMapInfo (
MotGenEvMapped_host_DataMapInfo_T * dataMap , const char * path ) {
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
