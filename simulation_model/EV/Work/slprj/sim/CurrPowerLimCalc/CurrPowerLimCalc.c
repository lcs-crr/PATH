#include "CurrPowerLimCalc.h"
#include "rtwtypes.h"
#include "CurrPowerLimCalc_types.h"
#include "CurrPowerLimCalc_private.h"
#include "mwmathutil.h"
#include "CurrPowerLimCalc_capi.h"
#include "look1_iflf_binlcpw.h"
#include "rt_nonfinite.h"
int_T bpvrateqsu [ 1 ] ; static RegMdlInfo rtMdlInfo_CurrPowerLimCalc [ 56 ]
= { { "pdpnucaqsyk" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "pdpnucaqsy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "ad2pkd2esmt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "abaabxgsrsn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "fxqhlqlitsm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "ja3f1i0zenx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "amxwaj0jodz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "epjvymtwx4v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "fcxsbchn4bh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "l124ucunlp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "mcqalfehdpp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "o2lyusd0eo5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "dfqb3czrc5a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "j1wtqpgv2i1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "erutuqncgst" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "ad2pkd2esm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "abaabxgsrs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "fxqhlqlits" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "ja3f1i0zen" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "amxwaj0jod" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "epjvymtwx4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "fcxsbchn4b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "mcqalfehdp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "o2lyusd0eo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "dfqb3czrc5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "j1wtqpgv2i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "erutuqncgs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "kuq10ooizg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "kegbnk20qt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "hzwwsantcv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "dp1ymck0d2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "fo23ejrjqa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "gtb1pme1dc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "CurrPowerLimCalc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "ooamdzz2yne" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "bpvrateqsu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , { "lyxcuhrej1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "CurrPowerLimCalc" }
, { "ajbfpygfl2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"CurrPowerLimCalc" } , { "MinCellVoltDchrgCurrentLimTable" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Min_Max_Cells" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "CurrentLimits" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Sensors" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_CurrPowerLimCalc_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "CurrPowerLimCalc" } , { "mr_CurrPowerLimCalc_SetDWork"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "CurrPowerLimCalc" } , {
"mr_CurrPowerLimCalc_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "CurrPowerLimCalc" } , { "CurrPowerLimCalc.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "CurrPowerLimCalc.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "CurrPowerLimCalc" } } ;
laetnnrxsil dfqb3czrc5 = { { 0.0F , 0.5F , 1.0F } , { 2.5F , 2.75F , 3.0F } ,
{ 0.0F , 0.2F , 0.3F , 0.5F , 0.75F , 1.0F , 1.0F } , { - 10.0F , - 5.0F ,
0.0F , 5.0F , 10.0F , 15.0F , 20.0F } , { 1.0F , 0.5F , 0.3F , 0.0F } , {
40.0F , 45.0F , 50.0F , 60.0F } , - 20.0F , 31.0F , { 1.0F , 0.8F , 0.3F ,
0.3F } , { 3.9F , 4.0F , 4.15F , 4.2F } , { 0.1F , 0.2F , 0.3F , 0.3F , 0.5F
, 1.0F , 1.0F } , { - 15.0F , - 10.0F , - 5.0F , 0.0F , 5.0F , 10.0F , 15.0F
} , { 1.0F , 0.8F , 0.5F , 0.3F , 0.0F } , { 40.0F , 45.0F , 50.0F , 55.0F ,
60.0F } , 6.36F , 31.0F } ; pdpnucaqsyk pdpnucaqsy ; void CurrPowerLimCalc (
const real32_T pdtykrnyuy [ 96 ] , const real32_T ogpv2grnvi [ 96 ] ,
CurrentLimits * dbds4lso1o , Min_Max_Cells * drsszh5sm5 ) { int32_T sigIdx ;
real32_T maxV ; real32_T maxV_p ; real32_T minV ; real32_T minV_p ; real32_T
pdtykrnyuy_p ; minV = pdtykrnyuy [ 0 ] ; maxV = pdtykrnyuy [ 0 ] ; minV_p =
ogpv2grnvi [ 0 ] ; maxV_p = ogpv2grnvi [ 0 ] ; for ( sigIdx = 0 ; sigIdx < 95
; sigIdx ++ ) { pdtykrnyuy_p = pdtykrnyuy [ sigIdx + 1 ] ; minV =
muSingleScalarMin ( minV , pdtykrnyuy_p ) ; maxV = muSingleScalarMax ( maxV ,
pdtykrnyuy_p ) ; pdtykrnyuy_p = ogpv2grnvi [ sigIdx + 1 ] ; minV_p =
muSingleScalarMin ( minV_p , pdtykrnyuy_p ) ; maxV_p = muSingleScalarMax (
maxV_p , pdtykrnyuy_p ) ; } drsszh5sm5 -> MinCellVolt = minV ; drsszh5sm5 ->
MaxCellVolt = maxV ; drsszh5sm5 -> MinCellTemp = minV_p ; drsszh5sm5 ->
MaxCellTemp = maxV_p ; dbds4lso1o -> DischargeCurrentLimit = dfqb3czrc5 . P_6
* muSingleScalarMin ( muSingleScalarMin ( look1_iflf_binlcpw ( drsszh5sm5 ->
MinCellVolt , dfqb3czrc5 . P_1 , dfqb3czrc5 . P_0 , 2U ) , look1_iflf_binlcpw
( drsszh5sm5 -> MinCellTemp , dfqb3czrc5 . P_3 , dfqb3czrc5 . P_2 , 6U ) ) ,
look1_iflf_binlcpw ( drsszh5sm5 -> MaxCellTemp , dfqb3czrc5 . P_5 ,
dfqb3czrc5 . P_4 , 3U ) ) * dfqb3czrc5 . P_7 ; dbds4lso1o ->
ChargeCurrentLimit = dfqb3czrc5 . P_14 * muSingleScalarMin (
muSingleScalarMin ( look1_iflf_binlcpw ( drsszh5sm5 -> MaxCellVolt ,
dfqb3czrc5 . P_9 , dfqb3czrc5 . P_8 , 3U ) , look1_iflf_binlcpw ( drsszh5sm5
-> MinCellTemp , dfqb3czrc5 . P_11 , dfqb3czrc5 . P_10 , 6U ) ) ,
look1_iflf_binlcpw ( drsszh5sm5 -> MaxCellTemp , dfqb3czrc5 . P_13 ,
dfqb3czrc5 . P_12 , 4U ) ) * dfqb3czrc5 . P_15 ; } void kegbnk20qt ( void ) {
ajbfpygfl2 * const mnfuu5uxb5 = & ( pdpnucaqsy . rtm ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( mnfuu5uxb5 ->
_mdlRefSfcnS , "CurrPowerLimCalc" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void dp1ymck0d2 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { ajbfpygfl2 *
const mnfuu5uxb5 = & ( pdpnucaqsy . rtm ) ; rt_InitInfAndNaN ( sizeof (
real_T ) ) ; ( void ) memset ( ( void * ) mnfuu5uxb5 , 0 , sizeof (
ajbfpygfl2 ) ) ; bpvrateqsu [ 0 ] = mdlref_TID0 ; mnfuu5uxb5 -> _mdlRefSfcnS
= ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( mnfuu5uxb5 -> _mdlRefSfcnS , "CurrPowerLimCalc" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
CurrPowerLimCalc_InitializeDataMapInfo ( mnfuu5uxb5 , sysRanPtr , contextTid
) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( mnfuu5uxb5 ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( mnfuu5uxb5 -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( mnfuu5uxb5 ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_CurrPowerLimCalc_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_CurrPowerLimCalc , 56 ) ; * retVal = 1 ;
} static void mr_CurrPowerLimCalc_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_CurrPowerLimCalc_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_CurrPowerLimCalc_restoreDataFromMxArray ( void * destData
, const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_CurrPowerLimCalc_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_CurrPowerLimCalc_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) ; static void
mr_CurrPowerLimCalc_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i
, int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_CurrPowerLimCalc_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_CurrPowerLimCalc_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_CurrPowerLimCalc_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_CurrPowerLimCalc_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_CurrPowerLimCalc_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_CurrPowerLimCalc_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_CurrPowerLimCalc_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_CurrPowerLimCalc_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
{ mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_CurrPowerLimCalc_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_CurrPowerLimCalc_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_CurrPowerLimCalc_GetDWork ( ) {
return ( NULL ) ; } void mr_CurrPowerLimCalc_SetDWork ( const mxArray * ssDW
) { ( void ) ssDW ; } void mr_CurrPowerLimCalc_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3587703618U , 1238120680U ,
3882438025U , 2911241173U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"CurrPowerLimCalc" , & chksum [ 0 ] ) ; } mxArray *
mr_CurrPowerLimCalc_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
