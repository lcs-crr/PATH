#include "ne_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_sys_struct.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_dnf.h"
#include "EvReferenceApplication_2ea1fbef_1_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_externals.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EvReferenceApplication_2ea1fbef_1_ds_dnf ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static real_T
_cg_const_1 [ 102 ] = { - 0.10471975511965977 , - 1.0 , - 1.0 , 1.2 , 1.2 ,
1.01325 , - 1.2 , - 1.2 , - 1.01325 , - 1.0 , - 1.0 , - 1.0 , - 1.0 , -
0.99999987245355049 , - 4.6170831467949238 , - 1.0 , - 1.0 , -
4.6170831467949238 , - 1.0 , - 1.0 , - 1.0 , - 1.0 , - 1.0 , - 1.0 , - 1.0 ,
- 1.0 , - 0.99999987245355049 , - 1.0 , - 1.0 , - 1.0 , - 1.0 , - 1.0 , - 1.0
, - 1.0 , - 1.0 , - 1.0 , - 0.3364277180406211 , - 0.3364277180406211 , - 1.0
, - 1.0 , 100.0 , 1.01325 , 1.0 , 1.0 , - 1.0 , - 0.29171242100901268 , -
0.29171242100901268 , 100000.0 , - 0.29171242100901268 , -
0.29171242100901268 , - 0.0046170831467949236 , - 1.0 , - 1.0 , -
0.29171242100901268 , - 0.29171242100901268 , 1.2 , - 0.001 , -
1.026383207819062 , - 1.0 , - 0.29171242100901268 , - 0.29171242100901268 , -
0.0046170831467949236 , - 0.29171242100901268 , - 0.29171242100901268 , -
0.29171242100901268 , - 0.29171242100901268 , - 0.001 , - 0.001 , - 0.001 , -
0.29171242100901268 , - 0.29171242100901268 , - 1.0 , - 0.001 , - 1.0 , -
0.001 , - 1.0 , - 0.29171242100901268 , - 0.29171242100901268 , - 1.0 , -
0.001 , - 1.0 , - 0.001 , - 1026.3832078190621 , - 0.001 , -
0.29171242100901268 , - 0.29171242100901268 , - 0.29171242100901268 , -
0.29171242100901268 , - 1.0 , 1.2 , - 1.0 , 1.0 , - 0.29171242100901268 , -
0.29171242100901268 , - 1.0 , - 0.001 , - 0.29171242100901268 , -
0.29171242100901268 , - 0.29171242100901268 , - 0.29171242100901268 , 1.0 , -
0.18898657718120379 } ; PmRealVector out ; real_T t0 [ 102 ] ; int32_T b ; (
void ) t1 ; ( void ) LC ; out = t2 -> mDNF ; for ( b = 0 ; b < 102 ; b ++ ) {
t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 102 ; b ++ ) { out . mX [
b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }
