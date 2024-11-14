#ifndef RTW_HEADER_EvReferenceApplication_h_
#define RTW_HEADER_EvReferenceApplication_h_
#ifndef EvReferenceApplication_COMMON_INCLUDES_
#define EvReferenceApplication_COMMON_INCLUDES_
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
#include "EvReferenceApplication_2ea1fbef_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "EvReferenceApplication_types.h"
#include "DrivetrainEv.h"
#include "BattEv.h"
#include "MotGenEvMapped.h"
#include "EvPowertrainController.h"
#include "rt_nonfinite.h"
#include <string.h>
#include <stddef.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "zero_crossing_types.h"
#define MODEL_NAME EvReferenceApplication
#define NSAMPLE_TIMES (7) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (119) 
#define NUM_ZC_EVENTS (260) 
#ifndef NCSTATES
#define NCSTATES (379)   
#elif NCSTATES != 379
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T bd2ndavyho ; } crxjqcpzhj ; typedef struct { int8_T
iqmyanxtr1 ; boolean_T mc3fhmonso ; } lh2twa3gpf ; typedef struct { real_T dv
[ 599 ] ; real_T dv1 [ 599 ] ; Sensors fgglakce4f ; BMS_Cmd jan2ijhoyt ;
real_T bht55s5qq3 ; real_T lz5vtehujl ; real_T lrkperxqkh ; real_T f32ubspqi4
; real_T go1fcnlopp ; real_T dsdqzbwj3v ; real_T aa3fdhivvr ; real_T
ed5zbrqgc5 ; real_T btgdxjpot5 ; real_T pjihd5zicd ; real_T a5qnq1dc0o ;
real_T brrexts5jl ; real_T olcjbaurbk ; real_T g1j2t5ryrl ; real_T i303hxmk4s
; real_T f3xfryzo45 ; real_T l2r3hwo42w ; real_T aam4cx4xp2 ; real_T
lrzxrumeie ; real_T biin5otx1a ; real_T el3bc3rvwv [ 4 ] ; real_T hm1fmdpdgy
[ 4 ] ; real_T j3ew0k2ceg ; real_T omqn5wlmzw [ 4 ] ; real_T g5t5qx3zcf ;
real_T d4gyom2cqd ; real_T icvg51iljz ; real_T kodvah5jo3 ; real_T lx1jkj3hhs
; real_T juyzoqqgba ; real_T incncr24ln ; real_T gavoqkfufz ; real_T
dnav505y5o ; real_T loitizpkx4 ; real_T pf3kdhnsui ; real_T j4oygusifp [ 4 ]
; real_T kktsse5wr3 ; real_T pvxotluv5b [ 583 ] ; real_T enqmayw5zb [ 7 ] ;
real_T bglj00uwmx ; real_T mq2rmflx5a ; real_T bcp2j24ktn ; real_T ghjwcqfy1n
; real_T mvfxkga0xl ; real_T nwplhjp5pc ; real_T hxtcmjvpb2 ; real_T
jmv50argl1 ; real_T lwwxzl5qzf ; real_T mfbcndbdnw ; real_T eg4mfruiee ;
real_T dcpucpuzjn ; real_T eqgmmqi3cf ; real_T l3rmegtqm5 ; real_T n1ivhteclj
; real_T kmsp0cd1e1 ; real_T fvfcqphwub ; real_T a54tevlqes ; real_T
cwygjkza2r ; real_T ab4upgrnrw [ 2 ] ; real_T nrgoj0estv ; real_T ij3l3krian
; real_T mjgpn01dl2 ; real_T lg320qgezp ; real_T elrvsc3nih ; real_T
pam35l1pg2 ; real_T oigt4h5oa0 ; real_T eaez13ma04 ; real_T bkfce3mmg3 ;
real_T iumj4ipipu ; real_T ceif11edac ; real_T b0xsyyulsa ; real_T jcja03y2ta
; real_T eyxsiaqd30 ; real_T klgwp0bl1e ; real_T hyeok2w0lk ; real_T
as3zb4xmb3 ; real_T nxipfqo4ge ; real_T bgyxx3obeb ; real_T mapbxuiz5v ;
real_T kyoewhwiba [ 2 ] ; real_T kj51ocjbc3 [ 2 ] ; real_T k25qje3rlu ;
real_T kpz0fum4jx ; real_T avyl4rftay ; real_T mlkrs1nwnz ; real_T lw2sqz3qnd
; real_T m1l1u42xrf ; real_T imnt2v1zkq ; real_T ifsszmtacm ; real_T
pfur2fmy1z ; real_T mqqrzg0clr ; real_T o5bbi4nmva ; real_T jspshln155 [ 2 ]
; real32_T obtzbv3oqr ; real32_T jnh3l0n1k5 [ 96 ] ; real32_T bexoc20jd2 ;
BMS_State_Enum przvd0w4hd ; uint8_T eeny0h4lwy ; boolean_T fd5vhxn522 ;
boolean_T hlr5waurua ; boolean_T lt2astw3oy ; boolean_T dbbveecmrs ;
boolean_T kwuy3vap0b ; boolean_T ddw4r03rdd ; boolean_T pvq5cdapvp ;
boolean_T b0dgot5a0g ; boolean_T l3da1b0tbm ; boolean_T fjngm2jfcz ;
boolean_T ide52jc1xl ; boolean_T by2opoctqb ; boolean_T h4vbxbl4u1 ;
crxjqcpzhj ciwxigmsq2 ; crxjqcpzhj g30v1kdrwbo ; } cuhiq2he3x ; typedef
struct { real_T p3iatbuorl ; real_T oyf31f32r1 ; real_T dlo02ztcii [ 2 ] ;
real_T juhg1joriu [ 2 ] ; real_T phmddq1zkx ; real_T jwpc1uzeor ; real_T
l4pn2msb3d [ 2 ] ; real_T oeaskjkfsr ; real_T k4zhoquz4c ; real_T fbroivbf3k
; real_T mkiptczwen ; volatile real_T gyxsg3hoeg ; volatile real_T cl5jwb0b3t
; volatile real_T m1lyfkk4wz ; volatile real_T arwg2hasvu ; volatile real_T
gzyrjrunwy ; real_T cjijsufndg ; real_T keqs0k3sdq ; real_T alxnn4vrl1 ;
real_T my5si44j4x ; real_T gkios1beqo ; real_T jidxlsm5se ; volatile real_T
jsjjbflcse ; volatile real_T dzxddx5cen ; volatile real_T apn1h34r15 ;
volatile real_T ilvsdo0oga ; volatile real_T iap4dpl4zs ; volatile real_T
fr1sahkypq ; volatile real_T ie0iddjxra ; volatile real_T givtfh51qo ;
volatile real_T cj4gapd3fs ; volatile real_T eww50ci0u5 ; real_T gyrmkznnvz ;
volatile real_T gupn4h5qkp ; volatile real_T dxz1p5izxq ; volatile real_T
okzsrfvbia ; volatile real_T ahhxtrgluu ; real_T mwwvksjbpb ; real_T
ipsejbdjkv ; real_T kr24afjbvy ; real_T mgyqdv05fz ; real_T hvilkifux1 ; void
* ikimkrkcjx ; void * bwumius5mm ; void * dtn4zzzaee ; void * cdfj0j1cvx ;
void * kypnp3kmdt ; void * jhwviyiicw ; void * kykwshfv1u ; void * iviog2qp5o
; void * g1wyg1abb4 ; void * n3a52jp2m5 ; void * bfcnmonz0t ; void *
bifyhkr5xr ; void * asdmqibftz ; void * hrr5yk13zy ; void * iqsnio5jpk ; void
* egtg1gdtyo ; struct { void * LoggedData [ 12 ] ; } hp0aqxmuww ; volatile
real32_T nedhadhu3t [ 96 ] ; int32_T odxrkracyb ; int32_T fuq0idaz5u ;
int32_T code54py1j ; uint32_T azfkgqxasv ; uint32_T imczkcsnw3 ; int_T
lstbvo4uss [ 246 ] ; int_T cuk0updp4b ; int_T go23v0n4e4 ; int_T g1z0l2rflt ;
int32_T o1jqp4wpbb ; volatile int8_T liwdzlex20 ; volatile int8_T fumd4zvnkk
; volatile int8_T ibuccqrkws ; volatile int8_T kvdz2ebfhv ; volatile int8_T
bhnsby0fli ; volatile int8_T mwgqdelv1f ; volatile int8_T kltct411us ;
volatile int8_T hszqsxfvz0 ; volatile int8_T pzhspsqiej ; volatile int8_T
aevxwrdkrx ; volatile int8_T b5jqdqfiw3 ; volatile int8_T im4sg3gugq ;
volatile int8_T lz2gyqiob1 ; volatile int8_T fde5kmnnd2 ; volatile int8_T
lrwbi350ti ; volatile int8_T dapk13hkuj ; volatile int8_T gqvgelmask ;
volatile int8_T pyshnl4n4o ; volatile int8_T jkb4mvplww ; volatile int8_T
ade3ahyo1e ; uint8_T gmldgqtpy3 ; uint8_T o23aklsczm ; uint8_T emkg42qjo3 ;
uint8_T inllocuypf ; boolean_T nhfzola4qr ; boolean_T m21cmnmmdk ; boolean_T
m1zratuqz4 ; boolean_T jgorjlljdk ; boolean_T cpgm3bdawj ; boolean_T
izevsizlwm ; boolean_T pncmmapinm ; hmke5fx3tcj igqkoslatl ; lobjb0lvrdo
isvmsyyglk ; juj5p01hmia m03tkajmio ; pwecol01r52 ekun4ztdyk ; lh2twa3gpf
ciwxigmsq2 ; lh2twa3gpf g30v1kdrwbo ; } giqt2tul5w ; typedef struct { real_T
deyyyt5ypg ; edp3webv0p d5katehawv ; real_T g14mueghy3 ; real_T k55ybo3o50 ;
real_T fljoxgkrbw ; real_T lwcj1rfkgv ; real_T f5i3cl2axt ; real_T ommjwylk33
; real_T a0egidfcb5 ; real_T mgxxfhkfdi [ 337 ] ; hkgv0zhr3w nq1lsnuhqu ;
had2nm4nh5 huiflaoyhi ; real_T piwaeu0cyd ; real_T niplvsv1th ; } i344fcmwfc
; typedef int_T c4o1mv5dv4 [ 1 ] ; typedef real_T jh4nyoq4g4 [ 2 ] ; typedef
struct { real_T deyyyt5ypg ; cspbap1de4 d5katehawv ; real_T g14mueghy3 ;
real_T k55ybo3o50 ; real_T fljoxgkrbw ; real_T lwcj1rfkgv ; real_T f5i3cl2axt
; real_T ommjwylk33 ; real_T a0egidfcb5 ; real_T mgxxfhkfdi [ 337 ] ;
nvyvwtjtwa nq1lsnuhqu ; dpukc5flet huiflaoyhi ; real_T piwaeu0cyd ; real_T
niplvsv1th ; } jtt2nejjv2 ; typedef struct { boolean_T deyyyt5ypg ;
bbuzvmnhsa d5katehawv ; boolean_T g14mueghy3 ; boolean_T k55ybo3o50 ;
boolean_T fljoxgkrbw ; boolean_T lwcj1rfkgv ; boolean_T f5i3cl2axt ;
boolean_T ommjwylk33 ; boolean_T a0egidfcb5 ; boolean_T mgxxfhkfdi [ 337 ] ;
khjrgybdwv nq1lsnuhqu ; cfzqkyi2uw huiflaoyhi ; boolean_T piwaeu0cyd ;
boolean_T niplvsv1th ; } esngraya3x ; typedef struct { real_T deyyyt5ypg ;
nupxuy3etd d5katehawv ; real_T g14mueghy3 ; real_T k55ybo3o50 ; real_T
fljoxgkrbw ; real_T lwcj1rfkgv ; real_T f5i3cl2axt ; real_T ommjwylk33 ;
real_T a0egidfcb5 ; real_T mgxxfhkfdi [ 337 ] ; real_T nq1lsnuhqu [ 1 ] ;
real_T huiflaoyhi [ 1 ] ; real_T piwaeu0cyd ; real_T niplvsv1th ; }
ii5v51btxn ; typedef struct { real_T deyyyt5ypg ; aciiplviyd d5katehawv ;
real_T g14mueghy3 ; real_T k55ybo3o50 ; real_T fljoxgkrbw ; real_T lwcj1rfkgv
; real_T f5i3cl2axt ; real_T ommjwylk33 ; real_T a0egidfcb5 ; real_T
mgxxfhkfdi [ 337 ] ; real_T nq1lsnuhqu [ 1 ] ; real_T huiflaoyhi [ 1 ] ;
real_T piwaeu0cyd ; real_T niplvsv1th ; } kewnzdoseq ; typedef struct {
real_T deyyyt5ypg ; cphoervchx d5katehawv ; real_T g14mueghy3 ; real_T
k55ybo3o50 ; real_T fljoxgkrbw ; real_T lwcj1rfkgv ; real_T f5i3cl2axt ;
real_T ommjwylk33 ; real_T a0egidfcb5 ; real_T mgxxfhkfdi [ 337 ] ; real_T
nq1lsnuhqu [ 1 ] ; real_T huiflaoyhi [ 1 ] ; real_T piwaeu0cyd ; real_T
niplvsv1th ; } h4kbxz4s23 ; typedef struct { pmzuarg20b jjd2t5uxgu ; real_T
k20dhsy2rp ; real_T iy0praib1p ; real_T mdd4d3qoks ; real_T jc5ea2cz4d ;
real_T hgrzu0aacm ; real_T eye5batohs ; real_T bvmkpc35vq ; real_T dtgdny5svo
; real_T js40d5jy2p ; real_T gbh50wyhre ; real_T fpwhzmcw1y ; real_T
garjigqx5k ; real_T lalj1iiep0 ; real_T bns0qx5xwr ; real_T kdhrgtzvbi ;
real_T ijrrqmsgid ; real_T btkrz3mp0p ; real_T cyhh4f24b3 ; real_T lpldxpxuls
; real_T f0e4euzprz ; real_T dxhdxekb34 ; real_T ghrq2aki4g ; real_T
hz01kg2bvq ; real_T o2szhsuq3g ; real_T h0oipyl0gd ; real_T dvwymcix1e ;
real_T goefstc4u3 ; real_T faph3cjz0n ; real_T p2ofhpgshk ; real_T bgnthqzjuf
; real_T n3ikdorhh3 ; real_T emjik2lvln ; real_T mdgh2v4hfb ; real_T
promshbouy ; real_T mjr4ilq3qd ; real_T ehs4vhlzwq ; real_T hgbwfw1rom ;
real_T b0fdiij1fj ; real_T jqtetg2hmt ; real_T p1q4nfaieg ; real_T pwgabo12g0
; real_T junqchetw1 ; real_T it32otmldy ; real_T pxz1x4wpwi ; real_T
jnjbtomb05 ; real_T convtp2nj3 ; real_T eg0y1pcpmq ; real_T eegbxwmr1g ;
real_T b5v2zwg44z ; real_T b5wtsrwlrq ; real_T dsab5xlfdj ; real_T p544qzrzcf
; real_T ibbtckqhru ; real_T hwe2jvfmwb ; real_T knbt3pb353 ; real_T
cxhtmbk3bi ; real_T fengm1fqca ; real_T epersrqri1 ; real_T gkwqg5sudv ;
real_T o0gvauk5le ; real_T bpiy2hanzx ; real_T cjop5bn40l ; real_T iizohfgrw0
; real_T j0ifxwupua ; real_T fi4tl5cyab ; real_T i5vwcenprx ; real_T
kch3pxphsk ; real_T m2bq5csq4z ; real_T g3mmzqxrie ; real_T kjwdbdbnqi ;
real_T axrmjksdo2 ; real_T h5xiclwbfn ; real_T b3nktte4qy ; real_T jn0xhvfgpc
; real_T htboupzhvg ; real_T fidjbxki0y ; real_T lf5vgg1qfl ; real_T
hphyuklwbq ; real_T f2kjbm3l4b ; real_T b5sotruiqa ; real_T adatkpflzq ;
real_T juowk4ulq2 ; real_T mj1vznw4j5 ; real_T nmqroppmlr ; real_T mfq3oegqz1
; real_T ls2czljks2 ; real_T l0y3iyqpkf ; real_T bauwusz04b ; real_T
jnl5ghk4hi ; real_T kjgrejzxlo ; real_T kf1bkizgg1 ; real_T dp2e2tbye4 ;
real_T pdm3dqr3u3 ; real_T htke5t1i1g ; real_T nfybezdilb ; real_T bkozmgogwg
; real_T c4elf1teuo ; real_T pc4zkpafmx ; real_T fnmlaorbpk ; real_T
kekni1djub ; real_T oqkvc34i3v ; real_T gvtys2pqtb ; real_T iuvquc323k ;
real_T o4tokzclro ; real_T p3aq02bmky ; real_T ng5aiwdmw3 ; real_T oek5arjhph
; real_T a5xqa4q2qc ; real_T a0ichfnrty ; real_T lhgvbcmfr5 ; real_T
jte0zzjjmc ; real_T anpafg5aa0 ; real_T nska2wl4ni ; real_T i25hvgdu4x ;
real_T bomrlksd0u ; real_T lddlkak2ym ; real_T jwvyxame4s ; real_T k1ah0gp3sv
; real_T pgkvpl3sd0 ; real_T fyhczuyifw ; real_T b4wszcbqer ; real_T
hmwnasvlkx ; real_T bqa0jznerh ; real_T ggnu3434l0 ; real_T lvbwpnz11r ;
real_T chd4x1f5e1 ; real_T jesdu1zkgs ; real_T bdqn1zz3se ; real_T dpe3u3hty2
; real_T nlgsf3lsns ; real_T h3ctvg0o1j ; real_T dleyqtph3y ; real_T
avacsfnwoa ; real_T geghv3jqfn ; real_T j0bhvmf5g5 ; real_T mufwdmwafl ;
real_T j55xhvczl5 ; real_T jht4pqufju ; real_T ebu5az01lf ; real_T bndglvi4gq
; real_T laftwespxa ; real_T h3aywithsl ; real_T i4d3rf0lis ; real_T
ffoc3iyssq ; real_T coq13w32x5 ; real_T ps2tghtdz2 ; real_T ljmuvksmi0 ;
real_T f4l01y1oe3 ; real_T j1qfraw4ir ; real_T nntdgy1rtl ; real_T kejlgxd5bg
; real_T l3z2gydke4 ; real_T oh0oxfo1fe ; real_T iay2yq1utj ; real_T
kjf22ccjfu ; real_T gochjpj4ua ; real_T ndaooba0ch ; real_T lpiqvzndf1 ;
real_T hg4ncmg22j ; real_T kviar4btrr ; real_T p0npvx5rew ; real_T gnrriim2n0
; real_T mekwi4lxhq ; real_T mlgwvmd00f ; real_T fjh1u2osi0 ; real_T
nzhgfcpkva ; real_T eargljp4w4 ; real_T idtnpnc3ye ; real_T nfyqiw2jpa ;
real_T k11ipbjd4i ; real_T irth35unle ; real_T c401ovbl1x ; real_T m325ybi4my
; real_T li3chm4cuq ; real_T fttcel3cs2 ; real_T oh2wqtsml0 ; real_T
ll3oib2gic ; real_T d1y4h5ieoc ; real_T epjso5qwe0 ; real_T eqgfoo2lhe ;
real_T cb5zbiaq5k ; real_T orshkld5ue ; real_T fivviyalbv ; real_T mervdokd4z
; real_T g24evlfr42 ; real_T laojjcm33c ; real_T h0bnjl1zci ; real_T
ejf1axjbn4 ; real_T otalu0qc4d ; real_T l2pajsnqeq ; real_T fehq4v03oy ;
real_T ln4r3wqod3 ; real_T dysodgu0lf ; real_T ntdes14okp ; real_T ctgxi4nkgv
; real_T n1zuzt0cie ; real_T adoyrnljle ; real_T cd5ulcnpzi ; real_T
ntkxqk3rbd ; real_T azb4ueejsb ; real_T msrefslk5k ; real_T h4lxl2crsi ;
real_T psog3bxr3l ; real_T om2n1dfhl3 ; real_T ixmp5ef4j0 ; real_T fx0elkeb3m
; real_T ecnqbc5w0t ; real_T bdq3kmtoa4 ; real_T bgtxt3pwrw ; real_T
js0l3zghoe ; real_T ewat1uj4wf ; real_T kbo3ujz0qu ; real_T l22es0ugsg ;
real_T i52egj0dj3 ; real_T m25p0m4yzs ; real_T p5jhboja2r ; real_T bnznwbw4nu
; real_T gr4fe4mv52 ; real_T hhavikaxmn ; real_T io3wpkv0nx ; real_T
ncjgwlrdcc ; real_T eyyukq20fb ; real_T a0rvhk4cek ; real_T frp2yxn5qd ;
real_T j4mqhg1zfw ; real_T oicfemhqve ; real_T gv1egmvowa ; real_T ouxtgvhed1
; real_T gqjfwzi2jq ; real_T lrr2vh1ba2 ; real_T hugq0ky0pg ; real_T
fn5ceww1h3 ; real_T mw1owx3zzs ; real_T ggpaauvgpn ; real_T botrpi5qyr ;
real_T kxvd2502bj ; real_T jirxsomc52 ; real_T c1w2vz5sff ; real_T pjm0512xnd
; real_T k1rsnofqeb ; real_T m11u1xtgfd ; real_T ckamq5xrgq ; real_T
juilph2w1b ; real_T lmj2u3w04m ; real_T cdayq3u3l3 ; real_T miafnomzyt ;
real_T gxwjj3lbo5 ; real_T k4i2xtlodx ; real_T i45jory4ye ; real_T kz2dpxmg3e
; real_T egiv40sxd2 ; real_T jvpcqivn1b ; real_T cdxv0f4cef ; real_T
b0wq2zmzk5 ; real_T mcaiaxmzje ; real_T ctbuvbc1em ; real_T iq3e0xzdd1 ;
real_T mh22ktvj2a ; real_T glpqg410p4 ; real_T cgylogke0v ; real_T lwrfnirc5y
; real_T elvzjss35a ; real_T kjulgp4bf4 ; real_T dxds04xoh4 ; } bg4wxy5yyz ;
typedef struct { ZCSigState n0lzdvijfj ; ZCSigState e2n4gdj5ec ; ZCSigState
hs43nmcco4 ; ZCSigState hc2canjhaa ; ZCSigState ctujfpab3l ; ZCSigState
a34xui2ho4 ; ZCSigState pz24kquzmt ; ZCSigState oz4ibzx5ab ; ZCSigState
mjm1poariv ; ZCSigState i5e2fisbst ; ZCSigState nzztp1l05c ; ZCSigState
agnxyrzryh ; ZCSigState ecsfseuolx ; ZCSigState lhu3ticdzs ; ZCSigState
ffzl34n31n ; ZCSigState gerdnmbrvl ; ZCSigState i4ofbhr0xw ; ZCSigState
p4lvghny5u ; ZCSigState euvl4orz1d ; ZCSigState f2paaaqjfl ; ZCSigState
pvqigtbx0g ; ZCSigState ockvzf2mda ; ZCSigState eaxei4zyqb ; ZCSigState
kflltywth3 ; ZCSigState cbotyhovp1 ; ZCSigState elznoxncos ; ZCSigState
pjsp21qwgh ; ZCSigState jyxogojchn ; ZCSigState jpzxatphqx ; ZCSigState
kycvjz52ix ; ZCSigState etehhrssq1 ; ZCSigState cm4pvlvzgs ; ZCSigState
ayu2ehltlz ; ZCSigState fhfbbhnuxm ; ZCSigState lzkbj5yhy0 ; ZCSigState
gpop3ueobq ; ZCSigState cqkjwsvg3a ; ZCSigState l2hpahp51v ; ZCSigState
fbsp44rklu ; ZCSigState jtqsdhphup ; ZCSigState g13oyzgcex ; ZCSigState
mtgm2v24eh ; ZCSigState cpzy54r4jp ; ZCSigState ilymheexmj ; ZCSigState
lnbpe3ljzq ; ZCSigState kmu4gsgf2x ; ZCSigState dwxliflalp ; ZCSigState
pmi1wsgzj0 ; ZCSigState ocwtlynnan ; ZCSigState gbwhgljvem ; ZCSigState
dyd5xmrdbt ; ZCSigState e2l3e3lbbq ; ZCSigState cdag0lzmu2 ; ZCSigState
bli41mwdby ; ZCSigState n05f1cysxc ; ZCSigState gllo5o3byj ; ZCSigState
nlaodpmaix ; ZCSigState kvxr0gskcm ; ZCSigState hkvsk5xppk ; ZCSigState
jxqwqf3b25 ; ZCSigState ppv0m0iguk ; ZCSigState lw4ubjpvq4 ; ZCSigState
lduatckny5 ; ZCSigState cg4e5lb03e ; ZCSigState oy0tufyk4m ; ZCSigState
lnovcb3uqc ; ZCSigState jcidijbxvc ; ZCSigState i1o4eq3p00 ; ZCSigState
cfvonofcc0 ; ZCSigState dvf4ijy1xo ; ZCSigState fu0fky2sdm ; ZCSigState
kwkodqrik1 ; ZCSigState lygmjqdrue ; ZCSigState brdemhs3cn ; ZCSigState
mib5a5djhe ; ZCSigState ky32pvocaf ; ZCSigState clmqnrnxia ; ZCSigState
mgyboehngf ; ZCSigState kbwszysom5 ; ZCSigState js4s11f0jh ; ZCSigState
akiuxf0enb ; ZCSigState b1dl4fqpax ; ZCSigState firzypvmuf ; ZCSigState
cjki4nvpgb ; ZCSigState muvqtsf3qq ; ZCSigState katrxg2idu ; ZCSigState
ofp3uzy3yx ; ZCSigState euhhh3vavs ; ZCSigState a0vbcfh1lj ; ZCSigState
dyozprzx3e ; ZCSigState mkrhaqrcn3 ; ZCSigState leco2phobk ; ZCSigState
d2352ksec3 ; ZCSigState psqyieys05 ; ZCSigState htrcqp5ebl ; ZCSigState
hitslydl3j ; ZCSigState kxns3bwsiq ; ZCSigState c003u3cmd0 ; ZCSigState
im2hhlrr0i ; ZCSigState ln34dtuvpc ; ZCSigState hwvb00kybf ; ZCSigState
nn5z53thmw ; ZCSigState nkh3lz0elc ; ZCSigState a2gzcatkpx ; ZCSigState
dzzpeps021 ; ZCSigState gnfzqoty4t ; ZCSigState erdeyzdhh5 ; ZCSigState
f1aur4nrhz ; ZCSigState l35egn53hh ; ZCSigState amenclvryp ; ZCSigState
pbh54tq2h3 ; ZCSigState iq2sk2tigr ; ZCSigState m1kheyuexn ; ZCSigState
ehehmd0bmy ; ZCSigState no101bmnji ; ZCSigState aguo3rypu3 ; ZCSigState
ikqcbhc3jp ; ZCSigState f3v3stdbud ; ZCSigState ab4hgq5rok ; ZCSigState
cn5l1vacyt ; ZCSigState i2q24hpkmg ; ZCSigState lu0dbltad5 ; ZCSigState
e3wodqbpzo ; ZCSigState pxdhahezql ; ZCSigState epikwk4sbt ; ZCSigState
dunnsxl50c ; ZCSigState jc31milum3 ; ZCSigState akk5j4aul3 ; ZCSigState
o5nfyaq55g ; ZCSigState aluzqkv5go ; ZCSigState k5n2hpmbo3 ; ZCSigState
fzwtltz33t ; ZCSigState jmi5uxutds ; ZCSigState n0dtfqkvyj ; ZCSigState
pxtyz1x0k3 ; ZCSigState py5jhsk2vj ; ZCSigState gepfkjdvng ; ZCSigState
cp1xt0vmex ; ZCSigState iaascaoj0a ; ZCSigState orwxq3kr1q ; ZCSigState
bonehnrb02 ; ZCSigState br2ntw1wxk ; ZCSigState cwkvg5vzy1 ; ZCSigState
mxmazqshkm ; ZCSigState ixzquuc2mp ; ZCSigState oqhvfhvwuk ; ZCSigState
ldibkmevye ; ZCSigState g04zn1n3ha ; ZCSigState bufjpeyojr ; ZCSigState
dgsid3eyvm ; ZCSigState iyu5zite3e ; ZCSigState hbvbea4lnw ; ZCSigState
ftb1ykdkcf ; ZCSigState c2g01ycvbp ; ZCSigState k5yhwkjuvj ; ZCSigState
eomxh2jqle ; ZCSigState kg20drdaeo ; ZCSigState ok5zc1sylo ; ZCSigState
hoaabnutwa ; ZCSigState ig2wscwlvl ; ZCSigState ogexgbejnf ; ZCSigState
inaw41fynp ; ZCSigState aze5fw5dod ; ZCSigState kdzqpcs2tr ; ZCSigState
k2twkzks1a ; ZCSigState jsgdnjnzis ; ZCSigState ntbmyulzjh ; ZCSigState
pqrqottc0v ; ZCSigState d1epwx2h2v ; ZCSigState d1tld1bnu5 ; ZCSigState
f5bfxnt12t ; ZCSigState hcqaetjcog ; ZCSigState f1iroubtd2 ; ZCSigState
iibzpn50ay ; ZCSigState hwbp3fspur ; ZCSigState bpt4t4rpgz ; ZCSigState
llhsogl4eu ; ZCSigState myfesskccc ; ZCSigState o0shnujuad ; ZCSigState
ncgfaz22mt ; ZCSigState kaiuteu0af ; ZCSigState m4pqtgix0d ; ZCSigState
kj041vibgz ; ZCSigState myjlnf0nqq ; ZCSigState ch5iwdquw0 ; ZCSigState
dzub5cxnhp ; ZCSigState fv5lxjj1zk ; ZCSigState njyfcnmmhp ; ZCSigState
jacjnrwotz ; ZCSigState ft3djbtrtp ; ZCSigState ozjggje0xq ; ZCSigState
k4nyamle31 ; ZCSigState l5apxknjhp ; ZCSigState lzodqrdjtt ; ZCSigState
ic3kfkqixa ; ZCSigState pydnbfas0y ; ZCSigState fcjq2gshrw ; ZCSigState
ey20zq1nli ; ZCSigState cl2y0akwen ; ZCSigState mjdixnvfpt ; ZCSigState
kfz4deqseb ; ZCSigState kom2sd3ade ; ZCSigState o525u0srjr ; ZCSigState
lknadojzxb ; ZCSigState btiwhrehlt ; ZCSigState fxjy0vtxu2 ; ZCSigState
prtvwccnlg ; ZCSigState bgxabgzpsp ; ZCSigState co5axmhfwa ; ZCSigState
bizivml0n4 ; ZCSigState jr4ozifmld ; ZCSigState dhgxepvzrx ; ZCSigState
f2fyqopjl4 ; ZCSigState i0z5ddgrdi ; ZCSigState jb12dywhur ; ZCSigState
lydeqejlom ; ZCSigState nm5quwa155 ; ZCSigState egkkxop4oo ; ZCSigState
c4sz4frdzi ; ZCSigState higzkibjpn ; ZCSigState fuox4febrd ; ZCSigState
gtqoq45krz ; ZCSigState gas35pt0u4 ; ZCSigState fpi2l1uk0b ; ZCSigState
hemqvp5sg0 ; ZCSigState fhd0ll3gx3 ; ZCSigState btyvj13pdg ; ZCSigState
egty4vnksm ; ZCSigState mxyvqgjjfb ; ZCSigState ax4mdktvnp ; ZCSigState
iy5igha3cu ; ZCSigState gan4ylkwcx ; ZCSigState jxww5xovxs ; ZCSigState
gleie3rnct ; ZCSigState gc0ulnm5ro ; ZCSigState cbhh0trgpw ; ZCSigState
c5favkn3t2 ; ZCSigState njt0zclwzp ; ZCSigState ctppfej0wy ; ZCSigState
lph4qqpste ; ZCSigState al5hwkuots ; ZCSigState pai2qrtcxu ; ZCSigState
eaxtgefojm ; ZCSigState gvof0az0fc ; ZCSigState ffx5aeuxik ; ZCSigState
le5jwvj0br ; ZCSigState cymiaki0cz ; ZCSigState lmchu2vc43 ; ZCSigState
et1k2k4v2t ; ZCSigState lhp5uiih1n ; ZCSigState o33w0rbp14 ; ZCSigState
jow3opnakx ; ZCSigState muluz0qk23 ; ZCSigState kstonlfqbi ; ZCSigState
o2rvlfsrqd ; ZCSigState cmu0w0lv4l ; ZCSigState jpxyj2xhvh ; ZCSigState
jlsmyoxrwi ; ZCSigState dmu1u1m53k ; ZCSigState gniztpakwo ; } dhvysoxui2 ;
typedef struct { int_T ir [ 148 ] ; int_T jc [ 380 ] ; real_T pr [ 148 ] ; }
gkywbalvxl ; typedef struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMappingInfo * childMMI [ 5 ] ; } DataMapInfo ; struct
konn1m5pjfe_ { real_T PIDController_D ; real_T
LongitudinalDriverModel_GearInit ; real_T PIDController_I ; real_T
SignalHold_IC ; real_T SignalHold_IC_k5etbcnmrh ; real_T
PIDController_InitialConditionForFilter ; real_T
PIDController_InitialConditionForIntegrator ; real_T PIDController_Kb ;
real_T LongitudinalDriverModel_Kpt ; real_T LongitudinalDriverModel_L ;
real_T PIDController_LowerSaturationLimit ; real_T PIDController_N ; real_T
PIDController_P ; real_T PIDController_UpperSaturationLimit ; real_T
LongitudinalDriverModel_aR ; real_T LongitudinalDriverModel_bR ; real_T
LongitudinalDriverModel_cR ; real_T LongitudinalDriverModel_g ; real_T
LongitudinalDriverModel_m ; real_T LongitudinalDriverModel_tShift ; real_T
LongitudinalDriverModel_tau ; real_T div0protectpoly_thresh ; SRE
EnumeratedConstant_Value ; real_T u1_UpperSat ; real_T u1_LowerSat ; real_T
u0_UpperSat ; real_T u0_LowerSat ; real_T Switch1_Threshold ; real_T
Constant_Value ; real_T Constant_Value_nhp3htkj21 ; real_T
MotorCouplingDynamics_A ; real_T MotorCouplingDynamics_C ; real_T
FirstOrderHold_IniOut ; real_T FirstOrderHold_ErrTol ; real_T
FirstOrderHold_IniOut_jie5nbhxr2 ; real_T FirstOrderHold_ErrTol_llzlt0txj1 ;
real_T BatteryDischargeDynamics_A ; real_T BatteryDischargeDynamics_C ;
real_T Airvelocityms_Bias ; real_T Pumpresponsedelay_A ; real_T
Pumpresponsedelay_C ; real_T StateSpace_A_pr ; real_T StateSpace_B_pr ;
real_T StateSpace_C_pr ; real_T StateSpace_InitialCondition ; real_T
Integrator1_IC ; real_T Saturation_UpperSat ; real_T Saturation_LowerSat ;
real_T Saturation_UpperSat_n5cfzewtp3 ; real_T Saturation_LowerSat_jdvecoiqp4
; real_T Switch_Threshold ; real_T uDLookupTable_tableData [ 1801 ] ; real_T
uDLookupTable_bp01Data [ 1801 ] ; real_T kW_Gain ; real_T Gain_Gain ; real_T
Efficiency_Gain ; real_T Gain1_Gain ; real_T HitCrossing_Offset ; real_T
Integrator2_IC ; real_T UnitDelay_InitialCondition [ 2 ] ; real_T Relay_OnVal
; real_T Relay_OffVal ; real_T Relay_YOn ; real_T Relay_YOff ; real_T
repeat_Value ; real_T tFinal_Value ; real_T Constant2_Value ; real_T
Constant3_Value ; real_T Constant_Value_mg0ii2c5jx ; real_T
Constant_Value_lfd1si2n0l ; real_T Constant_Value_fb5mg350bv ; real_T
Constant1_Value ; real_T AccessoryLoadW_Value ; real_T
Constant_Value_nys5l042yz ; real_T Constant_Value_h2wdon5quy ; real_T
Constant_Value_gqtbi3ry5p ; real_T Airdensitykgm3_Value ; real_T
RTP_87B9D3CA_T_Value ; real_T RTP_6F7C700D_T_Value ; real_T
RTP_8D439205_T_Value ; real_T RTP_28B86618_T_Value ; real_T
Constant2_Value_mma10cnxvb ; real_T Constant3_Value_ikmr2cncbv ; real_T
Constant_Value_cxscovwunu ; real_T Constant1_Value_cbg3kt12vf ; real_T
RTP_7CC9AFD0_level_Value ; real_T RTP_7CC9AFD0_p_gas_Value ; real_T
RTP_7CC9AFD0_volume_liquid_Value ; real32_T convert2percent_Gain ; real32_T
Gain_Gain_dztmjyp2yi [ 96 ] ; real32_T Gain2_Gain ; real32_T
Gain1_Gain_kogwmhjid4 [ 96 ] ; uint32_T StateSpace_A_ir ; uint32_T
StateSpace_A_jc [ 2 ] ; uint32_T StateSpace_B_ir ; uint32_T StateSpace_B_jc [
2 ] ; uint32_T StateSpace_C_ir ; uint32_T StateSpace_C_jc [ 2 ] ; uint8_T
Gain1_Gain_mjnwmk25rl ; uint8_T Gain2_Gain_nxczdnguyh ; uint8_T
Gain_Gain_gsslgakjt4 ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ;
extern cuhiq2he3x cuhiq2he3xv ; extern i344fcmwfc i344fcmwfc1 ; extern
giqt2tul5w giqt2tul5wr ; extern dhvysoxui2 dhvysoxui2f ; extern gkywbalvxl
gkywbalvxlx ; extern konn1m5pjfe konn1m5pjf ; extern
struct_3VsPydWBoiqQQizi9a3DAE rtP_radiator ; extern
struct_MnlE2uNdAoiKpaBUKAg05D rtP_pump ; extern real_T rtP_T_env ; extern
real_T rtP_T_init ; extern real_T rtP_T_set ; extern real_T
rtP__BattSocInit2f2BMS_Software_DD_sldd_ ; extern real_T rtP_enable_regen ;
extern real32_T rtP_bat_soc_init ; extern mxArray *
mr_EvReferenceApplication_GetDWork ( ) ; extern void
mr_EvReferenceApplication_SetDWork ( const mxArray * ssDW ) ; extern mxArray
* mr_EvReferenceApplication_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * EvReferenceApplication_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
