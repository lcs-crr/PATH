#include "DrivetrainEv.h"
#include "rtwtypes.h"
#include "DrivetrainEv_private.h"
#include "mwmathutil.h"
#include "interp2_Dz8B5aYN.h"
#include "automldiffls_oVvi23Xz.h"
#include "automldiffopen_ujNuWwNk.h"
#include "DrivetrainEv_capi.h"
#include "look1_binlxpw.h"
#include "look1_binlcpw.h"
#include "zero_crossing_types.h"
#include <string.h>
#include "rt_nonfinite.h"
#define ixrnqnhdfr ((uint8_T)0U)
#define mcuvnmapwy ((uint8_T)1U)
#define ns2cbkftdn ((uint8_T)2U)
#define fygjrc0bwn ((uint8_T)1U)
#define nrvxfifrf3 ((uint8_T)0U)
#define ojhcgwmuav ((uint8_T)2U)
static RegMdlInfo rtMdlInfo_DrivetrainEv [ 252 ] = { { "i2nkjxda1o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cekzt1rnxr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fptwlttveg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "hwisdnpky5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mngph55n5r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fvwoypcxq5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jipem2r5u4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cklgoq5png" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "n0eio1rlpk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cu3q4upwwi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"eyoob242x4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "epqdxq1edn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gzahetipq4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ob4gehxedj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "dlgnmjtuzs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "aeu2unkift" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"niajceetmc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fooqmswbbc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pwcyz0zv0a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ave4ahp3br" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ehwuq2flhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "do51n4jljv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ldftyohcr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lu0k1fvhhc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nxa00c0sli" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lgsc2euz0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jamoiccw5v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "amel0smx4y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lps5fweizp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "asw3ocj4en" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kyr1rhkn5p" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ocyn02au15" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ezr503rgsr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dsrrdrnhl5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"crgdzu0qgz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "a5og3r0icn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "aremv21hur" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ibb22rhdhi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ejajaq4sjj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dl1frozi3a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"agrz53hsbl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "g4adqhhvma" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mtq5ysirlz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fmcgiua5km" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "n2kbk514ks" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "iw40cciuda" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lyzqt0nklo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cntvboex4v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cbz2dlzqjt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"j3ujqghva4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "benvcf5o21" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fjgmsl5hqy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lxb2my1viu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ah133o01lx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "m2kmkbqxuq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ermqezac44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lt0y4hy3pd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "i01qvr2ezq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hl10vqkas0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "kmotidl0fz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pd3fxbwbdh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"anse5zkp05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "p4tcmhlmqo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "oizox0twh0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fqp5ibbznb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "l0fe3oafgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "airt52dhps" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ic22b1irhk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ontjheoysm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ahfih3jzau" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"nnlikfhqgo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gztm1me5j3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ayxswdewl1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pooh4v3ih0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cev0vg1qh4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "k15rssna2x" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oecdflrzti" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pfqfx2f4zk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "pibajuhrfy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kgdb5tut5v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "kckfzckqe5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jsyfghzlbs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oj3qcikvsd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pjvirltsck" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bobjql0acy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"eqkvgltva4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jn13uy3k03" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mljqquawlq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pymb3fi5g4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fmdhv4fck3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dmpx2jc2pu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fwdtimy1yf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "iyfebu03dj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fgqtupspgf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"aufkcqjofk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "atojkui03z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kqspnrjgmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lbl1s0hghr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oi5wx40azd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "jbcz0jpnwi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pw0nsh0h05" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gwbuyqty4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mxjlqvkjce" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"avaxmyit3j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ljddmczf4f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gkyrgx403d" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kv5dd5iizc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "m2khnalf54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ms1i05pajk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oc0zihyyg4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "d4ycflth2y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gozrujzaaw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"chdajczivx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "iwcsoi3ar4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gwi2hokzxw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"p2lbhyas44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lc2agjjnwf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bjtf3mo10h" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"niqqjkrxmt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oq4c5t0foy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "j2jbaak5ro" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ln33slfpeu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "nu045e3o1q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "dzq322z3qz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"e4lswbhl1f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gfakbvs42h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "curfouepya" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fu2d21p2me" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "lzduu3oepy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gqcilb1ome" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hmke5fx3tcj" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pmzuarg20b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cphoervchx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"aciiplviyd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "nupxuy3etd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bbuzvmnhsa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cspbap1de4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "edp3webv0p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nzmos2zlw4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"at3vnbf5fi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "khz3ktgddz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bbwlhhd1yt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lvsoqlxlcs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "pw4f2kjo3k" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "lzqecqna5o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ekywbf3nku" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "cmuw0kqmoe" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "gjrktinair" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lcrhwa0gkm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "a2spfqi5as" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ekz3w3o33e" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"er1nyhy4k5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "eqyc2wn3m1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ktxb3gprz3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ka5dospcnh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fzkpqsvdo4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "efb0jiqqrw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"detsq240wj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ox4522myug" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bxwynbswnf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mkid0gorbi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "dq1cbs3e5h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "b1g3pdb1rr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"gkwx1uvgy3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "efyr52spdx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "koortnfexc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"p3l4kwjfse" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hoxerz5r3l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "b5prwuabwt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Clutch" } , {
"bhfnq0gvty" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "diav50533w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fpkexilwx0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pa01ypljzv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hbitco4kzk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "blmwtgrkjm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"jchsnf4kft" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hjtn2cfetd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "fhk5xmrghf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"kbesg5n00g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jzxqghlsdl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ncnwl1puqr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"cddyh02qci" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Clutch"
} , { "daf5agucai" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "aoflhlgav1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "n4a12hefr4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ihxvxssvuy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "fpmjbkubaz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "btu025qxla" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"oec2gataco" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "c1qzjjjrev" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "bh1yzkl0yd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fvimnjpkij" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "bxtrkjpjgc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ehaq3xi2i2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ndg43gdj2c" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Slipping" } , { "fykpdnvvl5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 ,
( void * ) "DrivetrainEv" } , { "ij11pv3qli" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"plfejxniy4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "oxojvdus0j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mbjlcj4mlk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"c4xb3zu25o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hao3nl0wlo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "ehvsb4g243" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"h4eaymynye" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hpjac0modf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( void * ) "Locked" } , { "dzbhhot2tg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "DrivetrainEv" } , { "cz1ljsnlgo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"hrhkjhjudb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ms52wr2yr5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mn2sbc14hy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"fvcqjct50p" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "gf1chc542w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "lqozigtnao" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"ox0m3irtud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "jkqilwbv4l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0
, ( void * ) "detectLockup" } , { "ik4b1pjhko" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"dx3kktby5q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "hldn5hj5im" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "kk0gqeonff" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"btzl12r1cd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "bl2yl1izeh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "e22zipb4tr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"lx5pzbjgnj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"detectSlip" } , { "k4kq5a5ocp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1
, ( void * ) "DrivetrainEv" } , { "gv3b21mocx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pkbppjdhhu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "phtlzjoqko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "cmaimownvk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"gqxnwdwkoc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "ocvm13bhlg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "nnjg45upsq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"pafzrlxpms" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Simple Magic Tire" } , { "DrivetrainEv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "egole5a0hr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DrivetrainEv" } , { "h4uxlrjlofs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"h4uxlrjlof" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DrivetrainEv" } , { "kz1ziyy35g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "hcopmldpph" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "DrivetrainEv" } , { "mr_DrivetrainEv_restoreDataFromMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "DrivetrainEv" } , { "mr_DrivetrainEv_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"mr_DrivetrainEv_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "DrivetrainEv" } , { "mr_DrivetrainEv_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DrivetrainEv" } , {
"DrivetrainEv.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"DrivetrainEv.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"DrivetrainEv" } } ; akbgnuupjzy akbgnuupjz = { 2.27 , 0.28 , 0.1 , 0.1 , {
0.0 , 0.0 } , { 0.0 , 0.0 } , 6570.0 , 6570.0 , 0.0 , 0.0 , 500.0 , { -
700000.0 , - 7000.0 , - 700.0 , 0.0 , 700.0 , 7000.0 , 700000.0 } , { -
700000.0 , - 7000.0 , - 700.0 , 0.0 , 700.0 , 7000.0 , 700000.0 } , { -
8928.57142857143 , - 178.57142857142858 , 0.0 , 357.14285714285717 ,
535.71428571428567 , 9285.7142857142862 } , { - 5357.1428571428569 , -
107.14285714285714 , 0.0 , 214.28571428571428 , 321.42857142857144 ,
5571.4285714285716 } , 0.8 , 0.8 , 3000.0 , 0.1 , 0.01 , 0.025 , 0.025 , 0.01
, 0.01 , 0.01 , 0.01 , 0.15 , 0.15 , 7.94 , 7.94 , 4.0 , 101325.0 , 287.058 ,
0.0 , 0.0 , 0.2 , 0.15 , 0.15 , 273.0 , 0.336 , 0.336 , 2.0 , 2.0 ,
1.1880000000000002 , 0.01 , 0.01 , 0.0 , 0.0 , 1.5120000000000002 , 400.0 ,
400.0 , 400.0 , 0.001 , 0.001 , 100.0 , 100.0 , 0.0 , 0.0 , 0.001 , 0.001 ,
1.0 , 1.0 , { - 1.0 , 1.0 } , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.0 , 0.0 , 0.05 , 0.05 , 0.0 , 0.0 , 0.0 , { 0.0 , 10.0 , 20.0 , 40.0 , 60.0
, 80.0 , 100.0 } , { - 10.0 , - 1.0 , - 0.1 , 0.0 , 0.1 , 1.0 , 10.0 } , { -
10.0 , - 1.0 , - 0.1 , 0.0 , 0.1 , 1.0 , 10.0 } , { - 0.005 , - 0.0001 , 0.0
, 0.2 , 0.2001 , 0.2051 } , { - 0.005 , - 0.0001 , 0.0 , 0.2 , 0.2001 ,
0.2051 } , 1.0 , 1.0 , 0.0 , 9.81 , 0.5 , 10000.0 , 10000.0 , 10000.0 ,
50000.0 , 50000.0 , 1.5 , 1.5 , 1.0 , 1.0 , 1500.0 , 0.35 , 0.35 , 0.45 ,
0.45 , { 0.16 , 0.13 , 0.115 , 0.11 , 0.105 , 0.1025 , 0.10125 } , 2.0 , 2.0
, 3000.0 , 3000.0 , 100.0 , 100.0 , 100.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , { 0.0 , - 0.35 } , 234400.0 , 234400.0 , 0.0 , 0.01 , 0.0 , 0.0
, 0.0 , 0.0 , 1.0E-6 , 1.0E-6 , 0.0 , 0.0 , 0.0 , 1.0 , 1.0 , 0.0 , 0.0 , 0.0
, 0.0 , 3.1415926535897931 , - 3.1415926535897931 , 0.0 , 0.0 , 0.0 , { 2.0 ,
2.0 } , { - 1.0 , 1.0 , 1.0 } , { - 1.0 , 1.0 , 1.0 } , 0.5 , 0.0 , 0.0 , -
1.0 , 0.6 , 0.0 , 2.2204460492503131E-16 , 0.5 , 0.0 , 0.0 , - 1.0 , 0.4 ,
0.0 , 2.2204460492503131E-16 , { 0.0 , 0.0 } , { - 1.0 , 1.0 } , { 4.0 , 4.0
, 0.0 } , { 0.0 , 1.0 , - 1.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , {
2.0 , 2.0 } , { 2.0 , 2.0 } , 0.0 , 5000.0 , - 5000.0 , 0.0 , 5000.0 , -
5000.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , 0.0 , 20.0 ,
4.0 , 0.5 , 0.0 , 4.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5 , 0.0 , 20.0 , 4.0 , 0.5
, 0.0 , 20.0 , 4.0 , 0.5 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 0.0 , 0.0 , 1.0 } , 0.0 , 0.0 ,
2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 , 0.01 , { 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } ,
{ 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.78539816339744828 ,
0.0 , 0.0 , 2.2204460492503131E-16 , 1.0 , 1.65 , 10.0 , 0.01 , { 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 , 0.0 , 0.0
} , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 10000.0 , 1.0E+6 , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
0.0 , 0.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.78539816339744828 , 1.0 , 6.2831853071795862 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0
, 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 1.0 , { { { - 4.0 } , { 0.0 , 0.0 , 0.0 } , {
0.0 , false , false , { false , true , false , false , true , true , true ,
false } } , { false } } } , { { { - 4.0 } , { 0.0 , 0.0 , 0.0 } , { 0.0 ,
false , false , { false , true , false , false , true , true , true , false }
} , { false } } } , { 0.0 , 0.0 } } ; static real_T njagxepmjm ( real_T kappa
, real_T Vx , real_T Fz , real_T b_gamma , real_T LONGVL , real_T FNOMIN ,
real_T b_FZMIN , real_T b_FZMAX , real_T press , real_T NOMPRES , real_T
PRESMIN , real_T PRESMAX , real_T PCX1 , real_T PDX1 , real_T PDX2 , real_T
PDX3 , real_T PEX1 , real_T PEX2 , real_T PEX3 , real_T PEX4 , real_T PKX1 ,
real_T PKX2 , real_T PKX3 , real_T PHX1 , real_T PHX2 , real_T PVX1 , real_T
PVX2 , real_T PPX1 , real_T PPX2 , real_T PPX3 , real_T PPX4 , real_T lam_Fzo
, real_T lam_muV , real_T lam_mux , real_T lam_Kxkappa , real_T lam_Cx ,
real_T lam_Ex , real_T lam_Hx , real_T lam_Vx ) ; static boolean_T gppluqklue
( real_T Tout , real_T Tfmaxs , dmpx2jc2pu * localB , fmdhv4fck3 * localDW )
; static boolean_T g0el31fu5q ( real_T Tout , real_T Tfmaxs , dmpx2jc2pu *
localB , fmdhv4fck3 * localDW , pymb3fi5g4 * localP ) ; static boolean_T
k5qdrctgwd ( real_T Tout , real_T Tfmaxs , gzahetipq4 * localB , epqdxq1edn *
localDW ) ; static boolean_T oknnk3qrza ( real_T Tout , real_T Tfmaxs ,
gzahetipq4 * localB , epqdxq1edn * localDW , eyoob242x4 * localP ) ; static
real_T njagxepmjm ( real_T kappa , real_T Vx , real_T Fz , real_T b_gamma ,
real_T LONGVL , real_T FNOMIN , real_T b_FZMIN , real_T b_FZMAX , real_T
press , real_T NOMPRES , real_T PRESMIN , real_T PRESMAX , real_T PCX1 ,
real_T PDX1 , real_T PDX2 , real_T PDX3 , real_T PEX1 , real_T PEX2 , real_T
PEX3 , real_T PEX4 , real_T PKX1 , real_T PKX2 , real_T PKX3 , real_T PHX1 ,
real_T PHX2 , real_T PVX1 , real_T PVX2 , real_T PPX1 , real_T PPX2 , real_T
PPX3 , real_T PPX4 , real_T lam_Fzo , real_T lam_muV , real_T lam_mux ,
real_T lam_Kxkappa , real_T lam_Cx , real_T lam_Ex , real_T lam_Hx , real_T
lam_Vx ) { real_T Cx ; real_T Cx_tmp ; real_T a__1 ; real_T b_idx_0 ; real_T
dfz ; real_T dpi ; real_T f_idx_0 ; real_T h_idx_0 ; real_T j_idx_0 ; real_T
kappa_x ; real_T lam_mux_star ; b_idx_0 = Fz ; if ( Fz < b_FZMIN ) { b_idx_0
= b_FZMIN ; } if ( b_idx_0 > b_FZMAX ) { b_idx_0 = b_FZMAX ; } dpi = press ;
if ( press < PRESMIN ) { dpi = PRESMIN ; } if ( dpi > PRESMAX ) { dpi =
PRESMAX ; } dpi = ( dpi - NOMPRES ) / NOMPRES ; dfz = ( b_idx_0 - FNOMIN *
lam_Fzo ) / FNOMIN * lam_Fzo ; kappa_x = ( PHX2 * dfz + PHX1 ) * lam_Hx +
kappa ; lam_mux_star = - muDoubleScalarAbs ( Vx ) * kappa ; lam_mux_star =
lam_mux / ( muDoubleScalarSqrt ( lam_mux_star * lam_mux_star ) * lam_muV /
LONGVL + 1.0 ) ; Cx = PCX1 * lam_Cx ; f_idx_0 = Cx ; if ( Cx < 0.0 ) {
f_idx_0 = 0.0 ; } Cx_tmp = dpi * dpi ; Cx = ( ( PPX3 * dpi + 1.0 ) + Cx_tmp *
PPX4 ) * ( PDX2 * dfz + PDX1 ) * ( 1.0 - b_gamma * b_gamma * PDX3 ) *
lam_mux_star * b_idx_0 ; h_idx_0 = Cx ; if ( Cx < 0.0 ) { h_idx_0 = 0.0 ; }
Cx = ( ( PEX2 * dfz + PEX1 ) + dfz * dfz * PEX3 ) * ( 1.0 -
muDoubleScalarTanh ( 10.0 * kappa_x ) * PEX4 ) * lam_Ex ; j_idx_0 = Cx ; if (
Cx > 1.0 ) { j_idx_0 = 1.0 ; } Cx = f_idx_0 * h_idx_0 ; a__1 =
muDoubleScalarAbs ( Cx ) ; if ( a__1 < 0.1 ) { a__1 /= 0.1 ; a__1 = 0.2 / (
3.0 - a__1 * a__1 ) ; } if ( Cx < 0.0 ) { a__1 = - a__1 ; } dpi = ( PKX2 *
dfz + PKX1 ) * b_idx_0 * muDoubleScalarExp ( PKX3 * dfz ) * ( ( PPX1 * dpi +
1.0 ) + Cx_tmp * PPX2 ) * lam_Kxkappa / a__1 ; dpi *= kappa_x ; return
muDoubleScalarSin ( muDoubleScalarAtan ( dpi - ( dpi - muDoubleScalarAtan (
dpi ) ) * j_idx_0 ) * f_idx_0 ) * h_idx_0 + ( PVX2 * dfz + PVX1 ) * b_idx_0 *
( lam_mux_star * 10.0 / ( 9.0 * lam_mux_star + 1.0 ) ) * lam_Vx ; } void
pafzrlxpms ( real_T lhfh0lgexg , real_T dddksvopvu , real_T aqziyf45vh ,
real_T kmxusdamtu , real_T kvgp2fkjhy , real_T gnoj3vvd04 , real_T i5tazc1u4j
, real_T hrxlzevx3z , real_T jblgopnf1i , const real_T pkjxdlvuwn [ 34 ] ,
const real_T n0mhhr4t1h [ 3 ] , const real_T cjgdxidpon [ 3 ] , const real_T
csyrzuatjk [ 9 ] , real_T hiqsfmypee , real_T mx5so5mgvw , real_T inchkh4kac
, real_T gycdhdasg2 , real_T few2l1fwxa , real_T jklaqvkxfe , real_T
otfgbpbyhn , real_T kv2iqsifba , real_T hiawd1p1fx , real_T o5ygoxqi30 ,
real_T ig4mu234iu , real_T dbtrggoxo1 , real_T fdpxrz5vmb , real_T k2udx51syx
, real_T pfq2eyet0u , real_T e3zacyak04 , const real_T i11thzoaok [ 3 ] ,
const real_T jiefker5rr [ 3 ] , const real_T govy01dn4l [ 9 ] , real_T
n5xjjpqvhi , real_T bodbaw1ynp , real_T gehf3geyns , real_T gakbsgqcve ,
real_T hdwkghxa4l , real_T bt0sy4q3zx , real_T djkh3gvlkv , real_T bbl12fnfds
, real_T maogfv1bti , real_T b55yk0qpmy , real_T c4pn3rsir2 , real_T
hhd1av5ez0 , real_T epvhuoa1qy , real_T p4b5kxhudx , real_T a5c4goqooi ,
real_T fs3ildlixj , real_T prsb4scvfy , real_T cmj0idhrc5 , real_T m2do5j31ef
, real_T dgy4icut3a , real_T kh4hnzmazk , real_T jtbjysdjqj , real_T
iypogydhcm , real_T lkloq2embq , real_T pvhuw1msck , real_T d3jy5zi252 ,
real_T fg54spf2n5 , real_T rtp_FZMAX , real_T rtp_FZMIN , real_T rtp_VXLOW ,
real_T rtp_kappamax , lc2agjjnwf * localB ) { real_T csyrzuatjk_p [ 9 ] ;
real_T Re ; real_T Vxpabs_tmp ; real_T h_idx_0 ; real_T i_idx_0 ; real_T
m_idx_0 ; int32_T i ; localB -> k430nj3qfv [ 0 ] = kvgp2fkjhy ; localB ->
k430nj3qfv [ 1 ] = gnoj3vvd04 ; localB -> k430nj3qfv [ 2 ] = i5tazc1u4j ;
localB -> k430nj3qfv [ 3 ] = hrxlzevx3z ; localB -> k430nj3qfv [ 4 ] =
jblgopnf1i ; localB -> dozz3hjyhg [ 0 ] = hiqsfmypee ; localB -> dozz3hjyhg [
1 ] = mx5so5mgvw ; localB -> dozz3hjyhg [ 2 ] = inchkh4kac ; localB ->
dozz3hjyhg [ 3 ] = gycdhdasg2 ; localB -> dozz3hjyhg [ 4 ] = few2l1fwxa ;
localB -> dozz3hjyhg [ 5 ] = jklaqvkxfe ; localB -> dozz3hjyhg [ 6 ] =
otfgbpbyhn ; localB -> dozz3hjyhg [ 7 ] = kv2iqsifba ; localB -> dozz3hjyhg [
8 ] = hiawd1p1fx ; localB -> dozz3hjyhg [ 9 ] = o5ygoxqi30 ; localB ->
dozz3hjyhg [ 10 ] = ig4mu234iu ; localB -> dozz3hjyhg [ 11 ] = dbtrggoxo1 ;
localB -> dozz3hjyhg [ 12 ] = fdpxrz5vmb ; localB -> dozz3hjyhg [ 13 ] =
k2udx51syx ; localB -> dozz3hjyhg [ 14 ] = pfq2eyet0u ; localB -> dozz3hjyhg
[ 15 ] = e3zacyak04 ; localB -> mxlog31fl1 [ 0 ] = hiqsfmypee ; localB ->
mxlog31fl1 [ 1 ] = bodbaw1ynp ; localB -> mxlog31fl1 [ 2 ] = gehf3geyns ;
localB -> mxlog31fl1 [ 3 ] = gakbsgqcve ; localB -> mxlog31fl1 [ 4 ] =
hdwkghxa4l ; localB -> mxlog31fl1 [ 5 ] = bt0sy4q3zx ; localB -> mxlog31fl1 [
6 ] = djkh3gvlkv ; localB -> mxlog31fl1 [ 7 ] = bbl12fnfds ; localB ->
mxlog31fl1 [ 8 ] = maogfv1bti ; localB -> mxlog31fl1 [ 9 ] = b55yk0qpmy ;
localB -> mxlog31fl1 [ 10 ] = c4pn3rsir2 ; localB -> mxlog31fl1 [ 11 ] =
hhd1av5ez0 ; localB -> mxlog31fl1 [ 12 ] = epvhuoa1qy ; localB -> mxlog31fl1
[ 13 ] = p4b5kxhudx ; localB -> mxlog31fl1 [ 14 ] = a5c4goqooi ; localB ->
mxlog31fl1 [ 15 ] = fs3ildlixj ; localB -> mxlog31fl1 [ 16 ] = prsb4scvfy ;
localB -> mxlog31fl1 [ 17 ] = cmj0idhrc5 ; localB -> mxlog31fl1 [ 18 ] =
m2do5j31ef ; localB -> mxlog31fl1 [ 19 ] = dgy4icut3a ; localB -> mxlog31fl1
[ 20 ] = kh4hnzmazk ; localB -> mxlog31fl1 [ 21 ] = jtbjysdjqj ; localB ->
mxlog31fl1 [ 22 ] = iypogydhcm ; localB -> mxlog31fl1 [ 23 ] = lkloq2embq ;
switch ( ( int32_T ) fg54spf2n5 ) { case 0 : Re = lhfh0lgexg ; break ; case 1
: Re = 0.0 * muDoubleScalarAbs ( aqziyf45vh ) + n5xjjpqvhi ; if ( Re < 0.001
) { Re = 0.001 ; } break ; case 2 : Re = lhfh0lgexg ; break ; default : Re =
lhfh0lgexg ; break ; } Vxpabs_tmp = muDoubleScalarAbs ( kmxusdamtu ) ;
h_idx_0 = Vxpabs_tmp ; if ( Vxpabs_tmp < rtp_VXLOW ) { h_idx_0 = Vxpabs_tmp /
rtp_VXLOW ; h_idx_0 = 2.0 * rtp_VXLOW / ( 3.0 - h_idx_0 * h_idx_0 ) ; }
h_idx_0 = ( lhfh0lgexg * aqziyf45vh - kmxusdamtu ) / h_idx_0 ; if ( h_idx_0 <
- rtp_kappamax ) { h_idx_0 = - rtp_kappamax ; } if ( h_idx_0 > rtp_kappamax )
{ h_idx_0 = rtp_kappamax ; } switch ( ( int32_T ) pvhuw1msck ) { case 0 :
i_idx_0 = dddksvopvu ; if ( dddksvopvu < rtp_FZMIN ) { i_idx_0 = rtp_FZMIN ;
} if ( i_idx_0 > rtp_FZMAX ) { i_idx_0 = rtp_FZMAX ; } h_idx_0 *= localB ->
k430nj3qfv [ 2 ] ; h_idx_0 = muDoubleScalarSin ( muDoubleScalarAtan ( h_idx_0
- ( h_idx_0 - muDoubleScalarAtan ( h_idx_0 ) ) * localB -> k430nj3qfv [ 3 ] )
* localB -> k430nj3qfv [ 1 ] ) * localB -> k430nj3qfv [ 0 ] * ( i_idx_0 *
localB -> k430nj3qfv [ 4 ] ) ; break ; case 2 : h_idx_0 = njagxepmjm (
h_idx_0 , kmxusdamtu , dddksvopvu , pkjxdlvuwn [ 0 ] , pkjxdlvuwn [ 1 ] ,
pkjxdlvuwn [ 2 ] , rtp_FZMIN , rtp_FZMAX , pkjxdlvuwn [ 3 ] , pkjxdlvuwn [ 4
] , pkjxdlvuwn [ 5 ] , pkjxdlvuwn [ 6 ] , pkjxdlvuwn [ 7 ] , pkjxdlvuwn [ 8 ]
, pkjxdlvuwn [ 9 ] , pkjxdlvuwn [ 10 ] , pkjxdlvuwn [ 11 ] , pkjxdlvuwn [ 12
] , pkjxdlvuwn [ 13 ] , pkjxdlvuwn [ 14 ] , pkjxdlvuwn [ 15 ] , pkjxdlvuwn [
16 ] , pkjxdlvuwn [ 17 ] , pkjxdlvuwn [ 18 ] , pkjxdlvuwn [ 19 ] , pkjxdlvuwn
[ 20 ] , pkjxdlvuwn [ 21 ] , pkjxdlvuwn [ 22 ] , pkjxdlvuwn [ 23 ] ,
pkjxdlvuwn [ 24 ] , pkjxdlvuwn [ 25 ] , pkjxdlvuwn [ 26 ] , pkjxdlvuwn [ 27 ]
, pkjxdlvuwn [ 28 ] , pkjxdlvuwn [ 29 ] , pkjxdlvuwn [ 30 ] , pkjxdlvuwn [ 31
] , pkjxdlvuwn [ 32 ] , pkjxdlvuwn [ 33 ] ) ; break ; case 3 : i_idx_0 =
dddksvopvu ; if ( dddksvopvu < rtp_FZMIN ) { i_idx_0 = rtp_FZMIN ; } if (
i_idx_0 > rtp_FZMAX ) { i_idx_0 = rtp_FZMAX ; } for ( i = 0 ; i < 3 ; i ++ )
{ csyrzuatjk_p [ 3 * i ] = csyrzuatjk [ i ] ; csyrzuatjk_p [ 3 * i + 1 ] =
csyrzuatjk [ i + 3 ] ; csyrzuatjk_p [ 3 * i + 2 ] = csyrzuatjk [ i + 6 ] ; }
h_idx_0 = interp2_Dz8B5aYN ( n0mhhr4t1h , cjgdxidpon , csyrzuatjk_p , h_idx_0
, i_idx_0 ) * localB -> k430nj3qfv [ 4 ] ; break ; default : h_idx_0 = 0.0 ;
break ; } switch ( ( int32_T ) d3jy5zi252 ) { case 0 : localB -> po5hjlmm4s =
0.0 ; break ; case 1 : i_idx_0 = localB -> dozz3hjyhg [ 0 ] ; if ( localB ->
dozz3hjyhg [ 0 ] < localB -> dozz3hjyhg [ 14 ] ) { i_idx_0 = localB ->
dozz3hjyhg [ 14 ] ; } if ( i_idx_0 > localB -> dozz3hjyhg [ 15 ] ) { i_idx_0
= localB -> dozz3hjyhg [ 15 ] ; } m_idx_0 = dddksvopvu ; if ( dddksvopvu <
rtp_FZMIN ) { m_idx_0 = rtp_FZMIN ; } if ( m_idx_0 > rtp_FZMAX ) { m_idx_0 =
rtp_FZMAX ; } localB -> po5hjlmm4s = ( ( localB -> dozz3hjyhg [ 4 ] *
Vxpabs_tmp + localB -> dozz3hjyhg [ 3 ] ) + kmxusdamtu * kmxusdamtu * localB
-> dozz3hjyhg [ 5 ] ) * ( muDoubleScalarTanh ( aqziyf45vh ) * Re ) * (
muDoubleScalarPower ( m_idx_0 , localB -> dozz3hjyhg [ 9 ] ) *
muDoubleScalarPower ( i_idx_0 , localB -> dozz3hjyhg [ 10 ] ) ) ; break ;
case 2 : i_idx_0 = localB -> dozz3hjyhg [ 0 ] ; if ( localB -> dozz3hjyhg [ 0
] < localB -> dozz3hjyhg [ 14 ] ) { i_idx_0 = localB -> dozz3hjyhg [ 14 ] ; }
if ( i_idx_0 > localB -> dozz3hjyhg [ 15 ] ) { i_idx_0 = localB -> dozz3hjyhg
[ 15 ] ; } m_idx_0 = dddksvopvu ; if ( dddksvopvu < 0.0 ) { m_idx_0 = 0.0 ; }
if ( m_idx_0 > rtp_FZMAX ) { m_idx_0 = rtp_FZMAX ; } localB -> po5hjlmm4s = (
( ( ( localB -> dozz3hjyhg [ 4 ] * h_idx_0 / localB -> dozz3hjyhg [ 1 ] +
localB -> dozz3hjyhg [ 3 ] ) + muDoubleScalarAbs ( kmxusdamtu / 16.7 ) *
localB -> dozz3hjyhg [ 5 ] ) + muDoubleScalarPower ( kmxusdamtu / 16.7 , 4.0
) * localB -> dozz3hjyhg [ 6 ] ) + ( m_idx_0 * localB -> dozz3hjyhg [ 8 ] /
localB -> dozz3hjyhg [ 1 ] + localB -> dozz3hjyhg [ 7 ] ) * ( localB ->
dozz3hjyhg [ 11 ] * localB -> dozz3hjyhg [ 11 ] ) ) * ( muDoubleScalarTanh (
aqziyf45vh ) * m_idx_0 * localB -> dozz3hjyhg [ 13 ] ) * (
muDoubleScalarPower ( m_idx_0 / localB -> dozz3hjyhg [ 1 ] , localB ->
dozz3hjyhg [ 9 ] ) * muDoubleScalarPower ( i_idx_0 / localB -> dozz3hjyhg [ 2
] , localB -> dozz3hjyhg [ 10 ] ) ) * localB -> dozz3hjyhg [ 12 ] ; break ;
case 3 : i_idx_0 = dddksvopvu ; if ( dddksvopvu < 0.0 ) { i_idx_0 = 0.0 ; }
if ( i_idx_0 > rtp_FZMAX ) { i_idx_0 = rtp_FZMAX ; } for ( i = 0 ; i < 3 ; i
++ ) { csyrzuatjk_p [ 3 * i ] = govy01dn4l [ i ] ; csyrzuatjk_p [ 3 * i + 1 ]
= govy01dn4l [ i + 3 ] ; csyrzuatjk_p [ 3 * i + 2 ] = govy01dn4l [ i + 6 ] ;
} localB -> po5hjlmm4s = - ( muDoubleScalarTanh ( aqziyf45vh ) *
interp2_Dz8B5aYN ( i11thzoaok , jiefker5rr , csyrzuatjk_p , kmxusdamtu ,
i_idx_0 ) ) ; break ; case 4 : i_idx_0 = localB -> dozz3hjyhg [ 0 ] ; if (
localB -> dozz3hjyhg [ 0 ] < localB -> dozz3hjyhg [ 14 ] ) { i_idx_0 = localB
-> dozz3hjyhg [ 14 ] ; } if ( i_idx_0 > localB -> dozz3hjyhg [ 15 ] ) {
i_idx_0 = localB -> dozz3hjyhg [ 15 ] ; } m_idx_0 = dddksvopvu ; if (
dddksvopvu < rtp_FZMIN ) { m_idx_0 = rtp_FZMIN ; } if ( m_idx_0 > rtp_FZMAX )
{ m_idx_0 = rtp_FZMAX ; } localB -> po5hjlmm4s = - ( ( m_idx_0 * localB ->
dozz3hjyhg [ 4 ] * 0.001 / ( ( i_idx_0 - localB -> dozz3hjyhg [ 6 ] ) *
localB -> dozz3hjyhg [ 5 ] + 1.0 ) + localB -> dozz3hjyhg [ 3 ] ) * ( -
muDoubleScalarTanh ( aqziyf45vh ) * Re ) ) ; break ; default : localB ->
po5hjlmm4s = 0.0 ; break ; } localB -> eyx53sezkx = h_idx_0 ; } void
kk0gqeonff ( pfqfx2f4zk * localB , k15rssna2x * localP ) { localB ->
i2nh5egmwl = localP -> P_0 ; } void bl2yl1izeh ( pfqfx2f4zk * localB ) {
localB -> i2nh5egmwl = false ; } void lx5pzbjgnj ( real_T ay3xeuearj , real_T
dotxz5qshb , pfqfx2f4zk * localB , oecdflrzti * localDW ) { localB ->
i2nh5egmwl = ( muDoubleScalarAbs ( ay3xeuearj ) >= dotxz5qshb ) ; localDW ->
k3j1amkab5 = 4 ; } void fvcqjct50p ( fqp5ibbznb * localB , oizox0twh0 *
localDW , p4tcmhlmqo * localP ) { localDW -> jrdv3hmnoc = localP -> P_2 ;
localB -> i5lz300mk1 = localP -> P_1 ; } void lqozigtnao ( fqp5ibbznb *
localB ) { localB -> i5lz300mk1 = false ; localB -> judcxm1ntp = 0.0 ; } void
jkqilwbv4l ( real_T deauqq3iqo , real_T aggo5m10cn , fqp5ibbznb * localB ,
oizox0twh0 * localDW , p4tcmhlmqo * localP ) { localB -> i5lz300mk1 = localP
-> P_3 [ ( ( ( uint32_T ) ( muDoubleScalarAbs ( ( ( 0.0 - deauqq3iqo ) -
localB -> judcxm1ntp ) + localB -> judcxm1ntp ) >= aggo5m10cn ) + ( (
uint32_T ) ( muDoubleScalarAbs ( - deauqq3iqo ) <= aggo5m10cn ) << 1 ) ) << 1
) + localDW -> jrdv3hmnoc ] ; localDW -> jrdv3hmnoc = localB -> i5lz300mk1 ;
localDW -> d3vznomj0x = 4 ; } void jkqilwbv4lTID2 ( real_T rtp_br ,
fqp5ibbznb * localB , p4tcmhlmqo * localP ) { localB -> judcxm1ntp = rtp_br *
localP -> P_0 ; } void mbjlcj4mlk ( hcopmldpph * const a5ree4wwe5 ) { if (
rtmGetTaskTime ( a5ree4wwe5 , 0 ) != rtmGetTStart ( a5ree4wwe5 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} void oxojvdus0j ( hcopmldpph * const a5ree4wwe5 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
void ehvsb4g243 ( real_T * jk5v2hweet , real_T * mfovcxxqab , real_T *
jilotr4g4q , real_T * m4inimtjpw ) { * jk5v2hweet = 0.0 ; * mfovcxxqab = 0.0
; * jilotr4g4q = 0.0 ; * m4inimtjpw = 0.0 ; } void hpjac0modf ( hcopmldpph *
const a5ree4wwe5 , real_T kj3rg4elqk , real_T * jk5v2hweet , real_T *
mfovcxxqab , real_T * jilotr4g4q , real_T * m4inimtjpw , j3ujqghva4 * localP
) { * jk5v2hweet = - kj3rg4elqk ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) &&
rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) ) { * mfovcxxqab = localP -> P_0 ; *
jilotr4g4q = localP -> P_1 ; * m4inimtjpw = localP -> P_2 ; } } void
bh1yzkl0yd ( real_T rtp_omegao , ezr503rgsr * localX ) { localX -> cxk3fsuqri
= rtp_omegao ; } void fpmjbkubaz ( hcopmldpph * const a5ree4wwe5 , kyr1rhkn5p
* localXdis ) { if ( rtmGetTaskTime ( a5ree4wwe5 , 0 ) != rtmGetTStart (
a5ree4wwe5 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; } ( void ) memset ( & ( localXdis -> cxk3fsuqri ) , 0 , 1 *
sizeof ( boolean_T ) ) ; } void ihxvxssvuy ( hcopmldpph * const a5ree4wwe5 ,
kyr1rhkn5p * localXdis ) { ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; ( void ) memset ( & ( localXdis -> cxk3fsuqri
) , 1 , 1 * sizeof ( boolean_T ) ) ; } void bxtrkjpjgc ( real_T * fxady5f4e0
, real_T * e2aiz2vbp3 , real_T * b5fl0n1q0j , real_T * mcbbov3w1s ,
ejajaq4sjj * localB ) { localB -> jay15ee00k = 0.0 ; localB -> lsau0jlhri =
0.0 ; localB -> g35ery0rfm = 0.0 ; localB -> lqjwgbv0yz = 0.0 ; * mcbbov3w1s
= 0.0 ; * fxady5f4e0 = 0.0 ; localB -> fcr4vr3fa0 = 0.0 ; localB ->
kehgg0ie1c = 0.0 ; * e2aiz2vbp3 = 0.0 ; * b5fl0n1q0j = 0.0 ; } void
ndg43gdj2c ( real_T oh55pom3vz , real_T mcytrmfgpa , real_T * fxady5f4e0 ,
real_T * e2aiz2vbp3 , real_T * b5fl0n1q0j , real_T * mcbbov3w1s , real_T
rtp_br , real_T rtp_Iyy , ejajaq4sjj * localB , aremv21hur * localP ,
ezr503rgsr * localX ) { real_T tmp ; localB -> jay15ee00k = localX ->
cxk3fsuqri ; localB -> lsau0jlhri = localP -> P_0 * localB -> jay15ee00k ;
localB -> g35ery0rfm = oh55pom3vz * muDoubleScalarTanh ( localB -> lsau0jlhri
) ; localB -> lqjwgbv0yz = rtp_br * localB -> jay15ee00k ; * mcbbov3w1s =
localB -> lqjwgbv0yz ; * fxady5f4e0 = localB -> jay15ee00k ; localB ->
fcr4vr3fa0 = ( localB -> g35ery0rfm - mcytrmfgpa ) - localB -> lqjwgbv0yz ;
tmp = 1.0 / rtp_Iyy ; localB -> kehgg0ie1c = tmp * localB -> fcr4vr3fa0 ; *
e2aiz2vbp3 = localB -> kehgg0ie1c ; * b5fl0n1q0j = localB -> fcr4vr3fa0 ; }
void btu025qxla ( ejajaq4sjj * localB , ocyn02au15 * localXdot ) { localXdot
-> cxk3fsuqri = localB -> kehgg0ie1c ; } static boolean_T gppluqklue ( real_T
Tout , real_T Tfmaxs , dmpx2jc2pu * localB , fmdhv4fck3 * localDW ) {
boolean_T b_yn ; lx5pzbjgnj ( Tout , Tfmaxs , & localB -> lx5pzbjgnjw , &
localDW -> lx5pzbjgnjw ) ; b_yn = localB -> lx5pzbjgnjw . i2nh5egmwl ; return
b_yn ; } static boolean_T g0el31fu5q ( real_T Tout , real_T Tfmaxs ,
dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pymb3fi5g4 * localP ) {
boolean_T b_yn ; jkqilwbv4l ( Tout , Tfmaxs , & localB -> jkqilwbv4li , &
localDW -> jkqilwbv4li , & localP -> jkqilwbv4li ) ; b_yn = localB ->
jkqilwbv4li . i5lz300mk1 ; return b_yn ; } void fhk5xmrghf ( real_T
rtp_omegao , dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pymb3fi5g4 * localP
, bobjql0acy * localX ) { localDW -> kzmq5ayuhp = 0U ; localDW -> jp5trqmghp
= ixrnqnhdfr ; localB -> laklrwxveo = 0.0 ; localB -> nap44isnzv = 0.0 ;
localB -> c0yj4zwkbk = 0.0 ; localB -> d4omriq3cl = 0.0 ; kk0gqeonff ( &
localB -> lx5pzbjgnjw , & localP -> lx5pzbjgnjw ) ; fvcqjct50p ( & localB ->
jkqilwbv4li , & localDW -> jkqilwbv4li , & localP -> jkqilwbv4li ) ;
bh1yzkl0yd ( rtp_omegao , & localX -> ndg43gdj2cy ) ; } void hjtn2cfetd (
dmpx2jc2pu * localB , fmdhv4fck3 * localDW ) { localDW -> kzmq5ayuhp = 0U ;
localDW -> jp5trqmghp = ixrnqnhdfr ; localB -> laklrwxveo = 0.0 ; localB ->
nap44isnzv = 0.0 ; localB -> c0yj4zwkbk = 0.0 ; localB -> d4omriq3cl = 0.0 ;
} void hbitco4kzk ( hcopmldpph * const a5ree4wwe5 , fmdhv4fck3 * localDW ,
oj3qcikvsd * localXdis ) { if ( localDW -> jp5trqmghp == mcuvnmapwy ) {
mbjlcj4mlk ( a5ree4wwe5 ) ; } if ( localDW -> jp5trqmghp == ns2cbkftdn ) {
fpmjbkubaz ( a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; } } void pa01ypljzv
( hcopmldpph * const a5ree4wwe5 , fmdhv4fck3 * localDW , oj3qcikvsd *
localXdis ) { if ( localDW -> jp5trqmghp == mcuvnmapwy ) { oxojvdus0j (
a5ree4wwe5 ) ; } if ( localDW -> jp5trqmghp == ns2cbkftdn ) { ihxvxssvuy (
a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; } } void jzxqghlsdl ( dmpx2jc2pu
* localB ) { localB -> laklrwxveo = 0.0 ; localB -> nap44isnzv = 0.0 ; localB
-> d4omriq3cl = 0.0 ; localB -> c0yj4zwkbk = 0.0 ; ehvsb4g243 ( & localB ->
d4omriq3cl , & localB -> laklrwxveo , & localB -> nap44isnzv , & localB ->
c0yj4zwkbk ) ; bl2yl1izeh ( & localB -> lx5pzbjgnjw ) ; lqozigtnao ( & localB
-> jkqilwbv4li ) ; bxtrkjpjgc ( & localB -> laklrwxveo , & localB ->
nap44isnzv , & localB -> d4omriq3cl , & localB -> c0yj4zwkbk , & localB ->
ndg43gdj2cy ) ; } void cddyh02qci ( hcopmldpph * const a5ree4wwe5 , real_T
fgvs5banyw , real_T auareadgka , real_T ka4js1rmku , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , dmpx2jc2pu * localB ,
fmdhv4fck3 * localDW , pymb3fi5g4 * localP , bobjql0acy * localX , oj3qcikvsd
* localXdis ) { if ( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) )
{ localDW -> bsjj0oya40 = rtmGetTaskTime ( a5ree4wwe5 , 0 ) ; if ( localDW ->
kzmq5ayuhp == 0U ) { localDW -> kzmq5ayuhp = 1U ; localX -> ndg43gdj2cy .
cxk3fsuqri = rtp_omegao ; localDW -> jp5trqmghp = ns2cbkftdn ; fpmjbkubaz (
a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; ndg43gdj2c ( ka4js1rmku ,
fgvs5banyw , & localB -> laklrwxveo , & localB -> nap44isnzv , & localB ->
d4omriq3cl , & localB -> c0yj4zwkbk , rtp_br , rtp_Iyy , & localB ->
ndg43gdj2cy , & localP -> ndg43gdj2cy , & localX -> ndg43gdj2cy ) ; localDW
-> ikmpdntrw1 = true ; ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; } else if ( localDW -> jp5trqmghp ==
mcuvnmapwy ) { if ( gppluqklue ( fgvs5banyw , auareadgka , localB , localDW )
) { localX -> ndg43gdj2cy . cxk3fsuqri = 0.0 ; localDW -> f4leq45rjn = false
; oxojvdus0j ( a5ree4wwe5 ) ; localDW -> jp5trqmghp = ns2cbkftdn ; fpmjbkubaz
( a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; ndg43gdj2c ( ka4js1rmku ,
fgvs5banyw , & localB -> laklrwxveo , & localB -> nap44isnzv , & localB ->
d4omriq3cl , & localB -> c0yj4zwkbk , rtp_br , rtp_Iyy , & localB ->
ndg43gdj2cy , & localP -> ndg43gdj2cy , & localX -> ndg43gdj2cy ) ; localDW
-> ikmpdntrw1 = true ; ssSetBlockStateForSolverChangedAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; } } else if ( g0el31fu5q ( fgvs5banyw ,
auareadgka , localB , localDW , localP ) && ( muDoubleScalarAbs ( localB ->
laklrwxveo ) <= rtp_OmegaTol ) ) { localDW -> ikmpdntrw1 = false ; ihxvxssvuy
( a5ree4wwe5 , & localXdis -> ndg43gdj2cy ) ; localDW -> jp5trqmghp =
mcuvnmapwy ; mbjlcj4mlk ( a5ree4wwe5 ) ; hpjac0modf ( a5ree4wwe5 , fgvs5banyw
, & localB -> d4omriq3cl , & localB -> laklrwxveo , & localB -> nap44isnzv ,
& localB -> c0yj4zwkbk , & localP -> hpjac0modfc ) ; localDW -> f4leq45rjn =
true ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; } } if ( localDW -> jp5trqmghp == mcuvnmapwy ) { if ( !
localDW -> f4leq45rjn ) { hpjac0modf ( a5ree4wwe5 , fgvs5banyw , & localB ->
d4omriq3cl , & localB -> laklrwxveo , & localB -> nap44isnzv , & localB ->
c0yj4zwkbk , & localP -> hpjac0modfc ) ; } else { localDW -> f4leq45rjn =
false ; } } else if ( ! localDW -> ikmpdntrw1 ) { ndg43gdj2c ( ka4js1rmku ,
fgvs5banyw , & localB -> laklrwxveo , & localB -> nap44isnzv , & localB ->
d4omriq3cl , & localB -> c0yj4zwkbk , rtp_br , rtp_Iyy , & localB ->
ndg43gdj2cy , & localP -> ndg43gdj2cy , & localX -> ndg43gdj2cy ) ; } else {
localDW -> ikmpdntrw1 = false ; } } void cddyh02qciTID2 ( real_T rtp_br ,
dmpx2jc2pu * localB , pymb3fi5g4 * localP ) { jkqilwbv4lTID2 ( rtp_br , &
localB -> jkqilwbv4li , & localP -> jkqilwbv4li ) ; } void blmwtgrkjm (
dmpx2jc2pu * localB , fmdhv4fck3 * localDW , pjvirltsck * localXdot ) {
localXdot -> ndg43gdj2cy . cxk3fsuqri = 0.0 ; if ( localDW -> jp5trqmghp ==
ns2cbkftdn ) { btu025qxla ( & localB -> ndg43gdj2cy , & localXdot ->
ndg43gdj2cy ) ; } if ( localDW -> jp5trqmghp == mcuvnmapwy ) { if ( localDW
-> f4leq45rjn ) { localDW -> f4leq45rjn = false ; } } else if ( localDW ->
ikmpdntrw1 ) { localDW -> ikmpdntrw1 = false ; } } static boolean_T
k5qdrctgwd ( real_T Tout , real_T Tfmaxs , gzahetipq4 * localB , epqdxq1edn *
localDW ) { boolean_T b_yn ; lx5pzbjgnj ( Tout , Tfmaxs , & localB ->
aqualkdqvn , & localDW -> aqualkdqvn ) ; b_yn = localB -> aqualkdqvn .
i2nh5egmwl ; return b_yn ; } static boolean_T oknnk3qrza ( real_T Tout ,
real_T Tfmaxs , gzahetipq4 * localB , epqdxq1edn * localDW , eyoob242x4 *
localP ) { boolean_T b_yn ; jkqilwbv4l ( Tout , Tfmaxs , & localB ->
i5fcczml0p , & localDW -> i5fcczml0p , & localP -> i5fcczml0p ) ; b_yn =
localB -> i5fcczml0p . i5lz300mk1 ; return b_yn ; } void efyr52spdx ( real_T
rtp_omegao , gzahetipq4 * localB , epqdxq1edn * localDW , eyoob242x4 * localP
, jipem2r5u4 * localX ) { localDW -> dstnpi0fei = 0U ; localDW -> ia5mclwmd4
= nrvxfifrf3 ; localB -> oolyaa4dee = 0.0 ; localB -> d0lvy2grh0 = 0.0 ;
localB -> eakoriygy1 = 0.0 ; localB -> gu5oi5vicm = 0.0 ; kk0gqeonff ( &
localB -> aqualkdqvn , & localP -> aqualkdqvn ) ; fvcqjct50p ( & localB ->
i5fcczml0p , & localDW -> i5fcczml0p , & localP -> i5fcczml0p ) ; bh1yzkl0yd
( rtp_omegao , & localX -> fkdt002bwx ) ; } void gkwx1uvgy3 ( gzahetipq4 *
localB , epqdxq1edn * localDW ) { localDW -> dstnpi0fei = 0U ; localDW ->
ia5mclwmd4 = nrvxfifrf3 ; localB -> oolyaa4dee = 0.0 ; localB -> d0lvy2grh0 =
0.0 ; localB -> eakoriygy1 = 0.0 ; localB -> gu5oi5vicm = 0.0 ; } void
mkid0gorbi ( hcopmldpph * const a5ree4wwe5 , epqdxq1edn * localDW ,
mngph55n5r * localXdis ) { if ( localDW -> ia5mclwmd4 == fygjrc0bwn ) {
mbjlcj4mlk ( a5ree4wwe5 ) ; } if ( localDW -> ia5mclwmd4 == ojhcgwmuav ) {
fpmjbkubaz ( a5ree4wwe5 , & localXdis -> fkdt002bwx ) ; } } void bxwynbswnf (
hcopmldpph * const a5ree4wwe5 , epqdxq1edn * localDW , mngph55n5r * localXdis
) { if ( localDW -> ia5mclwmd4 == fygjrc0bwn ) { oxojvdus0j ( a5ree4wwe5 ) ;
} if ( localDW -> ia5mclwmd4 == ojhcgwmuav ) { ihxvxssvuy ( a5ree4wwe5 , &
localXdis -> fkdt002bwx ) ; } } void p3l4kwjfse ( gzahetipq4 * localB ) {
localB -> oolyaa4dee = 0.0 ; localB -> d0lvy2grh0 = 0.0 ; localB ->
gu5oi5vicm = 0.0 ; localB -> eakoriygy1 = 0.0 ; ehvsb4g243 ( & localB ->
gu5oi5vicm , & localB -> oolyaa4dee , & localB -> d0lvy2grh0 , & localB ->
eakoriygy1 ) ; bl2yl1izeh ( & localB -> aqualkdqvn ) ; lqozigtnao ( & localB
-> i5fcczml0p ) ; bxtrkjpjgc ( & localB -> oolyaa4dee , & localB ->
d0lvy2grh0 , & localB -> gu5oi5vicm , & localB -> eakoriygy1 , & localB ->
fkdt002bwx ) ; } void b5prwuabwt ( hcopmldpph * const a5ree4wwe5 , real_T
kx4svy31tg , real_T br5yrlp4to , real_T dq54xdamlz , real_T rtp_omegao ,
real_T rtp_br , real_T rtp_Iyy , real_T rtp_OmegaTol , gzahetipq4 * localB ,
epqdxq1edn * localDW , eyoob242x4 * localP , jipem2r5u4 * localX , mngph55n5r
* localXdis ) { if ( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) )
{ localDW -> jg0v2cyy4k = rtmGetTaskTime ( a5ree4wwe5 , 0 ) ; if ( localDW ->
dstnpi0fei == 0U ) { localDW -> dstnpi0fei = 1U ; localX -> fkdt002bwx .
cxk3fsuqri = rtp_omegao ; localDW -> ia5mclwmd4 = ojhcgwmuav ; fpmjbkubaz (
a5ree4wwe5 , & localXdis -> fkdt002bwx ) ; ndg43gdj2c ( dq54xdamlz ,
kx4svy31tg , & localB -> oolyaa4dee , & localB -> d0lvy2grh0 , & localB ->
gu5oi5vicm , & localB -> eakoriygy1 , rtp_br , rtp_Iyy , & localB ->
fkdt002bwx , & localP -> fkdt002bwx , & localX -> fkdt002bwx ) ; localDW ->
kevuk2jdkp = true ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } else if ( localDW -> ia5mclwmd4 == fygjrc0bwn ) { if (
k5qdrctgwd ( kx4svy31tg , br5yrlp4to , localB , localDW ) ) { localX ->
fkdt002bwx . cxk3fsuqri = 0.0 ; localDW -> hgortb0uau = false ; oxojvdus0j (
a5ree4wwe5 ) ; localDW -> ia5mclwmd4 = ojhcgwmuav ; fpmjbkubaz ( a5ree4wwe5 ,
& localXdis -> fkdt002bwx ) ; ndg43gdj2c ( dq54xdamlz , kx4svy31tg , & localB
-> oolyaa4dee , & localB -> d0lvy2grh0 , & localB -> gu5oi5vicm , & localB ->
eakoriygy1 , rtp_br , rtp_Iyy , & localB -> fkdt002bwx , & localP ->
fkdt002bwx , & localX -> fkdt002bwx ) ; localDW -> kevuk2jdkp = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( oknnk3qrza ( kx4svy31tg , br5yrlp4to , localB , localDW , localP
) && ( muDoubleScalarAbs ( localB -> oolyaa4dee ) <= rtp_OmegaTol ) ) {
localDW -> kevuk2jdkp = false ; ihxvxssvuy ( a5ree4wwe5 , & localXdis ->
fkdt002bwx ) ; localDW -> ia5mclwmd4 = fygjrc0bwn ; mbjlcj4mlk ( a5ree4wwe5 )
; hpjac0modf ( a5ree4wwe5 , kx4svy31tg , & localB -> gu5oi5vicm , & localB ->
oolyaa4dee , & localB -> d0lvy2grh0 , & localB -> eakoriygy1 , & localP ->
fsjpudim4x ) ; localDW -> hgortb0uau = true ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} if ( localDW -> ia5mclwmd4 == fygjrc0bwn ) { if ( ! localDW -> hgortb0uau )
{ hpjac0modf ( a5ree4wwe5 , kx4svy31tg , & localB -> gu5oi5vicm , & localB ->
oolyaa4dee , & localB -> d0lvy2grh0 , & localB -> eakoriygy1 , & localP ->
fsjpudim4x ) ; } else { localDW -> hgortb0uau = false ; } } else if ( !
localDW -> kevuk2jdkp ) { ndg43gdj2c ( dq54xdamlz , kx4svy31tg , & localB ->
oolyaa4dee , & localB -> d0lvy2grh0 , & localB -> gu5oi5vicm , & localB ->
eakoriygy1 , rtp_br , rtp_Iyy , & localB -> fkdt002bwx , & localP ->
fkdt002bwx , & localX -> fkdt002bwx ) ; } else { localDW -> kevuk2jdkp =
false ; } } void b5prwuabwtTID2 ( real_T rtp_br , gzahetipq4 * localB ,
eyoob242x4 * localP ) { jkqilwbv4lTID2 ( rtp_br , & localB -> i5fcczml0p , &
localP -> i5fcczml0p ) ; } void dq1cbs3e5h ( gzahetipq4 * localB , epqdxq1edn
* localDW , fvwoypcxq5 * localXdot ) { localXdot -> fkdt002bwx . cxk3fsuqri =
0.0 ; if ( localDW -> ia5mclwmd4 == ojhcgwmuav ) { btu025qxla ( & localB ->
fkdt002bwx , & localXdot -> fkdt002bwx ) ; } if ( localDW -> ia5mclwmd4 ==
fygjrc0bwn ) { if ( localDW -> hgortb0uau ) { localDW -> hgortb0uau = false ;
} } else if ( localDW -> kevuk2jdkp ) { localDW -> kevuk2jdkp = false ; } }
void eqyc2wn3m1 ( hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW , edp3webv0p * localX ) { int32_T ggxhvsmzpg ; int32_T
jzsp3rpdl2 ; boolean_T tmp ; localDW -> jg0qnrcaox = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { localX -> ncmmxrrgvr [ 0 ] = 0.0 ;
localX -> ncmmxrrgvr [ 1 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ;
if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> jg0qnrcaox = ! tmp ; } else { localDW -> jg0qnrcaox = 1 ; } localX ->
d22cefpjxi = 0.0 ; } localX -> d5vyxqghh0 [ 0 ] = akbgnuupjz . P_134 ; localX
-> noatsby3ej [ 0 ] = akbgnuupjz . P_117 [ 0 ] ; localX -> d5vyxqghh0 [ 1 ] =
akbgnuupjz . P_134 ; localX -> noatsby3ej [ 1 ] = akbgnuupjz . P_117 [ 1 ] ;
localX -> in4ouu3rj0 = akbgnuupjz . P_122 ; localX -> fmsvpqigtm = akbgnuupjz
. P_120 ; localDW -> mt1hoilqmr = akbgnuupjz . P_146 ; localDW -> cudcy0ioif
= 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> cudcy0ioif = ! tmp ; } else {
localDW -> cudcy0ioif = 1 ; } localX -> erxydw3o5p = 0.0 ; } localX ->
ik1v113z3z = akbgnuupjz . P_123 ; localX -> neffdf1vy0 = akbgnuupjz . P_147 ;
localDW -> es5rj255h5 = akbgnuupjz . P_153 ; localDW -> o4aqvkyq1t = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> o4aqvkyq1t = ! tmp ; } else { localDW -> o4aqvkyq1t = 1 ; } localX ->
pclrccjq3k = 0.0 ; } localX -> kt2st0esai = akbgnuupjz . P_124 ; localX ->
exw1srp224 = akbgnuupjz . P_154 ; localX -> lwzedupgn2 = akbgnuupjz . P_129 ;
localDW -> jrm4ykfn0y = akbgnuupjz . P_171 ; localDW -> huxlbxlfje = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> huxlbxlfje = ! tmp ; } else { localDW -> huxlbxlfje = 1 ; } localX ->
p2xoeqjb3s [ 0 ] = 0.0 ; localX -> p2xoeqjb3s [ 1 ] = 0.0 ; } localX ->
avikqegq2n = akbgnuupjz . P_125 ; localX -> ifgziugp0p = akbgnuupjz . P_109 ;
localDW -> e030p3eagm = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> e030p3eagm = ! tmp ; } else {
localDW -> e030p3eagm = 1 ; } localX -> g4g1uqrgzm [ 0 ] = 0.0 ; localX ->
g4g1uqrgzm [ 1 ] = 0.0 ; } localDW -> me01n3t1qo = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> me01n3t1qo = ! tmp ; } else { localDW -> me01n3t1qo = 1 ; } localX ->
hygmn4dvse [ 0 ] = 0.0 ; localX -> hygmn4dvse [ 1 ] = 0.0 ; } localDW ->
gvgnat3tn4 = akbgnuupjz . P_174 ; localDW -> gq1ouncodd = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> gq1ouncodd = ! tmp ; } else { localDW -> gq1ouncodd = 1 ; } localX ->
oeumeycw3k [ 0 ] = 0.0 ; localX -> oeumeycw3k [ 1 ] = 0.0 ; } localDW ->
ncaeuttxru = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> ncaeuttxru = ! tmp ; } else {
localDW -> ncaeuttxru = 1 ; } } localX -> ipy12fiarf = akbgnuupjz . P_190 ;
localX -> evw1nga20d = akbgnuupjz . P_110 ; for ( jzsp3rpdl2 = 0 ; jzsp3rpdl2
< 1 ; jzsp3rpdl2 ++ ) { fhk5xmrghf ( akbgnuupjz . P_111 , & localB ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW -> nod5vp1cyy [ jzsp3rpdl2
] . fate2u2iog , & akbgnuupjz . nod5vp1cyy . fate2u2iog , & localX ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ;
ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) { efyr52spdx ( akbgnuupjz . P_112 , & localB
-> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & localDW -> eblhn1q21v [
ggxhvsmzpg ] . fd4qjwy5lm , & akbgnuupjz . eblhn1q21v . fd4qjwy5lm , & localX
-> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } } void er1nyhy4k5 (
hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB , lvsoqlxlcs * localDW ,
edp3webv0p * localX ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; boolean_T
tmp ; localDW -> jg0qnrcaox = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) {
localX -> ncmmxrrgvr [ 0 ] = 0.0 ; localX -> ncmmxrrgvr [ 1 ] = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> jg0qnrcaox = ! tmp ; } else {
localDW -> jg0qnrcaox = 1 ; } localX -> d22cefpjxi = 0.0 ; } localX ->
d5vyxqghh0 [ 0 ] = akbgnuupjz . P_134 ; localX -> noatsby3ej [ 0 ] =
akbgnuupjz . P_117 [ 0 ] ; localX -> d5vyxqghh0 [ 1 ] = akbgnuupjz . P_134 ;
localX -> noatsby3ej [ 1 ] = akbgnuupjz . P_117 [ 1 ] ; localX -> in4ouu3rj0
= akbgnuupjz . P_122 ; localX -> fmsvpqigtm = akbgnuupjz . P_120 ; localDW ->
mt1hoilqmr = akbgnuupjz . P_146 ; localDW -> cudcy0ioif = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> cudcy0ioif = ! tmp ; } else { localDW -> cudcy0ioif = 1 ; } localX ->
erxydw3o5p = 0.0 ; } localX -> ik1v113z3z = akbgnuupjz . P_123 ; localX ->
neffdf1vy0 = akbgnuupjz . P_147 ; localDW -> es5rj255h5 = akbgnuupjz . P_153
; localDW -> o4aqvkyq1t = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp
= slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> o4aqvkyq1t = ! tmp ; } else {
localDW -> o4aqvkyq1t = 1 ; } localX -> pclrccjq3k = 0.0 ; } localX ->
kt2st0esai = akbgnuupjz . P_124 ; localX -> exw1srp224 = akbgnuupjz . P_154 ;
localX -> lwzedupgn2 = akbgnuupjz . P_129 ; localDW -> jrm4ykfn0y =
akbgnuupjz . P_171 ; localDW -> huxlbxlfje = 1 ; if ( rtmIsFirstInitCond (
a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp
= ( slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> huxlbxlfje = ! tmp ; } else {
localDW -> huxlbxlfje = 1 ; } localX -> p2xoeqjb3s [ 0 ] = 0.0 ; localX ->
p2xoeqjb3s [ 1 ] = 0.0 ; } localX -> avikqegq2n = akbgnuupjz . P_125 ; localX
-> ifgziugp0p = akbgnuupjz . P_109 ; localDW -> e030p3eagm = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> e030p3eagm = ! tmp ; } else { localDW -> e030p3eagm = 1 ; } localX ->
g4g1uqrgzm [ 0 ] = 0.0 ; localX -> g4g1uqrgzm [ 1 ] = 0.0 ; } localDW ->
me01n3t1qo = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> me01n3t1qo = ! tmp ; } else {
localDW -> me01n3t1qo = 1 ; } localX -> hygmn4dvse [ 0 ] = 0.0 ; localX ->
hygmn4dvse [ 1 ] = 0.0 ; } localDW -> gvgnat3tn4 = akbgnuupjz . P_174 ;
localDW -> gq1ouncodd = 1 ; if ( rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW -> gq1ouncodd = ! tmp ; } else {
localDW -> gq1ouncodd = 1 ; } localX -> oeumeycw3k [ 0 ] = 0.0 ; localX ->
oeumeycw3k [ 1 ] = 0.0 ; } localDW -> ncaeuttxru = 1 ; if (
rtmIsFirstInitCond ( a5ree4wwe5 ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( a5ree4wwe5 -> _mdlRefSfcnS ) ) ; localDW
-> ncaeuttxru = ! tmp ; } else { localDW -> ncaeuttxru = 1 ; } } localX ->
ipy12fiarf = akbgnuupjz . P_190 ; localX -> evw1nga20d = akbgnuupjz . P_110 ;
for ( jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { hjtn2cfetd ( &
localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW -> nod5vp1cyy [
jzsp3rpdl2 ] . fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ;
ggxhvsmzpg ++ ) { gkwx1uvgy3 ( & localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & localDW -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } } void
lcrhwa0gkm ( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs * localDW ,
bbuzvmnhsa * localXdis ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; for (
jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ; jzsp3rpdl2 ++ ) { hbitco4kzk ( a5ree4wwe5 ,
& localDW -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localXdis ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ;
ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) { mkid0gorbi ( a5ree4wwe5 , & localDW ->
eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & localXdis -> eblhn1q21v [
ggxhvsmzpg ] . fd4qjwy5lm ) ; } } void gjrktinair ( hcopmldpph * const
a5ree4wwe5 , lvsoqlxlcs * localDW , bbuzvmnhsa * localXdis ) { int32_T
ggxhvsmzpg ; int32_T jzsp3rpdl2 ; for ( jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ;
jzsp3rpdl2 ++ ) { pa01ypljzv ( a5ree4wwe5 , & localDW -> nod5vp1cyy [
jzsp3rpdl2 ] . fate2u2iog , & localXdis -> nod5vp1cyy [ jzsp3rpdl2 ] .
fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) {
bxwynbswnf ( a5ree4wwe5 , & localDW -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm
, & localXdis -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } } void
ka5dospcnh ( pw4f2kjo3k * localB , lvsoqlxlcs * localDW ) { int32_T
ggxhvsmzpg ; int32_T jzsp3rpdl2 ; int32_T ji4pzz2y51 ; int32_T i ; for (
ji4pzz2y51 = 0 ; ji4pzz2y51 < 4 ; ji4pzz2y51 ++ ) { localB -> izrftnejci [
ji4pzz2y51 ] . fweg25rnqo [ 0 ] = 0.0 ; localB -> izrftnejci [ ji4pzz2y51 ] .
fweg25rnqo [ 1 ] = 0.0 ; localB -> izrftnejci [ ji4pzz2y51 ] . fweg25rnqo [ 2
] = 0.0 ; for ( i = 0 ; i < 9 ; i ++ ) { localB -> izrftnejci [ ji4pzz2y51 ]
. ne2trydobc [ i ] = 0.0 ; } } for ( jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ;
jzsp3rpdl2 ++ ) { jzxqghlsdl ( & localB -> nod5vp1cyy [ jzsp3rpdl2 ] .
fate2u2iog ) ; } for ( ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) {
p3l4kwjfse ( & localB -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } localB
-> jnqiz0fdem = akbgnuupjz . P_74 ; localB -> pl0bi2byrv = akbgnuupjz . P_75
; localB -> opikxuzjsk = akbgnuupjz . P_76 ; localDW -> kxp34i0kfp = 0 ;
localDW -> mdigxevyus = 0 ; localDW -> bbyh2lmjuh = 0 ; } void DrivetrainEv (
hcopmldpph * const a5ree4wwe5 , const real_T * a10dw5c4tm , const real_T *
ccn5sowg0n , const real_T * dxefyqzind , const real_T * iudgegw2lz , real_T *
hk0t0gzq0m , real_T * jnhw4b1r4n , real_T * owlkju3hdo , real_T * ohin3fh0rr
, real_T * hcjqlxj4it , real_T * mksfc4ttfd , real_T * ee2tojlijk , real_T *
gjh4llnztm , pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX
, bbuzvmnhsa * localXdis , at3vnbf5fi * localZCE ) { real_T caftufhtc1 ;
real_T gkvpdzxm03 ; real_T auzp2mjq1u ; real_T hotote20uy ; real_T je5giw5qez
; real_T idc5jscwvr ; real_T ow4sny3zkx ; int32_T ggxhvsmzpg ; int32_T
jzsp3rpdl2 ; int32_T ji4pzz2y51 ; real_T m4lufu4qck_p [ 12 ] ; real_T
nb5rimpcw4_p [ 9 ] ; real_T hif5e4kpri_p [ 6 ] ; real_T jmaspekorh_p [ 4 ] ;
real_T ne14xk204e_p [ 4 ] ; real_T hakfxhvoqd_p [ 3 ] ; real_T hcngskyyjy [ 3
] ; real_T ilu5vfj13o_p [ 3 ] ; real_T lezo4vnn1w [ 3 ] ; real_T nb5rimpcw4_e
[ 3 ] ; real_T agxoyzdt0j_p [ 2 ] ; real_T p4jpfqempz_p [ 2 ] ; real_T
amql2bvc4p_p ; real_T axap21g3h1_p ; real_T cbd12qqlri_p ; real_T
ckdtw22quu_idx_0 ; real_T ckdtw22quu_idx_2 ; real_T g13m2c03ah_p ; real_T
g1fhgoqbyu_p ; real_T h4mpc0obwq_p ; real_T j10rw1goby_p ; real_T
j2w1qpuqxf_p ; real_T jb4mtkb30x ; real_T jyilkxorup_idx_0 ; real_T
jyilkxorup_idx_2 ; real_T kc42r1shx0_p ; real_T mea0n0rwos_idx_0 ; real_T
mea0n0rwos_idx_1 ; int32_T i ; boolean_T xHasBeenChanged ; ZCEventType
zcEvent ; if ( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { if (
localDW -> jg0qnrcaox != 0 ) { jb4mtkb30x = muDoubleScalarAtan2 ( akbgnuupjz
. P_130 , akbgnuupjz . P_129 ) ; localX -> ncmmxrrgvr [ 0 ] = akbgnuupjz .
P_128 * muDoubleScalarCos ( jb4mtkb30x ) ; localX -> ncmmxrrgvr [ 1 ] =
akbgnuupjz . P_128 * muDoubleScalarSin ( jb4mtkb30x ) ; } mea0n0rwos_idx_0 =
localX -> ncmmxrrgvr [ 0 ] ; mea0n0rwos_idx_1 = localX -> ncmmxrrgvr [ 1 ] ;
} else { mea0n0rwos_idx_0 = localX -> ncmmxrrgvr [ 0 ] ; mea0n0rwos_idx_1 =
localX -> ncmmxrrgvr [ 1 ] ; } localB -> hnzlquu01h [ 0 ] = mea0n0rwos_idx_0
; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 ,
0 ) ) { localB -> hnzlquu01h [ 1 ] = akbgnuupjz . P_133 ; } localB ->
hnzlquu01h [ 2 ] = mea0n0rwos_idx_1 ; * hk0t0gzq0m = localB -> hnzlquu01h [ 0
] ; localB -> e3vb1pkeqz [ 0 ] = 0.0 ; localB -> e3vb1pkeqz [ 1 ] = 0.0 ;
m4lufu4qck_p [ 0 ] = - * iudgegw2lz ; m4lufu4qck_p [ 1 ] = - 0.0 ;
m4lufu4qck_p [ 2 ] = - 0.0 ; m4lufu4qck_p [ 3 ] = 0.0 ; m4lufu4qck_p [ 4 ] =
0.0 ; localB -> elfgwu2mmb [ 0 ] = localX -> noatsby3ej [ 0 ] ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) )
{ localB -> elfgwu2mmb [ 1 ] = akbgnuupjz . P_135 ; localB -> cbr50rtmin [ 0
] = akbgnuupjz . P_136 ; } localB -> elfgwu2mmb [ 2 ] = localX -> noatsby3ej
[ 1 ] ; j10rw1goby_p = localX -> in4ouu3rj0 ; localB -> cbr50rtmin [ 1 ] =
localX -> in4ouu3rj0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) &&
rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) ) { localB -> cbr50rtmin [ 2 ] =
akbgnuupjz . P_139 ; } hakfxhvoqd_p [ 0 ] = akbgnuupjz . P_211 ; hakfxhvoqd_p
[ 1 ] = localB -> cbr50rtmin [ 1 ] ; hakfxhvoqd_p [ 2 ] = akbgnuupjz . P_209
; muDoubleScalarSinCos ( akbgnuupjz . P_211 , & lezo4vnn1w [ 0 ] , &
hcngskyyjy [ 0 ] ) ; muDoubleScalarSinCos ( localB -> cbr50rtmin [ 1 ] , &
lezo4vnn1w [ 1 ] , & hcngskyyjy [ 1 ] ) ; muDoubleScalarSinCos ( akbgnuupjz .
P_209 , & lezo4vnn1w [ 2 ] , & hcngskyyjy [ 2 ] ) ; nb5rimpcw4_p [ 0 ] =
hcngskyyjy [ 0 ] * hcngskyyjy [ 1 ] ; jyilkxorup_idx_2 = lezo4vnn1w [ 1 ] *
lezo4vnn1w [ 2 ] ; nb5rimpcw4_p [ 1 ] = jyilkxorup_idx_2 * hcngskyyjy [ 0 ] -
lezo4vnn1w [ 0 ] * hcngskyyjy [ 2 ] ; ckdtw22quu_idx_0 = lezo4vnn1w [ 1 ] *
hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 2 ] = ckdtw22quu_idx_0 * hcngskyyjy [ 0 ] +
lezo4vnn1w [ 0 ] * lezo4vnn1w [ 2 ] ; nb5rimpcw4_p [ 3 ] = lezo4vnn1w [ 0 ] *
hcngskyyjy [ 1 ] ; nb5rimpcw4_p [ 4 ] = jyilkxorup_idx_2 * lezo4vnn1w [ 0 ] +
hcngskyyjy [ 0 ] * hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 5 ] = ckdtw22quu_idx_0 *
lezo4vnn1w [ 0 ] - hcngskyyjy [ 0 ] * lezo4vnn1w [ 2 ] ; nb5rimpcw4_p [ 6 ] =
- lezo4vnn1w [ 1 ] ; nb5rimpcw4_p [ 7 ] = hcngskyyjy [ 1 ] * lezo4vnn1w [ 2 ]
; nb5rimpcw4_p [ 8 ] = hcngskyyjy [ 1 ] * hcngskyyjy [ 2 ] ; jb4mtkb30x =
localB -> ebaa0kh4i5 [ 1 ] ; jyilkxorup_idx_2 = localB -> ebaa0kh4i5 [ 0 ] ;
ckdtw22quu_idx_0 = localB -> ebaa0kh4i5 [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ )
{ nb5rimpcw4_e [ i ] = ( nb5rimpcw4_p [ 3 * i + 1 ] * jb4mtkb30x +
nb5rimpcw4_p [ 3 * i ] * jyilkxorup_idx_2 ) + nb5rimpcw4_p [ 3 * i + 2 ] *
ckdtw22quu_idx_0 ; muDoubleScalarSinCos ( hakfxhvoqd_p [ i ] , & hcngskyyjy [
i ] , & lezo4vnn1w [ i ] ) ; } nb5rimpcw4_p [ 0 ] = lezo4vnn1w [ 0 ] *
lezo4vnn1w [ 1 ] ; jyilkxorup_idx_2 = hcngskyyjy [ 1 ] * hcngskyyjy [ 2 ] ;
nb5rimpcw4_p [ 1 ] = jyilkxorup_idx_2 * lezo4vnn1w [ 0 ] - hcngskyyjy [ 0 ] *
lezo4vnn1w [ 2 ] ; ckdtw22quu_idx_0 = hcngskyyjy [ 1 ] * lezo4vnn1w [ 2 ] ;
nb5rimpcw4_p [ 2 ] = ckdtw22quu_idx_0 * lezo4vnn1w [ 0 ] + hcngskyyjy [ 0 ] *
hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 3 ] = hcngskyyjy [ 0 ] * lezo4vnn1w [ 1 ] ;
nb5rimpcw4_p [ 4 ] = jyilkxorup_idx_2 * hcngskyyjy [ 0 ] + lezo4vnn1w [ 0 ] *
lezo4vnn1w [ 2 ] ; nb5rimpcw4_p [ 5 ] = ckdtw22quu_idx_0 * hcngskyyjy [ 0 ] -
lezo4vnn1w [ 0 ] * hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 6 ] = - hcngskyyjy [ 1 ]
; nb5rimpcw4_p [ 7 ] = lezo4vnn1w [ 1 ] * hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 8
] = lezo4vnn1w [ 1 ] * lezo4vnn1w [ 2 ] ; jb4mtkb30x = localB -> i15mn4m5ny [
1 ] ; jyilkxorup_idx_2 = localB -> i15mn4m5ny [ 0 ] ; ckdtw22quu_idx_2 =
localB -> i15mn4m5ny [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { hcngskyyjy [ i ]
= ( nb5rimpcw4_p [ 3 * i + 1 ] * jb4mtkb30x + nb5rimpcw4_p [ 3 * i ] *
jyilkxorup_idx_2 ) + nb5rimpcw4_p [ 3 * i + 2 ] * ckdtw22quu_idx_2 ; } if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) )
{ localB -> p41wquk2oo [ 0 ] = akbgnuupjz . P_140 ; } localB -> lopmnb3enx =
localX -> fmsvpqigtm ; localB -> p41wquk2oo [ 1 ] = localB -> lopmnb3enx ; if
( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 )
) { localB -> p41wquk2oo [ 2 ] = akbgnuupjz . P_141 ; } m4lufu4qck_p [ 5 ] =
( look1_binlxpw ( ( ( localB -> p41wquk2oo [ 0 ] * localB -> ebaa0kh4i5 [ 1 ]
- localB -> ebaa0kh4i5 [ 0 ] * localB -> p41wquk2oo [ 1 ] ) + localB ->
hnzlquu01h [ 2 ] ) - localB -> e3vb1pkeqz [ 0 ] , akbgnuupjz . P_78 ,
akbgnuupjz . P_12 , 6U ) + look1_binlxpw ( ( localB -> elfgwu2mmb [ 2 ] +
nb5rimpcw4_e [ 2 ] ) - localX -> d5vyxqghh0 [ 0 ] , akbgnuupjz . P_80 ,
akbgnuupjz . P_14 , 5U ) ) * akbgnuupjz . P_142 [ 0 ] ; m4lufu4qck_p [ 6 ] =
0.0 ; m4lufu4qck_p [ 7 ] = 0.0 ; m4lufu4qck_p [ 8 ] = ( look1_binlxpw ( ( (
localB -> p41wquk2oo [ 0 ] * localB -> i15mn4m5ny [ 1 ] - localB ->
i15mn4m5ny [ 0 ] * localB -> p41wquk2oo [ 1 ] ) + localB -> hnzlquu01h [ 2 ]
) - localB -> e3vb1pkeqz [ 1 ] , akbgnuupjz . P_79 , akbgnuupjz . P_13 , 6U )
+ look1_binlxpw ( ( localB -> elfgwu2mmb [ 2 ] + hcngskyyjy [ 2 ] ) - localX
-> d5vyxqghh0 [ 1 ] , akbgnuupjz . P_81 , akbgnuupjz . P_15 , 5U ) ) *
akbgnuupjz . P_142 [ 1 ] ; m4lufu4qck_p [ 9 ] = localB -> gbi35l44aj [ 0 ] ;
m4lufu4qck_p [ 10 ] = localB -> gbi35l44aj [ 1 ] ; m4lufu4qck_p [ 11 ] =
localB -> gbi35l44aj [ 2 ] ; jmaspekorh_p [ 0 ] = - localB -> cbr50rtmin [ 1
] ; jmaspekorh_p [ 1 ] = - localB -> cbr50rtmin [ 1 ] ; jmaspekorh_p [ 2 ] =
- localB -> cbr50rtmin [ 1 ] ; jb4mtkb30x = 0.017453292519943295 * *
dxefyqzind ; jmaspekorh_p [ 3 ] = - localB -> cbr50rtmin [ 1 ] - jb4mtkb30x ;
ji4pzz2y51 = 0 ; while ( ji4pzz2y51 < 4 ) { localB -> izrftnejci [ ji4pzz2y51
] . fweg25rnqo [ 1 ] = jmaspekorh_p [ ji4pzz2y51 ] ; localB -> izrftnejci [
ji4pzz2y51 ] . fweg25rnqo [ 0 ] = akbgnuupjz . izrftnejci . P_1 ; localB ->
izrftnejci [ ji4pzz2y51 ] . fweg25rnqo [ 2 ] = akbgnuupjz . izrftnejci . P_0
; hcngskyyjy [ 0 ] = m4lufu4qck_p [ 3 * ji4pzz2y51 ] ; muDoubleScalarSinCos (
localB -> izrftnejci [ ji4pzz2y51 ] . fweg25rnqo [ 0 ] , & jyilkxorup_idx_0 ,
& ckdtw22quu_idx_0 ) ; hcngskyyjy [ 1 ] = m4lufu4qck_p [ 3 * ji4pzz2y51 + 1 ]
; muDoubleScalarSinCos ( localB -> izrftnejci [ ji4pzz2y51 ] . fweg25rnqo [ 1
] , & jb4mtkb30x , & j2w1qpuqxf_p ) ; hcngskyyjy [ 2 ] = m4lufu4qck_p [ 3 *
ji4pzz2y51 + 2 ] ; muDoubleScalarSinCos ( localB -> izrftnejci [ ji4pzz2y51 ]
. fweg25rnqo [ 2 ] , & jyilkxorup_idx_2 , & ckdtw22quu_idx_2 ) ; localB ->
izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 0 ] = ckdtw22quu_idx_0 *
j2w1qpuqxf_p ; h4mpc0obwq_p = jb4mtkb30x * jyilkxorup_idx_2 ; localB ->
izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 1 ] = h4mpc0obwq_p *
ckdtw22quu_idx_0 - jyilkxorup_idx_0 * ckdtw22quu_idx_2 ; axap21g3h1_p =
jb4mtkb30x * ckdtw22quu_idx_2 ; localB -> izrftnejci [ ji4pzz2y51 ] .
ne2trydobc [ 2 ] = axap21g3h1_p * ckdtw22quu_idx_0 + jyilkxorup_idx_0 *
jyilkxorup_idx_2 ; localB -> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 3 ] =
jyilkxorup_idx_0 * j2w1qpuqxf_p ; localB -> izrftnejci [ ji4pzz2y51 ] .
ne2trydobc [ 4 ] = h4mpc0obwq_p * jyilkxorup_idx_0 + ckdtw22quu_idx_0 *
ckdtw22quu_idx_2 ; localB -> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 5 ] =
axap21g3h1_p * jyilkxorup_idx_0 - ckdtw22quu_idx_0 * jyilkxorup_idx_2 ;
localB -> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 6 ] = - jb4mtkb30x ;
localB -> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 7 ] = j2w1qpuqxf_p *
jyilkxorup_idx_2 ; localB -> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 8 ] =
j2w1qpuqxf_p * ckdtw22quu_idx_2 ; jyilkxorup_idx_0 = hcngskyyjy [ 1 ] ;
jb4mtkb30x = hcngskyyjy [ 0 ] ; jyilkxorup_idx_2 = hcngskyyjy [ 2 ] ; for ( i
= 0 ; i < 3 ; i ++ ) { localB -> jpggl1dn5d [ i + 3 * ji4pzz2y51 ] = ( localB
-> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 3 * i + 1 ] * jyilkxorup_idx_0 +
localB -> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 3 * i ] * jb4mtkb30x ) +
localB -> izrftnejci [ ji4pzz2y51 ] . ne2trydobc [ 3 * i + 2 ] *
jyilkxorup_idx_2 ; } ji4pzz2y51 ++ ; } jyilkxorup_idx_0 = akbgnuupjz . P_143
[ 0 ] * localB -> jpggl1dn5d [ 3 ] ; jyilkxorup_idx_2 = akbgnuupjz . P_143 [
2 ] * localB -> jpggl1dn5d [ 5 ] ; axap21g3h1_p = akbgnuupjz . P_44 *
jyilkxorup_idx_2 ; ckdtw22quu_idx_0 = akbgnuupjz . P_144 [ 0 ] * localB ->
jpggl1dn5d [ 6 ] ; ckdtw22quu_idx_2 = akbgnuupjz . P_144 [ 2 ] * localB ->
jpggl1dn5d [ 8 ] ; g13m2c03ah_p = akbgnuupjz . P_49 * ckdtw22quu_idx_2 ;
hif5e4kpri_p [ 1 ] = akbgnuupjz . P_143 [ 1 ] * localB -> jpggl1dn5d [ 4 ] ;
hif5e4kpri_p [ 4 ] = akbgnuupjz . P_144 [ 1 ] * localB -> jpggl1dn5d [ 7 ] ;
g1fhgoqbyu_p = ( jyilkxorup_idx_0 * jyilkxorup_idx_0 + hif5e4kpri_p [ 1 ] *
hif5e4kpri_p [ 1 ] ) + jyilkxorup_idx_2 * jyilkxorup_idx_2 ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if ( localDW -> kxp34i0kfp != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( a5ree4wwe5 ->
_mdlRefSfcnS ) ; localDW -> kxp34i0kfp = 0 ; } jb4mtkb30x =
muDoubleScalarSqrt ( g1fhgoqbyu_p ) ; } else if ( g1fhgoqbyu_p < 0.0 ) {
jb4mtkb30x = - muDoubleScalarSqrt ( muDoubleScalarAbs ( g1fhgoqbyu_p ) ) ;
localDW -> kxp34i0kfp = 1 ; } else { jb4mtkb30x = muDoubleScalarSqrt (
g1fhgoqbyu_p ) ; } kc42r1shx0_p = akbgnuupjz . P_145 * jb4mtkb30x ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) )
{ localB -> cax2qrmz2d = localDW -> mt1hoilqmr ; } if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> lya3g2fowv , ( localB -> cax2qrmz2d )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> cudcy0ioif != 0 ) ) {
xHasBeenChanged = ( localX -> d22cefpjxi != localB -> jnqiz0fdem ) ; localX
-> d22cefpjxi = localB -> jnqiz0fdem ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} g1fhgoqbyu_p = localX -> d22cefpjxi ; } else { g1fhgoqbyu_p = localX ->
d22cefpjxi ; } * owlkju3hdo = akbgnuupjz . P_50 * g1fhgoqbyu_p + akbgnuupjz .
P_87 * localX -> ik1v113z3z ; jb4mtkb30x = localX -> neffdf1vy0 ;
cbd12qqlri_p = * owlkju3hdo - localX -> neffdf1vy0 * localB -> ksrqely2mi ;
localB -> pkqpf5r3q4 = akbgnuupjz . P_148 * cbd12qqlri_p ; cbd12qqlri_p =
akbgnuupjz . P_149 * * ccn5sowg0n ; j2w1qpuqxf_p = cbd12qqlri_p * localB ->
ijvohtniqp * akbgnuupjz . P_72 * akbgnuupjz . P_102 ; if ( j2w1qpuqxf_p >
akbgnuupjz . P_150 ) { j2w1qpuqxf_p = akbgnuupjz . P_150 ; } else if (
j2w1qpuqxf_p < akbgnuupjz . P_151 ) { j2w1qpuqxf_p = akbgnuupjz . P_151 ; }
cbd12qqlri_p = akbgnuupjz . P_37 * akbgnuupjz . P_97 * j2w1qpuqxf_p ; localB
-> khmk1e3fae = akbgnuupjz . P_99 / akbgnuupjz . P_97 * cbd12qqlri_p ; localB
-> klmw1xamx0 = akbgnuupjz . P_97 / akbgnuupjz . P_97 * cbd12qqlri_p ;
jzsp3rpdl2 = 0 ; while ( jzsp3rpdl2 < 1 ) { je5giw5qez = localB -> pkqpf5r3q4
; idc5jscwvr = localB -> khmk1e3fae ; ow4sny3zkx = localB -> klmw1xamx0 ;
cddyh02qci ( a5ree4wwe5 , je5giw5qez , idc5jscwvr , ow4sny3zkx , akbgnuupjz .
P_111 , akbgnuupjz . P_64 , akbgnuupjz . P_16 , akbgnuupjz . P_42 * ( 0.327 *
rtP_wheel_diameter ) * 0.0 , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] .
fate2u2iog , & localDW -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , &
akbgnuupjz . nod5vp1cyy . fate2u2iog , & localX -> nod5vp1cyy [ jzsp3rpdl2 ]
. fate2u2iog , & localXdis -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; *
ee2tojlijk = localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog . laklrwxveo ;
jzsp3rpdl2 ++ ; } pafzrlxpms ( localB -> ksrqely2mi , kc42r1shx0_p , *
ee2tojlijk , localB -> hnzlquu01h [ 0 ] , akbgnuupjz . P_217 , akbgnuupjz .
P_218 , akbgnuupjz . P_219 , akbgnuupjz . P_220 , akbgnuupjz . P_94 ,
akbgnuupjz . P_221 , akbgnuupjz . P_222 , akbgnuupjz . P_223 , akbgnuupjz .
P_224 , akbgnuupjz . P_118 , akbgnuupjz . P_225 , akbgnuupjz . P_226 ,
akbgnuupjz . P_45 , akbgnuupjz . P_57 , akbgnuupjz . P_70 , akbgnuupjz .
P_227 , akbgnuupjz . P_228 , akbgnuupjz . P_229 , akbgnuupjz . P_61 ,
akbgnuupjz . P_47 , akbgnuupjz . P_230 , akbgnuupjz . P_231 , akbgnuupjz .
P_40 , akbgnuupjz . P_232 , akbgnuupjz . P_233 , akbgnuupjz . P_234 ,
akbgnuupjz . P_235 , akbgnuupjz . P_236 , 0.0 , akbgnuupjz . P_237 ,
akbgnuupjz . P_238 , akbgnuupjz . P_239 , akbgnuupjz . P_240 , akbgnuupjz .
P_241 , akbgnuupjz . P_242 , akbgnuupjz . P_243 , akbgnuupjz . P_244 ,
akbgnuupjz . P_245 , akbgnuupjz . P_246 , akbgnuupjz . P_247 , akbgnuupjz .
P_248 , akbgnuupjz . P_249 , akbgnuupjz . P_250 , akbgnuupjz . P_251 ,
akbgnuupjz . P_252 , akbgnuupjz . P_253 , akbgnuupjz . P_254 , akbgnuupjz .
P_255 , akbgnuupjz . P_256 , akbgnuupjz . P_257 , akbgnuupjz . P_258 ,
akbgnuupjz . P_259 , akbgnuupjz . P_214 , akbgnuupjz . P_260 , akbgnuupjz .
P_261 , akbgnuupjz . P_7 , akbgnuupjz . P_9 , akbgnuupjz . P_42 , akbgnuupjz
. P_92 , & localB -> f0qvxxi2xz ) ; * hcjqlxj4it = localB -> f0qvxxi2xz .
eyx53sezkx + localB -> f0qvxxi2xz . eyx53sezkx ; agxoyzdt0j_p [ 0 ] = *
hcjqlxj4it ; amql2bvc4p_p = ( ckdtw22quu_idx_0 * ckdtw22quu_idx_0 +
hif5e4kpri_p [ 4 ] * hif5e4kpri_p [ 4 ] ) + ckdtw22quu_idx_2 *
ckdtw22quu_idx_2 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if ( localDW ->
mdigxevyus != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW -> mdigxevyus = 0 ; } kc42r1shx0_p =
muDoubleScalarSqrt ( amql2bvc4p_p ) ; } else if ( amql2bvc4p_p < 0.0 ) {
kc42r1shx0_p = - muDoubleScalarSqrt ( muDoubleScalarAbs ( amql2bvc4p_p ) ) ;
localDW -> mdigxevyus = 1 ; } else { kc42r1shx0_p = muDoubleScalarSqrt (
amql2bvc4p_p ) ; } cbd12qqlri_p = akbgnuupjz . P_152 * kc42r1shx0_p ; if (
rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) )
{ localB -> hqpj34qdw3 = localDW -> es5rj255h5 ; } if (
ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent = rt_ZCFcn
( RISING_ZERO_CROSSING , & localZCE -> erhwkrr2qn , ( localB -> hqpj34qdw3 )
) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> o4aqvkyq1t != 0 ) ) {
xHasBeenChanged = ( localX -> erxydw3o5p != localB -> pl0bi2byrv ) ; localX
-> erxydw3o5p = localB -> pl0bi2byrv ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} amql2bvc4p_p = localX -> erxydw3o5p ; } else { amql2bvc4p_p = localX ->
erxydw3o5p ; } * ohin3fh0rr = akbgnuupjz . P_51 * amql2bvc4p_p + akbgnuupjz .
P_88 * localX -> kt2st0esai ; kc42r1shx0_p = localX -> exw1srp224 ;
j2w1qpuqxf_p = * ohin3fh0rr - localX -> exw1srp224 * localB -> d2avjf2agx ;
localB -> eqozydakce = akbgnuupjz . P_155 * j2w1qpuqxf_p ; j2w1qpuqxf_p =
akbgnuupjz . P_156 * * ccn5sowg0n ; j2w1qpuqxf_p = j2w1qpuqxf_p * localB ->
hi5xxwzl1w * akbgnuupjz . P_73 * akbgnuupjz . P_103 ; if ( j2w1qpuqxf_p >
akbgnuupjz . P_157 ) { j2w1qpuqxf_p = akbgnuupjz . P_157 ; } else if (
j2w1qpuqxf_p < akbgnuupjz . P_158 ) { j2w1qpuqxf_p = akbgnuupjz . P_158 ; }
j2w1qpuqxf_p *= akbgnuupjz . P_38 * akbgnuupjz . P_98 ; localB -> kl1ialzat1
= akbgnuupjz . P_100 / akbgnuupjz . P_98 * j2w1qpuqxf_p ; localB ->
egopa54lvs = akbgnuupjz . P_98 / akbgnuupjz . P_98 * j2w1qpuqxf_p ;
ggxhvsmzpg = 0 ; while ( ggxhvsmzpg < 1 ) { gkvpdzxm03 = localB -> eqozydakce
; auzp2mjq1u = localB -> kl1ialzat1 ; hotote20uy = localB -> egopa54lvs ;
b5prwuabwt ( a5ree4wwe5 , gkvpdzxm03 , auzp2mjq1u , hotote20uy , akbgnuupjz .
P_112 , akbgnuupjz . P_65 , akbgnuupjz . P_17 , akbgnuupjz . P_43 * ( 0.327 *
rtP_wheel_diameter ) * 0.0 , & localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & localDW -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , &
akbgnuupjz . eblhn1q21v . fd4qjwy5lm , & localX -> eblhn1q21v [ ggxhvsmzpg ]
. fd4qjwy5lm , & localXdis -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; *
gjh4llnztm = localB -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm . oolyaa4dee ;
ggxhvsmzpg ++ ; } pafzrlxpms ( localB -> d2avjf2agx , cbd12qqlri_p , *
gjh4llnztm , localB -> hnzlquu01h [ 0 ] , akbgnuupjz . P_266 , akbgnuupjz .
P_267 , akbgnuupjz . P_268 , akbgnuupjz . P_269 , akbgnuupjz . P_95 ,
akbgnuupjz . P_270 , akbgnuupjz . P_271 , akbgnuupjz . P_272 , akbgnuupjz .
P_273 , akbgnuupjz . P_119 , akbgnuupjz . P_274 , akbgnuupjz . P_275 ,
akbgnuupjz . P_46 , akbgnuupjz . P_58 , akbgnuupjz . P_71 , akbgnuupjz .
P_276 , akbgnuupjz . P_277 , akbgnuupjz . P_278 , akbgnuupjz . P_62 ,
akbgnuupjz . P_48 , akbgnuupjz . P_279 , akbgnuupjz . P_280 , akbgnuupjz .
P_41 , akbgnuupjz . P_281 , akbgnuupjz . P_282 , akbgnuupjz . P_283 ,
akbgnuupjz . P_284 , akbgnuupjz . P_285 , 0.0 , akbgnuupjz . P_286 ,
akbgnuupjz . P_287 , akbgnuupjz . P_288 , akbgnuupjz . P_289 , akbgnuupjz .
P_290 , akbgnuupjz . P_291 , akbgnuupjz . P_292 , akbgnuupjz . P_293 ,
akbgnuupjz . P_294 , akbgnuupjz . P_295 , akbgnuupjz . P_296 , akbgnuupjz .
P_297 , akbgnuupjz . P_298 , akbgnuupjz . P_299 , akbgnuupjz . P_300 ,
akbgnuupjz . P_301 , akbgnuupjz . P_302 , akbgnuupjz . P_303 , akbgnuupjz .
P_304 , akbgnuupjz . P_305 , akbgnuupjz . P_306 , akbgnuupjz . P_307 ,
akbgnuupjz . P_308 , akbgnuupjz . P_263 , akbgnuupjz . P_309 , akbgnuupjz .
P_310 , akbgnuupjz . P_8 , akbgnuupjz . P_10 , akbgnuupjz . P_43 , akbgnuupjz
. P_93 , & localB -> cl0311alh3 ) ; * mksfc4ttfd = localB -> cl0311alh3 .
eyx53sezkx + localB -> cl0311alh3 . eyx53sezkx ; agxoyzdt0j_p [ 1 ] = *
mksfc4ttfd ; j2w1qpuqxf_p = ( jyilkxorup_idx_0 + ckdtw22quu_idx_0 ) + (
agxoyzdt0j_p [ 0 ] + agxoyzdt0j_p [ 1 ] ) ; h4mpc0obwq_p = j2w1qpuqxf_p *
akbgnuupjz . P_86 ; jyilkxorup_idx_0 = localB -> hnzlquu01h [ 0 ] - localB ->
jpggl1dn5d [ 0 ] ; hcngskyyjy [ 0 ] = jyilkxorup_idx_0 ; hakfxhvoqd_p [ 0 ] =
jyilkxorup_idx_0 * jyilkxorup_idx_0 ; jyilkxorup_idx_0 = localB -> hnzlquu01h
[ 1 ] - localB -> jpggl1dn5d [ 1 ] ; hcngskyyjy [ 1 ] = jyilkxorup_idx_0 ;
hakfxhvoqd_p [ 1 ] = jyilkxorup_idx_0 * jyilkxorup_idx_0 ; jyilkxorup_idx_0 =
localB -> hnzlquu01h [ 2 ] - localB -> jpggl1dn5d [ 2 ] ; ckdtw22quu_idx_0 =
( hakfxhvoqd_p [ 0 ] + hakfxhvoqd_p [ 1 ] ) + jyilkxorup_idx_0 *
jyilkxorup_idx_0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if ( localDW ->
bbyh2lmjuh != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ; localDW -> bbyh2lmjuh = 0 ; } cbd12qqlri_p =
muDoubleScalarSqrt ( ckdtw22quu_idx_0 ) ; } else if ( ckdtw22quu_idx_0 < 0.0
) { cbd12qqlri_p = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ckdtw22quu_idx_0 ) ) ; localDW -> bbyh2lmjuh = 1 ; } else { cbd12qqlri_p =
muDoubleScalarSqrt ( ckdtw22quu_idx_0 ) ; } cbd12qqlri_p *= cbd12qqlri_p ;
hif5e4kpri_p [ 0 ] = akbgnuupjz . P_2 ; ckdtw22quu_idx_0 =
muDoubleScalarAtan2 ( hcngskyyjy [ 1 ] , hcngskyyjy [ 0 ] ) ; hif5e4kpri_p [
1 ] = look1_binlcpw ( ckdtw22quu_idx_0 , akbgnuupjz . P_63 , akbgnuupjz . P_5
, 1U ) ; hif5e4kpri_p [ 2 ] = akbgnuupjz . P_3 ; hif5e4kpri_p [ 3 ] =
look1_binlxpw ( ckdtw22quu_idx_0 , akbgnuupjz . P_160 , akbgnuupjz . P_159 ,
1U ) ; hcngskyyjy [ 0 ] = muDoubleScalarTanh ( akbgnuupjz . P_161 [ 0 ] *
hcngskyyjy [ 0 ] ) ; hif5e4kpri_p [ 4 ] = hcngskyyjy [ 0 ] * akbgnuupjz . P_4
; hif5e4kpri_p [ 5 ] = look1_binlxpw ( ckdtw22quu_idx_0 , akbgnuupjz . P_63 ,
akbgnuupjz . P_6 , 1U ) ; ckdtw22quu_idx_0 = 0.5 * akbgnuupjz . P_1 *
akbgnuupjz . P_32 / akbgnuupjz . P_33 ; for ( i = 0 ; i < 6 ; i ++ ) {
hif5e4kpri_p [ i ] = cbd12qqlri_p * hif5e4kpri_p [ i ] / akbgnuupjz . P_39 *
ckdtw22quu_idx_0 ; } localB -> bglxszemm3 = ( ( ( ( ( axap21g3h1_p -
g13m2c03ah_p ) + h4mpc0obwq_p ) + ( akbgnuupjz . P_44 + akbgnuupjz . P_49 ) *
hif5e4kpri_p [ 4 ] ) + akbgnuupjz . P_206 [ 1 ] ) - akbgnuupjz . P_207 *
localB -> lopmnb3enx ) / akbgnuupjz . P_18 ; muDoubleScalarSinCos (
j10rw1goby_p , & axap21g3h1_p , & g13m2c03ah_p ) ; jyilkxorup_idx_2 +=
ckdtw22quu_idx_2 ; localB -> av0luf4w0e [ 0 ] = ( ( ( ( j2w1qpuqxf_p - (
hcngskyyjy [ 0 ] - akbgnuupjz . P_213 [ 0 ] ) * hif5e4kpri_p [ 0 ] ) + localB
-> jpggl1dn5d [ 9 ] ) + akbgnuupjz . P_205 [ 0 ] ) / akbgnuupjz . P_96 + -
axap21g3h1_p * akbgnuupjz . P_84 ) + ( akbgnuupjz . P_162 [ 0 ] *
mea0n0rwos_idx_0 + akbgnuupjz . P_162 [ 2 ] * mea0n0rwos_idx_1 ) * localB ->
lopmnb3enx ; localB -> av0luf4w0e [ 1 ] = ( ( ( ( ( muDoubleScalarTanh (
akbgnuupjz . P_161 [ 2 ] * jyilkxorup_idx_0 ) - akbgnuupjz . P_213 [ 2 ] ) *
hif5e4kpri_p [ 2 ] - jyilkxorup_idx_2 ) + localB -> jpggl1dn5d [ 11 ] ) +
akbgnuupjz . P_205 [ 2 ] ) / akbgnuupjz . P_96 + g13m2c03ah_p * akbgnuupjz .
P_84 ) + ( akbgnuupjz . P_162 [ 1 ] * mea0n0rwos_idx_0 + akbgnuupjz . P_162 [
3 ] * mea0n0rwos_idx_1 ) * localB -> lopmnb3enx ; muDoubleScalarSinCos (
akbgnuupjz . P_208 , & hcngskyyjy [ 0 ] , & lezo4vnn1w [ 0 ] ) ;
muDoubleScalarSinCos ( j10rw1goby_p , & hcngskyyjy [ 1 ] , & lezo4vnn1w [ 1 ]
) ; muDoubleScalarSinCos ( akbgnuupjz . P_208 , & hcngskyyjy [ 2 ] , &
lezo4vnn1w [ 2 ] ) ; nb5rimpcw4_p [ 0 ] = lezo4vnn1w [ 0 ] * lezo4vnn1w [ 1 ]
; jyilkxorup_idx_2 = hcngskyyjy [ 1 ] * hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 1 ]
= jyilkxorup_idx_2 * lezo4vnn1w [ 0 ] - hcngskyyjy [ 0 ] * lezo4vnn1w [ 2 ] ;
ckdtw22quu_idx_0 = hcngskyyjy [ 1 ] * lezo4vnn1w [ 2 ] ; nb5rimpcw4_p [ 2 ] =
ckdtw22quu_idx_0 * lezo4vnn1w [ 0 ] + hcngskyyjy [ 0 ] * hcngskyyjy [ 2 ] ;
nb5rimpcw4_p [ 3 ] = hcngskyyjy [ 0 ] * lezo4vnn1w [ 1 ] ; nb5rimpcw4_p [ 4 ]
= jyilkxorup_idx_2 * hcngskyyjy [ 0 ] + lezo4vnn1w [ 0 ] * lezo4vnn1w [ 2 ] ;
nb5rimpcw4_p [ 5 ] = ckdtw22quu_idx_0 * hcngskyyjy [ 0 ] - lezo4vnn1w [ 0 ] *
hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 6 ] = - hcngskyyjy [ 1 ] ; nb5rimpcw4_p [ 7
] = lezo4vnn1w [ 1 ] * hcngskyyjy [ 2 ] ; nb5rimpcw4_p [ 8 ] = lezo4vnn1w [ 1
] * lezo4vnn1w [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { lezo4vnn1w [ i ] = (
nb5rimpcw4_p [ 3 * i + 1 ] * akbgnuupjz . P_208 + nb5rimpcw4_p [ 3 * i ] *
mea0n0rwos_idx_0 ) + nb5rimpcw4_p [ 3 * i + 2 ] * mea0n0rwos_idx_1 ; } localB
-> ppkwgnrw3p [ 0 ] = lezo4vnn1w [ 0 ] ; localB -> ppkwgnrw3p [ 1 ] =
lezo4vnn1w [ 2 ] ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit (
a5ree4wwe5 , 1 , 0 ) ) { localB -> oytwn513kz = localDW -> jrm4ykfn0y ; } if
( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent =
rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> jgxptiecam , ( localB ->
oytwn513kz ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> huxlbxlfje !=
0 ) ) { xHasBeenChanged = ( localX -> pclrccjq3k != localB -> opikxuzjsk ) ;
localX -> pclrccjq3k = localB -> opikxuzjsk ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} j10rw1goby_p = localX -> pclrccjq3k ; } else { j10rw1goby_p = localX ->
pclrccjq3k ; } axap21g3h1_p = akbgnuupjz . P_52 * j10rw1goby_p + akbgnuupjz .
P_89 * localX -> avikqegq2n ; caftufhtc1 = - axap21g3h1_p ; * jnhw4b1r4n =
localX -> ifgziugp0p ; g13m2c03ah_p = - akbgnuupjz . P_53 * * jnhw4b1r4n ;
lezo4vnn1w [ 0 ] = * a10dw5c4tm ; localB -> er1mpe5vpz = ( ( lezo4vnn1w [ 0 ]
+ caftufhtc1 ) + g13m2c03ah_p ) / localB -> ni3dikbzf2 ; mea0n0rwos_idx_0 = *
ee2tojlijk * localB -> ksrqely2mi ; if ( ( mea0n0rwos_idx_0 >= - akbgnuupjz .
P_42 ) && ( mea0n0rwos_idx_0 <= akbgnuupjz . P_42 ) ) { mea0n0rwos_idx_0 =
4.0 / ( 3.0 - muDoubleScalarPower ( mea0n0rwos_idx_0 / 2.0 , 2.0 ) ) ; } else
{ mea0n0rwos_idx_0 = muDoubleScalarAbs ( mea0n0rwos_idx_0 ) ; } localB ->
nziuzbs4mp = ( ( localB -> f0qvxxi2xz . po5hjlmm4s / localB -> ksrqely2mi +
localB -> f0qvxxi2xz . eyx53sezkx ) - jb4mtkb30x ) * ( mea0n0rwos_idx_0 /
akbgnuupjz . P_27 ) ; mea0n0rwos_idx_0 = * gjh4llnztm * localB -> d2avjf2agx
; if ( ( mea0n0rwos_idx_0 >= - akbgnuupjz . P_43 ) && ( mea0n0rwos_idx_0 <=
akbgnuupjz . P_43 ) ) { mea0n0rwos_idx_0 = 4.0 / ( 3.0 - muDoubleScalarPower
( mea0n0rwos_idx_0 / 2.0 , 2.0 ) ) ; } else { mea0n0rwos_idx_0 =
muDoubleScalarAbs ( mea0n0rwos_idx_0 ) ; } localB -> avdpz3ejce = ( ( localB
-> cl0311alh3 . po5hjlmm4s / localB -> d2avjf2agx + localB -> cl0311alh3 .
eyx53sezkx ) - kc42r1shx0_p ) * ( mea0n0rwos_idx_0 / akbgnuupjz . P_28 ) ; if
( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { if ( localDW ->
e030p3eagm != 0 ) { localX -> p2xoeqjb3s [ 0 ] = localB -> pdtaokxkwm [ 0 ] ;
localX -> p2xoeqjb3s [ 1 ] = localB -> pdtaokxkwm [ 1 ] ; } if ( localX ->
p2xoeqjb3s [ 0 ] >= akbgnuupjz . P_172 ) { if ( localX -> p2xoeqjb3s [ 0 ] !=
akbgnuupjz . P_172 ) { localX -> p2xoeqjb3s [ 0 ] = akbgnuupjz . P_172 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> p2xoeqjb3s [ 0 ] <= akbgnuupjz . P_173 ) && ( localX
-> p2xoeqjb3s [ 0 ] != akbgnuupjz . P_173 ) ) { localX -> p2xoeqjb3s [ 0 ] =
akbgnuupjz . P_173 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } if ( localX -> p2xoeqjb3s [ 1 ] >= akbgnuupjz . P_172 )
{ if ( localX -> p2xoeqjb3s [ 1 ] != akbgnuupjz . P_172 ) { localX ->
p2xoeqjb3s [ 1 ] = akbgnuupjz . P_172 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> p2xoeqjb3s [ 1 ] <= akbgnuupjz . P_173 ) && ( localX
-> p2xoeqjb3s [ 1 ] != akbgnuupjz . P_173 ) ) { localX -> p2xoeqjb3s [ 1 ] =
akbgnuupjz . P_173 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } agxoyzdt0j_p [ 0 ] = localX -> p2xoeqjb3s [ 0 ] ;
agxoyzdt0j_p [ 1 ] = localX -> p2xoeqjb3s [ 1 ] ; } else { if ( localX ->
p2xoeqjb3s [ 0 ] >= akbgnuupjz . P_172 ) { agxoyzdt0j_p [ 0 ] = akbgnuupjz .
P_172 ; } else if ( localX -> p2xoeqjb3s [ 0 ] <= akbgnuupjz . P_173 ) {
agxoyzdt0j_p [ 0 ] = akbgnuupjz . P_173 ; } else { agxoyzdt0j_p [ 0 ] =
localX -> p2xoeqjb3s [ 0 ] ; } if ( localX -> p2xoeqjb3s [ 1 ] >= akbgnuupjz
. P_172 ) { agxoyzdt0j_p [ 1 ] = akbgnuupjz . P_172 ; } else if ( localX ->
p2xoeqjb3s [ 1 ] <= akbgnuupjz . P_173 ) { agxoyzdt0j_p [ 1 ] = akbgnuupjz .
P_173 ; } else { agxoyzdt0j_p [ 1 ] = localX -> p2xoeqjb3s [ 1 ] ; } } localB
-> gkwkgtvgic = - agxoyzdt0j_p [ 0 ] - * ee2tojlijk ; if ( ! ( localB ->
cax2qrmz2d != 0.0 ) ) { g1fhgoqbyu_p = localB -> jnqiz0fdem ; } localB ->
bchzzovoad = ( localB -> gkwkgtvgic - g1fhgoqbyu_p ) * akbgnuupjz . P_106 ;
ckdtw22quu_idx_2 = - * owlkju3hdo ; if ( ssIsModeUpdateTimeStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ) { if ( localDW -> me01n3t1qo != 0 ) { localX ->
g4g1uqrgzm [ 0 ] = localB -> pf2nggg3ky [ 0 ] ; localX -> g4g1uqrgzm [ 1 ] =
localB -> pf2nggg3ky [ 1 ] ; } jyilkxorup_idx_0 = localX -> g4g1uqrgzm [ 0 ]
; g1fhgoqbyu_p = localX -> g4g1uqrgzm [ 1 ] ; } else { jyilkxorup_idx_0 =
localX -> g4g1uqrgzm [ 0 ] ; g1fhgoqbyu_p = localX -> g4g1uqrgzm [ 1 ] ; }
jyilkxorup_idx_0 *= localB -> ihs2bs4kps [ 0 ] ; g1fhgoqbyu_p *= localB ->
ihs2bs4kps [ 1 ] ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit (
a5ree4wwe5 , 1 , 0 ) ) { localB -> mdfeqvyrh2 = localDW -> gvgnat3tn4 ; } if
( ssIsModeUpdateTimeStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ) { zcEvent =
rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> bfs4w5rqk4 , ( localB ->
mdfeqvyrh2 ) ) ; if ( ( zcEvent != NO_ZCEVENT ) || ( localDW -> gq1ouncodd !=
0 ) ) { xHasBeenChanged = ( localX -> hygmn4dvse [ 0 ] != localB ->
gutijos03c [ 0 ] ) ; localX -> hygmn4dvse [ 0 ] = localB -> gutijos03c [ 0 ]
; xHasBeenChanged = ( xHasBeenChanged || ( localX -> hygmn4dvse [ 1 ] !=
localB -> gutijos03c [ 1 ] ) ) ; localX -> hygmn4dvse [ 1 ] = localB ->
gutijos03c [ 1 ] ; if ( xHasBeenChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} mea0n0rwos_idx_0 = localX -> hygmn4dvse [ 0 ] ; mea0n0rwos_idx_1 = localX
-> hygmn4dvse [ 1 ] ; } else { mea0n0rwos_idx_0 = localX -> hygmn4dvse [ 0 ]
; mea0n0rwos_idx_1 = localX -> hygmn4dvse [ 1 ] ; } jyilkxorup_idx_0 +=
mea0n0rwos_idx_0 * localB -> em04eas3yh [ 0 ] ; g1fhgoqbyu_p +=
mea0n0rwos_idx_1 * localB -> em04eas3yh [ 1 ] ; if ( ssIsModeUpdateTimeStep (
a5ree4wwe5 -> _mdlRefSfcnS ) ) { if ( localDW -> ncaeuttxru != 0 ) { localX
-> oeumeycw3k [ 0 ] = localB -> myvtcltyrh [ 0 ] ; localX -> oeumeycw3k [ 1 ]
= localB -> myvtcltyrh [ 1 ] ; } if ( localX -> oeumeycw3k [ 0 ] >=
akbgnuupjz . P_175 ) { if ( localX -> oeumeycw3k [ 0 ] != akbgnuupjz . P_175
) { localX -> oeumeycw3k [ 0 ] = akbgnuupjz . P_175 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> oeumeycw3k [ 0 ] <= akbgnuupjz . P_176 ) && ( localX
-> oeumeycw3k [ 0 ] != akbgnuupjz . P_176 ) ) { localX -> oeumeycw3k [ 0 ] =
akbgnuupjz . P_176 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } if ( localX -> oeumeycw3k [ 1 ] >= akbgnuupjz . P_175 )
{ if ( localX -> oeumeycw3k [ 1 ] != akbgnuupjz . P_175 ) { localX ->
oeumeycw3k [ 1 ] = akbgnuupjz . P_175 ;
ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5 -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> oeumeycw3k [ 1 ] <= akbgnuupjz . P_176 ) && ( localX
-> oeumeycw3k [ 1 ] != akbgnuupjz . P_176 ) ) { localX -> oeumeycw3k [ 1 ] =
akbgnuupjz . P_176 ; ssSetBlockStateForSolverChangedAtMajorStep ( a5ree4wwe5
-> _mdlRefSfcnS ) ; } p4jpfqempz_p [ 0 ] = localX -> oeumeycw3k [ 0 ] ;
p4jpfqempz_p [ 1 ] = localX -> oeumeycw3k [ 1 ] ; } else { if ( localX ->
oeumeycw3k [ 0 ] >= akbgnuupjz . P_175 ) { p4jpfqempz_p [ 0 ] = akbgnuupjz .
P_175 ; } else if ( localX -> oeumeycw3k [ 0 ] <= akbgnuupjz . P_176 ) {
p4jpfqempz_p [ 0 ] = akbgnuupjz . P_176 ; } else { p4jpfqempz_p [ 0 ] =
localX -> oeumeycw3k [ 0 ] ; } if ( localX -> oeumeycw3k [ 1 ] >= akbgnuupjz
. P_175 ) { p4jpfqempz_p [ 1 ] = akbgnuupjz . P_175 ; } else if ( localX ->
oeumeycw3k [ 1 ] <= akbgnuupjz . P_176 ) { p4jpfqempz_p [ 1 ] = akbgnuupjz .
P_176 ; } else { p4jpfqempz_p [ 1 ] = localX -> oeumeycw3k [ 1 ] ; } }
ckdtw22quu_idx_0 = akbgnuupjz . P_29 / 2.0 ; j2w1qpuqxf_p = localB ->
j12gszofwp * p4jpfqempz_p [ 0 ] * ckdtw22quu_idx_0 + localB -> j12gszofwp *
p4jpfqempz_p [ 1 ] * ckdtw22quu_idx_0 ; jb4mtkb30x = akbgnuupjz . P_177 *
p4jpfqempz_p [ 0 ] - akbgnuupjz . P_177 * p4jpfqempz_p [ 1 ] ; kc42r1shx0_p =
( muDoubleScalarTanh ( ( akbgnuupjz . P_179 * muDoubleScalarAbs (
j2w1qpuqxf_p ) - akbgnuupjz . P_325 ) * akbgnuupjz . P_180 ) + akbgnuupjz .
P_325 ) * akbgnuupjz . P_181 ; h4mpc0obwq_p = - * ohin3fh0rr ;
ckdtw22quu_idx_0 = ( muDoubleScalarTanh ( ( akbgnuupjz . P_183 *
muDoubleScalarAbs ( - p4jpfqempz_p [ 0 ] ) - akbgnuupjz . P_319 ) *
akbgnuupjz . P_184 ) + akbgnuupjz . P_319 ) * akbgnuupjz . P_185 ;
cbd12qqlri_p = ( muDoubleScalarTanh ( ( akbgnuupjz . P_187 *
muDoubleScalarAbs ( - p4jpfqempz_p [ 1 ] ) - akbgnuupjz . P_322 ) *
akbgnuupjz . P_188 ) + akbgnuupjz . P_322 ) * akbgnuupjz . P_189 ; if (
akbgnuupjz . P_131 == 1.0 ) { if ( j2w1qpuqxf_p * g1fhgoqbyu_p > akbgnuupjz .
P_178 ) { jyilkxorup_idx_2 = akbgnuupjz . P_82 ; } else { jyilkxorup_idx_2 =
akbgnuupjz . P_323 ; } ne14xk204e_p [ 0 ] = ( ( akbgnuupjz . P_325 -
kc42r1shx0_p ) * akbgnuupjz . P_324 + jyilkxorup_idx_2 * kc42r1shx0_p ) *
g1fhgoqbyu_p ; if ( h4mpc0obwq_p * - p4jpfqempz_p [ 0 ] > akbgnuupjz . P_182
) { jyilkxorup_idx_2 = akbgnuupjz . P_82 ; } else { jyilkxorup_idx_2 =
akbgnuupjz . P_317 ; } ne14xk204e_p [ 1 ] = ( ( akbgnuupjz . P_319 -
ckdtw22quu_idx_0 ) * akbgnuupjz . P_318 + jyilkxorup_idx_2 * ckdtw22quu_idx_0
) * h4mpc0obwq_p ; if ( h4mpc0obwq_p * - p4jpfqempz_p [ 1 ] > akbgnuupjz .
P_186 ) { jyilkxorup_idx_2 = akbgnuupjz . P_82 ; } else { jyilkxorup_idx_2 =
akbgnuupjz . P_320 ; } ne14xk204e_p [ 2 ] = ( ( akbgnuupjz . P_322 -
cbd12qqlri_p ) * akbgnuupjz . P_321 + jyilkxorup_idx_2 * cbd12qqlri_p ) *
h4mpc0obwq_p ; ne14xk204e_p [ 3 ] = localX -> ipy12fiarf ;
automldiffls_oVvi23Xz ( ne14xk204e_p , akbgnuupjz . P_66 , akbgnuupjz . P_59
, akbgnuupjz . P_68 , akbgnuupjz . P_29 , 1.0 , akbgnuupjz . P_21 ,
akbgnuupjz . P_23 , akbgnuupjz . P_25 , p4jpfqempz_p , jmaspekorh_p , localB
-> fidofqmfxd ) ; } else { if ( j2w1qpuqxf_p * g1fhgoqbyu_p > akbgnuupjz .
P_178 ) { jyilkxorup_idx_2 = akbgnuupjz . P_82 ; } else { jyilkxorup_idx_2 =
akbgnuupjz . P_323 ; } ne14xk204e_p [ 0 ] = ( ( akbgnuupjz . P_325 -
kc42r1shx0_p ) * akbgnuupjz . P_324 + jyilkxorup_idx_2 * kc42r1shx0_p ) *
g1fhgoqbyu_p ; if ( h4mpc0obwq_p * - p4jpfqempz_p [ 0 ] > akbgnuupjz . P_182
) { jyilkxorup_idx_2 = akbgnuupjz . P_82 ; } else { jyilkxorup_idx_2 =
akbgnuupjz . P_317 ; } ne14xk204e_p [ 1 ] = ( ( akbgnuupjz . P_319 -
ckdtw22quu_idx_0 ) * akbgnuupjz . P_318 + jyilkxorup_idx_2 * ckdtw22quu_idx_0
) * h4mpc0obwq_p ; if ( h4mpc0obwq_p * - p4jpfqempz_p [ 1 ] > akbgnuupjz .
P_186 ) { jyilkxorup_idx_2 = akbgnuupjz . P_82 ; } else { jyilkxorup_idx_2 =
akbgnuupjz . P_320 ; } ne14xk204e_p [ 2 ] = ( ( akbgnuupjz . P_322 -
cbd12qqlri_p ) * akbgnuupjz . P_321 + jyilkxorup_idx_2 * cbd12qqlri_p ) *
h4mpc0obwq_p ; ne14xk204e_p [ 3 ] = localX -> ipy12fiarf ;
automldiffls_oVvi23Xz ( ne14xk204e_p , akbgnuupjz . P_66 , akbgnuupjz . P_59
, akbgnuupjz . P_68 , akbgnuupjz . P_29 , 0.0 , akbgnuupjz . P_21 ,
akbgnuupjz . P_23 , akbgnuupjz . P_25 , p4jpfqempz_p , jmaspekorh_p , localB
-> fidofqmfxd ) ; } localB -> eec3lq23xk = ( akbgnuupjz . P_11 * akbgnuupjz .
P_31 * akbgnuupjz . P_36 * muDoubleScalarTanh ( akbgnuupjz . P_191 *
jb4mtkb30x ) * look1_binlxpw ( muDoubleScalarAbs ( jb4mtkb30x ) , akbgnuupjz
. P_77 , akbgnuupjz . P_101 , 6U ) - localX -> ipy12fiarf ) * localB ->
nrfwl5gtac ; ckdtw22quu_idx_0 = akbgnuupjz . P_30 / 2.0 ; h4mpc0obwq_p =
localB -> lif45krjv4 * agxoyzdt0j_p [ 0 ] * ckdtw22quu_idx_0 + localB ->
lif45krjv4 * agxoyzdt0j_p [ 1 ] * ckdtw22quu_idx_0 ; jb4mtkb30x = (
muDoubleScalarTanh ( ( akbgnuupjz . P_194 * muDoubleScalarAbs ( h4mpc0obwq_p
) - akbgnuupjz . P_340 ) * akbgnuupjz . P_195 ) + akbgnuupjz . P_340 ) *
akbgnuupjz . P_196 ; kc42r1shx0_p = ( muDoubleScalarTanh ( ( akbgnuupjz .
P_198 * muDoubleScalarAbs ( - agxoyzdt0j_p [ 0 ] ) - akbgnuupjz . P_334 ) *
akbgnuupjz . P_199 ) + akbgnuupjz . P_334 ) * akbgnuupjz . P_200 ;
g13m2c03ah_p = ( muDoubleScalarTanh ( ( akbgnuupjz . P_202 *
muDoubleScalarAbs ( - agxoyzdt0j_p [ 1 ] ) - akbgnuupjz . P_337 ) *
akbgnuupjz . P_203 ) + akbgnuupjz . P_337 ) * akbgnuupjz . P_204 ; if (
akbgnuupjz . P_132 == 1.0 ) { if ( jyilkxorup_idx_0 * h4mpc0obwq_p >
akbgnuupjz . P_193 ) { jyilkxorup_idx_2 = akbgnuupjz . P_83 ; } else {
jyilkxorup_idx_2 = akbgnuupjz . P_338 ; } ilu5vfj13o_p [ 0 ] = ( ( akbgnuupjz
. P_340 - jb4mtkb30x ) * akbgnuupjz . P_339 + jyilkxorup_idx_2 * jb4mtkb30x )
* jyilkxorup_idx_0 ; if ( ckdtw22quu_idx_2 * - agxoyzdt0j_p [ 0 ] >
akbgnuupjz . P_197 ) { jyilkxorup_idx_2 = akbgnuupjz . P_83 ; } else {
jyilkxorup_idx_2 = akbgnuupjz . P_332 ; } ilu5vfj13o_p [ 1 ] = ( ( akbgnuupjz
. P_334 - kc42r1shx0_p ) * akbgnuupjz . P_333 + jyilkxorup_idx_2 *
kc42r1shx0_p ) * ckdtw22quu_idx_2 ; if ( ckdtw22quu_idx_2 * - agxoyzdt0j_p [
1 ] > akbgnuupjz . P_201 ) { jyilkxorup_idx_2 = akbgnuupjz . P_83 ; } else {
jyilkxorup_idx_2 = akbgnuupjz . P_335 ; } ilu5vfj13o_p [ 2 ] = ( ( akbgnuupjz
. P_337 - g13m2c03ah_p ) * akbgnuupjz . P_336 + jyilkxorup_idx_2 *
g13m2c03ah_p ) * ckdtw22quu_idx_2 ; automldiffopen_ujNuWwNk ( ilu5vfj13o_p ,
akbgnuupjz . P_67 , akbgnuupjz . P_60 , akbgnuupjz . P_69 , akbgnuupjz . P_30
, 1.0 , akbgnuupjz . P_22 , akbgnuupjz . P_24 , akbgnuupjz . P_26 ,
agxoyzdt0j_p , lezo4vnn1w , localB -> nflnacxvj5 ) ; } else { if (
jyilkxorup_idx_0 * h4mpc0obwq_p > akbgnuupjz . P_193 ) { jyilkxorup_idx_2 =
akbgnuupjz . P_83 ; } else { jyilkxorup_idx_2 = akbgnuupjz . P_338 ; }
ilu5vfj13o_p [ 0 ] = ( ( akbgnuupjz . P_340 - jb4mtkb30x ) * akbgnuupjz .
P_339 + jyilkxorup_idx_2 * jb4mtkb30x ) * jyilkxorup_idx_0 ; if (
ckdtw22quu_idx_2 * - agxoyzdt0j_p [ 0 ] > akbgnuupjz . P_197 ) {
jyilkxorup_idx_2 = akbgnuupjz . P_83 ; } else { jyilkxorup_idx_2 = akbgnuupjz
. P_332 ; } ilu5vfj13o_p [ 1 ] = ( ( akbgnuupjz . P_334 - kc42r1shx0_p ) *
akbgnuupjz . P_333 + jyilkxorup_idx_2 * kc42r1shx0_p ) * ckdtw22quu_idx_2 ;
if ( ckdtw22quu_idx_2 * - agxoyzdt0j_p [ 1 ] > akbgnuupjz . P_201 ) {
jyilkxorup_idx_2 = akbgnuupjz . P_83 ; } else { jyilkxorup_idx_2 = akbgnuupjz
. P_335 ; } ilu5vfj13o_p [ 2 ] = ( ( akbgnuupjz . P_337 - g13m2c03ah_p ) *
akbgnuupjz . P_336 + jyilkxorup_idx_2 * g13m2c03ah_p ) * ckdtw22quu_idx_2 ;
automldiffopen_ujNuWwNk ( ilu5vfj13o_p , akbgnuupjz . P_67 , akbgnuupjz .
P_60 , akbgnuupjz . P_69 , akbgnuupjz . P_30 , 0.0 , akbgnuupjz . P_22 ,
akbgnuupjz . P_24 , akbgnuupjz . P_26 , agxoyzdt0j_p , lezo4vnn1w , localB ->
nflnacxvj5 ) ; } localB -> e53mhn3luf = - p4jpfqempz_p [ 0 ] - * gjh4llnztm ;
if ( ! ( localB -> hqpj34qdw3 != 0.0 ) ) { amql2bvc4p_p = localB ->
pl0bi2byrv ; } localB -> onlay530ix = ( localB -> e53mhn3luf - amql2bvc4p_p )
* akbgnuupjz . P_107 ; localB -> pd3t31kovh = ( ( ( ( 0.0 - jyilkxorup_idx_0
) - g1fhgoqbyu_p ) + axap21g3h1_p ) + - akbgnuupjz . P_54 * localX ->
evw1nga20d ) / localB -> ke5ok15jcj ; ckdtw22quu_idx_2 = localX -> evw1nga20d
- h4mpc0obwq_p ; localB -> fody5y4jrj [ 0 ] = ckdtw22quu_idx_2 ; if ( ! (
localB -> mdfeqvyrh2 != 0.0 ) ) { mea0n0rwos_idx_0 = localB -> gutijos03c [ 0
] ; mea0n0rwos_idx_1 = localB -> gutijos03c [ 1 ] ; } localB -> mee3ssxmro [
0 ] = ( ckdtw22quu_idx_2 - mea0n0rwos_idx_0 ) * localB -> oepyv2jva3 [ 0 ] ;
ckdtw22quu_idx_2 = localX -> evw1nga20d - j2w1qpuqxf_p ; localB -> fody5y4jrj
[ 1 ] = ckdtw22quu_idx_2 ; localB -> mee3ssxmro [ 1 ] = ( ckdtw22quu_idx_2 -
mea0n0rwos_idx_1 ) * localB -> oepyv2jva3 [ 1 ] ; localB -> cmshx2hx1v = *
jnhw4b1r4n - localX -> evw1nga20d ; if ( ! ( localB -> oytwn513kz != 0.0 ) )
{ j10rw1goby_p = localB -> opikxuzjsk ; } localB -> jv552cmbsm = ( localB ->
cmshx2hx1v - j10rw1goby_p ) * akbgnuupjz . P_108 ; } void DrivetrainEvTID2 (
pw4f2kjo3k * localB ) { int32_T ggxhvsmzpg ; int32_T jzsp3rpdl2 ; int32_T
ji4pzz2y51 ; real_T u0_tmp ; localB -> ebaa0kh4i5 [ 0 ] = akbgnuupjz . P_44 ;
localB -> ebaa0kh4i5 [ 1 ] = akbgnuupjz . P_34 ; localB -> ebaa0kh4i5 [ 2 ] =
akbgnuupjz . P_86 ; localB -> i15mn4m5ny [ 0 ] = - akbgnuupjz . P_49 ; localB
-> i15mn4m5ny [ 1 ] = akbgnuupjz . P_35 ; localB -> i15mn4m5ny [ 2 ] =
akbgnuupjz . P_86 ; localB -> gbi35l44aj [ 0 ] = 0.0 ; localB -> gbi35l44aj [
1 ] = 0.0 ; localB -> gbi35l44aj [ 2 ] = akbgnuupjz . P_96 * akbgnuupjz .
P_85 ; ji4pzz2y51 = 0 ; while ( ji4pzz2y51 < 4 ) { ji4pzz2y51 ++ ; } if ( (
akbgnuupjz . P_19 >= - akbgnuupjz . P_126 ) && ( akbgnuupjz . P_19 <=
akbgnuupjz . P_126 ) ) { localB -> ni3dikbzf2 = 2.0E-6 / ( 3.0 -
muDoubleScalarPower ( akbgnuupjz . P_19 / 1.0e-6 , 2.0 ) ) ; } else { localB
-> ni3dikbzf2 = muDoubleScalarAbs ( akbgnuupjz . P_19 ) ; } u0_tmp = 0.327 *
rtP_wheel_diameter ; if ( u0_tmp > akbgnuupjz . P_215 ) { localB ->
ksrqely2mi = akbgnuupjz . P_215 ; } else if ( u0_tmp < akbgnuupjz . P_216 ) {
localB -> ksrqely2mi = akbgnuupjz . P_216 ; } else { localB -> ksrqely2mi =
u0_tmp ; } localB -> ijvohtniqp = akbgnuupjz . P_262 * akbgnuupjz . P_72 ;
jzsp3rpdl2 = 0 ; while ( jzsp3rpdl2 < 1 ) { cddyh02qciTID2 ( akbgnuupjz .
P_64 , & localB -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & akbgnuupjz .
nod5vp1cyy . fate2u2iog ) ; jzsp3rpdl2 ++ ; } if ( u0_tmp > akbgnuupjz .
P_264 ) { localB -> d2avjf2agx = akbgnuupjz . P_264 ; } else if ( u0_tmp <
akbgnuupjz . P_265 ) { localB -> d2avjf2agx = akbgnuupjz . P_265 ; } else {
localB -> d2avjf2agx = u0_tmp ; } localB -> hi5xxwzl1w = akbgnuupjz . P_311 *
akbgnuupjz . P_73 ; ggxhvsmzpg = 0 ; while ( ggxhvsmzpg < 1 ) {
b5prwuabwtTID2 ( akbgnuupjz . P_65 , & localB -> eblhn1q21v [ ggxhvsmzpg ] .
fd4qjwy5lm , & akbgnuupjz . eblhn1q21v . fd4qjwy5lm ) ; ggxhvsmzpg ++ ; }
localB -> jnqiz0fdem = akbgnuupjz . P_74 ; localB -> nrfwl5gtac = 1.0 /
akbgnuupjz . P_121 * akbgnuupjz . P_313 ; localB -> myvtcltyrh [ 0 ] =
akbgnuupjz . P_113 ; localB -> myvtcltyrh [ 1 ] = akbgnuupjz . P_115 ; if (
akbgnuupjz . P_326 > akbgnuupjz . P_328 ) { localB -> j12gszofwp = akbgnuupjz
. P_327 ; } else { localB -> j12gszofwp = - akbgnuupjz . P_327 ; } localB ->
pdtaokxkwm [ 0 ] = akbgnuupjz . P_114 ; localB -> pdtaokxkwm [ 1 ] =
akbgnuupjz . P_116 ; if ( akbgnuupjz . P_341 > akbgnuupjz . P_343 ) { localB
-> lif45krjv4 = akbgnuupjz . P_342 ; } else { localB -> lif45krjv4 = -
akbgnuupjz . P_342 ; } localB -> pl0bi2byrv = akbgnuupjz . P_75 ; if ( (
akbgnuupjz . P_20 >= - akbgnuupjz . P_127 ) && ( akbgnuupjz . P_20 <=
akbgnuupjz . P_127 ) ) { localB -> ke5ok15jcj = 2.0E-6 / ( 3.0 -
muDoubleScalarPower ( akbgnuupjz . P_20 / 1.0e-6 , 2.0 ) ) ; } else { localB
-> ke5ok15jcj = muDoubleScalarAbs ( akbgnuupjz . P_20 ) ; } localB ->
oepyv2jva3 [ 0 ] = akbgnuupjz . P_104 ; localB -> oepyv2jva3 [ 1 ] =
akbgnuupjz . P_105 ; localB -> gutijos03c [ 0 ] = akbgnuupjz . P_345 ; localB
-> gutijos03c [ 1 ] = akbgnuupjz . P_346 ; localB -> em04eas3yh [ 0 ] =
akbgnuupjz . P_55 ; localB -> em04eas3yh [ 1 ] = akbgnuupjz . P_56 ; localB
-> ihs2bs4kps [ 0 ] = akbgnuupjz . P_90 ; localB -> ihs2bs4kps [ 1 ] =
akbgnuupjz . P_91 ; localB -> pf2nggg3ky [ 0 ] = akbgnuupjz . P_347 ; localB
-> pf2nggg3ky [ 1 ] = akbgnuupjz . P_348 ; localB -> opikxuzjsk = akbgnuupjz
. P_76 ; } void ekz3w3o33e ( hcopmldpph * const a5ree4wwe5 , lvsoqlxlcs *
localDW ) { if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) ) { if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 0 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 0 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
0 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 1 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 1 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
1 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 2 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 2 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
2 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 3 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 3 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
3 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 3 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 4 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 4 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
4 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 5 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 5 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 5 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
5 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 5 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 5 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 6 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 6 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 6 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
6 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 6 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 6 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } if ( memcmp (
a5ree4wwe5 -> nonContDerivSignal [ 7 ] . pCurrVal , a5ree4wwe5 ->
nonContDerivSignal [ 7 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 7 ]
. sizeInBytes ) != 0 ) { ( void ) memcpy ( a5ree4wwe5 -> nonContDerivSignal [
7 ] . pPrevVal , a5ree4wwe5 -> nonContDerivSignal [ 7 ] . pCurrVal ,
a5ree4wwe5 -> nonContDerivSignal [ 7 ] . sizeInBytes ) ;
ssSetSolverNeedsReset ( a5ree4wwe5 -> _mdlRefSfcnS ) ; } } localDW ->
jg0qnrcaox = 0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) && rtmIsSampleHit (
a5ree4wwe5 , 1 , 0 ) ) { localDW -> mt1hoilqmr = akbgnuupjz . P_312 ; }
localDW -> cudcy0ioif = 0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5 ) &&
rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) ) { localDW -> es5rj255h5 = akbgnuupjz
. P_344 ; } localDW -> o4aqvkyq1t = 0 ; if ( rtmIsMajorTimeStep ( a5ree4wwe5
) && rtmIsSampleHit ( a5ree4wwe5 , 1 , 0 ) ) { localDW -> jrm4ykfn0y =
akbgnuupjz . P_350 ; localDW -> gvgnat3tn4 = akbgnuupjz . P_349 ; } localDW
-> huxlbxlfje = 0 ; localDW -> e030p3eagm = 0 ; localDW -> me01n3t1qo = 0 ;
localDW -> gq1ouncodd = 0 ; localDW -> ncaeuttxru = 0 ; } void a2spfqi5as (
pw4f2kjo3k * localB , lvsoqlxlcs * localDW , edp3webv0p * localX , cspbap1de4
* localXdot ) { real_T gkvpdzxm03 ; real_T auzp2mjq1u ; real_T hotote20uy ;
real_T je5giw5qez ; real_T idc5jscwvr ; real_T ow4sny3zkx ; int32_T
ggxhvsmzpg ; int32_T jzsp3rpdl2 ; localXdot -> ncmmxrrgvr [ 0 ] = localB ->
av0luf4w0e [ 0 ] ; localXdot -> d5vyxqghh0 [ 0 ] = localB -> e3vb1pkeqz [ 0 ]
; localXdot -> noatsby3ej [ 0 ] = localB -> ppkwgnrw3p [ 0 ] ; localXdot ->
ncmmxrrgvr [ 1 ] = localB -> av0luf4w0e [ 1 ] ; localXdot -> d5vyxqghh0 [ 1 ]
= localB -> e3vb1pkeqz [ 1 ] ; localXdot -> noatsby3ej [ 1 ] = localB ->
ppkwgnrw3p [ 1 ] ; localXdot -> in4ouu3rj0 = localB -> lopmnb3enx ; localXdot
-> fmsvpqigtm = localB -> bglxszemm3 ; localXdot -> d22cefpjxi = localB ->
bchzzovoad ; localXdot -> ik1v113z3z = localB -> gkwkgtvgic ; localXdot ->
neffdf1vy0 = localB -> nziuzbs4mp ; for ( jzsp3rpdl2 = 0 ; jzsp3rpdl2 < 1 ;
jzsp3rpdl2 ++ ) { je5giw5qez = localB -> pkqpf5r3q4 ; idc5jscwvr = localB ->
khmk1e3fae ; ow4sny3zkx = localB -> klmw1xamx0 ; blmwtgrkjm ( & localB ->
nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog , & localDW -> nod5vp1cyy [ jzsp3rpdl2
] . fate2u2iog , & localXdot -> nod5vp1cyy [ jzsp3rpdl2 ] . fate2u2iog ) ; }
localXdot -> erxydw3o5p = localB -> onlay530ix ; localXdot -> kt2st0esai =
localB -> e53mhn3luf ; localXdot -> exw1srp224 = localB -> avdpz3ejce ; for (
ggxhvsmzpg = 0 ; ggxhvsmzpg < 1 ; ggxhvsmzpg ++ ) { gkvpdzxm03 = localB ->
eqozydakce ; auzp2mjq1u = localB -> kl1ialzat1 ; hotote20uy = localB ->
egopa54lvs ; dq1cbs3e5h ( & localB -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm
, & localDW -> eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm , & localXdot ->
eblhn1q21v [ ggxhvsmzpg ] . fd4qjwy5lm ) ; } localXdot -> lwzedupgn2 = localB
-> hnzlquu01h [ 0 ] ; localXdot -> pclrccjq3k = localB -> jv552cmbsm ;
localXdot -> avikqegq2n = localB -> cmshx2hx1v ; localXdot -> ifgziugp0p =
localB -> er1mpe5vpz ; if ( ( ( localX -> p2xoeqjb3s [ 0 ] > akbgnuupjz .
P_173 ) && ( localX -> p2xoeqjb3s [ 0 ] < akbgnuupjz . P_172 ) ) || ( (
localX -> p2xoeqjb3s [ 0 ] <= akbgnuupjz . P_173 ) && ( localB -> nflnacxvj5
[ 0 ] > 0.0 ) ) || ( ( localX -> p2xoeqjb3s [ 0 ] >= akbgnuupjz . P_172 ) &&
( localB -> nflnacxvj5 [ 0 ] < 0.0 ) ) ) { localXdot -> p2xoeqjb3s [ 0 ] =
localB -> nflnacxvj5 [ 0 ] ; } else { localXdot -> p2xoeqjb3s [ 0 ] = 0.0 ; }
localXdot -> g4g1uqrgzm [ 0 ] = localB -> fody5y4jrj [ 0 ] ; localXdot ->
hygmn4dvse [ 0 ] = localB -> mee3ssxmro [ 0 ] ; if ( ( ( localX -> oeumeycw3k
[ 0 ] > akbgnuupjz . P_176 ) && ( localX -> oeumeycw3k [ 0 ] < akbgnuupjz .
P_175 ) ) || ( ( localX -> oeumeycw3k [ 0 ] <= akbgnuupjz . P_176 ) && (
localB -> fidofqmfxd [ 0 ] > 0.0 ) ) || ( ( localX -> oeumeycw3k [ 0 ] >=
akbgnuupjz . P_175 ) && ( localB -> fidofqmfxd [ 0 ] < 0.0 ) ) ) { localXdot
-> oeumeycw3k [ 0 ] = localB -> fidofqmfxd [ 0 ] ; } else { localXdot ->
oeumeycw3k [ 0 ] = 0.0 ; } if ( ( ( localX -> p2xoeqjb3s [ 1 ] > akbgnuupjz .
P_173 ) && ( localX -> p2xoeqjb3s [ 1 ] < akbgnuupjz . P_172 ) ) || ( (
localX -> p2xoeqjb3s [ 1 ] <= akbgnuupjz . P_173 ) && ( localB -> nflnacxvj5
[ 1 ] > 0.0 ) ) || ( ( localX -> p2xoeqjb3s [ 1 ] >= akbgnuupjz . P_172 ) &&
( localB -> nflnacxvj5 [ 1 ] < 0.0 ) ) ) { localXdot -> p2xoeqjb3s [ 1 ] =
localB -> nflnacxvj5 [ 1 ] ; } else { localXdot -> p2xoeqjb3s [ 1 ] = 0.0 ; }
localXdot -> g4g1uqrgzm [ 1 ] = localB -> fody5y4jrj [ 1 ] ; localXdot ->
hygmn4dvse [ 1 ] = localB -> mee3ssxmro [ 1 ] ; if ( ( ( localX -> oeumeycw3k
[ 1 ] > akbgnuupjz . P_176 ) && ( localX -> oeumeycw3k [ 1 ] < akbgnuupjz .
P_175 ) ) || ( ( localX -> oeumeycw3k [ 1 ] <= akbgnuupjz . P_176 ) && (
localB -> fidofqmfxd [ 1 ] > 0.0 ) ) || ( ( localX -> oeumeycw3k [ 1 ] >=
akbgnuupjz . P_175 ) && ( localB -> fidofqmfxd [ 1 ] < 0.0 ) ) ) { localXdot
-> oeumeycw3k [ 1 ] = localB -> fidofqmfxd [ 1 ] ; } else { localXdot ->
oeumeycw3k [ 1 ] = 0.0 ; } localXdot -> ipy12fiarf = localB -> eec3lq23xk ;
localXdot -> evw1nga20d = localB -> pd3t31kovh ; } void ekywbf3nku (
hcopmldpph * const a5ree4wwe5 ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( a5ree4wwe5 -> _mdlRefSfcnS , "DrivetrainEv" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void ktxb3gprz3 (
SimStruct * _mdlRefSfcnS , ssNonContDerivSigFeedingOutports * *
mr_nonContOutputArray , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , hcopmldpph * const a5ree4wwe5 , pw4f2kjo3k * localB ,
lvsoqlxlcs * localDW , edp3webv0p * localX , at3vnbf5fi * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; akbgnuupjz . P_150 = rtInf ;
akbgnuupjz . P_157 = rtInf ; akbgnuupjz . P_215 = rtInf ; akbgnuupjz . P_264
= rtInf ; ( void ) memset ( ( void * ) a5ree4wwe5 , 0 , sizeof ( hcopmldpph )
) ; a5ree4wwe5 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; a5ree4wwe5
-> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; a5ree4wwe5 -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; a5ree4wwe5 -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( a5ree4wwe5 -> _mdlRefSfcnS , "DrivetrainEv" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( pw4f2kjo3k ) ) ; { int32_T i ; for ( i = 0 ; i < 12
; i ++ ) { localB -> jpggl1dn5d [ i ] = 0.0 ; } for ( i = 0 ; i < 5 ; i ++ )
{ localB -> cl0311alh3 . k430nj3qfv [ i ] = 0.0 ; } for ( i = 0 ; i < 16 ; i
++ ) { localB -> cl0311alh3 . dozz3hjyhg [ i ] = 0.0 ; } for ( i = 0 ; i < 24
; i ++ ) { localB -> cl0311alh3 . mxlog31fl1 [ i ] = 0.0 ; } for ( i = 0 ; i
< 5 ; i ++ ) { localB -> f0qvxxi2xz . k430nj3qfv [ i ] = 0.0 ; } for ( i = 0
; i < 16 ; i ++ ) { localB -> f0qvxxi2xz . dozz3hjyhg [ i ] = 0.0 ; } for ( i
= 0 ; i < 24 ; i ++ ) { localB -> f0qvxxi2xz . mxlog31fl1 [ i ] = 0.0 ; }
localB -> hnzlquu01h [ 0 ] = 0.0 ; localB -> hnzlquu01h [ 1 ] = 0.0 ; localB
-> hnzlquu01h [ 2 ] = 0.0 ; localB -> e3vb1pkeqz [ 0 ] = 0.0 ; localB ->
e3vb1pkeqz [ 1 ] = 0.0 ; localB -> elfgwu2mmb [ 0 ] = 0.0 ; localB ->
elfgwu2mmb [ 1 ] = 0.0 ; localB -> elfgwu2mmb [ 2 ] = 0.0 ; localB ->
cbr50rtmin [ 0 ] = 0.0 ; localB -> cbr50rtmin [ 1 ] = 0.0 ; localB ->
cbr50rtmin [ 2 ] = 0.0 ; localB -> lopmnb3enx = 0.0 ; localB -> p41wquk2oo [
0 ] = 0.0 ; localB -> p41wquk2oo [ 1 ] = 0.0 ; localB -> p41wquk2oo [ 2 ] =
0.0 ; localB -> cax2qrmz2d = 0.0 ; localB -> pkqpf5r3q4 = 0.0 ; localB ->
khmk1e3fae = 0.0 ; localB -> klmw1xamx0 = 0.0 ; localB -> hqpj34qdw3 = 0.0 ;
localB -> eqozydakce = 0.0 ; localB -> kl1ialzat1 = 0.0 ; localB ->
egopa54lvs = 0.0 ; localB -> bglxszemm3 = 0.0 ; localB -> av0luf4w0e [ 0 ] =
0.0 ; localB -> av0luf4w0e [ 1 ] = 0.0 ; localB -> ppkwgnrw3p [ 0 ] = 0.0 ;
localB -> ppkwgnrw3p [ 1 ] = 0.0 ; localB -> oytwn513kz = 0.0 ; localB ->
er1mpe5vpz = 0.0 ; localB -> nziuzbs4mp = 0.0 ; localB -> avdpz3ejce = 0.0 ;
localB -> gkwkgtvgic = 0.0 ; localB -> bchzzovoad = 0.0 ; localB ->
mdfeqvyrh2 = 0.0 ; localB -> eec3lq23xk = 0.0 ; localB -> e53mhn3luf = 0.0 ;
localB -> onlay530ix = 0.0 ; localB -> pd3t31kovh = 0.0 ; localB ->
fody5y4jrj [ 0 ] = 0.0 ; localB -> fody5y4jrj [ 1 ] = 0.0 ; localB ->
mee3ssxmro [ 0 ] = 0.0 ; localB -> mee3ssxmro [ 1 ] = 0.0 ; localB ->
cmshx2hx1v = 0.0 ; localB -> jv552cmbsm = 0.0 ; localB -> ebaa0kh4i5 [ 0 ] =
0.0 ; localB -> ebaa0kh4i5 [ 1 ] = 0.0 ; localB -> ebaa0kh4i5 [ 2 ] = 0.0 ;
localB -> i15mn4m5ny [ 0 ] = 0.0 ; localB -> i15mn4m5ny [ 1 ] = 0.0 ; localB
-> i15mn4m5ny [ 2 ] = 0.0 ; localB -> gbi35l44aj [ 0 ] = 0.0 ; localB ->
gbi35l44aj [ 1 ] = 0.0 ; localB -> gbi35l44aj [ 2 ] = 0.0 ; localB ->
ni3dikbzf2 = 0.0 ; localB -> ksrqely2mi = 0.0 ; localB -> ijvohtniqp = 0.0 ;
localB -> d2avjf2agx = 0.0 ; localB -> hi5xxwzl1w = 0.0 ; localB ->
jnqiz0fdem = 0.0 ; localB -> nrfwl5gtac = 0.0 ; localB -> myvtcltyrh [ 0 ] =
0.0 ; localB -> myvtcltyrh [ 1 ] = 0.0 ; localB -> j12gszofwp = 0.0 ; localB
-> pdtaokxkwm [ 0 ] = 0.0 ; localB -> pdtaokxkwm [ 1 ] = 0.0 ; localB ->
lif45krjv4 = 0.0 ; localB -> pl0bi2byrv = 0.0 ; localB -> ke5ok15jcj = 0.0 ;
localB -> oepyv2jva3 [ 0 ] = 0.0 ; localB -> oepyv2jva3 [ 1 ] = 0.0 ; localB
-> gutijos03c [ 0 ] = 0.0 ; localB -> gutijos03c [ 1 ] = 0.0 ; localB ->
em04eas3yh [ 0 ] = 0.0 ; localB -> em04eas3yh [ 1 ] = 0.0 ; localB ->
ihs2bs4kps [ 0 ] = 0.0 ; localB -> ihs2bs4kps [ 1 ] = 0.0 ; localB ->
pf2nggg3ky [ 0 ] = 0.0 ; localB -> pf2nggg3ky [ 1 ] = 0.0 ; localB ->
opikxuzjsk = 0.0 ; localB -> nflnacxvj5 [ 0 ] = 0.0 ; localB -> nflnacxvj5 [
1 ] = 0.0 ; localB -> fidofqmfxd [ 0 ] = 0.0 ; localB -> fidofqmfxd [ 1 ] =
0.0 ; localB -> cl0311alh3 . eyx53sezkx = 0.0 ; localB -> cl0311alh3 .
po5hjlmm4s = 0.0 ; localB -> f0qvxxi2xz . eyx53sezkx = 0.0 ; localB ->
f0qvxxi2xz . po5hjlmm4s = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( lvsoqlxlcs ) ) ; localDW -> mt1hoilqmr = 0.0 ; localDW -> es5rj255h5
= 0.0 ; localDW -> jrm4ykfn0y = 0.0 ; localDW -> gvgnat3tn4 = 0.0 ;
DrivetrainEv_InitializeDataMapInfo ( a5ree4wwe5 , localDW , localX ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( a5ree4wwe5 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
a5ree4wwe5 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( a5ree4wwe5 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig0 ; a5ree4wwe5 ->
nonContDerivSignal [ 0 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 0 ] . pCurrVal = ( char_T * ) ( & localB
-> mdfeqvyrh2 ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig1 ; a5ree4wwe5 ->
nonContDerivSignal [ 1 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 1 ] . pCurrVal = ( char_T * ) ( & localB
-> oytwn513kz ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig2 ; a5ree4wwe5 ->
nonContDerivSignal [ 2 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 2 ] . pCurrVal = ( char_T * ) ( & localB
-> hqpj34qdw3 ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig3 ; a5ree4wwe5 ->
nonContDerivSignal [ 3 ] . sizeInBytes = ( 1 * sizeof ( real_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 3 ] . pCurrVal = ( char_T * ) ( & localB
-> cax2qrmz2d ) ; ; a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pPrevVal = (
char_T * ) a5ree4wwe5 -> NonContDerivMemory . mr_nonContSig4 ; a5ree4wwe5 ->
nonContDerivSignal [ 4 ] . sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ;
a5ree4wwe5 -> nonContDerivSignal [ 4 ] . pCurrVal = ( char_T * ) ( & localB
-> eblhn1q21v [ 0 ] . fd4qjwy5lm . aqualkdqvn . i2nh5egmwl ) ; ; a5ree4wwe5
-> nonContDerivSignal [ 5 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig5 ; a5ree4wwe5 -> nonContDerivSignal [ 5 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 5 ] . pCurrVal = ( char_T * ) ( & localB -> eblhn1q21v [
0 ] . fd4qjwy5lm . i5fcczml0p . i5lz300mk1 ) ; ; a5ree4wwe5 ->
nonContDerivSignal [ 6 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig6 ; a5ree4wwe5 -> nonContDerivSignal [ 6 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 6 ] . pCurrVal = ( char_T * ) ( & localB -> nod5vp1cyy [
0 ] . fate2u2iog . lx5pzbjgnjw . i2nh5egmwl ) ; ; a5ree4wwe5 ->
nonContDerivSignal [ 7 ] . pPrevVal = ( char_T * ) a5ree4wwe5 ->
NonContDerivMemory . mr_nonContSig7 ; a5ree4wwe5 -> nonContDerivSignal [ 7 ]
. sizeInBytes = ( 1 * sizeof ( boolean_T ) ) ; a5ree4wwe5 ->
nonContDerivSignal [ 7 ] . pCurrVal = ( char_T * ) ( & localB -> nod5vp1cyy [
0 ] . fate2u2iog . jkqilwbv4li . i5lz300mk1 ) ; ; if ( mr_nonContOutputArray
[ 4 ] != ( NULL ) ) { mr_nonContOutputArray [ 4 ] [ 0 ] . sizeInBytes = 1 *
sizeof ( boolean_T ) ; mr_nonContOutputArray [ 4 ] [ 0 ] . currVal = ( char_T
* ) & localB -> nod5vp1cyy [ 0 ] . fate2u2iog . lx5pzbjgnjw . i2nh5egmwl ;
mr_nonContOutputArray [ 4 ] [ 0 ] . next = & ( mr_nonContOutputArray [ 4 ] [
1 ] ) ; } if ( mr_nonContOutputArray [ 4 ] != ( NULL ) ) {
mr_nonContOutputArray [ 4 ] [ 1 ] . sizeInBytes = 1 * sizeof ( boolean_T ) ;
mr_nonContOutputArray [ 4 ] [ 1 ] . currVal = ( char_T * ) & localB ->
nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li . i5lz300mk1 ;
mr_nonContOutputArray [ 4 ] [ 1 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 5 ] != ( NULL ) ) { mr_nonContOutputArray [ 5 ] [ 0 ]
. sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 5 ] [ 0 ]
. currVal = ( char_T * ) & localB -> eblhn1q21v [ 0 ] . fd4qjwy5lm .
aqualkdqvn . i2nh5egmwl ; mr_nonContOutputArray [ 5 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 5 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 5 ] != (
NULL ) ) { mr_nonContOutputArray [ 5 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 5 ] [ 1 ] . currVal = ( char_T * ) &
localB -> eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p . i5lz300mk1 ;
mr_nonContOutputArray [ 5 ] [ 1 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 6 ] != ( NULL ) ) { mr_nonContOutputArray [ 6 ] [ 0 ]
. sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 6 ] [ 0 ]
. currVal = ( char_T * ) & localB -> nod5vp1cyy [ 0 ] . fate2u2iog .
lx5pzbjgnjw . i2nh5egmwl ; mr_nonContOutputArray [ 6 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 6 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 6 ] != (
NULL ) ) { mr_nonContOutputArray [ 6 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 6 ] [ 1 ] . currVal = ( char_T * ) &
localB -> nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li . i5lz300mk1 ;
mr_nonContOutputArray [ 6 ] [ 1 ] . next = ( NULL ) ; } if (
mr_nonContOutputArray [ 7 ] != ( NULL ) ) { mr_nonContOutputArray [ 7 ] [ 0 ]
. sizeInBytes = 1 * sizeof ( boolean_T ) ; mr_nonContOutputArray [ 7 ] [ 0 ]
. currVal = ( char_T * ) & localB -> eblhn1q21v [ 0 ] . fd4qjwy5lm .
aqualkdqvn . i2nh5egmwl ; mr_nonContOutputArray [ 7 ] [ 0 ] . next = & (
mr_nonContOutputArray [ 7 ] [ 1 ] ) ; } if ( mr_nonContOutputArray [ 7 ] != (
NULL ) ) { mr_nonContOutputArray [ 7 ] [ 1 ] . sizeInBytes = 1 * sizeof (
boolean_T ) ; mr_nonContOutputArray [ 7 ] [ 1 ] . currVal = ( char_T * ) &
localB -> eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p . i5lz300mk1 ;
mr_nonContOutputArray [ 7 ] [ 1 ] . next = ( NULL ) ; } localZCE ->
lya3g2fowv = UNINITIALIZED_ZCSIG ; localZCE -> erhwkrr2qn =
UNINITIALIZED_ZCSIG ; localZCE -> jgxptiecam = UNINITIALIZED_ZCSIG ; localZCE
-> bfs4w5rqk4 = UNINITIALIZED_ZCSIG ; } void mr_DrivetrainEv_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_DrivetrainEv , 252 ) ; * retVal = 1 ; } static void
mr_DrivetrainEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_DrivetrainEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DrivetrainEv_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_DrivetrainEv_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_DrivetrainEv_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_DrivetrainEv_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_DrivetrainEv_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DrivetrainEv_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_DrivetrainEv_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_DrivetrainEv_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_DrivetrainEv_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_DrivetrainEv_GetDWork ( const hmke5fx3tcj * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "rtzce" , } ;
mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_DrivetrainEv_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 39 ] = { "mdlrefDW->rtdw.mt1hoilqmr" ,
"mdlrefDW->rtdw.es5rj255h5" , "mdlrefDW->rtdw.jrm4ykfn0y" ,
"mdlrefDW->rtdw.gvgnat3tn4" , "mdlrefDW->rtdw.jg0qnrcaox" ,
"mdlrefDW->rtdw.cudcy0ioif" , "mdlrefDW->rtdw.o4aqvkyq1t" ,
"mdlrefDW->rtdw.huxlbxlfje" , "mdlrefDW->rtdw.e030p3eagm" ,
"mdlrefDW->rtdw.me01n3t1qo" , "mdlrefDW->rtdw.gq1ouncodd" ,
"mdlrefDW->rtdw.ncaeuttxru" , "mdlrefDW->rtdw.kxp34i0kfp" ,
"mdlrefDW->rtdw.mdigxevyus" , "mdlrefDW->rtdw.bbyh2lmjuh" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.jg0v2cyy4k" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.cog0zpqeoa" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.d4ugeviqji" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.dstnpi0fei" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.ia5mclwmd4" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.kevuk2jdkp" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.hgortb0uau" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.fkdt002bwx.iojd2jlc3k" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.fsjpudim4x.lim0ml1jqw" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.i5fcczml0p.jrdv3hmnoc" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.i5fcczml0p.d3vznomj0x" ,
"mdlrefDW->rtdw.eblhn1q21v[0].fd4qjwy5lm.aqualkdqvn.k3j1amkab5" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.bsjj0oya40" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.azoxgesvxj" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.dufw0vwv3o" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.kzmq5ayuhp" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.jp5trqmghp" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.ikmpdntrw1" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.f4leq45rjn" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.ndg43gdj2cy.iojd2jlc3k" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.hpjac0modfc.lim0ml1jqw" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.jkqilwbv4li.jrdv3hmnoc" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.jkqilwbv4li.d3vznomj0x" ,
"mdlrefDW->rtdw.nod5vp1cyy[0].fate2u2iog.lx5pzbjgnjw.k3j1amkab5" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 39 , rtdwDataFieldNames )
; int k0 ; mxSetFieldByNumber ( rtdwData , 0 , 15 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . jg0v2cyy4k ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 16 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . cog0zpqeoa ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 17 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . d4ugeviqji ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 18 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . dstnpi0fei ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 19 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . ia5mclwmd4 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 20 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kevuk2jdkp ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 21 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . hgortb0uau ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 22 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . fkdt002bwx .
iojd2jlc3k ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 23 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 24 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . eblhn1q21v
[ 0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 25 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p .
d3vznomj0x ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 26 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 27 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . bsjj0oya40 ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 28 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . azoxgesvxj ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 29 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . dufw0vwv3o ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 30 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . kzmq5ayuhp ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 31 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . jp5trqmghp ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 32 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ikmpdntrw1 ) ,
mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 33 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . f4leq45rjn ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 34 , mxCreateUninitNumericMatrix ( 1 , 1
* sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . ndg43gdj2cy .
iojd2jlc3k ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 35 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 36 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy
[ 0 ] . fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) , mxUINT8_CLASS , mxREAL ) )
; mxSetFieldByNumber ( rtdwData , 0 , 37 , mxCreateUninitNumericMatrix ( 1 ,
1 * sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li .
d3vznomj0x ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 38 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . mt1hoilqmr ) , sizeof ( mdlrefDW -> rtdw .
mt1hoilqmr ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 1 , (
const void * ) & ( mdlrefDW -> rtdw . es5rj255h5 ) , sizeof ( mdlrefDW ->
rtdw . es5rj255h5 ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 2
, ( const void * ) & ( mdlrefDW -> rtdw . jrm4ykfn0y ) , sizeof ( mdlrefDW ->
rtdw . jrm4ykfn0y ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 3
, ( const void * ) & ( mdlrefDW -> rtdw . gvgnat3tn4 ) , sizeof ( mdlrefDW ->
rtdw . gvgnat3tn4 ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 4
, ( const void * ) & ( mdlrefDW -> rtdw . jg0qnrcaox ) , sizeof ( mdlrefDW ->
rtdw . jg0qnrcaox ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 5
, ( const void * ) & ( mdlrefDW -> rtdw . cudcy0ioif ) , sizeof ( mdlrefDW ->
rtdw . cudcy0ioif ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 6
, ( const void * ) & ( mdlrefDW -> rtdw . o4aqvkyq1t ) , sizeof ( mdlrefDW ->
rtdw . o4aqvkyq1t ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 7
, ( const void * ) & ( mdlrefDW -> rtdw . huxlbxlfje ) , sizeof ( mdlrefDW ->
rtdw . huxlbxlfje ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 8
, ( const void * ) & ( mdlrefDW -> rtdw . e030p3eagm ) , sizeof ( mdlrefDW ->
rtdw . e030p3eagm ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 9
, ( const void * ) & ( mdlrefDW -> rtdw . me01n3t1qo ) , sizeof ( mdlrefDW ->
rtdw . me01n3t1qo ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 ,
10 , ( const void * ) & ( mdlrefDW -> rtdw . gq1ouncodd ) , sizeof ( mdlrefDW
-> rtdw . gq1ouncodd ) ) ; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0
, 11 , ( const void * ) & ( mdlrefDW -> rtdw . ncaeuttxru ) , sizeof (
mdlrefDW -> rtdw . ncaeuttxru ) ) ; mr_DrivetrainEv_cacheDataAsMxArray (
rtdwData , 0 , 12 , ( const void * ) & ( mdlrefDW -> rtdw . kxp34i0kfp ) ,
sizeof ( mdlrefDW -> rtdw . kxp34i0kfp ) ) ;
mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
mdlrefDW -> rtdw . mdigxevyus ) , sizeof ( mdlrefDW -> rtdw . mdigxevyus ) )
; mr_DrivetrainEv_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) &
( mdlrefDW -> rtdw . bbyh2lmjuh ) , sizeof ( mdlrefDW -> rtdw . bbyh2lmjuh )
) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 15 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . jg0v2cyy4k ) , sizeof
( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . jg0v2cyy4k ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 16 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . cog0zpqeoa ) , sizeof
( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . cog0zpqeoa ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 17 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . d4ugeviqji ) , sizeof
( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . d4ugeviqji ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 18 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . dstnpi0fei ) , sizeof
( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . dstnpi0fei ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 19 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . ia5mclwmd4 ) , sizeof
( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . ia5mclwmd4 ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 20 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . kevuk2jdkp ) , sizeof
( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kevuk2jdkp ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 21 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . hgortb0uau ) , sizeof
( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . hgortb0uau ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 22 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . fkdt002bwx .
iojd2jlc3k ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fkdt002bwx . iojd2jlc3k ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 23 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] .
fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) , sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 24 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p .
jrdv3hmnoc ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . jrdv3hmnoc ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 25 , offset0 , & ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] .
fd4qjwy5lm . i5fcczml0p . d3vznomj0x ) , sizeof ( mdlrefDW -> rtdw .
eblhn1q21v [ 0 ] . fd4qjwy5lm . i5fcczml0p . d3vznomj0x ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 26 , offset0 ,
& ( mdlrefDW -> rtdw . eblhn1q21v [ k0 ] . fd4qjwy5lm . aqualkdqvn .
k3j1amkab5 ) , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
aqualkdqvn . k3j1amkab5 ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 27 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . bsjj0oya40 ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] .
fate2u2iog . bsjj0oya40 ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 28 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . azoxgesvxj ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] .
fate2u2iog . azoxgesvxj ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 29 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . dufw0vwv3o ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] .
fate2u2iog . dufw0vwv3o ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 30 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . kzmq5ayuhp ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] .
fate2u2iog . kzmq5ayuhp ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 31 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . jp5trqmghp ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] .
fate2u2iog . jp5trqmghp ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 32 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . ikmpdntrw1 ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] .
fate2u2iog . ikmpdntrw1 ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 33 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . f4leq45rjn ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] .
fate2u2iog . f4leq45rjn ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 34 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . ndg43gdj2cy . iojd2jlc3k ) , sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . ndg43gdj2cy . iojd2jlc3k ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 35 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . hpjac0modfc .
lim0ml1jqw ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
hpjac0modfc . lim0ml1jqw ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 36 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) , sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 37 , offset0 ,
& ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li .
d3vznomj0x ) , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . d3vznomj0x ) ) ; mr_DrivetrainEv_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 38 , offset0 , & ( mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] .
fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) , sizeof ( mdlrefDW -> rtdw .
nod5vp1cyy [ 0 ] . fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) ) ; }
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_DrivetrainEv_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void * ) & (
mdlrefDW -> rtzce ) , sizeof ( mdlrefDW -> rtzce ) ) ; ( void ) mdlrefDW ;
return ssDW ; } void mr_DrivetrainEv_SetDWork ( hmke5fx3tcj * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ;
mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mt1hoilqmr ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . mt1hoilqmr ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
es5rj255h5 ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . es5rj255h5 ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jrm4ykfn0y ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . jrm4ykfn0y ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
gvgnat3tn4 ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . gvgnat3tn4 ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jg0qnrcaox ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . jg0qnrcaox ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
cudcy0ioif ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . cudcy0ioif ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
o4aqvkyq1t ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw . o4aqvkyq1t ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
huxlbxlfje ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . huxlbxlfje ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
e030p3eagm ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . e030p3eagm ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
me01n3t1qo ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw . me01n3t1qo ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
gq1ouncodd ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw . gq1ouncodd ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ncaeuttxru ) , rtdwData , 0 , 11 , sizeof ( mdlrefDW -> rtdw . ncaeuttxru ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kxp34i0kfp ) , rtdwData , 0 , 12 , sizeof ( mdlrefDW -> rtdw . kxp34i0kfp ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mdigxevyus ) , rtdwData , 0 , 13 , sizeof ( mdlrefDW -> rtdw . mdigxevyus ) )
; mr_DrivetrainEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
bbyh2lmjuh ) , rtdwData , 0 , 14 , sizeof ( mdlrefDW -> rtdw . bbyh2lmjuh ) )
; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . jg0v2cyy4k ) , rtdwData , 0 , 15 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . jg0v2cyy4k ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . cog0zpqeoa ) , rtdwData , 0 , 16 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . cog0zpqeoa ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . d4ugeviqji ) , rtdwData , 0 , 17 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . d4ugeviqji ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . dstnpi0fei ) , rtdwData , 0 , 18 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . dstnpi0fei ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . ia5mclwmd4 ) , rtdwData , 0 , 19 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . ia5mclwmd4 ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . kevuk2jdkp ) , rtdwData , 0 , 20 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . kevuk2jdkp ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . hgortb0uau ) , rtdwData , 0 , 21 , offset0 ,
sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm . hgortb0uau ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . fkdt002bwx . iojd2jlc3k ) , rtdwData , 0 ,
22 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fkdt002bwx . iojd2jlc3k ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . fsjpudim4x . lim0ml1jqw ) , rtdwData , 0 ,
23 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
fsjpudim4x . lim0ml1jqw ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p . jrdv3hmnoc ) , rtdwData , 0 ,
24 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . i5fcczml0p . d3vznomj0x ) , rtdwData , 0 ,
25 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
i5fcczml0p . d3vznomj0x ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
eblhn1q21v [ k0 ] . fd4qjwy5lm . aqualkdqvn . k3j1amkab5 ) , rtdwData , 0 ,
26 , offset0 , sizeof ( mdlrefDW -> rtdw . eblhn1q21v [ 0 ] . fd4qjwy5lm .
aqualkdqvn . k3j1amkab5 ) ) ; } for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . bsjj0oya40 ) , rtdwData ,
0 , 27 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. bsjj0oya40 ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . azoxgesvxj ) , rtdwData ,
0 , 28 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. azoxgesvxj ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . dufw0vwv3o ) , rtdwData ,
0 , 29 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. dufw0vwv3o ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . kzmq5ayuhp ) , rtdwData ,
0 , 30 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. kzmq5ayuhp ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . jp5trqmghp ) , rtdwData ,
0 , 31 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. jp5trqmghp ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ikmpdntrw1 ) , rtdwData ,
0 , 32 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. ikmpdntrw1 ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . f4leq45rjn ) , rtdwData ,
0 , 33 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog
. f4leq45rjn ) ) ; mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & (
mdlrefDW -> rtdw . nod5vp1cyy [ k0 ] . fate2u2iog . ndg43gdj2cy . iojd2jlc3k
) , rtdwData , 0 , 34 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0
] . fate2u2iog . ndg43gdj2cy . iojd2jlc3k ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . hpjac0modfc . lim0ml1jqw ) , rtdwData , 0 ,
35 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
hpjac0modfc . lim0ml1jqw ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li . jrdv3hmnoc ) , rtdwData , 0 ,
36 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . jrdv3hmnoc ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . jkqilwbv4li . d3vznomj0x ) , rtdwData , 0 ,
37 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
jkqilwbv4li . d3vznomj0x ) ) ;
mr_DrivetrainEv_restoreDataFromMxArrayWithOffset ( & ( mdlrefDW -> rtdw .
nod5vp1cyy [ k0 ] . fate2u2iog . lx5pzbjgnjw . k3j1amkab5 ) , rtdwData , 0 ,
38 , offset0 , sizeof ( mdlrefDW -> rtdw . nod5vp1cyy [ 0 ] . fate2u2iog .
lx5pzbjgnjw . k3j1amkab5 ) ) ; } } mr_DrivetrainEv_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtzce ) , ssDW , 0 , 2 , sizeof ( mdlrefDW -> rtzce
) ) ; } void mr_DrivetrainEv_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 1868592234U , 1625053670U , 1487322176U ,
70521025U , } ; slmrModelRefRegisterSimStateChecksum ( S , "DrivetrainEv" , &
chksum [ 0 ] ) ; } mxArray * mr_DrivetrainEv_GetSimStateDisallowedBlocks ( )
{ return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
