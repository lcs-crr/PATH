#include "EvReferenceApplication.h"
#include "rtwtypes.h"
#include "EvReferenceApplication_private.h"
#include "EvReferenceApplication_types.h"
#include <string.h>
#include "mwmathutil.h"
#include <stddef.h>
#include "getExpmParams_wY8zD8EB.h"
#include "recomputeBlockDiag_jaPUPAO1.h"
#include "xhseqr_9pzSUODQ.h"
#include "rt_logging_mmi.h"
#include "EvReferenceApplication_capi.h"
#include "look1_pbinlcapw.h"
#include "DrivetrainEv.h"
#include "BattEv.h"
#include "MotGenEvMapped.h"
#include "BMS_Software.h"
#include "EvPowertrainController.h"
#include "EvReferenceApplication_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 6 , &
stopRequested ) ; } rtExtModeShutdown ( 6 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 7 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 , 1 ,
1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S ,
const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define mkgqau5dpa (-1)
#define h3kbp2fw34 (1U)
#define iwkft5sp5t ((uint8_T)0U)
#define lgbggzlwgj (2U)
#define lnwe4uhdes (3U)
cuhiq2he3x cuhiq2he3xv ; i344fcmwfc i344fcmwfc1 ; giqt2tul5w giqt2tul5wr ;
dhvysoxui2 dhvysoxui2f ; c4o1mv5dv4 c4o1mv5dv4m ; jh4nyoq4g4 jh4nyoq4g4o ;
gkywbalvxl gkywbalvxlx ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static boolean_T npvbbadvwu ( const real_T x [ 4 ] ) ; static void
mmxjs1wpw4 ( const real_T A [ 4 ] , real_T V [ 4 ] , real_T T [ 4 ] ) ;
static void bqvsi4qtnx ( real_T A [ 4 ] , real_T F [ 4 ] ) ; void golv5obmwl
( real_T rtp_IC , crxjqcpzhj * localB ) { localB -> bd2ndavyho = rtp_IC ; }
void h0wdpjbicq ( lh2twa3gpf * localDW ) { localDW -> mc3fhmonso = false ; }
void d15dybd5c4 ( SimStruct * rtS_p , lh2twa3gpf * localDW ) { localDW ->
mc3fhmonso = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; }
void g30v1kdrwb ( SimStruct * rtS_i , boolean_T fmwgni0l5x , real_T
csu2d2ka4n , crxjqcpzhj * localB , lh2twa3gpf * localDW ) { if (
ssIsSampleHit ( rtS_i , 1 , 0 ) && ssIsModeUpdateTimeStep ( rtS_i ) ) { if (
fmwgni0l5x ) { if ( ! localDW -> mc3fhmonso ) { if ( ssGetTaskTime ( rtS_i ,
1 ) != ssGetTStart ( rtS_i ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS_i ) ; } localDW -> mc3fhmonso = true ; } } else if ( localDW ->
mc3fhmonso ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ;
h0wdpjbicq ( localDW ) ; } } if ( localDW -> mc3fhmonso ) { localB ->
bd2ndavyho = csu2d2ka4n ; if ( ssIsModeUpdateTimeStep ( rtS_i ) ) {
srUpdateBC ( localDW -> iqmyanxtr1 ) ; } } } static boolean_T npvbbadvwu (
const real_T x [ 4 ] ) { real_T x_p ; int32_T k ; boolean_T b_p ; b_p = true
; for ( k = 0 ; k < 4 ; k ++ ) { if ( b_p ) { x_p = x [ k ] ; if ( ( !
muDoubleScalarIsInf ( x_p ) ) && ( ! muDoubleScalarIsNaN ( x_p ) ) ) { } else
{ b_p = false ; } } else { b_p = false ; } } return ! b_p ; } static void
mmxjs1wpw4 ( const real_T A [ 4 ] , real_T V [ 4 ] , real_T T [ 4 ] ) { if (
npvbbadvwu ( A ) ) { V [ 0 ] = ( rtNaN ) ; V [ 2 ] = ( rtNaN ) ; V [ 3 ] = (
rtNaN ) ; V [ 1 ] = 0.0 ; T [ 0 ] = ( rtNaN ) ; T [ 1 ] = ( rtNaN ) ; T [ 2 ]
= ( rtNaN ) ; T [ 3 ] = ( rtNaN ) ; } else { T [ 0 ] = A [ 0 ] ; T [ 2 ] = A
[ 2 ] ; T [ 3 ] = A [ 3 ] ; T [ 1 ] = A [ 1 ] ; V [ 2 ] = 0.0 ; V [ 1 ] = 0.0
; V [ 0 ] = 1.0 ; V [ 3 ] = 1.0 ; xhseqr_9pzSUODQ ( T , V ) ; } } static void
bqvsi4qtnx ( real_T A [ 4 ] , real_T F [ 4 ] ) { real_T A2 [ 4 ] ; real_T A4
[ 4 ] ; real_T A6 [ 4 ] ; real_T A6_p [ 4 ] ; real_T U [ 4 ] ; real_T V [ 4 ]
; real_T A6_idx_0 ; real_T A6_idx_1 ; real_T A6_idx_2 ; real_T A6_idx_3 ;
real_T a22 ; real_T d ; real_T exptj ; real_T tmp ; real_T tmp_e ; real_T
tmp_i ; real_T tmp_p ; int32_T blockFormat ; int32_T exitg1 ; int32_T i ;
int32_T r1 ; int32_T r2 ; boolean_T exitg2 ; boolean_T recomputeDiags ; if (
npvbbadvwu ( A ) ) { F [ 0 ] = ( rtNaN ) ; F [ 1 ] = ( rtNaN ) ; F [ 2 ] = (
rtNaN ) ; F [ 3 ] = ( rtNaN ) ; } else { recomputeDiags = true ; blockFormat
= 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( blockFormat < 2 ) ) { r1 = 0
; do { exitg1 = 0 ; if ( r1 < 2 ) { if ( ( r1 != blockFormat ) && ( ! ( A [ (
blockFormat << 1 ) + r1 ] == 0.0 ) ) ) { recomputeDiags = false ; exitg1 = 1
; } else { r1 ++ ; } } else { blockFormat ++ ; exitg1 = 2 ; } } while (
exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } if ( recomputeDiags
) { F [ 1 ] = 0.0 ; F [ 2 ] = 0.0 ; F [ 0 ] = muDoubleScalarExp ( A [ 0 ] ) ;
F [ 3 ] = muDoubleScalarExp ( A [ 3 ] ) ; } else { recomputeDiags = true ;
blockFormat = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( blockFormat < 2
) ) { r1 = 0 ; do { exitg1 = 0 ; if ( r1 <= blockFormat ) { if ( ! ( A [ (
blockFormat << 1 ) + r1 ] == A [ ( r1 << 1 ) + blockFormat ] ) ) {
recomputeDiags = false ; exitg1 = 1 ; } else { r1 ++ ; } } else { blockFormat
++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 =
true ; } } if ( recomputeDiags ) { mmxjs1wpw4 ( A , A4 , A2 ) ; exptj =
muDoubleScalarExp ( A2 [ 0 ] ) ; A6 [ 0 ] = A4 [ 0 ] * exptj ; A6 [ 1 ] = A4
[ 1 ] * exptj ; exptj = muDoubleScalarExp ( A2 [ 3 ] ) ; A6 [ 2 ] = A4 [ 2 ]
* exptj ; A6 [ 3 ] = A4 [ 3 ] * exptj ; exptj = A4 [ 2 ] ; A6_idx_0 = A4 [ 0
] ; A6_idx_1 = A4 [ 3 ] ; A6_idx_2 = A4 [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ )
{ d = A6 [ i + 2 ] ; a22 = A6 [ i ] ; F [ i ] = d * exptj + a22 * A6_idx_0 ;
F [ i + 2 ] = d * A6_idx_1 + a22 * A6_idx_2 ; } exptj = ( F [ 1 ] + F [ 2 ] )
/ 2.0 ; F [ 3 ] = ( F [ 3 ] + F [ 3 ] ) / 2.0 ; F [ 0 ] = ( F [ 0 ] + F [ 0 ]
) / 2.0 ; F [ 1 ] = ( F [ 1 ] + F [ 2 ] ) / 2.0 ; F [ 2 ] = exptj ; } else {
recomputeDiags = true ; if ( ( A [ 1 ] != 0.0 ) && ( ( A [ 0 ] != A [ 3 ] )
|| ( muDoubleScalarSign ( A [ 1 ] ) * muDoubleScalarSign ( A [ 2 ] ) != - 1.0
) ) ) { recomputeDiags = false ; } getExpmParams_wY8zD8EB ( A , A2 , A4 , A6
, & r1 , & exptj ) ; if ( exptj != 0.0 ) { d = muDoubleScalarPower ( 2.0 ,
exptj ) ; A [ 0 ] /= d ; A [ 1 ] /= d ; A [ 2 ] /= d ; A [ 3 ] /= d ; d =
muDoubleScalarPower ( 2.0 , 2.0 * exptj ) ; A2 [ 0 ] /= d ; A2 [ 1 ] /= d ;
A2 [ 2 ] /= d ; A2 [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 4.0 * exptj )
; A4 [ 0 ] /= d ; A4 [ 1 ] /= d ; A4 [ 2 ] /= d ; A4 [ 3 ] /= d ; d =
muDoubleScalarPower ( 2.0 , 6.0 * exptj ) ; A6 [ 0 ] /= d ; A6 [ 1 ] /= d ;
A6 [ 2 ] /= d ; A6 [ 3 ] /= d ; } if ( recomputeDiags ) { if ( A [ 1 ] == 0.0
) { blockFormat = 1 ; } else { blockFormat = 2 ; } } if ( r1 == 3 ) { U [ 1 ]
= A2 [ 1 ] ; U [ 2 ] = A2 [ 2 ] ; U [ 0 ] = A2 [ 0 ] + 60.0 ; U [ 3 ] = A2 [
3 ] + 60.0 ; A6_idx_0 = A [ 2 ] ; A6_idx_1 = A [ 0 ] ; A6_idx_2 = A [ 3 ] ;
A6_idx_3 = A [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = U [ ( i << 1 ) + 1 ]
; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] = d * A6_idx_0 + a22 * A6_idx_1 ; A6_p
[ ( i << 1 ) + 1 ] = d * A6_idx_2 + a22 * A6_idx_3 ; } U [ 0 ] = A6_p [ 0 ] ;
V [ 0 ] = 12.0 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = 12.0 * A2 [ 1 ]
; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = 12.0 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V
[ 3 ] = 12.0 * A2 [ 3 ] ; d = 120.0 ; } else if ( r1 == 5 ) { U [ 0 ] = 420.0
* A2 [ 0 ] + A4 [ 0 ] ; U [ 1 ] = 420.0 * A2 [ 1 ] + A4 [ 1 ] ; U [ 2 ] =
420.0 * A2 [ 2 ] + A4 [ 2 ] ; U [ 3 ] = 420.0 * A2 [ 3 ] + A4 [ 3 ] ; U [ 0 ]
+= 15120.0 ; U [ 3 ] += 15120.0 ; A6_idx_0 = A [ 2 ] ; A6_idx_1 = A [ 0 ] ;
A6_idx_2 = A [ 3 ] ; A6_idx_3 = A [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d =
U [ ( i << 1 ) + 1 ] ; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] = d * A6_idx_0 +
a22 * A6_idx_1 ; A6_p [ ( i << 1 ) + 1 ] = d * A6_idx_2 + a22 * A6_idx_3 ; }
U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = 30.0 * A4 [ 0 ] + 3360.0 * A2 [ 0 ] ; U [ 1
] = A6_p [ 1 ] ; V [ 1 ] = 30.0 * A4 [ 1 ] + 3360.0 * A2 [ 1 ] ; U [ 2 ] =
A6_p [ 2 ] ; V [ 2 ] = 30.0 * A4 [ 2 ] + 3360.0 * A2 [ 2 ] ; U [ 3 ] = A6_p [
3 ] ; V [ 3 ] = 30.0 * A4 [ 3 ] + 3360.0 * A2 [ 3 ] ; d = 30240.0 ; } else if
( r1 == 7 ) { U [ 0 ] = ( 1512.0 * A4 [ 0 ] + A6 [ 0 ] ) + 277200.0 * A2 [ 0
] ; U [ 1 ] = ( 1512.0 * A4 [ 1 ] + A6 [ 1 ] ) + 277200.0 * A2 [ 1 ] ; U [ 2
] = ( 1512.0 * A4 [ 2 ] + A6 [ 2 ] ) + 277200.0 * A2 [ 2 ] ; U [ 3 ] = (
1512.0 * A4 [ 3 ] + A6 [ 3 ] ) + 277200.0 * A2 [ 3 ] ; U [ 0 ] += 8.64864E+6
; U [ 3 ] += 8.64864E+6 ; A6_idx_0 = A [ 2 ] ; A6_idx_1 = A [ 0 ] ; A6_idx_2
= A [ 3 ] ; A6_idx_3 = A [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = U [ ( i
<< 1 ) + 1 ] ; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] = d * A6_idx_0 + a22 *
A6_idx_1 ; A6_p [ ( i << 1 ) + 1 ] = d * A6_idx_2 + a22 * A6_idx_3 ; } U [ 0
] = A6_p [ 0 ] ; V [ 0 ] = ( 56.0 * A6 [ 0 ] + 25200.0 * A4 [ 0 ] ) +
1.99584E+6 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = ( 56.0 * A6 [ 1 ] +
25200.0 * A4 [ 1 ] ) + 1.99584E+6 * A2 [ 1 ] ; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ]
= ( 56.0 * A6 [ 2 ] + 25200.0 * A4 [ 2 ] ) + 1.99584E+6 * A2 [ 2 ] ; U [ 3 ]
= A6_p [ 3 ] ; V [ 3 ] = ( 56.0 * A6 [ 3 ] + 25200.0 * A4 [ 3 ] ) +
1.99584E+6 * A2 [ 3 ] ; d = 1.729728E+7 ; } else if ( r1 == 9 ) { d = A6 [ 2
] ; a22 = A6 [ 0 ] ; A6_idx_0 = A6 [ 3 ] ; A6_idx_1 = A6 [ 1 ] ; for ( i = 0
; i < 2 ; i ++ ) { A6_idx_2 = A2 [ ( i << 1 ) + 1 ] ; A6_idx_3 = A2 [ i << 1
] ; V [ i << 1 ] = A6_idx_2 * d + A6_idx_3 * a22 ; V [ ( i << 1 ) + 1 ] =
A6_idx_2 * A6_idx_0 + A6_idx_3 * A6_idx_1 ; } U [ 0 ] = ( ( 3960.0 * A6 [ 0 ]
+ V [ 0 ] ) + 2.16216E+6 * A4 [ 0 ] ) + 3.027024E+8 * A2 [ 0 ] ; U [ 1 ] = (
( 3960.0 * A6 [ 1 ] + V [ 1 ] ) + 2.16216E+6 * A4 [ 1 ] ) + 3.027024E+8 * A2
[ 1 ] ; U [ 2 ] = ( ( 3960.0 * A6 [ 2 ] + V [ 2 ] ) + 2.16216E+6 * A4 [ 2 ] )
+ 3.027024E+8 * A2 [ 2 ] ; U [ 3 ] = ( ( 3960.0 * A6 [ 3 ] + V [ 3 ] ) +
2.16216E+6 * A4 [ 3 ] ) + 3.027024E+8 * A2 [ 3 ] ; U [ 0 ] += 8.8216128E+9 ;
U [ 3 ] += 8.8216128E+9 ; A6_idx_0 = A [ 2 ] ; A6_idx_1 = A [ 0 ] ; A6_idx_2
= A [ 3 ] ; A6_idx_3 = A [ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = U [ ( i
<< 1 ) + 1 ] ; a22 = U [ i << 1 ] ; A6_p [ i << 1 ] = d * A6_idx_0 + a22 *
A6_idx_1 ; A6_p [ ( i << 1 ) + 1 ] = d * A6_idx_2 + a22 * A6_idx_3 ; } U [ 0
] = A6_p [ 0 ] ; V [ 0 ] = ( ( 90.0 * V [ 0 ] + 110880.0 * A6 [ 0 ] ) +
3.027024E+7 * A4 [ 0 ] ) + 2.0756736E+9 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V
[ 1 ] = ( ( 90.0 * V [ 1 ] + 110880.0 * A6 [ 1 ] ) + 3.027024E+7 * A4 [ 1 ] )
+ 2.0756736E+9 * A2 [ 1 ] ; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = ( ( 90.0 * V [ 2
] + 110880.0 * A6 [ 2 ] ) + 3.027024E+7 * A4 [ 2 ] ) + 2.0756736E+9 * A2 [ 2
] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] = ( ( 90.0 * V [ 3 ] + 110880.0 * A6 [ 3 ]
) + 3.027024E+7 * A4 [ 3 ] ) + 2.0756736E+9 * A2 [ 3 ] ; d = 1.76432256E+10 ;
} else { U [ 0 ] = ( 3.352212864E+10 * A6 [ 0 ] + 1.05594705216E+13 * A4 [ 0
] ) + 1.1873537964288E+15 * A2 [ 0 ] ; U [ 1 ] = ( 3.352212864E+10 * A6 [ 1 ]
+ 1.05594705216E+13 * A4 [ 1 ] ) + 1.1873537964288E+15 * A2 [ 1 ] ; U [ 2 ] =
( 3.352212864E+10 * A6 [ 2 ] + 1.05594705216E+13 * A4 [ 2 ] ) +
1.1873537964288E+15 * A2 [ 2 ] ; U [ 3 ] = ( 3.352212864E+10 * A6 [ 3 ] +
1.05594705216E+13 * A4 [ 3 ] ) + 1.1873537964288E+15 * A2 [ 3 ] ; U [ 0 ] +=
3.238237626624E+16 ; U [ 3 ] += 3.238237626624E+16 ; A6_idx_0 = ( 16380.0 *
A4 [ 0 ] + A6 [ 0 ] ) + 4.08408E+7 * A2 [ 0 ] ; A6_idx_1 = ( 16380.0 * A4 [ 1
] + A6 [ 1 ] ) + 4.08408E+7 * A2 [ 1 ] ; A6_idx_2 = ( 16380.0 * A4 [ 2 ] + A6
[ 2 ] ) + 4.08408E+7 * A2 [ 2 ] ; A6_idx_3 = ( 16380.0 * A4 [ 3 ] + A6 [ 3 ]
) + 4.08408E+7 * A2 [ 3 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = A6 [ i + 2 ] ;
a22 = A6 [ i ] ; A6_p [ i ] = ( d * A6_idx_1 + a22 * A6_idx_0 ) + U [ i ] ;
A6_p [ i + 2 ] = ( d * A6_idx_3 + a22 * A6_idx_2 ) + U [ i + 2 ] ; } tmp = (
182.0 * A6 [ 0 ] + 960960.0 * A4 [ 0 ] ) + 1.32324192E+9 * A2 [ 0 ] ; tmp_p =
( 182.0 * A6 [ 1 ] + 960960.0 * A4 [ 1 ] ) + 1.32324192E+9 * A2 [ 1 ] ; tmp_e
= ( 182.0 * A6 [ 2 ] + 960960.0 * A4 [ 2 ] ) + 1.32324192E+9 * A2 [ 2 ] ;
tmp_i = ( 182.0 * A6 [ 3 ] + 960960.0 * A4 [ 3 ] ) + 1.32324192E+9 * A2 [ 3 ]
; A6_idx_0 = A [ 2 ] ; A6_idx_1 = A [ 0 ] ; A6_idx_2 = A [ 3 ] ; A6_idx_3 = A
[ 1 ] ; for ( i = 0 ; i < 2 ; i ++ ) { d = A6_p [ ( i << 1 ) + 1 ] ; a22 =
A6_p [ i << 1 ] ; U [ i << 1 ] = d * A6_idx_0 + a22 * A6_idx_1 ; U [ ( i << 1
) + 1 ] = d * A6_idx_2 + a22 * A6_idx_3 ; d = A6 [ i + 2 ] ; a22 = A6 [ i ] ;
V [ i ] = ( ( ( d * tmp_p + a22 * tmp ) + 6.704425728E+11 * a22 ) +
1.29060195264E+14 * A4 [ i ] ) + 7.7717703038976E+15 * A2 [ i ] ; V [ i + 2 ]
= ( ( ( d * tmp_i + a22 * tmp_e ) + d * 6.704425728E+11 ) + A4 [ i + 2 ] *
1.29060195264E+14 ) + A2 [ i + 2 ] * 7.7717703038976E+15 ; } d =
6.476475253248E+16 ; } V [ 0 ] += d ; V [ 3 ] += d ; V [ 0 ] -= U [ 0 ] ; U [
0 ] *= 2.0 ; V [ 1 ] -= U [ 1 ] ; U [ 1 ] *= 2.0 ; V [ 2 ] -= U [ 2 ] ; U [ 2
] *= 2.0 ; V [ 3 ] -= U [ 3 ] ; U [ 3 ] *= 2.0 ; if ( muDoubleScalarAbs ( V [
1 ] ) > muDoubleScalarAbs ( V [ 0 ] ) ) { r1 = 1 ; r2 = 0 ; } else { r1 = 0 ;
r2 = 1 ; } d = V [ r2 ] / V [ r1 ] ; a22 = V [ r2 + 2 ] - V [ r1 + 2 ] * d ;
A6_idx_0 = ( U [ r2 ] - U [ r1 ] * d ) / a22 ; F [ 1 ] = A6_idx_0 ; F [ 0 ] =
( U [ r1 ] - V [ r1 + 2 ] * A6_idx_0 ) / V [ r1 ] ; A6_idx_0 = ( U [ r2 + 2 ]
- U [ r1 + 2 ] * d ) / a22 ; F [ 2 ] = ( U [ r1 + 2 ] - V [ r1 + 2 ] *
A6_idx_0 ) / V [ r1 ] ; F [ 0 ] ++ ; F [ 3 ] = A6_idx_0 + 1.0 ; if (
recomputeDiags ) { recomputeBlockDiag_jaPUPAO1 ( A , F , blockFormat ) ; } r1
= ( int32_T ) exptj ; for ( r2 = 0 ; r2 < r1 ; r2 ++ ) { for ( i = 0 ; i < 2
; i ++ ) { A6 [ i ] = F [ i + 2 ] * F [ 1 ] + F [ i ] * F [ 0 ] ; A6 [ i + 2
] = F [ i + 2 ] * F [ 3 ] + F [ i ] * F [ 2 ] ; } F [ 0 ] = A6 [ 0 ] ; F [ 1
] = A6 [ 1 ] ; F [ 2 ] = A6 [ 2 ] ; F [ 3 ] = A6 [ 3 ] ; if ( recomputeDiags
) { A [ 0 ] *= 2.0 ; A [ 1 ] *= 2.0 ; A [ 2 ] *= 2.0 ; A [ 3 ] *= 2.0 ;
recomputeBlockDiag_jaPUPAO1 ( A , F , blockFormat ) ; } } } } } } void
MdlInitialize ( void ) { int_T is ; int_T tmp_e ; int_T tmp_g ; int_T tmp_i ;
int_T tmp_j ; int_T tmp_m ; boolean_T tmp ; boolean_T tmp_p ; SimStruct * S ;
void * diag ; i344fcmwfc1 . deyyyt5ypg = 0.0 ; giqt2tul5wr . oeaskjkfsr = (
rtInf ) ; giqt2tul5wr . k4zhoquz4c = konn1m5pjf . FirstOrderHold_IniOut ;
giqt2tul5wr . mkiptczwen = ( rtInf ) ; giqt2tul5wr . fbroivbf3k = 0.0 ;
giqt2tul5wr . cjijsufndg = ( rtInf ) ; giqt2tul5wr . keqs0k3sdq = konn1m5pjf
. FirstOrderHold_IniOut_jie5nbhxr2 ; giqt2tul5wr . my5si44j4x = ( rtInf ) ;
giqt2tul5wr . alxnn4vrl1 = 0.0 ; i344fcmwfc1 . g14mueghy3 = 0.0 ; i344fcmwfc1
. fljoxgkrbw = 0.0 ; i344fcmwfc1 . lwcj1rfkgv = konn1m5pjf .
StateSpace_InitialCondition ; i344fcmwfc1 . f5i3cl2axt = konn1m5pjf .
PIDController_InitialConditionForIntegrator ; i344fcmwfc1 . ommjwylk33 =
konn1m5pjf . PIDController_InitialConditionForFilter ; tmp = false ; tmp_p =
false ; if ( tmp_p || tmp ) { is = strcmp ( ssGetSolverName ( rtS ) ,
"daessc" ) ; tmp_e = strcmp ( ssGetSolverName ( rtS ) , "ode14x" ) ; tmp_i =
strcmp ( ssGetSolverName ( rtS ) , "ode15s" ) ; tmp_m = strcmp (
ssGetSolverName ( rtS ) , "ode1be" ) ; tmp_g = strcmp ( ssGetSolverName ( rtS
) , "ode23t" ) ; tmp_j = strcmp ( ssGetSolverName ( rtS ) , "odeN" ) ; if ( (
boolean_T ) ( ( is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 )
& ( tmp_g != 0 ) & ( tmp_j != 0 ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "daessc" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } i344fcmwfc1 . piwaeu0cyd = konn1m5pjf .
Integrator1_IC ; i344fcmwfc1 . niplvsv1th = konn1m5pjf . Integrator2_IC ;
giqt2tul5wr . l4pn2msb3d [ 0 ] = konn1m5pjf . UnitDelay_InitialCondition [ 0
] ; giqt2tul5wr . l4pn2msb3d [ 1 ] = konn1m5pjf . UnitDelay_InitialCondition
[ 1 ] ; eqyc2wn3m1 ( & ( giqt2tul5wr . igqkoslatl . rtm ) , & ( giqt2tul5wr .
igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , & ( i344fcmwfc1
. d5katehawv ) ) ; hy4zrtbl2l ( ) ; poo3kmg0ob ( & ( giqt2tul5wr . isvmsyyglk
. rtm ) , & ( giqt2tul5wr . isvmsyyglk . rtdw ) , & ( i344fcmwfc1 .
nq1lsnuhqu ) ) ; cdsebpbgwo ( & cuhiq2he3xv . ghjwcqfy1n , & ( i344fcmwfc1 .
huiflaoyhi ) ) ; golv5obmwl ( konn1m5pjf . SignalHold_IC , & cuhiq2he3xv .
g30v1kdrwbo ) ; golv5obmwl ( konn1m5pjf . SignalHold_IC_k5etbcnmrh , &
cuhiq2he3xv . ciwxigmsq2 ) ; giqt2tul5wr . ipsejbdjkv = 0.0 ; giqt2tul5wr .
kr24afjbvy = 0.0 ; giqt2tul5wr . mgyqdv05fz = 0.0 ; giqt2tul5wr . hvilkifux1
= 0.0 ; giqt2tul5wr . odxrkracyb = mkgqau5dpa ; giqt2tul5wr . gmldgqtpy3 = 0U
; giqt2tul5wr . o23aklsczm = 0U ; giqt2tul5wr . imczkcsnw3 = iwkft5sp5t ;
cuhiq2he3xv . o5bbi4nmva = 0.0 ; giqt2tul5wr . mwwvksjbpb = 0.0 ; giqt2tul5wr
. pncmmapinm = false ; giqt2tul5wr . code54py1j = mkgqau5dpa ; giqt2tul5wr .
izevsizlwm = false ; giqt2tul5wr . fuq0idaz5u = mkgqau5dpa ; { int_T
rootPeriodicContStateIndices [ 1 ] = { 7 } ; real_T
rootPeriodicContStateRanges [ 2 ] = { - 3.1415926535897931 ,
3.1415926535897931 } ; ( void ) memcpy ( ( void * ) c4o1mv5dv4m ,
rootPeriodicContStateIndices , 1 * sizeof ( int_T ) ) ; ( void ) memcpy ( (
void * ) jh4nyoq4g4o , rootPeriodicContStateRanges , 2 * sizeof ( real_T ) )
; } { static int_T modelMassMatrixIr [ 148 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 ,
7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 ,
23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 40
, 43 , 49 , 46 , 38 , 39 , 41 , 42 , 44 , 45 , 47 , 48 , 50 , 51 , 50 , 51 ,
52 , 53 , 52 , 53 , 54 , 55 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63
, 64 , 65 , 64 , 65 , 66 , 67 , 66 , 67 , 68 , 69 , 68 , 69 , 70 , 71 , 70 ,
71 , 72 , 73 , 72 , 73 , 74 , 75 , 74 , 75 , 76 , 77 , 76 , 77 , 78 , 79 , 78
, 79 , 80 , 97 , 98 , 97 , 98 , 100 , 81 , 82 , 81 , 82 , 83 , 84 , 83 , 84 ,
85 , 86 , 85 , 86 , 87 , 88 , 87 , 88 , 89 , 90 , 89 , 90 , 91 , 92 , 91 , 92
, 93 , 94 , 93 , 94 , 95 , 96 , 95 , 96 , 97 , 98 , 100 , 99 , 375 , 376 ,
377 , 378 } ; static int_T modelMassMatrixJc [ 380 ] = { 0 , 1 , 2 , 3 , 4 ,
5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21
, 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 ,
37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 52 , 54
, 56 , 58 , 60 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 72 , 74 , 76 ,
78 , 80 , 82 , 84 , 86 , 88 , 90 , 92 , 94 , 96 , 98 , 100 , 102 , 103 , 105
, 108 , 110 , 112 , 114 , 116 , 118 , 120 , 122 , 124 , 126 , 128 , 130 , 132
, 134 , 136 , 138 , 140 , 143 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144 , 144
, 144 , 144 , 144 , 144 , 144 , 144 , 144 , 145 , 146 , 147 , 148 } ; static
real_T modelMassMatrixPr [ 148 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; ( void
) memcpy ( gkywbalvxlx . ir , modelMassMatrixIr , 148 * sizeof ( int_T ) ) ;
( void ) memcpy ( gkywbalvxlx . jc , modelMassMatrixJc , 380 * sizeof ( int_T
) ) ; ( void ) memcpy ( gkywbalvxlx . pr , modelMassMatrixPr , 148 * sizeof (
real_T ) ) ; } } void MdlEnable ( void ) { lcrhwa0gkm ( & ( giqt2tul5wr .
igqkoslatl . rtm ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , & ( ( (
esngraya3x * ) ssGetContStateDisabled ( rtS ) ) -> d5katehawv ) ) ;
giqt2tul5wr . kr24afjbvy = ssGetTaskTime ( rtS , 1 ) ; giqt2tul5wr .
hvilkifux1 = giqt2tul5wr . kr24afjbvy ; } void MdlStart ( void ) {
NeModelParameters modelParameters ; NeModelParameters modelParameters_e ;
NeModelParameters modelParameters_p ; NeslRtpManager * manager ;
NeslRtpManager * manager_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp_p ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_i ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_i ; char * msg_p ; h4kbxz4s23 *
_rtXPerturbMax ; kewnzdoseq * _rtXPerturbMin ; real_T tmp_m [ 16 ] ; real_T
time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 5 ] ; boolean_T tmp ;
boolean_T val ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( h4kbxz4s23 * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( kewnzdoseq * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; simTgtPushModelBlockPath (
rtS ,
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) ; nzo0dhvfq4 ( ) ; simTgtPopModelBlockPath ( rtS ,
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) ; mr_BMS_Software_CreateInitRestoreData ( ) ; { RTWLogSignalInfo
rt_ScopeSignalInfo ; static int_T rt_ScopeSignalWidths [ ] = { 1 , 1 , 1 , 2
, 1 , 1 , 1 , 2 , 2 , 2 , 96 , 2 } ; static int_T rt_ScopeSignalNumDimensions
[ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_ScopeSignalDimensions [ ] = { 1 , 1 , 1 , 2 , 1 , 1 , 1 , 2 , 2 , 2 , 96 ,
2 } ; static void * rt_ScopeCurrSigDims [ ] = { ( NULL ) , ( NULL ) , ( NULL
) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL
) , ( NULL ) , ( NULL ) } ; static int_T rt_ScopeCurrSigDimsSize [ ] = { 4 ,
4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 } ; static const char_T *
rt_ScopeSignalLabels [ ] = { "Vehicle Speed (m/s)" , "Motor Speed (rad/s)" ,
"Motor Torque (Nm)" , "Axle Torques (Nm)" , "Battery SOC (%)" ,
"Battery Current (A)" , "Battery Power (W)" , "Axle Forces (N)" ,
"Axle Speeds (rad/s)" , "Pedals (-)" , "Battery Temperature (°C)" ,
"Thermal Powers (W)" } ; static char_T rt_ScopeSignalTitles [ ] =
 "Vehicle Speed (m/s)Motor Speed (rad/s)Motor Torque (Nm)Axle Torques (Nm)Battery SOC (%)Battery Current (A)Battery Power (W)Axle Forces (N)Axle Speeds (rad/s)Pedals (-)Battery Temperature (°C)Thermal Powers (W)"
; static int_T rt_ScopeSignalTitleLengths [ ] = { 19 , 19 , 17 , 17 , 15 , 19
, 17 , 15 , 19 , 10 , 25 , 18 } ; static boolean_T rt_ScopeSignalIsVarDims [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static int_T
rt_ScopeSignalPlotStyles [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 } ; BuiltInDTypeId dTypes [ 12 ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_SINGLE , SS_DOUBLE } ; static char_T
rt_ScopeBlockName [ ] =
"EvReferenceApplication/Visualization/Performance and FE Scope" ; static
int_T rt_ScopeFrameData [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
} ; static RTWPreprocessingFcnPtr rt_ScopeSignalLoggingPreprocessingFcnPtrs [
] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ;
rt_ScopeSignalInfo . numSignals = 12 ; rt_ScopeSignalInfo . numCols =
rt_ScopeSignalWidths ; rt_ScopeSignalInfo . numDims =
rt_ScopeSignalNumDimensions ; rt_ScopeSignalInfo . dims =
rt_ScopeSignalDimensions ; rt_ScopeSignalInfo . isVarDims =
rt_ScopeSignalIsVarDims ; rt_ScopeSignalInfo . currSigDims =
rt_ScopeCurrSigDims ; rt_ScopeSignalInfo . currSigDimsSize =
rt_ScopeCurrSigDimsSize ; rt_ScopeSignalInfo . dataTypes = dTypes ;
rt_ScopeSignalInfo . complexSignals = ( NULL ) ; rt_ScopeSignalInfo .
frameData = rt_ScopeFrameData ; rt_ScopeSignalInfo . preprocessingPtrs =
rt_ScopeSignalLoggingPreprocessingFcnPtrs ; rt_ScopeSignalInfo . labels .
cptr = rt_ScopeSignalLabels ; rt_ScopeSignalInfo . titles =
rt_ScopeSignalTitles ; rt_ScopeSignalInfo . titleLengths =
rt_ScopeSignalTitleLengths ; rt_ScopeSignalInfo . plotStyles =
rt_ScopeSignalPlotStyles ; rt_ScopeSignalInfo . blockNames . cptr = ( NULL )
; rt_ScopeSignalInfo . stateNames . cptr = ( NULL ) ; rt_ScopeSignalInfo .
crossMdlRef = ( NULL ) ; rt_ScopeSignalInfo . dataTypeConvert = ( NULL ) ;
giqt2tul5wr . hp0aqxmuww . LoggedData [ 0 ] = rt_CreateStructLogVar (
ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , (
& ssGetErrorStatus ( rtS ) ) , "ScopeData" , 0 , 0 , 1 , 0.1 , &
rt_ScopeSignalInfo , rt_ScopeBlockName ) ; if ( giqt2tul5wr . hp0aqxmuww .
LoggedData [ 0 ] == ( NULL ) ) return ; } ka5dospcnh ( & ( giqt2tul5wr .
igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) ) ; a1gbom0qkq ( &
( giqt2tul5wr . m03tkajmio . rtdw ) ) ; manager_p = nesl_lease_rtp_manager (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 0 ) ; manager = manager_p ; tmp = pointer_is_null ( manager_p ) ; if ( tmp
) { EvReferenceApplication_2ea1fbef_1_gateway ( ) ; manager =
nesl_lease_rtp_manager (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 0 ) ; } giqt2tul5wr . ikimkrkcjx = ( void * ) manager ; giqt2tul5wr .
nhfzola4qr = true ; tmp_p = nesl_lease_simulator (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 0 , 0 ) ; giqt2tul5wr . bwumius5mm = ( void * ) tmp_p ; tmp =
pointer_is_null ( giqt2tul5wr . bwumius5mm ) ; if ( tmp ) {
EvReferenceApplication_2ea1fbef_1_gateway ( ) ; tmp_p = nesl_lease_simulator
(
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 0 , 0 ) ; giqt2tul5wr . bwumius5mm = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_100"
, ( void * * ) ( & giqt2tul5wr . bwumius5mm ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; giqt2tul5wr . dtn4zzzaee = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; giqt2tul5wr
. cdfj0j1cvx = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_YES ; modelParameters . mStartTime =
0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_OFF ; modelParameters .
mRTWModifiedTimeStamp = 6.23667847E+8 ; modelParameters . mZcDisabled = false
; modelParameters . mUseModelRefSolver = false ; modelParameters .
mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters . mSolverTolerance =
tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize = tmp_e ; tmp = true ;
modelParameters . mVariableStepSolver = tmp ; tmp = false ; modelParameters .
mIsUsingODEN = tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
modelParameters . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) giqt2tul5wr . cdfj0j1cvx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) giqt2tul5wr . bwumius5mm , &
modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) giqt2tul5wr . dtn4zzzaee ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 337 ; simulationData -> mData -> mContStates . mX = & i344fcmwfc1 .
mgxxfhkfdi [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & giqt2tul5wr . gkios1beqo ;
simulationData -> mData -> mModeVector . mN = 246 ; simulationData -> mData
-> mModeVector . mX = & giqt2tul5wr . lstbvo4uss [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ;
tmp_m [ 1 ] = cuhiq2he3xv . el3bc3rvwv [ 1 ] ; tmp_m [ 2 ] = cuhiq2he3xv .
el3bc3rvwv [ 2 ] ; tmp_m [ 3 ] = cuhiq2he3xv . el3bc3rvwv [ 3 ] ; tmp_g [ 1 ]
= 4 ; tmp_m [ 4 ] = cuhiq2he3xv . hm1fmdpdgy [ 0 ] ; tmp_m [ 5 ] =
cuhiq2he3xv . hm1fmdpdgy [ 1 ] ; tmp_m [ 6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ]
; tmp_m [ 7 ] = cuhiq2he3xv . hm1fmdpdgy [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8
] = cuhiq2he3xv . omqn5wlmzw [ 0 ] ; tmp_m [ 9 ] = cuhiq2he3xv . omqn5wlmzw [
1 ] ; tmp_m [ 10 ] = cuhiq2he3xv . omqn5wlmzw [ 2 ] ; tmp_m [ 11 ] =
cuhiq2he3xv . omqn5wlmzw [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
cuhiq2he3xv . j4oygusifp [ 0 ] ; tmp_m [ 13 ] = cuhiq2he3xv . j4oygusifp [ 1
] ; tmp_m [ 14 ] = cuhiq2he3xv . j4oygusifp [ 2 ] ; tmp_m [ 15 ] =
cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_g [ 4 ] = 16 ; simulationData -> mData
-> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 337 ; simulationData -> mData
-> mNumjacDxLo . mX = & _rtXPerturbMin -> mgxxfhkfdi [ 0 ] ; simulationData
-> mData -> mNumjacDxHi . mN = 337 ; simulationData -> mData -> mNumjacDxHi .
mX = & _rtXPerturbMax -> mgxxfhkfdi [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) giqt2tul5wr . cdfj0j1cvx ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) giqt2tul5wr . bwumius5mm ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS
, msg_p ) ; } } tmp_p = nesl_lease_simulator (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 1 , 0 ) ; giqt2tul5wr . kykwshfv1u = ( void * ) tmp_p ; tmp =
pointer_is_null ( giqt2tul5wr . kykwshfv1u ) ; if ( tmp ) {
EvReferenceApplication_2ea1fbef_1_gateway ( ) ; tmp_p = nesl_lease_simulator
(
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 1 , 0 ) ; giqt2tul5wr . kykwshfv1u = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_110"
, ( void * * ) ( & giqt2tul5wr . kykwshfv1u ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; giqt2tul5wr . iviog2qp5o = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; giqt2tul5wr
. g1wyg1abb4 = ( void * ) diagnosticManager ; modelParameters_p . mSolverType
= NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_YES ; modelParameters_p . mStartTime
= 0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_p .
mRTWModifiedTimeStamp = 6.23667847E+8 ; modelParameters_p . mZcDisabled =
false ; modelParameters_p . mUseModelRefSolver = false ; modelParameters_p .
mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters_p . mSolverTolerance
= tmp_e ; tmp_e = 0.0 ; modelParameters_p . mFixedStepSize = tmp_e ; tmp =
true ; modelParameters_p . mVariableStepSolver = tmp ; tmp = false ;
modelParameters_p . mIsUsingODEN = tmp ; tmp = slIsRapidAcceleratorSimulating
( ) ; val = ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = (
val && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState
= val ; modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) giqt2tul5wr . g1wyg1abb4 ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) giqt2tul5wr . kykwshfv1u , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } d15dybd5c4 ( rtS , & giqt2tul5wr . g30v1kdrwbo ) ; d15dybd5c4 ( rtS , &
giqt2tul5wr . ciwxigmsq2 ) ; tmp_p = nesl_lease_simulator (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 1 , 1 ) ; giqt2tul5wr . bifyhkr5xr = ( void * ) tmp_p ; tmp =
pointer_is_null ( giqt2tul5wr . bifyhkr5xr ) ; if ( tmp ) {
EvReferenceApplication_2ea1fbef_1_gateway ( ) ; tmp_p = nesl_lease_simulator
(
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
, 1 , 1 ) ; giqt2tul5wr . bifyhkr5xr = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_111"
, ( void * * ) ( & giqt2tul5wr . bifyhkr5xr ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; giqt2tul5wr . asdmqibftz = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; giqt2tul5wr
. hrr5yk13zy = ( void * ) diagnosticManager ; modelParameters_e . mSolverType
= NE_SOLVER_TYPE_DAE ; modelParameters_e . mSolverAbsTol = 0.001 ;
modelParameters_e . mSolverRelTol = 0.001 ; modelParameters_e .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_YES ; modelParameters_e . mStartTime
= 0.0 ; modelParameters_e . mLoadInitialState = false ; modelParameters_e .
mUseSimState = false ; modelParameters_e . mLinTrimCompile = false ;
modelParameters_e . mLoggingMode = SSC_LOGGING_OFF ; modelParameters_e .
mRTWModifiedTimeStamp = 6.23667847E+8 ; modelParameters_e . mZcDisabled =
false ; modelParameters_e . mUseModelRefSolver = false ; modelParameters_e .
mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters_e . mSolverTolerance
= tmp_e ; tmp_e = 0.0 ; modelParameters_e . mFixedStepSize = tmp_e ; tmp =
true ; modelParameters_e . mVariableStepSolver = tmp ; tmp = false ;
modelParameters_e . mIsUsingODEN = tmp ; tmp = slIsRapidAcceleratorSimulating
( ) ; val = ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = (
val && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_e . mLoadInitialState
= val ; modelParameters_e . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) giqt2tul5wr . hrr5yk13zy ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) giqt2tul5wr . bifyhkr5xr , &
modelParameters_e , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_i =
rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS , msg_i ) ;
} } MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) {
real_T akt4wnhg4a ; real_T bu0pon4btr ; real_T pkdo1hmzxy ; real_T ndktxclyhy
; real_T o1kmrtruhq ; real_T o0nvkut2oz ; NeParameterBundle expl_temp ;
NeslSimulationData * simulationData ; NeuDiagnosticManager * diag ;
NeuDiagnosticTree * diagTree ; NeuDiagnosticTree * diagnosticTree ;
NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_i ; char * msg_p ; real_T tmp [ 21 ] ;
real_T tmp_p [ 16 ] ; real_T tmpForInput [ 6 ] ; real_T Ftemp [ 4 ] ; real_T
Ftemp_p [ 4 ] ; real_T fr2hjxs0ne [ 4 ] ; real_T sigmaA [ 4 ] ; real_T
Ftemp_e ; real_T bcl1b5rt4n ; real_T fac1 ; real_T fac2 ; real_T nnpqkhzwvt ;
real_T sigmaA_tmp ; real_T sigmaB_idx_0 ; real_T sigmaB_idx_1 ; real_T
sigmaB_idx_2 ; real_T sigmaB_idx_3 ; real_T time ; real_T time_e ; real_T
time_g ; real_T time_i ; real_T time_m ; real_T time_p ; real_T *
parameterBundle_mRealParameters_mX ; int32_T i ; int32_T i_p ; int_T tmp_i [
6 ] ; int_T tmp_m [ 6 ] ; int_T tmp_e [ 5 ] ; uint32_T ri ; boolean_T
ytolinds ; srClearBC ( giqt2tul5wr . g30v1kdrwbo . iqmyanxtr1 ) ; cuhiq2he3xv
. bht55s5qq3 = 0.0 ; cuhiq2he3xv . bht55s5qq3 += konn1m5pjf .
MotorCouplingDynamics_C * i344fcmwfc1 . deyyyt5ypg ; cuhiq2he3xv . lz5vtehujl
= giqt2tul5wr . k4zhoquz4c ; if ( giqt2tul5wr . oeaskjkfsr != ( rtInf ) ) {
cuhiq2he3xv . lz5vtehujl += ( ssGetT ( rtS ) - giqt2tul5wr . oeaskjkfsr ) *
giqt2tul5wr . fbroivbf3k ; } DrivetrainEv ( & ( giqt2tul5wr . igqkoslatl .
rtm ) , & cuhiq2he3xv . bht55s5qq3 , & cuhiq2he3xv . lz5vtehujl , &
konn1m5pjf . Constant2_Value , & konn1m5pjf . Constant3_Value , & cuhiq2he3xv
. lrkperxqkh , & cuhiq2he3xv . f32ubspqi4 , & cuhiq2he3xv . go1fcnlopp , &
cuhiq2he3xv . dsdqzbwj3v , & cuhiq2he3xv . aa3fdhivvr , & cuhiq2he3xv .
ed5zbrqgc5 , & cuhiq2he3xv . btgdxjpot5 , & cuhiq2he3xv . pjihd5zicd , & (
giqt2tul5wr . igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , &
( i344fcmwfc1 . d5katehawv ) , & ( ( ( esngraya3x * ) ssGetContStateDisabled
( rtS ) ) -> d5katehawv ) , & ( giqt2tul5wr . igqkoslatl . rtzce ) ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( giqt2tul5wr . liwdzlex20 == 0 ) {
giqt2tul5wr . gyxsg3hoeg = cuhiq2he3xv . lrkperxqkh ; } if ( giqt2tul5wr .
fumd4zvnkk == 0 ) { giqt2tul5wr . cl5jwb0b3t = cuhiq2he3xv . f32ubspqi4 ; } }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr . liwdzlex20 = 1 ;
cuhiq2he3xv . a5qnq1dc0o = giqt2tul5wr . gyxsg3hoeg ; giqt2tul5wr .
liwdzlex20 = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr .
ibuccqrkws == 0 ) ) { giqt2tul5wr . m1lyfkk4wz = cuhiq2he3xv . bht55s5qq3 ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr . fumd4zvnkk = 1 ;
cuhiq2he3xv . brrexts5jl = giqt2tul5wr . cl5jwb0b3t ; giqt2tul5wr .
fumd4zvnkk = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr .
kvdz2ebfhv == 0 ) ) { giqt2tul5wr . arwg2hasvu = cuhiq2he3xv . go1fcnlopp ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr . ibuccqrkws = 1 ;
cuhiq2he3xv . olcjbaurbk = giqt2tul5wr . m1lyfkk4wz ; giqt2tul5wr .
ibuccqrkws = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr .
bhnsby0fli == 0 ) ) { giqt2tul5wr . gzyrjrunwy = cuhiq2he3xv . dsdqzbwj3v ; }
if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr . kvdz2ebfhv = 1 ;
cuhiq2he3xv . g1j2t5ryrl = giqt2tul5wr . arwg2hasvu ; giqt2tul5wr .
kvdz2ebfhv = 0 ; giqt2tul5wr . bhnsby0fli = 1 ; cuhiq2he3xv . i303hxmk4s =
giqt2tul5wr . gzyrjrunwy ; giqt2tul5wr . bhnsby0fli = 0 ; } if (
ssIsSampleHit ( rtS , 3 , 0 ) || ssIsSampleHit ( rtS , 5 , 0 ) ) {
BMS_Software ( & konn1m5pjf . EnumeratedConstant_Value , & cuhiq2he3xv .
fd5vhxn522 , & cuhiq2he3xv . hlr5waurua , & cuhiq2he3xv . lt2astw3oy , &
cuhiq2he3xv . dbbveecmrs , & cuhiq2he3xv . kwuy3vap0b , & cuhiq2he3xv .
ddw4r03rdd , & cuhiq2he3xv . pvq5cdapvp , & cuhiq2he3xv . b0dgot5a0g , &
cuhiq2he3xv . przvd0w4hd , & cuhiq2he3xv . obtzbv3oqr , & cuhiq2he3xv .
jan2ijhoyt ) ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { cuhiq2he3xv .
f3xfryzo45 = konn1m5pjf . convert2percent_Gain * cuhiq2he3xv . obtzbv3oqr ; }
cuhiq2he3xv . l2r3hwo42w = giqt2tul5wr . keqs0k3sdq ; if ( giqt2tul5wr .
cjijsufndg != ( rtInf ) ) { cuhiq2he3xv . l2r3hwo42w += ( ssGetT ( rtS ) -
giqt2tul5wr . cjijsufndg ) * giqt2tul5wr . alxnn4vrl1 ; } cuhiq2he3xv .
aam4cx4xp2 = 0.0 ; cuhiq2he3xv . aam4cx4xp2 += konn1m5pjf .
BatteryDischargeDynamics_C * i344fcmwfc1 . g14mueghy3 ; cuhiq2he3xv .
lrzxrumeie = cuhiq2he3xv . lrkperxqkh + konn1m5pjf . Airvelocityms_Bias ;
cuhiq2he3xv . biin5otx1a = cuhiq2he3xv . lrzxrumeie * rtP_radiator . area_air
* konn1m5pjf . Airdensitykgm3_Value ; if ( giqt2tul5wr . oyf31f32r1 == 0.0 )
{ giqt2tul5wr . oyf31f32r1 = 1.0 ; i344fcmwfc1 . k55ybo3o50 = cuhiq2he3xv .
biin5otx1a ; } cuhiq2he3xv . el3bc3rvwv [ 0 ] = i344fcmwfc1 . k55ybo3o50 ;
cuhiq2he3xv . el3bc3rvwv [ 1 ] = ( cuhiq2he3xv . biin5otx1a - i344fcmwfc1 .
k55ybo3o50 ) * 100.0 ; cuhiq2he3xv . el3bc3rvwv [ 2 ] = 0.0 ; cuhiq2he3xv .
el3bc3rvwv [ 3 ] = 0.0 ; cuhiq2he3xv . hm1fmdpdgy [ 0 ] = cuhiq2he3xv .
aam4cx4xp2 ; cuhiq2he3xv . hm1fmdpdgy [ 1 ] = 0.0 ; cuhiq2he3xv . hm1fmdpdgy
[ 2 ] = 0.0 ; cuhiq2he3xv . hm1fmdpdgy [ 3 ] = 0.0 ; cuhiq2he3xv . j3ew0k2ceg
= 0.0 ; cuhiq2he3xv . j3ew0k2ceg += konn1m5pjf . Pumpresponsedelay_C *
i344fcmwfc1 . fljoxgkrbw ; cuhiq2he3xv . omqn5wlmzw [ 0 ] = cuhiq2he3xv .
j3ew0k2ceg ; cuhiq2he3xv . omqn5wlmzw [ 1 ] = 0.0 ; cuhiq2he3xv . omqn5wlmzw
[ 2 ] = 0.0 ; cuhiq2he3xv . omqn5wlmzw [ 3 ] = 0.0 ; cuhiq2he3xv . g5t5qx3zcf
= 0.0 ; for ( ri = konn1m5pjf . StateSpace_C_jc [ 0U ] ; ri < konn1m5pjf .
StateSpace_C_jc [ 1U ] ; ri ++ ) { cuhiq2he3xv . g5t5qx3zcf += konn1m5pjf .
StateSpace_C_pr * i344fcmwfc1 . lwcj1rfkgv ; } cuhiq2he3xv . d4gyom2cqd =
rtP_T_set - cuhiq2he3xv . g5t5qx3zcf ; cuhiq2he3xv . icvg51iljz = konn1m5pjf
. PIDController_P * cuhiq2he3xv . d4gyom2cqd ; cuhiq2he3xv . kodvah5jo3 =
i344fcmwfc1 . f5i3cl2axt ; cuhiq2he3xv . lx1jkj3hhs = konn1m5pjf .
PIDController_D * cuhiq2he3xv . d4gyom2cqd ; cuhiq2he3xv . juyzoqqgba =
i344fcmwfc1 . ommjwylk33 ; cuhiq2he3xv . incncr24ln = cuhiq2he3xv .
lx1jkj3hhs - cuhiq2he3xv . juyzoqqgba ; cuhiq2he3xv . gavoqkfufz = konn1m5pjf
. PIDController_N * cuhiq2he3xv . incncr24ln ; cuhiq2he3xv . dnav505y5o = (
cuhiq2he3xv . icvg51iljz + cuhiq2he3xv . kodvah5jo3 ) + cuhiq2he3xv .
gavoqkfufz ; if ( ssIsModeUpdateTimeStep ( rtS ) ) { giqt2tul5wr . g1z0l2rflt
= cuhiq2he3xv . dnav505y5o >= konn1m5pjf . PIDController_UpperSaturationLimit
? 1 : cuhiq2he3xv . dnav505y5o > konn1m5pjf .
PIDController_LowerSaturationLimit ? 0 : - 1 ; } cuhiq2he3xv . loitizpkx4 =
giqt2tul5wr . g1z0l2rflt == 1 ? konn1m5pjf .
PIDController_UpperSaturationLimit : giqt2tul5wr . g1z0l2rflt == - 1 ?
konn1m5pjf . PIDController_LowerSaturationLimit : cuhiq2he3xv . dnav505y5o ;
cuhiq2he3xv . pf3kdhnsui = ( real_T ) cuhiq2he3xv . eeny0h4lwy * 0.03125 +
cuhiq2he3xv . loitizpkx4 ; if ( giqt2tul5wr . jwpc1uzeor == 0.0 ) {
giqt2tul5wr . jwpc1uzeor = 1.0 ; i344fcmwfc1 . a0egidfcb5 = cuhiq2he3xv .
pf3kdhnsui ; } cuhiq2he3xv . j4oygusifp [ 0 ] = i344fcmwfc1 . a0egidfcb5 ;
cuhiq2he3xv . j4oygusifp [ 1 ] = ( cuhiq2he3xv . pf3kdhnsui - i344fcmwfc1 .
a0egidfcb5 ) * 1000.0 ; cuhiq2he3xv . j4oygusifp [ 2 ] = 0.0 ; cuhiq2he3xv .
j4oygusifp [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
giqt2tul5wr . nhfzola4qr ) { tmp [ 0 ] = konn1m5pjf . RTP_87B9D3CA_T_Value ;
tmp [ 1 ] = konn1m5pjf . RTP_6F7C700D_T_Value ; tmp [ 2 ] = konn1m5pjf .
RTP_28B86618_T_Value ; tmp [ 3 ] = konn1m5pjf . RTP_8D439205_T_Value ; tmp [
4 ] = rtP_T_init ; tmp [ 5 ] = rtP_T_init ; tmp [ 6 ] = rtP_T_init ; tmp [ 7
] = rtP_T_init ; tmp [ 8 ] = rtP_T_init ; tmp [ 9 ] = rtP_T_init ; tmp [ 10 ]
= rtP_T_init ; tmp [ 11 ] = rtP_T_init ; tmp [ 12 ] = rtP_T_init ; tmp [ 13 ]
= rtP_T_init ; tmp [ 14 ] = rtP_T_init ; tmp [ 15 ] = rtP_T_init ; tmp [ 16 ]
= rtP_T_init ; tmp [ 17 ] = rtP_T_init ; tmp [ 18 ] = konn1m5pjf .
RTP_7CC9AFD0_volume_liquid_Value ; tmp [ 19 ] = konn1m5pjf .
RTP_7CC9AFD0_p_gas_Value ; tmp [ 20 ] = konn1m5pjf . RTP_7CC9AFD0_level_Value
; parameterBundle_mRealParameters_mX = & tmp [ 0 ] ; diag =
rtw_create_diagnostics ( ) ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 21 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
ytolinds = nesl_rtp_manager_set_rtps ( ( NeslRtpManager * ) giqt2tul5wr .
ikimkrkcjx , ssGetT ( rtS ) , expl_temp , diag ) ; if ( ! ytolinds ) {
ytolinds = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( ytolinds
) { msg = rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus ( rtS , msg ) ;
} } } giqt2tul5wr . nhfzola4qr = false ; } simulationData = (
NeslSimulationData * ) giqt2tul5wr . dtn4zzzaee ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & i344fcmwfc1 . mgxxfhkfdi [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & giqt2tul5wr . gkios1beqo ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = &
giqt2tul5wr . lstbvo4uss [ 0 ] ; ytolinds = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = ytolinds ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; ytolinds = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags
. solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck
= ytolinds ; ytolinds = ssIsSolverCheckingCIC ( rtS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = ytolinds ; ytolinds =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = ytolinds ; simulationData -> mData -> mIsEvaluatingF0
= ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; ytolinds =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = ytolinds ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ; tmp_p [ 1 ] = cuhiq2he3xv .
el3bc3rvwv [ 1 ] ; tmp_p [ 2 ] = cuhiq2he3xv . el3bc3rvwv [ 2 ] ; tmp_p [ 3 ]
= cuhiq2he3xv . el3bc3rvwv [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] =
cuhiq2he3xv . hm1fmdpdgy [ 0 ] ; tmp_p [ 5 ] = cuhiq2he3xv . hm1fmdpdgy [ 1 ]
; tmp_p [ 6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ] ; tmp_p [ 7 ] = cuhiq2he3xv .
hm1fmdpdgy [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = cuhiq2he3xv . omqn5wlmzw [
0 ] ; tmp_p [ 9 ] = cuhiq2he3xv . omqn5wlmzw [ 1 ] ; tmp_p [ 10 ] =
cuhiq2he3xv . omqn5wlmzw [ 2 ] ; tmp_p [ 11 ] = cuhiq2he3xv . omqn5wlmzw [ 3
] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = cuhiq2he3xv . j4oygusifp [ 0 ] ; tmp_p
[ 13 ] = cuhiq2he3xv . j4oygusifp [ 1 ] ; tmp_p [ 14 ] = cuhiq2he3xv .
j4oygusifp [ 2 ] ; tmp_p [ 15 ] = cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mOutputs . mN = 583 ; simulationData
-> mData -> mOutputs . mX = & cuhiq2he3xv . pvxotluv5b [ 0 ] ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ; time_p =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) giqt2tul5wr . cdfj0j1cvx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; i_p = ne_simulator_method
( ( NeslSimulator * ) giqt2tul5wr . bwumius5mm , NESL_SIM_OUTPUTS ,
simulationData , diag ) ; if ( i_p != 0 ) { ytolinds = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( ytolinds ) { msg_p = rtw_diagnostics_msg
( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg_p ) ; } } if (
ssIsMajorTimeStep ( rtS ) && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) giqt2tul5wr . iviog2qp5o ; time_e = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
giqt2tul5wr . jidxlsm5se ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & giqt2tul5wr . cuk0updp4b ;
ytolinds = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = ytolinds ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
ytolinds = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U )
; simulationData -> mData -> mIsSolverAssertCheck = ytolinds ; ytolinds =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = ytolinds ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; ytolinds = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = ytolinds ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_i [ 0 ] = 0 ;
cuhiq2he3xv . dv [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ; cuhiq2he3xv . dv [
1 ] = cuhiq2he3xv . el3bc3rvwv [ 1 ] ; cuhiq2he3xv . dv [ 2 ] = cuhiq2he3xv .
el3bc3rvwv [ 2 ] ; cuhiq2he3xv . dv [ 3 ] = cuhiq2he3xv . el3bc3rvwv [ 3 ] ;
tmp_i [ 1 ] = 4 ; cuhiq2he3xv . dv [ 4 ] = cuhiq2he3xv . hm1fmdpdgy [ 0 ] ;
cuhiq2he3xv . dv [ 5 ] = cuhiq2he3xv . hm1fmdpdgy [ 1 ] ; cuhiq2he3xv . dv [
6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ] ; cuhiq2he3xv . dv [ 7 ] = cuhiq2he3xv .
hm1fmdpdgy [ 3 ] ; tmp_i [ 2 ] = 8 ; cuhiq2he3xv . dv [ 8 ] = cuhiq2he3xv .
omqn5wlmzw [ 0 ] ; cuhiq2he3xv . dv [ 9 ] = cuhiq2he3xv . omqn5wlmzw [ 1 ] ;
cuhiq2he3xv . dv [ 10 ] = cuhiq2he3xv . omqn5wlmzw [ 2 ] ; cuhiq2he3xv . dv [
11 ] = cuhiq2he3xv . omqn5wlmzw [ 3 ] ; tmp_i [ 3 ] = 12 ; cuhiq2he3xv . dv [
12 ] = cuhiq2he3xv . j4oygusifp [ 0 ] ; cuhiq2he3xv . dv [ 13 ] = cuhiq2he3xv
. j4oygusifp [ 1 ] ; cuhiq2he3xv . dv [ 14 ] = cuhiq2he3xv . j4oygusifp [ 2 ]
; cuhiq2he3xv . dv [ 15 ] = cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_i [ 4 ] = 16
; memcpy ( & cuhiq2he3xv . dv [ 16 ] , & cuhiq2he3xv . pvxotluv5b [ 0 ] ,
583U * sizeof ( real_T ) ) ; tmp_i [ 5 ] = 599 ; simulationData -> mData ->
mInputValues . mN = 599 ; simulationData -> mData -> mInputValues . mX = &
cuhiq2he3xv . dv [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_i [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 7 ; simulationData -> mData ->
mOutputs . mX = & cuhiq2he3xv . enqmayw5zb [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_i = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_i ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diag = ( NeuDiagnosticManager * )
giqt2tul5wr . g1wyg1abb4 ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diag ) ; i_p = ne_simulator_method
( ( NeslSimulator * ) giqt2tul5wr . kykwshfv1u , NESL_SIM_OUTPUTS ,
simulationData , diag ) ; if ( i_p != 0 ) { ytolinds = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( ytolinds ) { msg_e = rtw_diagnostics_msg
( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_e ) ; } } if (
ssIsMajorTimeStep ( rtS ) && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } tmpForInput [ 0 ] =
cuhiq2he3xv . enqmayw5zb [ 0 ] ; tmpForInput [ 1 ] = cuhiq2he3xv . enqmayw5zb
[ 1 ] ; tmpForInput [ 2 ] = cuhiq2he3xv . enqmayw5zb [ 3 ] ; tmpForInput [ 3
] = cuhiq2he3xv . enqmayw5zb [ 2 ] ; tmpForInput [ 4 ] = 0.0 ; tmpForInput [
5 ] = 0.0 ; bcl1b5rt4n = - 0.0 ; for ( i = 0 ; i < 6 ; i ++ ) { bcl1b5rt4n +=
tmpForInput [ i ] ; } cuhiq2he3xv . bglj00uwmx = bcl1b5rt4n ; cuhiq2he3xv .
mq2rmflx5a = cuhiq2he3xv . bglj00uwmx / konn1m5pjf .
Constant_Value_h2wdon5quy ; BattEv ( & ( giqt2tul5wr . isvmsyyglk . rtm ) , &
cuhiq2he3xv . aam4cx4xp2 , & cuhiq2he3xv . mq2rmflx5a , & cuhiq2he3xv .
bcp2j24ktn , & ( giqt2tul5wr . isvmsyyglk . rtb ) , & ( giqt2tul5wr .
isvmsyyglk . rtdw ) , & ( i344fcmwfc1 . nq1lsnuhqu ) ) ; MotGenEvMapped ( & (
giqt2tul5wr . m03tkajmio . rtm ) , & cuhiq2he3xv . l2r3hwo42w , & cuhiq2he3xv
. f32ubspqi4 , & cuhiq2he3xv . bcp2j24ktn , & cuhiq2he3xv . ghjwcqfy1n , &
cuhiq2he3xv . mvfxkga0xl , & ( giqt2tul5wr . m03tkajmio . rtb ) , & (
giqt2tul5wr . m03tkajmio . rtdw ) , & ( i344fcmwfc1 . huiflaoyhi ) ) ; if ( (
cuhiq2he3xv . bcp2j24ktn >= - konn1m5pjf . div0protectpoly_thresh ) && (
cuhiq2he3xv . bcp2j24ktn <= konn1m5pjf . div0protectpoly_thresh ) ) { if (
cuhiq2he3xv . bcp2j24ktn >= konn1m5pjf . Switch1_Threshold ) { cuhiq2he3xv .
pfur2fmy1z = konn1m5pjf . Constant_Value_nys5l042yz ; } else { cuhiq2he3xv .
pfur2fmy1z = cuhiq2he3xv . ifsszmtacm ; } cuhiq2he3xv . mqqrzg0clr = 0.02 / (
3.0 - muDoubleScalarPower ( cuhiq2he3xv . bcp2j24ktn / 0.01 , 2.0 ) ) *
cuhiq2he3xv . pfur2fmy1z ; cuhiq2he3xv . nwplhjp5pc = cuhiq2he3xv .
mqqrzg0clr ; } else { cuhiq2he3xv . nwplhjp5pc = cuhiq2he3xv . bcp2j24ktn ; }
cuhiq2he3xv . hxtcmjvpb2 = konn1m5pjf . AccessoryLoadW_Value / cuhiq2he3xv .
nwplhjp5pc ; cuhiq2he3xv . jmv50argl1 = cuhiq2he3xv . mvfxkga0xl +
cuhiq2he3xv . hxtcmjvpb2 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
giqt2tul5wr . mwgqdelv1f == 0 ) ) { giqt2tul5wr . jsjjbflcse = cuhiq2he3xv .
jmv50argl1 ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr .
mwgqdelv1f = 1 ; cuhiq2he3xv . lwwxzl5qzf = giqt2tul5wr . jsjjbflcse ;
giqt2tul5wr . mwgqdelv1f = 0 ; } cuhiq2he3xv . mfbcndbdnw = cuhiq2he3xv .
bcp2j24ktn * cuhiq2he3xv . jmv50argl1 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ if ( giqt2tul5wr . kltct411us == 0 ) { giqt2tul5wr . dzxddx5cen =
cuhiq2he3xv . mfbcndbdnw ; } if ( giqt2tul5wr . hszqsxfvz0 == 0 ) {
giqt2tul5wr . apn1h34r15 = cuhiq2he3xv . aa3fdhivvr ; } } if ( ssIsSampleHit
( rtS , 3 , 0 ) ) { giqt2tul5wr . kltct411us = 1 ; cuhiq2he3xv . eg4mfruiee =
giqt2tul5wr . dzxddx5cen ; giqt2tul5wr . kltct411us = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . pzhspsqiej == 0 ) ) {
giqt2tul5wr . ilvsdo0oga = cuhiq2he3xv . ed5zbrqgc5 ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . hszqsxfvz0 = 1 ; cuhiq2he3xv . dcpucpuzjn =
giqt2tul5wr . apn1h34r15 ; giqt2tul5wr . hszqsxfvz0 = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . aevxwrdkrx == 0 ) ) {
giqt2tul5wr . iap4dpl4zs = cuhiq2he3xv . btgdxjpot5 ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . pzhspsqiej = 1 ; cuhiq2he3xv . eqgmmqi3cf =
giqt2tul5wr . ilvsdo0oga ; giqt2tul5wr . pzhspsqiej = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) && ( giqt2tul5wr . b5jqdqfiw3 == 0 ) ) {
giqt2tul5wr . fr1sahkypq = cuhiq2he3xv . pjihd5zicd ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { giqt2tul5wr . aevxwrdkrx = 1 ; cuhiq2he3xv . l3rmegtqm5 =
giqt2tul5wr . iap4dpl4zs ; giqt2tul5wr . aevxwrdkrx = 0 ; giqt2tul5wr .
b5jqdqfiw3 = 1 ; cuhiq2he3xv . n1ivhteclj = giqt2tul5wr . fr1sahkypq ;
giqt2tul5wr . b5jqdqfiw3 = 0 ; } cuhiq2he3xv . kmsp0cd1e1 = i344fcmwfc1 .
piwaeu0cyd ; cuhiq2he3xv . fvfcqphwub = cuhiq2he3xv . kmsp0cd1e1 -
cuhiq2he3xv . imnt2v1zkq ; if ( cuhiq2he3xv . fjngm2jfcz ) { bcl1b5rt4n = 0.0
; } else if ( cuhiq2he3xv . fvfcqphwub > konn1m5pjf . u1_UpperSat ) {
bcl1b5rt4n = konn1m5pjf . u1_UpperSat ; } else if ( cuhiq2he3xv . fvfcqphwub
< konn1m5pjf . u1_LowerSat ) { bcl1b5rt4n = konn1m5pjf . u1_LowerSat ; } else
{ bcl1b5rt4n = cuhiq2he3xv . fvfcqphwub ; } if ( bcl1b5rt4n > konn1m5pjf .
Saturation_UpperSat ) { akt4wnhg4a = konn1m5pjf . Saturation_UpperSat ; }
else if ( bcl1b5rt4n < konn1m5pjf . Saturation_LowerSat ) { akt4wnhg4a =
konn1m5pjf . Saturation_LowerSat ; } else { akt4wnhg4a = bcl1b5rt4n ; }
g30v1kdrwb ( rtS , cuhiq2he3xv . ide52jc1xl , akt4wnhg4a , & cuhiq2he3xv .
g30v1kdrwbo , & giqt2tul5wr . g30v1kdrwbo ) ; if ( cuhiq2he3xv . by2opoctqb )
{ bcl1b5rt4n = 0.0 ; } else if ( cuhiq2he3xv . fvfcqphwub > konn1m5pjf .
u0_UpperSat ) { bcl1b5rt4n = - konn1m5pjf . u0_UpperSat ; } else if (
cuhiq2he3xv . fvfcqphwub < konn1m5pjf . u0_LowerSat ) { bcl1b5rt4n = -
konn1m5pjf . u0_LowerSat ; } else { bcl1b5rt4n = - cuhiq2he3xv . fvfcqphwub ;
} if ( bcl1b5rt4n > konn1m5pjf . Saturation_UpperSat_n5cfzewtp3 ) {
bu0pon4btr = konn1m5pjf . Saturation_UpperSat_n5cfzewtp3 ; } else if (
bcl1b5rt4n < konn1m5pjf . Saturation_LowerSat_jdvecoiqp4 ) { bu0pon4btr =
konn1m5pjf . Saturation_LowerSat_jdvecoiqp4 ; } else { bu0pon4btr =
bcl1b5rt4n ; } g30v1kdrwb ( rtS , cuhiq2he3xv . h4vbxbl4u1 , bu0pon4btr , &
cuhiq2he3xv . ciwxigmsq2 , & giqt2tul5wr . ciwxigmsq2 ) ; bcl1b5rt4n = ssGetT
( rtS ) ; if ( konn1m5pjf . repeat_Value > konn1m5pjf . Switch_Threshold ) {
cuhiq2he3xv . a54tevlqes = muDoubleScalarMod ( bcl1b5rt4n , konn1m5pjf .
tFinal_Value ) ; } else { cuhiq2he3xv . a54tevlqes = bcl1b5rt4n ; }
cuhiq2he3xv . cwygjkza2r = look1_pbinlcapw ( cuhiq2he3xv . a54tevlqes ,
konn1m5pjf . uDLookupTable_bp01Data , konn1m5pjf . uDLookupTable_tableData ,
& giqt2tul5wr . azfkgqxasv , 1800U ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
giqt2tul5wr . kr24afjbvy = ssGetTaskTime ( rtS , 1 ) ; giqt2tul5wr .
mgyqdv05fz = giqt2tul5wr . kr24afjbvy - giqt2tul5wr . hvilkifux1 ;
giqt2tul5wr . hvilkifux1 = giqt2tul5wr . kr24afjbvy ; giqt2tul5wr .
ipsejbdjkv += giqt2tul5wr . mgyqdv05fz ; giqt2tul5wr . odxrkracyb =
mkgqau5dpa ; if ( giqt2tul5wr . gmldgqtpy3 == 0U ) { giqt2tul5wr . gmldgqtpy3
= 1U ; giqt2tul5wr . o23aklsczm = 1U ; cuhiq2he3xv . o5bbi4nmva = konn1m5pjf
. LongitudinalDriverModel_GearInit ; giqt2tul5wr . mwwvksjbpb = konn1m5pjf .
LongitudinalDriverModel_GearInit ; if ( konn1m5pjf .
LongitudinalDriverModel_GearInit < 0.0 ) { giqt2tul5wr . ipsejbdjkv = 0.0 ;
giqt2tul5wr . imczkcsnw3 = lnwe4uhdes ; cuhiq2he3xv . o5bbi4nmva = - 1.0 ; }
else if ( konn1m5pjf . LongitudinalDriverModel_GearInit == 0.0 ) {
giqt2tul5wr . ipsejbdjkv = 0.0 ; giqt2tul5wr . imczkcsnw3 = h3kbp2fw34 ;
cuhiq2he3xv . o5bbi4nmva = 0.0 ; } else { giqt2tul5wr . ipsejbdjkv = 0.0 ;
giqt2tul5wr . imczkcsnw3 = lgbggzlwgj ; } } else { switch ( giqt2tul5wr .
imczkcsnw3 ) { case h3kbp2fw34 : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
giqt2tul5wr . hvilkifux1 ) + giqt2tul5wr . ipsejbdjkv >= konn1m5pjf .
LongitudinalDriverModel_tShift ) && ( ( cuhiq2he3xv . cwygjkza2r > 0.0 ) && (
cuhiq2he3xv . g30v1kdrwbo . bd2ndavyho > 0.0 ) ) ) { giqt2tul5wr . mwwvksjbpb
++ ; giqt2tul5wr . ipsejbdjkv = 0.0 ; giqt2tul5wr . imczkcsnw3 = lgbggzlwgj ;
cuhiq2he3xv . o5bbi4nmva = giqt2tul5wr . mwwvksjbpb ; } else if ( ( (
ssGetTaskTime ( rtS , 1 ) - giqt2tul5wr . hvilkifux1 ) + giqt2tul5wr .
ipsejbdjkv >= konn1m5pjf . LongitudinalDriverModel_tShift ) && ( cuhiq2he3xv
. cwygjkza2r < 0.0 ) ) { giqt2tul5wr . mwwvksjbpb -- ; giqt2tul5wr .
ipsejbdjkv = 0.0 ; giqt2tul5wr . imczkcsnw3 = lnwe4uhdes ; cuhiq2he3xv .
o5bbi4nmva = - 1.0 ; } break ; case lgbggzlwgj : if ( ( ( ssGetTaskTime ( rtS
, 1 ) - giqt2tul5wr . hvilkifux1 ) + giqt2tul5wr . ipsejbdjkv >= konn1m5pjf .
LongitudinalDriverModel_tShift ) && ( ( ( cuhiq2he3xv . ciwxigmsq2 .
bd2ndavyho >= 0.0 ) && ( cuhiq2he3xv . lrkperxqkh <= 0.0 ) && ( cuhiq2he3xv .
g30v1kdrwbo . bd2ndavyho <= 0.0 ) ) || ( cuhiq2he3xv . cwygjkza2r <= 0.0 ) )
) { giqt2tul5wr . mwwvksjbpb -- ; giqt2tul5wr . ipsejbdjkv = 0.0 ;
giqt2tul5wr . imczkcsnw3 = h3kbp2fw34 ; cuhiq2he3xv . o5bbi4nmva = 0.0 ; }
break ; default : if ( ( ( ssGetTaskTime ( rtS , 1 ) - giqt2tul5wr .
hvilkifux1 ) + giqt2tul5wr . ipsejbdjkv >= konn1m5pjf .
LongitudinalDriverModel_tShift ) && ( cuhiq2he3xv . cwygjkza2r >= 0.0 ) ) {
giqt2tul5wr . mwwvksjbpb ++ ; giqt2tul5wr . ipsejbdjkv = 0.0 ; giqt2tul5wr .
imczkcsnw3 = h3kbp2fw34 ; cuhiq2he3xv . o5bbi4nmva = 0.0 ; } break ; } }
cuhiq2he3xv . l3da1b0tbm = ( cuhiq2he3xv . o5bbi4nmva > konn1m5pjf .
Constant_Value_nhp3htkj21 ) ; } if ( ( cuhiq2he3xv . cwygjkza2r != konn1m5pjf
. Constant_Value ) && cuhiq2he3xv . l3da1b0tbm ) { if ( cuhiq2he3xv .
o5bbi4nmva != 0.0 ) { cuhiq2he3xv . ab4upgrnrw [ 0 ] = cuhiq2he3xv .
g30v1kdrwbo . bd2ndavyho ; } else { cuhiq2he3xv . ab4upgrnrw [ 0 ] =
konn1m5pjf . Constant1_Value ; } cuhiq2he3xv . ab4upgrnrw [ 1 ] = cuhiq2he3xv
. ciwxigmsq2 . bd2ndavyho ; } else if ( cuhiq2he3xv . o5bbi4nmva != 0.0 ) {
cuhiq2he3xv . ab4upgrnrw [ 0 ] = cuhiq2he3xv . ciwxigmsq2 . bd2ndavyho ;
cuhiq2he3xv . ab4upgrnrw [ 1 ] = cuhiq2he3xv . g30v1kdrwbo . bd2ndavyho ; }
else { cuhiq2he3xv . ab4upgrnrw [ 0 ] = konn1m5pjf .
Constant_Value_fb5mg350bv ; cuhiq2he3xv . ab4upgrnrw [ 1 ] =
muDoubleScalarMax ( cuhiq2he3xv . ciwxigmsq2 . bd2ndavyho , cuhiq2he3xv .
g30v1kdrwbo . bd2ndavyho ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
giqt2tul5wr . im4sg3gugq == 0 ) ) { giqt2tul5wr . ie0iddjxra = cuhiq2he3xv .
ab4upgrnrw [ 0 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { giqt2tul5wr .
im4sg3gugq = 1 ; pkdo1hmzxy = giqt2tul5wr . ie0iddjxra ; giqt2tul5wr .
im4sg3gugq = 0 ; if ( giqt2tul5wr . lz2gyqiob1 == 0 ) { giqt2tul5wr .
givtfh51qo = pkdo1hmzxy ; } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
giqt2tul5wr . lz2gyqiob1 = 1 ; cuhiq2he3xv . nrgoj0estv = giqt2tul5wr .
givtfh51qo ; giqt2tul5wr . lz2gyqiob1 = 0 ; } if ( ssIsSampleHit ( rtS , 1 ,
0 ) && ( giqt2tul5wr . fde5kmnnd2 == 0 ) ) { giqt2tul5wr . cj4gapd3fs =
cuhiq2he3xv . ab4upgrnrw [ 1 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
giqt2tul5wr . fde5kmnnd2 = 1 ; ndktxclyhy = giqt2tul5wr . cj4gapd3fs ;
giqt2tul5wr . fde5kmnnd2 = 0 ; if ( giqt2tul5wr . lrwbi350ti == 0 ) {
giqt2tul5wr . eww50ci0u5 = ndktxclyhy ; } } if ( ssIsSampleHit ( rtS , 3 , 0
) ) { giqt2tul5wr . lrwbi350ti = 1 ; cuhiq2he3xv . ij3l3krian = giqt2tul5wr .
eww50ci0u5 ; giqt2tul5wr . lrwbi350ti = 0 ; } cuhiq2he3xv . fgglakce4f .
Pack_Voltage = ( real32_T ) cuhiq2he3xv . bcp2j24ktn ; cuhiq2he3xv .
fgglakce4f . Pack_Current = konn1m5pjf . Gain2_Gain * ( real32_T )
cuhiq2he3xv . jmv50argl1 ; for ( i_p = 0 ; i_p < 96 ; i_p ++ ) { cuhiq2he3xv
. fgglakce4f . Cell_Voltages [ i_p ] = konn1m5pjf . Gain_Gain_dztmjyp2yi [
i_p ] * ( real32_T ) cuhiq2he3xv . bcp2j24ktn ; cuhiq2he3xv . fgglakce4f .
Cell_Temperatures [ i_p ] = konn1m5pjf . Gain1_Gain_kogwmhjid4 [ i_p ] * (
real32_T ) cuhiq2he3xv . mq2rmflx5a ; } cuhiq2he3xv . fgglakce4f . Vout_Chgr
= cuhiq2he3xv . bexoc20jd2 ; cuhiq2he3xv . fgglakce4f . Vout_Invtr = (
real32_T ) cuhiq2he3xv . bcp2j24ktn ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
giqt2tul5wr . dapk13hkuj == 0 ) ) { for ( i_p = 0 ; i_p < 96 ; i_p ++ ) {
giqt2tul5wr . nedhadhu3t [ i_p ] = cuhiq2he3xv . fgglakce4f .
Cell_Temperatures [ i_p ] ; } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
giqt2tul5wr . dapk13hkuj = 1 ; for ( i_p = 0 ; i_p < 96 ; i_p ++ ) {
cuhiq2he3xv . jnh3l0n1k5 [ i_p ] = giqt2tul5wr . nedhadhu3t [ i_p ] ; }
giqt2tul5wr . dapk13hkuj = 0 ; } simulationData = ( NeslSimulationData * )
giqt2tul5wr . asdmqibftz ; time_m = ssGetT ( rtS ) ; simulationData -> mData
-> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_m ;
simulationData -> mData -> mContStates . mN = 0 ; simulationData -> mData ->
mContStates . mX = NULL ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & giqt2tul5wr . gyrmkznnvz ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & giqt2tul5wr . go23v0n4e4 ; ytolinds = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = ytolinds ; simulationData ->
mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; ytolinds = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = ytolinds ; ytolinds =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = ytolinds ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; ytolinds = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = ytolinds ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_m [ 0 ] = 0 ;
cuhiq2he3xv . dv1 [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ; cuhiq2he3xv . dv1
[ 1 ] = cuhiq2he3xv . el3bc3rvwv [ 1 ] ; cuhiq2he3xv . dv1 [ 2 ] =
cuhiq2he3xv . el3bc3rvwv [ 2 ] ; cuhiq2he3xv . dv1 [ 3 ] = cuhiq2he3xv .
el3bc3rvwv [ 3 ] ; tmp_m [ 1 ] = 4 ; cuhiq2he3xv . dv1 [ 4 ] = cuhiq2he3xv .
hm1fmdpdgy [ 0 ] ; cuhiq2he3xv . dv1 [ 5 ] = cuhiq2he3xv . hm1fmdpdgy [ 1 ] ;
cuhiq2he3xv . dv1 [ 6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ] ; cuhiq2he3xv . dv1
[ 7 ] = cuhiq2he3xv . hm1fmdpdgy [ 3 ] ; tmp_m [ 2 ] = 8 ; cuhiq2he3xv . dv1
[ 8 ] = cuhiq2he3xv . omqn5wlmzw [ 0 ] ; cuhiq2he3xv . dv1 [ 9 ] =
cuhiq2he3xv . omqn5wlmzw [ 1 ] ; cuhiq2he3xv . dv1 [ 10 ] = cuhiq2he3xv .
omqn5wlmzw [ 2 ] ; cuhiq2he3xv . dv1 [ 11 ] = cuhiq2he3xv . omqn5wlmzw [ 3 ]
; tmp_m [ 3 ] = 12 ; cuhiq2he3xv . dv1 [ 12 ] = cuhiq2he3xv . j4oygusifp [ 0
] ; cuhiq2he3xv . dv1 [ 13 ] = cuhiq2he3xv . j4oygusifp [ 1 ] ; cuhiq2he3xv .
dv1 [ 14 ] = cuhiq2he3xv . j4oygusifp [ 2 ] ; cuhiq2he3xv . dv1 [ 15 ] =
cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_m [ 4 ] = 16 ; memcpy ( & cuhiq2he3xv .
dv1 [ 16 ] , & cuhiq2he3xv . pvxotluv5b [ 0 ] , 583U * sizeof ( real_T ) ) ;
tmp_m [ 5 ] = 599 ; simulationData -> mData -> mInputValues . mN = 599 ;
simulationData -> mData -> mInputValues . mX = & cuhiq2he3xv . dv1 [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 6 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_m [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 1 ; simulationData -> mData -> mOutputs . mX = & nnpqkhzwvt ;
simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData ->
mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; time_g = ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time_g ; simulationData
-> mData -> mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits .
mX = NULL ; simulationData -> mData -> mIsFundamentalSampleHit = false ; diag
= ( NeuDiagnosticManager * ) giqt2tul5wr . hrr5yk13zy ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diag ) ; i_p = ne_simulator_method
( ( NeslSimulator * ) giqt2tul5wr . bifyhkr5xr , NESL_SIM_OUTPUTS ,
simulationData , diag ) ; if ( i_p != 0 ) { ytolinds = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( ytolinds ) { msg_i = rtw_diagnostics_msg
( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_i ) ; } } if (
ssIsMajorTimeStep ( rtS ) && simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } nnpqkhzwvt *=
cuhiq2he3xv . enqmayw5zb [ 4 ] ; cuhiq2he3xv . mjgpn01dl2 = konn1m5pjf .
kW_Gain * nnpqkhzwvt * konn1m5pjf . Gain_Gain ; if ( ssIsSampleHit ( rtS , 1
, 0 ) && ( giqt2tul5wr . gqvgelmask == 0 ) ) { giqt2tul5wr . gupn4h5qkp =
cuhiq2he3xv . mjgpn01dl2 ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
giqt2tul5wr . gqvgelmask = 1 ; cuhiq2he3xv . lg320qgezp = giqt2tul5wr .
gupn4h5qkp ; giqt2tul5wr . gqvgelmask = 0 ; } nnpqkhzwvt = konn1m5pjf .
Efficiency_Gain * cuhiq2he3xv . enqmayw5zb [ 6 ] ; cuhiq2he3xv . elrvsc3nih =
konn1m5pjf . Gain1_Gain * nnpqkhzwvt ; if ( ssIsSampleHit ( rtS , 1 , 0 ) &&
( giqt2tul5wr . pyshnl4n4o == 0 ) ) { giqt2tul5wr . dxz1p5izxq = cuhiq2he3xv
. elrvsc3nih ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { giqt2tul5wr .
pyshnl4n4o = 1 ; cuhiq2he3xv . pam35l1pg2 = giqt2tul5wr . dxz1p5izxq ;
giqt2tul5wr . pyshnl4n4o = 0 ; if ( ssGetLogOutput ( rtS ) ) { StructLogVar *
svar = ( StructLogVar * ) giqt2tul5wr . hp0aqxmuww . LoggedData [ 0 ] ;
LogVar * var = svar -> signals . values ; { real_T up0 [ 1 ] ; up0 [ 0 ] =
cuhiq2he3xv . a5qnq1dc0o ; rt_UpdateLogVar ( ( LogVar * ) var , up0 , 0 ) ;
var = var -> next ; } { real_T up1 [ 1 ] ; up1 [ 0 ] = cuhiq2he3xv .
brrexts5jl ; rt_UpdateLogVar ( ( LogVar * ) var , up1 , 0 ) ; var = var ->
next ; } { real_T up2 [ 1 ] ; up2 [ 0 ] = cuhiq2he3xv . olcjbaurbk ;
rt_UpdateLogVar ( ( LogVar * ) var , up2 , 0 ) ; var = var -> next ; } {
real_T up3 [ 2 ] ; up3 [ 0 ] = cuhiq2he3xv . g1j2t5ryrl ; up3 [ 1 ] =
cuhiq2he3xv . i303hxmk4s ; rt_UpdateLogVar ( ( LogVar * ) var , up3 , 0 ) ;
var = var -> next ; } { real_T up4 [ 1 ] ; up4 [ 0 ] = cuhiq2he3xv .
f3xfryzo45 ; rt_UpdateLogVar ( ( LogVar * ) var , up4 , 0 ) ; var = var ->
next ; } { real_T up5 [ 1 ] ; up5 [ 0 ] = cuhiq2he3xv . lwwxzl5qzf ;
rt_UpdateLogVar ( ( LogVar * ) var , up5 , 0 ) ; var = var -> next ; } {
real_T up6 [ 1 ] ; up6 [ 0 ] = cuhiq2he3xv . eg4mfruiee ; rt_UpdateLogVar ( (
LogVar * ) var , up6 , 0 ) ; var = var -> next ; } { real_T up7 [ 2 ] ; up7 [
0 ] = cuhiq2he3xv . dcpucpuzjn ; up7 [ 1 ] = cuhiq2he3xv . eqgmmqi3cf ;
rt_UpdateLogVar ( ( LogVar * ) var , up7 , 0 ) ; var = var -> next ; } {
real_T up8 [ 2 ] ; up8 [ 0 ] = cuhiq2he3xv . l3rmegtqm5 ; up8 [ 1 ] =
cuhiq2he3xv . n1ivhteclj ; rt_UpdateLogVar ( ( LogVar * ) var , up8 , 0 ) ;
var = var -> next ; } { real_T up9 [ 2 ] ; up9 [ 0 ] = cuhiq2he3xv .
nrgoj0estv ; up9 [ 1 ] = cuhiq2he3xv . ij3l3krian ; rt_UpdateLogVar ( (
LogVar * ) var , up9 , 0 ) ; var = var -> next ; } { real32_T up10 [ 96 ] ; (
void ) memcpy ( & up10 [ 0 ] , & cuhiq2he3xv . jnh3l0n1k5 [ 0 ] , 96 * sizeof
( real32_T ) ) ; rt_UpdateLogVar ( ( LogVar * ) var , up10 , 0 ) ; var = var
-> next ; } { real_T up11 [ 2 ] ; up11 [ 0 ] = cuhiq2he3xv . lg320qgezp ;
up11 [ 1 ] = cuhiq2he3xv . pam35l1pg2 ; rt_UpdateLogVar ( ( LogVar * ) var ,
up11 , 0 ) ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( giqt2tul5wr .
jkb4mvplww == 0 ) { giqt2tul5wr . okzsrfvbia = cuhiq2he3xv . lrkperxqkh ; }
if ( giqt2tul5wr . ade3ahyo1e == 0 ) { giqt2tul5wr . ahhxtrgluu = cuhiq2he3xv
. f32ubspqi4 ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { giqt2tul5wr .
jkb4mvplww = 1 ; o1kmrtruhq = giqt2tul5wr . okzsrfvbia ; giqt2tul5wr .
jkb4mvplww = 0 ; giqt2tul5wr . ade3ahyo1e = 1 ; o0nvkut2oz = giqt2tul5wr .
ahhxtrgluu ; giqt2tul5wr . ade3ahyo1e = 0 ; EvPowertrainController ( &
pkdo1hmzxy , & ndktxclyhy , & o1kmrtruhq , & cuhiq2he3xv . obtzbv3oqr , &
cuhiq2he3xv . jan2ijhoyt . CurrentLimits_Bus . DischargeCurrentLimit , &
cuhiq2he3xv . jan2ijhoyt . CurrentLimits_Bus . ChargeCurrentLimit , &
o0nvkut2oz , & cuhiq2he3xv . fgglakce4f . Pack_Voltage , & cuhiq2he3xv .
oigt4h5oa0 , & cuhiq2he3xv . eaez13ma04 , & ( giqt2tul5wr . ekun4ztdyk . rtb
) ) ; } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { cuhiq2he3xv . bkfce3mmg3 =
ssGetTaskTime ( rtS , 4 ) ; } cuhiq2he3xv . iumj4ipipu = bcl1b5rt4n -
cuhiq2he3xv . bkfce3mmg3 ; giqt2tul5wr . code54py1j = mkgqau5dpa ; nnpqkhzwvt
= muDoubleScalarAbs ( cuhiq2he3xv . lrkperxqkh ) ; ytolinds = ( nnpqkhzwvt <
0.001 ) ; time = nnpqkhzwvt ; if ( ytolinds ) { for ( i_p = 0 ; i_p < 1 ; i_p
++ ) { sigmaB_idx_0 = nnpqkhzwvt / 0.001 ; time = 0.002 / ( 3.0 -
sigmaB_idx_0 * sigmaB_idx_0 ) ; } } bcl1b5rt4n = time ; if ( cuhiq2he3xv .
lrkperxqkh < 0.0 ) { bcl1b5rt4n = - time ; } if ( time > 5.0 ) { nnpqkhzwvt =
muDoubleScalarMax ( muDoubleScalarMin ( konn1m5pjf .
LongitudinalDriverModel_tau , konn1m5pjf . LongitudinalDriverModel_L / time )
, 0.001 ) ; } else { nnpqkhzwvt = konn1m5pjf . LongitudinalDriverModel_tau ;
} fr2hjxs0ne [ 1 ] = - ( ( konn1m5pjf . LongitudinalDriverModel_aR /
bcl1b5rt4n + konn1m5pjf . LongitudinalDriverModel_cR * cuhiq2he3xv .
lrkperxqkh ) * muDoubleScalarTanh ( cuhiq2he3xv . lrkperxqkh ) + konn1m5pjf .
LongitudinalDriverModel_bR ) / konn1m5pjf . LongitudinalDriverModel_m ;
cuhiq2he3xv . jspshln155 [ 0 ] = 0.0 ; cuhiq2he3xv . jspshln155 [ 1 ] =
konn1m5pjf . LongitudinalDriverModel_Kpt / konn1m5pjf .
LongitudinalDriverModel_m ; sigmaA [ 0 ] = 0.0 ; sigmaB_idx_0 = 0.0 ; Ftemp [
0 ] = 0.0 ; sigmaA [ 1 ] = 0.0 ; sigmaB_idx_1 = 0.0 ; Ftemp [ 1 ] =
fr2hjxs0ne [ 1 ] ; sigmaA [ 2 ] = 0.0 ; sigmaB_idx_2 = 0.0 ; Ftemp [ 2 ] =
1.0 ; sigmaA [ 3 ] = 0.0 ; sigmaB_idx_3 = 0.0 ; Ftemp [ 3 ] = 0.0 ;
bcl1b5rt4n = nnpqkhzwvt ; fac1 = 2.0 ; fac2 = 1.0 ; for ( i_p = 0 ; i_p < 15
; i_p ++ ) { sigmaA_tmp = Ftemp [ 0 ] * bcl1b5rt4n ; sigmaA [ 0 ] +=
sigmaA_tmp / fac1 ; sigmaB_idx_0 += sigmaA_tmp / fac2 ; sigmaA_tmp = Ftemp [
1 ] * bcl1b5rt4n ; sigmaA [ 1 ] += sigmaA_tmp / fac1 ; sigmaB_idx_1 +=
sigmaA_tmp / fac2 ; sigmaA_tmp = Ftemp [ 2 ] * bcl1b5rt4n ; sigmaA [ 2 ] +=
sigmaA_tmp / fac1 ; sigmaB_idx_2 += sigmaA_tmp / fac2 ; sigmaA_tmp = Ftemp [
3 ] * bcl1b5rt4n ; sigmaA [ 3 ] += sigmaA_tmp / fac1 ; sigmaB_idx_3 +=
sigmaA_tmp / fac2 ; for ( i = 0 ; i < 2 ; i ++ ) { sigmaA_tmp = Ftemp [ i + 2
] ; Ftemp_e = Ftemp [ i ] ; Ftemp_p [ i ] = sigmaA_tmp * fr2hjxs0ne [ 1 ] +
Ftemp_e * 0.0 ; Ftemp_p [ i + 2 ] = sigmaA_tmp * 0.0 + Ftemp_e ; } Ftemp [ 0
] = Ftemp_p [ 0 ] ; Ftemp [ 1 ] = Ftemp_p [ 1 ] ; Ftemp [ 2 ] = Ftemp_p [ 2 ]
; Ftemp [ 3 ] = Ftemp_p [ 3 ] ; bcl1b5rt4n *= nnpqkhzwvt ; fac1 *= ( ( real_T
) i_p + 1.0 ) + 1.0 ; fac2 *= ( ( real_T ) i_p + 1.0 ) + 1.0 ; } bcl1b5rt4n =
( sigmaA [ 0 ] + 1.0 ) * nnpqkhzwvt ; bcl1b5rt4n += nnpqkhzwvt * sigmaA [ 1 ]
; fac1 = bcl1b5rt4n * cuhiq2he3xv . jspshln155 [ 0 ] ; bcl1b5rt4n =
nnpqkhzwvt * sigmaA [ 2 ] ; bcl1b5rt4n += ( sigmaA [ 3 ] + 1.0 ) * nnpqkhzwvt
; fac1 += bcl1b5rt4n * cuhiq2he3xv . jspshln155 [ 1 ] ; nnpqkhzwvt = fac1 ;
giqt2tul5wr . fuq0idaz5u = mkgqau5dpa ; Ftemp_p [ 0 ] = 0.0 ; Ftemp_p [ 1 ] =
fr2hjxs0ne [ 1 ] * 0.001 ; Ftemp_p [ 2 ] = 0.001 ; Ftemp_p [ 3 ] = 0.0 ;
bqvsi4qtnx ( Ftemp_p , sigmaA ) ; Ftemp_p [ 0 ] = 0.0 ; Ftemp_p [ 1 ] =
fr2hjxs0ne [ 1 ] * 0.0 ; Ftemp_p [ 2 ] = 0.0 ; Ftemp_p [ 3 ] = 0.0 ;
bqvsi4qtnx ( Ftemp_p , Ftemp ) ; Ftemp_p [ 0 ] = 0.0 ; Ftemp_p [ 1 ] =
fr2hjxs0ne [ 1 ] * 0.001 ; Ftemp_p [ 2 ] = 0.001 ; Ftemp_p [ 3 ] = 0.0 ;
bqvsi4qtnx ( Ftemp_p , fr2hjxs0ne ) ; cuhiq2he3xv . ceif11edac = ( ( ( Ftemp
[ 0 ] * cuhiq2he3xv . jspshln155 [ 0 ] + cuhiq2he3xv . jspshln155 [ 1 ] *
Ftemp [ 2 ] ) + ( fr2hjxs0ne [ 0 ] * cuhiq2he3xv . jspshln155 [ 0 ] +
cuhiq2he3xv . jspshln155 [ 1 ] * fr2hjxs0ne [ 2 ] ) ) / 2.0 * 0.001 *
cuhiq2he3xv . fvfcqphwub + ( sigmaA [ 0 ] * cuhiq2he3xv . lrkperxqkh + sigmaA
[ 2 ] * 0.0 ) ) * ( ( sigmaB_idx_0 + 1.0 ) + sigmaB_idx_1 ) + ( ( (
cuhiq2he3xv . jspshln155 [ 0 ] * Ftemp [ 1 ] + cuhiq2he3xv . jspshln155 [ 1 ]
* Ftemp [ 3 ] ) + ( cuhiq2he3xv . jspshln155 [ 0 ] * fr2hjxs0ne [ 1 ] +
cuhiq2he3xv . jspshln155 [ 1 ] * fr2hjxs0ne [ 3 ] ) ) / 2.0 * 0.001 *
cuhiq2he3xv . fvfcqphwub + ( sigmaA [ 1 ] * cuhiq2he3xv . lrkperxqkh + sigmaA
[ 3 ] * 0.0 ) ) * ( ( sigmaB_idx_3 + 1.0 ) + sigmaB_idx_2 ) ; cuhiq2he3xv .
b0xsyyulsa = cuhiq2he3xv . fvfcqphwub * nnpqkhzwvt ; cuhiq2he3xv . jcja03y2ta
= cuhiq2he3xv . ceif11edac + cuhiq2he3xv . b0xsyyulsa ; cuhiq2he3xv .
eyxsiaqd30 = cuhiq2he3xv . cwygjkza2r - cuhiq2he3xv . jcja03y2ta ;
cuhiq2he3xv . klgwp0bl1e = cuhiq2he3xv . eyxsiaqd30 / nnpqkhzwvt ;
cuhiq2he3xv . hyeok2w0lk = cuhiq2he3xv . klgwp0bl1e + cuhiq2he3xv .
kmsp0cd1e1 ; cuhiq2he3xv . as3zb4xmb3 = cuhiq2he3xv . hyeok2w0lk -
cuhiq2he3xv . kmsp0cd1e1 ; cuhiq2he3xv . nxipfqo4ge = 1.0 / konn1m5pjf .
LongitudinalDriverModel_tau * 3.1415926535897931 * 2.0 * cuhiq2he3xv .
as3zb4xmb3 ; cuhiq2he3xv . bgyxx3obeb = cuhiq2he3xv . cwygjkza2r -
cuhiq2he3xv . lrkperxqkh ; cuhiq2he3xv . mapbxuiz5v = cuhiq2he3xv .
bgyxx3obeb * cuhiq2he3xv . bgyxx3obeb ; if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ cuhiq2he3xv . kyoewhwiba [ 0 ] = giqt2tul5wr . l4pn2msb3d [ 0 ] ;
cuhiq2he3xv . kyoewhwiba [ 1 ] = giqt2tul5wr . l4pn2msb3d [ 1 ] ; } if (
cuhiq2he3xv . bgyxx3obeb > cuhiq2he3xv . kyoewhwiba [ 0 ] ) { cuhiq2he3xv .
kj51ocjbc3 [ 0 ] = cuhiq2he3xv . bgyxx3obeb ; } else { cuhiq2he3xv .
kj51ocjbc3 [ 0 ] = cuhiq2he3xv . kyoewhwiba [ 0 ] ; } if ( cuhiq2he3xv .
bgyxx3obeb < cuhiq2he3xv . kyoewhwiba [ 1 ] ) { cuhiq2he3xv . kj51ocjbc3 [ 1
] = cuhiq2he3xv . bgyxx3obeb ; } else { cuhiq2he3xv . kj51ocjbc3 [ 1 ] =
cuhiq2he3xv . kyoewhwiba [ 1 ] ; } cuhiq2he3xv . k25qje3rlu = cuhiq2he3xv .
enqmayw5zb [ 3 ] - rtP_T_set ; if ( ssIsModeUpdateTimeStep ( rtS ) ) {
giqt2tul5wr . cpgm3bdawj = ( ( cuhiq2he3xv . k25qje3rlu >= konn1m5pjf .
Relay_OnVal ) || ( ( ! ( cuhiq2he3xv . k25qje3rlu <= konn1m5pjf .
Relay_OffVal ) ) && giqt2tul5wr . cpgm3bdawj ) ) ; } if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { if ( giqt2tul5wr . cpgm3bdawj ) { nnpqkhzwvt = konn1m5pjf .
Relay_YOn ; } else { nnpqkhzwvt = konn1m5pjf . Relay_YOff ; } cuhiq2he3xv .
kpz0fum4jx = rtP_pump . omega * nnpqkhzwvt ; } cuhiq2he3xv . avyl4rftay =
cuhiq2he3xv . loitizpkx4 - cuhiq2he3xv . dnav505y5o ; cuhiq2he3xv .
mlkrs1nwnz = konn1m5pjf . PIDController_Kb * cuhiq2he3xv . avyl4rftay ;
cuhiq2he3xv . lw2sqz3qnd = konn1m5pjf . PIDController_I * cuhiq2he3xv .
d4gyom2cqd ; cuhiq2he3xv . m1l1u42xrf = cuhiq2he3xv . mlkrs1nwnz +
cuhiq2he3xv . lw2sqz3qnd ; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID6 (
int_T tid ) { EvPowertrainControllerTID1 ( & ( giqt2tul5wr . ekun4ztdyk . rtb
) ) ; cuhiq2he3xv . fjngm2jfcz = false ; cuhiq2he3xv . ide52jc1xl = true ;
cuhiq2he3xv . by2opoctqb = false ; cuhiq2he3xv . h4vbxbl4u1 = true ;
cuhiq2he3xv . imnt2v1zkq = konn1m5pjf . LongitudinalDriverModel_g *
konn1m5pjf . LongitudinalDriverModel_m * konn1m5pjf .
LongitudinalDriverModel_m / konn1m5pjf . LongitudinalDriverModel_Kpt * 0.0 ;
DrivetrainEvTID2 ( & ( giqt2tul5wr . igqkoslatl . rtb ) ) ; cuhiq2he3xv .
ifsszmtacm = - konn1m5pjf . Constant_Value_nys5l042yz ; cuhiq2he3xv .
bexoc20jd2 = ( real32_T ) konn1m5pjf . Constant_Value_gqtbi3ry5p ; BattEvTID2
( & ( giqt2tul5wr . isvmsyyglk . rtb ) ) ; cuhiq2he3xv . eeny0h4lwy = (
uint8_T ) ( ( ( ( ( uint32_T ) ( rtP_T_env < konn1m5pjf .
Constant1_Value_cbg3kt12vf ? ( int32_T ) konn1m5pjf . Gain1_Gain_mjnwmk25rl :
0 ) << 1 ) + ( uint32_T ) ( rtP_T_env >= konn1m5pjf .
Constant_Value_cxscovwunu ? ( int32_T ) konn1m5pjf . Gain_Gain_gsslgakjt4 : 0
) ) + ( ( uint32_T ) ( ( rtP_T_env >= konn1m5pjf . Constant2_Value_mma10cnxvb
) && ( rtP_T_env < konn1m5pjf . Constant3_Value_ikmr2cncbv ) ? ( int32_T )
konn1m5pjf . Gain2_Gain_nxczdnguyh : 0 ) << 1 ) ) >> 1 ) ; MotGenEvMappedTID2
( & ( giqt2tul5wr . m03tkajmio . rtb ) ) ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp [ 16 ] ; real_T err ; real_T time ; real_T tol ;
int_T tmp_p [ 5 ] ; int_T idx ; boolean_T guard1 ; boolean_T resetCoeff ; if
( ssIsSampleHit ( rtS , 2 , 0 ) ) { guard1 = false ; if ( ! ( giqt2tul5wr .
oeaskjkfsr == ( rtInf ) ) ) { if ( ( cuhiq2he3xv . eaez13ma04 >= - 1.0 ) && (
cuhiq2he3xv . eaez13ma04 <= 1.0 ) ) { tol = konn1m5pjf .
FirstOrderHold_ErrTol ; } else if ( cuhiq2he3xv . eaez13ma04 > 1.0 ) { tol =
cuhiq2he3xv . eaez13ma04 * konn1m5pjf . FirstOrderHold_ErrTol ; } else { tol
= - ( cuhiq2he3xv . eaez13ma04 * konn1m5pjf . FirstOrderHold_ErrTol ) ; } err
= cuhiq2he3xv . lz5vtehujl - cuhiq2he3xv . eaez13ma04 ; if ( ( err > tol ) ||
( err < - tol ) ) { guard1 = true ; } else { giqt2tul5wr . fbroivbf3k = (
cuhiq2he3xv . eaez13ma04 - giqt2tul5wr . mkiptczwen ) / ( ssGetT ( rtS ) -
giqt2tul5wr . oeaskjkfsr ) ; giqt2tul5wr . k4zhoquz4c = cuhiq2he3xv .
lz5vtehujl ; } } else { guard1 = true ; } if ( guard1 ) { if ( cuhiq2he3xv .
eaez13ma04 != cuhiq2he3xv . lz5vtehujl ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } giqt2tul5wr .
k4zhoquz4c = cuhiq2he3xv . eaez13ma04 ; giqt2tul5wr . fbroivbf3k = 0.0 ; }
giqt2tul5wr . mkiptczwen = cuhiq2he3xv . eaez13ma04 ; giqt2tul5wr .
oeaskjkfsr = ssGetT ( rtS ) ; } ekz3w3o33e ( & ( giqt2tul5wr . igqkoslatl .
rtm ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) ) ; if ( ssIsSampleHit ( rtS ,
3 , 0 ) || ssIsSampleHit ( rtS , 5 , 0 ) ) { bzlntq4fju ( & cuhiq2he3xv .
fgglakce4f ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { guard1 = false ; if (
! ( giqt2tul5wr . cjijsufndg == ( rtInf ) ) ) { if ( ( cuhiq2he3xv .
oigt4h5oa0 >= - 1.0 ) && ( cuhiq2he3xv . oigt4h5oa0 <= 1.0 ) ) { tol =
konn1m5pjf . FirstOrderHold_ErrTol_llzlt0txj1 ; } else if ( cuhiq2he3xv .
oigt4h5oa0 > 1.0 ) { tol = cuhiq2he3xv . oigt4h5oa0 * konn1m5pjf .
FirstOrderHold_ErrTol_llzlt0txj1 ; } else { tol = - ( cuhiq2he3xv .
oigt4h5oa0 * konn1m5pjf . FirstOrderHold_ErrTol_llzlt0txj1 ) ; } err =
cuhiq2he3xv . l2r3hwo42w - cuhiq2he3xv . oigt4h5oa0 ; if ( ( err > tol ) || (
err < - tol ) ) { guard1 = true ; } else { giqt2tul5wr . alxnn4vrl1 = (
cuhiq2he3xv . oigt4h5oa0 - giqt2tul5wr . my5si44j4x ) / ( ssGetT ( rtS ) -
giqt2tul5wr . cjijsufndg ) ; giqt2tul5wr . keqs0k3sdq = cuhiq2he3xv .
l2r3hwo42w ; } } else { guard1 = true ; } if ( guard1 ) { if ( cuhiq2he3xv .
oigt4h5oa0 != cuhiq2he3xv . l2r3hwo42w ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } giqt2tul5wr .
keqs0k3sdq = cuhiq2he3xv . oigt4h5oa0 ; giqt2tul5wr . alxnn4vrl1 = 0.0 ; }
giqt2tul5wr . my5si44j4x = cuhiq2he3xv . oigt4h5oa0 ; giqt2tul5wr .
cjijsufndg = ssGetT ( rtS ) ; } simulationData = ( NeslSimulationData * )
giqt2tul5wr . dtn4zzzaee ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 337 ; simulationData -> mData
-> mContStates . mX = & i344fcmwfc1 . mgxxfhkfdi [ 0 ] ; simulationData ->
mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX =
& giqt2tul5wr . gkios1beqo ; simulationData -> mData -> mModeVector . mN =
246 ; simulationData -> mData -> mModeVector . mX = & giqt2tul5wr .
lstbvo4uss [ 0 ] ; resetCoeff = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = resetCoeff ; simulationData -> mData -> mIsMajorTimeStep
= ssIsMajorTimeStep ( rtS ) ; resetCoeff = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = resetCoeff ; resetCoeff = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = resetCoeff ; resetCoeff
= ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = resetCoeff ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; resetCoeff
= ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = resetCoeff ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_p [ 0 ] = 0 ;
tmp [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ; tmp [ 1 ] = cuhiq2he3xv .
el3bc3rvwv [ 1 ] ; tmp [ 2 ] = cuhiq2he3xv . el3bc3rvwv [ 2 ] ; tmp [ 3 ] =
cuhiq2he3xv . el3bc3rvwv [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp [ 4 ] = cuhiq2he3xv .
hm1fmdpdgy [ 0 ] ; tmp [ 5 ] = cuhiq2he3xv . hm1fmdpdgy [ 1 ] ; tmp [ 6 ] =
cuhiq2he3xv . hm1fmdpdgy [ 2 ] ; tmp [ 7 ] = cuhiq2he3xv . hm1fmdpdgy [ 3 ] ;
tmp_p [ 2 ] = 8 ; tmp [ 8 ] = cuhiq2he3xv . omqn5wlmzw [ 0 ] ; tmp [ 9 ] =
cuhiq2he3xv . omqn5wlmzw [ 1 ] ; tmp [ 10 ] = cuhiq2he3xv . omqn5wlmzw [ 2 ]
; tmp [ 11 ] = cuhiq2he3xv . omqn5wlmzw [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ]
= cuhiq2he3xv . j4oygusifp [ 0 ] ; tmp [ 13 ] = cuhiq2he3xv . j4oygusifp [ 1
] ; tmp [ 14 ] = cuhiq2he3xv . j4oygusifp [ 2 ] ; tmp [ 15 ] = cuhiq2he3xv .
j4oygusifp [ 3 ] ; tmp_p [ 4 ] = 16 ; simulationData -> mData -> mInputValues
. mN = 16 ; simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 5 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_p [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) giqt2tul5wr . cdfj0j1cvx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; idx =
ne_simulator_method ( ( NeslSimulator * ) giqt2tul5wr . bwumius5mm ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( idx != 0 ) {
resetCoeff = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
resetCoeff ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } c0hgp3wnut ( & ( giqt2tul5wr .
isvmsyyglk . rtdw ) ) ; l54abfqz2k ( ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ giqt2tul5wr . l4pn2msb3d [ 0 ] = cuhiq2he3xv . kj51ocjbc3 [ 0 ] ;
giqt2tul5wr . l4pn2msb3d [ 1 ] = cuhiq2he3xv . kj51ocjbc3 [ 1 ] ; }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID6 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ;
jtt2nejjv2 * _rtXdot ; real_T tmp_p [ 16 ] ; real_T time ; int_T tmp_e [ 5 ]
; int_T is ; uint32_T ri ; boolean_T tmp ; _rtXdot = ( ( jtt2nejjv2 * )
ssGetdX ( rtS ) ) ; _rtXdot -> deyyyt5ypg = 0.0 ; _rtXdot -> deyyyt5ypg +=
konn1m5pjf . MotorCouplingDynamics_A * i344fcmwfc1 . deyyyt5ypg ; _rtXdot ->
deyyyt5ypg += cuhiq2he3xv . ghjwcqfy1n ; a2spfqi5as ( & ( giqt2tul5wr .
igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , & ( i344fcmwfc1
. d5katehawv ) , & ( ( ( jtt2nejjv2 * ) ssGetdX ( rtS ) ) -> d5katehawv ) ) ;
_rtXdot -> g14mueghy3 = 0.0 ; _rtXdot -> g14mueghy3 += konn1m5pjf .
BatteryDischargeDynamics_A * i344fcmwfc1 . g14mueghy3 ; _rtXdot -> g14mueghy3
+= cuhiq2he3xv . jmv50argl1 ; _rtXdot -> k55ybo3o50 = ( cuhiq2he3xv .
biin5otx1a - i344fcmwfc1 . k55ybo3o50 ) * 100.0 ; _rtXdot -> fljoxgkrbw = 0.0
; _rtXdot -> fljoxgkrbw += konn1m5pjf . Pumpresponsedelay_A * i344fcmwfc1 .
fljoxgkrbw ; _rtXdot -> fljoxgkrbw += cuhiq2he3xv . kpz0fum4jx ; _rtXdot ->
lwcj1rfkgv = 0.0 ; for ( ri = konn1m5pjf . StateSpace_A_jc [ 0U ] ; ri <
konn1m5pjf . StateSpace_A_jc [ 1U ] ; ri ++ ) { _rtXdot -> lwcj1rfkgv +=
konn1m5pjf . StateSpace_A_pr * i344fcmwfc1 . lwcj1rfkgv ; } for ( ri =
konn1m5pjf . StateSpace_B_jc [ 0U ] ; ri < konn1m5pjf . StateSpace_B_jc [ 1U
] ; ri ++ ) { _rtXdot -> lwcj1rfkgv += konn1m5pjf . StateSpace_B_pr *
cuhiq2he3xv . enqmayw5zb [ 5 ] ; } _rtXdot -> f5i3cl2axt = cuhiq2he3xv .
m1l1u42xrf ; _rtXdot -> ommjwylk33 = cuhiq2he3xv . gavoqkfufz ; _rtXdot ->
a0egidfcb5 = ( cuhiq2he3xv . pf3kdhnsui - i344fcmwfc1 . a0egidfcb5 ) * 1000.0
; simulationData = ( NeslSimulationData * ) giqt2tul5wr . dtn4zzzaee ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 337 ; simulationData -> mData -> mContStates . mX = & i344fcmwfc1 .
mgxxfhkfdi [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & giqt2tul5wr . gkios1beqo ;
simulationData -> mData -> mModeVector . mN = 246 ; simulationData -> mData
-> mModeVector . mX = & giqt2tul5wr . lstbvo4uss [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ;
tmp_p [ 1 ] = cuhiq2he3xv . el3bc3rvwv [ 1 ] ; tmp_p [ 2 ] = cuhiq2he3xv .
el3bc3rvwv [ 2 ] ; tmp_p [ 3 ] = cuhiq2he3xv . el3bc3rvwv [ 3 ] ; tmp_e [ 1 ]
= 4 ; tmp_p [ 4 ] = cuhiq2he3xv . hm1fmdpdgy [ 0 ] ; tmp_p [ 5 ] =
cuhiq2he3xv . hm1fmdpdgy [ 1 ] ; tmp_p [ 6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ]
; tmp_p [ 7 ] = cuhiq2he3xv . hm1fmdpdgy [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8
] = cuhiq2he3xv . omqn5wlmzw [ 0 ] ; tmp_p [ 9 ] = cuhiq2he3xv . omqn5wlmzw [
1 ] ; tmp_p [ 10 ] = cuhiq2he3xv . omqn5wlmzw [ 2 ] ; tmp_p [ 11 ] =
cuhiq2he3xv . omqn5wlmzw [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
cuhiq2he3xv . j4oygusifp [ 0 ] ; tmp_p [ 13 ] = cuhiq2he3xv . j4oygusifp [ 1
] ; tmp_p [ 14 ] = cuhiq2he3xv . j4oygusifp [ 2 ] ; tmp_p [ 15 ] =
cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData
-> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 337 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> mgxxfhkfdi [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) giqt2tul5wr . cdfj0j1cvx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) giqt2tul5wr . bwumius5mm ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} pexk2pi1gg ( & ( giqt2tul5wr . isvmsyyglk . rtb ) , & ( i344fcmwfc1 .
nq1lsnuhqu ) , & ( ( ( jtt2nejjv2 * ) ssGetdX ( rtS ) ) -> nq1lsnuhqu ) ) ;
bbghji4q0s ( & ( giqt2tul5wr . m03tkajmio . rtb ) , & ( ( ( jtt2nejjv2 * )
ssGetdX ( rtS ) ) -> huiflaoyhi ) ) ; _rtXdot -> piwaeu0cyd = cuhiq2he3xv .
nxipfqo4ge ; _rtXdot -> niplvsv1th = cuhiq2he3xv . mapbxuiz5v ; } void
MdlProjection ( void ) { } void MdlForcingFunction ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ;
jtt2nejjv2 * _rtXdot ; real_T tmp_p [ 16 ] ; real_T time ; int_T tmp_e [ 5 ]
; int_T is ; uint32_T ri ; boolean_T tmp ; _rtXdot = ( ( jtt2nejjv2 * )
ssGetdX ( rtS ) ) ; _rtXdot -> deyyyt5ypg = 0.0 ; _rtXdot -> deyyyt5ypg +=
konn1m5pjf . MotorCouplingDynamics_A * i344fcmwfc1 . deyyyt5ypg ; _rtXdot ->
deyyyt5ypg += cuhiq2he3xv . ghjwcqfy1n ; a2spfqi5as ( & ( giqt2tul5wr .
igqkoslatl . rtb ) , & ( giqt2tul5wr . igqkoslatl . rtdw ) , & ( i344fcmwfc1
. d5katehawv ) , & ( ( ( jtt2nejjv2 * ) ssGetdX ( rtS ) ) -> d5katehawv ) ) ;
_rtXdot -> g14mueghy3 = 0.0 ; _rtXdot -> g14mueghy3 += konn1m5pjf .
BatteryDischargeDynamics_A * i344fcmwfc1 . g14mueghy3 ; _rtXdot -> g14mueghy3
+= cuhiq2he3xv . jmv50argl1 ; _rtXdot -> k55ybo3o50 = ( cuhiq2he3xv .
biin5otx1a - i344fcmwfc1 . k55ybo3o50 ) * 100.0 ; _rtXdot -> fljoxgkrbw = 0.0
; _rtXdot -> fljoxgkrbw += konn1m5pjf . Pumpresponsedelay_A * i344fcmwfc1 .
fljoxgkrbw ; _rtXdot -> fljoxgkrbw += cuhiq2he3xv . kpz0fum4jx ; _rtXdot ->
lwcj1rfkgv = 0.0 ; for ( ri = konn1m5pjf . StateSpace_A_jc [ 0U ] ; ri <
konn1m5pjf . StateSpace_A_jc [ 1U ] ; ri ++ ) { _rtXdot -> lwcj1rfkgv +=
konn1m5pjf . StateSpace_A_pr * i344fcmwfc1 . lwcj1rfkgv ; } for ( ri =
konn1m5pjf . StateSpace_B_jc [ 0U ] ; ri < konn1m5pjf . StateSpace_B_jc [ 1U
] ; ri ++ ) { _rtXdot -> lwcj1rfkgv += konn1m5pjf . StateSpace_B_pr *
cuhiq2he3xv . enqmayw5zb [ 5 ] ; } _rtXdot -> f5i3cl2axt = cuhiq2he3xv .
m1l1u42xrf ; _rtXdot -> ommjwylk33 = cuhiq2he3xv . gavoqkfufz ; _rtXdot ->
a0egidfcb5 = ( cuhiq2he3xv . pf3kdhnsui - i344fcmwfc1 . a0egidfcb5 ) * 1000.0
; simulationData = ( NeslSimulationData * ) giqt2tul5wr . dtn4zzzaee ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 337 ; simulationData -> mData -> mContStates . mX = & i344fcmwfc1 .
mgxxfhkfdi [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & giqt2tul5wr . gkios1beqo ;
simulationData -> mData -> mModeVector . mN = 246 ; simulationData -> mData
-> mModeVector . mX = & giqt2tul5wr . lstbvo4uss [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ;
tmp_p [ 1 ] = cuhiq2he3xv . el3bc3rvwv [ 1 ] ; tmp_p [ 2 ] = cuhiq2he3xv .
el3bc3rvwv [ 2 ] ; tmp_p [ 3 ] = cuhiq2he3xv . el3bc3rvwv [ 3 ] ; tmp_e [ 1 ]
= 4 ; tmp_p [ 4 ] = cuhiq2he3xv . hm1fmdpdgy [ 0 ] ; tmp_p [ 5 ] =
cuhiq2he3xv . hm1fmdpdgy [ 1 ] ; tmp_p [ 6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ]
; tmp_p [ 7 ] = cuhiq2he3xv . hm1fmdpdgy [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8
] = cuhiq2he3xv . omqn5wlmzw [ 0 ] ; tmp_p [ 9 ] = cuhiq2he3xv . omqn5wlmzw [
1 ] ; tmp_p [ 10 ] = cuhiq2he3xv . omqn5wlmzw [ 2 ] ; tmp_p [ 11 ] =
cuhiq2he3xv . omqn5wlmzw [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
cuhiq2he3xv . j4oygusifp [ 0 ] ; tmp_p [ 13 ] = cuhiq2he3xv . j4oygusifp [ 1
] ; tmp_p [ 14 ] = cuhiq2he3xv . j4oygusifp [ 2 ] ; tmp_p [ 15 ] =
cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData
-> mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 337 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> mgxxfhkfdi [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) giqt2tul5wr . cdfj0j1cvx ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) giqt2tul5wr . bwumius5mm ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( is !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } pexk2pi1gg ( & ( giqt2tul5wr . isvmsyyglk . rtb ) , & ( i344fcmwfc1 .
nq1lsnuhqu ) , & ( ( ( jtt2nejjv2 * ) ssGetdX ( rtS ) ) -> nq1lsnuhqu ) ) ;
bbghji4q0s ( & ( giqt2tul5wr . m03tkajmio . rtb ) , & ( ( ( jtt2nejjv2 * )
ssGetdX ( rtS ) ) -> huiflaoyhi ) ) ; _rtXdot -> piwaeu0cyd = cuhiq2he3xv .
nxipfqo4ge ; _rtXdot -> niplvsv1th = cuhiq2he3xv . mapbxuiz5v ; } void
MdlMassMatrix ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; real_T * tmp_i ; real_T *
tmp_m ; int32_T tmp_g ; int_T tmp_e [ 5 ] ; boolean_T tmp ; simulationData =
( NeslSimulationData * ) giqt2tul5wr . dtn4zzzaee ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & i344fcmwfc1 . mgxxfhkfdi [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & giqt2tul5wr . gkios1beqo ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = &
giqt2tul5wr . lstbvo4uss [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ; tmp_p [ 1 ] = cuhiq2he3xv .
el3bc3rvwv [ 1 ] ; tmp_p [ 2 ] = cuhiq2he3xv . el3bc3rvwv [ 2 ] ; tmp_p [ 3 ]
= cuhiq2he3xv . el3bc3rvwv [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] =
cuhiq2he3xv . hm1fmdpdgy [ 0 ] ; tmp_p [ 5 ] = cuhiq2he3xv . hm1fmdpdgy [ 1 ]
; tmp_p [ 6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ] ; tmp_p [ 7 ] = cuhiq2he3xv .
hm1fmdpdgy [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = cuhiq2he3xv . omqn5wlmzw [
0 ] ; tmp_p [ 9 ] = cuhiq2he3xv . omqn5wlmzw [ 1 ] ; tmp_p [ 10 ] =
cuhiq2he3xv . omqn5wlmzw [ 2 ] ; tmp_p [ 11 ] = cuhiq2he3xv . omqn5wlmzw [ 3
] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = cuhiq2he3xv . j4oygusifp [ 0 ] ; tmp_p
[ 13 ] = cuhiq2he3xv . j4oygusifp [ 1 ] ; tmp_p [ 14 ] = cuhiq2he3xv .
j4oygusifp [ 2 ] ; tmp_p [ 15 ] = cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; tmp_i = ssGetMassMatrixPr ( rtS ) ; tmp_m =
double_pointer_shift ( tmp_i , giqt2tul5wr . o1jqp4wpbb ) ; simulationData ->
mData -> mMassMatrixPr . mN = 106 ; simulationData -> mData -> mMassMatrixPr
. mX = tmp_m ; diagnosticManager = ( NeuDiagnosticManager * ) giqt2tul5wr .
cdfj0j1cvx ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_g = ne_simulator_method ( ( NeslSimulator * )
giqt2tul5wr . bwumius5mm , NESL_SIM_MASSMATRIX , simulationData ,
diagnosticManager ) ; if ( tmp_g != 0 ) { tmp = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg = rtw_diagnostics_msg (
diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } } } void
MdlZeroCrossings ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; bg4wxy5yyz * _rtZCSV ; char * msg ; real_T tmp_p [ 16 ] ; real_T time ;
int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T tmp ; _rtZCSV = ( ( bg4wxy5yyz
* ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> k20dhsy2rp = cuhiq2he3xv
. dnav505y5o - konn1m5pjf . PIDController_UpperSaturationLimit ; _rtZCSV ->
iy0praib1p = cuhiq2he3xv . dnav505y5o - konn1m5pjf .
PIDController_LowerSaturationLimit ; simulationData = ( NeslSimulationData *
) giqt2tul5wr . dtn4zzzaee ; time = ssGetT ( rtS ) ; simulationData -> mData
-> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 337 ; simulationData -> mData
-> mContStates . mX = & i344fcmwfc1 . mgxxfhkfdi [ 0 ] ; simulationData ->
mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX =
& giqt2tul5wr . gkios1beqo ; simulationData -> mData -> mModeVector . mN =
246 ; simulationData -> mData -> mModeVector . mX = & giqt2tul5wr .
lstbvo4uss [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = cuhiq2he3xv . el3bc3rvwv [ 0 ] ; tmp_p [ 1 ] = cuhiq2he3xv .
el3bc3rvwv [ 1 ] ; tmp_p [ 2 ] = cuhiq2he3xv . el3bc3rvwv [ 2 ] ; tmp_p [ 3 ]
= cuhiq2he3xv . el3bc3rvwv [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] =
cuhiq2he3xv . hm1fmdpdgy [ 0 ] ; tmp_p [ 5 ] = cuhiq2he3xv . hm1fmdpdgy [ 1 ]
; tmp_p [ 6 ] = cuhiq2he3xv . hm1fmdpdgy [ 2 ] ; tmp_p [ 7 ] = cuhiq2he3xv .
hm1fmdpdgy [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = cuhiq2he3xv . omqn5wlmzw [
0 ] ; tmp_p [ 9 ] = cuhiq2he3xv . omqn5wlmzw [ 1 ] ; tmp_p [ 10 ] =
cuhiq2he3xv . omqn5wlmzw [ 2 ] ; tmp_p [ 11 ] = cuhiq2he3xv . omqn5wlmzw [ 3
] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = cuhiq2he3xv . j4oygusifp [ 0 ] ; tmp_p
[ 13 ] = cuhiq2he3xv . j4oygusifp [ 1 ] ; tmp_p [ 14 ] = cuhiq2he3xv .
j4oygusifp [ 2 ] ; tmp_p [ 15 ] = cuhiq2he3xv . j4oygusifp [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 260 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> mdd4d3qoks ;
diagnosticManager = ( NeuDiagnosticManager * ) giqt2tul5wr . cdfj0j1cvx ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) giqt2tul5wr .
bwumius5mm , NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } _rtZCSV -> kjulgp4bf4 = cuhiq2he3xv .
iumj4ipipu - konn1m5pjf . HitCrossing_Offset ; if ( giqt2tul5wr . cpgm3bdawj
) { _rtZCSV -> dxds04xoh4 = cuhiq2he3xv . k25qje3rlu - konn1m5pjf .
Relay_OffVal ; } else { _rtZCSV -> dxds04xoh4 = cuhiq2he3xv . k25qje3rlu -
konn1m5pjf . Relay_OnVal ; } } void MdlTerminate ( void ) { lktaxgo5iz ( & (
giqt2tul5wr . ekun4ztdyk . rtm ) ) ; ekywbf3nku ( & ( giqt2tul5wr .
igqkoslatl . rtm ) ) ; m5uwyjpoin ( & ( giqt2tul5wr . isvmsyyglk . rtm ) ) ;
phnn1n2hbt ( & ( giqt2tul5wr . m03tkajmio . rtm ) ) ; hwt4nru52w ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) giqt2tul5wr .
cdfj0j1cvx ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * )
giqt2tul5wr . dtn4zzzaee ) ; nesl_erase_simulator (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
) ; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) giqt2tul5wr . g1wyg1abb4 ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) giqt2tul5wr .
iviog2qp5o ) ; nesl_erase_simulator (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
) ; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) giqt2tul5wr . hrr5yk13zy ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) giqt2tul5wr .
asdmqibftz ) ; nesl_erase_simulator (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration_1"
) ; nesl_destroy_registry ( ) ; hvmwpriba1 ( ) ;
mr_BMS_Software_DestroyInitRestoreData ( ) ; } static void
mr_EvReferenceApplication_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) ; static void
mr_EvReferenceApplication_cacheDataAsMxArray ( mxArray * destArray , mwIndex
i , int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_EvReferenceApplication_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_EvReferenceApplication_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) {
memcpy ( ( uint8_T * ) destData , ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) , numBytes ) ; } static void
mr_EvReferenceApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_EvReferenceApplication_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_EvReferenceApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_EvReferenceApplication_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_EvReferenceApplication_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_EvReferenceApplication_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EvReferenceApplication_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_EvReferenceApplication_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EvReferenceApplication_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_EvReferenceApplication_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_EvReferenceApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_EvReferenceApplication_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_EvReferenceApplication_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "cuhiq2he3xv" , "giqt2tul5wr"
, "dhvysoxui2f" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( ssDW , 0 ,
0 , ( const void * ) & ( cuhiq2he3xv ) , sizeof ( cuhiq2he3xv ) ) ; { static
const char_T * rtdwDataFieldNames [ 92 ] = { "giqt2tul5wr.igqkoslatl" ,
"giqt2tul5wr.isvmsyyglk" , "giqt2tul5wr.m03tkajmio" ,
"giqt2tul5wr.ekun4ztdyk" , "BMS_Software" , "giqt2tul5wr.p3iatbuorl" ,
"giqt2tul5wr.oyf31f32r1" , "giqt2tul5wr.dlo02ztcii" ,
"giqt2tul5wr.juhg1joriu" , "giqt2tul5wr.phmddq1zkx" ,
"giqt2tul5wr.jwpc1uzeor" , "giqt2tul5wr.l4pn2msb3d" ,
"giqt2tul5wr.oeaskjkfsr" , "giqt2tul5wr.k4zhoquz4c" ,
"giqt2tul5wr.fbroivbf3k" , "giqt2tul5wr.mkiptczwen" ,
"giqt2tul5wr.gyxsg3hoeg" , "giqt2tul5wr.cl5jwb0b3t" ,
"giqt2tul5wr.m1lyfkk4wz" , "giqt2tul5wr.arwg2hasvu" ,
"giqt2tul5wr.gzyrjrunwy" , "giqt2tul5wr.cjijsufndg" ,
"giqt2tul5wr.keqs0k3sdq" , "giqt2tul5wr.alxnn4vrl1" ,
"giqt2tul5wr.my5si44j4x" , "giqt2tul5wr.gkios1beqo" ,
"giqt2tul5wr.jidxlsm5se" , "giqt2tul5wr.jsjjbflcse" ,
"giqt2tul5wr.dzxddx5cen" , "giqt2tul5wr.apn1h34r15" ,
"giqt2tul5wr.ilvsdo0oga" , "giqt2tul5wr.iap4dpl4zs" ,
"giqt2tul5wr.fr1sahkypq" , "giqt2tul5wr.ie0iddjxra" ,
"giqt2tul5wr.givtfh51qo" , "giqt2tul5wr.cj4gapd3fs" ,
"giqt2tul5wr.eww50ci0u5" , "giqt2tul5wr.gyrmkznnvz" ,
"giqt2tul5wr.gupn4h5qkp" , "giqt2tul5wr.dxz1p5izxq" ,
"giqt2tul5wr.okzsrfvbia" , "giqt2tul5wr.ahhxtrgluu" ,
"giqt2tul5wr.mwwvksjbpb" , "giqt2tul5wr.ipsejbdjkv" ,
"giqt2tul5wr.kr24afjbvy" , "giqt2tul5wr.mgyqdv05fz" ,
"giqt2tul5wr.hvilkifux1" , "giqt2tul5wr.nedhadhu3t" ,
"giqt2tul5wr.odxrkracyb" , "giqt2tul5wr.fuq0idaz5u" ,
"giqt2tul5wr.code54py1j" , "giqt2tul5wr.azfkgqxasv" ,
"giqt2tul5wr.imczkcsnw3" , "giqt2tul5wr.lstbvo4uss" ,
"giqt2tul5wr.cuk0updp4b" , "giqt2tul5wr.go23v0n4e4" ,
"giqt2tul5wr.g1z0l2rflt" , "giqt2tul5wr.o1jqp4wpbb" ,
"giqt2tul5wr.liwdzlex20" , "giqt2tul5wr.fumd4zvnkk" ,
"giqt2tul5wr.ibuccqrkws" , "giqt2tul5wr.kvdz2ebfhv" ,
"giqt2tul5wr.bhnsby0fli" , "giqt2tul5wr.mwgqdelv1f" ,
"giqt2tul5wr.kltct411us" , "giqt2tul5wr.hszqsxfvz0" ,
"giqt2tul5wr.pzhspsqiej" , "giqt2tul5wr.aevxwrdkrx" ,
"giqt2tul5wr.b5jqdqfiw3" , "giqt2tul5wr.im4sg3gugq" ,
"giqt2tul5wr.lz2gyqiob1" , "giqt2tul5wr.fde5kmnnd2" ,
"giqt2tul5wr.lrwbi350ti" , "giqt2tul5wr.dapk13hkuj" ,
"giqt2tul5wr.gqvgelmask" , "giqt2tul5wr.pyshnl4n4o" ,
"giqt2tul5wr.jkb4mvplww" , "giqt2tul5wr.ade3ahyo1e" ,
"giqt2tul5wr.gmldgqtpy3" , "giqt2tul5wr.o23aklsczm" ,
"giqt2tul5wr.emkg42qjo3" , "giqt2tul5wr.inllocuypf" ,
"giqt2tul5wr.m21cmnmmdk" , "giqt2tul5wr.m1zratuqz4" ,
"giqt2tul5wr.jgorjlljdk" , "giqt2tul5wr.cpgm3bdawj" ,
"giqt2tul5wr.izevsizlwm" , "giqt2tul5wr.pncmmapinm" ,
"giqt2tul5wr.ciwxigmsq2.iqmyanxtr1" , "giqt2tul5wr.ciwxigmsq2.mc3fhmonso" ,
"giqt2tul5wr.g30v1kdrwbo.iqmyanxtr1" , "giqt2tul5wr.g30v1kdrwbo.mc3fhmonso" ,
} ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 92 ,
rtdwDataFieldNames ) ; { mxArray * varData = mr_DrivetrainEv_GetDWork ( & (
giqt2tul5wr . igqkoslatl ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 ,
varData ) ; } { mxArray * varData = mr_BattEv_GetDWork ( & ( giqt2tul5wr .
isvmsyyglk ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; } {
mxArray * varData = mr_MotGenEvMapped_GetDWork ( & ( giqt2tul5wr . m03tkajmio
) ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 , varData ) ; } { mxArray *
varData = mr_EvPowertrainController_GetDWork ( & ( giqt2tul5wr . ekun4ztdyk )
) ; mxSetFieldByNumber ( rtdwData , 0 , 3 , varData ) ; } { mxArray * varData
= mr_BMS_Software_GetDWork ( ) ; mxSetFieldByNumber ( rtdwData , 0 , 4 ,
varData ) ; } mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 5
, ( const void * ) & ( giqt2tul5wr . p3iatbuorl ) , sizeof ( giqt2tul5wr .
p3iatbuorl ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 6 , ( const void * ) & ( giqt2tul5wr . oyf31f32r1 ) , sizeof ( giqt2tul5wr
. oyf31f32r1 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 7 , ( const void * ) & ( giqt2tul5wr . dlo02ztcii ) , sizeof (
giqt2tul5wr . dlo02ztcii ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 8 , ( const void * ) & ( giqt2tul5wr . juhg1joriu ) , sizeof (
giqt2tul5wr . juhg1joriu ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( giqt2tul5wr . phmddq1zkx ) , sizeof (
giqt2tul5wr . phmddq1zkx ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( giqt2tul5wr . jwpc1uzeor ) , sizeof
( giqt2tul5wr . jwpc1uzeor ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 11 , ( const void * ) & ( giqt2tul5wr . l4pn2msb3d ) ,
sizeof ( giqt2tul5wr . l4pn2msb3d ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( giqt2tul5wr . oeaskjkfsr ) , sizeof ( giqt2tul5wr . oeaskjkfsr )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 13 , (
const void * ) & ( giqt2tul5wr . k4zhoquz4c ) , sizeof ( giqt2tul5wr .
k4zhoquz4c ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 14 , ( const void * ) & ( giqt2tul5wr . fbroivbf3k ) , sizeof ( giqt2tul5wr
. fbroivbf3k ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 15 , ( const void * ) & ( giqt2tul5wr . mkiptczwen ) , sizeof (
giqt2tul5wr . mkiptczwen ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( giqt2tul5wr . gyxsg3hoeg ) , sizeof
( giqt2tul5wr . gyxsg3hoeg ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 17 , ( const void * ) & ( giqt2tul5wr . cl5jwb0b3t ) ,
sizeof ( giqt2tul5wr . cl5jwb0b3t ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( giqt2tul5wr . m1lyfkk4wz ) , sizeof ( giqt2tul5wr . m1lyfkk4wz )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 19 , (
const void * ) & ( giqt2tul5wr . arwg2hasvu ) , sizeof ( giqt2tul5wr .
arwg2hasvu ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 20 , ( const void * ) & ( giqt2tul5wr . gzyrjrunwy ) , sizeof ( giqt2tul5wr
. gzyrjrunwy ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 21 , ( const void * ) & ( giqt2tul5wr . cjijsufndg ) , sizeof (
giqt2tul5wr . cjijsufndg ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( giqt2tul5wr . keqs0k3sdq ) , sizeof
( giqt2tul5wr . keqs0k3sdq ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 23 , ( const void * ) & ( giqt2tul5wr . alxnn4vrl1 ) ,
sizeof ( giqt2tul5wr . alxnn4vrl1 ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( giqt2tul5wr . my5si44j4x ) , sizeof ( giqt2tul5wr . my5si44j4x )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 25 , (
const void * ) & ( giqt2tul5wr . gkios1beqo ) , sizeof ( giqt2tul5wr .
gkios1beqo ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 26 , ( const void * ) & ( giqt2tul5wr . jidxlsm5se ) , sizeof ( giqt2tul5wr
. jidxlsm5se ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 27 , ( const void * ) & ( giqt2tul5wr . jsjjbflcse ) , sizeof (
giqt2tul5wr . jsjjbflcse ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 28 , ( const void * ) & ( giqt2tul5wr . dzxddx5cen ) , sizeof
( giqt2tul5wr . dzxddx5cen ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 29 , ( const void * ) & ( giqt2tul5wr . apn1h34r15 ) ,
sizeof ( giqt2tul5wr . apn1h34r15 ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( giqt2tul5wr . ilvsdo0oga ) , sizeof ( giqt2tul5wr . ilvsdo0oga )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 31 , (
const void * ) & ( giqt2tul5wr . iap4dpl4zs ) , sizeof ( giqt2tul5wr .
iap4dpl4zs ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 32 , ( const void * ) & ( giqt2tul5wr . fr1sahkypq ) , sizeof ( giqt2tul5wr
. fr1sahkypq ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 33 , ( const void * ) & ( giqt2tul5wr . ie0iddjxra ) , sizeof (
giqt2tul5wr . ie0iddjxra ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 34 , ( const void * ) & ( giqt2tul5wr . givtfh51qo ) , sizeof
( giqt2tul5wr . givtfh51qo ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 35 , ( const void * ) & ( giqt2tul5wr . cj4gapd3fs ) ,
sizeof ( giqt2tul5wr . cj4gapd3fs ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const
void * ) & ( giqt2tul5wr . eww50ci0u5 ) , sizeof ( giqt2tul5wr . eww50ci0u5 )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 37 , (
const void * ) & ( giqt2tul5wr . gyrmkznnvz ) , sizeof ( giqt2tul5wr .
gyrmkznnvz ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 38 , ( const void * ) & ( giqt2tul5wr . gupn4h5qkp ) , sizeof ( giqt2tul5wr
. gupn4h5qkp ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 39 , ( const void * ) & ( giqt2tul5wr . dxz1p5izxq ) , sizeof (
giqt2tul5wr . dxz1p5izxq ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( giqt2tul5wr . okzsrfvbia ) , sizeof
( giqt2tul5wr . okzsrfvbia ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 41 , ( const void * ) & ( giqt2tul5wr . ahhxtrgluu ) ,
sizeof ( giqt2tul5wr . ahhxtrgluu ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const
void * ) & ( giqt2tul5wr . mwwvksjbpb ) , sizeof ( giqt2tul5wr . mwwvksjbpb )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 43 , (
const void * ) & ( giqt2tul5wr . ipsejbdjkv ) , sizeof ( giqt2tul5wr .
ipsejbdjkv ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 44 , ( const void * ) & ( giqt2tul5wr . kr24afjbvy ) , sizeof ( giqt2tul5wr
. kr24afjbvy ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 45 , ( const void * ) & ( giqt2tul5wr . mgyqdv05fz ) , sizeof (
giqt2tul5wr . mgyqdv05fz ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 46 , ( const void * ) & ( giqt2tul5wr . hvilkifux1 ) , sizeof
( giqt2tul5wr . hvilkifux1 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 47 , ( const void * ) & ( giqt2tul5wr . nedhadhu3t ) ,
sizeof ( giqt2tul5wr . nedhadhu3t ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const
void * ) & ( giqt2tul5wr . odxrkracyb ) , sizeof ( giqt2tul5wr . odxrkracyb )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 49 , (
const void * ) & ( giqt2tul5wr . fuq0idaz5u ) , sizeof ( giqt2tul5wr .
fuq0idaz5u ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 50 , ( const void * ) & ( giqt2tul5wr . code54py1j ) , sizeof ( giqt2tul5wr
. code54py1j ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 51 , ( const void * ) & ( giqt2tul5wr . azfkgqxasv ) , sizeof (
giqt2tul5wr . azfkgqxasv ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 52 , ( const void * ) & ( giqt2tul5wr . imczkcsnw3 ) , sizeof
( giqt2tul5wr . imczkcsnw3 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 53 , ( const void * ) & ( giqt2tul5wr . lstbvo4uss ) ,
sizeof ( giqt2tul5wr . lstbvo4uss ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const
void * ) & ( giqt2tul5wr . cuk0updp4b ) , sizeof ( giqt2tul5wr . cuk0updp4b )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 55 , (
const void * ) & ( giqt2tul5wr . go23v0n4e4 ) , sizeof ( giqt2tul5wr .
go23v0n4e4 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 56 , ( const void * ) & ( giqt2tul5wr . g1z0l2rflt ) , sizeof ( giqt2tul5wr
. g1z0l2rflt ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 57 , ( const void * ) & ( giqt2tul5wr . o1jqp4wpbb ) , sizeof (
giqt2tul5wr . o1jqp4wpbb ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 58 , ( const void * ) & ( giqt2tul5wr . liwdzlex20 ) , sizeof
( giqt2tul5wr . liwdzlex20 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 59 , ( const void * ) & ( giqt2tul5wr . fumd4zvnkk ) ,
sizeof ( giqt2tul5wr . fumd4zvnkk ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const
void * ) & ( giqt2tul5wr . ibuccqrkws ) , sizeof ( giqt2tul5wr . ibuccqrkws )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 61 , (
const void * ) & ( giqt2tul5wr . kvdz2ebfhv ) , sizeof ( giqt2tul5wr .
kvdz2ebfhv ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 62 , ( const void * ) & ( giqt2tul5wr . bhnsby0fli ) , sizeof ( giqt2tul5wr
. bhnsby0fli ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 63 , ( const void * ) & ( giqt2tul5wr . mwgqdelv1f ) , sizeof (
giqt2tul5wr . mwgqdelv1f ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 64 , ( const void * ) & ( giqt2tul5wr . kltct411us ) , sizeof
( giqt2tul5wr . kltct411us ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 65 , ( const void * ) & ( giqt2tul5wr . hszqsxfvz0 ) ,
sizeof ( giqt2tul5wr . hszqsxfvz0 ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const
void * ) & ( giqt2tul5wr . pzhspsqiej ) , sizeof ( giqt2tul5wr . pzhspsqiej )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 67 , (
const void * ) & ( giqt2tul5wr . aevxwrdkrx ) , sizeof ( giqt2tul5wr .
aevxwrdkrx ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 68 , ( const void * ) & ( giqt2tul5wr . b5jqdqfiw3 ) , sizeof ( giqt2tul5wr
. b5jqdqfiw3 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 69 , ( const void * ) & ( giqt2tul5wr . im4sg3gugq ) , sizeof (
giqt2tul5wr . im4sg3gugq ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 70 , ( const void * ) & ( giqt2tul5wr . lz2gyqiob1 ) , sizeof
( giqt2tul5wr . lz2gyqiob1 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 71 , ( const void * ) & ( giqt2tul5wr . fde5kmnnd2 ) ,
sizeof ( giqt2tul5wr . fde5kmnnd2 ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const
void * ) & ( giqt2tul5wr . lrwbi350ti ) , sizeof ( giqt2tul5wr . lrwbi350ti )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 73 , (
const void * ) & ( giqt2tul5wr . dapk13hkuj ) , sizeof ( giqt2tul5wr .
dapk13hkuj ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 74 , ( const void * ) & ( giqt2tul5wr . gqvgelmask ) , sizeof ( giqt2tul5wr
. gqvgelmask ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 75 , ( const void * ) & ( giqt2tul5wr . pyshnl4n4o ) , sizeof (
giqt2tul5wr . pyshnl4n4o ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 76 , ( const void * ) & ( giqt2tul5wr . jkb4mvplww ) , sizeof
( giqt2tul5wr . jkb4mvplww ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 77 , ( const void * ) & ( giqt2tul5wr . ade3ahyo1e ) ,
sizeof ( giqt2tul5wr . ade3ahyo1e ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const
void * ) & ( giqt2tul5wr . gmldgqtpy3 ) , sizeof ( giqt2tul5wr . gmldgqtpy3 )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 79 , (
const void * ) & ( giqt2tul5wr . o23aklsczm ) , sizeof ( giqt2tul5wr .
o23aklsczm ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 80 , ( const void * ) & ( giqt2tul5wr . emkg42qjo3 ) , sizeof ( giqt2tul5wr
. emkg42qjo3 ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 81 , ( const void * ) & ( giqt2tul5wr . inllocuypf ) , sizeof (
giqt2tul5wr . inllocuypf ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 82 , ( const void * ) & ( giqt2tul5wr . m21cmnmmdk ) , sizeof
( giqt2tul5wr . m21cmnmmdk ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray
( rtdwData , 0 , 83 , ( const void * ) & ( giqt2tul5wr . m1zratuqz4 ) ,
sizeof ( giqt2tul5wr . m1zratuqz4 ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const
void * ) & ( giqt2tul5wr . jgorjlljdk ) , sizeof ( giqt2tul5wr . jgorjlljdk )
) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 85 , (
const void * ) & ( giqt2tul5wr . cpgm3bdawj ) , sizeof ( giqt2tul5wr .
cpgm3bdawj ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0
, 86 , ( const void * ) & ( giqt2tul5wr . izevsizlwm ) , sizeof ( giqt2tul5wr
. izevsizlwm ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData ,
0 , 87 , ( const void * ) & ( giqt2tul5wr . pncmmapinm ) , sizeof (
giqt2tul5wr . pncmmapinm ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 88 , ( const void * ) & ( giqt2tul5wr . ciwxigmsq2 .
iqmyanxtr1 ) , sizeof ( giqt2tul5wr . ciwxigmsq2 . iqmyanxtr1 ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const
void * ) & ( giqt2tul5wr . ciwxigmsq2 . mc3fhmonso ) , sizeof ( giqt2tul5wr .
ciwxigmsq2 . mc3fhmonso ) ) ; mr_EvReferenceApplication_cacheDataAsMxArray (
rtdwData , 0 , 90 , ( const void * ) & ( giqt2tul5wr . g30v1kdrwbo .
iqmyanxtr1 ) , sizeof ( giqt2tul5wr . g30v1kdrwbo . iqmyanxtr1 ) ) ;
mr_EvReferenceApplication_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const
void * ) & ( giqt2tul5wr . g30v1kdrwbo . mc3fhmonso ) , sizeof ( giqt2tul5wr
. g30v1kdrwbo . mc3fhmonso ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData
) ; } mr_EvReferenceApplication_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const
void * ) & ( dhvysoxui2f ) , sizeof ( dhvysoxui2f ) ) ; return ssDW ; } void
mr_EvReferenceApplication_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( cuhiq2he3xv
) , ssDW , 0 , 0 , sizeof ( cuhiq2he3xv ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_DrivetrainEv_SetDWork ( & (
giqt2tul5wr . igqkoslatl ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_BattEv_SetDWork ( & ( giqt2tul5wr . isvmsyyglk ) , mxGetFieldByNumber (
rtdwData , 0 , 1 ) ) ; mr_MotGenEvMapped_SetDWork ( & ( giqt2tul5wr .
m03tkajmio ) , mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ;
mr_EvPowertrainController_SetDWork ( & ( giqt2tul5wr . ekun4ztdyk ) ,
mxGetFieldByNumber ( rtdwData , 0 , 3 ) ) ; mr_BMS_Software_SetDWork (
mxGetFieldByNumber ( rtdwData , 0 , 4 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. p3iatbuorl ) , rtdwData , 0 , 5 , sizeof ( giqt2tul5wr . p3iatbuorl ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. oyf31f32r1 ) , rtdwData , 0 , 6 , sizeof ( giqt2tul5wr . oyf31f32r1 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. dlo02ztcii ) , rtdwData , 0 , 7 , sizeof ( giqt2tul5wr . dlo02ztcii ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. juhg1joriu ) , rtdwData , 0 , 8 , sizeof ( giqt2tul5wr . juhg1joriu ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. phmddq1zkx ) , rtdwData , 0 , 9 , sizeof ( giqt2tul5wr . phmddq1zkx ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. jwpc1uzeor ) , rtdwData , 0 , 10 , sizeof ( giqt2tul5wr . jwpc1uzeor ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. l4pn2msb3d ) , rtdwData , 0 , 11 , sizeof ( giqt2tul5wr . l4pn2msb3d ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. oeaskjkfsr ) , rtdwData , 0 , 12 , sizeof ( giqt2tul5wr . oeaskjkfsr ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. k4zhoquz4c ) , rtdwData , 0 , 13 , sizeof ( giqt2tul5wr . k4zhoquz4c ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. fbroivbf3k ) , rtdwData , 0 , 14 , sizeof ( giqt2tul5wr . fbroivbf3k ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. mkiptczwen ) , rtdwData , 0 , 15 , sizeof ( giqt2tul5wr . mkiptczwen ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. gyxsg3hoeg ) , rtdwData , 0 , 16 , sizeof ( giqt2tul5wr . gyxsg3hoeg ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. cl5jwb0b3t ) , rtdwData , 0 , 17 , sizeof ( giqt2tul5wr . cl5jwb0b3t ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. m1lyfkk4wz ) , rtdwData , 0 , 18 , sizeof ( giqt2tul5wr . m1lyfkk4wz ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. arwg2hasvu ) , rtdwData , 0 , 19 , sizeof ( giqt2tul5wr . arwg2hasvu ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. gzyrjrunwy ) , rtdwData , 0 , 20 , sizeof ( giqt2tul5wr . gzyrjrunwy ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. cjijsufndg ) , rtdwData , 0 , 21 , sizeof ( giqt2tul5wr . cjijsufndg ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. keqs0k3sdq ) , rtdwData , 0 , 22 , sizeof ( giqt2tul5wr . keqs0k3sdq ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. alxnn4vrl1 ) , rtdwData , 0 , 23 , sizeof ( giqt2tul5wr . alxnn4vrl1 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. my5si44j4x ) , rtdwData , 0 , 24 , sizeof ( giqt2tul5wr . my5si44j4x ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. gkios1beqo ) , rtdwData , 0 , 25 , sizeof ( giqt2tul5wr . gkios1beqo ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. jidxlsm5se ) , rtdwData , 0 , 26 , sizeof ( giqt2tul5wr . jidxlsm5se ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. jsjjbflcse ) , rtdwData , 0 , 27 , sizeof ( giqt2tul5wr . jsjjbflcse ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. dzxddx5cen ) , rtdwData , 0 , 28 , sizeof ( giqt2tul5wr . dzxddx5cen ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. apn1h34r15 ) , rtdwData , 0 , 29 , sizeof ( giqt2tul5wr . apn1h34r15 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ilvsdo0oga ) , rtdwData , 0 , 30 , sizeof ( giqt2tul5wr . ilvsdo0oga ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. iap4dpl4zs ) , rtdwData , 0 , 31 , sizeof ( giqt2tul5wr . iap4dpl4zs ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. fr1sahkypq ) , rtdwData , 0 , 32 , sizeof ( giqt2tul5wr . fr1sahkypq ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ie0iddjxra ) , rtdwData , 0 , 33 , sizeof ( giqt2tul5wr . ie0iddjxra ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. givtfh51qo ) , rtdwData , 0 , 34 , sizeof ( giqt2tul5wr . givtfh51qo ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. cj4gapd3fs ) , rtdwData , 0 , 35 , sizeof ( giqt2tul5wr . cj4gapd3fs ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. eww50ci0u5 ) , rtdwData , 0 , 36 , sizeof ( giqt2tul5wr . eww50ci0u5 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. gyrmkznnvz ) , rtdwData , 0 , 37 , sizeof ( giqt2tul5wr . gyrmkznnvz ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. gupn4h5qkp ) , rtdwData , 0 , 38 , sizeof ( giqt2tul5wr . gupn4h5qkp ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. dxz1p5izxq ) , rtdwData , 0 , 39 , sizeof ( giqt2tul5wr . dxz1p5izxq ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. okzsrfvbia ) , rtdwData , 0 , 40 , sizeof ( giqt2tul5wr . okzsrfvbia ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ahhxtrgluu ) , rtdwData , 0 , 41 , sizeof ( giqt2tul5wr . ahhxtrgluu ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. mwwvksjbpb ) , rtdwData , 0 , 42 , sizeof ( giqt2tul5wr . mwwvksjbpb ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ipsejbdjkv ) , rtdwData , 0 , 43 , sizeof ( giqt2tul5wr . ipsejbdjkv ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. kr24afjbvy ) , rtdwData , 0 , 44 , sizeof ( giqt2tul5wr . kr24afjbvy ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. mgyqdv05fz ) , rtdwData , 0 , 45 , sizeof ( giqt2tul5wr . mgyqdv05fz ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. hvilkifux1 ) , rtdwData , 0 , 46 , sizeof ( giqt2tul5wr . hvilkifux1 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. nedhadhu3t ) , rtdwData , 0 , 47 , sizeof ( giqt2tul5wr . nedhadhu3t ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. odxrkracyb ) , rtdwData , 0 , 48 , sizeof ( giqt2tul5wr . odxrkracyb ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. fuq0idaz5u ) , rtdwData , 0 , 49 , sizeof ( giqt2tul5wr . fuq0idaz5u ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. code54py1j ) , rtdwData , 0 , 50 , sizeof ( giqt2tul5wr . code54py1j ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. azfkgqxasv ) , rtdwData , 0 , 51 , sizeof ( giqt2tul5wr . azfkgqxasv ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. imczkcsnw3 ) , rtdwData , 0 , 52 , sizeof ( giqt2tul5wr . imczkcsnw3 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. lstbvo4uss ) , rtdwData , 0 , 53 , sizeof ( giqt2tul5wr . lstbvo4uss ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. cuk0updp4b ) , rtdwData , 0 , 54 , sizeof ( giqt2tul5wr . cuk0updp4b ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. go23v0n4e4 ) , rtdwData , 0 , 55 , sizeof ( giqt2tul5wr . go23v0n4e4 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. g1z0l2rflt ) , rtdwData , 0 , 56 , sizeof ( giqt2tul5wr . g1z0l2rflt ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. o1jqp4wpbb ) , rtdwData , 0 , 57 , sizeof ( giqt2tul5wr . o1jqp4wpbb ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. liwdzlex20 ) , rtdwData , 0 , 58 , sizeof ( giqt2tul5wr . liwdzlex20 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. fumd4zvnkk ) , rtdwData , 0 , 59 , sizeof ( giqt2tul5wr . fumd4zvnkk ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ibuccqrkws ) , rtdwData , 0 , 60 , sizeof ( giqt2tul5wr . ibuccqrkws ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. kvdz2ebfhv ) , rtdwData , 0 , 61 , sizeof ( giqt2tul5wr . kvdz2ebfhv ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. bhnsby0fli ) , rtdwData , 0 , 62 , sizeof ( giqt2tul5wr . bhnsby0fli ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. mwgqdelv1f ) , rtdwData , 0 , 63 , sizeof ( giqt2tul5wr . mwgqdelv1f ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. kltct411us ) , rtdwData , 0 , 64 , sizeof ( giqt2tul5wr . kltct411us ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. hszqsxfvz0 ) , rtdwData , 0 , 65 , sizeof ( giqt2tul5wr . hszqsxfvz0 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. pzhspsqiej ) , rtdwData , 0 , 66 , sizeof ( giqt2tul5wr . pzhspsqiej ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. aevxwrdkrx ) , rtdwData , 0 , 67 , sizeof ( giqt2tul5wr . aevxwrdkrx ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. b5jqdqfiw3 ) , rtdwData , 0 , 68 , sizeof ( giqt2tul5wr . b5jqdqfiw3 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. im4sg3gugq ) , rtdwData , 0 , 69 , sizeof ( giqt2tul5wr . im4sg3gugq ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. lz2gyqiob1 ) , rtdwData , 0 , 70 , sizeof ( giqt2tul5wr . lz2gyqiob1 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. fde5kmnnd2 ) , rtdwData , 0 , 71 , sizeof ( giqt2tul5wr . fde5kmnnd2 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. lrwbi350ti ) , rtdwData , 0 , 72 , sizeof ( giqt2tul5wr . lrwbi350ti ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. dapk13hkuj ) , rtdwData , 0 , 73 , sizeof ( giqt2tul5wr . dapk13hkuj ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. gqvgelmask ) , rtdwData , 0 , 74 , sizeof ( giqt2tul5wr . gqvgelmask ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. pyshnl4n4o ) , rtdwData , 0 , 75 , sizeof ( giqt2tul5wr . pyshnl4n4o ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. jkb4mvplww ) , rtdwData , 0 , 76 , sizeof ( giqt2tul5wr . jkb4mvplww ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ade3ahyo1e ) , rtdwData , 0 , 77 , sizeof ( giqt2tul5wr . ade3ahyo1e ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. gmldgqtpy3 ) , rtdwData , 0 , 78 , sizeof ( giqt2tul5wr . gmldgqtpy3 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. o23aklsczm ) , rtdwData , 0 , 79 , sizeof ( giqt2tul5wr . o23aklsczm ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. emkg42qjo3 ) , rtdwData , 0 , 80 , sizeof ( giqt2tul5wr . emkg42qjo3 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. inllocuypf ) , rtdwData , 0 , 81 , sizeof ( giqt2tul5wr . inllocuypf ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. m21cmnmmdk ) , rtdwData , 0 , 82 , sizeof ( giqt2tul5wr . m21cmnmmdk ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. m1zratuqz4 ) , rtdwData , 0 , 83 , sizeof ( giqt2tul5wr . m1zratuqz4 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. jgorjlljdk ) , rtdwData , 0 , 84 , sizeof ( giqt2tul5wr . jgorjlljdk ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. cpgm3bdawj ) , rtdwData , 0 , 85 , sizeof ( giqt2tul5wr . cpgm3bdawj ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. izevsizlwm ) , rtdwData , 0 , 86 , sizeof ( giqt2tul5wr . izevsizlwm ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. pncmmapinm ) , rtdwData , 0 , 87 , sizeof ( giqt2tul5wr . pncmmapinm ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ciwxigmsq2 . iqmyanxtr1 ) , rtdwData , 0 , 88 , sizeof ( giqt2tul5wr .
ciwxigmsq2 . iqmyanxtr1 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. ciwxigmsq2 . mc3fhmonso ) , rtdwData , 0 , 89 , sizeof ( giqt2tul5wr .
ciwxigmsq2 . mc3fhmonso ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. g30v1kdrwbo . iqmyanxtr1 ) , rtdwData , 0 , 90 , sizeof ( giqt2tul5wr .
g30v1kdrwbo . iqmyanxtr1 ) ) ;
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( giqt2tul5wr
. g30v1kdrwbo . mc3fhmonso ) , rtdwData , 0 , 91 , sizeof ( giqt2tul5wr .
g30v1kdrwbo . mc3fhmonso ) ) ; }
mr_EvReferenceApplication_restoreDataFromMxArray ( ( void * ) & ( dhvysoxui2f
) , ssDW , 0 , 2 , sizeof ( dhvysoxui2f ) ) ; } mxArray *
mr_EvReferenceApplication_GetSimStateDisallowedBlocks ( ) { mxArray * data =
NULL ; mwIndex subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks =
0 ; size_t numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 5 ] ;
disallowedBlocksInChild [ 0 ] = mr_BMS_Software_GetSimStateDisallowedBlocks (
) ; disallowedBlocksInChild [ 1 ] = mr_BattEv_GetSimStateDisallowedBlocks ( )
; disallowedBlocksInChild [ 2 ] = mr_DrivetrainEv_GetSimStateDisallowedBlocks
( ) ; disallowedBlocksInChild [ 3 ] =
mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 4 ] = mr_MotGenEvMapped_GetSimStateDisallowedBlocks
( ) ; { size_t i ; for ( i = 0 ; i < 5 ; ++ i ) { mxArray * data_i =
disallowedBlocksInChild [ i ] ; if ( ( NULL ) != data_i ) { if ( 0 ==
numChildrenWithDisallowedBlocks ++ ) { data = data_i ; } numBlocks += mxGetM
( data_i ) ; } } } data = mxCreateCellMatrix ( numBlocks + 5 , 3 ) ; { static
const char_T * blockType [ 5 ] = { "SimscapeRtp" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" , "Scope" , } ; static
const char_T * blockPath [ 5 ] = {
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/RTP_1"
,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/STATE_1"
,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery Cooling/Solver Configuration/EVAL_KEY/OUTPUT_1_1"
, "EvReferenceApplication/Visualization/Performance and FE Scope" , } ;
static const int reason [ 5 ] = { 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] =
0 ; subs [ 0 ] < 5 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } { size_t i
; for ( i = 0 ; i < 5 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [
i ] ; if ( ( NULL ) != data_i ) { mwIndex subs_i [ 2 ] , offset_i ; const
mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for ( subs_i [ 0 ] = 0 ;
subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex j ; for ( j = 0 ;
j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ; offset_i =
mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij = mxGetCell ( data_i
, offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ; subs [ 1 ] = j ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; } mxDestroyArray ( data_i ) ; } }
} return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS
, 379 ) ; ssSetNumPeriodicContStates ( rtS , 1 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 6 ) ; ssSetNumBlocks ( rtS , 503 ) ;
ssSetNumBlockIO ( rtS , 119 ) ; ssSetNumBlockParams ( rtS , 3895 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetSampleTime ( rtS , 3 , 0.1 ) ; ssSetSampleTime ( rtS , 4 , 0.5 ) ;
ssSetSampleTime ( rtS , 5 , 5.0 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; ssSetOffsetTime ( rtS , 4 , 0.0 ) ;
ssSetOffsetTime ( rtS , 5 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1678879199U ) ; ssSetChecksumVal ( rtS , 1 ,
458555119U ) ; ssSetChecksumVal ( rtS , 2 , 784608942U ) ; ssSetChecksumVal (
rtS , 3 , 1656421520U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ssNonContDerivSigFeedingOutports *
mr_DrivetrainEv_13_0_0nonContOutputArray [ 8 ] = { ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ;
ssNonContDerivSigFeedingOutports mr_DrivetrainEv_13_0_0nonContDerivSig4 [ 2 ]
; ssNonContDerivSigFeedingOutports mr_DrivetrainEv_13_0_0nonContDerivSig5 [ 2
] ; ssNonContDerivSigFeedingOutports mr_DrivetrainEv_13_0_0nonContDerivSig6 [
2 ] ; ssNonContDerivSigFeedingOutports mr_DrivetrainEv_13_0_0nonContDerivSig7
[ 2 ] ; mr_DrivetrainEv_13_0_0nonContOutputArray [ 4 ] =
mr_DrivetrainEv_13_0_0nonContDerivSig4 ;
mr_DrivetrainEv_13_0_0nonContOutputArray [ 5 ] =
mr_DrivetrainEv_13_0_0nonContDerivSig5 ;
mr_DrivetrainEv_13_0_0nonContOutputArray [ 6 ] =
mr_DrivetrainEv_13_0_0nonContDerivSig6 ;
mr_DrivetrainEv_13_0_0nonContOutputArray [ 7 ] =
mr_DrivetrainEv_13_0_0nonContDerivSig7 ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & cuhiq2he3xv ) ) ; ( void ) memset ( ( ( void * ) & cuhiq2he3xv
) , 0 , sizeof ( cuhiq2he3x ) ) ; { cuhiq2he3xv . przvd0w4hd = BMS_Standby ;
} } { real_T * x = ( real_T * ) & i344fcmwfc1 ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( i344fcmwfc ) ) ; } { void *
dwork = ( void * ) & giqt2tul5wr ; ssSetRootDWork ( rtS , dwork ) ; ( void )
memset ( dwork , 0 , sizeof ( giqt2tul5w ) ) ; } { giqt2tul5wr . o1jqp4wpbb =
38 ; } { static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) &
dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ;
dtInfo . numDataTypes = 45 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ]
; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
EvReferenceApplication_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"EvReferenceApplication" ) ; ssSetPath ( rtS , "EvReferenceApplication" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 1800.0 ) ; ktxb3gprz3 ( rtS ,
mr_DrivetrainEv_13_0_0nonContOutputArray , 0 , 1 , 0 , & ( giqt2tul5wr .
igqkoslatl . rtm ) , & ( giqt2tul5wr . igqkoslatl . rtb ) , & ( giqt2tul5wr .
igqkoslatl . rtdw ) , & ( i344fcmwfc1 . d5katehawv ) , & ( giqt2tul5wr .
igqkoslatl . rtzce ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"EvReferenceApplication/Passenger Car/Drivetrain" , 0 , 1 ) ;
slsaCacheDWorkDataForSimTargetOP ( rtS , & ( giqt2tul5wr . igqkoslatl . rtm )
, sizeof ( giqt2tul5wr . igqkoslatl . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "EvReferenceApplication/Passenger Car/Drivetrain" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } lst5ppimoh ( rtS , 0 ,
2 , 0 , & ( giqt2tul5wr . isvmsyyglk . rtm ) , & ( giqt2tul5wr . isvmsyyglk .
rtb ) , & ( giqt2tul5wr . isvmsyyglk . rtdw ) , & ( i344fcmwfc1 . nq1lsnuhqu
) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery"
, 1 , 375 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( giqt2tul5wr .
isvmsyyglk . rtm ) , sizeof ( giqt2tul5wr . isvmsyyglk . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Battery"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } oaswkbqw52 ( rtS ,
0 , 2 , 0 , & ( giqt2tul5wr . m03tkajmio . rtm ) , & ( giqt2tul5wr .
m03tkajmio . rtb ) , & ( giqt2tul5wr . m03tkajmio . rtdw ) , & ( i344fcmwfc1
. huiflaoyhi ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor/MotGenEvMapped"
, 2 , 376 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( giqt2tul5wr .
m03tkajmio . rtm ) , sizeof ( giqt2tul5wr . m03tkajmio . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
 "EvReferenceApplication/Passenger Car/Electric Plant/Powertrain Blockset/Motor/MotGenEvMapped"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } gwi0ifigyi ( rtS ,
3 , 5 , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
, 3 , - 1 ) ; { char_T * tempStr = rtwCAPI_EncodePath (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Battery Management System (BMS)"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 3 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } io04qbfqhk ( rtS ,
2 , 0 , & ( giqt2tul5wr . ekun4ztdyk . rtm ) , & ( giqt2tul5wr . ekun4ztdyk .
rtb ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Powertrain Control Module (PCM)"
, 4 , - 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( giqt2tul5wr .
ekun4ztdyk . rtm ) , sizeof ( giqt2tul5wr . ekun4ztdyk . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
 "EvReferenceApplication/Controllers/Powertrain Control Module (PCM)/Powertrain Control Module (PCM)"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 4 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; ssSetPeriodicContStateIndices ( rtS , c4o1mv5dv4m ) ;
( void ) memset ( ( void * ) c4o1mv5dv4m , 0 , 1 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , jh4nyoq4g4o ) ; ( void ) memset ( ( void
* ) jh4nyoq4g4o , 0 , 2 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 379 ] ; static real_T absTol [ 379 ] = { 1.0E-6 , 1.0E-6
, 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ; static uint8_T absTolControl [ 379 ] =
{ 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 0U , 0U , 0U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 379 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 379 ] ; static uint8_T zcAttributes [ 268 ]
= { ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( ZC_EVENT_ALL_DN ) , ( ZC_EVENT_ALL ) } ; static uint8_T
zcEvents [ 268 ] = { ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP )
, ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 | ZC_EVENT_ALL_UP ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 | ZC_EVENT_ALL_DN ) , (
0x40 | ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [
2 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & cuhiq2he3xv . kpz0fum4jx ) ,
( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & cuhiq2he3xv .
kktsse5wr3 ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 379 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.01 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 2 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "daessc" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetMassMatrixNzMax ( rtS , 148 ) ; ssSetModelMassMatrix ( rtS ,
MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 148 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 268 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverZcEventsVector ( rtS , zcEvents ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 264 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; { int_T
* ir = gkywbalvxlx . ir ; int_T * jc = gkywbalvxlx . jc ; real_T * pr =
gkywbalvxlx . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS ,
jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0 ,
148 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 379 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 148 * sizeof (
real_T ) ) ; } } { ZCSigState * zc = ( ZCSigState * ) & dhvysoxui2f ;
ssSetPrevZCSigState ( rtS , zc ) ; } { dhvysoxui2f . n0lzdvijfj =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . e2n4gdj5ec = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . hs43nmcco4 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . hc2canjhaa =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ctujfpab3l = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . a34xui2ho4 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . pz24kquzmt =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . oz4ibzx5ab = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . mjm1poariv = UNINITIALIZED_ZCSIG ; dhvysoxui2f . i5e2fisbst =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . nzztp1l05c = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . agnxyrzryh = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ecsfseuolx =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . lhu3ticdzs = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ffzl34n31n = UNINITIALIZED_ZCSIG ; dhvysoxui2f . gerdnmbrvl =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . i4ofbhr0xw = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . p4lvghny5u = UNINITIALIZED_ZCSIG ; dhvysoxui2f . euvl4orz1d =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . f2paaaqjfl = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . pvqigtbx0g = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ockvzf2mda =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . eaxei4zyqb = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . kflltywth3 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . cbotyhovp1 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . elznoxncos = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . pjsp21qwgh = UNINITIALIZED_ZCSIG ; dhvysoxui2f . jyxogojchn =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . jpzxatphqx = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . kycvjz52ix = UNINITIALIZED_ZCSIG ; dhvysoxui2f . etehhrssq1 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . cm4pvlvzgs = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ayu2ehltlz = UNINITIALIZED_ZCSIG ; dhvysoxui2f . fhfbbhnuxm =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . lzkbj5yhy0 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . gpop3ueobq = UNINITIALIZED_ZCSIG ; dhvysoxui2f . cqkjwsvg3a =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . l2hpahp51v = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . fbsp44rklu = UNINITIALIZED_ZCSIG ; dhvysoxui2f . jtqsdhphup =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . g13oyzgcex = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . mtgm2v24eh = UNINITIALIZED_ZCSIG ; dhvysoxui2f . cpzy54r4jp =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ilymheexmj = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . lnbpe3ljzq = UNINITIALIZED_ZCSIG ; dhvysoxui2f . kmu4gsgf2x =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . dwxliflalp = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . pmi1wsgzj0 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ocwtlynnan =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . gbwhgljvem = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . dyd5xmrdbt = UNINITIALIZED_ZCSIG ; dhvysoxui2f . e2l3e3lbbq =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . cdag0lzmu2 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . bli41mwdby = UNINITIALIZED_ZCSIG ; dhvysoxui2f . n05f1cysxc =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . gllo5o3byj = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . nlaodpmaix = UNINITIALIZED_ZCSIG ; dhvysoxui2f . kvxr0gskcm =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . hkvsk5xppk = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . jxqwqf3b25 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ppv0m0iguk =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . lw4ubjpvq4 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . lduatckny5 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . cg4e5lb03e =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . oy0tufyk4m = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . lnovcb3uqc = UNINITIALIZED_ZCSIG ; dhvysoxui2f . jcidijbxvc =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . i1o4eq3p00 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . cfvonofcc0 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . dvf4ijy1xo =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . fu0fky2sdm = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . kwkodqrik1 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . lygmjqdrue =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . brdemhs3cn = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . mib5a5djhe = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ky32pvocaf =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . clmqnrnxia = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . mgyboehngf = UNINITIALIZED_ZCSIG ; dhvysoxui2f . kbwszysom5 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . js4s11f0jh = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . akiuxf0enb = UNINITIALIZED_ZCSIG ; dhvysoxui2f . b1dl4fqpax =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . firzypvmuf = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . cjki4nvpgb = UNINITIALIZED_ZCSIG ; dhvysoxui2f . muvqtsf3qq =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . katrxg2idu = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ofp3uzy3yx = UNINITIALIZED_ZCSIG ; dhvysoxui2f . euhhh3vavs =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . a0vbcfh1lj = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . dyozprzx3e = UNINITIALIZED_ZCSIG ; dhvysoxui2f . mkrhaqrcn3 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . leco2phobk = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . d2352ksec3 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . psqyieys05 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . htrcqp5ebl = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . hitslydl3j = UNINITIALIZED_ZCSIG ; dhvysoxui2f . kxns3bwsiq =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . c003u3cmd0 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . im2hhlrr0i = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ln34dtuvpc =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . hwvb00kybf = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . nn5z53thmw = UNINITIALIZED_ZCSIG ; dhvysoxui2f . nkh3lz0elc =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . a2gzcatkpx = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . dzzpeps021 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . gnfzqoty4t =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . erdeyzdhh5 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . f1aur4nrhz = UNINITIALIZED_ZCSIG ; dhvysoxui2f . l35egn53hh =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . amenclvryp = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . pbh54tq2h3 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . iq2sk2tigr =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . m1kheyuexn = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ehehmd0bmy = UNINITIALIZED_ZCSIG ; dhvysoxui2f . no101bmnji =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . aguo3rypu3 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ikqcbhc3jp = UNINITIALIZED_ZCSIG ; dhvysoxui2f . f3v3stdbud =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ab4hgq5rok = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . cn5l1vacyt = UNINITIALIZED_ZCSIG ; dhvysoxui2f . i2q24hpkmg =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . lu0dbltad5 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . e3wodqbpzo = UNINITIALIZED_ZCSIG ; dhvysoxui2f . pxdhahezql =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . epikwk4sbt = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . dunnsxl50c = UNINITIALIZED_ZCSIG ; dhvysoxui2f . jc31milum3 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . akk5j4aul3 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . o5nfyaq55g = UNINITIALIZED_ZCSIG ; dhvysoxui2f . aluzqkv5go =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . k5n2hpmbo3 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . fzwtltz33t = UNINITIALIZED_ZCSIG ; dhvysoxui2f . jmi5uxutds =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . n0dtfqkvyj = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . pxtyz1x0k3 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . py5jhsk2vj =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . gepfkjdvng = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . cp1xt0vmex = UNINITIALIZED_ZCSIG ; dhvysoxui2f . iaascaoj0a =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . orwxq3kr1q = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . bonehnrb02 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . br2ntw1wxk =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . cwkvg5vzy1 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . mxmazqshkm = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ixzquuc2mp =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . oqhvfhvwuk = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ldibkmevye = UNINITIALIZED_ZCSIG ; dhvysoxui2f . g04zn1n3ha =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . bufjpeyojr = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . dgsid3eyvm = UNINITIALIZED_ZCSIG ; dhvysoxui2f . iyu5zite3e =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . hbvbea4lnw = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ftb1ykdkcf = UNINITIALIZED_ZCSIG ; dhvysoxui2f . c2g01ycvbp =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . k5yhwkjuvj = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . eomxh2jqle = UNINITIALIZED_ZCSIG ; dhvysoxui2f . kg20drdaeo =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ok5zc1sylo = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . hoaabnutwa = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ig2wscwlvl =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ogexgbejnf = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . inaw41fynp = UNINITIALIZED_ZCSIG ; dhvysoxui2f . aze5fw5dod =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . kdzqpcs2tr = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . k2twkzks1a = UNINITIALIZED_ZCSIG ; dhvysoxui2f . jsgdnjnzis =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ntbmyulzjh = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . pqrqottc0v = UNINITIALIZED_ZCSIG ; dhvysoxui2f . d1epwx2h2v =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . d1tld1bnu5 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . f5bfxnt12t = UNINITIALIZED_ZCSIG ; dhvysoxui2f . hcqaetjcog =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . f1iroubtd2 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . iibzpn50ay = UNINITIALIZED_ZCSIG ; dhvysoxui2f . hwbp3fspur =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . bpt4t4rpgz = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . llhsogl4eu = UNINITIALIZED_ZCSIG ; dhvysoxui2f . myfesskccc =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . o0shnujuad = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ncgfaz22mt = UNINITIALIZED_ZCSIG ; dhvysoxui2f . kaiuteu0af =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . m4pqtgix0d = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . kj041vibgz = UNINITIALIZED_ZCSIG ; dhvysoxui2f . myjlnf0nqq =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ch5iwdquw0 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . dzub5cxnhp = UNINITIALIZED_ZCSIG ; dhvysoxui2f . fv5lxjj1zk =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . njyfcnmmhp = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . jacjnrwotz = UNINITIALIZED_ZCSIG ; dhvysoxui2f . ft3djbtrtp =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ozjggje0xq = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . k4nyamle31 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . l5apxknjhp =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . lzodqrdjtt = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ic3kfkqixa = UNINITIALIZED_ZCSIG ; dhvysoxui2f . pydnbfas0y =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . fcjq2gshrw = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . ey20zq1nli = UNINITIALIZED_ZCSIG ; dhvysoxui2f . cl2y0akwen =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . mjdixnvfpt = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . kfz4deqseb = UNINITIALIZED_ZCSIG ; dhvysoxui2f . kom2sd3ade =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . o525u0srjr = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . lknadojzxb = UNINITIALIZED_ZCSIG ; dhvysoxui2f . btiwhrehlt =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . fxjy0vtxu2 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . prtvwccnlg = UNINITIALIZED_ZCSIG ; dhvysoxui2f . bgxabgzpsp =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . co5axmhfwa = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . bizivml0n4 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . jr4ozifmld =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . dhgxepvzrx = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . f2fyqopjl4 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . i0z5ddgrdi =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . jb12dywhur = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . lydeqejlom = UNINITIALIZED_ZCSIG ; dhvysoxui2f . nm5quwa155 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . egkkxop4oo = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . c4sz4frdzi = UNINITIALIZED_ZCSIG ; dhvysoxui2f . higzkibjpn =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . fuox4febrd = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . gtqoq45krz = UNINITIALIZED_ZCSIG ; dhvysoxui2f . gas35pt0u4 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . fpi2l1uk0b = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . hemqvp5sg0 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . fhd0ll3gx3 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . btyvj13pdg = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . egty4vnksm = UNINITIALIZED_ZCSIG ; dhvysoxui2f . mxyvqgjjfb =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ax4mdktvnp = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . iy5igha3cu = UNINITIALIZED_ZCSIG ; dhvysoxui2f . gan4ylkwcx =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . jxww5xovxs = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . gleie3rnct = UNINITIALIZED_ZCSIG ; dhvysoxui2f . gc0ulnm5ro =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . cbhh0trgpw = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . c5favkn3t2 = UNINITIALIZED_ZCSIG ; dhvysoxui2f . njt0zclwzp =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ctppfej0wy = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . lph4qqpste = UNINITIALIZED_ZCSIG ; dhvysoxui2f . al5hwkuots =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . pai2qrtcxu = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . eaxtgefojm = UNINITIALIZED_ZCSIG ; dhvysoxui2f . gvof0az0fc =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . ffx5aeuxik = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . le5jwvj0br = UNINITIALIZED_ZCSIG ; dhvysoxui2f . cymiaki0cz =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . lmchu2vc43 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . et1k2k4v2t = UNINITIALIZED_ZCSIG ; dhvysoxui2f . lhp5uiih1n =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . o33w0rbp14 = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . jow3opnakx = UNINITIALIZED_ZCSIG ; dhvysoxui2f . muluz0qk23 =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . kstonlfqbi = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . o2rvlfsrqd = UNINITIALIZED_ZCSIG ; dhvysoxui2f . cmu0w0lv4l =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . jpxyj2xhvh = UNINITIALIZED_ZCSIG ;
dhvysoxui2f . jlsmyoxrwi = UNINITIALIZED_ZCSIG ; dhvysoxui2f . dmu1u1m53k =
UNINITIALIZED_ZCSIG ; dhvysoxui2f . gniztpakwo = UNINITIALIZED_ZCSIG ; }
ssSetChecksumVal ( rtS , 0 , 1678879199U ) ; ssSetChecksumVal ( rtS , 1 ,
458555119U ) ; ssSetChecksumVal ( rtS , 2 , 784608942U ) ; ssSetChecksumVal (
rtS , 3 , 1656421520U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 15 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = ( sysRanDType * ) & giqt2tul5wr . g30v1kdrwbo . iqmyanxtr1
; systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [ 4 ] = & rtAlwaysEnabled ;
systemRan [ 5 ] = ( sysRanDType * ) & giqt2tul5wr . ciwxigmsq2 . iqmyanxtr1 ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
systemRan [ 14 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_EvReferenceApplication_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_EvReferenceApplication_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_EvReferenceApplication_SetDWork ) ;
konn1m5pjf . FirstOrderHold_ErrTol = rtInf ; konn1m5pjf .
FirstOrderHold_ErrTol_llzlt0txj1 = rtInf ; rt_RapidReadMatFileAndUpdateParams
( rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID6 ( tid ) ; }
