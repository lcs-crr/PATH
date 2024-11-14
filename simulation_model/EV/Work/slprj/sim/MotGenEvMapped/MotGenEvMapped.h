#ifndef RTW_HEADER_MotGenEvMapped_h_
#define RTW_HEADER_MotGenEvMapped_h_
#ifndef MotGenEvMapped_COMMON_INCLUDES_
#define MotGenEvMapped_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "MotGenEvMapped_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T irivfllpzg ; real_T clfqqzu40n ; } dbofzogh4q ;
typedef struct { int8_T nieu1vc5kp ; int8_T p0ylzwrrqf ; int8_T nnobr021gq ;
} e4ld3xwh5m ; typedef struct { real_T boofytynkf ; } had2nm4nh5 ; typedef
struct { real_T boofytynkf ; } dpukc5flet ; typedef struct { boolean_T
boofytynkf ; } cfzqkyi2uw ; struct a1kqx2ugby3_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 [ 2 ] ; real_T P_6 [ 2 ] ;
real_T P_7 ; real_T P_8 ; real_T P_9 [ 667 ] ; real_T P_10 [ 23 ] ; real_T
P_11 [ 29 ] ; real_T P_12 ; real_T P_13 ; uint32_T P_14 [ 2 ] ; } ; struct
nsg1hqawul { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; time_T tStart ; } Timing ; } ; typedef struct { dbofzogh4q rtb ; e4ld3xwh5m
rtdw ; p5veghsq5l rtm ; } juj5p01hmia ; extern void oaswkbqw52 ( SimStruct *
_mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
p5veghsq5l * const evs52r32sz , dbofzogh4q * localB , e4ld3xwh5m * localDW ,
had2nm4nh5 * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_MotGenEvMapped_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_MotGenEvMapped_GetDWork (
const juj5p01hmia * mdlrefDW ) ; extern void mr_MotGenEvMapped_SetDWork (
juj5p01hmia * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_MotGenEvMapped_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_MotGenEvMapped_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * MotGenEvMapped_GetCAPIStaticMap ( void ) ;
extern void cdsebpbgwo ( real_T * ponb5z2hzx , had2nm4nh5 * localX ) ; extern
void absendw0s0 ( had2nm4nh5 * localX ) ; extern void a1gbom0qkq ( e4ld3xwh5m
* localDW ) ; extern void bbghji4q0s ( dbofzogh4q * localB , dpukc5flet *
localXdot ) ; extern void l54abfqz2k ( void ) ; extern void MotGenEvMapped (
p5veghsq5l * const evs52r32sz , const real_T * m0ompgh13e , const real_T *
kgnmwflo5q , const real_T * m1i5o0ijap , real_T * ponb5z2hzx , real_T *
itrcxc1zrc , dbofzogh4q * localB , e4ld3xwh5m * localDW , had2nm4nh5 * localX
) ; extern void MotGenEvMappedTID2 ( dbofzogh4q * localB ) ; extern void
phnn1n2hbt ( p5veghsq5l * const evs52r32sz ) ;
#endif
