#include "ne_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_sys_struct.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_tduf_p.h"
#include "EvReferenceApplication_2ea1fbef_1_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_externals.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EvReferenceApplication_2ea1fbef_1_ds_tduf_p ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mTDUF_P ; out
. mNumCol = 4ULL ; out . mNumRow = 337ULL ; out . mJc [ 0 ] = 0 ; out . mJc [
1 ] = 11 ; out . mJc [ 2 ] = 27 ; out . mJc [ 3 ] = 30 ; out . mJc [ 4 ] = 33
; out . mIr [ 0 ] = 49 ; out . mIr [ 1 ] = 63 ; out . mIr [ 2 ] = 64 ; out .
mIr [ 3 ] = 229 ; out . mIr [ 4 ] = 230 ; out . mIr [ 5 ] = 231 ; out . mIr [
6 ] = 232 ; out . mIr [ 7 ] = 237 ; out . mIr [ 8 ] = 238 ; out . mIr [ 9 ] =
296 ; out . mIr [ 10 ] = 298 ; out . mIr [ 11 ] = 0 ; out . mIr [ 12 ] = 1 ;
out . mIr [ 13 ] = 3 ; out . mIr [ 14 ] = 4 ; out . mIr [ 15 ] = 6 ; out .
mIr [ 16 ] = 7 ; out . mIr [ 17 ] = 9 ; out . mIr [ 18 ] = 10 ; out . mIr [
19 ] = 68 ; out . mIr [ 20 ] = 69 ; out . mIr [ 21 ] = 75 ; out . mIr [ 22 ]
= 76 ; out . mIr [ 23 ] = 83 ; out . mIr [ 24 ] = 84 ; out . mIr [ 25 ] = 91
; out . mIr [ 26 ] = 92 ; out . mIr [ 27 ] = 42 ; out . mIr [ 28 ] = 318 ;
out . mIr [ 29 ] = 319 ; out . mIr [ 30 ] = 285 ; out . mIr [ 31 ] = 290 ;
out . mIr [ 32 ] = 295 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
