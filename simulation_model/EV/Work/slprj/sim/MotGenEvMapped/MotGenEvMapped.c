#include "MotGenEvMapped.h"
#include "rtwtypes.h"
#include "MotGenEvMapped_private.h"
#include "mwmathutil.h"
#include "MotGenEvMapped_capi.h"
#include "look1_binlcpw.h"
#include "look2_binlcapw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_MotGenEvMapped [ 42 ] = { { "juj5p01hmia" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"chagifxp1o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "inaqov3gmt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "feejiki3nd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "omkccwsbtz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "cfzqkyi2uw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "dpukc5flet" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "had2nm4nh5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "gsmjq23gxo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "nepexasvga" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "j0snurpmyo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "bnav1tab2v" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "e4ld3xwh5m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "dbofzogh4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "ih0hv3mzey" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "phnn1n2hbt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "ej4mlkun2d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "bbghji4q0s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "l54abfqz2k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "absendw0s0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "cdsebpbgwo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "oaswkbqw52" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "a1gbom0qkq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "j5tah0ocdl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , { "MotGenEvMapped" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "l054lu4b4q" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "MotGenEvMapped" } ,
{ "nsg1hqawul" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MotGenEvMapped" } , { "p5veghsq5l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "MotGenEvMapped" } , { "mr_MotGenEvMapped_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "MotGenEvMapped" } , {
"mr_MotGenEvMapped_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "MotGenEvMapped" } , { "MotGenEvMapped.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "MotGenEvMapped.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 ,
( void * ) "MotGenEvMapped" } } ; a1kqx2ugby3 a1kqx2ugby = { 0.02 , 211000.0
, 450.0 , 0.0 , 0.0 , { - 1.0 , 1.0 } , { - 1.0 , 1.0 } , 0.0 , 0.0 , {
40854.6141415599 , 29159.0126646081 , 19296.9654016165 , 16884.8447264144 ,
14472.7240512124 , 12060.6033760103 , 12959.5611842703 , 20204.7527524991 ,
18847.4984863499 , 17203.1597715291 , 11566.2788353617 , 0.0 ,
10027.9637502586 , 15441.5562109245 , 17302.0036104692 , 18547.9630267941 ,
12425.6272634784 , 11686.724671354 , 14024.0696056248 , 16361.4145398956 ,
18698.7594741664 , 27957.6613428263 , 38754.6869746837 , 37936.4274171628 ,
27076.2260457076 , 17918.6107300724 , 15678.7843888134 , 13438.9580475543 ,
11199.1317062953 , 12033.8782425367 , 18761.5561273206 , 17501.2485944678 ,
15974.3626449913 , 10740.1160614073 , 0.0 , 9311.68062524015 ,
14338.5879101442 , 16066.1462097214 , 17223.1085248803 , 11538.0824589442 ,
10851.9586234001 , 13022.3503480802 , 15192.7420727602 , 17363.1337974402 ,
25960.6855326244 , 35986.4950479206 , 35018.2406927657 , 24993.439426807 ,
16540.2560585284 , 14472.7240512124 , 12405.1920438963 , 10337.6600365803 ,
11108.1953008031 , 17318.359502142 , 16154.9987025857 , 14745.5655184535 ,
9913.95328745292 , 0.0 , 8595.39750022168 , 13235.6196093639 ,
14830.2888089736 , 15898.2540229664 , 10650.53765441 , 10017.1925754463 ,
12020.6310905355 , 14024.0696056248 , 16027.5081207141 , 23963.7097224225 ,
33218.3031211574 , 32100.0539683685 , 22910.6528079064 , 15161.9013869844 ,
13266.6637136113 , 11371.4260402383 , 9476.18836686523 , 10182.5123590695 ,
15875.1628769635 , 14808.7488107035 , 13516.7683919157 , 9087.7905134985 ,
0.0 , 7879.1143752032 , 12132.6513085836 , 13594.4314082258 ,
14573.3995210525 , 9762.99284987585 , 9182.42652749243 , 11018.9118329909 ,
12855.3971384894 , 14691.8824439879 , 21966.7339122207 , 30450.1111943943 ,
29181.8672439714 , 20827.8661890058 , 13783.5467154403 , 12060.6033760103 ,
10337.6600365803 , 8614.71669715021 , 9256.82941733592 , 10605.888242298 ,
9893.43769962166 , 12287.9712653779 , 8261.6277395441 , 0.0 ,
7162.83125018473 , 11029.6830078032 , 9284.00193732496 , 9952.56552657246 ,
8875.44804534168 , 8347.66047953857 , 10017.1925754463 , 11686.724671354 ,
13356.2567672617 , 19969.7581020188 , 27681.9192676312 , 26263.6805195742 ,
18745.0795701052 , 12405.1920438963 , 10854.5430384093 , 9303.89403292223 ,
7753.24502743519 , 8331.14647560233 , 9545.29941806823 , 8904.0939296595 ,
8659.17975107102 , 7435.46496558969 , 0.0 , 6446.54812516626 ,
7949.1270114832 , 8355.60174359246 , 8957.30897391522 , 7987.90324080751 ,
7512.89443158471 , 9015.47331790166 , 10518.0522042186 , 12020.6310905355 ,
17972.7822918169 , 24913.7273408681 , 23345.4937951771 , 16662.2929512047 ,
11026.8373723523 , 9648.48270080824 , 8270.1280292642 , 6891.77335772017 ,
7405.46353386874 , 8484.71059383843 , 7914.75015969733 , 7697.04866761869 ,
6609.30219163528 , 0.0 , 5730.26500014778 , 7065.89067687396 ,
7427.20154985997 , 7962.05242125797 , 7100.35843627335 , 6678.12838363086 ,
8013.75406035703 , 9349.3797370832 , 10685.0054138094 , 15975.806481615 ,
22145.535414105 , 20427.30707078 , 14579.5063323041 , 9648.48270080824 ,
8442.4223632072 , 7236.36202560618 , 6030.30168800515 , 6479.78059213514 ,
6128.19212123399 , 6925.40638973516 , 6734.91758416635 , 5783.13941768087 ,
0.0 , 5013.98187512931 , 6182.65434226471 , 6498.80135612747 ,
5813.20304620255 , 6212.81363173918 , 5843.362335677 , 7012.0348028124 ,
8180.7072699478 , 9349.3797370832 , 13978.8306714131 , 19377.3434873418 ,
17509.1203463828 , 12496.7197134035 , 8270.1280292642 , 7236.36202560618 ,
6202.59602194815 , 5168.83001829013 , 5554.09765040155 , 5252.73610391485 ,
5936.062619773 , 5772.78650071402 , 4956.97664372646 , 0.0 , 4297.69875011084
, 5299.41800765547 , 5570.40116239498 , 4982.74546817362 , 5325.26882720501 ,
5008.59628772314 , 6010.31554526777 , 7012.0348028124 , 8013.75406035703 ,
11981.8548612113 , 16609.1515605787 , 14590.9336219857 , 10413.9330945029 ,
6891.77335772017 , 6030.30168800515 , 5168.83001829013 , 4307.35834857511 ,
4628.41470866796 , 4377.28008659571 , 4946.71884981083 , 4810.65541726168 ,
4130.81386977205 , 0.0 , 3581.41562509236 , 4416.18167304622 ,
4642.00096866248 , 4152.28789014468 , 4437.72402267084 , 4173.83023976929 ,
5008.59628772314 , 5843.362335677 , 6678.12838363086 , 9984.87905100939 ,
13840.9596338156 , 11672.7468975886 , 8331.14647560233 , 5513.41868617614 ,
4824.24135040412 , 5554.09765040155 , 4628.41470866796 , 3702.73176693437 ,
3501.82406927657 , 3957.37507984867 , 3848.52433380934 , 3304.65109581764 ,
0.0 , 2865.13250007389 , 3532.94533843698 , 3713.60077492998 ,
3321.83031211575 , 3550.17921813667 , 4437.72402267084 , 5325.26882720501 ,
4674.6898685416 , 5342.50270690469 , 7987.90324080751 , 11072.7677070525 ,
10605.888242298 , 6248.35985670175 , 5554.09765040155 , 4859.83544410136 ,
4165.57323780116 , 3471.31103150097 , 2777.04882520078 , 3181.76647268941 ,
2968.0313098865 , 2886.39325035701 , 2478.48832186323 , 0.0 ,
2148.84937505542 , 2649.70900382773 , 2785.20058119749 , 2985.76965797174 ,
2662.6344136025 , 3328.29301700313 , 3993.95162040376 , 4659.61022380438 ,
5325.26882720501 , 5990.92743060563 , 9952.56552657246 , 9621.31083452336 ,
5252.73610391485 , 4669.09875903542 , 4085.46141415599 , 3501.82406927657 ,
2918.18672439714 , 2334.54937951771 , 2121.17764845961 , 1978.68753992433 ,
1924.26216690467 , 1652.32554790882 , 0.0 , 1432.56625003695 ,
1766.47266921849 , 1856.80038746499 , 1990.51310531449 , 2214.5535414105 ,
2768.19192676312 , 3321.83031211575 , 3875.46869746837 , 4429.10708282099 ,
4982.74546817362 , 8832.36334609244 , 8261.6277395441 , 7435.46496558969 ,
6609.30219163528 , 5783.13941768087 , 4956.97664372646 , 4130.81386977205 ,
3304.65109581764 , 2478.48832186323 , 2311.99586884207 , 1652.32554790882 ,
826.16277395441 , 0.0 , 716.283125018473 , 1432.56625003695 ,
2004.50041828607 , 2148.84937505542 , 2865.13250007389 , 3581.41562509236 ,
4297.69875011084 , 5013.98187512931 , 5730.26500014778 , 6446.54812516626 ,
7162.83125018473 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 7162.83125018473 , 6446.54812516626 , 5730.26500014778 , 5013.98187512931 ,
4297.69875011084 , 3581.41562509236 , 2865.13250007389 , 2148.84937505542 ,
2004.50041828607 , 1432.56625003695 , 716.283125018473 , 0.0 ,
826.16277395441 , 1652.32554790882 , 2311.99586884207 , 2478.48832186323 ,
3304.65109581764 , 4130.81386977205 , 4956.97664372646 , 5783.13941768087 ,
6609.30219163528 , 7435.46496558969 , 8261.6277395441 , 8832.36334609244 ,
4982.74546817362 , 4429.10708282099 , 3875.46869746837 , 3321.83031211575 ,
2768.19192676312 , 2214.5535414105 , 1990.51310531449 , 1856.80038746499 ,
1766.47266921849 , 1432.56625003695 , 0.0 , 1652.32554790882 ,
1924.26216690467 , 1978.68753992433 , 2121.17764845961 , 2334.54937951771 ,
2918.18672439714 , 3501.82406927657 , 4085.46141415599 , 4669.09875903542 ,
5252.73610391485 , 9621.31083452336 , 9952.56552657246 , 5990.92743060563 ,
5325.26882720501 , 4659.61022380438 , 3993.95162040376 , 3328.29301700313 ,
2662.6344136025 , 2985.76965797174 , 2785.20058119749 , 2649.70900382773 ,
2148.84937505542 , 0.0 , 2478.48832186323 , 2886.39325035701 ,
2968.0313098865 , 3181.76647268941 , 2777.04882520078 , 3471.31103150097 ,
4165.57323780116 , 4859.83544410136 , 5554.09765040155 , 6248.35985670175 ,
10605.888242298 , 11072.7677070525 , 7987.90324080751 , 5342.50270690469 ,
4674.6898685416 , 5325.26882720501 , 4437.72402267084 , 3550.17921813667 ,
3321.83031211575 , 3713.60077492998 , 3532.94533843698 , 2865.13250007389 ,
0.0 , 3304.65109581764 , 3848.52433380934 , 3957.37507984867 ,
3501.82406927657 , 3702.73176693437 , 4628.41470866796 , 5554.09765040155 ,
4824.24135040412 , 5513.41868617614 , 8331.14647560233 , 11672.7468975886 ,
13840.9596338156 , 9984.87905100939 , 6678.12838363086 , 5843.362335677 ,
5008.59628772314 , 4173.83023976929 , 4437.72402267084 , 4152.28789014468 ,
4642.00096866248 , 4416.18167304622 , 3581.41562509236 , 0.0 ,
4130.81386977205 , 4810.65541726168 , 4946.71884981083 , 4377.28008659571 ,
4628.41470866796 , 4307.35834857511 , 5168.83001829013 , 6030.30168800515 ,
6891.77335772017 , 10413.9330945029 , 14590.9336219857 , 16609.1515605787 ,
11981.8548612113 , 8013.75406035703 , 7012.0348028124 , 6010.31554526777 ,
5008.59628772314 , 5325.26882720501 , 4982.74546817362 , 5570.40116239498 ,
5299.41800765547 , 4297.69875011084 , 0.0 , 4956.97664372646 ,
5772.78650071402 , 5936.062619773 , 5252.73610391485 , 5554.09765040155 ,
5168.83001829013 , 6202.59602194815 , 7236.36202560618 , 8270.1280292642 ,
12496.7197134035 , 17509.1203463828 , 19377.3434873418 , 13978.8306714131 ,
9349.3797370832 , 8180.7072699478 , 7012.0348028124 , 5843.362335677 ,
6212.81363173918 , 5813.20304620255 , 6498.80135612747 , 6182.65434226471 ,
5013.98187512931 , 0.0 , 5783.13941768087 , 6734.91758416635 ,
6925.40638973516 , 6128.19212123399 , 6479.78059213514 , 6030.30168800515 ,
7236.36202560618 , 8442.4223632072 , 9648.48270080824 , 14579.5063323041 ,
20427.30707078 , 22145.535414105 , 15975.806481615 , 10685.0054138094 ,
9349.3797370832 , 8013.75406035703 , 6678.12838363086 , 7100.35843627335 ,
7962.05242125797 , 7427.20154985997 , 7065.89067687396 , 5730.26500014778 ,
0.0 , 6609.30219163528 , 7697.04866761869 , 7914.75015969733 ,
8484.71059383843 , 7405.46353386874 , 6891.77335772017 , 8270.1280292642 ,
9648.48270080824 , 11026.8373723523 , 16662.2929512047 , 23345.4937951771 ,
24913.7273408681 , 17972.7822918169 , 12020.6310905355 , 10518.0522042186 ,
9015.47331790166 , 7512.89443158471 , 7987.90324080751 , 8957.30897391522 ,
8355.60174359246 , 7949.1270114832 , 6446.54812516626 , 0.0 ,
7435.46496558969 , 8659.17975107102 , 8904.0939296595 , 9545.29941806823 ,
8331.14647560233 , 7753.24502743519 , 9303.89403292223 , 10854.5430384093 ,
12405.1920438963 , 18745.0795701052 , 26263.6805195742 , 27681.9192676312 ,
19969.7581020188 , 13356.2567672617 , 11686.724671354 , 10017.1925754463 ,
8347.66047953857 , 8875.44804534168 , 9952.56552657246 , 9284.00193732496 ,
11029.6830078032 , 7162.83125018473 , 0.0 , 8261.6277395441 ,
12287.9712653779 , 9893.43769962166 , 10605.888242298 , 9256.82941733592 ,
8614.71669715021 , 10337.6600365803 , 12060.6033760103 , 13783.5467154403 ,
20827.8661890058 , 29181.8672439714 , 30450.1111943943 , 21966.7339122207 ,
14691.8824439879 , 12855.3971384894 , 11018.9118329909 , 9182.42652749243 ,
9762.99284987585 , 14573.3995210525 , 13594.4314082258 , 12132.6513085836 ,
7879.1143752032 , 0.0 , 9087.7905134985 , 13516.7683919157 , 14808.7488107035
, 15875.1628769635 , 10182.5123590695 , 9476.18836686523 , 11371.4260402383 ,
13266.6637136113 , 15161.9013869844 , 22910.6528079064 , 32100.0539683685 ,
33218.3031211574 , 23963.7097224225 , 16027.5081207141 , 14024.0696056248 ,
12020.6310905355 , 10017.1925754463 , 10650.53765441 , 15898.2540229664 ,
14830.2888089736 , 13235.6196093639 , 8595.39750022168 , 0.0 ,
9913.95328745292 , 14745.5655184535 , 16154.9987025857 , 17318.359502142 ,
11108.1953008031 , 10337.6600365803 , 12405.1920438963 , 14472.7240512124 ,
16540.2560585284 , 24993.439426807 , 35018.2406927657 , 35986.4950479206 ,
25960.6855326244 , 17363.1337974402 , 15192.7420727602 , 13022.3503480802 ,
10851.9586234001 , 11538.0824589442 , 17223.1085248803 , 16066.1462097214 ,
14338.5879101442 , 9311.68062524015 , 0.0 , 10740.1160614073 ,
15974.3626449913 , 17501.2485944678 , 18761.5561273206 , 12033.8782425367 ,
11199.1317062953 , 13438.9580475543 , 15678.7843888134 , 17918.6107300724 ,
27076.2260457076 , 37936.4274171628 , 38754.6869746837 , 27957.6613428263 ,
18698.7594741664 , 16361.4145398956 , 14024.0696056248 , 11686.724671354 ,
12425.6272634784 , 18547.9630267941 , 17302.0036104692 , 15441.5562109245 ,
10027.9637502586 , 0.0 , 11566.2788353617 , 17203.1597715291 ,
18847.4984863499 , 20204.7527524991 , 12959.5611842703 , 12060.6033760103 ,
14472.7240512124 , 16884.8447264144 , 19296.9654016165 , 29159.0126646081 ,
40854.6141415599 } , { - 1675.51608191456 , - 1507.9644737231 , -
1340.41286553165 , - 1172.86125734019 , - 1005.30964914873 , -
837.758040957278 , - 670.206432765823 , - 502.654824574367 , -
468.888986733584 , - 335.103216382911 , - 167.551608191456 , 0.0 ,
167.551608191456 , 335.103216382911 , 468.888986733584 , 502.654824574367 ,
670.206432765823 , 837.758040957278 , 1005.30964914873 , 1172.86125734019 ,
1340.41286553165 , 1507.9644737231 , 1675.51608191456 } , { - 450.0 , -
417.857142857143 , - 385.714285714286 , - 353.571428571429 , -
321.428571428571 , - 289.285714285714 , - 257.142857142857 , - 225.0 , -
192.857142857143 , - 160.714285714286 , - 128.571428571429 , -
96.4285714285714 , - 64.2857142857143 , - 32.1428571428571 , 0.0 ,
32.1428571428571 , 64.2857142857143 , 96.4285714285714 , 128.571428571429 ,
160.714285714286 , 192.857142857143 , 225.0 , 257.142857142857 ,
289.285714285714 , 321.428571428571 , 353.571428571429 , 385.714285714286 ,
417.857142857143 , 450.0 } , 0.0 , 0.0001 , { 22U , 28U } } ; void cdsebpbgwo
( real_T * ponb5z2hzx , had2nm4nh5 * localX ) { localX -> boofytynkf =
a1kqx2ugby . P_7 ; * ponb5z2hzx = a1kqx2ugby . P_8 ; } void absendw0s0 (
had2nm4nh5 * localX ) { localX -> boofytynkf = a1kqx2ugby . P_7 ; } void
a1gbom0qkq ( e4ld3xwh5m * localDW ) { localDW -> nieu1vc5kp = - 1 ; } void
MotGenEvMapped ( p5veghsq5l * const evs52r32sz , const real_T * m0ompgh13e ,
const real_T * kgnmwflo5q , const real_T * m1i5o0ijap , real_T * ponb5z2hzx ,
real_T * itrcxc1zrc , dbofzogh4q * localB , e4ld3xwh5m * localDW , had2nm4nh5
* localX ) { real_T c3wuk5f3iz ; real_T g5conwmbd3 ; real_T lngq2zsllh ;
real_T u0 ; int8_T rtAction ; int8_T rtPrevAction ; g5conwmbd3 =
muDoubleScalarAbs ( * kgnmwflo5q ) ; c3wuk5f3iz = 1.0 / a1kqx2ugby . P_0 *
localX -> boofytynkf ; rtPrevAction = localDW -> nieu1vc5kp ; if (
ssIsModeUpdateTimeStep ( evs52r32sz -> _mdlRefSfcnS ) ) { rtAction = ( int8_T
) ! ( g5conwmbd3 <= localB -> clfqqzu40n ) ; localDW -> nieu1vc5kp = rtAction
; } else { rtAction = localDW -> nieu1vc5kp ; } if ( rtPrevAction != rtAction
) { ssSetBlockStateForSolverChangedAtMajorStep ( evs52r32sz -> _mdlRefSfcnS )
; } if ( rtAction == 0 ) { if ( c3wuk5f3iz > a1kqx2ugby . P_2 ) { *
ponb5z2hzx = a1kqx2ugby . P_2 ; } else if ( c3wuk5f3iz < - a1kqx2ugby . P_2 )
{ * ponb5z2hzx = - a1kqx2ugby . P_2 ; } else { * ponb5z2hzx = c3wuk5f3iz ; }
if ( ssIsModeUpdateTimeStep ( evs52r32sz -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> nnobr021gq ) ; } } else { g5conwmbd3 = a1kqx2ugby . P_1 /
g5conwmbd3 ; * ponb5z2hzx = look1_binlcpw ( c3wuk5f3iz / g5conwmbd3 ,
a1kqx2ugby . P_6 , a1kqx2ugby . P_5 , 1U ) * g5conwmbd3 ; if (
ssIsModeUpdateTimeStep ( evs52r32sz -> _mdlRefSfcnS ) ) { srUpdateBC (
localDW -> p0ylzwrrqf ) ; } } g5conwmbd3 = * kgnmwflo5q * * ponb5z2hzx ;
lngq2zsllh = look2_binlcapw ( * kgnmwflo5q , * ponb5z2hzx , a1kqx2ugby . P_10
, a1kqx2ugby . P_11 , a1kqx2ugby . P_9 , a1kqx2ugby . P_14 , 23U ) ; u0 = *
m1i5o0ijap ; if ( u0 > a1kqx2ugby . P_12 ) { u0 = a1kqx2ugby . P_12 ; } else
if ( u0 < a1kqx2ugby . P_13 ) { u0 = a1kqx2ugby . P_13 ; } * itrcxc1zrc = (
g5conwmbd3 + lngq2zsllh ) / u0 ; localB -> irivfllpzg = * m0ompgh13e -
c3wuk5f3iz ; } void MotGenEvMappedTID2 ( dbofzogh4q * localB ) { localB ->
clfqqzu40n = a1kqx2ugby . P_1 / a1kqx2ugby . P_2 ; } void l54abfqz2k ( void )
{ } void bbghji4q0s ( dbofzogh4q * localB , dpukc5flet * localXdot ) {
localXdot -> boofytynkf = localB -> irivfllpzg ; } void phnn1n2hbt (
p5veghsq5l * const evs52r32sz ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( evs52r32sz -> _mdlRefSfcnS , "MotGenEvMapped" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void oaswkbqw52 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , p5veghsq5l * const evs52r32sz , dbofzogh4q * localB ,
e4ld3xwh5m * localDW , had2nm4nh5 * localX , void * sysRanPtr , int
contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T *
rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN
( sizeof ( real_T ) ) ; a1kqx2ugby . P_12 = rtInf ; ( void ) memset ( ( void
* ) evs52r32sz , 0 , sizeof ( p5veghsq5l ) ) ; evs52r32sz -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; evs52r32sz -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; evs52r32sz -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; evs52r32sz -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( evs52r32sz -> _mdlRefSfcnS , "MotGenEvMapped" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> irivfllpzg = 0.0
; localB -> clfqqzu40n = 0.0 ; } ( void ) memset ( ( void * ) localDW , 0 ,
sizeof ( e4ld3xwh5m ) ) ; MotGenEvMapped_InitializeDataMapInfo ( evs52r32sz ,
localDW , localX , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL )
) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( evs52r32sz -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
evs52r32sz -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( evs52r32sz -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_MotGenEvMapped_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_MotGenEvMapped , 42 ) ; * retVal = 1 ; } static void
mr_MotGenEvMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_MotGenEvMapped_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_MotGenEvMapped_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_MotGenEvMapped_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_MotGenEvMapped_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_MotGenEvMapped_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_MotGenEvMapped_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_MotGenEvMapped_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_MotGenEvMapped_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_MotGenEvMapped_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_MotGenEvMapped_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_MotGenEvMapped_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_MotGenEvMapped_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_MotGenEvMapped_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_MotGenEvMapped_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_MotGenEvMapped_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_MotGenEvMapped_GetDWork ( const
juj5p01hmia * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_MotGenEvMapped_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 3 ] = {
"mdlrefDW->rtdw.nieu1vc5kp" , "mdlrefDW->rtdw.p0ylzwrrqf" ,
"mdlrefDW->rtdw.nnobr021gq" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 3 , rtdwDataFieldNames ) ; mr_MotGenEvMapped_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( mdlrefDW -> rtdw . nieu1vc5kp ) ,
sizeof ( mdlrefDW -> rtdw . nieu1vc5kp ) ) ;
mr_MotGenEvMapped_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . p0ylzwrrqf ) , sizeof ( mdlrefDW -> rtdw . p0ylzwrrqf )
) ; mr_MotGenEvMapped_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( mdlrefDW -> rtdw . nnobr021gq ) , sizeof ( mdlrefDW -> rtdw .
nnobr021gq ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_MotGenEvMapped_SetDWork ( juj5p01hmia *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_MotGenEvMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_MotGenEvMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
nieu1vc5kp ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . nieu1vc5kp ) )
; mr_MotGenEvMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. p0ylzwrrqf ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . p0ylzwrrqf )
) ; mr_MotGenEvMapped_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . nnobr021gq ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
nnobr021gq ) ) ; } } void mr_MotGenEvMapped_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 3832278061U , 1947606094U ,
872927945U , 2718697717U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"MotGenEvMapped" , & chksum [ 0 ] ) ; } mxArray *
mr_MotGenEvMapped_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
