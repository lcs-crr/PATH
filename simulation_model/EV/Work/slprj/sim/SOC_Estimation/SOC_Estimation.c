#include "SOC_Estimation.h"
#include "rtwtypes.h"
#include "SOC_Estimation_private.h"
#include "SOC_Estimation_capi.h"
#include "look1_iflf_binlxpw.h"
#include "rt_nonfinite.h"
int_T dvyla3jdqx [ 1 ] ; static RegMdlInfo rtMdlInfo_SOC_Estimation [ 59 ] =
{ { "lgpwz0u0ydd" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "lgpwz0u0yd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "cvzxv4ktc5y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "eqjixet00ib" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "fgeftxmpge5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "lnoovscpr0t" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "ohraxrjqyx2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "jl1gn3n14pp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "lqlgmpxtaft" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "bwktun3tvq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "h2zwd4xdarx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "mfgbkriadaf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "eyairrb1z1t" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "cgl1fjb0mky" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "hnvysp1jca0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "cvzxv4ktc5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "eqjixet00i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "fgeftxmpge" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "lnoovscpr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "ohraxrjqyx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "jl1gn3n14p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "lqlgmpxtaf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "h2zwd4xdar" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "mfgbkriada" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "eyairrb1z1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "cgl1fjb0mk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "hnvysp1jca" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "k5yohwlgmv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "cefw35nic3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "gjpw0ezevr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "f4ikgzst5j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "h41aqbjehq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "cketgpc2z3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "ekir1iaqx0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "acaeyrlq5y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "bbmdfwr4m4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "SOC_Estimation" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } ,
{ "cvfhosdrdr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "dvyla3jdqx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "m3hvauf25pt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "jxmwlezzui4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SOC_Estimation" } , { "omhym1uzw2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , { "egzjadadgd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SOC_Estimation" } ,
{ "SOC_Est" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Sensors" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_SOC_Estimation_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SOC_Estimation" } , { "mr_SOC_Estimation_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SOC_Estimation" } , {
"mr_SOC_Estimation_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "SOC_Estimation" } , { "SOC_Estimation.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "SOC_Estimation.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 ,
( void * ) "SOC_Estimation" } } ; jy3u04is5jr eyairrb1z1 = { 0.1F , 1.0F ,
0.0F , { 125.40377F , 130.083023F , 148.8F , 146.928299F } , { - 10.0F , 0.0F
, 25.0F , 40.0F } , 0.000277777785F } ; lgpwz0u0ydd lgpwz0u0yd ; hnvysp1jca0
jxmwlezzui4 ; cgl1fjb0mky m3hvauf25pt ; void cketgpc2z3 ( void ) {
m3hvauf25pt . pe4apvu41x = rtP_bat_soc_init ; } void h41aqbjehq ( void ) {
m3hvauf25pt . pe4apvu41x = rtP_bat_soc_init ; } void SOC_Estimation ( const
real32_T * oebofow2tm , const real32_T ovzw2mh4vi [ 96 ] , real32_T *
mtifma1xgg ) { real32_T hdrwl22htd ; real32_T knwsrfezgx ; jxmwlezzui4 .
lcaflqhfdt = m3hvauf25pt . pe4apvu41x ; * mtifma1xgg = jxmwlezzui4 .
lcaflqhfdt ; knwsrfezgx = look1_iflf_binlxpw ( ovzw2mh4vi [ 0 ] , eyairrb1z1
. P_5 , eyairrb1z1 . P_4 , 3U ) ; hdrwl22htd = eyairrb1z1 . P_6 * *
oebofow2tm ; jxmwlezzui4 . ly3tjszkyg = hdrwl22htd / knwsrfezgx ; } void
f4ikgzst5j ( void ) { m3hvauf25pt . pe4apvu41x += eyairrb1z1 . P_1 *
jxmwlezzui4 . ly3tjszkyg ; if ( m3hvauf25pt . pe4apvu41x > eyairrb1z1 . P_2 )
{ m3hvauf25pt . pe4apvu41x = eyairrb1z1 . P_2 ; } else if ( m3hvauf25pt .
pe4apvu41x < eyairrb1z1 . P_3 ) { m3hvauf25pt . pe4apvu41x = eyairrb1z1 . P_3
; } } void cefw35nic3 ( void ) { egzjadadgd * const j1wfl5js5r = & (
lgpwz0u0yd . rtm ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( j1wfl5js5r -> _mdlRefSfcnS , "SOC_Estimation" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void ekir1iaqx0 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { egzjadadgd *
const j1wfl5js5r = & ( lgpwz0u0yd . rtm ) ; rt_InitInfAndNaN ( sizeof (
real_T ) ) ; ( void ) memset ( ( void * ) j1wfl5js5r , 0 , sizeof (
egzjadadgd ) ) ; dvyla3jdqx [ 0 ] = mdlref_TID0 ; j1wfl5js5r -> _mdlRefSfcnS
= ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( j1wfl5js5r -> _mdlRefSfcnS , "SOC_Estimation" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { jxmwlezzui4 . lcaflqhfdt =
0.0F ; jxmwlezzui4 . ly3tjszkyg = 0.0F ; } m3hvauf25pt . pe4apvu41x = 0.0F ;
SOC_Estimation_InitializeDataMapInfo ( j1wfl5js5r , sysRanPtr , contextTid )
; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( j1wfl5js5r ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( j1wfl5js5r -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( j1wfl5js5r ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void mr_SOC_Estimation_MdlInfoRegFcn
( SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal
= 0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_SOC_Estimation , 59 ) ; * retVal = 1 ; } static void
mr_SOC_Estimation_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_SOC_Estimation_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SOC_Estimation_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_SOC_Estimation_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_SOC_Estimation_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_SOC_Estimation_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_SOC_Estimation_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_SOC_Estimation_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_SOC_Estimation_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_SOC_Estimation_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SOC_Estimation_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_SOC_Estimation_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_SOC_Estimation_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_SOC_Estimation_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_SOC_Estimation_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SOC_Estimation_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_SOC_Estimation_GetDWork ( ) { static
const char_T * ssDWFieldNames [ 3 ] = { "jxmwlezzui4" , "m3hvauf25pt" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_SOC_Estimation_cacheDataAsMxArray ( ssDW , 0 , 0 , (
const void * ) & ( jxmwlezzui4 ) , sizeof ( jxmwlezzui4 ) ) ; { static const
char_T * rtdwDataFieldNames [ 1 ] = { "m3hvauf25pt.pe4apvu41x" , } ; mxArray
* rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames ) ;
mr_SOC_Estimation_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) &
( m3hvauf25pt . pe4apvu41x ) , sizeof ( m3hvauf25pt . pe4apvu41x ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_SOC_Estimation_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( jxmwlezzui4 ) ,
ssDW , 0 , 0 , sizeof ( jxmwlezzui4 ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_SOC_Estimation_restoreDataFromMxArray ( ( void * ) & ( m3hvauf25pt .
pe4apvu41x ) , rtdwData , 0 , 0 , sizeof ( m3hvauf25pt . pe4apvu41x ) ) ; } }
void mr_SOC_Estimation_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 2111725708U , 3089304606U , 1282740170U ,
797074441U , } ; slmrModelRefRegisterSimStateChecksum ( S , "SOC_Estimation"
, & chksum [ 0 ] ) ; } mxArray *
mr_SOC_Estimation_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
static void * SOC_Estimation_InitRestoreDataPtr = ( NULL ) ; void
mr_SOC_Estimation_CreateInitRestoreData ( ) {
SOC_Estimation_InitRestoreDataPtr = utMalloc ( sizeof ( m3hvauf25pt ) ) ;
memcpy ( SOC_Estimation_InitRestoreDataPtr , ( void * ) & ( m3hvauf25pt ) ,
sizeof ( m3hvauf25pt ) ) ; } void mr_SOC_Estimation_CopyFromInitRestoreData (
) { memcpy ( ( void * ) & ( m3hvauf25pt ) , SOC_Estimation_InitRestoreDataPtr
, sizeof ( m3hvauf25pt ) ) ; } void mr_SOC_Estimation_DestroyInitRestoreData
( ) { utFree ( SOC_Estimation_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
