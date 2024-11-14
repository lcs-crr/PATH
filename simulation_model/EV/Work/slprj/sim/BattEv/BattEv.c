#include "BattEv.h"
#include "rtwtypes.h"
#include "BattEv_private.h"
#include "BattEv_capi.h"
#include "look2_binlcapw.h"
#include "look1_binlcapw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_BattEv [ 44 ] = { { "lobjb0lvrdo" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "BattEv" } , { "o3ciyyrlrx"
, MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"op3keyawy1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "ebrgzbbeqm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "fr5wy4tsqu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "khjrgybdwv" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"nvyvwtjtwa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "hkgv0zhr3w" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "lxynvqvfub" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "ooufey2bcs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"hi1l1hnyvj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "p4zwutbdqc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "dmy10bqvs5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "nw51lwywlm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"hsugof10pg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "m5uwyjpoin" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "dwrwbkg3u5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "pexk2pi1gg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"c0hgp3wnut" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "havtbmuleg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "poo3kmg0ob" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "BattEv" } , { "lst5ppimoh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"h2icdxptjx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "e4onitgc0b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "BattEv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 ,
( NULL ) } , { "ajlvomnaiz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "p5j3muyff4r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "BattEv" } , { "p5j3muyff4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "BattEv" } , {
"bjbjtykkxm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"BattEv" } , { "euywnbmp33" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "BattEv" } , { "mr_BattEv_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_restoreDataFromMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "BattEv" } , { "mr_BattEv_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "BattEv" } , { "mr_BattEv_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "BattEv" } , { "mr_BattEv_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , {
"mr_BattEv_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "BattEv" } , { "mr_BattEv_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "BattEv" } , { "mr_BattEv_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "BattEv" } , { "BattEv.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "BattEv.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "BattEv" } } ; a2kiykjvrxh
a2kiykjvrx = { 4.8 , { 263.15 , 273.15 , 298.15 , 313.15 } , { 0.01 , 0.02 ,
0.03 , 0.04 , 0.05 , 0.06 , 0.07 , 0.08 , 0.09 , 0.1 , 0.11 , 0.12 , 0.13 ,
0.14 , 0.15 , 0.16 , 0.17 , 0.18 , 0.19 , 0.2 , 0.21 , 0.22 , 0.23 , 0.24 ,
0.25 , 0.26 , 0.27 , 0.28 , 0.29 , 0.3 , 0.31 , 0.32 , 0.33 , 0.34 , 0.35 ,
0.36 , 0.37 , 0.38 , 0.39 , 0.4 , 0.41 , 0.42 , 0.43 , 0.44 , 0.45 , 0.46 ,
0.47 , 0.48 , 0.49 , 0.5 , 0.51 , 0.52 , 0.53 , 0.54 , 0.55 , 0.56 , 0.57 ,
0.58 , 0.59 , 0.6 , 0.61 , 0.62 , 0.63 , 0.64 , 0.65 , 0.66 , 0.67 , 0.68 ,
0.69 , 0.7 , 0.71 , 0.72 , 0.73 , 0.74 , 0.75 , 0.76 , 0.77 , 0.78 , 0.79 ,
0.8 , 0.81 , 0.82 , 0.83 , 0.84 , 0.85 , 0.86 , 0.87 , 0.88 , 0.89 , 0.9 ,
0.91 , 0.92 , 0.93 , 0.94 , 0.95 , 0.96 , 0.97 , 0.98 , 0.99 , 1.0 } , { 0.01
, 0.02 , 0.03 , 0.04 , 0.05 , 0.06 , 0.07 , 0.08 , 0.09 , 0.1 , 0.11 , 0.12 ,
0.13 , 0.14 , 0.15 , 0.16 , 0.17 , 0.18 , 0.19 , 0.2 , 0.21 , 0.22 , 0.23 ,
0.24 , 0.25 , 0.26 , 0.27 , 0.28 , 0.29 , 0.3 , 0.31 , 0.32 , 0.33 , 0.34 ,
0.35 , 0.36 , 0.37 , 0.38 , 0.39 , 0.4 , 0.41 , 0.42 , 0.43 , 0.44 , 0.45 ,
0.46 , 0.47 , 0.48 , 0.49 , 0.5 , 0.51 , 0.52 , 0.53 , 0.54 , 0.55 , 0.56 ,
0.57 , 0.58 , 0.59 , 0.6 , 0.61 , 0.62 , 0.63 , 0.64 , 0.65 , 0.66 , 0.67 ,
0.68 , 0.69 , 0.7 , 0.71 , 0.72 , 0.73 , 0.74 , 0.75 , 0.76 , 0.77 , 0.78 ,
0.79 , 0.8 , 0.81 , 0.82 , 0.83 , 0.84 , 0.85 , 0.86 , 0.87 , 0.88 , 0.89 ,
0.9 , 0.91 , 0.92 , 0.93 , 0.94 , 0.95 , 0.96 , 0.97 , 0.98 , 0.99 , 1.0 } ,
{ 3.01162183959268 , 3.08575650269622 , 3.14177499163339 , 3.18631823552003 ,
3.22334954767724 , 3.25390136234099 , 3.27878869705109 , 3.30070350874259 ,
3.32118523630503 , 3.33873222862982 , 3.35681278765286 , 3.3727103181478 ,
3.38793252475269 , 3.40246133852855 , 3.41323877471787 , 3.42274053961048 ,
3.43230513033606 , 3.44127066639713 , 3.45046092538443 , 3.46050021597496 ,
3.47059444208772 , 3.47754582201769 , 3.48403887676592 , 3.49083263175798 ,
3.49762638675004 , 3.50414427848956 , 3.51006189737342 , 3.51650779121088 ,
3.52300031605604 , 3.5294928409012 , 3.53574150484027 , 3.54126505716735 ,
3.54599126111241 , 3.55084210438451 , 3.55569196094666 , 3.56052372392349 ,
3.56532059653064 , 3.56979945432131 , 3.57444121267711 , 3.57904303346503 ,
3.58364485425295 , 3.58840361874736 , 3.5931676308725 , 3.59914045642067 ,
3.60536834334135 , 3.61166009904557 , 3.61797346412467 , 3.62428682920377 ,
3.63060019428287 , 3.63762035332317 , 3.64493091713641 , 3.65193784155324 ,
3.65894476597006 , 3.66595169038689 , 3.67346631195551 , 3.68205597286888 ,
3.69093403907072 , 3.69981210527255 , 3.70876940774879 , 3.71776352136613 ,
3.72686785650522 , 3.73538877817079 , 3.74389655120326 , 3.7524031927436 ,
3.76046489817023 , 3.76888762106825 , 3.7779024493972 , 3.78684332393235 ,
3.7957841984675 , 3.80453642296868 , 3.81235798589345 , 3.82032795054979 ,
3.82829600796219 , 3.83626406537459 , 3.84436267545786 , 3.8525073311682 ,
3.86057855536852 , 3.86864977956884 , 3.87672100376915 , 3.8849361052788 ,
3.89310639828889 , 3.90173837211625 , 3.91095173577988 , 3.92144530461468 ,
3.93240377767841 , 3.94373568413835 , 3.95558619350771 , 3.96743304428185 ,
3.9792002957498 , 3.99089798499065 , 4.00334195302942 , 4.01527114968024 ,
4.0272843604214 , 4.03909414300309 , 4.04916289177822 , 4.05870791988182 ,
4.06775178122738 , 4.07651000374835 , 4.08674414955216 , 4.1040722856973 } ,
31.0 , 96.0 , { 0.0569026752706954 , 0.0629164241673035 , 0.108383589577359 ,
0.108526908512657 , 0.0575506938968502 , 0.0627185254641933 ,
0.104276452250663 , 0.117675091219461 , 0.0576730924021387 ,
0.062749000065816 , 0.0975073630060557 , 0.123235721151358 ,
0.0575627404981383 , 0.0627417873040859 , 0.0937501268832217 ,
0.1269592063865 , 0.0573787336614568 , 0.0630054520942398 ,
0.0893819468578965 , 0.13007176519007 , 0.0571931123196769 ,
0.0629534275532269 , 0.085464471367626 , 0.11760447732201 ,
0.0568199985482458 , 0.0622819384348059 , 0.08175755280038 ,
0.109861739845872 , 0.0564119264640404 , 0.0616713767577988 ,
0.0789657156023766 , 0.102688266858427 , 0.0561974340666893 ,
0.0611604749865062 , 0.0763700410896049 , 0.0951920841885006 ,
0.0560805640860718 , 0.0606394855465489 , 0.0743500050394976 ,
0.0894405971833088 , 0.0557640899305305 , 0.0599400277636786 ,
0.0728433546029721 , 0.0847290612041114 , 0.0552758078650015 ,
0.0594330831116956 , 0.0716898267238282 , 0.0808654410303049 ,
0.0548189443534337 , 0.0591735573989141 , 0.0709947524858037 ,
0.0781008124277296 , 0.0544259333099291 , 0.0588843888423636 ,
0.0701675330798173 , 0.0758200973191947 , 0.0540274760999271 ,
0.0582944313979556 , 0.0687296636498531 , 0.0740753739828204 ,
0.0535758671077904 , 0.0577169262658863 , 0.0673712307537144 ,
0.0730483884312196 , 0.0531349994881705 , 0.0571944282028678 ,
0.066215812656778 , 0.0717775113746253 , 0.0528572535310996 ,
0.0566694734500324 , 0.0650205672726791 , 0.0699809922564043 ,
0.0526355618077634 , 0.0560950251456429 , 0.0638581443118 ,
0.0685529978610315 , 0.05241465440856 , 0.0555648918900395 ,
0.0632667622677965 , 0.0673110278766913 , 0.0521579468207083 ,
0.0551851462437511 , 0.0628323749302964 , 0.066035827753069 ,
0.0518223143945811 , 0.0548830931526911 , 0.0619127995096651 ,
0.0649721598043218 , 0.0514768972622903 , 0.0545831505646799 ,
0.0610362875653991 , 0.0643472273406722 , 0.0510675229610378 ,
0.0542615240554891 , 0.0603620203223802 , 0.0636607362664936 ,
0.0505095964874185 , 0.0536780184680703 , 0.0596877530793609 ,
0.06241964151448 , 0.0501945334427734 , 0.053223446924918 ,
0.0589554578065767 , 0.0615766481652775 , 0.0498797176307613 ,
0.0527386940607366 , 0.0582121279560432 , 0.0608477889520826 ,
0.0495373961060803 , 0.0523578834040146 , 0.0577538001128373 ,
0.0600710375601432 , 0.0491644103064579 , 0.0519762672548851 ,
0.0573051863053595 , 0.0592638337114022 , 0.0487654107291386 ,
0.0515887207828429 , 0.0568565724978818 , 0.0586485549213074 ,
0.0483761473296656 , 0.0511933655937913 , 0.0563566623767877 ,
0.0581628633703293 , 0.0479677996762051 , 0.0507492518278165 ,
0.055788965071129 , 0.0576814396290186 , 0.0475582401973433 ,
0.0503072657670471 , 0.0551527157042777 , 0.0571630828706713 ,
0.0471320171345666 , 0.049857312373411 , 0.0546601636283963 ,
0.0566027008133596 , 0.0467023615052367 , 0.0493952366343646 ,
0.0541676729953156 , 0.0559767559847191 , 0.0463891096889397 ,
0.0489222848388122 , 0.0536763090566326 , 0.0554420057127634 ,
0.0461612731425003 , 0.0484349068792067 , 0.0531776059040765 ,
0.0549394148685769 , 0.0459600308321164 , 0.0479937511412309 ,
0.0526119236645948 , 0.0544394456663451 , 0.0457714972173773 ,
0.047706524550899 , 0.0520712300263528 , 0.053932897417984 ,
0.0455912172482256 , 0.0474590739208991 , 0.0515036752143958 ,
0.0533601985276673 , 0.045401878086972 , 0.047228656875538 ,
0.0509361204024388 , 0.052806478267994 , 0.0452074733937717 ,
0.0470104531764788 , 0.0503587926465561 , 0.0522246364684662 ,
0.045081130644828 , 0.0467923039400562 , 0.0497811381187243 ,
0.0516279649238172 , 0.0449739781120764 , 0.0465738556428423 ,
0.0494179007317461 , 0.0510048763984567 , 0.0447708637688224 ,
0.0464149470666166 , 0.0491061102549 , 0.0504060232764387 ,
0.0444996528123283 , 0.0462885853632802 , 0.0488178197046287 ,
0.0500208570273482 , 0.0442323701107865 , 0.0460768361525146 ,
0.0485440631684004 , 0.0496864919126905 , 0.0439894155458385 ,
0.0457927929280686 , 0.0482703066321726 , 0.0493730634198166 ,
0.043795500364483 , 0.0455084413080731 , 0.0479965500959447 ,
0.0491017275131393 , 0.0437196163755713 , 0.0452374151364121 ,
0.0478381475470897 , 0.0488348740634228 , 0.043691558272863 ,
0.0450287142958739 , 0.0477067926990284 , 0.0485982342721116 ,
0.043666792326019 , 0.0449373388664691 , 0.0473712163371034 ,
0.0484362717227387 , 0.043632403395196 , 0.044881363545326 ,
0.0470356399751788 , 0.0482062495468085 , 0.0436558797968862 ,
0.0448212785934876 , 0.0467000636132555 , 0.0478436943449281 ,
0.04370400264962 , 0.0448025483200918 , 0.0464310667647791 ,
0.0474812803739901 , 0.0437507877780594 , 0.0448023531711996 ,
0.0463210072143654 , 0.0471587699790681 , 0.0437259099546763 ,
0.0448471894679132 , 0.0462716139198203 , 0.0469509261996528 ,
0.0436988742417106 , 0.0448423132528113 , 0.0462222206252756 ,
0.046857132792125 , 0.0436679396659216 , 0.0447959899997263 ,
0.0462261199933538 , 0.0467936515375036 , 0.0434822215344903 ,
0.0447481674362469 , 0.0462489440940042 , 0.046762875795086 ,
0.0433374476789035 , 0.0446455627197633 , 0.0463125045945074 ,
0.0467665146346548 , 0.0432862296072396 , 0.0444498381223659 ,
0.0462585966454419 , 0.0468131814834107 , 0.0432852698476647 ,
0.0443398951770333 , 0.046201922872132 , 0.0467928072118045 ,
0.0432893026186947 , 0.0443358636115039 , 0.046144488080849 ,
0.046732749098755 , 0.0432858504966527 , 0.0443361836543485 ,
0.0458836890808221 , 0.0466712999380783 , 0.0432410795080074 ,
0.0443347471451712 , 0.0457208666912199 , 0.0464405353088968 ,
0.0430326492356583 , 0.0443011880713526 , 0.0456935258730669 ,
0.0462435222647626 , 0.0428344112022243 , 0.0441188877988035 ,
0.0456707901856075 , 0.0461914680860085 , 0.0426373383237344 ,
0.0439092986503984 , 0.0456480544981481 , 0.0461714049038848 ,
0.0424403391287069 , 0.0436974284356277 , 0.0455856361429716 ,
0.0461527033149323 , 0.0422838320541592 , 0.043485723220237 ,
0.0453236882021848 , 0.0460937589038726 , 0.0421769209995113 ,
0.0433079260576688 , 0.0450859495122442 , 0.0458350783600561 ,
0.0420870573803085 , 0.0431885911913703 , 0.0448483295871047 ,
0.0456007468322781 , 0.0419817402408595 , 0.0430951515137186 ,
0.0446107096619652 , 0.0453665779837316 , 0.0418765172008633 ,
0.0429917798002335 , 0.0444608967355156 , 0.0451429763331621 ,
0.0417713877096415 , 0.0428884374122953 , 0.0443618965142365 ,
0.0450065444587326 , 0.0415647093890872 , 0.0427851241717927 ,
0.0442474499230245 , 0.0449148064886735 , 0.0412865107127334 ,
0.0425623650157809 , 0.0441330033318126 , 0.0448130766386168 ,
0.0410431011360397 , 0.0422613185703078 , 0.0440185567406002 ,
0.0447111925241659 , 0.0408824568725694 , 0.0420230599245612 ,
0.0437935866730954 , 0.0445693406463699 , 0.0408368250444724 ,
0.0418812290666737 , 0.0434800673484186 , 0.0442949627645635 ,
0.0409391382481101 , 0.041906981721207 , 0.0432636629093239 ,
0.0439888408010778 , 0.0411278931775794 , 0.0420814944240542 ,
0.0431695542324042 , 0.0438010134105378 , 0.0412898410175218 ,
0.0423005469320015 , 0.0433145404237085 , 0.0438064778910552 ,
0.0415413222983294 , 0.0425424967656185 , 0.043616651255713 ,
0.0440286367126319 , 0.0417924744129246 , 0.0428467867901343 ,
0.0439115402259742 , 0.0443155978985943 , 0.0420200849848618 ,
0.0431555553386227 , 0.0443155176840522 , 0.0446421196562579 ,
0.0422646355102616 , 0.0434957214268676 , 0.0447170344474341 ,
0.0450238104953598 , 0.0425714787973455 , 0.0438413122650902 ,
0.0451426585495343 , 0.0454416325431652 , 0.0428474639811247 ,
0.0442856316869569 , 0.0455784262459233 , 0.0458946977228338 ,
0.0428844181429655 , 0.0444287367335074 , 0.0461653340876942 ,
0.0464588593578443 , 0.0428897106182373 , 0.0445149224339141 ,
0.0463666936277911 , 0.0468147357298707 , 0.0428519609855629 ,
0.0445599067285984 , 0.0465478472510501 , 0.0470155195655577 ,
0.0422520393218253 , 0.0442026027287152 , 0.0466774333752156 ,
0.0471624250646365 , 0.0414291365313999 , 0.0434919446473354 ,
0.0460938543815081 , 0.0467232147099645 , 0.040405329484825 ,
0.0426037912126129 , 0.045231226285297 , 0.0458819648900484 ,
0.0393067947660146 , 0.0416152471734632 , 0.0442160431848739 ,
0.044820832739481 , 0.0380965961929673 , 0.0404992303278067 ,
0.0431407757562075 , 0.0436752577355422 , 0.036547444845604 ,
0.0390045186855108 , 0.0415552249991693 , 0.0421113383435228 ,
0.0347308053875084 , 0.0371542479614457 , 0.0395514196760085 ,
0.0399046940541221 } , 0.0 , { 3U , 99U } } ; void poo3kmg0ob ( euywnbmp33 *
const n4jdqa0poy , dmy10bqvs5 * localDW , hkgv0zhr3w * localX ) { boolean_T
tmp ; localDW -> njy404bwi0 = 1 ; if ( rtmIsFirstInitCond ( n4jdqa0poy ) ) {
localX -> mtcpjlfcu4 = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( n4jdqa0poy -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( n4jdqa0poy -> _mdlRefSfcnS ) ) ; localDW
-> njy404bwi0 = ! tmp ; } else { localDW -> njy404bwi0 = 1 ; } } } void
havtbmuleg ( euywnbmp33 * const n4jdqa0poy , dmy10bqvs5 * localDW ,
hkgv0zhr3w * localX ) { boolean_T tmp ; localDW -> njy404bwi0 = 1 ; if (
rtmIsFirstInitCond ( n4jdqa0poy ) ) { localX -> mtcpjlfcu4 = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
n4jdqa0poy -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
n4jdqa0poy -> _mdlRefSfcnS ) ) ; localDW -> njy404bwi0 = ! tmp ; } else {
localDW -> njy404bwi0 = 1 ; } } } void BattEv ( euywnbmp33 * const n4jdqa0poy
, const real_T * bgau4kdtsz , const real_T * nend3jcwem , real_T * pcblqeyf5w
, nw51lwywlm * localB , dmy10bqvs5 * localDW , hkgv0zhr3w * localX ) { real_T
h0nlpimbev ; real_T jshtwxrouz ; real_T pf42h0uj5n ; localB -> ojbwrsc0h3 = -
1.0 / ( a2kiykjvrx . P_6 * 3600.0 ) * * bgau4kdtsz ; if (
ssIsModeUpdateTimeStep ( n4jdqa0poy -> _mdlRefSfcnS ) ) { if ( localDW ->
njy404bwi0 != 0 ) { localX -> mtcpjlfcu4 = localB -> kgyhtpvnna ; } if (
localX -> mtcpjlfcu4 >= a2kiykjvrx . P_1 ) { if ( localX -> mtcpjlfcu4 !=
a2kiykjvrx . P_1 ) { localX -> mtcpjlfcu4 = a2kiykjvrx . P_1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ; }
} else if ( ( localX -> mtcpjlfcu4 <= a2kiykjvrx . P_9 ) && ( localX ->
mtcpjlfcu4 != a2kiykjvrx . P_9 ) ) { localX -> mtcpjlfcu4 = a2kiykjvrx . P_9
; ssSetBlockStateForSolverChangedAtMajorStep ( n4jdqa0poy -> _mdlRefSfcnS ) ;
} pf42h0uj5n = localX -> mtcpjlfcu4 ; } else if ( localX -> mtcpjlfcu4 >=
a2kiykjvrx . P_1 ) { pf42h0uj5n = a2kiykjvrx . P_1 ; } else if ( localX ->
mtcpjlfcu4 <= a2kiykjvrx . P_9 ) { pf42h0uj5n = a2kiykjvrx . P_9 ; } else {
pf42h0uj5n = localX -> mtcpjlfcu4 ; } pf42h0uj5n /= a2kiykjvrx . P_1 ;
h0nlpimbev = look2_binlcapw ( * nend3jcwem , pf42h0uj5n , a2kiykjvrx . P_2 ,
a2kiykjvrx . P_4 , a2kiykjvrx . P_8 , a2kiykjvrx . P_10 , 4U ) ; jshtwxrouz =
1.0 / a2kiykjvrx . P_6 * * bgau4kdtsz ; * pcblqeyf5w = ( look1_binlcapw (
pf42h0uj5n , a2kiykjvrx . P_3 , a2kiykjvrx . P_5 , 99U ) - h0nlpimbev *
jshtwxrouz ) * a2kiykjvrx . P_7 ; } void BattEvTID2 ( nw51lwywlm * localB ) {
real_T tmp ; tmp = 3.5999999999999996 *
rtP__BattSocInit2f2BMS_Software_DD_sldd_ / 0.75 ; if ( tmp > a2kiykjvrx . P_1
) { localB -> kgyhtpvnna = a2kiykjvrx . P_1 ; } else { localB -> kgyhtpvnna =
tmp ; } } void c0hgp3wnut ( dmy10bqvs5 * localDW ) { localDW -> njy404bwi0 =
0 ; } void pexk2pi1gg ( nw51lwywlm * localB , hkgv0zhr3w * localX ,
nvyvwtjtwa * localXdot ) { if ( ( ( localX -> mtcpjlfcu4 > a2kiykjvrx . P_9 )
&& ( localX -> mtcpjlfcu4 < a2kiykjvrx . P_1 ) ) || ( ( localX -> mtcpjlfcu4
<= a2kiykjvrx . P_9 ) && ( localB -> ojbwrsc0h3 > 0.0 ) ) || ( ( localX ->
mtcpjlfcu4 >= a2kiykjvrx . P_1 ) && ( localB -> ojbwrsc0h3 < 0.0 ) ) ) {
localXdot -> mtcpjlfcu4 = localB -> ojbwrsc0h3 ; } else { localXdot ->
mtcpjlfcu4 = 0.0 ; } } void m5uwyjpoin ( euywnbmp33 * const n4jdqa0poy ) { if
( ! slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( n4jdqa0poy ->
_mdlRefSfcnS , "BattEv" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; }
} void lst5ppimoh ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , euywnbmp33 * const n4jdqa0poy , nw51lwywlm
* localB , dmy10bqvs5 * localDW , hkgv0zhr3w * localX , void * sysRanPtr ,
int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; ( void ) memset ( ( void * ) n4jdqa0poy , 0 , sizeof
( euywnbmp33 ) ) ; n4jdqa0poy -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; n4jdqa0poy -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
n4jdqa0poy -> Timing . mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; n4jdqa0poy ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( n4jdqa0poy -> _mdlRefSfcnS , "BattEv" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> ojbwrsc0h3 = 0.0
; localB -> kgyhtpvnna = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( dmy10bqvs5 ) ) ; BattEv_InitializeDataMapInfo ( n4jdqa0poy , localDW
, localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( n4jdqa0poy -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
n4jdqa0poy -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( n4jdqa0poy -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_BattEv_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_BattEv , 44 ) ; *
retVal = 1 ; } static void mr_BattEv_cacheDataAsMxArray ( mxArray * destArray
, mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_BattEv_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_BattEv_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_BattEv_restoreDataFromMxArray ( void * destData , const mxArray * srcArray
, mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_BattEv_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_BattEv_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_BattEv_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_BattEv_extractBitFieldFromMxArray
( const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_BattEv_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , const void * srcData , size_t numBytes ) ; static
void mr_BattEv_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T
* varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j
) ) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const
uint8_T * ) srcData , numBytes ) ; } static void
mr_BattEv_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_BattEv_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_BattEv_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_BattEv_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_BattEv_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_BattEv_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray ,
mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T fieldVal
= ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray , i , j
) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; } mxArray *
mr_BattEv_GetDWork ( const lobjb0lvrdo * mdlrefDW ) { static const char_T *
ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW
= mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_BattEv_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( mdlrefDW
-> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 1 ] = { "mdlrefDW->rtdw.njy404bwi0" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 1 , rtdwDataFieldNames ) ;
mr_BattEv_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtdw . njy404bwi0 ) , sizeof ( mdlrefDW -> rtdw . njy404bwi0 ) )
; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void ) mdlrefDW ;
return ssDW ; } void mr_BattEv_SetDWork ( lobjb0lvrdo * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_BattEv_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) , ssDW ,
0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_BattEv_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . njy404bwi0 ) , rtdwData , 0 , 0 , sizeof (
mdlrefDW -> rtdw . njy404bwi0 ) ) ; } } void
mr_BattEv_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum
[ 4 ] = { 3661175412U , 4073955193U , 3758742523U , 2632149779U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "BattEv" , & chksum [ 0 ] ) ; }
mxArray * mr_BattEv_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
