#include "ne_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_sys_struct.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_ic.h"
#include "EvReferenceApplication_2ea1fbef_1_ds.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_externals.h"
#include "EvReferenceApplication_2ea1fbef_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T EvReferenceApplication_2ea1fbef_1_ds_ic ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t2 , NeDsMethodOutput * t3 ) { PmRealVector
out ; real_T t0 [ 337 ] ; real_T P_R_idx_0 ; real_T P_R_idx_1 ; real_T
P_R_idx_10 ; real_T P_R_idx_11 ; real_T P_R_idx_12 ; real_T P_R_idx_13 ;
real_T P_R_idx_14 ; real_T P_R_idx_15 ; real_T P_R_idx_16 ; real_T P_R_idx_17
; real_T P_R_idx_18 ; real_T P_R_idx_19 ; real_T P_R_idx_2 ; real_T P_R_idx_3
; real_T P_R_idx_4 ; real_T P_R_idx_5 ; real_T P_R_idx_6 ; real_T P_R_idx_7 ;
real_T P_R_idx_8 ; real_T P_R_idx_9 ; int32_T b ; ( void ) LC ; P_R_idx_0 =
t2 -> mP_R . mX [ 0 ] ; P_R_idx_1 = t2 -> mP_R . mX [ 1 ] ; P_R_idx_2 = t2 ->
mP_R . mX [ 2 ] ; P_R_idx_3 = t2 -> mP_R . mX [ 3 ] ; P_R_idx_4 = t2 -> mP_R
. mX [ 4 ] ; P_R_idx_5 = t2 -> mP_R . mX [ 5 ] ; P_R_idx_6 = t2 -> mP_R . mX
[ 6 ] ; P_R_idx_7 = t2 -> mP_R . mX [ 7 ] ; P_R_idx_8 = t2 -> mP_R . mX [ 8 ]
; P_R_idx_9 = t2 -> mP_R . mX [ 9 ] ; P_R_idx_10 = t2 -> mP_R . mX [ 10 ] ;
P_R_idx_11 = t2 -> mP_R . mX [ 11 ] ; P_R_idx_12 = t2 -> mP_R . mX [ 12 ] ;
P_R_idx_13 = t2 -> mP_R . mX [ 13 ] ; P_R_idx_14 = t2 -> mP_R . mX [ 14 ] ;
P_R_idx_15 = t2 -> mP_R . mX [ 15 ] ; P_R_idx_16 = t2 -> mP_R . mX [ 16 ] ;
P_R_idx_17 = t2 -> mP_R . mX [ 17 ] ; P_R_idx_18 = t2 -> mP_R . mX [ 18 ] ;
P_R_idx_19 = t2 -> mP_R . mX [ 19 ] ; out = t3 -> mIC ; t0 [ 0ULL ] =
P_R_idx_0 ; t0 [ 1ULL ] = P_R_idx_1 ; t0 [ 2ULL ] = P_R_idx_2 ; t0 [ 3ULL ] =
P_R_idx_3 ; t0 [ 4ULL ] = 0.0 ; t0 [ 5ULL ] = 0.0 ; t0 [ 6ULL ] = 0.0 ; t0 [
7ULL ] = 0.0 ; t0 [ 8ULL ] = 0.0 ; t0 [ 9ULL ] = 0.0 ; t0 [ 10ULL ] = 0.0 ;
t0 [ 11ULL ] = 0.0 ; t0 [ 12ULL ] = P_R_idx_4 ; t0 [ 13ULL ] = 1.01325 ; t0 [
14ULL ] = P_R_idx_5 ; t0 [ 15ULL ] = 1.01325 ; t0 [ 16ULL ] = P_R_idx_6 ; t0
[ 17ULL ] = 1.01325 ; t0 [ 18ULL ] = P_R_idx_7 ; t0 [ 19ULL ] = P_R_idx_8 ;
t0 [ 20ULL ] = P_R_idx_9 ; t0 [ 21ULL ] = P_R_idx_10 ; t0 [ 22ULL ] =
P_R_idx_11 ; t0 [ 23ULL ] = P_R_idx_12 ; t0 [ 24ULL ] = P_R_idx_13 ; t0 [
25ULL ] = P_R_idx_14 ; t0 [ 26ULL ] = 1.01325 ; t0 [ 27ULL ] = 303.15 ; t0 [
28ULL ] = 1.01325 ; t0 [ 29ULL ] = 303.15 ; t0 [ 30ULL ] = 1.01325 ; t0 [
31ULL ] = 303.15 ; t0 [ 32ULL ] = 1.01325 ; t0 [ 33ULL ] = 303.15 ; t0 [
34ULL ] = 1.01325 ; t0 [ 35ULL ] = 303.15 ; t0 [ 36ULL ] = 1.01325 ; t0 [
37ULL ] = 303.15 ; t0 [ 38ULL ] = 1.01325 ; t0 [ 39ULL ] = 303.15 ; t0 [
40ULL ] = 1.01325 ; t0 [ 41ULL ] = 303.15 ; t0 [ 42ULL ] = 0.0 ; t0 [ 43ULL ]
= P_R_idx_15 ; t0 [ 44ULL ] = P_R_idx_16 ; t0 [ 45ULL ] = P_R_idx_17 ; t0 [
46ULL ] = 1.01325 ; t0 [ 47ULL ] = 1.01325 ; t0 [ 48ULL ] = 303.15 ; t0 [
49ULL ] = 1.01325 ; t0 [ 50ULL ] = 303.15 ; t0 [ 51ULL ] = 303.15 ; t0 [
52ULL ] = 1.01325 ; t0 [ 53ULL ] = 303.15 ; t0 [ 54ULL ] = 1.01325 ; t0 [
55ULL ] = 1.01325 ; t0 [ 56ULL ] = 303.15 ; t0 [ 57ULL ] = 1.01325 ; t0 [
58ULL ] = 303.15 ; t0 [ 59ULL ] = 1.01325 ; t0 [ 60ULL ] = 303.15 ; t0 [
61ULL ] = P_R_idx_19 * 10.0 ; t0 [ 62ULL ] = 5000.0 ; t0 [ 63ULL ] = 300.0 ;
t0 [ 64ULL ] = 1.0 ; t0 [ 65ULL ] = 300.0 ; t0 [ 66ULL ] = 1.0 ; t0 [ 67ULL ]
= 0.0 ; t0 [ 68ULL ] = 420.0 ; t0 [ 69ULL ] = 0.0 ; t0 [ 70ULL ] = 0.0 ; t0 [
71ULL ] = 0.0 ; t0 [ 72ULL ] = 0.0 ; t0 [ 73ULL ] = 0.0 ; t0 [ 74ULL ] = 0.0
; t0 [ 75ULL ] = 0.0 ; t0 [ 76ULL ] = 0.0 ; t0 [ 77ULL ] = 0.0 ; t0 [ 78ULL ]
= 0.0 ; t0 [ 79ULL ] = 0.0 ; t0 [ 80ULL ] = 1.0 ; t0 [ 81ULL ] = 0.0 ; t0 [
82ULL ] = 111600.0 ; t0 [ 83ULL ] = 0.0 ; t0 [ 84ULL ] = 0.0 ; t0 [ 85ULL ] =
0.0 ; t0 [ 86ULL ] = 0.0 ; t0 [ 87ULL ] = 0.0 ; t0 [ 88ULL ] = 1.0 ; t0 [
89ULL ] = 0.0 ; t0 [ 90ULL ] = 111600.0 ; t0 [ 91ULL ] = 0.0 ; t0 [ 92ULL ] =
0.0 ; t0 [ 93ULL ] = 0.0 ; t0 [ 94ULL ] = 0.0 ; t0 [ 95ULL ] = 0.0 ; t0 [
96ULL ] = 1.0 ; t0 [ 97ULL ] = 0.0 ; t0 [ 98ULL ] = 111600.0 ; t0 [ 99ULL ] =
0.0 ; t0 [ 100ULL ] = 0.0 ; t0 [ 101ULL ] = 0.0 ; t0 [ 102ULL ] = 0.0 ; t0 [
103ULL ] = 1.0 ; t0 [ 104ULL ] = 0.0 ; t0 [ 105ULL ] = 111600.0 ; t0 [ 106ULL
] = 0.0 ; t0 [ 107ULL ] = 0.0 ; t0 [ 108ULL ] = 300.0 ; t0 [ 109ULL ] = 1.0 ;
t0 [ 110ULL ] = 300.0 ; t0 [ 111ULL ] = 1.0 ; t0 [ 112ULL ] = 300.0 ; t0 [
113ULL ] = 300.0 ; t0 [ 114ULL ] = 300.0 ; t0 [ 115ULL ] = 0.0 ; t0 [ 116ULL
] = 0.0 ; t0 [ 117ULL ] = 0.0 ; t0 [ 118ULL ] = 300.0 ; t0 [ 119ULL ] = 0.0 ;
t0 [ 120ULL ] = 85.0 ; t0 [ 121ULL ] = 300.0 ; t0 [ 122ULL ] = 0.0 ; t0 [
123ULL ] = 300.0 ; t0 [ 124ULL ] = 0.0 ; t0 [ 125ULL ] = 998.21 ; t0 [ 126ULL
] = 300.0 ; t0 [ 127ULL ] = 300.0 ; t0 [ 128ULL ] = 300.0 ; t0 [ 129ULL ] =
0.0 ; t0 [ 130ULL ] = 0.0 ; t0 [ 131ULL ] = 0.0 ; t0 [ 132ULL ] = 300.0 ; t0
[ 133ULL ] = 0.0 ; t0 [ 134ULL ] = 85.0 ; t0 [ 135ULL ] = 300.0 ; t0 [ 136ULL
] = 0.0 ; t0 [ 137ULL ] = 300.0 ; t0 [ 138ULL ] = 0.0 ; t0 [ 139ULL ] =
998.21 ; t0 [ 140ULL ] = 300.0 ; t0 [ 141ULL ] = 300.0 ; t0 [ 142ULL ] =
300.0 ; t0 [ 143ULL ] = 0.0 ; t0 [ 144ULL ] = 0.0 ; t0 [ 145ULL ] = 0.0 ; t0
[ 146ULL ] = 0.0 ; t0 [ 147ULL ] = 300.0 ; t0 [ 148ULL ] = 0.0 ; t0 [ 149ULL
] = 0.0 ; t0 [ 150ULL ] = 85.0 ; t0 [ 151ULL ] = 300.0 ; t0 [ 152ULL ] = 0.0
; t0 [ 153ULL ] = 300.0 ; t0 [ 154ULL ] = 0.0 ; t0 [ 155ULL ] = 998.21 ; t0 [
156ULL ] = 0.0 ; t0 [ 157ULL ] = 0.0 ; t0 [ 158ULL ] = 0.0 ; t0 [ 159ULL ] =
0.0 ; t0 [ 160ULL ] = 0.0 ; t0 [ 161ULL ] = 0.0 ; t0 [ 162ULL ] = 0.0 ; t0 [
163ULL ] = 0.0 ; t0 [ 164ULL ] = 300.0 ; t0 [ 165ULL ] = 1.0 ; t0 [ 166ULL ]
= 0.0 ; t0 [ 167ULL ] = 0.0 ; t0 [ 168ULL ] = 300.0 ; t0 [ 169ULL ] = 85.0 ;
t0 [ 170ULL ] = 300.0 ; t0 [ 171ULL ] = 85.0 ; t0 [ 172ULL ] = 300.0 ; t0 [
173ULL ] = 85.0 ; t0 [ 174ULL ] = 300.0 ; t0 [ 175ULL ] = 85.0 ; t0 [ 176ULL
] = 300.0 ; t0 [ 177ULL ] = 1.0 ; t0 [ 178ULL ] = 0.0 ; t0 [ 179ULL ] = 0.0 ;
t0 [ 180ULL ] = 300.0 ; t0 [ 181ULL ] = 85.0 ; t0 [ 182ULL ] = 300.0 ; t0 [
183ULL ] = 85.0 ; t0 [ 184ULL ] = 300.0 ; t0 [ 185ULL ] = 85.0 ; t0 [ 186ULL
] = 300.0 ; t0 [ 187ULL ] = 85.0 ; t0 [ 188ULL ] = 300.0 ; t0 [ 189ULL ] =
1.0 ; t0 [ 190ULL ] = 0.0 ; t0 [ 191ULL ] = 0.0 ; t0 [ 192ULL ] = 300.0 ; t0
[ 193ULL ] = 85.0 ; t0 [ 194ULL ] = 300.0 ; t0 [ 195ULL ] = 85.0 ; t0 [
196ULL ] = 300.0 ; t0 [ 197ULL ] = 85.0 ; t0 [ 198ULL ] = 300.0 ; t0 [ 199ULL
] = 85.0 ; t0 [ 200ULL ] = 300.0 ; t0 [ 201ULL ] = 1.0 ; t0 [ 202ULL ] = 0.0
; t0 [ 203ULL ] = 0.0 ; t0 [ 204ULL ] = 300.0 ; t0 [ 205ULL ] = 85.0 ; t0 [
206ULL ] = 300.0 ; t0 [ 207ULL ] = 85.0 ; t0 [ 208ULL ] = 300.0 ; t0 [ 209ULL
] = 85.0 ; t0 [ 210ULL ] = 300.0 ; t0 [ 211ULL ] = 85.0 ; t0 [ 212ULL ] = 0.0
; t0 [ 213ULL ] = 300.0 ; t0 [ 214ULL ] = 1.0 ; t0 [ 215ULL ] = 300.0 ; t0 [
216ULL ] = 1.0 ; t0 [ 217ULL ] = 300.0 ; t0 [ 218ULL ] = 300.0 ; t0 [ 219ULL
] = 300.0 ; t0 [ 220ULL ] = 300.0 ; t0 [ 221ULL ] = 0.0 ; t0 [ 222ULL ] = 0.0
; t0 [ 223ULL ] = 0.0 ; t0 [ 224ULL ] = 0.0 ; t0 [ 225ULL ] = 300.0 ; t0 [
226ULL ] = 85.0 ; t0 [ 227ULL ] = 300.0 ; t0 [ 228ULL ] = 0.0 ; t0 [ 229ULL ]
= 300.0 ; t0 [ 230ULL ] = 0.0 ; t0 [ 231ULL ] = 300.0 ; t0 [ 232ULL ] = 0.0 ;
t0 [ 233ULL ] = 998.21 ; t0 [ 234ULL ] = 300.0 ; t0 [ 235ULL ] = 1.0 ; t0 [
236ULL ] = 293.15 ; t0 [ 237ULL ] = 0.0 ; t0 [ 238ULL ] = 0.0 ; t0 [ 239ULL ]
= 0.0 ; t0 [ 240ULL ] = 0.0 ; t0 [ 241ULL ] = 0.0 ; t0 [ 242ULL ] = 0.0 ; t0
[ 243ULL ] = 0.0 ; t0 [ 244ULL ] = 0.0 ; t0 [ 245ULL ] = 300.0 ; t0 [ 246ULL
] = 85.0 ; t0 [ 247ULL ] = 300.0 ; t0 [ 248ULL ] = 85.0 ; t0 [ 249ULL ] =
300.0 ; t0 [ 250ULL ] = 1.0 ; t0 [ 251ULL ] = 0.0 ; t0 [ 252ULL ] = 0.0 ; t0
[ 253ULL ] = 300.0 ; t0 [ 254ULL ] = 85.0 ; t0 [ 255ULL ] = 300.0 ; t0 [
256ULL ] = 85.0 ; t0 [ 257ULL ] = 300.0 ; t0 [ 258ULL ] = 1.0 ; t0 [ 259ULL ]
= 293.15 ; t0 [ 260ULL ] = 293.15 ; t0 [ 261ULL ] = 300.0 ; t0 [ 262ULL ] =
1.0 ; t0 [ 263ULL ] = 300.0 ; t0 [ 264ULL ] = 1.0 ; t0 [ 265ULL ] = 293.15 ;
t0 [ 266ULL ] = 1.0E-6 ; t0 [ 267ULL ] = 1.0E-6 ; t0 [ 268ULL ] = 0.0 ; t0 [
269ULL ] = 1.2 ; t0 [ 270ULL ] = 1.2 ; t0 [ 271ULL ] = 1.2 ; t0 [ 272ULL ] =
0.0 ; t0 [ 273ULL ] = 293.15 ; t0 [ 274ULL ] = 1.0 ; t0 [ 275ULL ] = 1.0 ; t0
[ 276ULL ] = 0.0 ; t0 [ 277ULL ] = 0.0 ; t0 [ 278ULL ] = 0.0 ; t0 [ 279ULL ]
= 0.0 ; t0 [ 280ULL ] = 300.0 ; t0 [ 281ULL ] = 300.0 ; t0 [ 282ULL ] =
1000.0 ; t0 [ 283ULL ] = 1000.0 ; t0 [ 284ULL ] = 85.0 ; t0 [ 285ULL ] = 85.0
; t0 [ 286ULL ] = 85.0 ; t0 [ 287ULL ] = 300.0 ; t0 [ 288ULL ] = 85.0 ; t0 [
289ULL ] = 300.0 ; t0 [ 290ULL ] = 85.0 ; t0 [ 291ULL ] = 300.0 ; t0 [ 292ULL
] = 85.0 ; t0 [ 293ULL ] = 300.0 ; t0 [ 294ULL ] = 85.0 ; t0 [ 295ULL ] =
300.0 ; t0 [ 296ULL ] = 1.0 ; t0 [ 297ULL ] = 0.0 ; t0 [ 298ULL ] = 0.0 ; t0
[ 299ULL ] = 300.0 ; t0 [ 300ULL ] = 85.0 ; t0 [ 301ULL ] = 300.0 ; t0 [
302ULL ] = 85.0 ; t0 [ 303ULL ] = 300.0 ; t0 [ 304ULL ] = 85.0 ; t0 [ 305ULL
] = 300.0 ; t0 [ 306ULL ] = 300.0 ; t0 [ 307ULL ] = 85.0 ; t0 [ 308ULL ] =
300.0 ; t0 [ 309ULL ] = 300.0 ; t0 [ 310ULL ] = 85.0 ; t0 [ 311ULL ] = 300.0
; t0 [ 312ULL ] = 420.0 ; t0 [ 313ULL ] = 300.0 ; t0 [ 314ULL ] = 1.0 ; t0 [
315ULL ] = 300.0 ; t0 [ 316ULL ] = 85.0 ; t0 [ 317ULL ] = 300.0 ; t0 [ 318ULL
] = 0.0 ; t0 [ 319ULL ] = 300.0 ; t0 [ 320ULL ] = 1.0 ; t0 [ 321ULL ] = 300.0
; t0 [ 322ULL ] = 85.0 ; t0 [ 323ULL ] = 300.0 ; t0 [ 324ULL ] = 0.0 ; t0 [
325ULL ] = 420.0 ; t0 [ 326ULL ] = 300.0 ; t0 [ 327ULL ] = 85.0 ; t0 [ 328ULL
] = 300.0 ; t0 [ 329ULL ] = P_R_idx_18 * 0.001 / 0.001 ; t0 [ 330ULL ] =
420.0 ; t0 [ 331ULL ] = 300.0 ; t0 [ 332ULL ] = 85.0 ; t0 [ 333ULL ] = 420.0
; t0 [ 334ULL ] = 300.0 ; t0 [ 335ULL ] = 85.0 ; t0 [ 336ULL ] = 1.2 ; for (
b = 0 ; b < 337 ; b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void
) t3 ; return 0 ; }
