#ifndef RTW_HEADER_EvPowertrainController_h_
#define RTW_HEADER_EvPowertrainController_h_
#ifndef EvPowertrainController_COMMON_INCLUDES_
#define EvPowertrainController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "EvPowertrainController_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T b3scw4czeo ; real_T e31ewsu4o5 ; real_T a4krgkmeul ;
real_T gidhllnuvs ; real_T f5cs2iubqm ; real_T ktyxvdn2cu ; real_T ivzogks50b
; real_T gft5rieiup ; real_T caj144zxge ; real_T eytotkf1vm ; real_T
o0ircfwuga ; real_T aav4kys2yx ; real_T n4wlmihy0b ; real_T erxin33mo4 ;
real_T hj3g04npot ; real_T jdcfxmwpdq ; real_T pecbstxo0c ; real_T lo4gop013w
; real_T k3kc33tt5q ; real_T ms52gyvzgu ; real_T bn0lgxjozh ; real_T
avgczf2ooq ; real_T f3qejrdhds ; real_T hqve051iy3 ; boolean_T bcwwhh5ooi ;
boolean_T k14jn42102 ; boolean_T opurnnwgbs ; boolean_T kkzps4sqer ;
boolean_T m0dpnlal41 ; boolean_T cjowe4wogp ; boolean_T atjpfp4xzp ;
boolean_T ctz21muiou ; } j43xi004pt ; typedef struct { int_T armfch2u44 ;
int_T nnxvdv3cvm ; int_T jgqhbqgtkr ; int_T nksums311w ; int_T lb52a1mu3o ;
int_T n1bvoa51e2 ; boolean_T mhhbumlfzt ; boolean_T aaqjbsafhd ; boolean_T
p0f23gurm0 ; boolean_T lbeezklbqu ; boolean_T m4msyl3q3r ; boolean_T
bxrirfenyy ; boolean_T g4uakbinvb ; boolean_T jmz2ob51or ; boolean_T
mvkkgpsw04 ; boolean_T iisivqmhw3 ; boolean_T ik2c1svrfu ; boolean_T
ecie3j0llp ; boolean_T gi1f1odsap ; } eu5lctztg1 ; typedef struct { real_T
pz3yramrh1 ; real_T jqkeufbikc ; real_T gm5hav5d23 ; real_T j5njcu22qi ;
real_T d2ltsd0y13 ; real_T o2j0qznmts ; real_T et2ic523b4 ; real_T m25324ikfu
; real_T mw05xgug55 ; real_T gppku3pbqw ; real_T c5qyr3kj3a ; real_T
hlyabblwxf ; real_T lcnv3wkxtq ; real_T ppn3z4uza2 ; real_T j3b05htjyn ;
real_T nrblbqrzel ; real_T cyw3iirjcj ; real_T c0xbqqkwuq ; real_T l232vlymc0
; real_T glm3f343tc ; real_T obweijysw0 ; } m0wpkuzrqm ; struct kmsrr4v05yq_
{ real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T P_8 ; real_T P_9
[ 12 ] ; real_T P_10 [ 12 ] ; real_T P_11 ; real_T P_12 ; real_T P_13 ;
real_T P_14 ; real_T P_15 [ 12 ] ; real_T P_16 [ 12 ] ; real_T P_17 ; real_T
P_18 [ 2 ] ; real_T P_19 [ 2 ] ; real_T P_20 ; real_T P_21 ; real_T P_22 ;
real_T P_23 [ 180 ] ; real_T P_24 [ 12 ] ; real_T P_25 [ 15 ] ; real_T P_26 ;
real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T
P_32 [ 12 ] ; real_T P_33 [ 12 ] ; real_T P_34 ; real_T P_35 ; real_T P_36 ;
real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real32_T P_47
; real32_T P_48 ; real32_T P_49 ; uint32_T P_50 [ 2 ] ; } ; struct a50xwovlji
{ struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge * timingBridge ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 10 ] ; int_T systemTid [ 10 ]
; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ;
typedef struct { j43xi004pt rtb ; eu5lctztg1 rtdw ; h5efmxf3a3 rtm ; }
pwecol01r52 ; extern real_T rtP_accel_pedal ; extern real_T rtP_anomaly_start
; extern real_T rtP_braking_regen ; extern real_T rtP_sim_time ; extern void
io04qbfqhk ( SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , h5efmxf3a3 * const e4f4oaoqet , j43xi004pt * localB ,
eu5lctztg1 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_EvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_EvPowertrainController_GetDWork ( const pwecol01r52 * mdlrefDW ) ; extern
void mr_EvPowertrainController_SetDWork ( pwecol01r52 * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_EvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
EvPowertrainController_GetCAPIStaticMap ( void ) ; extern void kmujx5avxh (
const real_T * prupxtwaeb , const real_T * cc05wk0yjc , j43xi004pt * localB ,
eu5lctztg1 * localDW , m0wpkuzrqm * localZCSV ) ; extern void
EvPowertrainController ( h5efmxf3a3 * const e4f4oaoqet , const real_T *
prupxtwaeb , const real_T * jym0osvxgw , const real_T * mipgkbochp , const
real32_T * os0fqa5lgk , const real32_T * m4hobcmm3x , const real32_T *
duwigdq1j3 , const real_T * cc05wk0yjc , const real32_T * dkxwpikwy3 , real_T
* j3hft4pgzt , real_T * ljajhg2mpa , j43xi004pt * localB , eu5lctztg1 *
localDW ) ; extern void EvPowertrainControllerTID2 ( j43xi004pt * localB ) ;
extern void lktaxgo5iz ( h5efmxf3a3 * const e4f4oaoqet ) ;
#endif
