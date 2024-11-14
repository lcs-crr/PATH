#ifndef __c1_Balancing_Logic_h__
#define __c1_Balancing_Logic_h__
#include "sf_runtime/sfc_sdi.h"
#include "rtw_capi.h"
#include "rtw_modelmap.h"

/* Forward Declarations */

/* Type Definitions */
#ifndef enum_c1_BMS_State_Enum
#define enum_c1_BMS_State_Enum

enum c1_BMS_State_Enum
{
  c1_BMS_State_Enum_BMS_Standby = 0,   /* Default value */
  c1_BMS_State_Enum_BMS_Charging,
  c1_BMS_State_Enum_BMS_Driving,
  c1_BMS_State_Enum_BMS_Fault
};

#endif                                 /* enum_c1_BMS_State_Enum */

#ifndef typedef_c1_BMS_State_Enum
#define typedef_c1_BMS_State_Enum

typedef enum c1_BMS_State_Enum c1_BMS_State_Enum;

#endif                                 /* typedef_c1_BMS_State_Enum */

#ifndef typedef_SFc1_Balancing_LogicInstanceStruct
#define typedef_SFc1_Balancing_LogicInstanceStruct

typedef struct {
  real32_T c1_TargetDeltaV;
  boolean_T c1_flgBalCompl;
  int16_T c1_BalNotActWait;
  int16_T c1_BalOffWait;
  int16_T c1_BalOnWait;
  boolean_T c1_flgEnBalancing;
  real32_T c1_DeltaCellVolt;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c1_sfEvent;
  uint8_T c1_is_active_c1_Balancing_Logic;
  uint32_T c1_is_c1_Balancing_Logic;
  uint32_T c1_is_BalancingON;
  uint8_T c1_JITStateAnimation[4];
  uint8_T c1_JITTransitionAnimation[7];
  int32_T c1_IsDebuggerActive;
  int32_T c1_IsSequenceViewerPresent;
  int32_T c1_SequenceViewerOptimization;
  int32_T c1_IsHeatMapPresent;
  void *c1_RuntimeVar;
  uint16_T c1_temporalCounter_i1;
  boolean_T c1_dataWrittenToVector[1];
  uint8_T c1_doSetSimStateSideEffects;
  const mxArray *c1_setSimStateSideEffectsInfo;
  uint32_T c1_mlFcnLineNumber;
  rtwCAPI_ModelMappingInfo c1_testPointMappingInfo;
  void *c1_testPointAddrMap[1];
  CovrtStateflowInstance *c1_covrtInstance;
  void *c1_fEmlrtCtx;
  c1_BMS_State_Enum *c1_BMS_State;
  real32_T (*c1_CellVoltages)[96];
  boolean_T (*c1_BalCmd)[96];
  real32_T *c1_MaxCellVolt;
  real32_T *c1_MinCellVolt;
} SFc1_Balancing_LogicInstanceStruct;

#endif                                 /* typedef_SFc1_Balancing_LogicInstanceStruct */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c1_Balancing_Logic_get_eml_resolved_functions_info(void);
extern mxArray *sf_c1_Balancing_Logic_getDebuggerHoverDataFor
  (SFc1_Balancing_LogicInstanceStruct *chartInstance, uint32_T c1_u);

/* Function Definitions */
extern void sf_c1_Balancing_Logic_get_check_sum(mxArray *plhs[]);
extern void c1_Balancing_Logic_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
