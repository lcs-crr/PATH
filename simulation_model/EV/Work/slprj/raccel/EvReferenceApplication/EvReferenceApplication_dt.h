#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "SRE" , 17 , 4 } , {
"struct_3VsPydWBoiqQQizi9a3DAE" , 18 , 128 } , {
"struct_xrXMOTgqOdCQGFX38sY6uH" , 19 , 808 } , {
"struct_Ps4uk2H5q4nqagQCDAIEeG" , 20 , 24 } , {
"struct_yG05H0L0rR9H3viILJtQr" , 21 , 24 } , {
"struct_Bm2krXtJ6qdjkxDiPF3mSC" , 22 , 24 } , {
"struct_MnlE2uNdAoiKpaBUKAg05D" , 23 , 16 } , { "Faults" , 24 , 8 } , {
"BMS_State_Enum" , 25 , 4 } , { "SOC_Est" , 26 , 8 } , { "BMS_Info" , 27 , 24
} , { "Sensors" , 28 , 784 } , { "CurrentLimits" , 29 , 8 } , {
"Contactors_Cmd" , 30 , 8 } , { "BMS_Cmd" , 31 , 120 } , { "pwecol01r52" , 32
, 272 } , { "hmke5fx3tcj" , 33 , 3440 } , { "lobjb0lvrdo" , 34 , 224 } , {
"juj5p01hmia" , 35 , 240 } , { "uint8_T" , 36 , 1 } , { "uint8_T" , 37 , 1 }
, { "uint32_T" , 38 , 4 } , { "uint64_T" , 39 , 8 } , { "int64_T" , 40 , 8 }
, { "uint_T" , 41 , 32 } , { "char_T" , 42 , 8 } , { "uchar_T" , 43 , 8 } , {
"time_T" , 44 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T
) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
int32_T ) , sizeof ( int64_T ) , sizeof ( uint64_T ) , sizeof ( SRE ) ,
sizeof ( struct_3VsPydWBoiqQQizi9a3DAE ) , sizeof ( int32_T ) , sizeof (
int32_T ) , sizeof ( int32_T ) , sizeof ( int32_T ) , sizeof (
struct_MnlE2uNdAoiKpaBUKAg05D ) , sizeof ( int32_T ) , sizeof (
BMS_State_Enum ) , sizeof ( int32_T ) , sizeof ( int32_T ) , sizeof ( Sensors
) , sizeof ( CurrentLimits ) , sizeof ( Contactors_Cmd ) , sizeof ( BMS_Cmd )
, sizeof ( pwecol01r52 ) , sizeof ( hmke5fx3tcj ) , sizeof ( lobjb0lvrdo ) ,
sizeof ( juj5p01hmia ) , sizeof ( uint8_T ) , sizeof ( uint8_T ) , sizeof (
uint32_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "SRE" ,
"struct_3VsPydWBoiqQQizi9a3DAE" , "struct_xrXMOTgqOdCQGFX38sY6uH" ,
"struct_Ps4uk2H5q4nqagQCDAIEeG" , "struct_yG05H0L0rR9H3viILJtQr" ,
"struct_Bm2krXtJ6qdjkxDiPF3mSC" , "struct_MnlE2uNdAoiKpaBUKAg05D" , "Faults"
, "BMS_State_Enum" , "SOC_Est" , "BMS_Info" , "Sensors" , "CurrentLimits" ,
"Contactors_Cmd" , "BMS_Cmd" , "pwecol01r52" , "hmke5fx3tcj" , "lobjb0lvrdo"
, "juj5p01hmia" , "uint8_T" , "uint8_T" , "uint32_T" , "uint64_T" , "int64_T"
, "uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & cuhiq2he3xv . fgglakce4f ) , 28 , 0
, 1 } , { ( char_T * ) ( & cuhiq2he3xv . jan2ijhoyt ) , 31 , 0 , 1 } , { (
char_T * ) ( & cuhiq2he3xv . bht55s5qq3 ) , 0 , 0 , 697 } , { ( char_T * ) (
& cuhiq2he3xv . obtzbv3oqr ) , 1 , 0 , 98 } , { ( char_T * ) ( & cuhiq2he3xv
. przvd0w4hd ) , 25 , 0 , 1 } , { ( char_T * ) ( & cuhiq2he3xv . eeny0h4lwy )
, 37 , 0 , 1 } , { ( char_T * ) ( & cuhiq2he3xv . fd5vhxn522 ) , 8 , 0 , 13 }
, { ( char_T * ) ( & cuhiq2he3xv . ciwxigmsq2 . bd2ndavyho ) , 0 , 0 , 1 } ,
{ ( char_T * ) ( & cuhiq2he3xv . g30v1kdrwbo . bd2ndavyho ) , 0 , 0 , 1 } , {
( char_T * ) ( & giqt2tul5wr . p3iatbuorl ) , 0 , 0 , 45 } , { ( char_T * ) (
& giqt2tul5wr . ikimkrkcjx ) , 11 , 0 , 28 } , { ( char_T * ) ( & giqt2tul5wr
. nedhadhu3t [ 0 ] ) , 1 , 0 , 96 } , { ( char_T * ) ( & giqt2tul5wr .
odxrkracyb ) , 6 , 0 , 3 } , { ( char_T * ) ( & giqt2tul5wr . azfkgqxasv ) ,
7 , 0 , 2 } , { ( char_T * ) ( & giqt2tul5wr . lstbvo4uss [ 0 ] ) , 10 , 0 ,
249 } , { ( char_T * ) ( & giqt2tul5wr . o1jqp4wpbb ) , 6 , 0 , 1 } , { (
char_T * ) ( & giqt2tul5wr . liwdzlex20 ) , 2 , 0 , 20 } , { ( char_T * ) ( &
giqt2tul5wr . gmldgqtpy3 ) , 3 , 0 , 4 } , { ( char_T * ) ( & giqt2tul5wr .
nhfzola4qr ) , 8 , 0 , 7 } , { ( char_T * ) ( & giqt2tul5wr . igqkoslatl ) ,
33 , 0 , 1 } , { ( char_T * ) ( & giqt2tul5wr . isvmsyyglk ) , 34 , 0 , 1 } ,
{ ( char_T * ) ( & giqt2tul5wr . m03tkajmio ) , 35 , 0 , 1 } , { ( char_T * )
( & giqt2tul5wr . ekun4ztdyk ) , 32 , 0 , 1 } , { ( char_T * ) ( &
giqt2tul5wr . ciwxigmsq2 . iqmyanxtr1 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
giqt2tul5wr . ciwxigmsq2 . mc3fhmonso ) , 8 , 0 , 1 } , { ( char_T * ) ( &
giqt2tul5wr . g30v1kdrwbo . iqmyanxtr1 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
giqt2tul5wr . g30v1kdrwbo . mc3fhmonso ) , 8 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 27U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & konn1m5pjf .
PIDController_D ) , 0 , 0 , 22 } , { ( char_T * ) ( & konn1m5pjf .
EnumeratedConstant_Value ) , 17 , 0 , 1 } , { ( char_T * ) ( & konn1m5pjf .
u1_UpperSat ) , 0 , 0 , 3666 } , { ( char_T * ) ( & konn1m5pjf .
convert2percent_Gain ) , 1 , 0 , 194 } , { ( char_T * ) ( & konn1m5pjf .
StateSpace_A_ir ) , 7 , 0 , 9 } , { ( char_T * ) ( & konn1m5pjf .
Gain1_Gain_mjnwmk25rl ) , 37 , 0 , 3 } , { ( char_T * ) ( & rtP_radiator ) ,
18 , 0 , 1 } , { ( char_T * ) ( & rtP_pump ) , 23 , 0 , 1 } , { ( char_T * )
( & rtP_T_env ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP_T_init ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP_T_set ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__BattSocInit2f2BMS_Software_DD_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP_enable_regen ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP_bat_soc_init ) , 1
, 0 , 1 } } ; static DataTypeTransitionTable rtPTransTable = { 14U ,
rtPTransitions } ;
