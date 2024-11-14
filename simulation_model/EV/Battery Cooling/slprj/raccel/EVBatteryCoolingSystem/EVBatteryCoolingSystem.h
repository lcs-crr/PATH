#ifndef RTW_HEADER_EVBatteryCoolingSystem_h_
#define RTW_HEADER_EVBatteryCoolingSystem_h_
#ifndef EVBatteryCoolingSystem_COMMON_INCLUDES_
#define EVBatteryCoolingSystem_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "EVBatteryCoolingSystem_e473bc05_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "EVBatteryCoolingSystem_types.h"
#include "mwmathutil.h"
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "zero_crossing_types.h"
#define MODEL_NAME EVBatteryCoolingSystem
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (34) 
#define NUM_ZC_EVENTS (260) 
#ifndef NCSTATES
#define NCSTATES (343)   
#elif NCSTATES != 343
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T dv [ 599 ] ; real_T dv1 [ 599 ] ; real_T hdgi0ckwmt ;
real_T kvdm2qa4kz ; real_T bdmsuutsho ; real_T g4x5d1kqrr [ 4 ] ; real_T
jjbuzly2c4 ; real_T hmdfvofm2d [ 4 ] ; real_T awjh3m2i52 ; real_T c4vppbzui3
[ 4 ] ; real_T kj5ged5ouv ; real_T guzkycy441 ; real_T e4dmel4npm ; real_T
daxysc2t0q ; real_T ktxsqan1ix ; real_T ox2ag4rjwi ; real_T ktdys5yo0t ;
real_T jdzew5kwiu ; real_T n1kdcxnjx2 ; real_T cwyp0u4fxj ; real_T ek2xrgvbnw
; real_T apvg0yhoqc [ 4 ] ; real_T g5jq2txgex ; real_T ci1eqffra0 [ 583 ] ;
real_T cizm5vaana [ 7 ] ; real_T e2egazwdtp ; real_T eaf2lxhueg ; real_T
ne3aknl42j ; real_T cbztcpotvv ; real_T obweg0l22f ; real_T mijc1dwvec ;
real_T j4w0fnlfbw ; real_T gmef4hcfga ; real_T onxkezlpwm ; real_T g4gjxqt3j1
; uint8_T pat4o3qai3 ; } B ; typedef struct { real_T medpwyauzm ; real_T
of51ysnuoh ; real_T ksimmcd4jh [ 2 ] ; real_T izuzdb3pa3 [ 2 ] ; real_T
gran21d1p5 ; real_T eztgjvjrnk ; real_T pahluld41k ; real_T mjvwcs3qal ;
real_T ps2h2vwltm ; struct { void * TimePtr ; void * DataPtr ; void *
RSimInfoPtr ; } iw3e0ho3nl ; struct { void * TimePtr ; void * DataPtr ; void
* RSimInfoPtr ; } pz4i2vr5t2 ; void * gfzyhdldpe ; void * b1a0qim2yg ; void *
pg1peeaap2 ; void * bglls0p5vn ; void * adlk3xlwah ; void * bklx0nlsq4 ; void
* izgcpovxyi ; void * gvo41anqta ; void * nrhx2nf1go ; void * eakmxycvft ;
void * mydqtnb00k ; void * o1ucbdw3qn ; void * i0lluemaxm ; void * cm54eojqab
; void * mqpsatgjax ; void * n2rit51csc ; struct { void * LoggedData [ 4 ] ;
} jr4tel5t0f ; void * b3yt44zx0e ; void * dp32jrdpwa ; void * lnxt42nhut ;
struct { int_T PrevIndex ; } mpmzqyoat0 ; struct { int_T PrevIndex ; }
psiva0oxeh ; int_T idk0zphtpp [ 246 ] ; int_T eya4mzvurp ; int_T lqagrnen3f ;
int_T fni05y3dyi ; int32_T olbucdh0u4 ; boolean_T mhoqdxbzwj ; boolean_T
jbqbh3jmih ; boolean_T jy4nc0czxn ; boolean_T bhmzfrq3x3 ; boolean_T
m53bymnnod ; } DW ; typedef struct { real_T lxztuzhhop ; real_T bq1z1krpn5 ;
real_T iwyoop3u3r ; real_T env1qqkpbr ; real_T karozk4fpb ; real_T fr1u0arkx5
; real_T effbkgmtax [ 337 ] ; } X ; typedef struct { real_T lxztuzhhop ;
real_T bq1z1krpn5 ; real_T iwyoop3u3r ; real_T env1qqkpbr ; real_T karozk4fpb
; real_T fr1u0arkx5 ; real_T effbkgmtax [ 337 ] ; } XDot ; typedef struct {
boolean_T lxztuzhhop ; boolean_T bq1z1krpn5 ; boolean_T iwyoop3u3r ;
boolean_T env1qqkpbr ; boolean_T karozk4fpb ; boolean_T fr1u0arkx5 ;
boolean_T effbkgmtax [ 337 ] ; } XDis ; typedef struct { real_T lxztuzhhop ;
real_T bq1z1krpn5 ; real_T iwyoop3u3r ; real_T env1qqkpbr ; real_T karozk4fpb
; real_T fr1u0arkx5 ; real_T effbkgmtax [ 337 ] ; } CStateAbsTol ; typedef
struct { real_T lxztuzhhop ; real_T bq1z1krpn5 ; real_T iwyoop3u3r ; real_T
env1qqkpbr ; real_T karozk4fpb ; real_T fr1u0arkx5 ; real_T effbkgmtax [ 337
] ; } CXPtMin ; typedef struct { real_T lxztuzhhop ; real_T bq1z1krpn5 ;
real_T iwyoop3u3r ; real_T env1qqkpbr ; real_T karozk4fpb ; real_T fr1u0arkx5
; real_T effbkgmtax [ 337 ] ; } CXPtMax ; typedef struct { real_T ekm3vjzjrp
; real_T l1t4nu12xj ; real_T j3tmiiikdj ; real_T poaoer5ay4 ; real_T
bb24k4crqt ; real_T naumb002xd ; real_T p4kb0bk15q ; real_T gygr3vv30c ;
real_T ntg5btffan ; real_T feefd1oq5i ; real_T ejp4xzlqz0 ; real_T k0kf5z1nui
; real_T bowzxc1mbi ; real_T eqxqeb3grc ; real_T puvevgbqz0 ; real_T
mwtuaaafhe ; real_T m0afvsldbm ; real_T f0svtbiooc ; real_T ca54uqgnjo ;
real_T obk0mzmyiv ; real_T nqzaizqw1s ; real_T l4jvnc2owj ; real_T ff4huiz01f
; real_T gz02rui4bd ; real_T mb50cztkqf ; real_T frjvhn5m4j ; real_T
faglbgz4a2 ; real_T jd3kln54pc ; real_T h4uonmnafv ; real_T isjrtyhg4e ;
real_T iv0dxmx010 ; real_T hc2bzc5joz ; real_T cdj1u3fifs ; real_T m2woy3gilf
; real_T kveuqbhpo2 ; real_T o5v4een4ml ; real_T cn3ugjgjyh ; real_T
io15utxxrx ; real_T d25nauc1ib ; real_T iyzebfgivy ; real_T bgyoiqg1qb ;
real_T otf5xiucsq ; real_T pfpnmd1d45 ; real_T heqbptiok4 ; real_T jleilgla3l
; real_T incyl44akt ; real_T gbk1qo3baf ; real_T hhmkcb5mcb ; real_T
o4nb4hrei3 ; real_T afzxt0mw4x ; real_T jok2ueey5f ; real_T c0jslsypue ;
real_T bbgjh3kqf4 ; real_T pnvp2oogsz ; real_T kw4v3j1g3h ; real_T cblrfgxwbw
; real_T hxirexv5us ; real_T b5gv2uqh4j ; real_T izwsvmqgvf ; real_T
hsdcdp2omg ; real_T ehejzzu1ig ; real_T l33l0d5oqx ; real_T ooobqi14kp ;
real_T jksmjmwuqs ; real_T jzcsrfahe0 ; real_T jnjdk4b1wa ; real_T pclzcc3rpm
; real_T fxxljv4x35 ; real_T dyp5ddjhag ; real_T abwvvxhsyr ; real_T
lk0deyku4v ; real_T aaiymrged1 ; real_T azf11abmrt ; real_T ipsdrffk5s ;
real_T p1dlnkftwy ; real_T oyaq1iovua ; real_T jgdc2ly2f1 ; real_T jnxzxidh5o
; real_T mvcrjzgvmn ; real_T pzuvqwxizf ; real_T iejuf0eruc ; real_T
agtyo4syr4 ; real_T igjfgwmh0b ; real_T lqxmorg2xh ; real_T izu51jjnwa ;
real_T m0swmdrmes ; real_T peouk35jll ; real_T gf4hqjql24 ; real_T f250mkosa0
; real_T e3v2sxxx30 ; real_T kjmbep1zmg ; real_T boy1kg2htn ; real_T
ctfslqh0l0 ; real_T m1oxykqfve ; real_T mch02zbvww ; real_T joubsolbiv ;
real_T lqxmeg2ci5 ; real_T imoxs3wmyr ; real_T goljsuo5ov ; real_T dzzdgkbgvj
; real_T mxfmp3nqfy ; real_T c5qvpakzt4 ; real_T pvsnrdgtnl ; real_T
h10m4izvvn ; real_T mgttpcsktd ; real_T a1mou3mqox ; real_T pkb2hq5z1s ;
real_T eel0qxtajv ; real_T aysrhjelei ; real_T dmulic35sp ; real_T f1n451b2id
; real_T ataj5zy4re ; real_T ckk5s2ar33 ; real_T pgwd1epl13 ; real_T
crfcirm1wd ; real_T a2uk3ktqx3 ; real_T apzyujus0p ; real_T b31eo354ef ;
real_T lc4qdvspwi ; real_T gc22e4tjpz ; real_T ixwx35kpwn ; real_T nwepgervwg
; real_T ktdlieyviv ; real_T ewaffo3vwk ; real_T orv3s5y0x0 ; real_T
mlon5j2fjh ; real_T fvhri2htfk ; real_T l0dudzadcd ; real_T hmivsacky3 ;
real_T c5vtfxs4kj ; real_T ncnj5zanxo ; real_T osvqznkidy ; real_T bj5ewj1p3f
; real_T hpeyts01ey ; real_T ei5etl1ij3 ; real_T hrpsmb0p43 ; real_T
mtq0llltju ; real_T go0amsx4n3 ; real_T m5gr5zncgp ; real_T kkdrirzabh ;
real_T gom4lvutvp ; real_T p4tj4mxegb ; real_T ayhof4iwwm ; real_T kebylnmwdw
; real_T ogkcisr3mv ; real_T k2x4n5adnh ; real_T pvs5sshwwu ; real_T
lw52jyh4tv ; real_T da0xtpkizh ; real_T a4jjvqoc4g ; real_T mk25kuqgqq ;
real_T kkmflar1kd ; real_T gwxwmapdbf ; real_T or3eqyffmh ; real_T dvycetwvza
; real_T kqnfmplbvm ; real_T jkk2lxcv1t ; real_T iewx5njfxd ; real_T
p1ahwpr3g5 ; real_T alzkc1vvyr ; real_T cpq0nlhes2 ; real_T cd3qzahxew ;
real_T bnl4o42bfd ; real_T ivyilgu4rv ; real_T mfaqazawhe ; real_T kjpkyczeqv
; real_T p22hvoyrew ; real_T jayroen5a4 ; real_T elbstg5enz ; real_T
cfpdl5euog ; real_T iloctqpbzu ; real_T dzmuxzfvrz ; real_T jdd2thzmkm ;
real_T dptyckds2n ; real_T keoztuk1cx ; real_T ioqqtvgq4s ; real_T fkfeklqect
; real_T bfq0r01xzu ; real_T fyfsp3xvin ; real_T cfwiakqwec ; real_T
ercr0azr2a ; real_T kjdxj0ddsb ; real_T bsys3rj2dg ; real_T fpbxiimci0 ;
real_T mggycicpnk ; real_T okiv21qsyf ; real_T ffrl5hzpeu ; real_T pvqehe132m
; real_T jklba1q0rg ; real_T dxf110x4gx ; real_T k2d4ghmrui ; real_T
jpku2yxny2 ; real_T lgdw5h2gso ; real_T nmhgis1pfb ; real_T bbz1gero2w ;
real_T ax1hxpuzyp ; real_T kvefhkcm50 ; real_T j2ymclzws3 ; real_T btowks3zgo
; real_T nyvnwpl05m ; real_T h5utlymll0 ; real_T iwvwh50jej ; real_T
ajdqampa2e ; real_T nngo3ttjs3 ; real_T chegqqbz3z ; real_T jrsn2j3rck ;
real_T oabuoapqle ; real_T lmogujroxj ; real_T gkcovcdoat ; real_T ibavsvuhrs
; real_T lgjvws1gtg ; real_T cizu4l0nqd ; real_T cn2vcgy0oy ; real_T
lq4snih0tn ; real_T hgsqtummcj ; real_T f5k2kzh0bm ; real_T glkg02bvco ;
real_T ckgrkas144 ; real_T ob0ti2yjku ; real_T il0lj41wqy ; real_T p2gvirr0ou
; real_T cc0vmsh0wc ; real_T fgnirfwkzy ; real_T e0f2b3abgj ; real_T
nzfxzxrrom ; real_T njop4xibmh ; real_T jbdvabu3tm ; real_T dxenjznukq ;
real_T g5hom5y5uc ; real_T ewoqyhjp0a ; real_T ocw51vhw3b ; real_T gw2xpk4mqk
; real_T fud50sjjb5 ; real_T h2gfh1mcbq ; real_T mv1jk34qtm ; real_T
fwurd1topi ; real_T lfeqpr5azh ; real_T n4hgmjgmhm ; real_T a5h5czvjqt ;
real_T kuwfcruhr3 ; real_T o2liptub0k ; real_T ldq4443yhe ; real_T io2nfn2tmv
; real_T awki0mgvqz ; real_T bigeqhztdo ; real_T bbhxz1yer3 ; real_T
ebhsernnua ; real_T biwe4bt1mz ; real_T lkqeawe3du ; real_T b3w5eaqv2m ;
real_T mbw0544s1g ; real_T gkah0trbyl ; real_T d0jyeuysqt ; real_T gwiocbusne
; real_T j5olfuieye ; real_T juabzwqeja ; real_T kykcxva1fb ; real_T
azvqjpahkd ; real_T ia35wsbodm ; real_T j4chitirix ; real_T nxp5egylet ;
real_T enbbjfahyq ; real_T jgqexmifsh ; } ZCV ; typedef struct { ZCSigState
bwh2vkgoku ; ZCSigState ckrdsc4ihl ; ZCSigState b3jlewptym ; ZCSigState
if0mqrnu3u ; ZCSigState hwv1qf5jc4 ; ZCSigState g0ltkf3mlj ; ZCSigState
b45n3qoq4s ; ZCSigState dsh05nhd45 ; ZCSigState hgdkb3tw5m ; ZCSigState
iurzbutihl ; ZCSigState ckuj21y4cs ; ZCSigState nqxpwdhimn ; ZCSigState
pbwrd13qtq ; ZCSigState igyyeuq1mt ; ZCSigState hsr2ssn4ih ; ZCSigState
a53dt5bixa ; ZCSigState kcuxv2gcbf ; ZCSigState ey1thqxrxf ; ZCSigState
gluowksmnm ; ZCSigState kht43bgls2 ; ZCSigState pytra1rtzm ; ZCSigState
pwquylptle ; ZCSigState aoyxl3alqb ; ZCSigState mfelqbd5nn ; ZCSigState
jurm1dmbwj ; ZCSigState e2cvorrtsz ; ZCSigState pjtas01bsa ; ZCSigState
aubndmamax ; ZCSigState pkcqlrkqoi ; ZCSigState h2jpjwygbe ; ZCSigState
d3nliyqdgq ; ZCSigState aazgrgwa15 ; ZCSigState gbguakpjdy ; ZCSigState
fvtcqfrvkx ; ZCSigState opy3cr51xy ; ZCSigState gxv0jyrcdr ; ZCSigState
i1zcrvodvo ; ZCSigState ledqnu5nk2 ; ZCSigState powlw1xhou ; ZCSigState
gn04bytgwr ; ZCSigState btyrnghnwm ; ZCSigState phclmq2xan ; ZCSigState
hrnwlyyjwf ; ZCSigState laefnffsue ; ZCSigState aqspg5a5w2 ; ZCSigState
ocgbwjlttk ; ZCSigState mcvvrqjwsg ; ZCSigState idsniasdch ; ZCSigState
lwosewkntd ; ZCSigState f3yq15qroz ; ZCSigState mvillvuasd ; ZCSigState
g2gdiggbc2 ; ZCSigState jh53llxmde ; ZCSigState kwiei1rxo3 ; ZCSigState
lgf3vwxopa ; ZCSigState dct1olrjd1 ; ZCSigState oqumaptgrn ; ZCSigState
gtlwim32rg ; ZCSigState ou11lypcov ; ZCSigState cagjuscv3w ; ZCSigState
klcm1yo2nk ; ZCSigState nia44txozv ; ZCSigState g5ndsuzzdn ; ZCSigState
k2c2y5ejtm ; ZCSigState pephxt3dpe ; ZCSigState prz1yxiajg ; ZCSigState
icjtzzzl5p ; ZCSigState pf2j5euniz ; ZCSigState bcch3gnxax ; ZCSigState
jecirsvcpb ; ZCSigState mb25lpfsh3 ; ZCSigState drvgrpn2ki ; ZCSigState
bfzo2b2sn4 ; ZCSigState pjt2rslcl5 ; ZCSigState ia4tytzbmc ; ZCSigState
i2nvts40uj ; ZCSigState o0wi1nyi0i ; ZCSigState hbvuk11a5f ; ZCSigState
mgscv5vbn5 ; ZCSigState gmqe4m4igj ; ZCSigState hnsczutfeh ; ZCSigState
a3ehxmxaqj ; ZCSigState lytc0c1ggh ; ZCSigState gmatc0iqge ; ZCSigState
knvqll2wd0 ; ZCSigState kes3ngah2c ; ZCSigState o02x0pfl3d ; ZCSigState
mpuk4bh4ph ; ZCSigState fevdx0iu13 ; ZCSigState bwt3ytwlya ; ZCSigState
lawq5ilmkq ; ZCSigState pswpibmnuz ; ZCSigState k2jpo3grds ; ZCSigState
kchjgyo23b ; ZCSigState pepynn5u2i ; ZCSigState m20uxselql ; ZCSigState
kuradqjn4y ; ZCSigState b0oio3f2e3 ; ZCSigState ilgfv1133t ; ZCSigState
b3fjnwievh ; ZCSigState djapgnpiui ; ZCSigState d41dhrc5kr ; ZCSigState
dy2hcqovwt ; ZCSigState px5kgnap0h ; ZCSigState gm4x2yh0q1 ; ZCSigState
hmmi1dwdot ; ZCSigState bqqqzpsibr ; ZCSigState mbkodqutcm ; ZCSigState
myxc0z1s0t ; ZCSigState advveiyi3l ; ZCSigState bkdg325iz3 ; ZCSigState
kwihmaw1x2 ; ZCSigState p2y2nthyv0 ; ZCSigState e41lkadmrn ; ZCSigState
kcnakh3le1 ; ZCSigState frw3jcigmf ; ZCSigState hpmsuhhr5k ; ZCSigState
diw5mawysi ; ZCSigState bz2gi3s1zx ; ZCSigState cbhgewjhbb ; ZCSigState
ltk3b3j1bi ; ZCSigState g53rnj5cdq ; ZCSigState lapemoq4yi ; ZCSigState
cpeg5tg4jx ; ZCSigState blx4ljquhj ; ZCSigState p4g21ejm3h ; ZCSigState
hoywgrbv23 ; ZCSigState mnsmjv1tz1 ; ZCSigState kist1hx2b1 ; ZCSigState
gfengz1j3k ; ZCSigState aplms0ekym ; ZCSigState bu3nwyphxz ; ZCSigState
oorafridjg ; ZCSigState lqekriujip ; ZCSigState czzves3ejg ; ZCSigState
hny0fajyuw ; ZCSigState oso2knqyio ; ZCSigState aj2ofpxjsa ; ZCSigState
lbaufgyt3i ; ZCSigState msaccobpnq ; ZCSigState fsyyjafe1r ; ZCSigState
aazgarosnf ; ZCSigState dv3zd44kin ; ZCSigState bncbdwwymw ; ZCSigState
gjclshbnxe ; ZCSigState almkjy5iuh ; ZCSigState cx0x3p3r1t ; ZCSigState
eyifqes0li ; ZCSigState o5q1wz12zg ; ZCSigState dflo3eaazg ; ZCSigState
odkkxfadyj ; ZCSigState bn5hv3hpdi ; ZCSigState dkdp2x3con ; ZCSigState
fnnd41wv1a ; ZCSigState iaaudf21hw ; ZCSigState f5yd2gncap ; ZCSigState
dmo12iwt5w ; ZCSigState kmkzw12p4m ; ZCSigState dyfzzhmfyf ; ZCSigState
dreynlhrke ; ZCSigState jw5q5oljxa ; ZCSigState k34iolhy21 ; ZCSigState
pwmke13udv ; ZCSigState a43qtn21kv ; ZCSigState kfqjh1smwt ; ZCSigState
auud1by2sc ; ZCSigState kpfq22oxad ; ZCSigState ixh2wiioy4 ; ZCSigState
bxrb2pb03f ; ZCSigState agzk5eynmn ; ZCSigState iubth3dikj ; ZCSigState
gyjbwwjamf ; ZCSigState emjczjhin3 ; ZCSigState clwriq0ssl ; ZCSigState
nrjkqkdqnc ; ZCSigState g5tuh0ostz ; ZCSigState n10wqdhwb1 ; ZCSigState
md2huweecl ; ZCSigState dqtwxrlsza ; ZCSigState m1mjvhutqn ; ZCSigState
paqcvpede3 ; ZCSigState ba1zd3ivii ; ZCSigState ff4awslcwl ; ZCSigState
i2inllshk5 ; ZCSigState bdobvbeamm ; ZCSigState d1p5zrf1tx ; ZCSigState
pzgbukyeta ; ZCSigState l4zvj5p40h ; ZCSigState d033ducxvo ; ZCSigState
eawz3qgp5r ; ZCSigState jzwpiuxteg ; ZCSigState jggxpwduho ; ZCSigState
lgbvubhycn ; ZCSigState paqki3azn1 ; ZCSigState gbe0wvrf05 ; ZCSigState
gmrf0iy4us ; ZCSigState m2bwjzcliy ; ZCSigState m3jpjkvmbo ; ZCSigState
lpkglwjozt ; ZCSigState itra3qf5yh ; ZCSigState lhev4nkhw2 ; ZCSigState
mkigin5ec1 ; ZCSigState h202zsjfup ; ZCSigState lh3vp1ooa5 ; ZCSigState
bijecidxst ; ZCSigState jakftzw55w ; ZCSigState kdgsmlrig2 ; ZCSigState
nislwtvsiu ; ZCSigState hx21izccdc ; ZCSigState axlbidogz5 ; ZCSigState
fu4xqydtls ; ZCSigState dp4zhdum5z ; ZCSigState fckyt2tess ; ZCSigState
is1c21pv4b ; ZCSigState nrxg3ao02k ; ZCSigState iifude3b1g ; ZCSigState
p3wadqwbwl ; ZCSigState accu3uzgc4 ; ZCSigState kujucpocmg ; ZCSigState
frrkiuooe3 ; ZCSigState oy4pd5hmym ; ZCSigState dwl2vak5g3 ; ZCSigState
dpvrszrw54 ; ZCSigState iig4jk1mnu ; ZCSigState kww5l2oiqw ; ZCSigState
b5zm1km0jf ; ZCSigState chj3joflwf ; ZCSigState h5oo2cxmnq ; ZCSigState
mgpadymlui ; ZCSigState iv2w2xdnqf ; ZCSigState bn12yp13yb ; ZCSigState
fpmbw5xy12 ; ZCSigState hlt02gro51 ; ZCSigState hknjxwuf4o ; ZCSigState
pogwl2cazx ; ZCSigState ikonowkhml ; ZCSigState hcjopvbvvz ; ZCSigState
k4m4jo0mok ; ZCSigState e3gt04czmk ; ZCSigState ktr5oortfx ; ZCSigState
ged1qoqrr5 ; ZCSigState echuijvcol ; ZCSigState bs1apozscc ; ZCSigState
np1hzbsund ; ZCSigState oh52qtqsuy ; ZCSigState olghvdhuj5 ; ZCSigState
eeqpwvxvpd ; ZCSigState jzdfmsxheg ; ZCSigState bn5avbdrub ; ZCSigState
e4w4gtgzfe ; ZCSigState p4mzepqigv ; ZCSigState ijoypmvv0j ; ZCSigState
iua4azvgqi ; ZCSigState paocvui35v ; ZCSigState o5pfqsgs1u ; ZCSigState
eu5325drh0 ; ZCSigState gvwo4mbcx2 ; ZCSigState cccnklgjn3 ; ZCSigState
ci53pxlzkm ; ZCSigState ibsmzul2qm ; } PrevZCX ; typedef struct { int_T ir [
112 ] ; int_T jc [ 344 ] ; real_T pr [ 112 ] ; } MassMatrix ; typedef struct
{ rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
struct_3VsPydWBoiqQQizi9a3DAE radiator ; struct_MnlE2uNdAoiKpaBUKAg05D pump ;
real_T T_env ; real_T T_init ; real_T T_set ; real_T PIDController_D ; real_T
PIDController_I ; real_T PIDController_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T PIDController_Kb ;
real_T PIDController_LowerSaturationLimit ; real_T PIDController_N ; real_T
PIDController_P ; real_T PIDController_UpperSaturationLimit ; real_T
fromWS_Signal1_Time0 [ 264079 ] ; real_T fromWS_Signal1_Data0 [ 264079 ] ;
real_T Airvelocityms_Bias ; real_T FromWorkspace_Time0 [ 264079 ] ; real_T
FromWorkspace_Data0 [ 264079 ] ; real_T Pumpresponsedelay_A ; real_T
Pumpresponsedelay_C ; real_T StateSpace_A_pr ; real_T StateSpace_B_pr ;
real_T StateSpace_C_pr ; real_T StateSpace_InitialCondition ; real_T kW_Gain
; real_T Efficiency_Gain ; real_T Relay_OnVal ; real_T Relay_OffVal ; real_T
Relay_YOn ; real_T Relay_YOff ; real_T Airdensitykgm3_Value ; real_T
RTP_731D9D8D_T_Value ; real_T RTP_7EE98BC0_T_Value ; real_T
RTP_95CC90AC_T_Value ; real_T RTP_7D09336B_T_Value ; real_T Constant2_Value ;
real_T Constant3_Value ; real_T Constant_Value ; real_T Constant1_Value ;
real_T RTP_A90ABFEE_level_Value ; real_T RTP_A90ABFEE_p_gas_Value ; real_T
RTP_A90ABFEE_volume_liquid_Value ; uint32_T StateSpace_A_ir ; uint32_T
StateSpace_A_jc [ 2 ] ; uint32_T StateSpace_B_ir ; uint32_T StateSpace_B_jc [
2 ] ; uint32_T StateSpace_C_ir ; uint32_T StateSpace_C_jc [ 2 ] ; uint8_T
Gain1_Gain ; uint8_T Gain2_Gain ; uint8_T Gain_Gain ; } ; extern const char_T
* RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern MassMatrix rtMassMatrix ; extern P rtP ;
extern mxArray * mr_EVBatteryCoolingSystem_GetDWork ( ) ; extern void
mr_EVBatteryCoolingSystem_SetDWork ( const mxArray * ssDW ) ; extern mxArray
* mr_EVBatteryCoolingSystem_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * EVBatteryCoolingSystem_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
