#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , {
"struct_3VsPydWBoiqQQizi9a3DAE" , 17 , 128 } , {
"struct_xrXMOTgqOdCQGFX38sY6uH" , 18 , 808 } , {
"struct_Ps4uk2H5q4nqagQCDAIEeG" , 19 , 24 } , {
"struct_yG05H0L0rR9H3viILJtQr" , 20 , 24 } , {
"struct_Bm2krXtJ6qdjkxDiPF3mSC" , 21 , 24 } , {
"struct_MnlE2uNdAoiKpaBUKAg05D" , 22 , 16 } , { "uint8_T" , 23 , 1 } , {
"uint8_T" , 24 , 1 } , { "uint32_T" , 25 , 4 } , { "uint64_T" , 26 , 8 } , {
"int64_T" , 27 , 8 } , { "uint_T" , 28 , 32 } , { "char_T" , 29 , 8 } , {
"uchar_T" , 30 , 8 } , { "time_T" , 31 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( struct_3VsPydWBoiqQQizi9a3DAE ) , sizeof ( int32_T )
, sizeof ( int32_T ) , sizeof ( int32_T ) , sizeof ( int32_T ) , sizeof (
struct_MnlE2uNdAoiKpaBUKAg05D ) , sizeof ( uint8_T ) , sizeof ( uint8_T ) ,
sizeof ( uint32_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof (
uint_T ) , sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ;
static const char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" ,
"int8_T" , "uint8_T" , "int16_T" , "uint16_T" , "int32_T" , "uint32_T" ,
"boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" , "action_T" ,
"timer_uint32_pair_T" , "physical_connection" , "int64_T" , "uint64_T" ,
"struct_3VsPydWBoiqQQizi9a3DAE" , "struct_xrXMOTgqOdCQGFX38sY6uH" ,
"struct_Ps4uk2H5q4nqagQCDAIEeG" , "struct_yG05H0L0rR9H3viILJtQr" ,
"struct_Bm2krXtJ6qdjkxDiPF3mSC" , "struct_MnlE2uNdAoiKpaBUKAg05D" , "uint8_T"
, "uint8_T" , "uint32_T" , "uint64_T" , "int64_T" , "uint_T" , "char_T" ,
"uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { { (
char_T * ) ( & rtB . hdgi0ckwmt ) , 0 , 0 , 633 } , { ( char_T * ) ( & rtB .
pat4o3qai3 ) , 24 , 0 , 1 } , { ( char_T * ) ( & rtDW . medpwyauzm ) , 0 , 0
, 11 } , { ( char_T * ) ( & rtDW . iw3e0ho3nl . TimePtr ) , 11 , 0 , 25 } , {
( char_T * ) ( & rtDW . mpmzqyoat0 . PrevIndex ) , 10 , 0 , 251 } , { (
char_T * ) ( & rtDW . olbucdh0u4 ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
mhoqdxbzwj ) , 8 , 0 , 5 } } ; static DataTypeTransitionTable rtBTransTable =
{ 7U , rtBTransitions } ; static DataTypeTransition rtPTransitions [ ] = { {
( char_T * ) ( & rtP . radiator ) , 17 , 0 , 1 } , { ( char_T * ) ( & rtP .
pump ) , 22 , 0 , 1 } , { ( char_T * ) ( & rtP . T_env ) , 0 , 0 , 1056353 }
, { ( char_T * ) ( & rtP . StateSpace_A_ir ) , 7 , 0 , 9 } , { ( char_T * ) (
& rtP . Gain1_Gain ) , 24 , 0 , 3 } } ; static DataTypeTransitionTable
rtPTransTable = { 5U , rtPTransitions } ;
