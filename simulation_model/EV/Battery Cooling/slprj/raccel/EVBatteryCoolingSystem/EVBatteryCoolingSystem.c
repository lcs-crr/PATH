#include "EVBatteryCoolingSystem.h"
#include "rtwtypes.h"
#include "EVBatteryCoolingSystem_types.h"
#include <string.h>
#include <stddef.h>
#include "EVBatteryCoolingSystem_private.h"
#include "rt_logging_mmi.h"
#include "EVBatteryCoolingSystem_capi.h"
#include "EVBatteryCoolingSystem_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , &
stopRequested ) ; } rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "23.2 (R2023b) 01-Aug-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const
char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; MassMatrix rtMassMatrix ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
MdlInitialize ( void ) { int_T is ; int_T tmp_e ; int_T tmp_g ; int_T tmp_i ;
int_T tmp_j ; int_T tmp_m ; boolean_T tmp ; boolean_T tmp_p ; SimStruct * S ;
void * diag ; rtX . bq1z1krpn5 = 0.0 ; rtX . iwyoop3u3r = rtP .
StateSpace_InitialCondition ; rtX . env1qqkpbr = rtP .
PIDController_InitialConditionForIntegrator ; rtX . karozk4fpb = rtP .
PIDController_InitialConditionForFilter ; tmp = false ; tmp_p = false ; if (
tmp_p || tmp ) { is = strcmp ( ssGetSolverName ( rtS ) , "daessc" ) ; tmp_e =
strcmp ( ssGetSolverName ( rtS ) , "ode14x" ) ; tmp_i = strcmp (
ssGetSolverName ( rtS ) , "ode15s" ) ; tmp_m = strcmp ( ssGetSolverName ( rtS
) , "ode1be" ) ; tmp_g = strcmp ( ssGetSolverName ( rtS ) , "ode23t" ) ;
tmp_j = strcmp ( ssGetSolverName ( rtS ) , "odeN" ) ; if ( ( boolean_T ) ( (
is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 ) & ( tmp_g != 0 )
& ( tmp_j != 0 ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "daessc" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } { static int_T modelMassMatrixIr [ 112 ]
= { 0 , 1 , 2 , 3 , 4 , 5 , 8 , 11 , 17 , 14 , 6 , 7 , 9 , 10 , 12 , 13 , 15
, 16 , 18 , 19 , 18 , 19 , 20 , 21 , 20 , 21 , 22 , 23 , 22 , 23 , 24 , 25 ,
26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 32 , 33 , 34 , 35 , 34 , 35 , 36 , 37
, 36 , 37 , 38 , 39 , 38 , 39 , 40 , 41 , 40 , 41 , 42 , 43 , 42 , 43 , 44 ,
45 , 44 , 45 , 46 , 47 , 46 , 47 , 48 , 65 , 66 , 65 , 66 , 68 , 49 , 50 , 49
, 50 , 51 , 52 , 51 , 52 , 53 , 54 , 53 , 54 , 55 , 56 , 55 , 56 , 57 , 58 ,
57 , 58 , 59 , 60 , 59 , 60 , 61 , 62 , 61 , 62 , 63 , 64 , 63 , 64 , 65 , 66
, 68 , 67 } ; static int_T modelMassMatrixJc [ 344 ] = { 0 , 1 , 2 , 3 , 4 ,
5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 20 , 22 , 24
, 26 , 28 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 40 , 42 , 44 , 46 ,
48 , 50 , 52 , 54 , 56 , 58 , 60 , 62 , 64 , 66 , 68 , 70 , 71 , 73 , 76 , 78
, 80 , 82 , 84 , 86 , 88 , 90 , 92 , 94 , 96 , 98 , 100 , 102 , 104 , 106 ,
108 , 111 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 , 112 ,
112 , 112 , 112 , 112 } ; static real_T modelMassMatrixPr [ 112 ] = { 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; ( void ) memcpy ( rtMassMatrix .
ir , modelMassMatrixIr , 112 * sizeof ( int_T ) ) ; ( void ) memcpy (
rtMassMatrix . jc , modelMassMatrixJc , 344 * sizeof ( int_T ) ) ; ( void )
memcpy ( rtMassMatrix . pr , modelMassMatrixPr , 112 * sizeof ( real_T ) ) ;
} } void MdlStart ( void ) { CXPtMax * _rtXPerturbMax ; CXPtMin *
_rtXPerturbMin ; NeModelParameters modelParameters ; NeModelParameters
modelParameters_e ; NeModelParameters modelParameters_p ; NeslRtpManager *
manager ; NeslRtpManager * manager_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp_p ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_i ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_i ; char * msg_p ; real_T tmp_m [ 16 ]
; real_T time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 5 ] ; boolean_T
tmp ; boolean_T val ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { FWksInfo * fromwksInfo ;
if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 , sizeof ( FWksInfo ) ) ) == (
NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName =
 "Simulink.signaleditorblock.SimulationData.getData('RVZCYXR0ZXJ5Q29vbGluZ1N5c3RlbS9TeXN0ZW0gSW5wdXRz','1')"
; fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) rtP . fromWS_Signal1_Data0 ; fromwksInfo
-> nDataPoints = 264079 ; fromwksInfo -> time = ( double * ) rtP .
fromWS_Signal1_Time0 ; rtDW . iw3e0ho3nl . TimePtr = fromwksInfo -> time ;
rtDW . iw3e0ho3nl . DataPtr = fromwksInfo -> data ; rtDW . iw3e0ho3nl .
RSimInfoPtr = fromwksInfo ; } rtDW . mpmzqyoat0 . PrevIndex = 0 ; } {
FWksInfo * fromwksInfo ; if ( ( fromwksInfo = ( FWksInfo * ) calloc ( 1 ,
sizeof ( FWksInfo ) ) ) == ( NULL ) ) { ssSetErrorStatus ( rtS ,
"from workspace STRING(Name) memory allocation error" ) ; } else {
fromwksInfo -> origWorkspaceVarName =
 "Simulink.signaleditorblock.SimulationData.getData('RVZCYXR0ZXJ5Q29vbGluZ1N5c3RlbS9TeXN0ZW0gSW5wdXRz','2')"
; fromwksInfo -> origDataTypeId = 0 ; fromwksInfo -> origIsComplex = 0 ;
fromwksInfo -> origWidth = 1 ; fromwksInfo -> origElSize = sizeof ( real_T )
; fromwksInfo -> data = ( void * ) rtP . FromWorkspace_Data0 ; fromwksInfo ->
nDataPoints = 264079 ; fromwksInfo -> time = ( double * ) rtP .
FromWorkspace_Time0 ; rtDW . pz4i2vr5t2 . TimePtr = fromwksInfo -> time ;
rtDW . pz4i2vr5t2 . DataPtr = fromwksInfo -> data ; rtDW . pz4i2vr5t2 .
RSimInfoPtr = fromwksInfo ; } rtDW . psiva0oxeh . PrevIndex = 0 ; } manager_p
= nesl_lease_rtp_manager ( "EVBatteryCoolingSystem/Solver Configuration_1" ,
0 ) ; manager = manager_p ; tmp = pointer_is_null ( manager_p ) ; if ( tmp )
{ EVBatteryCoolingSystem_e473bc05_1_gateway ( ) ; manager =
nesl_lease_rtp_manager ( "EVBatteryCoolingSystem/Solver Configuration_1" , 0
) ; } rtDW . gfzyhdldpe = ( void * ) manager ; rtDW . mhoqdxbzwj = true ;
tmp_p = nesl_lease_simulator (
"EVBatteryCoolingSystem/Solver Configuration_1" , 0 , 0 ) ; rtDW . b1a0qim2yg
= ( void * ) tmp_p ; tmp = pointer_is_null ( rtDW . b1a0qim2yg ) ; if ( tmp )
{ EVBatteryCoolingSystem_e473bc05_1_gateway ( ) ; tmp_p =
nesl_lease_simulator ( "EVBatteryCoolingSystem/Solver Configuration_1" , 0 ,
0 ) ; rtDW . b1a0qim2yg = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
"EVBatteryCoolingSystem/Solver Configuration_100" , ( void * * ) ( & rtDW .
b1a0qim2yg ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . pg1peeaap2 = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . bglls0p5vn = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverAbsTol = 0.001 ; modelParameters . mSolverRelTol = 0.001 ;
modelParameters . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ;
modelParameters . mStartTime = 0.0 ; modelParameters . mLoadInitialState =
false ; modelParameters . mUseSimState = false ; modelParameters .
mLinTrimCompile = false ; modelParameters . mLoggingMode = SSC_LOGGING_ON ;
modelParameters . mRTWModifiedTimeStamp = 6.23167736E+8 ; modelParameters .
mZcDisabled = false ; modelParameters . mUseModelRefSolver = false ;
modelParameters . mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp = true ; modelParameters . mVariableStepSolver = tmp ; tmp =
false ; modelParameters . mIsUsingODEN = tmp ; tmp =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bglls0p5vn ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . b1a0qim2yg
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . pg1peeaap2 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & rtX . effbkgmtax [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pahluld41k ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = & rtDW
. idk0zphtpp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; tmp_m [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ;
tmp_m [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ; tmp_m [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . hmdfvofm2d [ 0 ] ; tmp_m [ 5 ] = rtB .
hmdfvofm2d [ 1 ] ; tmp_m [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; tmp_m [ 7 ] = rtB .
hmdfvofm2d [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . c4vppbzui3 [ 0 ] ;
tmp_m [ 9 ] = rtB . c4vppbzui3 [ 1 ] ; tmp_m [ 10 ] = rtB . c4vppbzui3 [ 2 ]
; tmp_m [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; tmp_m [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; tmp_m [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; tmp_m [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_g [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 337 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> effbkgmtax
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 337 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> effbkgmtax [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bglls0p5vn ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. b1a0qim2yg , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager
) ; if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS
) ) ; if ( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } tmp_p = nesl_lease_simulator (
"EVBatteryCoolingSystem/Solver Configuration_1" , 1 , 0 ) ; rtDW . izgcpovxyi
= ( void * ) tmp_p ; tmp = pointer_is_null ( rtDW . izgcpovxyi ) ; if ( tmp )
{ EVBatteryCoolingSystem_e473bc05_1_gateway ( ) ; tmp_p =
nesl_lease_simulator ( "EVBatteryCoolingSystem/Solver Configuration_1" , 1 ,
0 ) ; rtDW . izgcpovxyi = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
"EVBatteryCoolingSystem/Solver Configuration_110" , ( void * * ) ( & rtDW .
izgcpovxyi ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . gvo41anqta = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . nrhx2nf1go = ( void * ) diagnosticManager
; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p .
mSolverAbsTol = 0.001 ; modelParameters_p . mSolverRelTol = 0.001 ;
modelParameters_p . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_ON ;
modelParameters_p . mRTWModifiedTimeStamp = 6.23167736E+8 ; modelParameters_p
. mZcDisabled = false ; modelParameters_p . mUseModelRefSolver = false ;
modelParameters_p . mTargetFPGAHIL = false ; tmp_e = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp = true ; modelParameters_p .
mVariableStepSolver = tmp ; tmp = false ; modelParameters_p . mIsUsingODEN =
tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . nrhx2nf1go ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . izgcpovxyi , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } tmp_p = nesl_lease_simulator (
"EVBatteryCoolingSystem/Solver Configuration_1" , 1 , 1 ) ; rtDW . o1ucbdw3qn
= ( void * ) tmp_p ; tmp = pointer_is_null ( rtDW . o1ucbdw3qn ) ; if ( tmp )
{ EVBatteryCoolingSystem_e473bc05_1_gateway ( ) ; tmp_p =
nesl_lease_simulator ( "EVBatteryCoolingSystem/Solver Configuration_1" , 1 ,
1 ) ; rtDW . o1ucbdw3qn = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
"EVBatteryCoolingSystem/Solver Configuration_111" , ( void * * ) ( & rtDW .
o1ucbdw3qn ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . i0lluemaxm = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . cm54eojqab = ( void * ) diagnosticManager
; modelParameters_e . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_e .
mSolverAbsTol = 0.001 ; modelParameters_e . mSolverRelTol = 0.001 ;
modelParameters_e . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ;
modelParameters_e . mStartTime = 0.0 ; modelParameters_e . mLoadInitialState
= false ; modelParameters_e . mUseSimState = false ; modelParameters_e .
mLinTrimCompile = false ; modelParameters_e . mLoggingMode = SSC_LOGGING_ON ;
modelParameters_e . mRTWModifiedTimeStamp = 6.23167736E+8 ; modelParameters_e
. mZcDisabled = false ; modelParameters_e . mUseModelRefSolver = false ;
modelParameters_e . mTargetFPGAHIL = false ; tmp_e = 0.001 ;
modelParameters_e . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_e . mFixedStepSize = tmp_e ; tmp = true ; modelParameters_e .
mVariableStepSolver = tmp ; tmp = false ; modelParameters_e . mIsUsingODEN =
tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_e . mLoadInitialState = val ;
modelParameters_e . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . cm54eojqab ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . o1ucbdw3qn , &
modelParameters_e , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_i =
rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS , msg_i ) ;
} } MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { NeParameterBundle
expl_temp ; NeslSimulationData * simulationData ; NeuDiagnosticManager * diag
; NeuDiagnosticTree * diagTree ; NeuDiagnosticTree * diagnosticTree ;
NeuDiagnosticTree * diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_i ; char * msg_p ; real_T tmp [ 21 ] ;
real_T tmp_p [ 16 ] ; real_T luxwyadlqr ; real_T time ; real_T time_e ;
real_T time_g ; real_T time_i ; real_T time_m ; real_T time_p ; real_T *
parameterBundle_mRealParameters_mX ; int_T tmp_i [ 6 ] ; int_T tmp_m [ 6 ] ;
int_T tmp_e [ 5 ] ; int_T iy ; uint32_T ri ; boolean_T first_output ; {
real_T * pDataValues = ( real_T * ) rtDW . iw3e0ho3nl . DataPtr ; real_T *
pTimeValues = ( real_T * ) rtDW . iw3e0ho3nl . TimePtr ; int_T currTimeIndex
= rtDW . mpmzqyoat0 . PrevIndex ; real_T t = ssGetTaskTime ( rtS , 0 ) ; int
numPoints , lastPoint ; FWksInfo * fromwksInfo = ( FWksInfo * ) rtDW .
iw3e0ho3nl . RSimInfoPtr ; numPoints = fromwksInfo -> nDataPoints ; lastPoint
= numPoints - 1 ; if ( t <= pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else
if ( t >= pTimeValues [ lastPoint ] ) { currTimeIndex = lastPoint - 1 ; }
else { if ( t < pTimeValues [ currTimeIndex ] ) { while ( t < pTimeValues [
currTimeIndex ] ) { currTimeIndex -- ; } } else { while ( t >= pTimeValues [
currTimeIndex + 1 ] ) { currTimeIndex ++ ; } } } rtDW . mpmzqyoat0 .
PrevIndex = currTimeIndex ; { real_T t1 = pTimeValues [ currTimeIndex ] ;
real_T t2 = pTimeValues [ currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1
) { rtB . hdgi0ckwmt = pDataValues [ currTimeIndex ] ; } else { rtB .
hdgi0ckwmt = pDataValues [ currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2
- t ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T
TimeIndex = currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues
[ TimeIndex + 1 ] ; rtB . hdgi0ckwmt = ( real_T ) rtInterpolate ( d1 , d2 ,
f1 , f2 ) ; pDataValues += numPoints ; } } } rtB . kvdm2qa4kz = rtB .
hdgi0ckwmt + rtP . Airvelocityms_Bias ; rtB . bdmsuutsho = rtB . kvdm2qa4kz *
rtP . radiator . area_air * rtP . Airdensitykgm3_Value ; if ( rtDW .
of51ysnuoh == 0.0 ) { rtDW . of51ysnuoh = 1.0 ; rtX . lxztuzhhop = rtB .
bdmsuutsho ; } rtB . g4x5d1kqrr [ 0 ] = rtX . lxztuzhhop ; rtB . g4x5d1kqrr [
1 ] = ( rtB . bdmsuutsho - rtX . lxztuzhhop ) * 100.0 ; rtB . g4x5d1kqrr [ 2
] = 0.0 ; rtB . g4x5d1kqrr [ 3 ] = 0.0 ; { real_T * pDataValues = ( real_T *
) rtDW . pz4i2vr5t2 . DataPtr ; real_T * pTimeValues = ( real_T * ) rtDW .
pz4i2vr5t2 . TimePtr ; int_T currTimeIndex = rtDW . psiva0oxeh . PrevIndex ;
real_T t = ssGetTaskTime ( rtS , 0 ) ; int numPoints , lastPoint ; FWksInfo *
fromwksInfo = ( FWksInfo * ) rtDW . pz4i2vr5t2 . RSimInfoPtr ; numPoints =
fromwksInfo -> nDataPoints ; lastPoint = numPoints - 1 ; if ( t <=
pTimeValues [ 0 ] ) { currTimeIndex = 0 ; } else if ( t >= pTimeValues [
lastPoint ] ) { currTimeIndex = lastPoint - 1 ; } else { if ( t < pTimeValues
[ currTimeIndex ] ) { while ( t < pTimeValues [ currTimeIndex ] ) {
currTimeIndex -- ; } } else { while ( t >= pTimeValues [ currTimeIndex + 1 ]
) { currTimeIndex ++ ; } } } rtDW . psiva0oxeh . PrevIndex = currTimeIndex ;
{ real_T t1 = pTimeValues [ currTimeIndex ] ; real_T t2 = pTimeValues [
currTimeIndex + 1 ] ; if ( t1 == t2 ) { if ( t < t1 ) { rtB . jjbuzly2c4 =
pDataValues [ currTimeIndex ] ; } else { rtB . jjbuzly2c4 = pDataValues [
currTimeIndex + 1 ] ; } } else { real_T f1 = ( t2 - t ) / ( t2 - t1 ) ;
real_T f2 = 1.0 - f1 ; real_T d1 ; real_T d2 ; int_T TimeIndex =
currTimeIndex ; d1 = pDataValues [ TimeIndex ] ; d2 = pDataValues [ TimeIndex
+ 1 ] ; rtB . jjbuzly2c4 = ( real_T ) rtInterpolate ( d1 , d2 , f1 , f2 ) ;
pDataValues += numPoints ; } } } rtB . hmdfvofm2d [ 0 ] = rtB . jjbuzly2c4 ;
rtB . hmdfvofm2d [ 1 ] = 0.0 ; rtB . hmdfvofm2d [ 2 ] = 0.0 ; rtB .
hmdfvofm2d [ 3 ] = 0.0 ; rtB . awjh3m2i52 = 0.0 ; rtB . awjh3m2i52 += rtP .
Pumpresponsedelay_C * rtX . bq1z1krpn5 ; rtB . c4vppbzui3 [ 0 ] = rtB .
awjh3m2i52 ; rtB . c4vppbzui3 [ 1 ] = 0.0 ; rtB . c4vppbzui3 [ 2 ] = 0.0 ;
rtB . c4vppbzui3 [ 3 ] = 0.0 ; rtB . kj5ged5ouv = 0.0 ; for ( ri = rtP .
StateSpace_C_jc [ 0U ] ; ri < rtP . StateSpace_C_jc [ 1U ] ; ri ++ ) { rtB .
kj5ged5ouv += rtP . StateSpace_C_pr * rtX . iwyoop3u3r ; } rtB . guzkycy441 =
rtP . T_set - rtB . kj5ged5ouv ; rtB . e4dmel4npm = rtP . PIDController_P *
rtB . guzkycy441 ; rtB . daxysc2t0q = rtX . env1qqkpbr ; rtB . ktxsqan1ix =
rtP . PIDController_D * rtB . guzkycy441 ; rtB . ox2ag4rjwi = rtX .
karozk4fpb ; rtB . ktdys5yo0t = rtB . ktxsqan1ix - rtB . ox2ag4rjwi ; rtB .
jdzew5kwiu = rtP . PIDController_N * rtB . ktdys5yo0t ; rtB . n1kdcxnjx2 = (
rtB . e4dmel4npm + rtB . daxysc2t0q ) + rtB . jdzew5kwiu ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . fni05y3dyi = rtB . n1kdcxnjx2 >=
rtP . PIDController_UpperSaturationLimit ? 1 : rtB . n1kdcxnjx2 > rtP .
PIDController_LowerSaturationLimit ? 0 : - 1 ; } rtB . cwyp0u4fxj = rtDW .
fni05y3dyi == 1 ? rtP . PIDController_UpperSaturationLimit : rtDW .
fni05y3dyi == - 1 ? rtP . PIDController_LowerSaturationLimit : rtB .
n1kdcxnjx2 ; rtB . ek2xrgvbnw = ( real_T ) rtB . pat4o3qai3 * 0.03125 + rtB .
cwyp0u4fxj ; if ( rtDW . eztgjvjrnk == 0.0 ) { rtDW . eztgjvjrnk = 1.0 ; rtX
. fr1u0arkx5 = rtB . ek2xrgvbnw ; } rtB . apvg0yhoqc [ 0 ] = rtX . fr1u0arkx5
; rtB . apvg0yhoqc [ 1 ] = ( rtB . ek2xrgvbnw - rtX . fr1u0arkx5 ) * 1000.0 ;
rtB . apvg0yhoqc [ 2 ] = 0.0 ; rtB . apvg0yhoqc [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW . mhoqdxbzwj ) { tmp [ 0 ] = rtP
. RTP_731D9D8D_T_Value ; tmp [ 1 ] = rtP . RTP_7EE98BC0_T_Value ; tmp [ 2 ] =
rtP . RTP_7D09336B_T_Value ; tmp [ 3 ] = rtP . RTP_95CC90AC_T_Value ; tmp [ 4
] = rtP . T_init ; tmp [ 5 ] = rtP . T_init ; tmp [ 6 ] = rtP . T_init ; tmp
[ 7 ] = rtP . T_init ; tmp [ 8 ] = rtP . T_init ; tmp [ 9 ] = rtP . T_init ;
tmp [ 10 ] = rtP . T_init ; tmp [ 11 ] = rtP . T_init ; tmp [ 12 ] = rtP .
T_init ; tmp [ 13 ] = rtP . T_init ; tmp [ 14 ] = rtP . T_init ; tmp [ 15 ] =
rtP . T_init ; tmp [ 16 ] = rtP . T_init ; tmp [ 17 ] = rtP . T_init ; tmp [
18 ] = rtP . RTP_A90ABFEE_level_Value ; tmp [ 19 ] = rtP .
RTP_A90ABFEE_p_gas_Value ; tmp [ 20 ] = rtP .
RTP_A90ABFEE_volume_liquid_Value ; parameterBundle_mRealParameters_mX = & tmp
[ 0 ] ; diag = rtw_create_diagnostics ( ) ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 21 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
first_output = nesl_rtp_manager_set_rtps ( ( NeslRtpManager * ) rtDW .
gfzyhdldpe , ssGetT ( rtS ) , expl_temp , diag ) ; if ( ! first_output ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } } rtDW . mhoqdxbzwj = false ; } simulationData = (
NeslSimulationData * ) rtDW . pg1peeaap2 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & rtX . effbkgmtax [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pahluld41k ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = & rtDW
. idk0zphtpp [ 0 ] ; first_output = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = first_output ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; first_output = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = first_output ; first_output
= ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = first_output ; first_output =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; tmp_p [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ;
tmp_p [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ; tmp_p [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . hmdfvofm2d [ 0 ] ; tmp_p [ 5 ] = rtB .
hmdfvofm2d [ 1 ] ; tmp_p [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; tmp_p [ 7 ] = rtB .
hmdfvofm2d [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . c4vppbzui3 [ 0 ] ;
tmp_p [ 9 ] = rtB . c4vppbzui3 [ 1 ] ; tmp_p [ 10 ] = rtB . c4vppbzui3 [ 2 ]
; tmp_p [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; tmp_p [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; tmp_p [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; tmp_p [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mOutputs . mN = 583 ; simulationData
-> mData -> mOutputs . mX = & rtB . ci1eqffra0 [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; time_p =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) rtDW . bglls0p5vn ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) rtDW . b1a0qim2yg , NESL_SIM_OUTPUTS , simulationData ,
diag ) ; if ( iy != 0 ) { first_output = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( first_output ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg_p ) ; }
} if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . gvo41anqta ; time_e = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_e ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . mjvwcs3qal ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . eya4mzvurp ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_i [ 0 ] = 0 ; rtB . dv [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; rtB . dv
[ 1 ] = rtB . g4x5d1kqrr [ 1 ] ; rtB . dv [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ;
rtB . dv [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ; tmp_i [ 1 ] = 4 ; rtB . dv [ 4 ] =
rtB . hmdfvofm2d [ 0 ] ; rtB . dv [ 5 ] = rtB . hmdfvofm2d [ 1 ] ; rtB . dv [
6 ] = rtB . hmdfvofm2d [ 2 ] ; rtB . dv [ 7 ] = rtB . hmdfvofm2d [ 3 ] ;
tmp_i [ 2 ] = 8 ; rtB . dv [ 8 ] = rtB . c4vppbzui3 [ 0 ] ; rtB . dv [ 9 ] =
rtB . c4vppbzui3 [ 1 ] ; rtB . dv [ 10 ] = rtB . c4vppbzui3 [ 2 ] ; rtB . dv
[ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_i [ 3 ] = 12 ; rtB . dv [ 12 ] = rtB .
apvg0yhoqc [ 0 ] ; rtB . dv [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; rtB . dv [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; rtB . dv [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_i [
4 ] = 16 ; memcpy ( & rtB . dv [ 16 ] , & rtB . ci1eqffra0 [ 0 ] , 583U *
sizeof ( real_T ) ) ; tmp_i [ 5 ] = 599 ; simulationData -> mData ->
mInputValues . mN = 599 ; simulationData -> mData -> mInputValues . mX = &
rtB . dv [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_i [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 7 ; simulationData -> mData ->
mOutputs . mX = & rtB . cizm5vaana [ 0 ] ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; time_i = ssGetTaskTime
( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData ->
mData -> mTime . mX = & time_i ; simulationData -> mData -> mSampleHits . mN
= 0 ; simulationData -> mData -> mSampleHits . mX = NULL ; simulationData ->
mData -> mIsFundamentalSampleHit = false ; diag = ( NeuDiagnosticManager * )
rtDW . nrhx2nf1go ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) rtDW . izgcpovxyi , NESL_SIM_OUTPUTS , simulationData ,
diag ) ; if ( iy != 0 ) { first_output = error_buffer_is_empty (
ssGetErrorStatus ( rtS ) ) ; if ( first_output ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) rtDW . i0lluemaxm ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . ps2h2vwltm ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . lqagrnen3f ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_m [ 0 ] = 0 ; rtB . dv1 [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; rtB .
dv1 [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ; rtB . dv1 [ 2 ] = rtB . g4x5d1kqrr [ 2 ]
; rtB . dv1 [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ; tmp_m [ 1 ] = 4 ; rtB . dv1 [ 4
] = rtB . hmdfvofm2d [ 0 ] ; rtB . dv1 [ 5 ] = rtB . hmdfvofm2d [ 1 ] ; rtB .
dv1 [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; rtB . dv1 [ 7 ] = rtB . hmdfvofm2d [ 3 ]
; tmp_m [ 2 ] = 8 ; rtB . dv1 [ 8 ] = rtB . c4vppbzui3 [ 0 ] ; rtB . dv1 [ 9
] = rtB . c4vppbzui3 [ 1 ] ; rtB . dv1 [ 10 ] = rtB . c4vppbzui3 [ 2 ] ; rtB
. dv1 [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_m [ 3 ] = 12 ; rtB . dv1 [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; rtB . dv1 [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; rtB .
dv1 [ 14 ] = rtB . apvg0yhoqc [ 2 ] ; rtB . dv1 [ 15 ] = rtB . apvg0yhoqc [ 3
] ; tmp_m [ 4 ] = 16 ; memcpy ( & rtB . dv1 [ 16 ] , & rtB . ci1eqffra0 [ 0 ]
, 583U * sizeof ( real_T ) ) ; tmp_m [ 5 ] = 599 ; simulationData -> mData ->
mInputValues . mN = 599 ; simulationData -> mData -> mInputValues . mX = &
rtB . dv1 [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 6 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_m [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 1 ; simulationData -> mData ->
mOutputs . mX = & luxwyadlqr ; simulationData -> mData -> mTolerances . mN =
0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; time_g = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_g ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; diag = ( NeuDiagnosticManager * ) rtDW .
cm54eojqab ; diagnosticTree_e = neu_diagnostic_manager_get_initial_tree (
diag ) ; iy = ne_simulator_method ( ( NeslSimulator * ) rtDW . o1ucbdw3qn ,
NESL_SIM_OUTPUTS , simulationData , diag ) ; if ( iy != 0 ) { first_output =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( first_output ) {
msg_i = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS ,
msg_i ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
luxwyadlqr *= rtB . cizm5vaana [ 4 ] ; rtB . e2egazwdtp = rtP . kW_Gain *
luxwyadlqr ; rtB . eaf2lxhueg = rtP . Efficiency_Gain * rtB . cizm5vaana [ 6
] ; rtB . ne3aknl42j = rtB . cizm5vaana [ 3 ] - rtP . T_set ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . m53bymnnod = ( ( rtB . ne3aknl42j
>= rtP . Relay_OnVal ) || ( ( ! ( rtB . ne3aknl42j <= rtP . Relay_OffVal ) )
&& rtDW . m53bymnnod ) ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtDW
. m53bymnnod ) { luxwyadlqr = rtP . Relay_YOn ; } else { luxwyadlqr = rtP .
Relay_YOff ; } rtB . cbztcpotvv = rtP . pump . omega * luxwyadlqr ; } rtB .
obweg0l22f = rtB . cwyp0u4fxj - rtB . n1kdcxnjx2 ; rtB . mijc1dwvec = rtP .
PIDController_Kb * rtB . obweg0l22f ; rtB . j4w0fnlfbw = rtP .
PIDController_I * rtB . guzkycy441 ; rtB . gmef4hcfga = rtB . mijc1dwvec +
rtB . j4w0fnlfbw ; UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID2 ( int_T
tid ) { rtB . onxkezlpwm = rtP . T_set + 1.0 ; rtB . g4gjxqt3j1 = rtP . T_set
- 0.5 ; rtB . pat4o3qai3 = ( uint8_T ) ( ( ( ( ( uint32_T ) ( rtP . T_env <
rtP . Constant1_Value ? ( int32_T ) rtP . Gain1_Gain : 0 ) << 1 ) + (
uint32_T ) ( rtP . T_env >= rtP . Constant_Value ? ( int32_T ) rtP .
Gain_Gain : 0 ) ) + ( ( uint32_T ) ( ( rtP . T_env >= rtP . Constant2_Value )
&& ( rtP . T_env < rtP . Constant3_Value ) ? ( int32_T ) rtP . Gain2_Gain : 0
) << 1 ) ) >> 1 ) ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid )
{ NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T
tmp ; simulationData = ( NeslSimulationData * ) rtDW . pg1peeaap2 ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 337 ; simulationData -> mData -> mContStates . mX = & rtX . effbkgmtax [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . pahluld41k ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = & rtDW
. idk0zphtpp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; tmp_p [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ;
tmp_p [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ; tmp_p [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . hmdfvofm2d [ 0 ] ; tmp_p [ 5 ] = rtB .
hmdfvofm2d [ 1 ] ; tmp_p [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; tmp_p [ 7 ] = rtB .
hmdfvofm2d [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . c4vppbzui3 [ 0 ] ;
tmp_p [ 9 ] = rtB . c4vppbzui3 [ 1 ] ; tmp_p [ 10 ] = rtB . c4vppbzui3 [ 2 ]
; tmp_p [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; tmp_p [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; tmp_p [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; tmp_p [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
bglls0p5vn ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. b1a0qim2yg , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int_T tmp_e [ 5 ] ; int_T is
; uint32_T ri ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
_rtXdot -> lxztuzhhop = ( rtB . bdmsuutsho - rtX . lxztuzhhop ) * 100.0 ;
_rtXdot -> bq1z1krpn5 = 0.0 ; _rtXdot -> bq1z1krpn5 += rtP .
Pumpresponsedelay_A * rtX . bq1z1krpn5 ; _rtXdot -> bq1z1krpn5 += rtB .
cbztcpotvv ; _rtXdot -> iwyoop3u3r = 0.0 ; for ( ri = rtP . StateSpace_A_jc [
0U ] ; ri < rtP . StateSpace_A_jc [ 1U ] ; ri ++ ) { _rtXdot -> iwyoop3u3r +=
rtP . StateSpace_A_pr * rtX . iwyoop3u3r ; } for ( ri = rtP . StateSpace_B_jc
[ 0U ] ; ri < rtP . StateSpace_B_jc [ 1U ] ; ri ++ ) { _rtXdot -> iwyoop3u3r
+= rtP . StateSpace_B_pr * rtB . cizm5vaana [ 5 ] ; } _rtXdot -> env1qqkpbr =
rtB . gmef4hcfga ; _rtXdot -> karozk4fpb = rtB . jdzew5kwiu ; _rtXdot ->
fr1u0arkx5 = ( rtB . ek2xrgvbnw - rtX . fr1u0arkx5 ) * 1000.0 ;
simulationData = ( NeslSimulationData * ) rtDW . pg1peeaap2 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & rtX . effbkgmtax [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pahluld41k ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = & rtDW
. idk0zphtpp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; tmp_p [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ;
tmp_p [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ; tmp_p [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . hmdfvofm2d [ 0 ] ; tmp_p [ 5 ] = rtB .
hmdfvofm2d [ 1 ] ; tmp_p [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; tmp_p [ 7 ] = rtB .
hmdfvofm2d [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . c4vppbzui3 [ 0 ] ;
tmp_p [ 9 ] = rtB . c4vppbzui3 [ 1 ] ; tmp_p [ 10 ] = rtB . c4vppbzui3 [ 2 ]
; tmp_p [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; tmp_p [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; tmp_p [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; tmp_p [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 337 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> effbkgmtax [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bglls0p5vn ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) rtDW . b1a0qim2yg ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} } void MdlProjection ( void ) { } void MdlForcingFunction ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int_T tmp_e [ 5 ] ; int_T is
; uint32_T ri ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
_rtXdot -> lxztuzhhop = ( rtB . bdmsuutsho - rtX . lxztuzhhop ) * 100.0 ;
_rtXdot -> bq1z1krpn5 = 0.0 ; _rtXdot -> bq1z1krpn5 += rtP .
Pumpresponsedelay_A * rtX . bq1z1krpn5 ; _rtXdot -> bq1z1krpn5 += rtB .
cbztcpotvv ; _rtXdot -> iwyoop3u3r = 0.0 ; for ( ri = rtP . StateSpace_A_jc [
0U ] ; ri < rtP . StateSpace_A_jc [ 1U ] ; ri ++ ) { _rtXdot -> iwyoop3u3r +=
rtP . StateSpace_A_pr * rtX . iwyoop3u3r ; } for ( ri = rtP . StateSpace_B_jc
[ 0U ] ; ri < rtP . StateSpace_B_jc [ 1U ] ; ri ++ ) { _rtXdot -> iwyoop3u3r
+= rtP . StateSpace_B_pr * rtB . cizm5vaana [ 5 ] ; } _rtXdot -> env1qqkpbr =
rtB . gmef4hcfga ; _rtXdot -> karozk4fpb = rtB . jdzew5kwiu ; _rtXdot ->
fr1u0arkx5 = ( rtB . ek2xrgvbnw - rtX . fr1u0arkx5 ) * 1000.0 ;
simulationData = ( NeslSimulationData * ) rtDW . pg1peeaap2 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & rtX . effbkgmtax [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pahluld41k ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = & rtDW
. idk0zphtpp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; tmp_p [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ;
tmp_p [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ; tmp_p [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . hmdfvofm2d [ 0 ] ; tmp_p [ 5 ] = rtB .
hmdfvofm2d [ 1 ] ; tmp_p [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; tmp_p [ 7 ] = rtB .
hmdfvofm2d [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . c4vppbzui3 [ 0 ] ;
tmp_p [ 9 ] = rtB . c4vppbzui3 [ 1 ] ; tmp_p [ 10 ] = rtB . c4vppbzui3 [ 2 ]
; tmp_p [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; tmp_p [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; tmp_p [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; tmp_p [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mDx . mN = 337 ; simulationData ->
mData -> mDx . mX = & _rtXdot -> effbkgmtax [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bglls0p5vn ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) rtDW . b1a0qim2yg ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( is !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlMassMatrix ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; real_T * tmp_i ; real_T *
tmp_m ; int32_T tmp_g ; int_T tmp_e [ 5 ] ; boolean_T tmp ; simulationData =
( NeslSimulationData * ) rtDW . pg1peeaap2 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & rtX . effbkgmtax [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pahluld41k ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = & rtDW
. idk0zphtpp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; tmp_p [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ;
tmp_p [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ; tmp_p [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . hmdfvofm2d [ 0 ] ; tmp_p [ 5 ] = rtB .
hmdfvofm2d [ 1 ] ; tmp_p [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; tmp_p [ 7 ] = rtB .
hmdfvofm2d [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . c4vppbzui3 [ 0 ] ;
tmp_p [ 9 ] = rtB . c4vppbzui3 [ 1 ] ; tmp_p [ 10 ] = rtB . c4vppbzui3 [ 2 ]
; tmp_p [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; tmp_p [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; tmp_p [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; tmp_p [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; tmp_i = ssGetMassMatrixPr ( rtS ) ; tmp_m =
double_pointer_shift ( tmp_i , rtDW . olbucdh0u4 ) ; simulationData -> mData
-> mMassMatrixPr . mN = 106 ; simulationData -> mData -> mMassMatrixPr . mX =
tmp_m ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bglls0p5vn ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_g = ne_simulator_method ( ( NeslSimulator * ) rtDW . b1a0qim2yg ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_g != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; ZCV * _rtZCSV ; char * msg ; real_T tmp_p [ 16 ] ; real_T
time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T tmp ; _rtZCSV = ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> ekm3vjzjrp = rtB .
n1kdcxnjx2 - rtP . PIDController_UpperSaturationLimit ; _rtZCSV -> l1t4nu12xj
= rtB . n1kdcxnjx2 - rtP . PIDController_LowerSaturationLimit ;
simulationData = ( NeslSimulationData * ) rtDW . pg1peeaap2 ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 337 ;
simulationData -> mData -> mContStates . mX = & rtX . effbkgmtax [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . pahluld41k ; simulationData -> mData ->
mModeVector . mN = 246 ; simulationData -> mData -> mModeVector . mX = & rtDW
. idk0zphtpp [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS )
; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . g4x5d1kqrr [ 0 ] ; tmp_p [ 1 ] = rtB . g4x5d1kqrr [ 1 ] ;
tmp_p [ 2 ] = rtB . g4x5d1kqrr [ 2 ] ; tmp_p [ 3 ] = rtB . g4x5d1kqrr [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . hmdfvofm2d [ 0 ] ; tmp_p [ 5 ] = rtB .
hmdfvofm2d [ 1 ] ; tmp_p [ 6 ] = rtB . hmdfvofm2d [ 2 ] ; tmp_p [ 7 ] = rtB .
hmdfvofm2d [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . c4vppbzui3 [ 0 ] ;
tmp_p [ 9 ] = rtB . c4vppbzui3 [ 1 ] ; tmp_p [ 10 ] = rtB . c4vppbzui3 [ 2 ]
; tmp_p [ 11 ] = rtB . c4vppbzui3 [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . apvg0yhoqc [ 0 ] ; tmp_p [ 13 ] = rtB . apvg0yhoqc [ 1 ] ; tmp_p [ 14 ]
= rtB . apvg0yhoqc [ 2 ] ; tmp_p [ 15 ] = rtB . apvg0yhoqc [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 260 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> j3tmiiikdj ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bglls0p5vn ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . b1a0qim2yg ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } if ( rtDW . m53bymnnod ) { _rtZCSV -> jgqexmifsh = rtB . ne3aknl42j -
rtP . Relay_OffVal ; } else { _rtZCSV -> jgqexmifsh = rtB . ne3aknl42j - rtP
. Relay_OnVal ; } } void MdlTerminate ( void ) { rt_FREE ( rtDW . iw3e0ho3nl
. RSimInfoPtr ) ; rt_FREE ( rtDW . pz4i2vr5t2 . RSimInfoPtr ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . bglls0p5vn
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . pg1peeaap2
) ; nesl_erase_simulator ( "EVBatteryCoolingSystem/Solver Configuration_1" )
; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . nrhx2nf1go ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . gvo41anqta ) ; nesl_erase_simulator (
"EVBatteryCoolingSystem/Solver Configuration_1" ) ; nesl_destroy_registry ( )
; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
cm54eojqab ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
i0lluemaxm ) ; nesl_erase_simulator (
"EVBatteryCoolingSystem/Solver Configuration_1" ) ; nesl_destroy_registry ( )
; } static void mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_EVBatteryCoolingSystem_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_EVBatteryCoolingSystem_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_EVBatteryCoolingSystem_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_EVBatteryCoolingSystem_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_EVBatteryCoolingSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_EVBatteryCoolingSystem_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EVBatteryCoolingSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_EVBatteryCoolingSystem_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EVBatteryCoolingSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_EVBatteryCoolingSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_EVBatteryCoolingSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_EVBatteryCoolingSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_EVBatteryCoolingSystem_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" , "rtPrevZCX" ,
} ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void *
) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [
20 ] = { "rtDW.medpwyauzm" , "rtDW.of51ysnuoh" , "rtDW.ksimmcd4jh" ,
"rtDW.izuzdb3pa3" , "rtDW.gran21d1p5" , "rtDW.eztgjvjrnk" , "rtDW.pahluld41k"
, "rtDW.mjvwcs3qal" , "rtDW.ps2h2vwltm" , "rtDW.mpmzqyoat0" ,
"rtDW.psiva0oxeh" , "rtDW.idk0zphtpp" , "rtDW.eya4mzvurp" , "rtDW.lqagrnen3f"
, "rtDW.fni05y3dyi" , "rtDW.olbucdh0u4" , "rtDW.jbqbh3jmih" ,
"rtDW.jy4nc0czxn" , "rtDW.bhmzfrq3x3" , "rtDW.m53bymnnod" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 20 , rtdwDataFieldNames ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( rtDW . medpwyauzm ) , sizeof ( rtDW . medpwyauzm ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( rtDW . of51ysnuoh ) , sizeof ( rtDW . of51ysnuoh ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . ksimmcd4jh ) , sizeof ( rtDW . ksimmcd4jh ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . izuzdb3pa3 ) , sizeof ( rtDW . izuzdb3pa3 ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . gran21d1p5 ) , sizeof ( rtDW . gran21d1p5 ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . eztgjvjrnk ) , sizeof ( rtDW . eztgjvjrnk ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . pahluld41k ) , sizeof ( rtDW . pahluld41k ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . mjvwcs3qal ) , sizeof ( rtDW . mjvwcs3qal ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . ps2h2vwltm ) , sizeof ( rtDW . ps2h2vwltm ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . mpmzqyoat0 ) , sizeof ( rtDW . mpmzqyoat0 ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( rtDW . psiva0oxeh ) , sizeof ( rtDW . psiva0oxeh ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . idk0zphtpp ) , sizeof ( rtDW . idk0zphtpp ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( rtDW . eya4mzvurp ) , sizeof ( rtDW . eya4mzvurp ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const
void * ) & ( rtDW . lqagrnen3f ) , sizeof ( rtDW . lqagrnen3f ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . fni05y3dyi ) , sizeof ( rtDW . fni05y3dyi ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const
void * ) & ( rtDW . olbucdh0u4 ) , sizeof ( rtDW . olbucdh0u4 ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( rtDW . jbqbh3jmih ) , sizeof ( rtDW . jbqbh3jmih ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . jy4nc0czxn ) , sizeof ( rtDW . jy4nc0czxn ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( rtDW . bhmzfrq3x3 ) , sizeof ( rtDW . bhmzfrq3x3 ) ) ;
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( rtDW . m53bymnnod ) , sizeof ( rtDW . m53bymnnod ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_EVBatteryCoolingSystem_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void *
) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; } void
mr_EVBatteryCoolingSystem_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtB ) ,
ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
medpwyauzm ) , rtdwData , 0 , 0 , sizeof ( rtDW . medpwyauzm ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
of51ysnuoh ) , rtdwData , 0 , 1 , sizeof ( rtDW . of51ysnuoh ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ksimmcd4jh ) , rtdwData , 0 , 2 , sizeof ( rtDW . ksimmcd4jh ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
izuzdb3pa3 ) , rtdwData , 0 , 3 , sizeof ( rtDW . izuzdb3pa3 ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gran21d1p5 ) , rtdwData , 0 , 4 , sizeof ( rtDW . gran21d1p5 ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eztgjvjrnk ) , rtdwData , 0 , 5 , sizeof ( rtDW . eztgjvjrnk ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
pahluld41k ) , rtdwData , 0 , 6 , sizeof ( rtDW . pahluld41k ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mjvwcs3qal ) , rtdwData , 0 , 7 , sizeof ( rtDW . mjvwcs3qal ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ps2h2vwltm ) , rtdwData , 0 , 8 , sizeof ( rtDW . ps2h2vwltm ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mpmzqyoat0 ) , rtdwData , 0 , 9 , sizeof ( rtDW . mpmzqyoat0 ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
psiva0oxeh ) , rtdwData , 0 , 10 , sizeof ( rtDW . psiva0oxeh ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
idk0zphtpp ) , rtdwData , 0 , 11 , sizeof ( rtDW . idk0zphtpp ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eya4mzvurp ) , rtdwData , 0 , 12 , sizeof ( rtDW . eya4mzvurp ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lqagrnen3f ) , rtdwData , 0 , 13 , sizeof ( rtDW . lqagrnen3f ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fni05y3dyi ) , rtdwData , 0 , 14 , sizeof ( rtDW . fni05y3dyi ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
olbucdh0u4 ) , rtdwData , 0 , 15 , sizeof ( rtDW . olbucdh0u4 ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jbqbh3jmih ) , rtdwData , 0 , 16 , sizeof ( rtDW . jbqbh3jmih ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jy4nc0czxn ) , rtdwData , 0 , 17 , sizeof ( rtDW . jy4nc0czxn ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bhmzfrq3x3 ) , rtdwData , 0 , 18 , sizeof ( rtDW . bhmzfrq3x3 ) ) ;
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtDW .
m53bymnnod ) , rtdwData , 0 , 19 , sizeof ( rtDW . m53bymnnod ) ) ; }
mr_EVBatteryCoolingSystem_restoreDataFromMxArray ( ( void * ) & ( rtPrevZCX )
, ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_EVBatteryCoolingSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 6 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 6 ] = { "SimscapeRtp" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "SimscapeExecutionBlock" , "Scope" ,
"SimscapeSinkBlock" , } ; static const char_T * blockPath [ 6 ] = {
"EVBatteryCoolingSystem/Solver Configuration/RTP_1" ,
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/STATE_1" ,
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ,
"EVBatteryCoolingSystem/Scope" ,
"EVBatteryCoolingSystem/Solver Configuration/EVAL_KEY/SINK_1" , } ; static
const int reason [ 6 ] = { 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ;
subs [ 0 ] < 6 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 343 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 359 ) ; ssSetNumBlockIO ( rtS , 34 ) ;
ssSetNumBlockParams ( rtS , 1056367 ) ; } void MdlInitializeSampleTimes (
void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0
) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2345401999U ) ;
ssSetChecksumVal ( rtS , 1 , 1799780700U ) ; ssSetChecksumVal ( rtS , 2 ,
1412942005U ) ; ssSetChecksumVal ( rtS , 3 , 74665851U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 2 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . olbucdh0u4 = 6 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 32 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
EVBatteryCoolingSystem_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"EVBatteryCoolingSystem" ) ; ssSetPath ( rtS , "EVBatteryCoolingSystem" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 2474.0 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL
) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 2 , 2 , 1 , 1 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static
int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 2 , 2 , 1 , 1 } ; static boolean_T rt_LoggedStateIsVarDims [
] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE
, SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels
[ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "Discrete" , "FirstOutput" , "Discrete" , "Discrete" , "Discrete"
, "FirstOutput" } ; static const char_T * rt_LoggedStateBlockNames [ ] = {
"EVBatteryCoolingSystem/Air Stream/Simulink-PS\nConverter1" ,
"EVBatteryCoolingSystem/Controller/Pump response delay" ,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Transfer Fcn\n(with initial outputs)/State Space"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Integrator/Continuous/Integrator"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/PID Controller/Filter/Cont. Filter/Filter"
,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Controller/Simulink-PS\nConverter"
, "EVBatteryCoolingSystem/Battery/Pack 1/Thermal Model/Battery Thermal Mass"
, "EVBatteryCoolingSystem/Battery/Pack 2/Thermal Model/Battery Thermal Mass"
, "EVBatteryCoolingSystem/Battery/Pack 4/Thermal Model/Battery Thermal Mass"
, "EVBatteryCoolingSystem/Battery/Pack 3/Thermal Model/Battery Thermal Mass"
, "EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 1)/Plate mass left " ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 1)/Plate mass right" ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 2)/Plate mass left " ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 2)/Plate mass right" ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 3)/Plate mass left " ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 3)/Plate mass right" ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 4)/Plate mass left " ,
"EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 4)/Plate mass right" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R2" ,
"EVBatteryCoolingSystem/Controller/Sensors/Ideal Rotational Motion Sensor" ,
"EVBatteryCoolingSystem/Tank" , "EVBatteryCoolingSystem/Tank" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Pipe (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Pipe (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator return" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator return" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Pipe (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Pipe (TL)" ,
"EVBatteryCoolingSystem/Tank" , "EVBatteryCoolingSystem/Tank" ,
"EVBatteryCoolingSystem/Air flow rate" ,
"EVBatteryCoolingSystem/Air flow rate" ,
"EVBatteryCoolingSystem/Air flow rate" ,
"EVBatteryCoolingSystem/Air flow rate" ,
"EVBatteryCoolingSystem/Air flow rate" ,
"EVBatteryCoolingSystem/Air flow rate" ,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 1)/Battery to plate conduction left"
,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 1)/Battery to plate conduction right "
,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 2)/Battery to plate conduction left"
,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 2)/Battery to plate conduction right "
,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 3)/Battery to plate conduction left"
,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 3)/Battery to plate conduction right "
,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 4)/Battery to plate conduction left"
,
 "EVBatteryCoolingSystem/Cold Plate/Cooling Plate (Pack 4)/Battery to plate conduction right "
, "EVBatteryCoolingSystem/Battery/Pack 1/Controlled Voltage Source" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/R1" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Thermal Model/Battery Thermal Mass" ,
"EVBatteryCoolingSystem/Battery/Pack 1/Lithium Cell 1RC/PS Add" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Controlled Voltage Source" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/R0" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/R1" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Thermal Model/Battery Thermal Mass" ,
"EVBatteryCoolingSystem/Battery/Pack 2/Lithium Cell 1RC/PS Add" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Controlled Voltage Source" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/R0" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/R1" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Thermal Model/Battery Thermal Mass" ,
"EVBatteryCoolingSystem/Battery/Pack 3/Lithium Cell 1RC/PS Add" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/R0" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/C1" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/R1" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/Em_table" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Thermal Model/Battery Thermal Mass" ,
"EVBatteryCoolingSystem/Battery/Pack 4/Lithium Cell 1RC/PS Add" ,
"EVBatteryCoolingSystem/Cap (G)" , "EVBatteryCoolingSystem/Cap (G)" ,
"EVBatteryCoolingSystem/Cap (G)1" , "EVBatteryCoolingSystem/Cap (G)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Constant Volume Chamber (TL)2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_in_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_L2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R1" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R2" ,
"EVBatteryCoolingSystem/Cold Plate/Pipe_out_R2" ,
"EVBatteryCoolingSystem/Controller/Ideal Angular Velocity Source" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Constant Volume Chamber (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Mass & Energy Flow Rate Sensor (TL)"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Mass & Energy Flow Rate Sensor (TL)"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Heater Temperature/PS Subtract"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Mass & Energy Flow Rate Sensor (TL)"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Cooling Inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Heater Temperature/PS Add"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Controlled Temperature Source1"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Pipe (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Pipe (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Pipe (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Heater/Pipe (TL)" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Perfect Insulator1" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Perfect Insulator2" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator inlet" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator return" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator return" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator return" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Radiator/Radiator return" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System" ,
"EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System" ,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Refrigerant  Temperature/PS Add"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Controlled Temperature Source"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
, "EVBatteryCoolingSystem/Heating-Cooling Unit/Refrigerant System/Pipe (TL)"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)1"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)1"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)1"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)2"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)2"
,
 "EVBatteryCoolingSystem/Heating-Cooling Unit/4 Way Valve/Variable Area Orifice (TL)2"
, "EVBatteryCoolingSystem/Inlet" ,
"EVBatteryCoolingSystem/Local Restriction (TL)" ,
"EVBatteryCoolingSystem/Local Restriction (TL)" ,
"EVBatteryCoolingSystem/Local Restriction (TL)" ,
"EVBatteryCoolingSystem/Local Restriction (TL)" ,
"EVBatteryCoolingSystem/Local Restriction (TL)" ,
"EVBatteryCoolingSystem/Local Restriction (TL)" ,
"EVBatteryCoolingSystem/Local Restriction (TL)1" ,
"EVBatteryCoolingSystem/Local Restriction (TL)1" ,
"EVBatteryCoolingSystem/Local Restriction (TL)1" ,
"EVBatteryCoolingSystem/Local Restriction (TL)1" ,
"EVBatteryCoolingSystem/Local Restriction (TL)1" ,
"EVBatteryCoolingSystem/Local Restriction (TL)1" ,
"EVBatteryCoolingSystem/Outlet" , "EVBatteryCoolingSystem/Pump" ,
"EVBatteryCoolingSystem/Pump" , "EVBatteryCoolingSystem/Pump" ,
"EVBatteryCoolingSystem/Tank" , "EVBatteryCoolingSystem/Tank" ,
"EVBatteryCoolingSystem/Tank" , "EVBatteryCoolingSystem/Tank" ,
"EVBatteryCoolingSystem/Tank" , "EVBatteryCoolingSystem/Tank" ,
"EVBatteryCoolingSystem/Tank" , "EVBatteryCoolingSystem/Tank" ,
"EVBatteryCoolingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"EVBatteryCoolingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"EVBatteryCoolingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"EVBatteryCoolingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"EVBatteryCoolingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"EVBatteryCoolingSystem/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" } ;
static const char_T * rt_LoggedStateNames [ ] = {
 "EVBatteryCoolingSystem.Air_Stream.Simulink_PS_Converter1.outputFiltered_2554500575_0"
, "" , "" , "" , "" ,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Controller.Simulink_PS_Converter.outputFiltered_3800221375_0"
,
"EVBatteryCoolingSystem.Battery.Pack_1.Thermal_Model.Battery_Thermal_Mass.T"
,
"EVBatteryCoolingSystem.Battery.Pack_2.Thermal_Model.Battery_Thermal_Mass.T"
,
"EVBatteryCoolingSystem.Battery.Pack_4.Thermal_Model.Battery_Thermal_Mass.T"
,
"EVBatteryCoolingSystem.Battery.Pack_3.Thermal_Model.Battery_Thermal_Mass.T"
, "EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.C1.v" ,
"EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.Em_table.Qe" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.C1.v" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.Em_table.Qe" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.C1.v" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.Em_table.Qe" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.C1.v" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.Em_table.Qe" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_1.Plate_mass_left.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_1.Plate_mass_right.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_2.Plate_mass_left.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_2.Plate_mass_right.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_3.Plate_mass_left.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_3.Plate_mass_right.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_4.Plate_mass_left.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_4.Plate_mass_right.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L2.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L2.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R2.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R2.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L2.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L2.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.T_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R2.p_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R2.T_I" ,
"EVBatteryCoolingSystem.Controller.Sensors.Ideal_Rotational_Motion_Sensor.phi"
, "EVBatteryCoolingSystem.Tank.T_gas" ,
"EVBatteryCoolingSystem.Tank.T_liquid" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.T_I"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.p_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.p_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.T_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Pipe_TL.p_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Pipe_TL.T_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.T_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.p_I" ,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.T_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.p_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.p_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.T_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_return.p_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_return.T_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.p_I"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.T_I"
, "EVBatteryCoolingSystem.Tank.p_gas" ,
"EVBatteryCoolingSystem.Tank.mass_liquid" ,
"EVBatteryCoolingSystem.Air_flow_rate.A.T" ,
"EVBatteryCoolingSystem.Air_flow_rate.A.p" ,
"EVBatteryCoolingSystem.Air_flow_rate.B.T" ,
"EVBatteryCoolingSystem.Air_flow_rate.B.p" ,
"EVBatteryCoolingSystem.Air_flow_rate.Phi_A" ,
"EVBatteryCoolingSystem.Air_flow_rate.convection_A.ht_I" ,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_1.Battery_to_plate_conduction_left.Q"
,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_1.Battery_to_plate_conduction_right.Q"
,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_2.Battery_to_plate_conduction_left.Q"
,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_2.Battery_to_plate_conduction_right.Q"
,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_3.Battery_to_plate_conduction_left.Q"
,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_3.Battery_to_plate_conduction_right.Q"
,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_4.Battery_to_plate_conduction_left.Q"
,
 "EVBatteryCoolingSystem.Cold_Plate.Cooling_Plate_Pack_4.Battery_to_plate_conduction_right.Q"
, "EVBatteryCoolingSystem.Battery.Pack_1.Controlled_Voltage_Source.n.v" ,
"EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.C1.p.v" ,
"EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.Em_table.v" ,
"EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.C1.SOC" ,
"EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.R1.i" ,
"EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.Em_table.C" ,
"EVBatteryCoolingSystem.Battery.Pack_1.Thermal_Model.Battery_Thermal_Mass.Q"
, "EVBatteryCoolingSystem.Battery.Pack_1.Lithium_Cell_1RC.PS_Add.I2" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Controlled_Voltage_Source.n.v" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.Em_table.v" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.R0.v" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.C1.SOC" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.R1.i" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.Em_table.C" ,
"EVBatteryCoolingSystem.Battery.Pack_2.Thermal_Model.Battery_Thermal_Mass.Q"
, "EVBatteryCoolingSystem.Battery.Pack_2.Lithium_Cell_1RC.PS_Add.I2" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Controlled_Voltage_Source.n.v" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.Em_table.v" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.R0.v" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.C1.SOC" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.R1.i" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.Em_table.C" ,
"EVBatteryCoolingSystem.Battery.Pack_3.Thermal_Model.Battery_Thermal_Mass.Q"
, "EVBatteryCoolingSystem.Battery.Pack_3.Lithium_Cell_1RC.PS_Add.I2" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.Em_table.v" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.R0.v" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.C1.SOC" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.R1.i" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.Em_table.C" ,
"EVBatteryCoolingSystem.Battery.Pack_4.Thermal_Model.Battery_Thermal_Mass.Q"
, "EVBatteryCoolingSystem.Battery.Pack_4.Lithium_Cell_1RC.PS_Add.I2" ,
"EVBatteryCoolingSystem.Cap_G.A.T" , "EVBatteryCoolingSystem.Cap_G.A.p" ,
"EVBatteryCoolingSystem.Cap_G1.A.T" , "EVBatteryCoolingSystem.Cap_G1.A.p" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.C.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.Phi_A" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.Phi_B" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.Phi_C" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.convection_A.T"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.convection_A.mdot"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.convection_A.u_I"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.convection_B.T"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.convection_B.mdot"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.convection_C.T"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.convection_C.mdot"
, "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL.rho_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.C.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.Phi_A" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.Phi_B" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.Phi_C" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.convection_A.T"
,
 "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.convection_A.mdot"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.convection_A.u_I"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.convection_B.T"
,
 "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.convection_B.mdot"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.convection_C.T"
,
 "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.convection_C.mdot"
, "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL1.rho_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.C.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.Phi_B" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.Phi_B" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.Phi_B" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.Phi_C" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.convection_A.T"
, "EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.convection_B.mdot" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.convection_B.mdot" ,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.convection_A.u_I"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.convection_B.T"
,
 "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.convection_B.mdot"
,
"EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.convection_C.T"
,
 "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.convection_C.mdot"
, "EVBatteryCoolingSystem.Cold_Plate.Constant_Volume_Chamber_TL2.rho_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L2.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L2.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R2.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R2.Q_H" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.B.p" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.Phi_B" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.convection_B.mdot" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L1.convection_B.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L2.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L2.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L2.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_L2.convection_B.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.B.p" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.Phi_B" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.convection_B.mdot" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R1.convection_B.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R2.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R2.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R2.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_in_R2.convection_B.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.A.p" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.Phi_A" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.convection_A.mdot" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L1.convection_B.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L2.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L2.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L2.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_L2.convection_B.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.A.p" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.Phi_A" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.convection_A.mdot" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R1.convection_B.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R2.convection_A.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R2.convection_A.u_I" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R2.convection_B.T" ,
"EVBatteryCoolingSystem.Cold_Plate.Pipe_out_R2.convection_B.u_I" ,
"EVBatteryCoolingSystem.Controller.Ideal_Angular_Velocity_Source.t" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.A2.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.A2.p" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.B1.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.B1.p" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.B2.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.B.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.C.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.D.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_A"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_B"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_C"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.Phi_D"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_A.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_A.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_B.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_B.mdot"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_C.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_C.mdot"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_D.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.convection_D.mdot"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Constant_Volume_Chamber_TL.rho_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.B.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.B.p" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.H.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.Phi_A" ,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Mass_Energy_Flow_Rate_Sensor_TL.PHI"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.Phi_A"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Mass_Energy_Flow_Rate_Sensor_TL.PHI"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.convection_A.mdot"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Heater_Temperature.PS_Subtract.I1"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_A.mdot"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Mass_Energy_Flow_Rate_Sensor_TL.M"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.convection_A.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.convection_A.u_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.convection_B.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Cooling_Inlet.convection_B.u_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.A.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.A.p" ,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Heater_Temperature.PS_Add.I1"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Controlled_Temperature_Source1.Q"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Pipe_TL.convection_A.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Pipe_TL.convection_A.u_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Pipe_TL.convection_B.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Heater.Pipe_TL.convection_B.u_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.A2.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.A2.p" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Perfect_Insulator1.A.T"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Perfect_Insulator2.A.T"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.A2.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.A2.p" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.B2.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.B2.p" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.H.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.mdot_B"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.Phi_B"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.Q_H" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.rho_I" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.rho_in_A"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.gas_1.rho_in_B"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.CP2"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.H2.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.mdot_A"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.mdot_B"
,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.SD"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.heat_transfer.SD_max"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.Phi_A"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.Phi_B"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.T_A"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.T_B"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.rho_A"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.rho_B"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.u_A"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.u_B"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator.thermal_liquid_2.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_A.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_A.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_B.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_inlet.convection_B.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_return.convection_A.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_return.convection_A.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_return.convection_B.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Radiator.Radiator_return.convection_B.u_I"
, "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.A.T" ,
"EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.A.p" ,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Refrigerant_Temperature.PS_Add.I1"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Controlled_Temperature_Source.Q"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_A.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_A.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_B.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.Refrigerant_System.Pipe_TL.convection_B.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL.convection_A.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL.convection_A.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL.convection_B.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL1.convection_A.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL1.convection_A.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL1.convection_B.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL2.convection_A.T"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL2.convection_A.u_I"
,
 "EVBatteryCoolingSystem.Heating_Cooling_Unit.x4_Way_Valve.Variable_Area_Orifice_TL2.convection_B.T"
, "EVBatteryCoolingSystem.Inlet.convection_A.ht_I" ,
"EVBatteryCoolingSystem.Local_Restriction_TL.B.T" ,
"EVBatteryCoolingSystem.Local_Restriction_TL.B.p" ,
"EVBatteryCoolingSystem.Local_Restriction_TL.convection_A.T" ,
"EVBatteryCoolingSystem.Local_Restriction_TL.convection_A.u_I" ,
"EVBatteryCoolingSystem.Local_Restriction_TL.convection_B.T" ,
"EVBatteryCoolingSystem.Local_Restriction_TL.velocity" ,
"EVBatteryCoolingSystem.Local_Restriction_TL1.B.T" ,
"EVBatteryCoolingSystem.Local_Restriction_TL1.B.p" ,
"EVBatteryCoolingSystem.Local_Restriction_TL1.convection_A.T" ,
"EVBatteryCoolingSystem.Local_Restriction_TL1.convection_A.u_I" ,
"EVBatteryCoolingSystem.Local_Restriction_TL1.convection_B.T" ,
"EVBatteryCoolingSystem.Local_Restriction_TL1.velocity" ,
"EVBatteryCoolingSystem.Outlet.convection_A.ht_I" ,
"EVBatteryCoolingSystem.Pump.convection_A.T" ,
"EVBatteryCoolingSystem.Pump.convection_A.u_I" ,
"EVBatteryCoolingSystem.Pump.convection_B.T" ,
"EVBatteryCoolingSystem.Tank.volume_liquid" ,
"EVBatteryCoolingSystem.Tank.convection_A1.ht_I" ,
"EVBatteryCoolingSystem.Tank.convection_A2.T" ,
"EVBatteryCoolingSystem.Tank.convection_A2.u_I" ,
"EVBatteryCoolingSystem.Tank.convection_B1.ht_I" ,
"EVBatteryCoolingSystem.Tank.convection_B2.T" ,
"EVBatteryCoolingSystem.Tank.convection_B2.u_I" ,
"EVBatteryCoolingSystem.Tank.rho_gas" , "Discrete" , "FirstOutput" ,
"Discrete" , "Discrete" , "Discrete" , "FirstOutput" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 0 , 1 , 2 , 3 , 4 ,
5 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 349 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 349 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . lxztuzhhop ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . bq1z1krpn5 ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . iwyoop3u3r ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . env1qqkpbr ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . karozk4fpb ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . fr1u0arkx5 ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . effbkgmtax [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . effbkgmtax [ 1 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . effbkgmtax [ 2 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . effbkgmtax [ 3 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . effbkgmtax [ 4 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . effbkgmtax [ 5 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . effbkgmtax [ 6 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . effbkgmtax [ 7 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . effbkgmtax [ 8 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . effbkgmtax [ 9 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . effbkgmtax [ 10 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . effbkgmtax [ 11 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . effbkgmtax [ 12 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . effbkgmtax [ 13 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . effbkgmtax [ 14 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . effbkgmtax [ 15 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . effbkgmtax [ 16 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . effbkgmtax [ 17 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . effbkgmtax [ 18 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . effbkgmtax [ 19 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . effbkgmtax [ 20 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . effbkgmtax [ 21 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . effbkgmtax [ 22 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . effbkgmtax [ 23 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . effbkgmtax [ 24 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . effbkgmtax [ 25 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . effbkgmtax [ 26 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . effbkgmtax [ 27 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . effbkgmtax [ 28 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . effbkgmtax [ 29 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . effbkgmtax [ 30 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . effbkgmtax [ 31 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . effbkgmtax [ 32 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . effbkgmtax [ 33 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . effbkgmtax [ 34 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . effbkgmtax [ 35 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . effbkgmtax [ 36 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . effbkgmtax [ 37 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . effbkgmtax [ 38 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . effbkgmtax [ 39 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . effbkgmtax [ 40 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . effbkgmtax [ 41 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . effbkgmtax [ 42 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . effbkgmtax [ 43 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . effbkgmtax [ 44 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . effbkgmtax [ 45 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . effbkgmtax [ 46 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . effbkgmtax [ 47 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . effbkgmtax [ 48 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . effbkgmtax [ 49 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . effbkgmtax [ 50 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . effbkgmtax [ 51 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . effbkgmtax [ 52 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . effbkgmtax [ 53 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . effbkgmtax [ 54 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . effbkgmtax [ 55 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtX . effbkgmtax [ 56 ] ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtX . effbkgmtax [ 57 ] ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtX . effbkgmtax [ 58 ] ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtX . effbkgmtax [ 59 ] ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtX . effbkgmtax [ 60 ] ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtX . effbkgmtax [ 61 ] ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtX . effbkgmtax [ 62 ] ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtX . effbkgmtax [ 63 ] ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtX . effbkgmtax [ 64 ] ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtX . effbkgmtax [ 65 ] ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtX . effbkgmtax [ 66 ] ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtX . effbkgmtax [ 67 ] ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtX . effbkgmtax [ 68 ] ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtX . effbkgmtax [ 69 ] ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtX . effbkgmtax [ 70 ] ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtX . effbkgmtax [ 71 ] ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) & rtX . effbkgmtax [ 72 ] ;
rt_LoggedStateSignalPtrs [ 79 ] = ( void * ) & rtX . effbkgmtax [ 73 ] ;
rt_LoggedStateSignalPtrs [ 80 ] = ( void * ) & rtX . effbkgmtax [ 74 ] ;
rt_LoggedStateSignalPtrs [ 81 ] = ( void * ) & rtX . effbkgmtax [ 75 ] ;
rt_LoggedStateSignalPtrs [ 82 ] = ( void * ) & rtX . effbkgmtax [ 76 ] ;
rt_LoggedStateSignalPtrs [ 83 ] = ( void * ) & rtX . effbkgmtax [ 77 ] ;
rt_LoggedStateSignalPtrs [ 84 ] = ( void * ) & rtX . effbkgmtax [ 78 ] ;
rt_LoggedStateSignalPtrs [ 85 ] = ( void * ) & rtX . effbkgmtax [ 79 ] ;
rt_LoggedStateSignalPtrs [ 86 ] = ( void * ) & rtX . effbkgmtax [ 80 ] ;
rt_LoggedStateSignalPtrs [ 87 ] = ( void * ) & rtX . effbkgmtax [ 81 ] ;
rt_LoggedStateSignalPtrs [ 88 ] = ( void * ) & rtX . effbkgmtax [ 82 ] ;
rt_LoggedStateSignalPtrs [ 89 ] = ( void * ) & rtX . effbkgmtax [ 83 ] ;
rt_LoggedStateSignalPtrs [ 90 ] = ( void * ) & rtX . effbkgmtax [ 84 ] ;
rt_LoggedStateSignalPtrs [ 91 ] = ( void * ) & rtX . effbkgmtax [ 85 ] ;
rt_LoggedStateSignalPtrs [ 92 ] = ( void * ) & rtX . effbkgmtax [ 86 ] ;
rt_LoggedStateSignalPtrs [ 93 ] = ( void * ) & rtX . effbkgmtax [ 87 ] ;
rt_LoggedStateSignalPtrs [ 94 ] = ( void * ) & rtX . effbkgmtax [ 88 ] ;
rt_LoggedStateSignalPtrs [ 95 ] = ( void * ) & rtX . effbkgmtax [ 89 ] ;
rt_LoggedStateSignalPtrs [ 96 ] = ( void * ) & rtX . effbkgmtax [ 90 ] ;
rt_LoggedStateSignalPtrs [ 97 ] = ( void * ) & rtX . effbkgmtax [ 91 ] ;
rt_LoggedStateSignalPtrs [ 98 ] = ( void * ) & rtX . effbkgmtax [ 92 ] ;
rt_LoggedStateSignalPtrs [ 99 ] = ( void * ) & rtX . effbkgmtax [ 93 ] ;
rt_LoggedStateSignalPtrs [ 100 ] = ( void * ) & rtX . effbkgmtax [ 94 ] ;
rt_LoggedStateSignalPtrs [ 101 ] = ( void * ) & rtX . effbkgmtax [ 95 ] ;
rt_LoggedStateSignalPtrs [ 102 ] = ( void * ) & rtX . effbkgmtax [ 96 ] ;
rt_LoggedStateSignalPtrs [ 103 ] = ( void * ) & rtX . effbkgmtax [ 97 ] ;
rt_LoggedStateSignalPtrs [ 104 ] = ( void * ) & rtX . effbkgmtax [ 98 ] ;
rt_LoggedStateSignalPtrs [ 105 ] = ( void * ) & rtX . effbkgmtax [ 99 ] ;
rt_LoggedStateSignalPtrs [ 106 ] = ( void * ) & rtX . effbkgmtax [ 100 ] ;
rt_LoggedStateSignalPtrs [ 107 ] = ( void * ) & rtX . effbkgmtax [ 101 ] ;
rt_LoggedStateSignalPtrs [ 108 ] = ( void * ) & rtX . effbkgmtax [ 102 ] ;
rt_LoggedStateSignalPtrs [ 109 ] = ( void * ) & rtX . effbkgmtax [ 103 ] ;
rt_LoggedStateSignalPtrs [ 110 ] = ( void * ) & rtX . effbkgmtax [ 104 ] ;
rt_LoggedStateSignalPtrs [ 111 ] = ( void * ) & rtX . effbkgmtax [ 105 ] ;
rt_LoggedStateSignalPtrs [ 112 ] = ( void * ) & rtX . effbkgmtax [ 106 ] ;
rt_LoggedStateSignalPtrs [ 113 ] = ( void * ) & rtX . effbkgmtax [ 107 ] ;
rt_LoggedStateSignalPtrs [ 114 ] = ( void * ) & rtX . effbkgmtax [ 108 ] ;
rt_LoggedStateSignalPtrs [ 115 ] = ( void * ) & rtX . effbkgmtax [ 109 ] ;
rt_LoggedStateSignalPtrs [ 116 ] = ( void * ) & rtX . effbkgmtax [ 110 ] ;
rt_LoggedStateSignalPtrs [ 117 ] = ( void * ) & rtX . effbkgmtax [ 111 ] ;
rt_LoggedStateSignalPtrs [ 118 ] = ( void * ) & rtX . effbkgmtax [ 112 ] ;
rt_LoggedStateSignalPtrs [ 119 ] = ( void * ) & rtX . effbkgmtax [ 113 ] ;
rt_LoggedStateSignalPtrs [ 120 ] = ( void * ) & rtX . effbkgmtax [ 114 ] ;
rt_LoggedStateSignalPtrs [ 121 ] = ( void * ) & rtX . effbkgmtax [ 115 ] ;
rt_LoggedStateSignalPtrs [ 122 ] = ( void * ) & rtX . effbkgmtax [ 116 ] ;
rt_LoggedStateSignalPtrs [ 123 ] = ( void * ) & rtX . effbkgmtax [ 117 ] ;
rt_LoggedStateSignalPtrs [ 124 ] = ( void * ) & rtX . effbkgmtax [ 118 ] ;
rt_LoggedStateSignalPtrs [ 125 ] = ( void * ) & rtX . effbkgmtax [ 119 ] ;
rt_LoggedStateSignalPtrs [ 126 ] = ( void * ) & rtX . effbkgmtax [ 120 ] ;
rt_LoggedStateSignalPtrs [ 127 ] = ( void * ) & rtX . effbkgmtax [ 121 ] ;
rt_LoggedStateSignalPtrs [ 128 ] = ( void * ) & rtX . effbkgmtax [ 122 ] ;
rt_LoggedStateSignalPtrs [ 129 ] = ( void * ) & rtX . effbkgmtax [ 123 ] ;
rt_LoggedStateSignalPtrs [ 130 ] = ( void * ) & rtX . effbkgmtax [ 124 ] ;
rt_LoggedStateSignalPtrs [ 131 ] = ( void * ) & rtX . effbkgmtax [ 125 ] ;
rt_LoggedStateSignalPtrs [ 132 ] = ( void * ) & rtX . effbkgmtax [ 126 ] ;
rt_LoggedStateSignalPtrs [ 133 ] = ( void * ) & rtX . effbkgmtax [ 127 ] ;
rt_LoggedStateSignalPtrs [ 134 ] = ( void * ) & rtX . effbkgmtax [ 128 ] ;
rt_LoggedStateSignalPtrs [ 135 ] = ( void * ) & rtX . effbkgmtax [ 129 ] ;
rt_LoggedStateSignalPtrs [ 136 ] = ( void * ) & rtX . effbkgmtax [ 130 ] ;
rt_LoggedStateSignalPtrs [ 137 ] = ( void * ) & rtX . effbkgmtax [ 131 ] ;
rt_LoggedStateSignalPtrs [ 138 ] = ( void * ) & rtX . effbkgmtax [ 132 ] ;
rt_LoggedStateSignalPtrs [ 139 ] = ( void * ) & rtX . effbkgmtax [ 133 ] ;
rt_LoggedStateSignalPtrs [ 140 ] = ( void * ) & rtX . effbkgmtax [ 134 ] ;
rt_LoggedStateSignalPtrs [ 141 ] = ( void * ) & rtX . effbkgmtax [ 135 ] ;
rt_LoggedStateSignalPtrs [ 142 ] = ( void * ) & rtX . effbkgmtax [ 136 ] ;
rt_LoggedStateSignalPtrs [ 143 ] = ( void * ) & rtX . effbkgmtax [ 137 ] ;
rt_LoggedStateSignalPtrs [ 144 ] = ( void * ) & rtX . effbkgmtax [ 138 ] ;
rt_LoggedStateSignalPtrs [ 145 ] = ( void * ) & rtX . effbkgmtax [ 139 ] ;
rt_LoggedStateSignalPtrs [ 146 ] = ( void * ) & rtX . effbkgmtax [ 140 ] ;
rt_LoggedStateSignalPtrs [ 147 ] = ( void * ) & rtX . effbkgmtax [ 141 ] ;
rt_LoggedStateSignalPtrs [ 148 ] = ( void * ) & rtX . effbkgmtax [ 142 ] ;
rt_LoggedStateSignalPtrs [ 149 ] = ( void * ) & rtX . effbkgmtax [ 143 ] ;
rt_LoggedStateSignalPtrs [ 150 ] = ( void * ) & rtX . effbkgmtax [ 144 ] ;
rt_LoggedStateSignalPtrs [ 151 ] = ( void * ) & rtX . effbkgmtax [ 145 ] ;
rt_LoggedStateSignalPtrs [ 152 ] = ( void * ) & rtX . effbkgmtax [ 146 ] ;
rt_LoggedStateSignalPtrs [ 153 ] = ( void * ) & rtX . effbkgmtax [ 147 ] ;
rt_LoggedStateSignalPtrs [ 154 ] = ( void * ) & rtX . effbkgmtax [ 148 ] ;
rt_LoggedStateSignalPtrs [ 155 ] = ( void * ) & rtX . effbkgmtax [ 149 ] ;
rt_LoggedStateSignalPtrs [ 156 ] = ( void * ) & rtX . effbkgmtax [ 150 ] ;
rt_LoggedStateSignalPtrs [ 157 ] = ( void * ) & rtX . effbkgmtax [ 151 ] ;
rt_LoggedStateSignalPtrs [ 158 ] = ( void * ) & rtX . effbkgmtax [ 152 ] ;
rt_LoggedStateSignalPtrs [ 159 ] = ( void * ) & rtX . effbkgmtax [ 153 ] ;
rt_LoggedStateSignalPtrs [ 160 ] = ( void * ) & rtX . effbkgmtax [ 154 ] ;
rt_LoggedStateSignalPtrs [ 161 ] = ( void * ) & rtX . effbkgmtax [ 155 ] ;
rt_LoggedStateSignalPtrs [ 162 ] = ( void * ) & rtX . effbkgmtax [ 156 ] ;
rt_LoggedStateSignalPtrs [ 163 ] = ( void * ) & rtX . effbkgmtax [ 157 ] ;
rt_LoggedStateSignalPtrs [ 164 ] = ( void * ) & rtX . effbkgmtax [ 158 ] ;
rt_LoggedStateSignalPtrs [ 165 ] = ( void * ) & rtX . effbkgmtax [ 159 ] ;
rt_LoggedStateSignalPtrs [ 166 ] = ( void * ) & rtX . effbkgmtax [ 160 ] ;
rt_LoggedStateSignalPtrs [ 167 ] = ( void * ) & rtX . effbkgmtax [ 161 ] ;
rt_LoggedStateSignalPtrs [ 168 ] = ( void * ) & rtX . effbkgmtax [ 162 ] ;
rt_LoggedStateSignalPtrs [ 169 ] = ( void * ) & rtX . effbkgmtax [ 163 ] ;
rt_LoggedStateSignalPtrs [ 170 ] = ( void * ) & rtX . effbkgmtax [ 164 ] ;
rt_LoggedStateSignalPtrs [ 171 ] = ( void * ) & rtX . effbkgmtax [ 165 ] ;
rt_LoggedStateSignalPtrs [ 172 ] = ( void * ) & rtX . effbkgmtax [ 166 ] ;
rt_LoggedStateSignalPtrs [ 173 ] = ( void * ) & rtX . effbkgmtax [ 167 ] ;
rt_LoggedStateSignalPtrs [ 174 ] = ( void * ) & rtX . effbkgmtax [ 168 ] ;
rt_LoggedStateSignalPtrs [ 175 ] = ( void * ) & rtX . effbkgmtax [ 169 ] ;
rt_LoggedStateSignalPtrs [ 176 ] = ( void * ) & rtX . effbkgmtax [ 170 ] ;
rt_LoggedStateSignalPtrs [ 177 ] = ( void * ) & rtX . effbkgmtax [ 171 ] ;
rt_LoggedStateSignalPtrs [ 178 ] = ( void * ) & rtX . effbkgmtax [ 172 ] ;
rt_LoggedStateSignalPtrs [ 179 ] = ( void * ) & rtX . effbkgmtax [ 173 ] ;
rt_LoggedStateSignalPtrs [ 180 ] = ( void * ) & rtX . effbkgmtax [ 174 ] ;
rt_LoggedStateSignalPtrs [ 181 ] = ( void * ) & rtX . effbkgmtax [ 175 ] ;
rt_LoggedStateSignalPtrs [ 182 ] = ( void * ) & rtX . effbkgmtax [ 176 ] ;
rt_LoggedStateSignalPtrs [ 183 ] = ( void * ) & rtX . effbkgmtax [ 177 ] ;
rt_LoggedStateSignalPtrs [ 184 ] = ( void * ) & rtX . effbkgmtax [ 178 ] ;
rt_LoggedStateSignalPtrs [ 185 ] = ( void * ) & rtX . effbkgmtax [ 179 ] ;
rt_LoggedStateSignalPtrs [ 186 ] = ( void * ) & rtX . effbkgmtax [ 180 ] ;
rt_LoggedStateSignalPtrs [ 187 ] = ( void * ) & rtX . effbkgmtax [ 181 ] ;
rt_LoggedStateSignalPtrs [ 188 ] = ( void * ) & rtX . effbkgmtax [ 182 ] ;
rt_LoggedStateSignalPtrs [ 189 ] = ( void * ) & rtX . effbkgmtax [ 183 ] ;
rt_LoggedStateSignalPtrs [ 190 ] = ( void * ) & rtX . effbkgmtax [ 184 ] ;
rt_LoggedStateSignalPtrs [ 191 ] = ( void * ) & rtX . effbkgmtax [ 185 ] ;
rt_LoggedStateSignalPtrs [ 192 ] = ( void * ) & rtX . effbkgmtax [ 186 ] ;
rt_LoggedStateSignalPtrs [ 193 ] = ( void * ) & rtX . effbkgmtax [ 187 ] ;
rt_LoggedStateSignalPtrs [ 194 ] = ( void * ) & rtX . effbkgmtax [ 188 ] ;
rt_LoggedStateSignalPtrs [ 195 ] = ( void * ) & rtX . effbkgmtax [ 189 ] ;
rt_LoggedStateSignalPtrs [ 196 ] = ( void * ) & rtX . effbkgmtax [ 190 ] ;
rt_LoggedStateSignalPtrs [ 197 ] = ( void * ) & rtX . effbkgmtax [ 191 ] ;
rt_LoggedStateSignalPtrs [ 198 ] = ( void * ) & rtX . effbkgmtax [ 192 ] ;
rt_LoggedStateSignalPtrs [ 199 ] = ( void * ) & rtX . effbkgmtax [ 193 ] ;
rt_LoggedStateSignalPtrs [ 200 ] = ( void * ) & rtX . effbkgmtax [ 194 ] ;
rt_LoggedStateSignalPtrs [ 201 ] = ( void * ) & rtX . effbkgmtax [ 195 ] ;
rt_LoggedStateSignalPtrs [ 202 ] = ( void * ) & rtX . effbkgmtax [ 196 ] ;
rt_LoggedStateSignalPtrs [ 203 ] = ( void * ) & rtX . effbkgmtax [ 197 ] ;
rt_LoggedStateSignalPtrs [ 204 ] = ( void * ) & rtX . effbkgmtax [ 198 ] ;
rt_LoggedStateSignalPtrs [ 205 ] = ( void * ) & rtX . effbkgmtax [ 199 ] ;
rt_LoggedStateSignalPtrs [ 206 ] = ( void * ) & rtX . effbkgmtax [ 200 ] ;
rt_LoggedStateSignalPtrs [ 207 ] = ( void * ) & rtX . effbkgmtax [ 201 ] ;
rt_LoggedStateSignalPtrs [ 208 ] = ( void * ) & rtX . effbkgmtax [ 202 ] ;
rt_LoggedStateSignalPtrs [ 209 ] = ( void * ) & rtX . effbkgmtax [ 203 ] ;
rt_LoggedStateSignalPtrs [ 210 ] = ( void * ) & rtX . effbkgmtax [ 204 ] ;
rt_LoggedStateSignalPtrs [ 211 ] = ( void * ) & rtX . effbkgmtax [ 205 ] ;
rt_LoggedStateSignalPtrs [ 212 ] = ( void * ) & rtX . effbkgmtax [ 206 ] ;
rt_LoggedStateSignalPtrs [ 213 ] = ( void * ) & rtX . effbkgmtax [ 207 ] ;
rt_LoggedStateSignalPtrs [ 214 ] = ( void * ) & rtX . effbkgmtax [ 208 ] ;
rt_LoggedStateSignalPtrs [ 215 ] = ( void * ) & rtX . effbkgmtax [ 209 ] ;
rt_LoggedStateSignalPtrs [ 216 ] = ( void * ) & rtX . effbkgmtax [ 210 ] ;
rt_LoggedStateSignalPtrs [ 217 ] = ( void * ) & rtX . effbkgmtax [ 211 ] ;
rt_LoggedStateSignalPtrs [ 218 ] = ( void * ) & rtX . effbkgmtax [ 212 ] ;
rt_LoggedStateSignalPtrs [ 219 ] = ( void * ) & rtX . effbkgmtax [ 213 ] ;
rt_LoggedStateSignalPtrs [ 220 ] = ( void * ) & rtX . effbkgmtax [ 214 ] ;
rt_LoggedStateSignalPtrs [ 221 ] = ( void * ) & rtX . effbkgmtax [ 215 ] ;
rt_LoggedStateSignalPtrs [ 222 ] = ( void * ) & rtX . effbkgmtax [ 216 ] ;
rt_LoggedStateSignalPtrs [ 223 ] = ( void * ) & rtX . effbkgmtax [ 217 ] ;
rt_LoggedStateSignalPtrs [ 224 ] = ( void * ) & rtX . effbkgmtax [ 218 ] ;
rt_LoggedStateSignalPtrs [ 225 ] = ( void * ) & rtX . effbkgmtax [ 219 ] ;
rt_LoggedStateSignalPtrs [ 226 ] = ( void * ) & rtX . effbkgmtax [ 220 ] ;
rt_LoggedStateSignalPtrs [ 227 ] = ( void * ) & rtX . effbkgmtax [ 221 ] ;
rt_LoggedStateSignalPtrs [ 228 ] = ( void * ) & rtX . effbkgmtax [ 222 ] ;
rt_LoggedStateSignalPtrs [ 229 ] = ( void * ) & rtX . effbkgmtax [ 223 ] ;
rt_LoggedStateSignalPtrs [ 230 ] = ( void * ) & rtX . effbkgmtax [ 224 ] ;
rt_LoggedStateSignalPtrs [ 231 ] = ( void * ) & rtX . effbkgmtax [ 225 ] ;
rt_LoggedStateSignalPtrs [ 232 ] = ( void * ) & rtX . effbkgmtax [ 226 ] ;
rt_LoggedStateSignalPtrs [ 233 ] = ( void * ) & rtX . effbkgmtax [ 227 ] ;
rt_LoggedStateSignalPtrs [ 234 ] = ( void * ) & rtX . effbkgmtax [ 228 ] ;
rt_LoggedStateSignalPtrs [ 235 ] = ( void * ) & rtX . effbkgmtax [ 229 ] ;
rt_LoggedStateSignalPtrs [ 236 ] = ( void * ) & rtX . effbkgmtax [ 230 ] ;
rt_LoggedStateSignalPtrs [ 237 ] = ( void * ) & rtX . effbkgmtax [ 231 ] ;
rt_LoggedStateSignalPtrs [ 238 ] = ( void * ) & rtX . effbkgmtax [ 232 ] ;
rt_LoggedStateSignalPtrs [ 239 ] = ( void * ) & rtX . effbkgmtax [ 233 ] ;
rt_LoggedStateSignalPtrs [ 240 ] = ( void * ) & rtX . effbkgmtax [ 234 ] ;
rt_LoggedStateSignalPtrs [ 241 ] = ( void * ) & rtX . effbkgmtax [ 235 ] ;
rt_LoggedStateSignalPtrs [ 242 ] = ( void * ) & rtX . effbkgmtax [ 236 ] ;
rt_LoggedStateSignalPtrs [ 243 ] = ( void * ) & rtX . effbkgmtax [ 237 ] ;
rt_LoggedStateSignalPtrs [ 244 ] = ( void * ) & rtX . effbkgmtax [ 238 ] ;
rt_LoggedStateSignalPtrs [ 245 ] = ( void * ) & rtX . effbkgmtax [ 239 ] ;
rt_LoggedStateSignalPtrs [ 246 ] = ( void * ) & rtX . effbkgmtax [ 240 ] ;
rt_LoggedStateSignalPtrs [ 247 ] = ( void * ) & rtX . effbkgmtax [ 241 ] ;
rt_LoggedStateSignalPtrs [ 248 ] = ( void * ) & rtX . effbkgmtax [ 242 ] ;
rt_LoggedStateSignalPtrs [ 249 ] = ( void * ) & rtX . effbkgmtax [ 243 ] ;
rt_LoggedStateSignalPtrs [ 250 ] = ( void * ) & rtX . effbkgmtax [ 244 ] ;
rt_LoggedStateSignalPtrs [ 251 ] = ( void * ) & rtX . effbkgmtax [ 245 ] ;
rt_LoggedStateSignalPtrs [ 252 ] = ( void * ) & rtX . effbkgmtax [ 246 ] ;
rt_LoggedStateSignalPtrs [ 253 ] = ( void * ) & rtX . effbkgmtax [ 247 ] ;
rt_LoggedStateSignalPtrs [ 254 ] = ( void * ) & rtX . effbkgmtax [ 248 ] ;
rt_LoggedStateSignalPtrs [ 255 ] = ( void * ) & rtX . effbkgmtax [ 249 ] ;
rt_LoggedStateSignalPtrs [ 256 ] = ( void * ) & rtX . effbkgmtax [ 250 ] ;
rt_LoggedStateSignalPtrs [ 257 ] = ( void * ) & rtX . effbkgmtax [ 251 ] ;
rt_LoggedStateSignalPtrs [ 258 ] = ( void * ) & rtX . effbkgmtax [ 252 ] ;
rt_LoggedStateSignalPtrs [ 259 ] = ( void * ) & rtX . effbkgmtax [ 253 ] ;
rt_LoggedStateSignalPtrs [ 260 ] = ( void * ) & rtX . effbkgmtax [ 254 ] ;
rt_LoggedStateSignalPtrs [ 261 ] = ( void * ) & rtX . effbkgmtax [ 255 ] ;
rt_LoggedStateSignalPtrs [ 262 ] = ( void * ) & rtX . effbkgmtax [ 256 ] ;
rt_LoggedStateSignalPtrs [ 263 ] = ( void * ) & rtX . effbkgmtax [ 257 ] ;
rt_LoggedStateSignalPtrs [ 264 ] = ( void * ) & rtX . effbkgmtax [ 258 ] ;
rt_LoggedStateSignalPtrs [ 265 ] = ( void * ) & rtX . effbkgmtax [ 259 ] ;
rt_LoggedStateSignalPtrs [ 266 ] = ( void * ) & rtX . effbkgmtax [ 260 ] ;
rt_LoggedStateSignalPtrs [ 267 ] = ( void * ) & rtX . effbkgmtax [ 261 ] ;
rt_LoggedStateSignalPtrs [ 268 ] = ( void * ) & rtX . effbkgmtax [ 262 ] ;
rt_LoggedStateSignalPtrs [ 269 ] = ( void * ) & rtX . effbkgmtax [ 263 ] ;
rt_LoggedStateSignalPtrs [ 270 ] = ( void * ) & rtX . effbkgmtax [ 264 ] ;
rt_LoggedStateSignalPtrs [ 271 ] = ( void * ) & rtX . effbkgmtax [ 265 ] ;
rt_LoggedStateSignalPtrs [ 272 ] = ( void * ) & rtX . effbkgmtax [ 266 ] ;
rt_LoggedStateSignalPtrs [ 273 ] = ( void * ) & rtX . effbkgmtax [ 267 ] ;
rt_LoggedStateSignalPtrs [ 274 ] = ( void * ) & rtX . effbkgmtax [ 268 ] ;
rt_LoggedStateSignalPtrs [ 275 ] = ( void * ) & rtX . effbkgmtax [ 269 ] ;
rt_LoggedStateSignalPtrs [ 276 ] = ( void * ) & rtX . effbkgmtax [ 270 ] ;
rt_LoggedStateSignalPtrs [ 277 ] = ( void * ) & rtX . effbkgmtax [ 271 ] ;
rt_LoggedStateSignalPtrs [ 278 ] = ( void * ) & rtX . effbkgmtax [ 272 ] ;
rt_LoggedStateSignalPtrs [ 279 ] = ( void * ) & rtX . effbkgmtax [ 273 ] ;
rt_LoggedStateSignalPtrs [ 280 ] = ( void * ) & rtX . effbkgmtax [ 274 ] ;
rt_LoggedStateSignalPtrs [ 281 ] = ( void * ) & rtX . effbkgmtax [ 275 ] ;
rt_LoggedStateSignalPtrs [ 282 ] = ( void * ) & rtX . effbkgmtax [ 276 ] ;
rt_LoggedStateSignalPtrs [ 283 ] = ( void * ) & rtX . effbkgmtax [ 277 ] ;
rt_LoggedStateSignalPtrs [ 284 ] = ( void * ) & rtX . effbkgmtax [ 278 ] ;
rt_LoggedStateSignalPtrs [ 285 ] = ( void * ) & rtX . effbkgmtax [ 279 ] ;
rt_LoggedStateSignalPtrs [ 286 ] = ( void * ) & rtX . effbkgmtax [ 280 ] ;
rt_LoggedStateSignalPtrs [ 287 ] = ( void * ) & rtX . effbkgmtax [ 281 ] ;
rt_LoggedStateSignalPtrs [ 288 ] = ( void * ) & rtX . effbkgmtax [ 282 ] ;
rt_LoggedStateSignalPtrs [ 289 ] = ( void * ) & rtX . effbkgmtax [ 283 ] ;
rt_LoggedStateSignalPtrs [ 290 ] = ( void * ) & rtX . effbkgmtax [ 284 ] ;
rt_LoggedStateSignalPtrs [ 291 ] = ( void * ) & rtX . effbkgmtax [ 285 ] ;
rt_LoggedStateSignalPtrs [ 292 ] = ( void * ) & rtX . effbkgmtax [ 286 ] ;
rt_LoggedStateSignalPtrs [ 293 ] = ( void * ) & rtX . effbkgmtax [ 287 ] ;
rt_LoggedStateSignalPtrs [ 294 ] = ( void * ) & rtX . effbkgmtax [ 288 ] ;
rt_LoggedStateSignalPtrs [ 295 ] = ( void * ) & rtX . effbkgmtax [ 289 ] ;
rt_LoggedStateSignalPtrs [ 296 ] = ( void * ) & rtX . effbkgmtax [ 290 ] ;
rt_LoggedStateSignalPtrs [ 297 ] = ( void * ) & rtX . effbkgmtax [ 291 ] ;
rt_LoggedStateSignalPtrs [ 298 ] = ( void * ) & rtX . effbkgmtax [ 292 ] ;
rt_LoggedStateSignalPtrs [ 299 ] = ( void * ) & rtX . effbkgmtax [ 293 ] ;
rt_LoggedStateSignalPtrs [ 300 ] = ( void * ) & rtX . effbkgmtax [ 294 ] ;
rt_LoggedStateSignalPtrs [ 301 ] = ( void * ) & rtX . effbkgmtax [ 295 ] ;
rt_LoggedStateSignalPtrs [ 302 ] = ( void * ) & rtX . effbkgmtax [ 296 ] ;
rt_LoggedStateSignalPtrs [ 303 ] = ( void * ) & rtX . effbkgmtax [ 297 ] ;
rt_LoggedStateSignalPtrs [ 304 ] = ( void * ) & rtX . effbkgmtax [ 298 ] ;
rt_LoggedStateSignalPtrs [ 305 ] = ( void * ) & rtX . effbkgmtax [ 299 ] ;
rt_LoggedStateSignalPtrs [ 306 ] = ( void * ) & rtX . effbkgmtax [ 300 ] ;
rt_LoggedStateSignalPtrs [ 307 ] = ( void * ) & rtX . effbkgmtax [ 301 ] ;
rt_LoggedStateSignalPtrs [ 308 ] = ( void * ) & rtX . effbkgmtax [ 302 ] ;
rt_LoggedStateSignalPtrs [ 309 ] = ( void * ) & rtX . effbkgmtax [ 303 ] ;
rt_LoggedStateSignalPtrs [ 310 ] = ( void * ) & rtX . effbkgmtax [ 304 ] ;
rt_LoggedStateSignalPtrs [ 311 ] = ( void * ) & rtX . effbkgmtax [ 305 ] ;
rt_LoggedStateSignalPtrs [ 312 ] = ( void * ) & rtX . effbkgmtax [ 306 ] ;
rt_LoggedStateSignalPtrs [ 313 ] = ( void * ) & rtX . effbkgmtax [ 307 ] ;
rt_LoggedStateSignalPtrs [ 314 ] = ( void * ) & rtX . effbkgmtax [ 308 ] ;
rt_LoggedStateSignalPtrs [ 315 ] = ( void * ) & rtX . effbkgmtax [ 309 ] ;
rt_LoggedStateSignalPtrs [ 316 ] = ( void * ) & rtX . effbkgmtax [ 310 ] ;
rt_LoggedStateSignalPtrs [ 317 ] = ( void * ) & rtX . effbkgmtax [ 311 ] ;
rt_LoggedStateSignalPtrs [ 318 ] = ( void * ) & rtX . effbkgmtax [ 312 ] ;
rt_LoggedStateSignalPtrs [ 319 ] = ( void * ) & rtX . effbkgmtax [ 313 ] ;
rt_LoggedStateSignalPtrs [ 320 ] = ( void * ) & rtX . effbkgmtax [ 314 ] ;
rt_LoggedStateSignalPtrs [ 321 ] = ( void * ) & rtX . effbkgmtax [ 315 ] ;
rt_LoggedStateSignalPtrs [ 322 ] = ( void * ) & rtX . effbkgmtax [ 316 ] ;
rt_LoggedStateSignalPtrs [ 323 ] = ( void * ) & rtX . effbkgmtax [ 317 ] ;
rt_LoggedStateSignalPtrs [ 324 ] = ( void * ) & rtX . effbkgmtax [ 318 ] ;
rt_LoggedStateSignalPtrs [ 325 ] = ( void * ) & rtX . effbkgmtax [ 319 ] ;
rt_LoggedStateSignalPtrs [ 326 ] = ( void * ) & rtX . effbkgmtax [ 320 ] ;
rt_LoggedStateSignalPtrs [ 327 ] = ( void * ) & rtX . effbkgmtax [ 321 ] ;
rt_LoggedStateSignalPtrs [ 328 ] = ( void * ) & rtX . effbkgmtax [ 322 ] ;
rt_LoggedStateSignalPtrs [ 329 ] = ( void * ) & rtX . effbkgmtax [ 323 ] ;
rt_LoggedStateSignalPtrs [ 330 ] = ( void * ) & rtX . effbkgmtax [ 324 ] ;
rt_LoggedStateSignalPtrs [ 331 ] = ( void * ) & rtX . effbkgmtax [ 325 ] ;
rt_LoggedStateSignalPtrs [ 332 ] = ( void * ) & rtX . effbkgmtax [ 326 ] ;
rt_LoggedStateSignalPtrs [ 333 ] = ( void * ) & rtX . effbkgmtax [ 327 ] ;
rt_LoggedStateSignalPtrs [ 334 ] = ( void * ) & rtX . effbkgmtax [ 328 ] ;
rt_LoggedStateSignalPtrs [ 335 ] = ( void * ) & rtX . effbkgmtax [ 329 ] ;
rt_LoggedStateSignalPtrs [ 336 ] = ( void * ) & rtX . effbkgmtax [ 330 ] ;
rt_LoggedStateSignalPtrs [ 337 ] = ( void * ) & rtX . effbkgmtax [ 331 ] ;
rt_LoggedStateSignalPtrs [ 338 ] = ( void * ) & rtX . effbkgmtax [ 332 ] ;
rt_LoggedStateSignalPtrs [ 339 ] = ( void * ) & rtX . effbkgmtax [ 333 ] ;
rt_LoggedStateSignalPtrs [ 340 ] = ( void * ) & rtX . effbkgmtax [ 334 ] ;
rt_LoggedStateSignalPtrs [ 341 ] = ( void * ) & rtX . effbkgmtax [ 335 ] ;
rt_LoggedStateSignalPtrs [ 342 ] = ( void * ) & rtX . effbkgmtax [ 336 ] ;
rt_LoggedStateSignalPtrs [ 343 ] = ( void * ) & rtDW . medpwyauzm ;
rt_LoggedStateSignalPtrs [ 344 ] = ( void * ) & rtDW . of51ysnuoh ;
rt_LoggedStateSignalPtrs [ 345 ] = ( void * ) rtDW . ksimmcd4jh ;
rt_LoggedStateSignalPtrs [ 346 ] = ( void * ) rtDW . izuzdb3pa3 ;
rt_LoggedStateSignalPtrs [ 347 ] = ( void * ) & rtDW . gran21d1p5 ;
rt_LoggedStateSignalPtrs [ 348 ] = ( void * ) & rtDW . eztgjvjrnk ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 343 ] ; static real_T absTol [ 343 ] = { 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static
uint8_T absTolControl [ 343 ] = { 2U , 2U , 2U , 2U , 2U , 2U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U } ; static real_T
contStateJacPerturbBoundMinVec [ 343 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 343 ] ; static uint8_T zcAttributes [ 263 ]
= { ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_ALL ) } ; static
uint8_T zcEvents [ 263 ] = { ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL
) , ( 0x40 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
0x40 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 2 ] = {
{ 1 * sizeof ( real_T ) , ( char * ) ( & rtB . cbztcpotvv ) , ( NULL ) } , {
1 * sizeof ( real_T ) , ( char * ) ( & rtB . g5jq2txgex ) , ( NULL ) } } ; {
int i ; for ( i = 0 ; i < 343 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ]
= 0 ; contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } }
ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS ,
49.480000000000004 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
2 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "daessc" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetJacobianPerturbationBoundsMinVec ( rtS ,
contStateJacPerturbBoundMinVec ) ; ssSetJacobianPerturbationBoundsMaxVec (
rtS , contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0
) ; ( void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) )
; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetMassMatrixNzMax ( rtS , 112 ) ; ssSetModelMassMatrix ( rtS ,
MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 112 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 263 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverZcEventsVector ( rtS , zcEvents ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetSolverMaxConsecutiveMinStep
( rtS , 3 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 263 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 3 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 112 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 343 + 1
) * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 112 * sizeof (
real_T ) ) ; } } { ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ;
ssSetPrevZCSigState ( rtS , zc ) ; } { rtPrevZCX . bwh2vkgoku =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ckrdsc4ihl = UNINITIALIZED_ZCSIG ;
rtPrevZCX . b3jlewptym = UNINITIALIZED_ZCSIG ; rtPrevZCX . if0mqrnu3u =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hwv1qf5jc4 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . g0ltkf3mlj = UNINITIALIZED_ZCSIG ; rtPrevZCX . b45n3qoq4s =
UNINITIALIZED_ZCSIG ; rtPrevZCX . dsh05nhd45 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hgdkb3tw5m = UNINITIALIZED_ZCSIG ; rtPrevZCX . iurzbutihl =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ckuj21y4cs = UNINITIALIZED_ZCSIG ;
rtPrevZCX . nqxpwdhimn = UNINITIALIZED_ZCSIG ; rtPrevZCX . pbwrd13qtq =
UNINITIALIZED_ZCSIG ; rtPrevZCX . igyyeuq1mt = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hsr2ssn4ih = UNINITIALIZED_ZCSIG ; rtPrevZCX . a53dt5bixa =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kcuxv2gcbf = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ey1thqxrxf = UNINITIALIZED_ZCSIG ; rtPrevZCX . gluowksmnm =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kht43bgls2 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pytra1rtzm = UNINITIALIZED_ZCSIG ; rtPrevZCX . pwquylptle =
UNINITIALIZED_ZCSIG ; rtPrevZCX . aoyxl3alqb = UNINITIALIZED_ZCSIG ;
rtPrevZCX . mfelqbd5nn = UNINITIALIZED_ZCSIG ; rtPrevZCX . jurm1dmbwj =
UNINITIALIZED_ZCSIG ; rtPrevZCX . e2cvorrtsz = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pjtas01bsa = UNINITIALIZED_ZCSIG ; rtPrevZCX . aubndmamax =
UNINITIALIZED_ZCSIG ; rtPrevZCX . pkcqlrkqoi = UNINITIALIZED_ZCSIG ;
rtPrevZCX . h2jpjwygbe = UNINITIALIZED_ZCSIG ; rtPrevZCX . d3nliyqdgq =
UNINITIALIZED_ZCSIG ; rtPrevZCX . aazgrgwa15 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . gbguakpjdy = UNINITIALIZED_ZCSIG ; rtPrevZCX . fvtcqfrvkx =
UNINITIALIZED_ZCSIG ; rtPrevZCX . opy3cr51xy = UNINITIALIZED_ZCSIG ;
rtPrevZCX . gxv0jyrcdr = UNINITIALIZED_ZCSIG ; rtPrevZCX . i1zcrvodvo =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ledqnu5nk2 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . powlw1xhou = UNINITIALIZED_ZCSIG ; rtPrevZCX . gn04bytgwr =
UNINITIALIZED_ZCSIG ; rtPrevZCX . btyrnghnwm = UNINITIALIZED_ZCSIG ;
rtPrevZCX . phclmq2xan = UNINITIALIZED_ZCSIG ; rtPrevZCX . hrnwlyyjwf =
UNINITIALIZED_ZCSIG ; rtPrevZCX . laefnffsue = UNINITIALIZED_ZCSIG ;
rtPrevZCX . aqspg5a5w2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . ocgbwjlttk =
UNINITIALIZED_ZCSIG ; rtPrevZCX . mcvvrqjwsg = UNINITIALIZED_ZCSIG ;
rtPrevZCX . idsniasdch = UNINITIALIZED_ZCSIG ; rtPrevZCX . lwosewkntd =
UNINITIALIZED_ZCSIG ; rtPrevZCX . f3yq15qroz = UNINITIALIZED_ZCSIG ;
rtPrevZCX . mvillvuasd = UNINITIALIZED_ZCSIG ; rtPrevZCX . g2gdiggbc2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jh53llxmde = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kwiei1rxo3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . lgf3vwxopa =
UNINITIALIZED_ZCSIG ; rtPrevZCX . dct1olrjd1 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . oqumaptgrn = UNINITIALIZED_ZCSIG ; rtPrevZCX . gtlwim32rg =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ou11lypcov = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cagjuscv3w = UNINITIALIZED_ZCSIG ; rtPrevZCX . klcm1yo2nk =
UNINITIALIZED_ZCSIG ; rtPrevZCX . nia44txozv = UNINITIALIZED_ZCSIG ;
rtPrevZCX . g5ndsuzzdn = UNINITIALIZED_ZCSIG ; rtPrevZCX . k2c2y5ejtm =
UNINITIALIZED_ZCSIG ; rtPrevZCX . pephxt3dpe = UNINITIALIZED_ZCSIG ;
rtPrevZCX . prz1yxiajg = UNINITIALIZED_ZCSIG ; rtPrevZCX . icjtzzzl5p =
UNINITIALIZED_ZCSIG ; rtPrevZCX . pf2j5euniz = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bcch3gnxax = UNINITIALIZED_ZCSIG ; rtPrevZCX . jecirsvcpb =
UNINITIALIZED_ZCSIG ; rtPrevZCX . mb25lpfsh3 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . drvgrpn2ki = UNINITIALIZED_ZCSIG ; rtPrevZCX . bfzo2b2sn4 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . pjt2rslcl5 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ia4tytzbmc = UNINITIALIZED_ZCSIG ; rtPrevZCX . i2nvts40uj =
UNINITIALIZED_ZCSIG ; rtPrevZCX . o0wi1nyi0i = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hbvuk11a5f = UNINITIALIZED_ZCSIG ; rtPrevZCX . mgscv5vbn5 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gmqe4m4igj = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hnsczutfeh = UNINITIALIZED_ZCSIG ; rtPrevZCX . a3ehxmxaqj =
UNINITIALIZED_ZCSIG ; rtPrevZCX . lytc0c1ggh = UNINITIALIZED_ZCSIG ;
rtPrevZCX . gmatc0iqge = UNINITIALIZED_ZCSIG ; rtPrevZCX . knvqll2wd0 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kes3ngah2c = UNINITIALIZED_ZCSIG ;
rtPrevZCX . o02x0pfl3d = UNINITIALIZED_ZCSIG ; rtPrevZCX . mpuk4bh4ph =
UNINITIALIZED_ZCSIG ; rtPrevZCX . fevdx0iu13 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bwt3ytwlya = UNINITIALIZED_ZCSIG ; rtPrevZCX . lawq5ilmkq =
UNINITIALIZED_ZCSIG ; rtPrevZCX . pswpibmnuz = UNINITIALIZED_ZCSIG ;
rtPrevZCX . k2jpo3grds = UNINITIALIZED_ZCSIG ; rtPrevZCX . kchjgyo23b =
UNINITIALIZED_ZCSIG ; rtPrevZCX . pepynn5u2i = UNINITIALIZED_ZCSIG ;
rtPrevZCX . m20uxselql = UNINITIALIZED_ZCSIG ; rtPrevZCX . kuradqjn4y =
UNINITIALIZED_ZCSIG ; rtPrevZCX . b0oio3f2e3 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ilgfv1133t = UNINITIALIZED_ZCSIG ; rtPrevZCX . b3fjnwievh =
UNINITIALIZED_ZCSIG ; rtPrevZCX . djapgnpiui = UNINITIALIZED_ZCSIG ;
rtPrevZCX . d41dhrc5kr = UNINITIALIZED_ZCSIG ; rtPrevZCX . dy2hcqovwt =
UNINITIALIZED_ZCSIG ; rtPrevZCX . px5kgnap0h = UNINITIALIZED_ZCSIG ;
rtPrevZCX . gm4x2yh0q1 = UNINITIALIZED_ZCSIG ; rtPrevZCX . hmmi1dwdot =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bqqqzpsibr = UNINITIALIZED_ZCSIG ;
rtPrevZCX . mbkodqutcm = UNINITIALIZED_ZCSIG ; rtPrevZCX . myxc0z1s0t =
UNINITIALIZED_ZCSIG ; rtPrevZCX . advveiyi3l = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bkdg325iz3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . kwihmaw1x2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . p2y2nthyv0 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . e41lkadmrn = UNINITIALIZED_ZCSIG ; rtPrevZCX . kcnakh3le1 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . frw3jcigmf = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hpmsuhhr5k = UNINITIALIZED_ZCSIG ; rtPrevZCX . diw5mawysi =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bz2gi3s1zx = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cbhgewjhbb = UNINITIALIZED_ZCSIG ; rtPrevZCX . ltk3b3j1bi =
UNINITIALIZED_ZCSIG ; rtPrevZCX . g53rnj5cdq = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lapemoq4yi = UNINITIALIZED_ZCSIG ; rtPrevZCX . cpeg5tg4jx =
UNINITIALIZED_ZCSIG ; rtPrevZCX . blx4ljquhj = UNINITIALIZED_ZCSIG ;
rtPrevZCX . p4g21ejm3h = UNINITIALIZED_ZCSIG ; rtPrevZCX . hoywgrbv23 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . mnsmjv1tz1 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kist1hx2b1 = UNINITIALIZED_ZCSIG ; rtPrevZCX . gfengz1j3k =
UNINITIALIZED_ZCSIG ; rtPrevZCX . aplms0ekym = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bu3nwyphxz = UNINITIALIZED_ZCSIG ; rtPrevZCX . oorafridjg =
UNINITIALIZED_ZCSIG ; rtPrevZCX . lqekriujip = UNINITIALIZED_ZCSIG ;
rtPrevZCX . czzves3ejg = UNINITIALIZED_ZCSIG ; rtPrevZCX . hny0fajyuw =
UNINITIALIZED_ZCSIG ; rtPrevZCX . oso2knqyio = UNINITIALIZED_ZCSIG ;
rtPrevZCX . aj2ofpxjsa = UNINITIALIZED_ZCSIG ; rtPrevZCX . lbaufgyt3i =
UNINITIALIZED_ZCSIG ; rtPrevZCX . msaccobpnq = UNINITIALIZED_ZCSIG ;
rtPrevZCX . fsyyjafe1r = UNINITIALIZED_ZCSIG ; rtPrevZCX . aazgarosnf =
UNINITIALIZED_ZCSIG ; rtPrevZCX . dv3zd44kin = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bncbdwwymw = UNINITIALIZED_ZCSIG ; rtPrevZCX . gjclshbnxe =
UNINITIALIZED_ZCSIG ; rtPrevZCX . almkjy5iuh = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cx0x3p3r1t = UNINITIALIZED_ZCSIG ; rtPrevZCX . eyifqes0li =
UNINITIALIZED_ZCSIG ; rtPrevZCX . o5q1wz12zg = UNINITIALIZED_ZCSIG ;
rtPrevZCX . dflo3eaazg = UNINITIALIZED_ZCSIG ; rtPrevZCX . odkkxfadyj =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bn5hv3hpdi = UNINITIALIZED_ZCSIG ;
rtPrevZCX . dkdp2x3con = UNINITIALIZED_ZCSIG ; rtPrevZCX . fnnd41wv1a =
UNINITIALIZED_ZCSIG ; rtPrevZCX . iaaudf21hw = UNINITIALIZED_ZCSIG ;
rtPrevZCX . f5yd2gncap = UNINITIALIZED_ZCSIG ; rtPrevZCX . dmo12iwt5w =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kmkzw12p4m = UNINITIALIZED_ZCSIG ;
rtPrevZCX . dyfzzhmfyf = UNINITIALIZED_ZCSIG ; rtPrevZCX . dreynlhrke =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jw5q5oljxa = UNINITIALIZED_ZCSIG ;
rtPrevZCX . k34iolhy21 = UNINITIALIZED_ZCSIG ; rtPrevZCX . pwmke13udv =
UNINITIALIZED_ZCSIG ; rtPrevZCX . a43qtn21kv = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kfqjh1smwt = UNINITIALIZED_ZCSIG ; rtPrevZCX . auud1by2sc =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kpfq22oxad = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ixh2wiioy4 = UNINITIALIZED_ZCSIG ; rtPrevZCX . bxrb2pb03f =
UNINITIALIZED_ZCSIG ; rtPrevZCX . agzk5eynmn = UNINITIALIZED_ZCSIG ;
rtPrevZCX . iubth3dikj = UNINITIALIZED_ZCSIG ; rtPrevZCX . gyjbwwjamf =
UNINITIALIZED_ZCSIG ; rtPrevZCX . emjczjhin3 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . clwriq0ssl = UNINITIALIZED_ZCSIG ; rtPrevZCX . nrjkqkdqnc =
UNINITIALIZED_ZCSIG ; rtPrevZCX . g5tuh0ostz = UNINITIALIZED_ZCSIG ;
rtPrevZCX . n10wqdhwb1 = UNINITIALIZED_ZCSIG ; rtPrevZCX . md2huweecl =
UNINITIALIZED_ZCSIG ; rtPrevZCX . dqtwxrlsza = UNINITIALIZED_ZCSIG ;
rtPrevZCX . m1mjvhutqn = UNINITIALIZED_ZCSIG ; rtPrevZCX . paqcvpede3 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ba1zd3ivii = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ff4awslcwl = UNINITIALIZED_ZCSIG ; rtPrevZCX . i2inllshk5 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bdobvbeamm = UNINITIALIZED_ZCSIG ;
rtPrevZCX . d1p5zrf1tx = UNINITIALIZED_ZCSIG ; rtPrevZCX . pzgbukyeta =
UNINITIALIZED_ZCSIG ; rtPrevZCX . l4zvj5p40h = UNINITIALIZED_ZCSIG ;
rtPrevZCX . d033ducxvo = UNINITIALIZED_ZCSIG ; rtPrevZCX . eawz3qgp5r =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jzwpiuxteg = UNINITIALIZED_ZCSIG ;
rtPrevZCX . jggxpwduho = UNINITIALIZED_ZCSIG ; rtPrevZCX . lgbvubhycn =
UNINITIALIZED_ZCSIG ; rtPrevZCX . paqki3azn1 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . gbe0wvrf05 = UNINITIALIZED_ZCSIG ; rtPrevZCX . gmrf0iy4us =
UNINITIALIZED_ZCSIG ; rtPrevZCX . m2bwjzcliy = UNINITIALIZED_ZCSIG ;
rtPrevZCX . m3jpjkvmbo = UNINITIALIZED_ZCSIG ; rtPrevZCX . lpkglwjozt =
UNINITIALIZED_ZCSIG ; rtPrevZCX . itra3qf5yh = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lhev4nkhw2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . mkigin5ec1 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . h202zsjfup = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lh3vp1ooa5 = UNINITIALIZED_ZCSIG ; rtPrevZCX . bijecidxst =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jakftzw55w = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kdgsmlrig2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . nislwtvsiu =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hx21izccdc = UNINITIALIZED_ZCSIG ;
rtPrevZCX . axlbidogz5 = UNINITIALIZED_ZCSIG ; rtPrevZCX . fu4xqydtls =
UNINITIALIZED_ZCSIG ; rtPrevZCX . dp4zhdum5z = UNINITIALIZED_ZCSIG ;
rtPrevZCX . fckyt2tess = UNINITIALIZED_ZCSIG ; rtPrevZCX . is1c21pv4b =
UNINITIALIZED_ZCSIG ; rtPrevZCX . nrxg3ao02k = UNINITIALIZED_ZCSIG ;
rtPrevZCX . iifude3b1g = UNINITIALIZED_ZCSIG ; rtPrevZCX . p3wadqwbwl =
UNINITIALIZED_ZCSIG ; rtPrevZCX . accu3uzgc4 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kujucpocmg = UNINITIALIZED_ZCSIG ; rtPrevZCX . frrkiuooe3 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . oy4pd5hmym = UNINITIALIZED_ZCSIG ;
rtPrevZCX . dwl2vak5g3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . dpvrszrw54 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . iig4jk1mnu = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kww5l2oiqw = UNINITIALIZED_ZCSIG ; rtPrevZCX . b5zm1km0jf =
UNINITIALIZED_ZCSIG ; rtPrevZCX . chj3joflwf = UNINITIALIZED_ZCSIG ;
rtPrevZCX . h5oo2cxmnq = UNINITIALIZED_ZCSIG ; rtPrevZCX . mgpadymlui =
UNINITIALIZED_ZCSIG ; rtPrevZCX . iv2w2xdnqf = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bn12yp13yb = UNINITIALIZED_ZCSIG ; rtPrevZCX . fpmbw5xy12 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hlt02gro51 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hknjxwuf4o = UNINITIALIZED_ZCSIG ; rtPrevZCX . pogwl2cazx =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ikonowkhml = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hcjopvbvvz = UNINITIALIZED_ZCSIG ; rtPrevZCX . k4m4jo0mok =
UNINITIALIZED_ZCSIG ; rtPrevZCX . e3gt04czmk = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ktr5oortfx = UNINITIALIZED_ZCSIG ; rtPrevZCX . ged1qoqrr5 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . echuijvcol = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bs1apozscc = UNINITIALIZED_ZCSIG ; rtPrevZCX . np1hzbsund =
UNINITIALIZED_ZCSIG ; rtPrevZCX . oh52qtqsuy = UNINITIALIZED_ZCSIG ;
rtPrevZCX . olghvdhuj5 = UNINITIALIZED_ZCSIG ; rtPrevZCX . eeqpwvxvpd =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jzdfmsxheg = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bn5avbdrub = UNINITIALIZED_ZCSIG ; rtPrevZCX . e4w4gtgzfe =
UNINITIALIZED_ZCSIG ; rtPrevZCX . p4mzepqigv = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ijoypmvv0j = UNINITIALIZED_ZCSIG ; rtPrevZCX . iua4azvgqi =
UNINITIALIZED_ZCSIG ; rtPrevZCX . paocvui35v = UNINITIALIZED_ZCSIG ;
rtPrevZCX . o5pfqsgs1u = UNINITIALIZED_ZCSIG ; rtPrevZCX . eu5325drh0 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gvwo4mbcx2 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cccnklgjn3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . ci53pxlzkm =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ibsmzul2qm = UNINITIALIZED_ZCSIG ; }
ssSetChecksumVal ( rtS , 0 , 2345401999U ) ; ssSetChecksumVal ( rtS , 1 ,
1799780700U ) ; ssSetChecksumVal ( rtS , 2 , 1412942005U ) ; ssSetChecksumVal
( rtS , 3 , 74665851U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 1 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_EVBatteryCoolingSystem_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_EVBatteryCoolingSystem_GetDWork ) ;
slsaSetWorkFcnForSimTargetOP ( rtS , mr_EVBatteryCoolingSystem_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID2 ( tid ) ; }
