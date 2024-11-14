#include "BMS_Software.h"
#include "BMS_Software_types.h"
#include "rtwtypes.h"
#include "BMS_Software_private.h"
#include <string.h>
#include "BMS_Software_capi.h"
#include "Balancing_Logic.h"
#include "BMS_Out.h"
#include "CurrPowerLimCalc.h"
#include "SOC_Estimation.h"
#include "State_Machine.h"
#include "rt_nonfinite.h"
int_T jh2jgiamr0 [ 2 ] ; const Sensors BMS_Software_rtZSensors = { { 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , 0.0F , 0.0F , { 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , 0.0F , 0.0F } ; const
CurrentLimits BMS_Software_rtZCurrentLimits = { 0.0F , 0.0F } ; const
Min_Max_Cells BMS_Software_rtZMin_Max_Cells = { 0.0F , 0.0F , 0.0F , 0.0F } ;
static RegMdlInfo rtMdlInfo_BMS_Software [ 76 ] = { { "hcoepnnprex" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BMS_Software" } , {
"hcoepnnpre" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "jbo4nmrmcvd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "fx3xsl1ltpx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"fygdelj2iby" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "fac1zcs2o45" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "gkfvhmjkjue" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"evboipwp5px" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "gtj1n4vlicp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "a45fkrqsfj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"n1zvip4ldyg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "o42q05bv4mp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "gzziw1so0qm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"dwxujua4he2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "ileupueoitq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "jbo4nmrmcv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"fx3xsl1ltp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "fygdelj2ib" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "fac1zcs2o4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"gkfvhmjkju" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "evboipwp5p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "gtj1n4vlic" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"n1zvip4ldy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "o42q05bv4m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "gzziw1so0q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"dwxujua4he" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "ileupueoit" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "mbo1limh2u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"hwt4nru52w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "hvmwpriba1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "bzlntq4fju" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"igzgwxk4wl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "hy4zrtbl2l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "gwi0ifigyi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"bi1sv5wb4n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "nzo0dhvfq4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "BMS_Software" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "nbn5vfyd1ib" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"jh2jgiamr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "klvauzhxrgs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "gss51yw2wvo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BMS_Software" } , {
"mar534cglo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BMS_Software" } , { "cd3pbbexvj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "BMS_Software" } , { "struct_hWfOz2DPb3ksIiterGA9NH" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_x2LFwNpwdYZuwkeIFkH2PB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "SRE" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Balancing" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , 0 , ( void * ) "SRE" } , { "Charging" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , 1 , ( void * ) "SRE" } , { "Driving" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , 2 , ( void * ) "SRE" } , { "Sensors" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Min_Max_Cells" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "CurrentLimits" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Contactors_Cmd" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Faults" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "BMS_State_Enum" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "BMS_Standby" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , 0 , ( void * ) "BMS_State_Enum" } , {
"BMS_Charging" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , 1 , ( void * )
"BMS_State_Enum" } , { "BMS_Driving" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , 2 ,
( void * ) "BMS_State_Enum" } , { "BMS_Fault" , MDL_INFO_ID_ENUMTYPE_STRING ,
0 , 3 , ( void * ) "BMS_State_Enum" } , { "SOC_Est" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "BMS_Info" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "BMS_Cmd" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_BMS_Software_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "BMS_Software" } , { "mr_BMS_Software_restoreDataFromMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "BMS_Software" } , { "mr_BMS_Software_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMS_Software" } , {
"mr_BMS_Software_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "BMS_Software" } , { "mr_BMS_Software_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BMS_Software" } , {
"BMS_Software.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"BMS_Software.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"BMS_Software" } } ; kct10ynowd5 gzziw1so0q = { { { 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F , 3.6F
, 3.6F , 3.6F , 3.6F , 3.6F } , 345.6F , 0.0F , { 25.0F , 25.0F , 25.0F ,
25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F
, 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F ,
25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F
, 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F ,
25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F
, 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F ,
25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F
, 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F ,
25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F
, 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F , 25.0F } , 0.0F , 0.0F } } ;
hcoepnnprex hcoepnnpre ; ileupueoitq gss51yw2wvo ; dwxujua4he2 klvauzhxrgs ;
void nzo0dhvfq4 ( void ) { mr_State_Machine_CreateInitRestoreData ( ) ;
mr_SOC_Estimation_CreateInitRestoreData ( ) ;
mr_Balancing_Logic_CreateInitRestoreData ( ) ; } void hy4zrtbl2l ( void ) {
klvauzhxrgs . mxdhgdid02 = gzziw1so0q . P_1 ; fbbdju2hyi ( & gss51yw2wvo .
l104bswf4q , & gss51yw2wvo . oplmfmcsny , & gss51yw2wvo . mnxpgbaujt , &
gss51yw2wvo . g1p3y1gg0f ) ; cketgpc2z3 ( ) ; ke3bmpbgy1 ( & gss51yw2wvo .
odyx4wrk3g [ 0 ] ) ; } void igzgwxk4wl ( void ) { klvauzhxrgs . mxdhgdid02 =
gzziw1so0q . P_1 ; awd1kde5gy ( & gss51yw2wvo . l104bswf4q , & gss51yw2wvo .
mnxpgbaujt , & gss51yw2wvo . g1p3y1gg0f ) ; h41aqbjehq ( ) ; epo0ltx0d0 ( &
gss51yw2wvo . odyx4wrk3g [ 0 ] ) ; } void BMS_Software ( const SRE *
mzvuetpgie , boolean_T * hxpjmzven2 , boolean_T * cll2qfmtgx , boolean_T *
d2mkyedv2u , boolean_T * af0zpblzf1 , boolean_T * enfplctspi , boolean_T *
nzrfu2eq1r , boolean_T * ku42qe24ds , boolean_T * fy1of2hhab , BMS_State_Enum
* ovrgqo2r22 , real32_T * cthtzpvx1t , BMS_Cmd * pxm3p1qldi ) { cd3pbbexvj *
const cwyxhy01pz = & ( hcoepnnpre . rtm ) ; real32_T e54rzlzl4i ; gss51yw2wvo
. jq0ossisql = klvauzhxrgs . mxdhgdid02 ; CurrPowerLimCalc ( & gss51yw2wvo .
jq0ossisql . Cell_Voltages [ 0 ] , & gss51yw2wvo . jq0ossisql .
Cell_Temperatures [ 0 ] , & gss51yw2wvo . hbpoifl3k1 , & gss51yw2wvo .
emawomcxpo ) ; State_Machine ( mzvuetpgie , & gss51yw2wvo . jq0ossisql .
Cell_Voltages [ 0 ] , & gss51yw2wvo . jq0ossisql . Pack_Voltage , &
gss51yw2wvo . jq0ossisql . Pack_Current , & gss51yw2wvo . jq0ossisql .
Vout_Chgr , & gss51yw2wvo . jq0ossisql . Vout_Invtr , & gss51yw2wvo .
hbpoifl3k1 . DischargeCurrentLimit , & gss51yw2wvo . hbpoifl3k1 .
ChargeCurrentLimit , & gss51yw2wvo . emawomcxpo . MinCellVolt , & gss51yw2wvo
. emawomcxpo . MaxCellVolt , & gss51yw2wvo . emawomcxpo . MinCellTemp , &
gss51yw2wvo . emawomcxpo . MaxCellTemp , & gss51yw2wvo . l104bswf4q , &
gss51yw2wvo . oplmfmcsny , & gss51yw2wvo . mnxpgbaujt , & gss51yw2wvo .
g1p3y1gg0f ) ; SOC_Estimation ( & gss51yw2wvo . jq0ossisql . Pack_Current , &
gss51yw2wvo . jq0ossisql . Cell_Temperatures [ 0 ] , & e54rzlzl4i ) ; if (
rtmIsSampleHit ( cwyxhy01pz , 1 , 0 ) ) { klvauzhxrgs . bbwsqcmbyb =
gss51yw2wvo . g1p3y1gg0f ; memcpy ( & klvauzhxrgs . n2ameds1fm [ 0 ] , &
gss51yw2wvo . jq0ossisql . Cell_Voltages [ 0 ] , 96U * sizeof ( real32_T ) )
; klvauzhxrgs . i2tf05hw2l = gss51yw2wvo . emawomcxpo . MaxCellVolt ;
klvauzhxrgs . o0s3ih4c5l = gss51yw2wvo . emawomcxpo . MinCellVolt ;
Balancing_Logic ( & klvauzhxrgs . bbwsqcmbyb , & klvauzhxrgs . n2ameds1fm [ 0
] , & klvauzhxrgs . i2tf05hw2l , & klvauzhxrgs . o0s3ih4c5l , & gss51yw2wvo .
odyx4wrk3g [ 0 ] ) ; } BMS_Out ( & gss51yw2wvo . hbpoifl3k1 , & gss51yw2wvo .
l104bswf4q , & gss51yw2wvo . oplmfmcsny , & gss51yw2wvo . mnxpgbaujt , &
gss51yw2wvo . g1p3y1gg0f , & e54rzlzl4i , & gss51yw2wvo . odyx4wrk3g [ 0 ] ,
pxm3p1qldi , hxpjmzven2 , cll2qfmtgx , d2mkyedv2u , af0zpblzf1 , enfplctspi ,
nzrfu2eq1r , ku42qe24ds , fy1of2hhab , ovrgqo2r22 , cthtzpvx1t ) ; } void
bzlntq4fju ( const Sensors * bw0jkduw4i ) { klvauzhxrgs . mxdhgdid02 = *
bw0jkduw4i ; f4ikgzst5j ( ) ; } void hvmwpriba1 ( void ) {
mr_State_Machine_DestroyInitRestoreData ( ) ;
mr_SOC_Estimation_DestroyInitRestoreData ( ) ;
mr_Balancing_Logic_DestroyInitRestoreData ( ) ; } void hwt4nru52w ( void ) {
cd3pbbexvj * const cwyxhy01pz = & ( hcoepnnpre . rtm ) ; kegbnk20qt ( ) ;
nvavifp0ml ( ) ; cefw35nic3 ( ) ; fqfmn1ydgn ( ) ; knzl4yur3r ( ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( cwyxhy01pz ->
_mdlRefSfcnS , "BMS_Software" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void gwi0ifigyi ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
int_T mdlref_TID1 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { cd3pbbexvj * const cwyxhy01pz = & (
hcoepnnpre . rtm ) ; rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset
( ( void * ) cwyxhy01pz , 0 , sizeof ( cd3pbbexvj ) ) ; jh2jgiamr0 [ 0 ] =
mdlref_TID0 ; jh2jgiamr0 [ 1 ] = mdlref_TID1 ; cwyxhy01pz -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( cwyxhy01pz -> _mdlRefSfcnS , "BMS_Software" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & gss51yw2wvo ) , 0 , sizeof ( ileupueoitq ) ) ; { gss51yw2wvo . jq0ossisql
= BMS_Software_rtZSensors ; gss51yw2wvo . emawomcxpo =
BMS_Software_rtZMin_Max_Cells ; gss51yw2wvo . hbpoifl3k1 =
BMS_Software_rtZCurrentLimits ; gss51yw2wvo . l104bswf4q = 0.0F ; gss51yw2wvo
. g1p3y1gg0f = BMS_Standby ; } ( void ) memset ( ( void * ) & klvauzhxrgs , 0
, sizeof ( dwxujua4he2 ) ) ; { int32_T i ; for ( i = 0 ; i < 96 ; i ++ ) {
klvauzhxrgs . n2ameds1fm [ i ] = 0.0F ; } } klvauzhxrgs . i2tf05hw2l = 0.0F ;
klvauzhxrgs . o0s3ih4c5l = 0.0F ; BMS_Software_InitializeDataMapInfo (
cwyxhy01pz , sysRanPtr , contextTid ) ; evmer3ke3c ( _mdlRefSfcnS ,
mdlref_TID1 , cwyxhy01pz -> DataMapInfo . systemRan [ 0 ] , cwyxhy01pz ->
DataMapInfo . systemTid [ 0 ] , & ( cwyxhy01pz -> DataMapInfo . mmi ) ,
"BMS_Software/Balancing_Logic" , 0 , - 1 ) ; ccdupmtoje ( _mdlRefSfcnS ,
mdlref_TID0 , mdlref_TID1 , cwyxhy01pz -> DataMapInfo . systemRan [ 0 ] ,
cwyxhy01pz -> DataMapInfo . systemTid [ 0 ] , & ( cwyxhy01pz -> DataMapInfo .
mmi ) , "BMS_Software/BMS_Out" , 1 , - 1 ) ; dp1ymck0d2 ( _mdlRefSfcnS ,
mdlref_TID0 , cwyxhy01pz -> DataMapInfo . systemRan [ 0 ] , cwyxhy01pz ->
DataMapInfo . systemTid [ 0 ] , & ( cwyxhy01pz -> DataMapInfo . mmi ) ,
"BMS_Software/Current_Power_Limits_Calc" , 2 , - 1 ) ; ekir1iaqx0 (
_mdlRefSfcnS , mdlref_TID0 , cwyxhy01pz -> DataMapInfo . systemRan [ 0 ] ,
cwyxhy01pz -> DataMapInfo . systemTid [ 0 ] , & ( cwyxhy01pz -> DataMapInfo .
mmi ) , "BMS_Software/SOC_Estimation" , 3 , - 1 ) ; co3mxuet1t ( _mdlRefSfcnS
, mdlref_TID0 , cwyxhy01pz -> DataMapInfo . systemRan [ 0 ] , cwyxhy01pz ->
DataMapInfo . systemTid [ 0 ] , & ( cwyxhy01pz -> DataMapInfo . mmi ) ,
"BMS_Software/State_Machine" , 4 , - 1 ) ; if ( ( rt_ParentMMI != ( NULL ) )
&& ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( cwyxhy01pz -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
cwyxhy01pz -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( cwyxhy01pz -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_BMS_Software_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) {
mr_Balancing_Logic_MdlInfoRegFcn ( mdlRefSfcnS , "Balancing_Logic" , retVal )
; if ( * retVal == 0 ) return ; * retVal = 0 ; mr_BMS_Out_MdlInfoRegFcn (
mdlRefSfcnS , "BMS_Out" , retVal ) ; if ( * retVal == 0 ) return ; * retVal =
0 ; mr_CurrPowerLimCalc_MdlInfoRegFcn ( mdlRefSfcnS , "CurrPowerLimCalc" ,
retVal ) ; if ( * retVal == 0 ) return ; * retVal = 0 ;
mr_SOC_Estimation_MdlInfoRegFcn ( mdlRefSfcnS , "SOC_Estimation" , retVal ) ;
if ( * retVal == 0 ) return ; * retVal = 0 ; mr_State_Machine_MdlInfoRegFcn (
mdlRefSfcnS , "State_Machine" , retVal ) ; if ( * retVal == 0 ) return ; *
retVal = 0 ; } } { DTypeId dtId = INVALID_DTYPE_ID ;
ssRegisterTypeFromNamedObject ( mdlRefSfcnS , "Sensors" , & dtId ) ; if (
dtId == INVALID_DTYPE_ID ) { return ; } } * retVal = 0 ; ssRegModelRefMdlInfo
( mdlRefSfcnS , modelName , rtMdlInfo_BMS_Software , 76 ) ; * retVal = 1 ; }
static void mr_BMS_Software_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_BMS_Software_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_BMS_Software_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_BMS_Software_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_BMS_Software_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_BMS_Software_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_BMS_Software_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_BMS_Software_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_BMS_Software_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_BMS_Software_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_BMS_Software_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_BMS_Software_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_BMS_Software_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_BMS_Software_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_BMS_Software_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_BMS_Software_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_BMS_Software_GetDWork ( ) { static const char_T *
ssDWFieldNames [ 3 ] = { "gss51yw2wvo" , "klvauzhxrgs" , "NULL_PrevZCX" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_BMS_Software_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
gss51yw2wvo ) , sizeof ( gss51yw2wvo ) ) ; { static const char_T *
rtdwDataFieldNames [ 10 ] = { "Balancing_Logic" , "BMS_Out" ,
"CurrPowerLimCalc" , "SOC_Estimation" , "State_Machine" ,
"klvauzhxrgs.mxdhgdid02" , "klvauzhxrgs.n2ameds1fm" ,
"klvauzhxrgs.i2tf05hw2l" , "klvauzhxrgs.o0s3ih4c5l" ,
"klvauzhxrgs.bbwsqcmbyb" , } ; mxArray * rtdwData = mxCreateStructMatrix ( 1
, 1 , 10 , rtdwDataFieldNames ) ; { mxArray * varData =
mr_Balancing_Logic_GetDWork ( ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 ,
varData ) ; } { mxArray * varData = mr_BMS_Out_GetDWork ( ) ;
mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; } { mxArray * varData =
mr_CurrPowerLimCalc_GetDWork ( ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 ,
varData ) ; } { mxArray * varData = mr_SOC_Estimation_GetDWork ( ) ;
mxSetFieldByNumber ( rtdwData , 0 , 3 , varData ) ; } { mxArray * varData =
mr_State_Machine_GetDWork ( ) ; mxSetFieldByNumber ( rtdwData , 0 , 4 ,
varData ) ; } mr_BMS_Software_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( klvauzhxrgs . mxdhgdid02 ) , sizeof ( klvauzhxrgs . mxdhgdid02 )
) ; mr_BMS_Software_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * )
& ( klvauzhxrgs . n2ameds1fm ) , sizeof ( klvauzhxrgs . n2ameds1fm ) ) ;
mr_BMS_Software_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
klvauzhxrgs . i2tf05hw2l ) , sizeof ( klvauzhxrgs . i2tf05hw2l ) ) ;
mr_BMS_Software_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
klvauzhxrgs . o0s3ih4c5l ) , sizeof ( klvauzhxrgs . o0s3ih4c5l ) ) ;
mr_BMS_Software_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
klvauzhxrgs . bbwsqcmbyb ) , sizeof ( klvauzhxrgs . bbwsqcmbyb ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_BMS_Software_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_BMS_Software_restoreDataFromMxArray ( ( void * ) & ( gss51yw2wvo ) , ssDW
, 0 , 0 , sizeof ( gss51yw2wvo ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_Balancing_Logic_SetDWork (
mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ; mr_BMS_Out_SetDWork (
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ; mr_CurrPowerLimCalc_SetDWork (
mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ; mr_SOC_Estimation_SetDWork (
mxGetFieldByNumber ( rtdwData , 0 , 3 ) ) ; mr_State_Machine_SetDWork (
mxGetFieldByNumber ( rtdwData , 0 , 4 ) ) ;
mr_BMS_Software_restoreDataFromMxArray ( ( void * ) & ( klvauzhxrgs .
mxdhgdid02 ) , rtdwData , 0 , 5 , sizeof ( klvauzhxrgs . mxdhgdid02 ) ) ;
mr_BMS_Software_restoreDataFromMxArray ( ( void * ) & ( klvauzhxrgs .
n2ameds1fm ) , rtdwData , 0 , 6 , sizeof ( klvauzhxrgs . n2ameds1fm ) ) ;
mr_BMS_Software_restoreDataFromMxArray ( ( void * ) & ( klvauzhxrgs .
i2tf05hw2l ) , rtdwData , 0 , 7 , sizeof ( klvauzhxrgs . i2tf05hw2l ) ) ;
mr_BMS_Software_restoreDataFromMxArray ( ( void * ) & ( klvauzhxrgs .
o0s3ih4c5l ) , rtdwData , 0 , 8 , sizeof ( klvauzhxrgs . o0s3ih4c5l ) ) ;
mr_BMS_Software_restoreDataFromMxArray ( ( void * ) & ( klvauzhxrgs .
bbwsqcmbyb ) , rtdwData , 0 , 9 , sizeof ( klvauzhxrgs . bbwsqcmbyb ) ) ; } }
void mr_BMS_Software_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1525985493U , 1888060928U , 1603845543U ,
2591591641U , } ; slmrModelRefRegisterSimStateChecksum ( S , "BMS_Software" ,
& chksum [ 0 ] ) ; mr_BMS_Out_RegisterSimStateChecksum ( S ) ;
mr_Balancing_Logic_RegisterSimStateChecksum ( S ) ;
mr_CurrPowerLimCalc_RegisterSimStateChecksum ( S ) ;
mr_SOC_Estimation_RegisterSimStateChecksum ( S ) ;
mr_State_Machine_RegisterSimStateChecksum ( S ) ; } mxArray *
mr_BMS_Software_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ;
size_t numChildrenWithDisallowedBlocks = 0 ; size_t numBlocks = 0 ; mxArray *
disallowedBlocksInChild [ 5 ] ; disallowedBlocksInChild [ 0 ] =
mr_BMS_Out_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild [ 1 ] =
mr_Balancing_Logic_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild
[ 2 ] = mr_CurrPowerLimCalc_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 3 ] = mr_SOC_Estimation_GetSimStateDisallowedBlocks
( ) ; disallowedBlocksInChild [ 4 ] =
mr_State_Machine_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for ( i = 0 ;
i < 5 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if ( (
NULL ) != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) { data =
data_i ; } numBlocks += mxGetM ( data_i ) ; } } } if (
numChildrenWithDisallowedBlocks > 1 ) { mwIndex subs [ 2 ] , offset ; data =
mxCreateCellMatrix ( numBlocks , 3 ) ; subs [ 0 ] = 0 ; { size_t i ; for ( i
= 0 ; i < 5 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if
( ( NULL ) != data_i ) { mwIndex subs_i [ 2 ] , offset_i ; const mwIndex
numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for ( subs_i [ 0 ] = 0 ; subs_i [
0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex j ; for ( j = 0 ; j < 3 ;
++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ; offset_i =
mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij = mxGetCell ( data_i
, offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ; subs [ 1 ] = j ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; } mxDestroyArray ( data_i ) ; } }
} } return data ; } static void * BMS_Software_InitRestoreDataPtr = ( NULL )
; void mr_BMS_Software_CreateInitRestoreData ( ) {
BMS_Software_InitRestoreDataPtr = utMalloc ( sizeof ( klvauzhxrgs ) ) ;
memcpy ( BMS_Software_InitRestoreDataPtr , ( void * ) & ( klvauzhxrgs ) ,
sizeof ( klvauzhxrgs ) ) ; } void mr_BMS_Software_CopyFromInitRestoreData ( )
{ memcpy ( ( void * ) & ( klvauzhxrgs ) , BMS_Software_InitRestoreDataPtr ,
sizeof ( klvauzhxrgs ) ) ; } void mr_BMS_Software_DestroyInitRestoreData ( )
{ utFree ( BMS_Software_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
