#include "EvPowertrainController.h"
#include "rtwtypes.h"
#include "EvPowertrainController_private.h"
#include "mwmathutil.h"
#include "EvPowertrainController_capi.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_EvPowertrainController [ 52 ] = { { "pwecol01r52"
, MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "EvPowertrainController"
} , { "m0wpkuzrqm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "hopnyppy5w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "kx3qh113vl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "ilxsnq2q0g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "cqreqezql0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "bcgjlw03xh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "otb4tbgm5c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "dsayz4k2i0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "oeyven44uw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "keofue2nr5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "nllmd53eto" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "eu5lctztg1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "j43xi004pt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "a3jh4ad2kz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "lktaxgo5iz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "ei5yvhlm0j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "kmujx5avxh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "izmowyu5rx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "io04qbfqhk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "hrsc30l345" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "cdzncnh0i4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "EvPowertrainController" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "ls5wieseak" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "a50xwovlji" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "h5efmxf3a3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "Sensors" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 ,
( NULL ) } , { "BMS_Cmd" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"Contactors_Cmd" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CurrentLimits" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "BMS_Info"
, MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "SOC_Est" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "BMS_Fault" ,
MDL_INFO_ID_ENUMTYPE_STRING , 0 , 3 , ( void * ) "BMS_State_Enum" } , {
"BMS_Driving" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , 2 , ( void * )
"BMS_State_Enum" } , { "BMS_Charging" , MDL_INFO_ID_ENUMTYPE_STRING , 0 , 1 ,
( void * ) "BMS_State_Enum" } , { "BMS_Standby" , MDL_INFO_ID_ENUMTYPE_STRING
, 0 , 0 , ( void * ) "BMS_State_Enum" } , { "BMS_State_Enum" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , { "Faults" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_EvPowertrainController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "EvPowertrainController" } , {
"mr_EvPowertrainController_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "EvPowertrainController" } , { "EvPowertrainController.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "EvPowertrainController.c"
, MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "EvPowertrainController" } }
; kmsrr4v05yq kmsrr4v05y = { 0.0 , 2.0 , 1.0 , 2.0 , 9.5492965855137211 , {
450.0 , 450.0 , 450.0 , 450.0 , 419.771162404874 , 314.828371803655 ,
251.862697442924 , 209.885581202437 , 179.901926744946 , 157.414185901828 ,
139.923720801625 , 125.931348721462 } , { 0.0 , 1600.0 , 3200.0 , 4477.56 ,
4800.0 , 6400.0 , 8000.0 , 9600.0 , 11200.0 , 12800.0 , 14400.0 , 16000.0 } ,
0.0 , 0.0 , 0.0 , 9.5492965855137211 , { 450.0 , 450.0 , 450.0 , 450.0 ,
419.771162404874 , 314.828371803655 , 251.862697442924 , 209.885581202437 ,
179.901926744946 , 157.414185901828 , 139.923720801625 , 125.931348721462 } ,
{ 0.0 , 1600.0 , 3200.0 , 4477.56 , 4800.0 , 6400.0 , 8000.0 , 9600.0 ,
11200.0 , 12800.0 , 14400.0 , 16000.0 } , 9.04 , { 0.0 , 1.0 } , { 5.0 , 9.0
} , 0.11061946902654868 , - 1.0 , 9.5492965855137211 , { 86.7 , 86.7 , 86.7 ,
86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 ,
86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 , 86.7 ,
86.7 , 91.8 , 93.84 , 93.84 , 94.86 , 94.86 , 94.86 , 94.86 , 94.86 , 94.86 ,
91.8 , 86.7 , 86.7 , 91.8 , 93.84 , 93.84 , 95.88 , 95.88 , 95.88 , 95.88 ,
95.88 , 95.88 , 93.84 , 86.7 , 86.7 , 91.8 , 93.84 , 94.86 , 95.88 , 95.88 ,
95.88 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 91.8 , 93.84 , 94.86 ,
95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 91.8 ,
93.84 , 94.86 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 ,
86.7 , 91.8 , 93.84 , 94.86 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 ,
94.86 , 86.7 , 86.7 , 91.8 , 93.84 , 93.84 , 95.88 , 96.9 , 96.9 , 96.9 ,
96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 91.8 , 93.84 , 93.84 , 95.88 , 96.9 ,
96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 89.76 , 93.84 , 93.84 ,
95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7 , 89.76 ,
91.8 , 91.8 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 , 86.7 , 86.7
, 89.76 , 91.8 , 91.8 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88 , 94.86 ,
86.7 , 86.7 , 89.76 , 91.8 , 91.8 , 95.88 , 96.9 , 96.9 , 96.9 , 96.9 , 95.88
, 94.86 , 86.7 , 86.7 , 89.76 , 91.8 , 91.8 , 95.88 , 96.9 , 96.9 , 96.9 ,
96.9 , 95.88 , 94.86 } , { 0.0 , 1600.0 , 3200.0 , 4477.56 , 4800.0 , 6400.0
, 8000.0 , 9600.0 , 11200.0 , 12800.0 , 14400.0 , 16000.0 } , { 0.0 ,
32.142857142857146 , 64.285714285714292 , 96.428571428571431 ,
128.57142857142858 , 160.71428571428572 , 192.85714285714286 , 225.0 ,
257.14285714285717 , 289.28571428571428 , 321.42857142857144 ,
353.57142857142856 , 385.71428571428572 , 417.85714285714283 , 450.0 } , 0.01
, - 1.0 , 1.0 , 0.0 , 0.0 , 9.5492965855137211 , { 450.0 , 450.0 , 450.0 ,
450.0 , 419.771162404874 , 314.828371803655 , 251.862697442924 ,
209.885581202437 , 179.901926744946 , 157.414185901828 , 139.923720801625 ,
125.931348721462 } , { 0.0 , 1600.0 , 3200.0 , 4477.56 , 4800.0 , 6400.0 ,
8000.0 , 9600.0 , 11200.0 , 12800.0 , 14400.0 , 16000.0 } , - 1.0 , 9.04 ,
0.0 , 0.0 , 0.0 , 0.0 , 5.0E+6 , 1.0 , 0.0 , 0.0 , 1.0 ,
0.00082466807156732073 , 0.00082466807156732073 , - 1.0F , - 1.0F , 100.0F ,
{ 11U , 14U } } ; void kmujx5avxh ( const real_T * prupxtwaeb , const real_T
* cc05wk0yjc , j43xi004pt * localB , eu5lctztg1 * localDW , m0wpkuzrqm *
localZCSV ) { real_T gm5hav5d23_tmp ; localZCSV -> pz3yramrh1 = * prupxtwaeb
- kmsrr4v05y . P_4 ; if ( ( localB -> ktyxvdn2cu != localB -> ktyxvdn2cu ) ||
( localB -> f5cs2iubqm < localB -> ktyxvdn2cu ) ) { if ( localDW ->
armfch2u44 == 0 ) { localZCSV -> jqkeufbikc = localB -> f5cs2iubqm - localB
-> f5cs2iubqm ; } else { localZCSV -> jqkeufbikc = localB -> f5cs2iubqm -
localB -> ktyxvdn2cu ; } } else if ( localDW -> armfch2u44 == 0 ) { localZCSV
-> jqkeufbikc = localB -> ktyxvdn2cu - localB -> f5cs2iubqm ; } else {
localZCSV -> jqkeufbikc = localB -> ktyxvdn2cu - localB -> ktyxvdn2cu ; }
gm5hav5d23_tmp = rtP_anomaly_start * rtP_sim_time ; localZCSV -> gm5hav5d23 =
localB -> b3scw4czeo - gm5hav5d23_tmp ; localZCSV -> j5njcu22qi = *
cc05wk0yjc ; localZCSV -> d2ltsd0y13 = localB -> eytotkf1vm ; localZCSV ->
o2j0qznmts = localB -> ivzogks50b ; localZCSV -> et2ic523b4 = localB ->
aav4kys2yx - kmsrr4v05y . P_29 ; localZCSV -> m25324ikfu = localB ->
hj3g04npot - kmsrr4v05y . P_11 ; localZCSV -> mw05xgug55 = localB ->
pecbstxo0c - kmsrr4v05y . P_12 ; localZCSV -> gppku3pbqw = localB ->
erxin33mo4 - localB -> caj144zxge ; localZCSV -> c5qyr3kj3a = localB ->
erxin33mo4 - localB -> jdcfxmwpdq ; localZCSV -> hlyabblwxf = localB ->
gft5rieiup - kmsrr4v05y . P_5 ; localZCSV -> lcnv3wkxtq = * cc05wk0yjc -
kmsrr4v05y . P_30 ; localZCSV -> ppn3z4uza2 = localB -> k3kc33tt5q -
kmsrr4v05y . P_6 ; localZCSV -> j3b05htjyn = localB -> lo4gop013w - localB ->
bn0lgxjozh ; localZCSV -> nrblbqrzel = localB -> lo4gop013w - localB ->
ms52gyvzgu ; localZCSV -> cyw3iirjcj = localB -> e31ewsu4o5 - gm5hav5d23_tmp
; localZCSV -> c0xbqqkwuq = localB -> avgczf2ooq - kmsrr4v05y . P_36 ;
localZCSV -> l232vlymc0 = localB -> avgczf2ooq - kmsrr4v05y . P_37 ;
localZCSV -> glm3f343tc = localB -> f3qejrdhds - kmsrr4v05y . P_38 ;
localZCSV -> obweijysw0 = localB -> f3qejrdhds - kmsrr4v05y . P_39 ; } void
EvPowertrainController ( h5efmxf3a3 * const e4f4oaoqet , const real_T *
prupxtwaeb , const real_T * jym0osvxgw , const real_T * mipgkbochp , const
real32_T * os0fqa5lgk , const real32_T * m4hobcmm3x , const real32_T *
duwigdq1j3 , const real_T * cc05wk0yjc , const real32_T * dkxwpikwy3 , real_T
* j3hft4pgzt , real_T * ljajhg2mpa , j43xi004pt * localB , eu5lctztg1 *
localDW ) { real_T hx4zwrobv3 ; real_T mjngj5kkkb ; real_T nwqehqsoa4 ;
real32_T hnwqwf11io ; boolean_T bpe2h3e03n ; boolean_T j0iwrg2h50 ; if (
kmsrr4v05y . P_42 > kmsrr4v05y . P_13 ) { nwqehqsoa4 = kmsrr4v05y . P_41 ; }
else { nwqehqsoa4 = * jym0osvxgw ; } localB -> b3scw4czeo = rtmGetTaskTime (
e4f4oaoqet , 0 ) ; localB -> e31ewsu4o5 = localB -> b3scw4czeo ; if (
rtmIsMajorTimeStep ( e4f4oaoqet ) && rtmIsSampleHit ( e4f4oaoqet , 1 , 0 ) )
{ localB -> a4krgkmeul = rtP_braking_regen ; localB -> gidhllnuvs =
rtP_accel_pedal ; if ( ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS )
) { localDW -> mhhbumlfzt = ( * prupxtwaeb > kmsrr4v05y . P_4 ) ; } localB ->
bcwwhh5ooi = localDW -> mhhbumlfzt ; } localB -> f5cs2iubqm = nwqehqsoa4 *
kmsrr4v05y . P_40 * kmsrr4v05y . P_45 ; nwqehqsoa4 = kmsrr4v05y . P_14 * *
cc05wk0yjc ; localB -> ktyxvdn2cu = kmsrr4v05y . P_17 * look1_binlcapw (
nwqehqsoa4 , kmsrr4v05y . P_16 , kmsrr4v05y . P_15 , 11U ) ; if (
ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS ) ) { nwqehqsoa4 = localB
-> f5cs2iubqm ; localDW -> armfch2u44 = 0 ; if ( ( localB -> f5cs2iubqm !=
localB -> f5cs2iubqm ) || ( localB -> ktyxvdn2cu < localB -> f5cs2iubqm ) ) {
nwqehqsoa4 = localB -> ktyxvdn2cu ; localDW -> armfch2u44 = 1 ; } localDW ->
aaqjbsafhd = ( localB -> b3scw4czeo > rtP_anomaly_start * rtP_sim_time ) ; }
else { nwqehqsoa4 = localB -> f5cs2iubqm ; if ( localDW -> armfch2u44 == 1 )
{ nwqehqsoa4 = localB -> ktyxvdn2cu ; } } hx4zwrobv3 = look1_binlcapw ( *
mipgkbochp , kmsrr4v05y . P_19 , kmsrr4v05y . P_18 , 1U ) ; if ( localB ->
bcwwhh5ooi ) { nwqehqsoa4 = kmsrr4v05y . P_8 * * cc05wk0yjc ; localB ->
ivzogks50b = * prupxtwaeb * look1_binlcapw ( nwqehqsoa4 , kmsrr4v05y . P_10 ,
kmsrr4v05y . P_9 , 11U ) ; } else if ( localDW -> aaqjbsafhd ) { localB ->
ivzogks50b = nwqehqsoa4 * hx4zwrobv3 * kmsrr4v05y . P_20 * kmsrr4v05y . P_21
* localB -> a4krgkmeul ; } else { localB -> ivzogks50b = nwqehqsoa4 *
hx4zwrobv3 * kmsrr4v05y . P_20 * kmsrr4v05y . P_21 ; } if (
ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW ->
nnxvdv3cvm = ( * cc05wk0yjc >= 0.0 ) ; } localB -> gft5rieiup = localDW ->
nnxvdv3cvm > 0 ? * cc05wk0yjc : - * cc05wk0yjc ; hnwqwf11io = kmsrr4v05y .
P_47 * * m4hobcmm3x ; hnwqwf11io *= * dkxwpikwy3 ; localB -> caj144zxge =
hnwqwf11io ; localB -> aav4kys2yx = * cc05wk0yjc * localB -> ivzogks50b ;
localB -> eytotkf1vm = kmsrr4v05y . P_22 * * cc05wk0yjc ; if (
ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW ->
jgqhbqgtkr = ( localB -> eytotkf1vm >= 0.0 ) ; localDW -> nksums311w = (
localB -> ivzogks50b >= 0.0 ) ; } nwqehqsoa4 = look2_binlcapw ( localDW ->
jgqhbqgtkr > 0 ? localB -> eytotkf1vm : - localB -> eytotkf1vm , localDW ->
nksums311w > 0 ? localB -> ivzogks50b : - localB -> ivzogks50b , kmsrr4v05y .
P_24 , kmsrr4v05y . P_25 , kmsrr4v05y . P_23 , kmsrr4v05y . P_50 , 12U ) *
kmsrr4v05y . P_26 ; if ( rtmIsMajorTimeStep ( e4f4oaoqet ) && rtmIsSampleHit
( e4f4oaoqet , 1 , 0 ) ) { localB -> o0ircfwuga = kmsrr4v05y . P_27 ; localB
-> n4wlmihy0b = kmsrr4v05y . P_28 ; } if ( ssIsModeUpdateTimeStep (
e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW -> p0f23gurm0 = ( localB ->
aav4kys2yx >= kmsrr4v05y . P_29 ) ; } if ( localDW -> p0f23gurm0 ) {
hx4zwrobv3 = localB -> o0ircfwuga ; } else { hx4zwrobv3 = localB ->
n4wlmihy0b ; } if ( ( nwqehqsoa4 < 0.0 ) && ( hx4zwrobv3 >
muDoubleScalarFloor ( hx4zwrobv3 ) ) ) { nwqehqsoa4 = - muDoubleScalarPower (
- nwqehqsoa4 , hx4zwrobv3 ) ; } else { nwqehqsoa4 = muDoubleScalarPower (
nwqehqsoa4 , hx4zwrobv3 ) ; } localB -> erxin33mo4 = localB -> aav4kys2yx *
nwqehqsoa4 ; localB -> hj3g04npot = localB -> caj144zxge - localB ->
erxin33mo4 ; hnwqwf11io = kmsrr4v05y . P_48 * * duwigdq1j3 ; hnwqwf11io *= *
dkxwpikwy3 ; localB -> jdcfxmwpdq = hnwqwf11io ; localB -> pecbstxo0c =
localB -> jdcfxmwpdq - localB -> erxin33mo4 ; if ( rtmIsMajorTimeStep (
e4f4oaoqet ) && rtmIsSampleHit ( e4f4oaoqet , 1 , 0 ) ) { if (
ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW ->
lbeezklbqu = ( localB -> hj3g04npot >= kmsrr4v05y . P_11 ) ; } if (
ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW ->
m4msyl3q3r = ( localB -> pecbstxo0c <= kmsrr4v05y . P_12 ) ; localDW ->
bxrirfenyy = ( localB -> erxin33mo4 > localB -> caj144zxge ) ; } localB ->
k14jn42102 = ( localDW -> lbeezklbqu && localDW -> m4msyl3q3r ) ; localB ->
opurnnwgbs = localDW -> bxrirfenyy ; if ( ssIsModeUpdateTimeStep ( e4f4oaoqet
-> _mdlRefSfcnS ) ) { localDW -> g4uakbinvb = ( localB -> erxin33mo4 < localB
-> jdcfxmwpdq ) ; localDW -> jmz2ob51or = ( localB -> gft5rieiup < kmsrr4v05y
. P_5 ) ; } localB -> kkzps4sqer = localDW -> g4uakbinvb ; localB ->
m0dpnlal41 = localDW -> jmz2ob51or ; } if ( ssIsModeUpdateTimeStep (
e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW -> mvkkgpsw04 = ( * cc05wk0yjc >=
kmsrr4v05y . P_30 ) ; } if ( localB -> m0dpnlal41 ) { localB -> lo4gop013w =
localB -> ivzogks50b ; } else if ( localB -> k14jn42102 ) { localB ->
lo4gop013w = localB -> ivzogks50b ; } else { j0iwrg2h50 = ( * cc05wk0yjc <=
kmsrr4v05y . P_7 ) ; bpe2h3e03n = ( * cc05wk0yjc >= - kmsrr4v05y . P_7 ) ; if
( bpe2h3e03n && j0iwrg2h50 ) { hx4zwrobv3 = * cc05wk0yjc / 2.0 ; if ( localDW
-> mvkkgpsw04 ) { mjngj5kkkb = kmsrr4v05y . P_44 ; } else { mjngj5kkkb =
localB -> hqve051iy3 ; } mjngj5kkkb *= 4.0 / ( 3.0 - muDoubleScalarPower (
hx4zwrobv3 , 2.0 ) ) ; } else { mjngj5kkkb = * cc05wk0yjc ; } if ( localB ->
opurnnwgbs ) { hx4zwrobv3 = localB -> caj144zxge ; } else if ( localB ->
kkzps4sqer ) { hx4zwrobv3 = localB -> jdcfxmwpdq ; } else { hx4zwrobv3 =
localB -> erxin33mo4 ; } localB -> lo4gop013w = hx4zwrobv3 / nwqehqsoa4 /
mjngj5kkkb ; } hnwqwf11io = kmsrr4v05y . P_49 * * os0fqa5lgk ; localB ->
k3kc33tt5q = hnwqwf11io ; if ( rtmIsMajorTimeStep ( e4f4oaoqet ) &&
rtmIsSampleHit ( e4f4oaoqet , 1 , 0 ) ) { if ( ssIsModeUpdateTimeStep (
e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW -> iisivqmhw3 = ( localB ->
k3kc33tt5q > kmsrr4v05y . P_6 ) ; } localB -> cjowe4wogp = localDW ->
iisivqmhw3 ; } nwqehqsoa4 = kmsrr4v05y . P_31 * * cc05wk0yjc ; localB ->
bn0lgxjozh = look1_binlcapw ( nwqehqsoa4 , kmsrr4v05y . P_33 , kmsrr4v05y .
P_32 , 11U ) ; localB -> ms52gyvzgu = kmsrr4v05y . P_34 * localB ->
bn0lgxjozh ; if ( ! localB -> cjowe4wogp ) { localB -> bn0lgxjozh =
kmsrr4v05y . P_43 ; } if ( rtmIsMajorTimeStep ( e4f4oaoqet ) &&
rtmIsSampleHit ( e4f4oaoqet , 1 , 0 ) ) { if ( ssIsModeUpdateTimeStep (
e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW -> ik2c1svrfu = ( localB ->
lo4gop013w > localB -> bn0lgxjozh ) ; localDW -> ecie3j0llp = ( localB ->
lo4gop013w < localB -> ms52gyvzgu ) ; } localB -> atjpfp4xzp = localDW ->
ik2c1svrfu ; localB -> ctz21muiou = localDW -> ecie3j0llp ; } if ( localB ->
atjpfp4xzp ) { nwqehqsoa4 = localB -> bn0lgxjozh ; } else if ( localB ->
ctz21muiou ) { nwqehqsoa4 = localB -> ms52gyvzgu ; } else { nwqehqsoa4 =
localB -> lo4gop013w ; } if ( ssIsModeUpdateTimeStep ( e4f4oaoqet ->
_mdlRefSfcnS ) ) { localDW -> gi1f1odsap = ( localB -> e31ewsu4o5 >
rtP_anomaly_start * rtP_sim_time ) ; } if ( localDW -> gi1f1odsap ) { *
j3hft4pgzt = localB -> gidhllnuvs * nwqehqsoa4 ; } else { * j3hft4pgzt =
nwqehqsoa4 ; } localB -> avgczf2ooq = kmsrr4v05y . P_35 * * j3hft4pgzt ; if (
ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW ->
lb52a1mu3o = localB -> avgczf2ooq >= kmsrr4v05y . P_36 ? 1 : localB ->
avgczf2ooq > kmsrr4v05y . P_37 ? 0 : - 1 ; } localB -> f3qejrdhds = ( localDW
-> lb52a1mu3o == 1 ? kmsrr4v05y . P_36 : localDW -> lb52a1mu3o == - 1 ?
kmsrr4v05y . P_37 : localB -> avgczf2ooq ) + localB -> f5cs2iubqm ; if (
ssIsModeUpdateTimeStep ( e4f4oaoqet -> _mdlRefSfcnS ) ) { localDW ->
n1bvoa51e2 = localB -> f3qejrdhds >= kmsrr4v05y . P_38 ? 1 : localB ->
f3qejrdhds > kmsrr4v05y . P_39 ? 0 : - 1 ; } * ljajhg2mpa = ( localDW ->
n1bvoa51e2 == 1 ? kmsrr4v05y . P_38 : localDW -> n1bvoa51e2 == - 1 ?
kmsrr4v05y . P_39 : localB -> f3qejrdhds ) / kmsrr4v05y . P_46 ; } void
EvPowertrainControllerTID2 ( j43xi004pt * localB ) { localB -> hqve051iy3 = -
kmsrr4v05y . P_44 ; } void lktaxgo5iz ( h5efmxf3a3 * const e4f4oaoqet ) { if
( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( e4f4oaoqet ->
_mdlRefSfcnS , "EvPowertrainController" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void io04qbfqhk (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , h5efmxf3a3 * const e4f4oaoqet , j43xi004pt * localB ,
eu5lctztg1 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; kmsrr4v05y . P_37 = rtMinusInf ; kmsrr4v05y . P_38 = rtInf ; ( void )
memset ( ( void * ) e4f4oaoqet , 0 , sizeof ( h5efmxf3a3 ) ) ; e4f4oaoqet ->
Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; e4f4oaoqet -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( e4f4oaoqet -> _mdlRefSfcnS , "EvPowertrainController" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( j43xi004pt ) ) ; { localB -> b3scw4czeo = 0.0 ;
localB -> e31ewsu4o5 = 0.0 ; localB -> a4krgkmeul = 0.0 ; localB ->
gidhllnuvs = 0.0 ; localB -> f5cs2iubqm = 0.0 ; localB -> ktyxvdn2cu = 0.0 ;
localB -> ivzogks50b = 0.0 ; localB -> gft5rieiup = 0.0 ; localB ->
caj144zxge = 0.0 ; localB -> eytotkf1vm = 0.0 ; localB -> o0ircfwuga = 0.0 ;
localB -> aav4kys2yx = 0.0 ; localB -> n4wlmihy0b = 0.0 ; localB ->
erxin33mo4 = 0.0 ; localB -> hj3g04npot = 0.0 ; localB -> jdcfxmwpdq = 0.0 ;
localB -> pecbstxo0c = 0.0 ; localB -> lo4gop013w = 0.0 ; localB ->
k3kc33tt5q = 0.0 ; localB -> ms52gyvzgu = 0.0 ; localB -> bn0lgxjozh = 0.0 ;
localB -> avgczf2ooq = 0.0 ; localB -> f3qejrdhds = 0.0 ; localB ->
hqve051iy3 = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 , sizeof (
eu5lctztg1 ) ) ; EvPowertrainController_InitializeDataMapInfo ( e4f4oaoqet ,
localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( e4f4oaoqet -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
e4f4oaoqet -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( e4f4oaoqet -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } if ( mr_nonContOutputArray [ 0 ] != ( NULL ) ) {
mr_nonContOutputArray [ 0 ] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 0 ] [ 0 ] . currVal = ( char_T * ) & localB ->
ctz21muiou ; mr_nonContOutputArray [ 0 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 1 ] . currVal = ( char_T * ) &
localB -> atjpfp4xzp ; mr_nonContOutputArray [ 0 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 2 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 2 ] . currVal = ( char_T * ) &
localB -> cjowe4wogp ; mr_nonContOutputArray [ 0 ] [ 2 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 3 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 3 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 3 ] . currVal = ( char_T * ) &
localB -> m0dpnlal41 ; mr_nonContOutputArray [ 0 ] [ 3 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 4 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 4 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 4 ] . currVal = ( char_T * ) &
localB -> kkzps4sqer ; mr_nonContOutputArray [ 0 ] [ 4 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 5 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 5 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 5 ] . currVal = ( char_T * ) &
localB -> opurnnwgbs ; mr_nonContOutputArray [ 0 ] [ 5 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 6 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 6 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 6 ] . currVal = ( char_T * ) &
localB -> k14jn42102 ; mr_nonContOutputArray [ 0 ] [ 6 ] . next = & (
mr_nonContOutputArray [ 0 ] [ 7 ] ) ; } if ( mr_nonContOutputArray [ 0 ] != (
NULL ) ) { mr_nonContOutputArray [ 0 ] [ 7 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 0 ] [ 7 ] . currVal = ( char_T * ) &
localB -> bcwwhh5ooi ; mr_nonContOutputArray [ 0 ] [ 7 ] . next = ( NULL ) ;
} if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) { mr_nonContOutputArray [ 1
] [ 0 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 1
] [ 0 ] . currVal = ( char_T * ) & localB -> ctz21muiou ;
mr_nonContOutputArray [ 1 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 1 ] [
1 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != ( NULL ) ) {
mr_nonContOutputArray [ 1 ] [ 1 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 1 ] [ 1 ] . currVal = ( char_T * ) & localB ->
atjpfp4xzp ; mr_nonContOutputArray [ 1 ] [ 1 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 2 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 2 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 2 ] . currVal = ( char_T * ) &
localB -> cjowe4wogp ; mr_nonContOutputArray [ 1 ] [ 2 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 3 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 3 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 3 ] . currVal = ( char_T * ) &
localB -> m0dpnlal41 ; mr_nonContOutputArray [ 1 ] [ 3 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 4 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 4 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 4 ] . currVal = ( char_T * ) &
localB -> kkzps4sqer ; mr_nonContOutputArray [ 1 ] [ 4 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 5 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 5 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 5 ] . currVal = ( char_T * ) &
localB -> opurnnwgbs ; mr_nonContOutputArray [ 1 ] [ 5 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 6 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 6 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 6 ] . currVal = ( char_T * ) &
localB -> k14jn42102 ; mr_nonContOutputArray [ 1 ] [ 6 ] . next = & (
mr_nonContOutputArray [ 1 ] [ 7 ] ) ; } if ( mr_nonContOutputArray [ 1 ] != (
NULL ) ) { mr_nonContOutputArray [ 1 ] [ 7 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 1 ] [ 7 ] . currVal = ( char_T * ) &
localB -> bcwwhh5ooi ; mr_nonContOutputArray [ 1 ] [ 7 ] . next = ( NULL ) ;
} } void mr_EvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_EvPowertrainController , 52 ) ; * retVal = 1 ; } static void
mr_EvPowertrainController_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) ; static void
mr_EvPowertrainController_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_EvPowertrainController_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_EvPowertrainController_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_EvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_EvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_EvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_EvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_EvPowertrainController_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_EvPowertrainController_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EvPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_EvPowertrainController_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_EvPowertrainController_GetDWork (
const pwecol01r52 * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] =
{ "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix
( 1 , 1 , 3 , ssDWFieldNames ) ; mr_EvPowertrainController_cacheDataAsMxArray
( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW
-> rtb ) ) ; { static const char_T * rtdwDataFieldNames [ 19 ] = {
"mdlrefDW->rtdw.armfch2u44" , "mdlrefDW->rtdw.nnxvdv3cvm" ,
"mdlrefDW->rtdw.jgqhbqgtkr" , "mdlrefDW->rtdw.nksums311w" ,
"mdlrefDW->rtdw.lb52a1mu3o" , "mdlrefDW->rtdw.n1bvoa51e2" ,
"mdlrefDW->rtdw.mhhbumlfzt" , "mdlrefDW->rtdw.aaqjbsafhd" ,
"mdlrefDW->rtdw.p0f23gurm0" , "mdlrefDW->rtdw.lbeezklbqu" ,
"mdlrefDW->rtdw.m4msyl3q3r" , "mdlrefDW->rtdw.bxrirfenyy" ,
"mdlrefDW->rtdw.g4uakbinvb" , "mdlrefDW->rtdw.jmz2ob51or" ,
"mdlrefDW->rtdw.mvkkgpsw04" , "mdlrefDW->rtdw.iisivqmhw3" ,
"mdlrefDW->rtdw.ik2c1svrfu" , "mdlrefDW->rtdw.ecie3j0llp" ,
"mdlrefDW->rtdw.gi1f1odsap" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 19 , rtdwDataFieldNames ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . armfch2u44 ) , sizeof ( mdlrefDW -> rtdw .
armfch2u44 ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 1 , ( const void * ) & ( mdlrefDW -> rtdw . nnxvdv3cvm ) , sizeof (
mdlrefDW -> rtdw . nnxvdv3cvm ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . jgqhbqgtkr ) , sizeof ( mdlrefDW -> rtdw .
jgqhbqgtkr ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 3 , ( const void * ) & ( mdlrefDW -> rtdw . nksums311w ) , sizeof (
mdlrefDW -> rtdw . nksums311w ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( mdlrefDW -> rtdw . lb52a1mu3o ) , sizeof ( mdlrefDW -> rtdw .
lb52a1mu3o ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 5 , ( const void * ) & ( mdlrefDW -> rtdw . n1bvoa51e2 ) , sizeof (
mdlrefDW -> rtdw . n1bvoa51e2 ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( mdlrefDW -> rtdw . mhhbumlfzt ) , sizeof ( mdlrefDW -> rtdw .
mhhbumlfzt ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 7 , ( const void * ) & ( mdlrefDW -> rtdw . aaqjbsafhd ) , sizeof (
mdlrefDW -> rtdw . aaqjbsafhd ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( mdlrefDW -> rtdw . p0f23gurm0 ) , sizeof ( mdlrefDW -> rtdw .
p0f23gurm0 ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 9 , ( const void * ) & ( mdlrefDW -> rtdw . lbeezklbqu ) , sizeof (
mdlrefDW -> rtdw . lbeezklbqu ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( mdlrefDW -> rtdw . m4msyl3q3r ) , sizeof ( mdlrefDW -> rtdw .
m4msyl3q3r ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 11 , ( const void * ) & ( mdlrefDW -> rtdw . bxrirfenyy ) , sizeof (
mdlrefDW -> rtdw . bxrirfenyy ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( mdlrefDW -> rtdw . g4uakbinvb ) , sizeof ( mdlrefDW -> rtdw .
g4uakbinvb ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 13 , ( const void * ) & ( mdlrefDW -> rtdw . jmz2ob51or ) , sizeof (
mdlrefDW -> rtdw . jmz2ob51or ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( mdlrefDW -> rtdw . mvkkgpsw04 ) , sizeof ( mdlrefDW -> rtdw .
mvkkgpsw04 ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 15 , ( const void * ) & ( mdlrefDW -> rtdw . iisivqmhw3 ) , sizeof (
mdlrefDW -> rtdw . iisivqmhw3 ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( mdlrefDW -> rtdw . ik2c1svrfu ) , sizeof ( mdlrefDW -> rtdw .
ik2c1svrfu ) ) ; mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0
, 17 , ( const void * ) & ( mdlrefDW -> rtdw . ecie3j0llp ) , sizeof (
mdlrefDW -> rtdw . ecie3j0llp ) ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( mdlrefDW -> rtdw . gi1f1odsap ) , sizeof ( mdlrefDW -> rtdw .
gi1f1odsap ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_EvPowertrainController_SetDWork (
pwecol01r52 * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . armfch2u44 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
armfch2u44 ) ) ; mr_EvPowertrainController_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . nnxvdv3cvm ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW
-> rtdw . nnxvdv3cvm ) ) ; mr_EvPowertrainController_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . jgqhbqgtkr ) , rtdwData , 0 , 2 , sizeof (
mdlrefDW -> rtdw . jgqhbqgtkr ) ) ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . nksums311w ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw .
nksums311w ) ) ; mr_EvPowertrainController_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . lb52a1mu3o ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW
-> rtdw . lb52a1mu3o ) ) ; mr_EvPowertrainController_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . n1bvoa51e2 ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . n1bvoa51e2 ) ) ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . mhhbumlfzt ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
mhhbumlfzt ) ) ; mr_EvPowertrainController_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . aaqjbsafhd ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW
-> rtdw . aaqjbsafhd ) ) ; mr_EvPowertrainController_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . p0f23gurm0 ) , rtdwData , 0 , 8 , sizeof (
mdlrefDW -> rtdw . p0f23gurm0 ) ) ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . lbeezklbqu ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw .
lbeezklbqu ) ) ; mr_EvPowertrainController_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . m4msyl3q3r ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW
-> rtdw . m4msyl3q3r ) ) ; mr_EvPowertrainController_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . bxrirfenyy ) , rtdwData , 0 , 11 , sizeof (
mdlrefDW -> rtdw . bxrirfenyy ) ) ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . g4uakbinvb ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw .
g4uakbinvb ) ) ; mr_EvPowertrainController_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . jmz2ob51or ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW
-> rtdw . jmz2ob51or ) ) ; mr_EvPowertrainController_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . mvkkgpsw04 ) , rtdwData , 0 , 14 , sizeof (
mdlrefDW -> rtdw . mvkkgpsw04 ) ) ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . iisivqmhw3 ) , rtdwData , 0 , 15 , sizeof ( mdlrefDW -> rtdw .
iisivqmhw3 ) ) ; mr_EvPowertrainController_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . ik2c1svrfu ) , rtdwData , 0 , 16 , sizeof ( mdlrefDW
-> rtdw . ik2c1svrfu ) ) ; mr_EvPowertrainController_restoreDataFromMxArray (
( void * ) & ( mdlrefDW -> rtdw . ecie3j0llp ) , rtdwData , 0 , 17 , sizeof (
mdlrefDW -> rtdw . ecie3j0llp ) ) ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . gi1f1odsap ) , rtdwData , 0 , 18 , sizeof ( mdlrefDW -> rtdw .
gi1f1odsap ) ) ; } } void mr_EvPowertrainController_RegisterSimStateChecksum
( SimStruct * S ) { const uint32_T chksum [ 4 ] = { 4079889207U , 3656449033U
, 4053328670U , 1326461861U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"EvPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ;
}
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
