#include "ne_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_sys_struct.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_duf.h"
#include "EvReferenceApplication_2ea1fbef_1_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_externals.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EvReferenceApplication_2ea1fbef_1_ds_duf ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t492 , NeDsMethodOutput * t493 ) {
ETTSf3049b48 ac_efOut ; ETTSf3049b48 bb_efOut ; ETTSf3049b48 bc_efOut ;
ETTSf3049b48 c_efOut ; ETTSf3049b48 d_efOut ; ETTSf3049b48 db_efOut ;
ETTSf3049b48 dc_efOut ; ETTSf3049b48 ec_efOut ; ETTSf3049b48 efOut ;
ETTSf3049b48 f_efOut ; ETTSf3049b48 fb_efOut ; ETTSf3049b48 g_efOut ;
ETTSf3049b48 gb_efOut ; ETTSf3049b48 i_efOut ; ETTSf3049b48 ib_efOut ;
ETTSf3049b48 j_efOut ; ETTSf3049b48 jc_efOut ; ETTSf3049b48 kb_efOut ;
ETTSf3049b48 l_efOut ; ETTSf3049b48 lb_efOut ; ETTSf3049b48 m_efOut ;
ETTSf3049b48 mc_efOut ; ETTSf3049b48 nb_efOut ; ETTSf3049b48 o_efOut ;
ETTSf3049b48 ob_efOut ; ETTSf3049b48 oc_efOut ; ETTSf3049b48 pc_efOut ;
ETTSf3049b48 q_efOut ; ETTSf3049b48 qb_efOut ; ETTSf3049b48 rb_efOut ;
ETTSf3049b48 s_efOut ; ETTSf3049b48 t17 ; ETTSf3049b48 t18 ; ETTSf3049b48 t28
; ETTSf3049b48 t30 ; ETTSf3049b48 t32 ; ETTSf3049b48 t33 ; ETTSf3049b48 t34 ;
ETTSf3049b48 t36 ; ETTSf3049b48 t37 ; ETTSf3049b48 t_efOut ; ETTSf3049b48
tb_efOut ; ETTSf3049b48 ub_efOut ; ETTSf3049b48 v_efOut ; ETTSf3049b48
wb_efOut ; ETTSf3049b48 x_efOut ; ETTSf3049b48 xb_efOut ; ETTSf3049b48
y_efOut ; PmRealVector out ; real_T X [ 337 ] ; real_T t231 [ 27 ] ; real_T
t261 [ 12 ] ; real_T t260 [ 10 ] ; real_T nonscalar22 [ 7 ] ; real_T
nonscalar32 [ 6 ] ; real_T nonscalar33 [ 6 ] ; real_T nonscalar27 [ 5 ] ;
real_T nonscalar28 [ 5 ] ; real_T nonscalar14 [ 4 ] ; real_T nonscalar15 [ 4
] ; real_T nonscalar23 [ 3 ] ; real_T nonscalar12 [ 2 ] ; real_T nonscalar13
[ 2 ] ; real_T nonscalar16 [ 2 ] ; real_T nonscalar17 [ 2 ] ; real_T ab_efOut
[ 1 ] ; real_T b_efOut [ 1 ] ; real_T cb_efOut [ 1 ] ; real_T cc_efOut [ 1 ]
; real_T e_efOut [ 1 ] ; real_T eb_efOut [ 1 ] ; real_T fc_efOut [ 1 ] ;
real_T gc_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T hb_efOut [ 1 ] ; real_T
hc_efOut [ 1 ] ; real_T ic_efOut [ 1 ] ; real_T jb_efOut [ 1 ] ; real_T
k_efOut [ 1 ] ; real_T kc_efOut [ 1 ] ; real_T lc_efOut [ 1 ] ; real_T
mb_efOut [ 1 ] ; real_T n_efOut [ 1 ] ; real_T nc_efOut [ 1 ] ; real_T
p_efOut [ 1 ] ; real_T pb_efOut [ 1 ] ; real_T qc_efOut [ 1 ] ; real_T
r_efOut [ 1 ] ; real_T sb_efOut [ 1 ] ; real_T t217 [ 1 ] ; real_T u_efOut [
1 ] ; real_T vb_efOut [ 1 ] ; real_T w_efOut [ 1 ] ; real_T yb_efOut [ 1 ] ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo655 ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 ;
real_T Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 ;
real_T U_idx_0 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
intermediate_der1171 ; real_T intermediate_der1215 ; real_T
intermediate_der1259 ; real_T intermediate_der3861 ; real_T
intermediate_der3878 ; real_T intermediate_der3911 ; real_T intrm_sf_mf_587 ;
real_T t254_idx_0 ; real_T t268 ; real_T t289 ; real_T t290 ; real_T t291 ;
real_T t300 ; real_T t304 ; real_T t306 ; real_T t307 ; real_T t308 ; real_T
t309 ; real_T t310 ; real_T t311 ; real_T t312 ; real_T t313 ; real_T t314 ;
real_T t315 ; real_T t317 ; real_T t318 ; real_T t319 ; real_T t320 ; real_T
t323 ; real_T t325 ; real_T t328 ; real_T t329 ; real_T t330 ; real_T t331 ;
real_T t332 ; real_T t333 ; real_T t336 ; real_T t338 ; real_T t340 ; real_T
t341 ; real_T t342 ; real_T t345 ; real_T t346 ; real_T t347 ; real_T t349 ;
real_T t350 ; real_T t397 ; real_T t412 ; real_T t416 ; real_T t422 ; real_T
t427 ; real_T t472 ; real_T t474 ; real_T t477 ; real_T t483 ; real_T t485 ;
real_T t490 ; real_T t491 ; uint64_T t169 [ 1 ] ; uint64_T t172 [ 1 ] ;
uint64_T t223 [ 1 ] ; uint64_T t41 [ 1 ] ; uint64_T t81 [ 1 ] ; uint64_T t265
; int32_T M [ 246 ] ; int32_T b ; for ( b = 0 ; b < 246 ; b ++ ) { M [ b ] =
t492 -> mM . mX [ b ] ; } U_idx_0 = t492 -> mU . mX [ 0 ] ; U_idx_2 = t492 ->
mU . mX [ 2 ] ; U_idx_3 = t492 -> mU . mX [ 3 ] ; for ( b = 0 ; b < 337 ; b
++ ) { X [ b ] = t492 -> mX . mX [ b ] ; } out = t493 -> mDUF ; nonscalar12 [
0 ] = 0.00048105637508093717 ; nonscalar12 [ 1 ] = 1.0E-9 ; nonscalar13 [ 0 ]
= 0.002 ; nonscalar13 [ 1 ] = 0.003 ; nonscalar14 [ 0 ] = 1.0E-9 ;
nonscalar14 [ 1 ] = 0.00048105637508093717 ; nonscalar14 [ 2 ] =
0.00048105637508093717 ; nonscalar14 [ 3 ] = 1.0E-9 ; nonscalar15 [ 0 ] =
0.002 ; nonscalar15 [ 1 ] = 0.003 ; nonscalar15 [ 2 ] = 0.006 ; nonscalar15 [
3 ] = 0.007 ; nonscalar16 [ 0 ] = 1.0E-9 ; nonscalar16 [ 1 ] =
0.00048105637508093717 ; nonscalar17 [ 0 ] = 0.006 ; nonscalar17 [ 1 ] =
0.007 ; nonscalar22 [ 0 ] = 0.0 ; nonscalar22 [ 1 ] = 0.1 ; nonscalar22 [ 2 ]
= 0.25 ; nonscalar22 [ 3 ] = 0.5 ; nonscalar22 [ 4 ] = 0.75 ; nonscalar22 [ 5
] = 0.9 ; nonscalar22 [ 6 ] = 1.0 ; nonscalar23 [ 0 ] = 278.15 ; nonscalar23
[ 1 ] = 293.15 ; nonscalar23 [ 2 ] = 313.15 ; nonscalar27 [ 0 ] = - 0.1 ;
nonscalar27 [ 1 ] = - 0.03 ; nonscalar27 [ 2 ] = 0.0 ; nonscalar27 [ 3 ] =
0.03 ; nonscalar27 [ 4 ] = 0.1 ; nonscalar28 [ 0 ] = - 8.0 ; nonscalar28 [ 1
] = - 0.1 ; nonscalar28 [ 2 ] = 0.0 ; nonscalar28 [ 3 ] = 0.1 ; nonscalar28 [
4 ] = 8.0 ; nonscalar32 [ 0 ] = - 8000.0 ; nonscalar32 [ 1 ] = - 8.0 ;
nonscalar32 [ 2 ] = - 0.1 ; nonscalar32 [ 3 ] = 0.1 ; nonscalar32 [ 4 ] = 8.0
; nonscalar32 [ 5 ] = 8000.0 ; nonscalar33 [ 0 ] = - 5000.0 ; nonscalar33 [ 1
] = - 5.0 ; nonscalar33 [ 2 ] = - 0.1 ; nonscalar33 [ 3 ] = 0.1 ; nonscalar33
[ 4 ] = 5.0 ; nonscalar33 [ 5 ] = 5000.0 ; t289 = pmf_sqrt ( ( X [ 63ULL ] >=
1.0 ? X [ 63ULL ] : 1.0 ) * 402.52454417952305 ) ; if ( X [ 63ULL ] >= 1.0 )
{ t290 = pmf_log ( X [ 63ULL ] ) ; } else { t290 = X [ 63ULL ] - 1.0 ; } if (
X [ 64ULL ] / 1.0E-5 >= 1.0 ) { t291 = pmf_log ( X [ 64ULL ] / 1.0E-5 ) ; }
else { t291 = X [ 64ULL ] / 1.0E-5 - 1.0 ; } t483 = pmf_exp ( ( t291 -
5.6594822157596214 ) - t290 ) ; t427 = U_idx_0 / 0.15 ; t290 = t427 / ( t483
== 0.0 ? 1.0E-16 : t483 ) * ( t427 / ( t483 == 0.0 ? 1.0E-16 : t483 ) ) / 2.0
* 0.001 + ( ( X [ 63ULL ] - 293.15 ) + 420.0 ) ; t291 = t289 * t483 * 0.00015
; t289 = pmf_sqrt ( U_idx_0 * U_idx_0 + t291 * t291 ) ; t485 = pmf_sqrt ( ( X
[ 65ULL ] >= 1.0 ? X [ 65ULL ] : 1.0 ) * 402.52454417952305 ) ; if ( X [
65ULL ] >= 1.0 ) { t474 = pmf_log ( X [ 65ULL ] ) ; } else { t474 = X [ 65ULL
] - 1.0 ; } if ( X [ 66ULL ] / 1.0E-5 >= 1.0 ) { t477 = pmf_log ( X [ 66ULL ]
/ 1.0E-5 ) ; } else { t477 = X [ 66ULL ] / 1.0E-5 - 1.0 ; } t490 = pmf_exp (
( t477 - 5.6594822157596214 ) - t474 ) ; t474 = - U_idx_0 / 0.15 / ( t490 ==
0.0 ? 1.0E-16 : t490 ) * ( - U_idx_0 / 0.15 / ( t490 == 0.0 ? 1.0E-16 : t490
) ) / 2.0 * 0.001 + ( ( X [ 65ULL ] - 293.15 ) + 420.0 ) ; t477 = t485 * t490
* 0.00015 ; t485 = pmf_sqrt ( U_idx_0 * U_idx_0 + t477 * t477 ) ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 = U_idx_3 *
0.001 ; t422 = X [ 266ULL ] * - 0.5 + U_idx_0 * 0.5 ; t416 = X [ 274ULL ] *
0.5 + X [ 275ULL ] * - 0.5 ; t217 [ 0ULL ] =
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 ; t223 [ 0 ]
= 2ULL ; t41 [ 0 ] = 1ULL ; tlu2_linear_nearest_prelookup ( & efOut . mField0
[ 0ULL ] , & efOut . mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , &
nonscalar13 [ 0ULL ] , & t217 [ 0ULL ] , & t223 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t37 = efOut ; tlu2_1d_linear_nearest_value ( & b_efOut [ 0ULL ] , & t37 .
mField0 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , & nonscalar12 [ 0ULL ] , & t223
[ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = b_efOut [ 0 ] ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo655 = t254_idx_0
; Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 =
t254_idx_0 / 0.00049087385212340522 ; t217 [ 0ULL ] = X [ 303ULL ] ; t169 [ 0
] = 20ULL ; tlu2_linear_linear_prelookup ( & c_efOut . mField0 [ 0ULL ] , &
c_efOut . mField1 [ 0ULL ] , & c_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ]
, & t41 [ 0ULL ] ) ; t34 = c_efOut ; t217 [ 0ULL ] = X [ 235ULL ] ; t172 [ 0
] = 19ULL ; tlu2_linear_linear_prelookup ( & d_efOut . mField0 [ 0ULL ] , &
d_efOut . mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t217 [ 0ULL ] , & t172 [ 0ULL ]
, & t41 [ 0ULL ] ) ; t33 = d_efOut ; tlu2_2d_linear_linear_value ( & e_efOut
[ 0ULL ] , & t34 . mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t33 .
mField0 [ 0ULL ] , & t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField4 , & t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t254_idx_0 = e_efOut [ 0 ] ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 = t254_idx_0
; t217 [ 0ULL ] = X [ 305ULL ] ; tlu2_linear_linear_prelookup ( & f_efOut .
mField0 [ 0ULL ] , & f_efOut . mField1 [ 0ULL ] , & f_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [
0ULL ] , & t41 [ 0ULL ] ) ; t30 = f_efOut ; t217 [ 0ULL ] = X [ 296ULL ] ;
tlu2_linear_linear_prelookup ( & g_efOut . mField0 [ 0ULL ] , & g_efOut .
mField1 [ 0ULL ] , & g_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t34 = g_efOut ; tlu2_2d_linear_linear_value ( & h_efOut [ 0ULL ] , & t30 .
mField0 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t34 . mField0 [ 0ULL ] , &
t34 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = h_efOut [ 0
] ; Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 =
t254_idx_0 ; t217 [ 0ULL ] = X [ 303ULL ] ; tlu2_linear_nearest_prelookup ( &
i_efOut . mField0 [ 0ULL ] , & i_efOut . mField1 [ 0ULL ] , & i_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [
0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ; t34 = i_efOut ; t217 [ 0ULL ] =
X [ 235ULL ] ; tlu2_linear_nearest_prelookup ( & j_efOut . mField0 [ 0ULL ] ,
& j_efOut . mField1 [ 0ULL ] , & j_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField2 , & t217 [ 0ULL ] , & t172 [ 0ULL ]
, & t41 [ 0ULL ] ) ; t32 = j_efOut ; tlu2_2d_linear_nearest_value ( & k_efOut
[ 0ULL ] , & t34 . mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField9 , & t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t254_idx_0 = k_efOut [ 0 ] ; intermediate_der1171 = t254_idx_0 ; t217 [ 0ULL
] = X [ 305ULL ] ; tlu2_linear_nearest_prelookup ( & l_efOut . mField0 [ 0ULL
] , & l_efOut . mField1 [ 0ULL ] , & l_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ]
, & t41 [ 0ULL ] ) ; t34 = l_efOut ; t217 [ 0ULL ] = X [ 296ULL ] ;
tlu2_linear_nearest_prelookup ( & m_efOut . mField0 [ 0ULL ] , & m_efOut .
mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t36 = m_efOut ; tlu2_2d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t34 .
mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , &
t36 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = n_efOut [ 0
] ; intermediate_der1171 = ( intermediate_der1171 + t254_idx_0 ) / 2.0 ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 = X [ 235ULL
] - X [ 296ULL ] ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 = (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 ) / 2.0 ;
t309 = Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo655 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 * 2.0 ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 =
intermediate_der1171 * intermediate_der1171 * 0.78539816339744828 / ( t309 ==
0.0 ? 1.0E-16 : t309 ) * 293.87755102040813 ; t310 = pmf_sqrt ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.51 ) -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.7 ; t311
= Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.7 +
pmf_sqrt ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.51 ) ;
t306 = t310 / ( t311 == 0.0 ? 1.0E-16 : t311 ) ; t217 [ 0ULL ] =
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 ; t81 [ 0 ] =
4ULL ; tlu2_linear_nearest_prelookup ( & o_efOut . mField0 [ 0ULL ] , &
o_efOut . mField1 [ 0ULL ] , & o_efOut . mField2 [ 0ULL ] , & nonscalar15 [
0ULL ] , & t217 [ 0ULL ] , & t81 [ 0ULL ] , & t41 [ 0ULL ] ) ; t28 = o_efOut
; tlu2_1d_linear_nearest_value ( & p_efOut [ 0ULL ] , & t28 . mField0 [ 0ULL
] , & t28 . mField2 [ 0ULL ] , & nonscalar14 [ 0ULL ] , & t81 [ 0ULL ] , &
t41 [ 0ULL ] ) ; t254_idx_0 = p_efOut [ 0 ] ; t307 = t254_idx_0 ; t308 =
t254_idx_0 / 0.00049087385212340522 ; t217 [ 0ULL ] = X [ 306ULL ] ;
tlu2_linear_linear_prelookup ( & q_efOut . mField0 [ 0ULL ] , & q_efOut .
mField1 [ 0ULL ] , & q_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t34 = q_efOut ; tlu2_2d_linear_linear_value ( & r_efOut [ 0ULL ] , & t34 .
mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , &
t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = r_efOut [ 0
] ; t309 = t254_idx_0 ; t217 [ 0ULL ] = X [ 308ULL ] ;
tlu2_linear_linear_prelookup ( & s_efOut . mField0 [ 0ULL ] , & s_efOut .
mField1 [ 0ULL ] , & s_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t30 = s_efOut ; t217 [ 0ULL ] = X [ 258ULL ] ; tlu2_linear_linear_prelookup (
& t_efOut . mField0 [ 0ULL ] , & t_efOut . mField1 [ 0ULL ] , & t_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t217 [
0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t36 = t_efOut ;
tlu2_2d_linear_linear_value ( & u_efOut [ 0ULL ] , & t30 . mField0 [ 0ULL ] ,
& t30 . mField2 [ 0ULL ] , & t36 . mField0 [ 0ULL ] , & t36 . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t169 [ 0ULL ] , & t172 [
0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = u_efOut [ 0 ] ; t310 = t254_idx_0 ;
t217 [ 0ULL ] = X [ 306ULL ] ; tlu2_linear_nearest_prelookup ( & v_efOut .
mField0 [ 0ULL ] , & v_efOut . mField1 [ 0ULL ] , & v_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [
0ULL ] , & t41 [ 0ULL ] ) ; t36 = v_efOut ; tlu2_2d_linear_nearest_value ( &
w_efOut [ 0ULL ] , & t36 . mField0 [ 0ULL ] , & t36 . mField2 [ 0ULL ] , &
t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField9 , & t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t254_idx_0 = w_efOut [ 0 ] ; intermediate_der1215 = t254_idx_0 ; t217 [ 0ULL
] = X [ 308ULL ] ; tlu2_linear_nearest_prelookup ( & x_efOut . mField0 [ 0ULL
] , & x_efOut . mField1 [ 0ULL ] , & x_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ]
, & t41 [ 0ULL ] ) ; t34 = x_efOut ; t217 [ 0ULL ] = X [ 258ULL ] ;
tlu2_linear_nearest_prelookup ( & y_efOut . mField0 [ 0ULL ] , & y_efOut .
mField1 [ 0ULL ] , & y_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t17 = y_efOut ; tlu2_2d_linear_nearest_value ( & ab_efOut [ 0ULL ] , & t34 .
mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = ab_efOut [
0 ] ; intermediate_der1215 = ( intermediate_der1215 + t254_idx_0 ) / 2.0 ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 = X [ 235ULL
] - X [ 258ULL ] ; t309 = ( t309 + t310 ) / 2.0 ; t315 = t307 * t309 * 2.0 ;
t310 = intermediate_der1215 * intermediate_der1215 * 0.78539816339744828 / (
t315 == 0.0 ? 1.0E-16 : t315 ) * 293.87755102040813 ; intermediate_der1259 =
pmf_sqrt ( 1.0 - t308 * t308 * 0.51 ) - t308 * 0.7 ; t317 = t308 * 0.7 +
pmf_sqrt ( 1.0 - t308 * t308 * 0.51 ) ; t312 = intermediate_der1259 / ( t317
== 0.0 ? 1.0E-16 : t317 ) ; t217 [ 0ULL ] =
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 ;
tlu2_linear_nearest_prelookup ( & bb_efOut . mField0 [ 0ULL ] , & bb_efOut .
mField1 [ 0ULL ] , & bb_efOut . mField2 [ 0ULL ] , & nonscalar17 [ 0ULL ] , &
t217 [ 0ULL ] , & t223 [ 0ULL ] , & t41 [ 0ULL ] ) ; t36 = bb_efOut ;
tlu2_1d_linear_nearest_value ( & cb_efOut [ 0ULL ] , & t36 . mField0 [ 0ULL ]
, & t36 . mField2 [ 0ULL ] , & nonscalar16 [ 0ULL ] , & t223 [ 0ULL ] , & t41
[ 0ULL ] ) ; t254_idx_0 = cb_efOut [ 0 ] ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 = t254_idx_0
; t313 = t254_idx_0 / 0.00049087385212340522 ; t217 [ 0ULL ] = X [ 309ULL ] ;
tlu2_linear_linear_prelookup ( & db_efOut . mField0 [ 0ULL ] , & db_efOut .
mField1 [ 0ULL ] , & db_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t34 = db_efOut ; tlu2_2d_linear_linear_value ( & eb_efOut [ 0ULL ] , & t34 .
mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , &
t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = eb_efOut [
0 ] ; t314 = t254_idx_0 ; t217 [ 0ULL ] = X [ 311ULL ] ;
tlu2_linear_linear_prelookup ( & fb_efOut . mField0 [ 0ULL ] , & fb_efOut .
mField1 [ 0ULL ] , & fb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t30 = fb_efOut ; t217 [ 0ULL ] = X [ 250ULL ] ; tlu2_linear_linear_prelookup
( & gb_efOut . mField0 [ 0ULL ] , & gb_efOut . mField1 [ 0ULL ] , & gb_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t217 [
0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t34 = gb_efOut ;
tlu2_2d_linear_linear_value ( & hb_efOut [ 0ULL ] , & t30 . mField0 [ 0ULL ]
, & t30 . mField2 [ 0ULL ] , & t34 . mField0 [ 0ULL ] , & t34 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t169 [ 0ULL ] , &
t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = hb_efOut [ 0 ] ; t315 =
t254_idx_0 ; t217 [ 0ULL ] = X [ 309ULL ] ; tlu2_linear_nearest_prelookup ( &
ib_efOut . mField0 [ 0ULL ] , & ib_efOut . mField1 [ 0ULL ] , & ib_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [
0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ; t18 = ib_efOut ;
tlu2_2d_linear_nearest_value ( & jb_efOut [ 0ULL ] , & t18 . mField0 [ 0ULL ]
, & t18 . mField2 [ 0ULL ] , & t32 . mField0 [ 0ULL ] , & t32 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t169 [ 0ULL ] , &
t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = jb_efOut [ 0 ] ;
intermediate_der1259 = t254_idx_0 ; t217 [ 0ULL ] = X [ 311ULL ] ;
tlu2_linear_nearest_prelookup ( & kb_efOut . mField0 [ 0ULL ] , & kb_efOut .
mField1 [ 0ULL ] , & kb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t30 = kb_efOut ; t217 [ 0ULL ] = X [ 250ULL ] ; tlu2_linear_nearest_prelookup
( & lb_efOut . mField0 [ 0ULL ] , & lb_efOut . mField1 [ 0ULL ] , & lb_efOut
. mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t217 [
0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t34 = lb_efOut ;
tlu2_2d_linear_nearest_value ( & mb_efOut [ 0ULL ] , & t30 . mField0 [ 0ULL ]
, & t30 . mField2 [ 0ULL ] , & t34 . mField0 [ 0ULL ] , & t34 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField9 , & t169 [ 0ULL ] , &
t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = mb_efOut [ 0 ] ;
intermediate_der1259 = ( intermediate_der1259 + t254_idx_0 ) / 2.0 ;
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 = X [ 235ULL
] - X [ 250ULL ] ; t314 = ( t314 + t315 ) / 2.0 ; U_idx_3 =
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 * t314 * 2.0
; t315 = intermediate_der1259 * intermediate_der1259 * 0.78539816339744828 /
( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) * 293.87755102040813 ;
intermediate_der3878 = pmf_sqrt ( 1.0 - t313 * t313 * 0.51 ) - t313 * 0.7 ;
t323 = t313 * 0.7 + pmf_sqrt ( 1.0 - t313 * t313 * 0.51 ) ; t318 =
intermediate_der3878 / ( t323 == 0.0 ? 1.0E-16 : t323 ) ; t319 = - U_idx_0 /
0.15 / ( t483 == 0.0 ? 1.0E-16 : t483 ) * ( - U_idx_0 / 0.15 / ( t483 == 0.0
? 1.0E-16 : t483 ) ) / 2.0 * 0.001 + ( ( X [ 63ULL ] - 293.15 ) + 420.0 ) ;
t217 [ 0ULL ] = X [ 326ULL ] ; tlu2_linear_linear_prelookup ( & nb_efOut .
mField0 [ 0ULL ] , & nb_efOut . mField1 [ 0ULL ] , & nb_efOut . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t217 [ 0ULL ] , &
t169 [ 0ULL ] , & t41 [ 0ULL ] ) ; t32 = nb_efOut ; t217 [ 0ULL ] = X [ 46ULL
] ; tlu2_linear_linear_prelookup ( & ob_efOut . mField0 [ 0ULL ] , & ob_efOut
. mField1 [ 0ULL ] , & ob_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * )
( LC ) ) -> mField2 , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t33 = ob_efOut ; tlu2_2d_linear_linear_value ( & pb_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , &
t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = pb_efOut [
0 ] ; intermediate_der3861 = t254_idx_0 ; t217 [ 0ULL ] = X [ 328ULL ] ;
tlu2_linear_linear_prelookup ( & qb_efOut . mField0 [ 0ULL ] , & qb_efOut .
mField1 [ 0ULL ] , & qb_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField1 , & t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t30 = qb_efOut ; t217 [ 0ULL ] = X [ 13ULL ] ; tlu2_linear_linear_prelookup (
& rb_efOut . mField0 [ 0ULL ] , & rb_efOut . mField1 [ 0ULL ] , & rb_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t217 [
0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t34 = rb_efOut ;
tlu2_2d_linear_linear_value ( & sb_efOut [ 0ULL ] , & t30 . mField0 [ 0ULL ]
, & t30 . mField2 [ 0ULL ] , & t34 . mField0 [ 0ULL ] , & t34 . mField2 [
0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t169 [ 0ULL ] , &
t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = sb_efOut [ 0 ] ;
intermediate_der3861 = ( intermediate_der3861 + t254_idx_0 ) / 2.0 ; t217 [
0ULL ] = X [ 80ULL ] ; t169 [ 0 ] = 7ULL ; tlu2_linear_nearest_prelookup ( &
tb_efOut . mField0 [ 0ULL ] , & tb_efOut . mField1 [ 0ULL ] , & tb_efOut .
mField2 [ 0ULL ] , & nonscalar22 [ 0ULL ] , & t217 [ 0ULL ] , & t169 [ 0ULL ]
, & t41 [ 0ULL ] ) ; t34 = tb_efOut ; t217 [ 0ULL ] = X [ 0ULL ] ; t172 [ 0 ]
= 3ULL ; tlu2_linear_nearest_prelookup ( & ub_efOut . mField0 [ 0ULL ] , &
ub_efOut . mField1 [ 0ULL ] , & ub_efOut . mField2 [ 0ULL ] , & nonscalar23 [
0ULL ] , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t17 =
ub_efOut ; tlu2_2d_linear_nearest_value ( & vb_efOut [ 0ULL ] , & t34 .
mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t17 . mField0 [ 0ULL ] , &
t17 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = vb_efOut [
0 ] ; t491 = t254_idx_0 ; t217 [ 0ULL ] = X [ 88ULL ] ;
tlu2_linear_nearest_prelookup ( & wb_efOut . mField0 [ 0ULL ] , & wb_efOut .
mField1 [ 0ULL ] , & wb_efOut . mField2 [ 0ULL ] , & nonscalar22 [ 0ULL ] , &
t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ; t34 = wb_efOut ; t217 [
0ULL ] = X [ 1ULL ] ; tlu2_linear_nearest_prelookup ( & xb_efOut . mField0 [
0ULL ] , & xb_efOut . mField1 [ 0ULL ] , & xb_efOut . mField2 [ 0ULL ] , &
nonscalar23 [ 0ULL ] , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t18 = xb_efOut ; tlu2_2d_linear_nearest_value ( & yb_efOut [ 0ULL ] , & t34 .
mField0 [ 0ULL ] , & t34 . mField2 [ 0ULL ] , & t18 . mField0 [ 0ULL ] , &
t18 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = yb_efOut [
0 ] ; t300 = t254_idx_0 ; t217 [ 0ULL ] = X [ 96ULL ] ;
tlu2_linear_nearest_prelookup ( & ac_efOut . mField0 [ 0ULL ] , & ac_efOut .
mField1 [ 0ULL ] , & ac_efOut . mField2 [ 0ULL ] , & nonscalar22 [ 0ULL ] , &
t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ; t32 = ac_efOut ; t217 [
0ULL ] = X [ 3ULL ] ; tlu2_linear_nearest_prelookup ( & bc_efOut . mField0 [
0ULL ] , & bc_efOut . mField1 [ 0ULL ] , & bc_efOut . mField2 [ 0ULL ] , &
nonscalar23 [ 0ULL ] , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t34 = bc_efOut ; tlu2_2d_linear_nearest_value ( & cc_efOut [ 0ULL ] , & t32 .
mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & t34 . mField0 [ 0ULL ] , &
t34 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = cc_efOut [
0 ] ; t304 = t254_idx_0 ; t217 [ 0ULL ] = X [ 103ULL ] ;
tlu2_linear_nearest_prelookup ( & dc_efOut . mField0 [ 0ULL ] , & dc_efOut .
mField1 [ 0ULL ] , & dc_efOut . mField2 [ 0ULL ] , & nonscalar22 [ 0ULL ] , &
t217 [ 0ULL ] , & t169 [ 0ULL ] , & t41 [ 0ULL ] ) ; t17 = dc_efOut ; t217 [
0ULL ] = X [ 2ULL ] ; tlu2_linear_nearest_prelookup ( & ec_efOut . mField0 [
0ULL ] , & ec_efOut . mField1 [ 0ULL ] , & ec_efOut . mField2 [ 0ULL ] , &
nonscalar23 [ 0ULL ] , & t217 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ;
t33 = ec_efOut ; tlu2_2d_linear_nearest_value ( & fc_efOut [ 0ULL ] , & t17 .
mField0 [ 0ULL ] , & t17 . mField2 [ 0ULL ] , & t33 . mField0 [ 0ULL ] , &
t33 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField12 , &
t169 [ 0ULL ] , & t172 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = fc_efOut [
0 ] ; intrm_sf_mf_587 = t254_idx_0 ; t331 = ( U_idx_0 - X [ 266ULL ] ) / 2.0
* 4.0 ; t320 = tanh ( t331 / 1.0E-6 ) ; intermediate_der3878 = ( t320 + 1.0 )
* X [ 270ULL ] / 2.0 + ( 1.0 - t320 ) * X [ 269ULL ] / 2.0 ; t320 = ( 1.0 -
t320 ) * X [ 271ULL ] / 2.0 + ( t320 + 1.0 ) * X [ 269ULL ] / 2.0 ; t325 =
pmf_sqrt ( X [ 65ULL ] * 402.52454417952305 ) ; intermediate_der3911 = X [
270ULL ] * t325 * 0.00015 ; t325 = pmf_sqrt ( U_idx_0 * U_idx_0 +
intermediate_der3911 * intermediate_der3911 ) ; t328 = ( U_idx_0 / ( t325 ==
0.0 ? 1.0E-16 : t325 ) + 1.0 ) / 2.0 ; t329 = ( 1.0 - U_idx_0 / ( t325 == 0.0
? 1.0E-16 : t325 ) ) / 2.0 ; t330 = pmf_sqrt ( t422 * t422 + 1.0E-12 ) *
1000.0 ; t332 = pmf_sqrt ( t416 * t416 + 1.0E-12 ) * X [ 272ULL ] ; t338 =
U_idx_0 / 0.15 * ( U_idx_0 / 0.15 ) ; t341 = ( ( real_T ) ( M [ 184ULL ] != 0
) * 2.0 - 1.0 ) * X [ 270ULL ] ; t333 = t338 / ( X [ 270ULL ] == 0.0 ?
1.0E-16 : X [ 270ULL ] ) / ( t341 == 0.0 ? 1.0E-16 : t341 ) / 2.0 * 0.001 + (
( X [ 65ULL ] - 293.15 ) + 420.0 ) ; t346 = ( ( real_T ) ( M [ 195ULL ] != 0
) * 2.0 - 1.0 ) * X [ 269ULL ] ; t472 = t338 / ( X [ 269ULL ] == 0.0 ?
1.0E-16 : X [ 269ULL ] ) / ( t346 == 0.0 ? 1.0E-16 : t346 ) / 2.0 * 0.001 + (
X [ 51ULL ] + 126.84999999999997 ) ; t427 = t427 / ( t483 == 0.0 ? 1.0E-16 :
t483 ) * ( 6.666666666666667 / ( t483 == 0.0 ? 1.0E-16 : t483 ) ) * 2.0 / 2.0
* 0.001 ; t268 = pmf_sqrt ( U_idx_0 * U_idx_0 + t291 * t291 ) * 2.0 ; t291 =
1.0 / ( t268 == 0.0 ? 1.0E-16 : t268 ) * U_idx_0 * 2.0 ; t490 = - U_idx_0 /
0.15 / ( t490 == 0.0 ? 1.0E-16 : t490 ) * ( - 6.666666666666667 / ( t490 ==
0.0 ? 1.0E-16 : t490 ) ) * 2.0 / 2.0 * 0.001 ; U_idx_3 = pmf_sqrt ( U_idx_0 *
U_idx_0 + t477 * t477 ) * 2.0 ; t477 = 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 :
U_idx_3 ) * U_idx_0 * 2.0 ; tlu2_1d_linear_nearest_value ( & gc_efOut [ 0ULL
] , & t37 . mField1 [ 0ULL ] , & t37 . mField2 [ 0ULL ] , & nonscalar12 [
0ULL ] , & t223 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = gc_efOut [ 0 ] ;
t338 = t254_idx_0 * 0.001 ; t340 = t338 / 0.00049087385212340522 ; t397 =
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo655 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo655 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 * 4.0 ;
intermediate_der1171 = - ( intermediate_der1171 * intermediate_der1171 *
0.78539816339744828 ) / ( t397 == 0.0 ? 1.0E-16 : t397 ) *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 * t338 *
587.75510204081627 ; t345 = pmf_sqrt ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.51 ) *
2.0 ; U_idx_3 = - ( pmf_sqrt ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.51 ) -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.7 ) ;
t397 = ( Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
0.7 + pmf_sqrt ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.51 ) ) *
( Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.7 +
pmf_sqrt ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * 0.51 ) ) ;
t342 = ( - ( Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641
* t340 * 1.02 ) * ( 1.0 / ( t345 == 0.0 ? 1.0E-16 : t345 ) ) + t340 * 0.7 ) *
( U_idx_3 / ( t397 == 0.0 ? 1.0E-16 : t397 ) ) + ( - (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * t340 * 1.02
) * ( 1.0 / ( t345 == 0.0 ? 1.0E-16 : t345 ) ) - t340 * 0.7 ) / ( t311 == 0.0
? 1.0E-16 : t311 ) ; tlu2_1d_linear_nearest_value ( & hc_efOut [ 0ULL ] , &
t28 . mField1 [ 0ULL ] , & t28 . mField2 [ 0ULL ] , & nonscalar14 [ 0ULL ] ,
& t81 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = hc_efOut [ 0 ] ; t345 =
t254_idx_0 * 0.001 ; t311 = t345 / 0.00049087385212340522 ; t397 = t307 *
t307 * t309 * t309 * 4.0 ; intermediate_der1215 = - ( intermediate_der1215 *
intermediate_der1215 * 0.78539816339744828 ) / ( t397 == 0.0 ? 1.0E-16 : t397
) * t309 * t345 * 587.75510204081627 ; t349 = pmf_sqrt ( 1.0 - t308 * t308 *
0.51 ) * 2.0 ; U_idx_3 = - ( pmf_sqrt ( 1.0 - t308 * t308 * 0.51 ) - t308 *
0.7 ) ; t397 = ( t308 * 0.7 + pmf_sqrt ( 1.0 - t308 * t308 * 0.51 ) ) * (
t308 * 0.7 + pmf_sqrt ( 1.0 - t308 * t308 * 0.51 ) ) ; t347 = ( - ( t308 *
t311 * 1.02 ) * ( 1.0 / ( t349 == 0.0 ? 1.0E-16 : t349 ) ) + t311 * 0.7 ) * (
U_idx_3 / ( t397 == 0.0 ? 1.0E-16 : t397 ) ) + ( - ( t308 * t311 * 1.02 ) * (
1.0 / ( t349 == 0.0 ? 1.0E-16 : t349 ) ) - t311 * 0.7 ) / ( t317 == 0.0 ?
1.0E-16 : t317 ) ; tlu2_1d_linear_nearest_value ( & ic_efOut [ 0ULL ] , & t36
. mField1 [ 0ULL ] , & t36 . mField2 [ 0ULL ] , & nonscalar16 [ 0ULL ] , &
t223 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = ic_efOut [ 0 ] ; t349 =
t254_idx_0 * 0.001 ; t336 = t349 / 0.00049087385212340522 ; t397 =
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 * t314 * t314
* 4.0 ; intermediate_der1259 = - ( intermediate_der1259 *
intermediate_der1259 * 0.78539816339744828 ) / ( t397 == 0.0 ? 1.0E-16 : t397
) * t314 * t349 * 587.75510204081627 ; t350 = pmf_sqrt ( 1.0 - t313 * t313 *
0.51 ) * 2.0 ; U_idx_3 = - ( pmf_sqrt ( 1.0 - t313 * t313 * 0.51 ) - t313 *
0.7 ) ; t397 = ( t313 * 0.7 + pmf_sqrt ( 1.0 - t313 * t313 * 0.51 ) ) * (
t313 * 0.7 + pmf_sqrt ( 1.0 - t313 * t313 * 0.51 ) ) ; t317 = ( - ( t313 *
t336 * 1.02 ) * ( 1.0 / ( t350 == 0.0 ? 1.0E-16 : t350 ) ) + t336 * 0.7 ) * (
U_idx_3 / ( t397 == 0.0 ? 1.0E-16 : t397 ) ) + ( - ( t313 * t336 * 1.02 ) * (
1.0 / ( t350 == 0.0 ? 1.0E-16 : t350 ) ) - t336 * 0.7 ) / ( t323 == 0.0 ?
1.0E-16 : t323 ) ; t483 = - U_idx_0 / 0.15 / ( t483 == 0.0 ? 1.0E-16 : t483 )
* ( - 6.666666666666667 / ( t483 == 0.0 ? 1.0E-16 : t483 ) ) * 2.0 / 2.0 *
0.001 ; t350 = 1.0 / ( t268 == 0.0 ? 1.0E-16 : t268 ) * U_idx_0 * 2.0 ;
U_idx_3 = U_idx_2 * 0.10471975511965977 * 4.0 ; t323 = cosh ( U_idx_3 /
0.020943951023931952 ) * cosh ( U_idx_3 / 0.020943951023931952 ) ; t412 =
20.0 * ( 1.0 / ( t323 == 0.0 ? 1.0E-16 : t323 ) ) ; t268 =
intermediate_der3861 * 0.10471975511965977 * 6.3661977236758125E-6 ; U_idx_3
= cosh ( t331 / 1.0E-6 ) * cosh ( t331 / 1.0E-6 ) ; intermediate_der3861 =
2.0E+6 * ( 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) ; t217 [ 0ULL ] =
U_idx_0 ; t223 [ 0 ] = 5ULL ; tlu2_linear_linear_prelookup ( & jc_efOut .
mField0 [ 0ULL ] , & jc_efOut . mField1 [ 0ULL ] , & jc_efOut . mField2 [
0ULL ] , & nonscalar28 [ 0ULL ] , & t217 [ 0ULL ] , & t223 [ 0ULL ] , & t41 [
0ULL ] ) ; t32 = jc_efOut ; tlu2_1d_linear_linear_value ( & kc_efOut [ 0ULL ]
, & t32 . mField0 [ 0ULL ] , & t32 . mField2 [ 0ULL ] , & nonscalar27 [ 0ULL
] , & t223 [ 0ULL ] , & t41 [ 0ULL ] ) ; t254_idx_0 = kc_efOut [ 0 ] ;
tlu2_1d_linear_linear_value ( & lc_efOut [ 0ULL ] , & t32 . mField1 [ 0ULL ]
, & t32 . mField2 [ 0ULL ] , & nonscalar27 [ 0ULL ] , & t223 [ 0ULL ] , & t41
[ 0ULL ] ) ; U_idx_3 = lc_efOut [ 0 ] ; t397 = intermediate_der3878 *
intermediate_der3878 ; U_idx_2 = - ( t254_idx_0 * 1.2043280930847855 ) / (
t397 == 0.0 ? 1.0E-16 : t397 ) * ( X [ 270ULL ] * intermediate_der3861 / 2.0
+ - intermediate_der3861 * X [ 269ULL ] / 2.0 ) + U_idx_3 *
1.2043280930847855 / ( intermediate_der3878 == 0.0 ? 1.0E-16 :
intermediate_der3878 ) ; t217 [ 0ULL ] = X [ 266ULL ] ;
tlu2_linear_linear_prelookup ( & mc_efOut . mField0 [ 0ULL ] , & mc_efOut .
mField1 [ 0ULL ] , & mc_efOut . mField2 [ 0ULL ] , & nonscalar28 [ 0ULL ] , &
t217 [ 0ULL ] , & t223 [ 0ULL ] , & t41 [ 0ULL ] ) ; t34 = mc_efOut ;
tlu2_1d_linear_linear_value ( & nc_efOut [ 0ULL ] , & t34 . mField0 [ 0ULL ]
, & t34 . mField2 [ 0ULL ] , & nonscalar27 [ 0ULL ] , & t223 [ 0ULL ] , & t41
[ 0ULL ] ) ; t254_idx_0 = nc_efOut [ 0 ] ; t397 = t320 * t320 ; t320 = - (
t254_idx_0 * 1.2043280930847855 ) / ( t397 == 0.0 ? 1.0E-16 : t397 ) * ( -
intermediate_der3861 * X [ 271ULL ] / 2.0 + X [ 269ULL ] *
intermediate_der3861 / 2.0 ) / 2.0 ; t331 = pmf_sqrt ( U_idx_0 * U_idx_0 +
intermediate_der3911 * intermediate_der3911 ) * 2.0 ; intermediate_der3911 =
1.0 / ( t331 == 0.0 ? 1.0E-16 : t331 ) * U_idx_0 * 2.0 ; t397 = t325 * t325 ;
U_idx_3 = ( - U_idx_0 / ( t397 == 0.0 ? 1.0E-16 : t397 ) *
intermediate_der3911 + 1.0 / ( t325 == 0.0 ? 1.0E-16 : t325 ) ) / 2.0 ; t325
= - ( - U_idx_0 / ( t397 == 0.0 ? 1.0E-16 : t397 ) * intermediate_der3911 +
1.0 / ( t325 == 0.0 ? 1.0E-16 : t325 ) ) / 2.0 ; t254_idx_0 = pmf_sqrt ( t422
* t422 + 1.0E-12 ) * 2.0 ; t323 = 1.0 / ( t254_idx_0 == 0.0 ? 1.0E-16 :
t254_idx_0 ) * 1000.0 * t422 * 0.5 * 2.0 ; t254_idx_0 = U_idx_0 / 0.15 *
6.666666666666667 * 2.0 ; t331 = ( fabs ( X [ 13ULL ] - X [ 46ULL ] ) *
0.065735530263064557 + 0.05 ) * t412 ; t217 [ 0ULL ] = t422 ; t223 [ 0 ] =
6ULL ; tlu2_linear_nearest_prelookup ( & oc_efOut . mField0 [ 0ULL ] , &
oc_efOut . mField1 [ 0ULL ] , & oc_efOut . mField2 [ 0ULL ] , & nonscalar32 [
0ULL ] , & t217 [ 0ULL ] , & t223 [ 0ULL ] , & t41 [ 0ULL ] ) ; t30 =
oc_efOut ; t217 [ 0ULL ] = t416 ; tlu2_linear_nearest_prelookup ( & pc_efOut
. mField0 [ 0ULL ] , & pc_efOut . mField1 [ 0ULL ] , & pc_efOut . mField2 [
0ULL ] , & nonscalar33 [ 0ULL ] , & t217 [ 0ULL ] , & t223 [ 0ULL ] , & t41 [
0ULL ] ) ; t34 = pc_efOut ; tlu2_2d_linear_nearest_value ( & qc_efOut [ 0ULL
] , & t30 . mField1 [ 0ULL ] , & t30 . mField2 [ 0ULL ] , & t34 . mField0 [
0ULL ] , & t34 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField16 , & t223 [ 0ULL ] , & t223 [ 0ULL ] , & t41 [ 0ULL ] ) ; t217 [ 0 ]
= qc_efOut [ 0 ] ; t422 = t289 * t289 ; t260 [ 0ULL ] = ( - X [ 67ULL ] / (
t422 == 0.0 ? 1.0E-16 : t422 ) * t291 - ( ( ( - U_idx_0 / ( t422 == 0.0 ?
1.0E-16 : t422 ) * t291 + 1.0 / ( t289 == 0.0 ? 1.0E-16 : t289 ) ) / 2.0 *
t290 + ( U_idx_0 / ( t289 == 0.0 ? 1.0E-16 : t289 ) + 1.0 ) / 2.0 * t427 ) -
- ( - U_idx_0 / ( t422 == 0.0 ? 1.0E-16 : t422 ) * t291 + 1.0 / ( t289 == 0.0
? 1.0E-16 : t289 ) ) / 2.0 * X [ 68ULL ] ) ) / 6994.09581828601 ; t416 = t485
* t485 ; t260 [ 1ULL ] = ( X [ 67ULL ] / ( t416 == 0.0 ? 1.0E-16 : t416 ) *
t477 - ( ( ( U_idx_0 / ( t416 == 0.0 ? 1.0E-16 : t416 ) * t477 + - 1.0 / (
t485 == 0.0 ? 1.0E-16 : t485 ) ) / 2.0 * t474 + ( - U_idx_0 / ( t485 == 0.0 ?
1.0E-16 : t485 ) + 1.0 ) / 2.0 * t490 ) - - ( U_idx_0 / ( t416 == 0.0 ?
1.0E-16 : t416 ) * t477 + - 1.0 / ( t485 == 0.0 ? 1.0E-16 : t485 ) ) / 2.0 *
X [ 68ULL ] ) ) / 6994.09581828601 ; t260 [ 2ULL ] = - ( U_idx_2 / 2.0 ) ;
t260 [ 3ULL ] = - t320 ; t260 [ 4ULL ] = - ( X [ 65ULL ] *
intermediate_der3861 / 2.0 + - intermediate_der3861 * X [ 215ULL ] / 2.0 ) ;
t260 [ 5ULL ] = ( - X [ 67ULL ] / ( t397 == 0.0 ? 1.0E-16 : t397 ) *
intermediate_der3911 - ( ( U_idx_3 * t333 + t254_idx_0 / ( X [ 270ULL ] ==
0.0 ? 1.0E-16 : X [ 270ULL ] ) / ( t341 == 0.0 ? 1.0E-16 : t341 ) / 2.0 *
0.001 * t328 ) - ( t325 * t472 + t254_idx_0 / ( X [ 269ULL ] == 0.0 ? 1.0E-16
: X [ 269ULL ] ) / ( t346 == 0.0 ? 1.0E-16 : t346 ) / 2.0 * 0.001 * t329 ) )
) / 6769.3532890882816 ; t260 [ 6ULL ] = - ( t217 [ 0ULL ] * 0.5 ) ; t260 [
7ULL ] = - ( t330 >= t332 ? 0.0 : t323 ) ; t472 = t289 * t289 ; t260 [ 8ULL ]
= ( X [ 67ULL ] / ( t472 == 0.0 ? 1.0E-16 : t472 ) * t350 - ( ( ( U_idx_0 / (
t472 == 0.0 ? 1.0E-16 : t472 ) * t350 + - 1.0 / ( t289 == 0.0 ? 1.0E-16 :
t289 ) ) / 2.0 * t319 + ( - U_idx_0 / ( t289 == 0.0 ? 1.0E-16 : t289 ) + 1.0
) / 2.0 * t483 ) - - ( U_idx_0 / ( t472 == 0.0 ? 1.0E-16 : t472 ) * t350 + -
1.0 / ( t289 == 0.0 ? 1.0E-16 : t289 ) ) / 2.0 * X [ 312ULL ] ) ) /
6994.09581828601 ; t260 [ 9ULL ] = - ( - U_idx_0 / 0.15 / 1.164600958231254 *
- 5.7244214162348914 * 2.0 / 2.0 * 0.001 ) ; t261 [ 0ULL ] = - ( M [ 0ULL ]
!= 0 ? 0.0 : - 1.0 ) ; t261 [ 1ULL ] = - ( M [ 1ULL ] != 0 ? 0.0 : - 1.0 ) ;
t261 [ 2ULL ] = - ( M [ 111ULL ] != 0 ? 0.0 : - 1.0 ) ; t261 [ 3ULL ] = - ( M
[ 173ULL ] != 0 ? 0.0 : - 1.0 ) ; t261 [ 4ULL ] = - t491 ; t261 [ 5ULL ] = -
( ( ( ( - X [ 4ULL ] + X [ 77ULL ] * 0.052631578947368418 ) + X [ 78ULL ] * -
0.052631578947368363 ) + X [ 79ULL ] * 1.0526315789473684 ) * 0.001 ) ; t261
[ 6ULL ] = - t300 ; t261 [ 7ULL ] = - ( - X [ 87ULL ] * - 0.001 ) ; t261 [
8ULL ] = - t304 ; t261 [ 9ULL ] = - ( - X [ 95ULL ] * - 0.001 ) ; t261 [
10ULL ] = - intrm_sf_mf_587 ; t261 [ 11ULL ] = - ( - X [ 102ULL ] * - 0.001 )
; U_idx_3 = pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 * 1.0E+10 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 ) * pmf_sqrt
( pmf_sqrt ( Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656
* Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 * 1.0E+10 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 ) ) ; t483 =
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 * 2.0 ; t472
= ( 1.0 - Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 ) * t306 ;
t254_idx_0 = pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) ) ; t474 =
pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 * 1.0E+10 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 ) ) *
pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 * 1.0E+10 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 ) ) ; t477 =
pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 * 1.0E+10 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 ) ) ; t491 =
( 1.0 - Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 ) * ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 ) * t306 *
t306 ; t289 = - ( ( ( -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 / ( t474 ==
0.0 ? 1.0E-16 : t474 ) * pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) )
* ( 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo657 *
intermediate_der1171 * 0.5 + ( ( 1.0 -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 ) * t342 + -
( Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo641 * t340 *
2.0 ) * t306 ) * (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 / ( t477 ==
0.0 ? 1.0E-16 : t477 ) ) * ( - (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo661 * 2.0 ) / (
t491 == 0.0 ? 1.0E-16 : t491 ) ) * ( 1.0 / ( t254_idx_0 == 0.0 ? 1.0E-16 :
t254_idx_0 ) ) * 0.5 ) *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo655 * 0.7 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo656 / ( t477 ==
0.0 ? 1.0E-16 : t477 ) * pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) )
* t338 * 0.7 ) * 100000.0 ) ; U_idx_3 = pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 * 1.0E+10 +
t310 * t310 ) * pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 * 1.0E+10 +
t310 * t310 ) ) ; t483 = t309 * 2.0 ; t472 = ( 1.0 - t308 * t308 ) * t312 ;
t254_idx_0 = pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) ) ; t474 =
pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 * 1.0E+10 +
t310 * t310 ) ) * pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 * 1.0E+10 +
t310 * t310 ) ) ; t477 = pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 * 1.0E+10 +
t310 * t310 ) ) ; t491 = ( 1.0 - t308 * t308 ) * ( 1.0 - t308 * t308 ) * t312
* t312 ; t290 = - ( ( ( -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 / ( t474 ==
0.0 ? 1.0E-16 : t474 ) * pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) )
* ( 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) * t310 *
intermediate_der1215 * 0.5 + ( ( 1.0 - t308 * t308 ) * t347 + - ( t308 * t311
* 2.0 ) * t312 ) * (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677 / ( t477 ==
0.0 ? 1.0E-16 : t477 ) ) * ( - ( t309 * 2.0 ) / ( t491 == 0.0 ? 1.0E-16 :
t491 ) ) * ( 1.0 / ( t254_idx_0 == 0.0 ? 1.0E-16 : t254_idx_0 ) ) * 0.5 ) *
t307 * 0.7 + Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo677
/ ( t477 == 0.0 ? 1.0E-16 : t477 ) * pmf_sqrt ( t483 / ( t472 == 0.0 ?
1.0E-16 : t472 ) ) * t345 * 0.7 ) * 100000.0 ) ; U_idx_3 = pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 * 1.0E+10 +
t315 * t315 ) * pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 * 1.0E+10 +
t315 * t315 ) ) ; t483 = t314 * 2.0 ; t472 = ( 1.0 - t313 * t313 ) * t318 ;
t254_idx_0 = pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) ) ; t474 =
pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 * 1.0E+10 +
t315 * t315 ) ) * pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 * 1.0E+10 +
t315 * t315 ) ) ; t477 = pmf_sqrt ( pmf_sqrt (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 * 1.0E+10 +
t315 * t315 ) ) ; t491 = ( 1.0 - t313 * t313 ) * ( 1.0 - t313 * t313 ) * t318
* t318 ; t291 = - ( ( ( -
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 / ( t474 ==
0.0 ? 1.0E-16 : t474 ) * pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) )
* ( 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) ) * t315 *
intermediate_der1259 * 0.5 + ( ( 1.0 - t313 * t313 ) * t317 + - ( t313 * t336
* 2.0 ) * t318 ) * (
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 / ( t477 ==
0.0 ? 1.0E-16 : t477 ) ) * ( - ( t314 * 2.0 ) / ( t491 == 0.0 ? 1.0E-16 :
t491 ) ) * ( 1.0 / ( t254_idx_0 == 0.0 ? 1.0E-16 : t254_idx_0 ) ) * 0.5 ) *
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo697 * 0.7 +
Passenger_Car_Electric_Plant_Powertrain_Blockset_Battery_Coo698 / ( t477 ==
0.0 ? 1.0E-16 : t477 ) * pmf_sqrt ( t483 / ( t472 == 0.0 ? 1.0E-16 : t472 ) )
* t349 * 0.7 ) * 100000.0 ) ; for ( t265 = 0ULL ; t265 < 10ULL ; t265 ++ ) {
t231 [ t265 ] = t260 [ t265 ] ; } for ( t265 = 0ULL ; t265 < 12ULL ; t265 ++
) { t231 [ t265 + 10ULL ] = t261 [ t265 ] ; } out . mX [ 0 ] = t231 [ 0 ] ;
out . mX [ 1 ] = t231 [ 1 ] ; out . mX [ 2 ] = t231 [ 2 ] ; out . mX [ 3 ] =
t231 [ 3 ] ; out . mX [ 4 ] = t231 [ 4 ] ; out . mX [ 5 ] = t231 [ 5 ] ; out
. mX [ 6 ] = t231 [ 6 ] ; out . mX [ 7 ] = t231 [ 7 ] ; out . mX [ 8 ] = t231
[ 8 ] ; out . mX [ 9 ] = t231 [ 9 ] ; out . mX [ 10 ] = t231 [ 10 ] ; out .
mX [ 11 ] = t231 [ 11 ] ; out . mX [ 12 ] = t231 [ 12 ] ; out . mX [ 13 ] =
t231 [ 13 ] ; out . mX [ 14 ] = t231 [ 14 ] ; out . mX [ 15 ] = t231 [ 15 ] ;
out . mX [ 16 ] = t231 [ 16 ] ; out . mX [ 17 ] = t231 [ 17 ] ; out . mX [ 18
] = t231 [ 18 ] ; out . mX [ 19 ] = t231 [ 19 ] ; out . mX [ 20 ] = t231 [ 20
] ; out . mX [ 21 ] = t231 [ 21 ] ; out . mX [ 22 ] = - t268 ; out . mX [ 23
] = - t331 / 9.5492965855137211 ; out . mX [ 24 ] = t289 ; out . mX [ 25 ] =
t290 ; out . mX [ 26 ] = t291 ; ( void ) LC ; ( void ) t493 ; return 0 ; }
