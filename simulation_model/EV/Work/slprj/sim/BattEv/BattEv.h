#ifndef RTW_HEADER_BattEv_h_
#define RTW_HEADER_BattEv_h_
#ifndef BattEv_COMMON_INCLUDES_
#define BattEv_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "BattEv_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T ojbwrsc0h3 ; real_T kgyhtpvnna ; } nw51lwywlm ;
typedef struct { int_T njy404bwi0 ; } dmy10bqvs5 ; typedef struct { real_T
mtcpjlfcu4 ; } hkgv0zhr3w ; typedef struct { real_T mtcpjlfcu4 ; } nvyvwtjtwa
; typedef struct { boolean_T mtcpjlfcu4 ; } khjrgybdwv ; struct a2kiykjvrxh_
{ real_T P_1 ; real_T P_2 [ 4 ] ; real_T P_3 [ 100 ] ; real_T P_4 [ 100 ] ;
real_T P_5 [ 100 ] ; real_T P_6 ; real_T P_7 ; real_T P_8 [ 400 ] ; real_T
P_9 ; uint32_T P_10 [ 2 ] ; } ; struct bjbjtykkxm { struct SimStruct_tag *
_mdlRefSfcnS ; const rtTimingBridge * timingBridge ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 1 ] ; int32_T * vardimsAddress [ 1
] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 3 ]
; time_T tStart ; } Timing ; } ; typedef struct { nw51lwywlm rtb ; dmy10bqvs5
rtdw ; euywnbmp33 rtm ; } lobjb0lvrdo ; extern real_T
rtP__BattSocInit2f2BMS_Software_DD_sldd_ ; extern void lst5ppimoh ( SimStruct
* _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T mdlref_TID2 ,
euywnbmp33 * const n4jdqa0poy , nw51lwywlm * localB , dmy10bqvs5 * localDW ,
hkgv0zhr3w * localX , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void mr_BattEv_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern
mxArray * mr_BattEv_GetDWork ( const lobjb0lvrdo * mdlrefDW ) ; extern void
mr_BattEv_SetDWork ( lobjb0lvrdo * mdlrefDW , const mxArray * ssDW ) ; extern
void mr_BattEv_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_BattEv_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * BattEv_GetCAPIStaticMap ( void ) ; extern
void poo3kmg0ob ( euywnbmp33 * const n4jdqa0poy , dmy10bqvs5 * localDW ,
hkgv0zhr3w * localX ) ; extern void havtbmuleg ( euywnbmp33 * const
n4jdqa0poy , dmy10bqvs5 * localDW , hkgv0zhr3w * localX ) ; extern void
pexk2pi1gg ( nw51lwywlm * localB , hkgv0zhr3w * localX , nvyvwtjtwa *
localXdot ) ; extern void c0hgp3wnut ( dmy10bqvs5 * localDW ) ; extern void
BattEv ( euywnbmp33 * const n4jdqa0poy , const real_T * bgau4kdtsz , const
real_T * nend3jcwem , real_T * pcblqeyf5w , nw51lwywlm * localB , dmy10bqvs5
* localDW , hkgv0zhr3w * localX ) ; extern void BattEvTID2 ( nw51lwywlm *
localB ) ; extern void m5uwyjpoin ( euywnbmp33 * const n4jdqa0poy ) ;
#endif
