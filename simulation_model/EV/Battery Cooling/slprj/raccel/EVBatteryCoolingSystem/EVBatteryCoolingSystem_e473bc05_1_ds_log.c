/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'EVBatteryCoolingSystem/Solver Configuration'.
 */

#include "ne_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_sys_struct.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_log.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_externals.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T EVBatteryCoolingSystem_e473bc05_1_ds_log(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1091, NeDsMethodOutput *t1092)
{
  ETTSf3049b48 ab_efOut;
  ETTSf3049b48 ad_efOut;
  ETTSf3049b48 af_efOut;
  ETTSf3049b48 ag_efOut;
  ETTSf3049b48 ah_efOut;
  ETTSf3049b48 ai_efOut;
  ETTSf3049b48 b_efOut;
  ETTSf3049b48 bb_efOut;
  ETTSf3049b48 bc_efOut;
  ETTSf3049b48 bd_efOut;
  ETTSf3049b48 be_efOut;
  ETTSf3049b48 cc_efOut;
  ETTSf3049b48 ce_efOut;
  ETTSf3049b48 cf_efOut;
  ETTSf3049b48 cg_efOut;
  ETTSf3049b48 ch_efOut;
  ETTSf3049b48 d_efOut;
  ETTSf3049b48 db_efOut;
  ETTSf3049b48 dd_efOut;
  ETTSf3049b48 df_efOut;
  ETTSf3049b48 dg_efOut;
  ETTSf3049b48 e_efOut;
  ETTSf3049b48 ec_efOut;
  ETTSf3049b48 ee_efOut;
  ETTSf3049b48 efOut;
  ETTSf3049b48 eh_efOut;
  ETTSf3049b48 fb_efOut;
  ETTSf3049b48 fd_efOut;
  ETTSf3049b48 fe_efOut;
  ETTSf3049b48 ff_efOut;
  ETTSf3049b48 fg_efOut;
  ETTSf3049b48 g_efOut;
  ETTSf3049b48 gb_efOut;
  ETTSf3049b48 gc_efOut;
  ETTSf3049b48 gd_efOut;
  ETTSf3049b48 gf_efOut;
  ETTSf3049b48 gh_efOut;
  ETTSf3049b48 h_efOut;
  ETTSf3049b48 hc_efOut;
  ETTSf3049b48 hg_efOut;
  ETTSf3049b48 hh_efOut;
  ETTSf3049b48 ib_efOut;
  ETTSf3049b48 ie_efOut;
  ETTSf3049b48 if_efOut;
  ETTSf3049b48 ig_efOut;
  ETTSf3049b48 j_efOut;
  ETTSf3049b48 jb_efOut;
  ETTSf3049b48 jd_efOut;
  ETTSf3049b48 je_efOut;
  ETTSf3049b48 jf_efOut;
  ETTSf3049b48 jh_efOut;
  ETTSf3049b48 k_efOut;
  ETTSf3049b48 kc_efOut;
  ETTSf3049b48 kd_efOut;
  ETTSf3049b48 lc_efOut;
  ETTSf3049b48 le_efOut;
  ETTSf3049b48 lg_efOut;
  ETTSf3049b48 lh_efOut;
  ETTSf3049b48 mb_efOut;
  ETTSf3049b48 md_efOut;
  ETTSf3049b48 me_efOut;
  ETTSf3049b48 mf_efOut;
  ETTSf3049b48 mh_efOut;
  ETTSf3049b48 n_efOut;
  ETTSf3049b48 nb_efOut;
  ETTSf3049b48 nc_efOut;
  ETTSf3049b48 nf_efOut;
  ETTSf3049b48 ng_efOut;
  ETTSf3049b48 o_efOut;
  ETTSf3049b48 oc_efOut;
  ETTSf3049b48 od_efOut;
  ETTSf3049b48 oe_efOut;
  ETTSf3049b48 oh_efOut;
  ETTSf3049b48 pb_efOut;
  ETTSf3049b48 pe_efOut;
  ETTSf3049b48 pf_efOut;
  ETTSf3049b48 pg_efOut;
  ETTSf3049b48 q_efOut;
  ETTSf3049b48 qc_efOut;
  ETTSf3049b48 qd_efOut;
  ETTSf3049b48 qf_efOut;
  ETTSf3049b48 qh_efOut;
  ETTSf3049b48 rb_efOut;
  ETTSf3049b48 rd_efOut;
  ETTSf3049b48 re_efOut;
  ETTSf3049b48 rg_efOut;
  ETTSf3049b48 s_efOut;
  ETTSf3049b48 sc_efOut;
  ETTSf3049b48 se_efOut;
  ETTSf3049b48 sf_efOut;
  ETTSf3049b48 sh_efOut;
  ETTSf3049b48 t101;
  ETTSf3049b48 t106;
  ETTSf3049b48 t108;
  ETTSf3049b48 t109;
  ETTSf3049b48 t112;
  ETTSf3049b48 t113;
  ETTSf3049b48 t53;
  ETTSf3049b48 t69;
  ETTSf3049b48 t70;
  ETTSf3049b48 t71;
  ETTSf3049b48 t72;
  ETTSf3049b48 t83;
  ETTSf3049b48 t89;
  ETTSf3049b48 t97;
  ETTSf3049b48 t_efOut;
  ETTSf3049b48 tb_efOut;
  ETTSf3049b48 tc_efOut;
  ETTSf3049b48 tg_efOut;
  ETTSf3049b48 th_efOut;
  ETTSf3049b48 ub_efOut;
  ETTSf3049b48 ud_efOut;
  ETTSf3049b48 uf_efOut;
  ETTSf3049b48 v_efOut;
  ETTSf3049b48 vd_efOut;
  ETTSf3049b48 ve_efOut;
  ETTSf3049b48 vf_efOut;
  ETTSf3049b48 vg_efOut;
  ETTSf3049b48 vh_efOut;
  ETTSf3049b48 w_efOut;
  ETTSf3049b48 wc_efOut;
  ETTSf3049b48 we_efOut;
  ETTSf3049b48 wh_efOut;
  ETTSf3049b48 xb_efOut;
  ETTSf3049b48 xc_efOut;
  ETTSf3049b48 xd_efOut;
  ETTSf3049b48 xg_efOut;
  ETTSf3049b48 yb_efOut;
  ETTSf3049b48 yd_efOut;
  ETTSf3049b48 ye_efOut;
  ETTSf3049b48 yf_efOut;
  ETTSf3049b48 yh_efOut;
  PmRealVector out;
  real_T t724[1432];
  real_T X[337];
  real_T nonscalar14[4];
  real_T nonscalar15[4];
  real_T nonscalar12[2];
  real_T nonscalar13[2];
  real_T nonscalar16[2];
  real_T nonscalar17[2];
  real_T ac_efOut[1];
  real_T ae_efOut[1];
  real_T bf_efOut[1];
  real_T bg_efOut[1];
  real_T bh_efOut[1];
  real_T bi_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cd_efOut[1];
  real_T ci_efOut[1];
  real_T dc_efOut[1];
  real_T de_efOut[1];
  real_T dh_efOut[1];
  real_T eb_efOut[1];
  real_T ed_efOut[1];
  real_T ef_efOut[1];
  real_T eg_efOut[1];
  real_T f_efOut[1];
  real_T fc_efOut[1];
  real_T fh_efOut[1];
  real_T ge_efOut[1];
  real_T gg_efOut[1];
  real_T hb_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T hf_efOut[1];
  real_T i_efOut[1];
  real_T ic_efOut[1];
  real_T id_efOut[1];
  real_T ih_efOut[1];
  real_T jc_efOut[1];
  real_T jg_efOut[1];
  real_T kb_efOut[1];
  real_T ke_efOut[1];
  real_T kf_efOut[1];
  real_T kg_efOut[1];
  real_T kh_efOut[1];
  real_T l_efOut[1];
  real_T lb_efOut[1];
  real_T ld_efOut[1];
  real_T lf_efOut[1];
  real_T m_efOut[1];
  real_T mc_efOut[1];
  real_T mg_efOut[1];
  real_T nd_efOut[1];
  real_T ne_efOut[1];
  real_T nh_efOut[1];
  real_T ob_efOut[1];
  real_T of_efOut[1];
  real_T og_efOut[1];
  real_T p_efOut[1];
  real_T pc_efOut[1];
  real_T pd_efOut[1];
  real_T ph_efOut[1];
  real_T qb_efOut[1];
  real_T qe_efOut[1];
  real_T qg_efOut[1];
  real_T r_efOut[1];
  real_T rc_efOut[1];
  real_T rf_efOut[1];
  real_T rh_efOut[1];
  real_T sb_efOut[1];
  real_T sd_efOut[1];
  real_T sg_efOut[1];
  real_T t697[1];
  real_T td_efOut[1];
  real_T te_efOut[1];
  real_T tf_efOut[1];
  real_T u_efOut[1];
  real_T uc_efOut[1];
  real_T ue_efOut[1];
  real_T ug_efOut[1];
  real_T uh_efOut[1];
  real_T vb_efOut[1];
  real_T vc_efOut[1];
  real_T wb_efOut[1];
  real_T wd_efOut[1];
  real_T wf_efOut[1];
  real_T wg_efOut[1];
  real_T x_efOut[1];
  real_T xe_efOut[1];
  real_T xf_efOut[1];
  real_T xh_efOut[1];
  real_T y_efOut[1];
  real_T yc_efOut[1];
  real_T yg_efOut[1];
  real_T Battery_Heat_Flow_Rate_Sensor1_H;
  real_T Battery_Heat_Flow_Rate_Sensor2_H;
  real_T Battery_Heat_Flow_Rate_Sensor3_H;
  real_T Battery_Heat_Flow_Rate_Sensor_H;
  real_T Battery_Input_Current_tail_v;
  real_T Battery_Pack_1_Controlled_Voltage_Source_p_v;
  real_T Battery_Pack_1_Controlled_Voltage_Source_v;
  real_T Battery_Pack_1_Lithium_Cell_1RC_C1_n_v;
  real_T Battery_Pack_1_Lithium_Cell_1RC_P;
  real_T Battery_Pack_1_Lithium_Cell_1RC_PS_Add_I1;
  real_T Battery_Pack_2_Controlled_Voltage_Source_v;
  real_T Battery_Pack_2_Lithium_Cell_1RC_C1_n_v;
  real_T Battery_Pack_2_Lithium_Cell_1RC_C1_p_v;
  real_T Battery_Pack_2_Lithium_Cell_1RC_P;
  real_T Battery_Pack_2_Lithium_Cell_1RC_PS_Add_I1;
  real_T Battery_Pack_3_Controlled_Voltage_Source_v;
  real_T Battery_Pack_3_Lithium_Cell_1RC_C1_n_v;
  real_T Battery_Pack_3_Lithium_Cell_1RC_C1_p_v;
  real_T Battery_Pack_3_Lithium_Cell_1RC_P;
  real_T Battery_Pack_3_Lithium_Cell_1RC_PS_Add_I1;
  real_T Battery_Pack_4_Lithium_Cell_1RC_C1_n_v;
  real_T Battery_Pack_4_Lithium_Cell_1RC_C1_p_v;
  real_T Battery_Pack_4_Lithium_Cell_1RC_P;
  real_T Battery_Pack_4_Lithium_Cell_1RC_PS_Add_I1;
  real_T Cold_Plate_Cooling_Plate_Pack_2_Cooling_channels_conduction_Q;
  real_T Cold_Plate_Cooling_Plate_Pack_3_Cooling_channels_conduction_Q;
  real_T Cold_Plate_Cooling_Plate_Pack_4_Cooling_channels_conduction_Q;
  real_T Cold_Plate_Pipe_in_L1_convection_A_rho;
  real_T Cold_Plate_Pipe_in_L1_convection_B_rho;
  real_T Cold_Plate_Pipe_in_L1_h_I;
  real_T Cold_Plate_Pipe_in_L1_rho_I;
  real_T Cold_Plate_Pipe_in_L1_u_I;
  real_T Cold_Plate_Pipe_in_L2_convection_A_rho;
  real_T Cold_Plate_Pipe_in_L2_convection_B_rho;
  real_T Cold_Plate_Pipe_in_L2_h_I;
  real_T Cold_Plate_Pipe_in_L2_rho_I;
  real_T Cold_Plate_Pipe_in_L2_u_I;
  real_T Cold_Plate_Pipe_in_R1_convection_A_rho;
  real_T Cold_Plate_Pipe_in_R1_convection_B_rho;
  real_T Cold_Plate_Pipe_in_R1_h_I;
  real_T Cold_Plate_Pipe_in_R1_rho_I;
  real_T Cold_Plate_Pipe_in_R1_u_I;
  real_T Cold_Plate_Pipe_in_R2_convection_A_rho;
  real_T Cold_Plate_Pipe_in_R2_convection_B_rho;
  real_T Cold_Plate_Pipe_in_R2_h_I;
  real_T Cold_Plate_Pipe_in_R2_rho_I;
  real_T Cold_Plate_Pipe_in_R2_u_I;
  real_T Cold_Plate_Pipe_out_L1_convection_A_rho;
  real_T Cold_Plate_Pipe_out_L1_convection_B_rho;
  real_T Cold_Plate_Pipe_out_L1_h_I;
  real_T Cold_Plate_Pipe_out_L1_rho_I;
  real_T Cold_Plate_Pipe_out_L1_u_I;
  real_T Cold_Plate_Pipe_out_L2_convection_A_rho;
  real_T Cold_Plate_Pipe_out_L2_convection_B_rho;
  real_T Cold_Plate_Pipe_out_L2_h_I;
  real_T Cold_Plate_Pipe_out_L2_rho_I;
  real_T Cold_Plate_Pipe_out_L2_u_I;
  real_T Cold_Plate_Pipe_out_R1_convection_A_rho;
  real_T Cold_Plate_Pipe_out_R1_convection_B_rho;
  real_T Cold_Plate_Pipe_out_R1_h_I;
  real_T Cold_Plate_Pipe_out_R1_rho_I;
  real_T Cold_Plate_Pipe_out_R1_u_I;
  real_T Cold_Plate_Pipe_out_R2_convection_A_rho;
  real_T Cold_Plate_Pipe_out_R2_convection_B_rho;
  real_T Cold_Plate_Pipe_out_R2_h_I;
  real_T Cold_Plate_Pipe_out_R2_rho_I;
  real_T Cold_Plate_Pipe_out_R2_u_I;
  real_T Heating_Cooling_Unit_Cooling_Inlet_convection_A_rho;
  real_T Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot;
  real_T Heating_Cooling_Unit_Cooling_Inlet_convection_B_rho;
  real_T Heating_Cooling_Unit_Cooling_Inlet_h_I;
  real_T Heating_Cooling_Unit_Cooling_Inlet_rho_I;
  real_T Heating_Cooling_Unit_Cooling_Inlet_u_I;
  real_T Heating_Cooling_Unit_Heater_Pipe_TL_convection_A_rho;
  real_T Heating_Cooling_Unit_Heater_Pipe_TL_convection_B_rho;
  real_T Heating_Cooling_Unit_Heater_Pipe_TL_h_I;
  real_T Heating_Cooling_Unit_Heater_Pipe_TL_rho_I;
  real_T Heating_Cooling_Unit_Heater_Pipe_TL_u_I;
  real_T Heating_Cooling_Unit_Radiator_Radiator_heat_transfer_M2;
  real_T Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_A_rho;
  real_T Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_B_rho;
  real_T Heating_Cooling_Unit_Radiator_Radiator_inlet_h_I;
  real_T Heating_Cooling_Unit_Radiator_Radiator_inlet_rho_I;
  real_T Heating_Cooling_Unit_Radiator_Radiator_inlet_u_I;
  real_T Heating_Cooling_Unit_Radiator_Radiator_return_convection_A_rho;
  real_T Heating_Cooling_Unit_Radiator_Radiator_return_convection_B_rho;
  real_T Heating_Cooling_Unit_Radiator_Radiator_return_h_I;
  real_T Heating_Cooling_Unit_Radiator_Radiator_return_rho_I;
  real_T Heating_Cooling_Unit_Radiator_Radiator_return_u_I;
  real_T Heating_Cooling_Unit_Radiator_Radiator_thermal_liquid_2_rho_I;
  real_T Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_A_rh;
  real_T Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_B_rh;
  real_T Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_h_I;
  real_T Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_rho_I;
  real_T Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_u_I;
  real_T Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co2;
  real_T Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co7;
  real_T Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co2;
  real_T Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co7;
  real_T Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con2;
  real_T Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con7;
  real_T Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_orif;
  real_T Local_Restriction_TL1_convection_B_rho;
  real_T Local_Restriction_TL_convection_B_rho;
  real_T Pump_convection_B_rho;
  real_T Pump_friction_torque_;
  real_T Pump_mechanical_power;
  real_T Tank_rho_liquid;
  real_T Tank_u_liquid;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T intrm_sf_mf_123;
  real_T intrm_sf_mf_132;
  real_T intrm_sf_mf_166;
  real_T intrm_sf_mf_252;
  real_T intrm_sf_mf_259;
  real_T intrm_sf_mf_46;
  real_T intrm_sf_mf_465;
  real_T intrm_sf_mf_474;
  real_T intrm_sf_mf_510;
  real_T intrm_sf_mf_553;
  real_T intrm_sf_mf_78;
  real_T piece8;
  real_T t1078;
  real_T t1081;
  real_T t1083;
  real_T t1090;
  real_T t806_idx_0;
  real_T t811;
  real_T t812;
  real_T t813;
  real_T t820;
  real_T t821;
  real_T t823;
  real_T t827;
  real_T t830;
  real_T t839;
  real_T t842;
  real_T t845;
  real_T t848;
  real_T t849;
  real_T t852;
  real_T t854;
  real_T t856;
  real_T t857;
  real_T t859;
  real_T t865;
  real_T t868;
  real_T t870;
  real_T t872;
  real_T t873;
  real_T t874;
  real_T t875;
  real_T t877;
  real_T t878;
  real_T t884;
  real_T t886;
  real_T t888;
  real_T t890;
  real_T t891;
  real_T t892;
  real_T t893;
  real_T t895;
  real_T t896;
  real_T t898;
  real_T t901;
  real_T t979;
  real_T t995;
  uint64_T t119[1];
  uint64_T t120[1];
  uint64_T t122[1];
  uint64_T t602[1];
  uint64_T t619[1];
  int32_T b;
  U_idx_0 = t1091->mU.mX[0];
  U_idx_1 = t1091->mU.mX[1];
  U_idx_2 = t1091->mU.mX[2];
  U_idx_3 = t1091->mU.mX[3];
  for (b = 0; b < 337; b++) {
    X[b] = t1091->mX.mX[b];
  }

  out = t1092->mLOG;
  nonscalar12[0] = 0.00048105637508093717;
  nonscalar12[1] = 1.0E-9;
  nonscalar13[0] = 0.002;
  nonscalar13[1] = 0.003;
  nonscalar14[0] = 1.0E-9;
  nonscalar14[1] = 0.00048105637508093717;
  nonscalar14[2] = 0.00048105637508093717;
  nonscalar14[3] = 1.0E-9;
  nonscalar15[0] = 0.002;
  nonscalar15[1] = 0.003;
  nonscalar15[2] = 0.006;
  nonscalar15[3] = 0.007;
  nonscalar16[0] = 1.0E-9;
  nonscalar16[1] = 0.00048105637508093717;
  nonscalar17[0] = 0.006;
  nonscalar17[1] = 0.007;
  Battery_Heat_Flow_Rate_Sensor_H = X[69ULL] + X[70ULL];
  Battery_Heat_Flow_Rate_Sensor1_H = X[71ULL] + X[72ULL];
  Battery_Heat_Flow_Rate_Sensor2_H = X[73ULL] + X[74ULL];
  Battery_Heat_Flow_Rate_Sensor3_H = X[75ULL] + X[76ULL];
  Battery_Input_Current_tail_v = (X[77ULL] * -0.052631578947368418 + X[78ULL] *
    1.0526315789473684) + X[79ULL] * -1.0526315789473684;
  Battery_Pack_1_Controlled_Voltage_Source_p_v = -X[79ULL] + X[78ULL];
  Battery_Pack_1_Controlled_Voltage_Source_v = (-X[77ULL] - X[79ULL]) + X[78ULL];
  Battery_Pack_1_Lithium_Cell_1RC_C1_n_v = -X[4ULL] + X[78ULL];
  Battery_Pack_1_Lithium_Cell_1RC_P = (X[83ULL] * 0.05 + X[69ULL] * 0.05) + X
    [70ULL] * 0.05;
  Battery_Pack_1_Lithium_Cell_1RC_PS_Add_I1 = ((-X[84ULL] + X[83ULL] * 0.05) +
    X[69ULL] * 0.05) + X[70ULL] * 0.05;
  t811 = ((-X[86ULL] + X[77ULL]) + X[6ULL]) + X[87ULL];
  Battery_Pack_2_Controlled_Voltage_Source_v = (((-X[85ULL] - X[86ULL]) + X
    [77ULL]) + X[6ULL]) + X[87ULL];
  Battery_Pack_2_Lithium_Cell_1RC_C1_n_v = X[77ULL] + X[87ULL];
  Battery_Pack_2_Lithium_Cell_1RC_C1_p_v = (X[6ULL] + X[77ULL]) + X[87ULL];
  Battery_Pack_2_Lithium_Cell_1RC_P = (X[91ULL] * 0.05 + X[71ULL] * 0.05) + X
    [72ULL] * 0.05;
  Battery_Pack_2_Lithium_Cell_1RC_PS_Add_I1 = ((-X[92ULL] + X[91ULL] * 0.05) +
    X[71ULL] * 0.05) + X[72ULL] * 0.05;
  t812 = ((-X[94ULL] + X[85ULL]) + X[8ULL]) + X[95ULL];
  Battery_Pack_3_Controlled_Voltage_Source_v = (((-X[93ULL] - X[94ULL]) + X
    [85ULL]) + X[8ULL]) + X[95ULL];
  Battery_Pack_3_Lithium_Cell_1RC_C1_n_v = X[85ULL] + X[95ULL];
  Battery_Pack_3_Lithium_Cell_1RC_C1_p_v = (X[8ULL] + X[85ULL]) + X[95ULL];
  Battery_Pack_3_Lithium_Cell_1RC_P = (X[99ULL] * 0.05 + X[73ULL] * 0.05) + X
    [74ULL] * 0.05;
  Battery_Pack_3_Lithium_Cell_1RC_PS_Add_I1 = ((-X[100ULL] + X[99ULL] * 0.05) +
    X[73ULL] * 0.05) + X[74ULL] * 0.05;
  t813 = ((-X[101ULL] + X[93ULL]) + X[10ULL]) + X[102ULL];
  Battery_Pack_4_Lithium_Cell_1RC_C1_n_v = X[93ULL] + X[102ULL];
  Battery_Pack_4_Lithium_Cell_1RC_C1_p_v = (X[10ULL] + X[93ULL]) + X[102ULL];
  Battery_Pack_4_Lithium_Cell_1RC_P = (X[106ULL] * 0.05 + X[75ULL] * 0.05) + X
    [76ULL] * 0.05;
  Battery_Pack_4_Lithium_Cell_1RC_PS_Add_I1 = ((-X[107ULL] + X[106ULL] * 0.05) +
    X[75ULL] * 0.05) + X[76ULL] * 0.05;
  t820 = -X[143ULL] - X[144ULL];
  t821 = -X[148ULL] - X[149ULL];
  t823 = X[18ULL] * 0.17083333333333331 + X[19ULL] * -0.17083333333333331;
  Cold_Plate_Cooling_Plate_Pack_2_Cooling_channels_conduction_Q = X[20ULL] *
    0.17083333333333331 + X[21ULL] * -0.17083333333333331;
  Cold_Plate_Cooling_Plate_Pack_3_Cooling_channels_conduction_Q = X[22ULL] *
    0.17083333333333331 + X[23ULL] * -0.17083333333333331;
  Cold_Plate_Cooling_Plate_Pack_4_Cooling_channels_conduction_Q = X[24ULL] *
    0.17083333333333331 + X[25ULL] * -0.17083333333333331;
  t697[0ULL] = X[27ULL];
  t119[0] = 20ULL;
  t120[0] = 1ULL;
  tlu2_linear_nearest_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = efOut;
  t697[0ULL] = X[26ULL];
  t122[0] = 19ULL;
  tlu2_linear_nearest_prelookup(&b_efOut.mField0[0ULL], &b_efOut.mField1[0ULL],
    &b_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t112 = b_efOut;
  tlu2_2d_linear_nearest_value(&c_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = c_efOut[0];
  piece8 = t806_idx_0;
  t697[0ULL] = X[168ULL];
  tlu2_linear_linear_prelookup(&d_efOut.mField0[0ULL], &d_efOut.mField1[0ULL],
    &d_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = d_efOut;
  t697[0ULL] = X[13ULL];
  tlu2_linear_linear_prelookup(&e_efOut.mField0[0ULL], &e_efOut.mField1[0ULL],
    &e_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t108 = e_efOut;
  tlu2_2d_linear_linear_value(&f_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t108.mField0[0ULL], &t108.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = f_efOut[0];
  Cold_Plate_Pipe_in_L1_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[170ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = g_efOut;
  t697[0ULL] = X[165ULL];
  tlu2_linear_linear_prelookup(&h_efOut.mField0[0ULL], &h_efOut.mField1[0ULL],
    &h_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t97 = h_efOut;
  tlu2_2d_linear_linear_value(&i_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = i_efOut[0];
  Cold_Plate_Pipe_in_L1_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[27ULL];
  tlu2_linear_linear_prelookup(&j_efOut.mField0[0ULL], &j_efOut.mField1[0ULL],
    &j_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = j_efOut;
  t697[0ULL] = X[26ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = k_efOut;
  tlu2_2d_linear_linear_value(&l_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = l_efOut[0];
  Cold_Plate_Pipe_in_L1_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = m_efOut[0];
  Cold_Plate_Pipe_in_L1_u_I = t806_idx_0;
  Cold_Plate_Pipe_in_L1_h_I = X[26ULL] / (Cold_Plate_Pipe_in_L1_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_L1_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[29ULL];
  tlu2_linear_nearest_prelookup(&n_efOut.mField0[0ULL], &n_efOut.mField1[0ULL],
    &n_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = n_efOut;
  t697[0ULL] = X[28ULL];
  tlu2_linear_nearest_prelookup(&o_efOut.mField0[0ULL], &o_efOut.mField1[0ULL],
    &o_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = o_efOut;
  tlu2_2d_linear_nearest_value(&p_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = p_efOut[0];
  t827 = t806_idx_0;
  t697[0ULL] = X[172ULL];
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = r_efOut[0];
  Cold_Plate_Pipe_in_L2_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[174ULL];
  tlu2_linear_linear_prelookup(&s_efOut.mField0[0ULL], &s_efOut.mField1[0ULL],
    &s_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t83 = s_efOut;
  t697[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&t_efOut.mField0[0ULL], &t_efOut.mField1[0ULL],
    &t_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t89 = t_efOut;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t83.mField0[0ULL], &t83.mField2
    [0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = u_efOut[0];
  Cold_Plate_Pipe_in_L2_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&v_efOut.mField0[0ULL], &v_efOut.mField1[0ULL],
    &v_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = v_efOut;
  t697[0ULL] = X[28ULL];
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t112 = w_efOut;
  tlu2_2d_linear_linear_value(&x_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = x_efOut[0];
  Cold_Plate_Pipe_in_L2_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&y_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = y_efOut[0];
  Cold_Plate_Pipe_in_L2_u_I = t806_idx_0;
  Cold_Plate_Pipe_in_L2_h_I = X[28ULL] / (Cold_Plate_Pipe_in_L2_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_L2_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[31ULL];
  tlu2_linear_nearest_prelookup(&ab_efOut.mField0[0ULL], &ab_efOut.mField1[0ULL],
    &ab_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t97 = ab_efOut;
  t697[0ULL] = X[30ULL];
  tlu2_linear_nearest_prelookup(&bb_efOut.mField0[0ULL], &bb_efOut.mField1[0ULL],
    &bb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = bb_efOut;
  tlu2_2d_linear_nearest_value(&cb_efOut[0ULL], &t97.mField0[0ULL],
    &t97.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = cb_efOut[0];
  t830 = t806_idx_0;
  t697[0ULL] = X[180ULL];
  tlu2_linear_linear_prelookup(&db_efOut.mField0[0ULL], &db_efOut.mField1[0ULL],
    &db_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = db_efOut;
  tlu2_2d_linear_linear_value(&eb_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t108.mField0[0ULL], &t108.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = eb_efOut[0];
  Cold_Plate_Pipe_in_R1_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[182ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = fb_efOut;
  t697[0ULL] = X[177ULL];
  tlu2_linear_linear_prelookup(&gb_efOut.mField0[0ULL], &gb_efOut.mField1[0ULL],
    &gb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t101 = gb_efOut;
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t101.mField0[0ULL], &t101.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = hb_efOut[0];
  Cold_Plate_Pipe_in_R1_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&ib_efOut.mField0[0ULL], &ib_efOut.mField1[0ULL],
    &ib_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = ib_efOut;
  t697[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&jb_efOut.mField0[0ULL], &jb_efOut.mField1[0ULL],
    &jb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = jb_efOut;
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = kb_efOut[0];
  Cold_Plate_Pipe_in_R1_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&lb_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = lb_efOut[0];
  Cold_Plate_Pipe_in_R1_u_I = t806_idx_0;
  Cold_Plate_Pipe_in_R1_h_I = X[30ULL] / (Cold_Plate_Pipe_in_R1_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_R1_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[33ULL];
  tlu2_linear_nearest_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t71 = mb_efOut;
  t697[0ULL] = X[32ULL];
  tlu2_linear_nearest_prelookup(&nb_efOut.mField0[0ULL], &nb_efOut.mField1[0ULL],
    &nb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = nb_efOut;
  tlu2_2d_linear_nearest_value(&ob_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ob_efOut[0];
  intrm_sf_mf_465 = t806_idx_0;
  t697[0ULL] = X[184ULL];
  tlu2_linear_linear_prelookup(&pb_efOut.mField0[0ULL], &pb_efOut.mField1[0ULL],
    &pb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t70 = pb_efOut;
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t101.mField0[0ULL], &t101.mField2[0ULL], ((_NeDynamicSystem*)(LC)
    )->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = qb_efOut[0];
  Cold_Plate_Pipe_in_R2_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[186ULL];
  tlu2_linear_linear_prelookup(&rb_efOut.mField0[0ULL], &rb_efOut.mField1[0ULL],
    &rb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t97 = rb_efOut;
  tlu2_2d_linear_linear_value(&sb_efOut[0ULL], &t97.mField0[0ULL], &t97.mField2
    [0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = sb_efOut[0];
  Cold_Plate_Pipe_in_R2_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t70 = tb_efOut;
  t697[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&ub_efOut.mField0[0ULL], &ub_efOut.mField1[0ULL],
    &ub_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t71 = ub_efOut;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = vb_efOut[0];
  Cold_Plate_Pipe_in_R2_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t70.mField0[0ULL], &t70.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = wb_efOut[0];
  Cold_Plate_Pipe_in_R2_u_I = t806_idx_0;
  Cold_Plate_Pipe_in_R2_h_I = X[32ULL] / (Cold_Plate_Pipe_in_R2_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_R2_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[35ULL];
  tlu2_linear_nearest_prelookup(&xb_efOut.mField0[0ULL], &xb_efOut.mField1[0ULL],
    &xb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = xb_efOut;
  t697[0ULL] = X[34ULL];
  tlu2_linear_nearest_prelookup(&yb_efOut.mField0[0ULL], &yb_efOut.mField1[0ULL],
    &yb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t70 = yb_efOut;
  tlu2_2d_linear_nearest_value(&ac_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ac_efOut[0];
  intrm_sf_mf_252 = t806_idx_0;
  t697[0ULL] = X[192ULL];
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t101 = bc_efOut;
  t697[0ULL] = X[189ULL];
  tlu2_linear_linear_prelookup(&cc_efOut.mField0[0ULL], &cc_efOut.mField1[0ULL],
    &cc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t97 = cc_efOut;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t101.mField0[0ULL],
    &t101.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = dc_efOut[0];
  Cold_Plate_Pipe_out_L1_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[194ULL];
  tlu2_linear_linear_prelookup(&ec_efOut.mField0[0ULL], &ec_efOut.mField1[0ULL],
    &ec_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = ec_efOut;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = fc_efOut[0];
  Cold_Plate_Pipe_out_L1_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[35ULL];
  tlu2_linear_linear_prelookup(&gc_efOut.mField0[0ULL], &gc_efOut.mField1[0ULL],
    &gc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = gc_efOut;
  t697[0ULL] = X[34ULL];
  tlu2_linear_linear_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t83 = hc_efOut;
  tlu2_2d_linear_linear_value(&ic_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ic_efOut[0];
  Cold_Plate_Pipe_out_L1_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = jc_efOut[0];
  Cold_Plate_Pipe_out_L1_u_I = t806_idx_0;
  Cold_Plate_Pipe_out_L1_h_I = X[34ULL] / (Cold_Plate_Pipe_out_L1_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_L1_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[37ULL];
  tlu2_linear_nearest_prelookup(&kc_efOut.mField0[0ULL], &kc_efOut.mField1[0ULL],
    &kc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = kc_efOut;
  t697[0ULL] = X[36ULL];
  tlu2_linear_nearest_prelookup(&lc_efOut.mField0[0ULL], &lc_efOut.mField1[0ULL],
    &lc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t101 = lc_efOut;
  tlu2_2d_linear_nearest_value(&mc_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t101.mField0[0ULL], &t101.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = mc_efOut[0];
  t839 = t806_idx_0;
  t697[0ULL] = X[196ULL];
  tlu2_linear_linear_prelookup(&nc_efOut.mField0[0ULL], &nc_efOut.mField1[0ULL],
    &nc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = nc_efOut;
  t697[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&oc_efOut.mField0[0ULL], &oc_efOut.mField1[0ULL],
    &oc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t53 = oc_efOut;
  tlu2_2d_linear_linear_value(&pc_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = pc_efOut[0];
  Cold_Plate_Pipe_out_L2_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[198ULL];
  tlu2_linear_linear_prelookup(&qc_efOut.mField0[0ULL], &qc_efOut.mField1[0ULL],
    &qc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = qc_efOut;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = rc_efOut[0];
  Cold_Plate_Pipe_out_L2_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[37ULL];
  tlu2_linear_linear_prelookup(&sc_efOut.mField0[0ULL], &sc_efOut.mField1[0ULL],
    &sc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = sc_efOut;
  t697[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&tc_efOut.mField0[0ULL], &tc_efOut.mField1[0ULL],
    &tc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t106 = tc_efOut;
  tlu2_2d_linear_linear_value(&uc_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t106.mField0[0ULL], &t106.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = uc_efOut[0];
  Cold_Plate_Pipe_out_L2_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&vc_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t106.mField0[0ULL], &t106.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = vc_efOut[0];
  Cold_Plate_Pipe_out_L2_u_I = t806_idx_0;
  Cold_Plate_Pipe_out_L2_h_I = X[36ULL] / (Cold_Plate_Pipe_out_L2_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_L2_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[39ULL];
  tlu2_linear_nearest_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t72 = wc_efOut;
  t697[0ULL] = X[38ULL];
  tlu2_linear_nearest_prelookup(&xc_efOut.mField0[0ULL], &xc_efOut.mField1[0ULL],
    &xc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t71 = xc_efOut;
  tlu2_2d_linear_nearest_value(&yc_efOut[0ULL], &t72.mField0[0ULL],
    &t72.mField2[0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = yc_efOut[0];
  t842 = t806_idx_0;
  t697[0ULL] = X[204ULL];
  tlu2_linear_linear_prelookup(&ad_efOut.mField0[0ULL], &ad_efOut.mField1[0ULL],
    &ad_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = ad_efOut;
  t697[0ULL] = X[201ULL];
  tlu2_linear_linear_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t97 = bd_efOut;
  tlu2_2d_linear_linear_value(&cd_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = cd_efOut[0];
  Cold_Plate_Pipe_out_R1_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[206ULL];
  tlu2_linear_linear_prelookup(&dd_efOut.mField0[0ULL], &dd_efOut.mField1[0ULL],
    &dd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t83 = dd_efOut;
  tlu2_2d_linear_linear_value(&ed_efOut[0ULL], &t83.mField0[0ULL], &t83.mField2
    [0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ed_efOut[0];
  Cold_Plate_Pipe_out_R1_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[39ULL];
  tlu2_linear_linear_prelookup(&fd_efOut.mField0[0ULL], &fd_efOut.mField1[0ULL],
    &fd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = fd_efOut;
  t697[0ULL] = X[38ULL];
  tlu2_linear_linear_prelookup(&gd_efOut.mField0[0ULL], &gd_efOut.mField1[0ULL],
    &gd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t112 = gd_efOut;
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = hd_efOut[0];
  Cold_Plate_Pipe_out_R1_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&id_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = id_efOut[0];
  Cold_Plate_Pipe_out_R1_u_I = t806_idx_0;
  Cold_Plate_Pipe_out_R1_h_I = X[38ULL] / (Cold_Plate_Pipe_out_R1_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_R1_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[41ULL];
  tlu2_linear_nearest_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = jd_efOut;
  t697[0ULL] = X[40ULL];
  tlu2_linear_nearest_prelookup(&kd_efOut.mField0[0ULL], &kd_efOut.mField1[0ULL],
    &kd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = kd_efOut;
  tlu2_2d_linear_nearest_value(&ld_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ld_efOut[0];
  t845 = t806_idx_0;
  t697[0ULL] = X[208ULL];
  tlu2_linear_linear_prelookup(&md_efOut.mField0[0ULL], &md_efOut.mField1[0ULL],
    &md_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t83 = md_efOut;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t83.mField0[0ULL], &t83.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = nd_efOut[0];
  Cold_Plate_Pipe_out_R2_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[210ULL];
  tlu2_linear_linear_prelookup(&od_efOut.mField0[0ULL], &od_efOut.mField1[0ULL],
    &od_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t69 = od_efOut;
  tlu2_2d_linear_linear_value(&pd_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = pd_efOut[0];
  Cold_Plate_Pipe_out_R2_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[41ULL];
  tlu2_linear_linear_prelookup(&qd_efOut.mField0[0ULL], &qd_efOut.mField1[0ULL],
    &qd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = qd_efOut;
  t697[0ULL] = X[40ULL];
  tlu2_linear_linear_prelookup(&rd_efOut.mField0[0ULL], &rd_efOut.mField1[0ULL],
    &rd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = rd_efOut;
  tlu2_2d_linear_linear_value(&sd_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = sd_efOut[0];
  Cold_Plate_Pipe_out_R2_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&td_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = td_efOut[0];
  Cold_Plate_Pipe_out_R2_u_I = t806_idx_0;
  Cold_Plate_Pipe_out_R2_h_I = X[40ULL] / (Cold_Plate_Pipe_out_R2_rho_I == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_R2_rho_I) * 100.0 + t806_idx_0;
  t848 = U_idx_2 * 0.10471975511965977;
  t849 = U_idx_3 * 0.001;
  t852 = (-X[238ULL] - X[239ULL]) - X[240ULL];
  Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot = (-X[242ULL] - X[243ULL])
    - X[244ULL];
  t697[0ULL] = X[48ULL];
  tlu2_linear_nearest_prelookup(&ud_efOut.mField0[0ULL], &ud_efOut.mField1[0ULL],
    &ud_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = ud_efOut;
  t697[0ULL] = X[47ULL];
  tlu2_linear_nearest_prelookup(&vd_efOut.mField0[0ULL], &vd_efOut.mField1[0ULL],
    &vd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t70 = vd_efOut;
  tlu2_2d_linear_nearest_value(&wd_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = wd_efOut[0];
  intrm_sf_mf_474 = t806_idx_0;
  t697[0ULL] = X[245ULL];
  tlu2_linear_linear_prelookup(&xd_efOut.mField0[0ULL], &xd_efOut.mField1[0ULL],
    &xd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t106 = xd_efOut;
  t697[0ULL] = X[214ULL];
  tlu2_linear_linear_prelookup(&yd_efOut.mField0[0ULL], &yd_efOut.mField1[0ULL],
    &yd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t70 = yd_efOut;
  tlu2_2d_linear_linear_value(&ae_efOut[0ULL], &t106.mField0[0ULL],
    &t106.mField2[0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ae_efOut[0];
  Heating_Cooling_Unit_Cooling_Inlet_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[247ULL];
  tlu2_linear_linear_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = be_efOut;
  t697[0ULL] = X[235ULL];
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t72 = ce_efOut;
  tlu2_2d_linear_linear_value(&de_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = de_efOut[0];
  Heating_Cooling_Unit_Cooling_Inlet_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&ee_efOut.mField0[0ULL], &ee_efOut.mField1[0ULL],
    &ee_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = ee_efOut;
  t697[0ULL] = X[47ULL];
  tlu2_linear_linear_prelookup(&fe_efOut.mField0[0ULL], &fe_efOut.mField1[0ULL],
    &fe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t69 = fe_efOut;
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ge_efOut[0];
  Heating_Cooling_Unit_Cooling_Inlet_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = he_efOut[0];
  Heating_Cooling_Unit_Cooling_Inlet_u_I = t806_idx_0;
  Heating_Cooling_Unit_Cooling_Inlet_h_I = X[47ULL] /
    (Heating_Cooling_Unit_Cooling_Inlet_rho_I == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Cooling_Inlet_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[50ULL];
  tlu2_linear_nearest_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t71 = ie_efOut;
  t697[0ULL] = X[49ULL];
  tlu2_linear_nearest_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t112 = je_efOut;
  tlu2_2d_linear_nearest_value(&ke_efOut[0ULL], &t71.mField0[0ULL],
    &t71.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ke_efOut[0];
  intrm_sf_mf_46 = t806_idx_0;
  t697[0ULL] = X[253ULL];
  tlu2_linear_linear_prelookup(&le_efOut.mField0[0ULL], &le_efOut.mField1[0ULL],
    &le_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = le_efOut;
  t697[0ULL] = X[250ULL];
  tlu2_linear_linear_prelookup(&me_efOut.mField0[0ULL], &me_efOut.mField1[0ULL],
    &me_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t101 = me_efOut;
  tlu2_2d_linear_linear_value(&ne_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t101.mField0[0ULL], &t101.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ne_efOut[0];
  Heating_Cooling_Unit_Heater_Pipe_TL_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[255ULL];
  tlu2_linear_linear_prelookup(&oe_efOut.mField0[0ULL], &oe_efOut.mField1[0ULL],
    &oe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t69 = oe_efOut;
  t697[0ULL] = X[46ULL];
  tlu2_linear_linear_prelookup(&pe_efOut.mField0[0ULL], &pe_efOut.mField1[0ULL],
    &pe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t89 = pe_efOut;
  tlu2_2d_linear_linear_value(&qe_efOut[0ULL], &t69.mField0[0ULL], &t69.mField2
    [0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = qe_efOut[0];
  Heating_Cooling_Unit_Heater_Pipe_TL_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[50ULL];
  tlu2_linear_linear_prelookup(&re_efOut.mField0[0ULL], &re_efOut.mField1[0ULL],
    &re_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = re_efOut;
  t697[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&se_efOut.mField0[0ULL], &se_efOut.mField1[0ULL],
    &se_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t97 = se_efOut;
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = te_efOut[0];
  Heating_Cooling_Unit_Heater_Pipe_TL_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&ue_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ue_efOut[0];
  Heating_Cooling_Unit_Heater_Pipe_TL_u_I = t806_idx_0;
  Heating_Cooling_Unit_Heater_Pipe_TL_h_I = X[49ULL] /
    (Heating_Cooling_Unit_Heater_Pipe_TL_rho_I == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Heater_Pipe_TL_rho_I) * 100.0 + t806_idx_0;
  t857 = X[266ULL] * -0.5 + U_idx_0 * 0.5;
  Heating_Cooling_Unit_Radiator_Radiator_heat_transfer_M2 = X[274ULL] * 0.5 + X
    [275ULL] * -0.5;
  t697[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&ve_efOut.mField0[0ULL], &ve_efOut.mField1[0ULL],
    &ve_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t109 = ve_efOut;
  t697[0ULL] = X[54ULL];
  tlu2_linear_linear_prelookup(&we_efOut.mField0[0ULL], &we_efOut.mField1[0ULL],
    &we_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t83 = we_efOut;
  tlu2_2d_linear_linear_value(&xe_efOut[0ULL], &t109.mField0[0ULL],
    &t109.mField2[0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = xe_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_thermal_liquid_2_rho_I = t806_idx_0;
  t697[0ULL] = X[56ULL];
  tlu2_linear_nearest_prelookup(&ye_efOut.mField0[0ULL], &ye_efOut.mField1[0ULL],
    &ye_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t109 = ye_efOut;
  t697[0ULL] = X[55ULL];
  tlu2_linear_nearest_prelookup(&af_efOut.mField0[0ULL], &af_efOut.mField1[0ULL],
    &af_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t69 = af_efOut;
  tlu2_2d_linear_nearest_value(&bf_efOut[0ULL], &t109.mField0[0ULL],
    &t109.mField2[0ULL], &t69.mField0[0ULL], &t69.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = bf_efOut[0];
  intrm_sf_mf_510 = t806_idx_0;
  t697[0ULL] = X[287ULL];
  tlu2_linear_linear_prelookup(&cf_efOut.mField0[0ULL], &cf_efOut.mField1[0ULL],
    &cf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = cf_efOut;
  t697[0ULL] = X[258ULL];
  tlu2_linear_linear_prelookup(&df_efOut.mField0[0ULL], &df_efOut.mField1[0ULL],
    &df_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t83 = df_efOut;
  tlu2_2d_linear_linear_value(&ef_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ef_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[289ULL];
  tlu2_linear_linear_prelookup(&ff_efOut.mField0[0ULL], &ff_efOut.mField1[0ULL],
    &ff_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t97 = ff_efOut;
  t697[0ULL] = X[262ULL];
  tlu2_linear_linear_prelookup(&gf_efOut.mField0[0ULL], &gf_efOut.mField1[0ULL],
    &gf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t71 = gf_efOut;
  tlu2_2d_linear_linear_value(&hf_efOut[0ULL], &t97.mField0[0ULL], &t97.mField2
    [0ULL], &t71.mField0[0ULL], &t71.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = hf_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[56ULL];
  tlu2_linear_linear_prelookup(&if_efOut.mField0[0ULL], &if_efOut.mField1[0ULL],
    &if_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = if_efOut;
  t697[0ULL] = X[55ULL];
  tlu2_linear_linear_prelookup(&jf_efOut.mField0[0ULL], &jf_efOut.mField1[0ULL],
    &jf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = jf_efOut;
  tlu2_2d_linear_linear_value(&kf_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = kf_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_inlet_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&lf_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = lf_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_inlet_u_I = t806_idx_0;
  Heating_Cooling_Unit_Radiator_Radiator_inlet_h_I = X[55ULL] /
    (Heating_Cooling_Unit_Radiator_Radiator_inlet_rho_I == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Radiator_Radiator_inlet_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[58ULL];
  tlu2_linear_nearest_prelookup(&mf_efOut.mField0[0ULL], &mf_efOut.mField1[0ULL],
    &mf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = mf_efOut;
  t697[0ULL] = X[57ULL];
  tlu2_linear_nearest_prelookup(&nf_efOut.mField0[0ULL], &nf_efOut.mField1[0ULL],
    &nf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = nf_efOut;
  tlu2_2d_linear_nearest_value(&of_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = of_efOut[0];
  intrm_sf_mf_553 = t806_idx_0;
  t697[0ULL] = X[291ULL];
  tlu2_linear_linear_prelookup(&pf_efOut.mField0[0ULL], &pf_efOut.mField1[0ULL],
    &pf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = pf_efOut;
  t697[0ULL] = X[264ULL];
  tlu2_linear_linear_prelookup(&qf_efOut.mField0[0ULL], &qf_efOut.mField1[0ULL],
    &qf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t106 = qf_efOut;
  tlu2_2d_linear_linear_value(&rf_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t106.mField0[0ULL], &t106.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = rf_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_return_convection_A_rho = t806_idx_0;
  t697[0ULL] = X[293ULL];
  tlu2_linear_linear_prelookup(&sf_efOut.mField0[0ULL], &sf_efOut.mField1[0ULL],
    &sf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = sf_efOut;
  tlu2_2d_linear_linear_value(&tf_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = tf_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_return_convection_B_rho = t806_idx_0;
  t697[0ULL] = X[58ULL];
  tlu2_linear_linear_prelookup(&uf_efOut.mField0[0ULL], &uf_efOut.mField1[0ULL],
    &uf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = uf_efOut;
  t697[0ULL] = X[57ULL];
  tlu2_linear_linear_prelookup(&vf_efOut.mField0[0ULL], &vf_efOut.mField1[0ULL],
    &vf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t106 = vf_efOut;
  tlu2_2d_linear_linear_value(&wf_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t106.mField0[0ULL], &t106.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = wf_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_return_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&xf_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t106.mField0[0ULL], &t106.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = xf_efOut[0];
  Heating_Cooling_Unit_Radiator_Radiator_return_u_I = t806_idx_0;
  Heating_Cooling_Unit_Radiator_Radiator_return_h_I = X[57ULL] /
    (Heating_Cooling_Unit_Radiator_Radiator_return_rho_I == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Radiator_Radiator_return_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = X[60ULL];
  tlu2_linear_nearest_prelookup(&yf_efOut.mField0[0ULL], &yf_efOut.mField1[0ULL],
    &yf_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = yf_efOut;
  t697[0ULL] = X[59ULL];
  tlu2_linear_nearest_prelookup(&ag_efOut.mField0[0ULL], &ag_efOut.mField1[0ULL],
    &ag_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = ag_efOut;
  tlu2_2d_linear_nearest_value(&bg_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField9, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = bg_efOut[0];
  intrm_sf_mf_78 = t806_idx_0;
  t697[0ULL] = X[299ULL];
  tlu2_linear_linear_prelookup(&cg_efOut.mField0[0ULL], &cg_efOut.mField1[0ULL],
    &cg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t106 = cg_efOut;
  t697[0ULL] = X[296ULL];
  tlu2_linear_linear_prelookup(&dg_efOut.mField0[0ULL], &dg_efOut.mField1[0ULL],
    &dg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t112 = dg_efOut;
  tlu2_2d_linear_linear_value(&eg_efOut[0ULL], &t106.mField0[0ULL],
    &t106.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = eg_efOut[0];
  Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_A_rh = t806_idx_0;
  t697[0ULL] = X[301ULL];
  tlu2_linear_linear_prelookup(&fg_efOut.mField0[0ULL], &fg_efOut.mField1[0ULL],
    &fg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = fg_efOut;
  tlu2_2d_linear_linear_value(&gg_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = gg_efOut[0];
  Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_B_rh = t806_idx_0;
  t697[0ULL] = X[60ULL];
  tlu2_linear_linear_prelookup(&hg_efOut.mField0[0ULL], &hg_efOut.mField1[0ULL],
    &hg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = hg_efOut;
  t697[0ULL] = X[59ULL];
  tlu2_linear_linear_prelookup(&ig_efOut.mField0[0ULL], &ig_efOut.mField1[0ULL],
    &ig_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t97 = ig_efOut;
  tlu2_2d_linear_linear_value(&jg_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = jg_efOut[0];
  Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_rho_I = t806_idx_0;
  tlu2_2d_linear_linear_value(&kg_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = kg_efOut[0];
  Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_u_I = t806_idx_0;
  Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_h_I = X[59ULL] /
    (Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_rho_I == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_rho_I) * 100.0 + t806_idx_0;
  t697[0ULL] = t849;
  t602[0] = 2ULL;
  tlu2_linear_nearest_prelookup(&lg_efOut.mField0[0ULL], &lg_efOut.mField1[0ULL],
    &lg_efOut.mField2[0ULL], &nonscalar13[0ULL], &t697[0ULL], &t602[0ULL],
    &t120[0ULL]);
  t113 = lg_efOut;
  tlu2_1d_linear_nearest_value(&mg_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &nonscalar12[0ULL], &t602[0ULL], &t120[0ULL]);
  t806_idx_0 = mg_efOut[0];
  Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_orif = t806_idx_0;
  t697[0ULL] = X[303ULL];
  tlu2_linear_linear_prelookup(&ng_efOut.mField0[0ULL], &ng_efOut.mField1[0ULL],
    &ng_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = ng_efOut;
  tlu2_2d_linear_linear_value(&og_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = og_efOut[0];
  Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con2 = t806_idx_0;
  t697[0ULL] = X[305ULL];
  tlu2_linear_linear_prelookup(&pg_efOut.mField0[0ULL], &pg_efOut.mField1[0ULL],
    &pg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t71 = pg_efOut;
  tlu2_2d_linear_linear_value(&qg_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL], ((_NeDynamicSystem*)(LC)
    )->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = qg_efOut[0];
  Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con7 = t806_idx_0;
  t865 = -X[244ULL] / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t697[0ULL] = t849;
  t619[0] = 4ULL;
  tlu2_linear_nearest_prelookup(&rg_efOut.mField0[0ULL], &rg_efOut.mField1[0ULL],
    &rg_efOut.mField2[0ULL], &nonscalar15[0ULL], &t697[0ULL], &t619[0ULL],
    &t120[0ULL]);
  t113 = rg_efOut;
  tlu2_1d_linear_nearest_value(&sg_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &nonscalar14[0ULL], &t619[0ULL], &t120[0ULL]);
  t806_idx_0 = sg_efOut[0];
  t868 = t806_idx_0;
  t697[0ULL] = X[306ULL];
  tlu2_linear_linear_prelookup(&tg_efOut.mField0[0ULL], &tg_efOut.mField1[0ULL],
    &tg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t71 = tg_efOut;
  tlu2_2d_linear_linear_value(&ug_efOut[0ULL], &t71.mField0[0ULL], &t71.mField2
    [0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ug_efOut[0];
  Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co2 = t806_idx_0;
  t697[0ULL] = X[308ULL];
  tlu2_linear_linear_prelookup(&vg_efOut.mField0[0ULL], &vg_efOut.mField1[0ULL],
    &vg_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = vg_efOut;
  tlu2_2d_linear_linear_value(&wg_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = wg_efOut[0];
  Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co7 = t806_idx_0;
  t859 = -X[243ULL] / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t697[0ULL] = t849;
  tlu2_linear_nearest_prelookup(&xg_efOut.mField0[0ULL], &xg_efOut.mField1[0ULL],
    &xg_efOut.mField2[0ULL], &nonscalar17[0ULL], &t697[0ULL], &t602[0ULL],
    &t120[0ULL]);
  t112 = xg_efOut;
  tlu2_1d_linear_nearest_value(&yg_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &nonscalar16[0ULL], &t602[0ULL], &t120[0ULL]);
  t806_idx_0 = yg_efOut[0];
  t870 = t806_idx_0;
  t697[0ULL] = X[309ULL];
  tlu2_linear_linear_prelookup(&ah_efOut.mField0[0ULL], &ah_efOut.mField1[0ULL],
    &ah_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = ah_efOut;
  tlu2_2d_linear_linear_value(&bh_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t72.mField0[0ULL], &t72.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = bh_efOut[0];
  Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co2 = t806_idx_0;
  t697[0ULL] = X[311ULL];
  tlu2_linear_linear_prelookup(&ch_efOut.mField0[0ULL], &ch_efOut.mField1[0ULL],
    &ch_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = ch_efOut;
  tlu2_2d_linear_linear_value(&dh_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t101.mField0[0ULL], &t101.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = dh_efOut[0];
  Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co7 = t806_idx_0;
  t856 = -X[242ULL] / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t697[0ULL] = X[315ULL];
  tlu2_linear_linear_prelookup(&eh_efOut.mField0[0ULL], &eh_efOut.mField1[0ULL],
    &eh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t83 = eh_efOut;
  tlu2_2d_linear_linear_value(&fh_efOut[0ULL], &t83.mField0[0ULL], &t83.mField2
    [0ULL], &t53.mField0[0ULL], &t53.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = fh_efOut[0];
  t872 = t806_idx_0;
  t697[0ULL] = X[317ULL];
  tlu2_linear_linear_prelookup(&gh_efOut.mField0[0ULL], &gh_efOut.mField1[0ULL],
    &gh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = gh_efOut;
  t697[0ULL] = X[314ULL];
  tlu2_linear_linear_prelookup(&hh_efOut.mField0[0ULL], &hh_efOut.mField1[0ULL],
    &hh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t101 = hh_efOut;
  tlu2_2d_linear_linear_value(&ih_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t101.mField0[0ULL], &t101.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ih_efOut[0];
  Local_Restriction_TL_convection_B_rho = t806_idx_0;
  t873 = X[133ULL] / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t697[0ULL] = X[321ULL];
  tlu2_linear_linear_prelookup(&jh_efOut.mField0[0ULL], &jh_efOut.mField1[0ULL],
    &jh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t97 = jh_efOut;
  tlu2_2d_linear_linear_value(&kh_efOut[0ULL], &t97.mField0[0ULL], &t97.mField2
    [0ULL], &t70.mField0[0ULL], &t70.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = kh_efOut[0];
  t874 = t806_idx_0;
  t697[0ULL] = X[323ULL];
  tlu2_linear_linear_prelookup(&lh_efOut.mField0[0ULL], &lh_efOut.mField1[0ULL],
    &lh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = lh_efOut;
  t697[0ULL] = X[320ULL];
  tlu2_linear_linear_prelookup(&mh_efOut.mField0[0ULL], &mh_efOut.mField1[0ULL],
    &mh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t83 = mh_efOut;
  tlu2_2d_linear_linear_value(&nh_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t83.mField0[0ULL], &t83.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = nh_efOut[0];
  Local_Restriction_TL1_convection_B_rho = t806_idx_0;
  t875 = X[241ULL] / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t697[0ULL] = X[326ULL];
  tlu2_linear_linear_prelookup(&oh_efOut.mField0[0ULL], &oh_efOut.mField1[0ULL],
    &oh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t97 = oh_efOut;
  tlu2_2d_linear_linear_value(&ph_efOut[0ULL], &t97.mField0[0ULL], &t97.mField2
    [0ULL], &t89.mField0[0ULL], &t89.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = ph_efOut[0];
  t854 = t806_idx_0;
  t697[0ULL] = X[328ULL];
  tlu2_linear_linear_prelookup(&qh_efOut.mField0[0ULL], &qh_efOut.mField1[0ULL],
    &qh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t97 = qh_efOut;
  tlu2_2d_linear_linear_value(&rh_efOut[0ULL], &t97.mField0[0ULL], &t97.mField2
    [0ULL], &t108.mField0[0ULL], &t108.mField2[0ULL], ((_NeDynamicSystem*)(LC)
    )->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = rh_efOut[0];
  Pump_convection_B_rho = t806_idx_0;
  Pump_mechanical_power = tanh(t848 * 4.0 / 0.020943951023931952);
  t877 = X[13ULL] - X[46ULL];
  Pump_friction_torque_ = (fabs(t877) * 0.065735530263064557 + 0.05) *
    Pump_mechanical_power;
  Pump_mechanical_power = (t854 + t806_idx_0) / 2.0;
  t878 = X[119ULL] * t877 / (Pump_mechanical_power == 0.0 ? 1.0E-16 :
    Pump_mechanical_power);
  t697[0ULL] = X[326ULL];
  tlu2_linear_nearest_prelookup(&sh_efOut.mField0[0ULL], &sh_efOut.mField1[0ULL],
    &sh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = sh_efOut;
  t697[0ULL] = X[46ULL];
  tlu2_linear_nearest_prelookup(&th_efOut.mField0[0ULL], &th_efOut.mField1[0ULL],
    &th_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t97 = th_efOut;
  tlu2_2d_linear_nearest_value(&uh_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t97.mField0[0ULL], &t97.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = uh_efOut[0];
  Pump_mechanical_power = t806_idx_0;
  t697[0ULL] = X[328ULL];
  tlu2_linear_nearest_prelookup(&vh_efOut.mField0[0ULL], &vh_efOut.mField1[0ULL],
    &vh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t112 = vh_efOut;
  t697[0ULL] = X[13ULL];
  tlu2_linear_nearest_prelookup(&wh_efOut.mField0[0ULL], &wh_efOut.mField1[0ULL],
    &wh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t113 = wh_efOut;
  tlu2_2d_linear_nearest_value(&xh_efOut[0ULL], &t112.mField0[0ULL],
    &t112.mField2[0ULL], &t113.mField0[0ULL], &t113.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField10, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t806_idx_0 = xh_efOut[0];
  Pump_mechanical_power = (Pump_mechanical_power + t806_idx_0) / 2.0;
  t697[0ULL] = X[44ULL];
  tlu2_linear_linear_prelookup(&yh_efOut.mField0[0ULL], &yh_efOut.mField1[0ULL],
    &yh_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t697[0ULL],
    &t119[0ULL], &t120[0ULL]);
  t113 = yh_efOut;
  t697[0ULL] = X[61ULL];
  tlu2_linear_linear_prelookup(&ai_efOut.mField0[0ULL], &ai_efOut.mField1[0ULL],
    &ai_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t697[0ULL],
    &t122[0ULL], &t120[0ULL]);
  t112 = ai_efOut;
  tlu2_2d_linear_linear_value(&bi_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField4, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t697[0] = bi_efOut[0];
  Tank_rho_liquid = t697[0ULL];
  tlu2_2d_linear_linear_value(&ci_efOut[0ULL], &t113.mField0[0ULL],
    &t113.mField2[0ULL], &t112.mField0[0ULL], &t112.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField5, &t119[0ULL], &t122[0ULL], &t120[0ULL]);
  t697[0] = ci_efOut[0];
  Tank_u_liquid = t697[0ULL];
  if (-X[124ULL] >= 0.0) {
    t884 = -X[124ULL];
  } else {
    t884 = X[124ULL];
  }

  t886 = t830 * 0.00030000000000000003;
  intrm_sf_mf_166 = t884 * 0.0092 / (t886 == 0.0 ? 1.0E-16 : t886);
  intrm_sf_mf_123 = intrm_sf_mf_166 >= 1.0 ? intrm_sf_mf_166 : 1.0;
  intrm_sf_mf_132 = pmf_log10(6.9 / (intrm_sf_mf_123 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_123) + 0.00018834447959264583) * pmf_log10(6.9 /
    (intrm_sf_mf_123 == 0.0 ? 1.0E-16 : intrm_sf_mf_123) +
    0.00018834447959264583) * 3.24;
  intrm_sf_mf_123 = 1.0 / (intrm_sf_mf_132 == 0.0 ? 1.0E-16 : intrm_sf_mf_132);
  intrm_sf_mf_259 = Cold_Plate_Pipe_in_R1_rho_I * 5.0784000000000007E-8;
  intrm_sf_mf_132 = X[124ULL] * t830 * -48.0 / (intrm_sf_mf_259 == 0.0 ? 1.0E-16
    : intrm_sf_mf_259);
  t891 = Cold_Plate_Pipe_in_R1_rho_I * 1.6560000000000003E-9;
  t884 = X[124ULL] * t884 * intrm_sf_mf_123 * -0.75 / (t891 == 0.0 ? 1.0E-16 :
    t891);
  intrm_sf_mf_123 = (intrm_sf_mf_166 - 2000.0) / 2000.0;
  t888 = intrm_sf_mf_123 * intrm_sf_mf_123 * 3.0 - intrm_sf_mf_123 *
    intrm_sf_mf_123 * intrm_sf_mf_123 * 2.0;
  if (intrm_sf_mf_166 <= 2000.0) {
    intrm_sf_mf_123 = intrm_sf_mf_132 * 1.0E-5;
  } else if (intrm_sf_mf_166 >= 4000.0) {
    intrm_sf_mf_123 = t884 * 1.0E-5;
  } else {
    intrm_sf_mf_123 = ((1.0 - t888) * intrm_sf_mf_132 + t884 * t888) * 1.0E-5;
  }

  t884 = X[179ULL] >= 0.0 ? X[179ULL] : -X[179ULL];
  intrm_sf_mf_166 = t884 * 0.0092 / (t886 == 0.0 ? 1.0E-16 : t886);
  intrm_sf_mf_132 = intrm_sf_mf_166 >= 1.0 ? intrm_sf_mf_166 : 1.0;
  t895 = pmf_log10(6.9 / (intrm_sf_mf_132 == 0.0 ? 1.0E-16 : intrm_sf_mf_132) +
                   0.00018834447959264583) * pmf_log10(6.9 / (intrm_sf_mf_132 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_132) + 0.00018834447959264583) * 3.24;
  t830 = X[179ULL] * t830 * 48.0 / (intrm_sf_mf_259 == 0.0 ? 1.0E-16 :
    intrm_sf_mf_259);
  t884 = X[179ULL] * t884 * (1.0 / (t895 == 0.0 ? 1.0E-16 : t895)) * 0.75 /
    (t891 == 0.0 ? 1.0E-16 : t891);
  intrm_sf_mf_132 = (intrm_sf_mf_166 - 2000.0) / 2000.0;
  t888 = intrm_sf_mf_132 * intrm_sf_mf_132 * 3.0 - intrm_sf_mf_132 *
    intrm_sf_mf_132 * intrm_sf_mf_132 * 2.0;
  if (intrm_sf_mf_166 <= 2000.0) {
    intrm_sf_mf_132 = t830 * 1.0E-5;
  } else if (intrm_sf_mf_166 >= 4000.0) {
    intrm_sf_mf_132 = t884 * 1.0E-5;
  } else {
    intrm_sf_mf_132 = ((1.0 - t888) * t830 + t884 * t888) * 1.0E-5;
  }

  if (-X[179ULL] >= 0.0) {
    t830 = -X[179ULL];
  } else {
    t830 = X[179ULL];
  }

  t806_idx_0 = intrm_sf_mf_465 * 0.00030000000000000003;
  t884 = t830 * 0.0092 / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  intrm_sf_mf_166 = t884 >= 1.0 ? t884 : 1.0;
  t1090 = pmf_log10(6.9 / (intrm_sf_mf_166 == 0.0 ? 1.0E-16 : intrm_sf_mf_166) +
                    0.00018834447959264583) * pmf_log10(6.9 / (intrm_sf_mf_166 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_166) + 0.00018834447959264583) * 3.24;
  t1078 = Cold_Plate_Pipe_in_R2_rho_I * 5.0784000000000007E-8;
  t888 = X[179ULL] * intrm_sf_mf_465 * -48.0 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t1081 = Cold_Plate_Pipe_in_R2_rho_I * 1.6560000000000003E-9;
  t830 = X[179ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.75 /
    (t1081 == 0.0 ? 1.0E-16 : t1081);
  intrm_sf_mf_166 = (t884 - 2000.0) / 2000.0;
  t886 = intrm_sf_mf_166 * intrm_sf_mf_166 * 3.0 - intrm_sf_mf_166 *
    intrm_sf_mf_166 * intrm_sf_mf_166 * 2.0;
  if (t884 <= 2000.0) {
    intrm_sf_mf_166 = t888 * 1.0E-5;
  } else if (t884 >= 4000.0) {
    intrm_sf_mf_166 = t830 * 1.0E-5;
  } else {
    intrm_sf_mf_166 = ((1.0 - t886) * t888 + t830 * t886) * 1.0E-5;
  }

  if (-X[154ULL] >= 0.0) {
    t830 = -X[154ULL];
  } else {
    t830 = X[154ULL];
  }

  t884 = t830 * 0.0092 / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t888 = t884 >= 1.0 ? t884 : 1.0;
  t1090 = pmf_log10(6.9 / (t888 == 0.0 ? 1.0E-16 : t888) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t888 == 0.0 ?
    1.0E-16 : t888) + 0.00018834447959264583) * 3.24;
  intrm_sf_mf_465 = X[154ULL] * intrm_sf_mf_465 * -48.0 / (t1078 == 0.0 ?
    1.0E-16 : t1078);
  t830 = X[154ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.75 /
    (t1081 == 0.0 ? 1.0E-16 : t1081);
  t888 = (t884 - 2000.0) / 2000.0;
  t886 = t888 * t888 * 3.0 - t888 * t888 * t888 * 2.0;
  if (t884 <= 2000.0) {
    t888 = intrm_sf_mf_465 * 1.0E-5;
  } else if (t884 >= 4000.0) {
    t888 = t830 * 1.0E-5;
  } else {
    t888 = ((1.0 - t886) * intrm_sf_mf_465 + t830 * t886) * 1.0E-5;
  }

  t830 = X[191ULL] >= 0.0 ? X[191ULL] : -X[191ULL];
  t1078 = intrm_sf_mf_252 * 0.00030000000000000003;
  intrm_sf_mf_465 = t830 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t884 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  t1090 = pmf_log10(6.9 / (t884 == 0.0 ? 1.0E-16 : t884) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t884 == 0.0 ?
    1.0E-16 : t884) + 0.00018834447959264583) * 3.24;
  t1081 = Cold_Plate_Pipe_out_L1_rho_I * 5.0784000000000007E-8;
  t886 = X[191ULL] * intrm_sf_mf_252 * 32.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1083 = Cold_Plate_Pipe_out_L1_rho_I * 1.6560000000000003E-9;
  t830 = X[191ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * 0.5 /
    (t1083 == 0.0 ? 1.0E-16 : t1083);
  t884 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  intrm_sf_mf_259 = t884 * t884 * 3.0 - t884 * t884 * t884 * 2.0;
  if (intrm_sf_mf_465 <= 2000.0) {
    t884 = t886 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    t884 = t830 * 1.0E-5;
  } else {
    t884 = ((1.0 - intrm_sf_mf_259) * t886 + t830 * intrm_sf_mf_259) * 1.0E-5;
  }

  t830 = X[148ULL] >= 0.0 ? X[148ULL] : -X[148ULL];
  intrm_sf_mf_465 = t830 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t886 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  t1090 = pmf_log10(6.9 / (t886 == 0.0 ? 1.0E-16 : t886) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t886 == 0.0 ?
    1.0E-16 : t886) + 0.00018834447959264583) * 3.24;
  intrm_sf_mf_252 = X[148ULL] * intrm_sf_mf_252 * 32.0 / (t1081 == 0.0 ? 1.0E-16
    : t1081);
  t830 = X[148ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * 0.5 /
    (t1083 == 0.0 ? 1.0E-16 : t1083);
  t886 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  intrm_sf_mf_259 = t886 * t886 * 3.0 - t886 * t886 * t886 * 2.0;
  if (intrm_sf_mf_465 <= 2000.0) {
    t886 = intrm_sf_mf_252 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    t886 = t830 * 1.0E-5;
  } else {
    t886 = ((1.0 - intrm_sf_mf_259) * intrm_sf_mf_252 + t830 * intrm_sf_mf_259) *
      1.0E-5;
  }

  if (-X[138ULL] >= 0.0) {
    t830 = -X[138ULL];
  } else {
    t830 = X[138ULL];
  }

  t1078 = t839 * 0.00030000000000000003;
  intrm_sf_mf_465 = t830 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  intrm_sf_mf_252 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  t1090 = pmf_log10(6.9 / (intrm_sf_mf_252 == 0.0 ? 1.0E-16 : intrm_sf_mf_252) +
                    0.00018834447959264583) * pmf_log10(6.9 / (intrm_sf_mf_252 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_252) + 0.00018834447959264583) * 3.24;
  t1081 = Cold_Plate_Pipe_out_L2_rho_I * 5.0784000000000007E-8;
  intrm_sf_mf_259 = X[138ULL] * t839 * -32.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1083 = Cold_Plate_Pipe_out_L2_rho_I * 1.6560000000000003E-9;
  t830 = X[138ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.5 /
    (t1083 == 0.0 ? 1.0E-16 : t1083);
  intrm_sf_mf_252 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  t890 = intrm_sf_mf_252 * intrm_sf_mf_252 * 3.0 - intrm_sf_mf_252 *
    intrm_sf_mf_252 * intrm_sf_mf_252 * 2.0;
  if (intrm_sf_mf_465 <= 2000.0) {
    intrm_sf_mf_252 = intrm_sf_mf_259 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    intrm_sf_mf_252 = t830 * 1.0E-5;
  } else {
    intrm_sf_mf_252 = ((1.0 - t890) * intrm_sf_mf_259 + t830 * t890) * 1.0E-5;
  }

  if (-X[191ULL] >= 0.0) {
    t830 = -X[191ULL];
  } else {
    t830 = X[191ULL];
  }

  intrm_sf_mf_465 = t830 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  intrm_sf_mf_259 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  t1090 = pmf_log10(6.9 / (intrm_sf_mf_259 == 0.0 ? 1.0E-16 : intrm_sf_mf_259) +
                    0.00018834447959264583) * pmf_log10(6.9 / (intrm_sf_mf_259 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_259) + 0.00018834447959264583) * 3.24;
  t839 = X[191ULL] * t839 * -32.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t830 = X[191ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.5 /
    (t1083 == 0.0 ? 1.0E-16 : t1083);
  intrm_sf_mf_259 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  t890 = intrm_sf_mf_259 * intrm_sf_mf_259 * 3.0 - intrm_sf_mf_259 *
    intrm_sf_mf_259 * intrm_sf_mf_259 * 2.0;
  if (intrm_sf_mf_465 <= 2000.0) {
    intrm_sf_mf_259 = t839 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    intrm_sf_mf_259 = t830 * 1.0E-5;
  } else {
    intrm_sf_mf_259 = ((1.0 - t890) * t839 + t830 * t890) * 1.0E-5;
  }

  t830 = X[203ULL] >= 0.0 ? X[203ULL] : -X[203ULL];
  t1078 = t842 * 0.00030000000000000003;
  intrm_sf_mf_465 = t830 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t839 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  if (-X[122ULL] >= 0.0) {
    t890 = -X[122ULL];
  } else {
    t890 = X[122ULL];
  }

  t1090 = pmf_log10(6.9 / (t839 == 0.0 ? 1.0E-16 : t839) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t839 == 0.0 ?
    1.0E-16 : t839) + 0.00018834447959264583) * 3.24;
  t1081 = Cold_Plate_Pipe_out_R1_rho_I * 5.0784000000000007E-8;
  t891 = X[203ULL] * t842 * 32.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1083 = Cold_Plate_Pipe_out_R1_rho_I * 1.6560000000000003E-9;
  t830 = X[203ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * 0.5 /
    (t1083 == 0.0 ? 1.0E-16 : t1083);
  t839 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  t892 = t839 * t839 * 3.0 - t839 * t839 * t839 * 2.0;
  if (intrm_sf_mf_465 <= 2000.0) {
    t839 = t891 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    t839 = t830 * 1.0E-5;
  } else {
    t839 = ((1.0 - t892) * t891 + t830 * t892) * 1.0E-5;
  }

  t830 = X[149ULL] >= 0.0 ? X[149ULL] : -X[149ULL];
  intrm_sf_mf_465 = t830 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t891 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  t1090 = pmf_log10(6.9 / (t891 == 0.0 ? 1.0E-16 : t891) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t891 == 0.0 ?
    1.0E-16 : t891) + 0.00018834447959264583) * 3.24;
  t1078 = piece8 * 0.00030000000000000003;
  t892 = t890 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t842 = X[149ULL] * t842 * 32.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t830 = X[149ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * 0.5 /
    (t1083 == 0.0 ? 1.0E-16 : t1083);
  t891 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  t893 = t891 * t891 * 3.0 - t891 * t891 * t891 * 2.0;
  if (intrm_sf_mf_465 <= 2000.0) {
    t891 = t842 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    t891 = t830 * 1.0E-5;
  } else {
    t891 = ((1.0 - t893) * t842 + t830 * t893) * 1.0E-5;
  }

  t830 = t892 >= 1.0 ? t892 : 1.0;
  t1090 = pmf_log10(6.9 / (t830 == 0.0 ? 1.0E-16 : t830) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t830 == 0.0 ?
    1.0E-16 : t830) + 0.00018834447959264583) * 3.24;
  t830 = 1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090);
  t1081 = Cold_Plate_Pipe_in_L1_rho_I * 5.0784000000000007E-8;
  intrm_sf_mf_465 = X[122ULL] * piece8 * -48.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  if (-X[136ULL] >= 0.0) {
    t842 = -X[136ULL];
  } else {
    t842 = X[136ULL];
  }

  t1083 = t845 * 0.00030000000000000003;
  t893 = t842 * 0.0092 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t895 = t893 >= 1.0 ? t893 : 1.0;
  t1090 = pmf_log10(6.9 / (t895 == 0.0 ? 1.0E-16 : t895) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t895 == 0.0 ?
    1.0E-16 : t895) + 0.00018834447959264583) * 3.24;
  t806_idx_0 = Cold_Plate_Pipe_out_R2_rho_I * 5.0784000000000007E-8;
  t896 = X[136ULL] * t845 * -32.0 / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t995 = Cold_Plate_Pipe_out_R2_rho_I * 1.6560000000000003E-9;
  t842 = X[136ULL] * t842 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.5 /
    (t995 == 0.0 ? 1.0E-16 : t995);
  t895 = (t893 - 2000.0) / 2000.0;
  t898 = t895 * t895 * 3.0 - t895 * t895 * t895 * 2.0;
  if (t893 <= 2000.0) {
    t895 = t896 * 1.0E-5;
  } else if (t893 >= 4000.0) {
    t895 = t842 * 1.0E-5;
  } else {
    t895 = ((1.0 - t898) * t896 + t842 * t898) * 1.0E-5;
  }

  if (-X[203ULL] >= 0.0) {
    t842 = -X[203ULL];
  } else {
    t842 = X[203ULL];
  }

  t979 = Cold_Plate_Pipe_in_L1_rho_I * 1.6560000000000003E-9;
  t830 = X[122ULL] * t890 * t830 * -0.75 / (t979 == 0.0 ? 1.0E-16 : t979);
  t890 = t842 * 0.0092 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t893 = t890 >= 1.0 ? t890 : 1.0;
  t1090 = pmf_log10(6.9 / (t893 == 0.0 ? 1.0E-16 : t893) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t893 == 0.0 ?
    1.0E-16 : t893) + 0.00018834447959264583) * 3.24;
  t845 = X[203ULL] * t845 * -32.0 / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t842 = X[203ULL] * t842 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.5 /
    (t995 == 0.0 ? 1.0E-16 : t995);
  t893 = (t890 - 2000.0) / 2000.0;
  t896 = t893 * t893 * 3.0 - t893 * t893 * t893 * 2.0;
  if (t890 <= 2000.0) {
    t893 = t845 * 1.0E-5;
  } else if (t890 >= 4000.0) {
    t893 = t842 * 1.0E-5;
  } else {
    t893 = ((1.0 - t896) * t845 + t842 * t896) * 1.0E-5;
  }

  t842 = (t892 - 2000.0) / 2000.0;
  t845 = t842 * t842 * 3.0 - t842 * t842 * t842 * 2.0;
  if (t892 <= 2000.0) {
    t842 = intrm_sf_mf_465 * 1.0E-5;
  } else if (t892 >= 4000.0) {
    t842 = t830 * 1.0E-5;
  } else {
    t842 = ((1.0 - t845) * intrm_sf_mf_465 + t830 * t845) * 1.0E-5;
  }

  t830 = X[241ULL] >= 0.0 ? X[241ULL] : -X[241ULL];
  t1083 = intrm_sf_mf_474 * 0.00049087385212340522;
  intrm_sf_mf_465 = t830 * 0.025 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t845 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  t1090 = pmf_log10(6.9 / (t845 == 0.0 ? 1.0E-16 : t845) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t845 == 0.0 ? 1.0E-16 : t845) + 6.2093190311196615E-5) *
    3.24;
  t806_idx_0 = Heating_Cooling_Unit_Cooling_Inlet_rho_I * 6.1359231515425667E-7;
  t890 = X[241ULL] * intrm_sf_mf_474 * 24.0 / (t806_idx_0 == 0.0 ? 1.0E-16 :
    t806_idx_0);
  t995 = Heating_Cooling_Unit_Cooling_Inlet_rho_I * 1.2047856934923534E-8;
  t830 = X[241ULL] * t830 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * 0.375 /
    (t995 == 0.0 ? 1.0E-16 : t995);
  t845 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  t892 = X[167ULL] >= 0.0 ? X[167ULL] : -X[167ULL];
  t896 = t845 * t845 * 3.0 - t845 * t845 * t845 * 2.0;
  if (intrm_sf_mf_465 <= 2000.0) {
    t845 = t890 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    t845 = t830 * 1.0E-5;
  } else {
    t845 = ((1.0 - t896) * t890 + t830 * t896) * 1.0E-5;
  }

  t830 = Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot >= 0.0 ?
    Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot :
    -Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot;
  intrm_sf_mf_465 = t830 * 0.025 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t890 = intrm_sf_mf_465 >= 1.0 ? intrm_sf_mf_465 : 1.0;
  t1090 = pmf_log10(6.9 / (t890 == 0.0 ? 1.0E-16 : t890) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t890 == 0.0 ? 1.0E-16 : t890) + 6.2093190311196615E-5) *
    3.24;
  intrm_sf_mf_474 = Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot *
    intrm_sf_mf_474 * 24.0 / (t806_idx_0 == 0.0 ? 1.0E-16 : t806_idx_0);
  t830 = Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot * t830 * (1.0 /
    (t1090 == 0.0 ? 1.0E-16 : t1090)) * 0.375 / (t995 == 0.0 ? 1.0E-16 : t995);
  t890 = (intrm_sf_mf_465 - 2000.0) / 2000.0;
  t896 = t890 * t890 * 3.0 - t890 * t890 * t890 * 2.0;
  t890 = t892 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  if (intrm_sf_mf_465 <= 2000.0) {
    t898 = intrm_sf_mf_474 * 1.0E-5;
  } else if (intrm_sf_mf_465 >= 4000.0) {
    t898 = t830 * 1.0E-5;
  } else {
    t898 = ((1.0 - t896) * intrm_sf_mf_474 + t830 * t896) * 1.0E-5;
  }

  t830 = t890 >= 1.0 ? t890 : 1.0;
  t1090 = pmf_log10(6.9 / (t830 == 0.0 ? 1.0E-16 : t830) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t830 == 0.0 ?
    1.0E-16 : t830) + 0.00018834447959264583) * 3.24;
  t830 = 1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090);
  intrm_sf_mf_465 = X[242ULL] >= 0.0 ? X[242ULL] : -X[242ULL];
  t1078 = intrm_sf_mf_46 * 0.00049087385212340522;
  intrm_sf_mf_474 = intrm_sf_mf_465 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t896 = intrm_sf_mf_474 >= 1.0 ? intrm_sf_mf_474 : 1.0;
  t1090 = pmf_log10(6.9 / (t896 == 0.0 ? 1.0E-16 : t896) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t896 == 0.0 ? 1.0E-16 : t896) + 6.2093190311196615E-5) *
    3.24;
  piece8 = X[167ULL] * piece8 * 48.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1081 = Heating_Cooling_Unit_Heater_Pipe_TL_rho_I * 6.1359231515425667E-7;
  t995 = X[242ULL] * intrm_sf_mf_46 * 24.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1083 = Heating_Cooling_Unit_Heater_Pipe_TL_rho_I * 1.2047856934923534E-8;
  intrm_sf_mf_465 = X[242ULL] * intrm_sf_mf_465 * (1.0 / (t1090 == 0.0 ? 1.0E-16
    : t1090)) * 0.375 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t896 = (intrm_sf_mf_474 - 2000.0) / 2000.0;
  t901 = t896 * t896 * 3.0 - t896 * t896 * t896 * 2.0;
  if (intrm_sf_mf_474 <= 2000.0) {
    t896 = t995 * 1.0E-5;
  } else if (intrm_sf_mf_474 >= 4000.0) {
    t896 = intrm_sf_mf_465 * 1.0E-5;
  } else {
    t896 = ((1.0 - t901) * t995 + intrm_sf_mf_465 * t901) * 1.0E-5;
  }

  if (-X[232ULL] >= 0.0) {
    intrm_sf_mf_465 = -X[232ULL];
  } else {
    intrm_sf_mf_465 = X[232ULL];
  }

  intrm_sf_mf_474 = intrm_sf_mf_465 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t995 = intrm_sf_mf_474 >= 1.0 ? intrm_sf_mf_474 : 1.0;
  t1090 = pmf_log10(6.9 / (t995 == 0.0 ? 1.0E-16 : t995) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t995 == 0.0 ? 1.0E-16 : t995) + 6.2093190311196615E-5) *
    3.24;
  intrm_sf_mf_46 = X[232ULL] * intrm_sf_mf_46 * -24.0 / (t1081 == 0.0 ? 1.0E-16 :
    t1081);
  t830 = X[167ULL] * t892 * t830 * 0.75 / (t979 == 0.0 ? 1.0E-16 : t979);
  intrm_sf_mf_465 = X[232ULL] * intrm_sf_mf_465 * (1.0 / (t1090 == 0.0 ? 1.0E-16
    : t1090)) * -0.375 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t892 = (intrm_sf_mf_474 - 2000.0) / 2000.0;
  t995 = t892 * t892 * 3.0 - t892 * t892 * t892 * 2.0;
  if (intrm_sf_mf_474 <= 2000.0) {
    t892 = intrm_sf_mf_46 * 1.0E-5;
  } else if (intrm_sf_mf_474 >= 4000.0) {
    t892 = intrm_sf_mf_465 * 1.0E-5;
  } else {
    t892 = ((1.0 - t995) * intrm_sf_mf_46 + intrm_sf_mf_465 * t995) * 1.0E-5;
  }

  intrm_sf_mf_465 = (t890 - 2000.0) / 2000.0;
  intrm_sf_mf_474 = intrm_sf_mf_465 * intrm_sf_mf_465 * 3.0 - intrm_sf_mf_465 *
    intrm_sf_mf_465 * intrm_sf_mf_465 * 2.0;
  intrm_sf_mf_465 = X[243ULL] >= 0.0 ? X[243ULL] : -X[243ULL];
  if (t890 <= 2000.0) {
    intrm_sf_mf_46 = piece8 * 1.0E-5;
  } else if (t890 >= 4000.0) {
    intrm_sf_mf_46 = t830 * 1.0E-5;
  } else {
    intrm_sf_mf_46 = ((1.0 - intrm_sf_mf_474) * piece8 + t830 * intrm_sf_mf_474)
      * 1.0E-5;
  }

  t1078 = intrm_sf_mf_510 * 0.00049087385212340522;
  piece8 = intrm_sf_mf_465 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t830 = piece8 >= 1.0 ? piece8 : 1.0;
  t1090 = pmf_log10(6.9 / (t830 == 0.0 ? 1.0E-16 : t830) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t830 == 0.0 ? 1.0E-16 : t830) + 6.2093190311196615E-5) *
    3.24;
  t1081 = Heating_Cooling_Unit_Radiator_Radiator_inlet_rho_I *
    6.1359231515425667E-7;
  intrm_sf_mf_474 = X[243ULL] * intrm_sf_mf_510 * 8.0 / (t1081 == 0.0 ? 1.0E-16 :
    t1081);
  t1083 = Heating_Cooling_Unit_Radiator_Radiator_inlet_rho_I *
    1.2047856934923534E-8;
  t830 = X[243ULL] * intrm_sf_mf_465 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) *
    0.125 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  intrm_sf_mf_465 = (piece8 - 2000.0) / 2000.0;
  t890 = intrm_sf_mf_465 * intrm_sf_mf_465 * 3.0 - intrm_sf_mf_465 *
    intrm_sf_mf_465 * intrm_sf_mf_465 * 2.0;
  if (piece8 <= 2000.0) {
    intrm_sf_mf_465 = intrm_sf_mf_474 * 1.0E-5;
  } else if (piece8 >= 4000.0) {
    intrm_sf_mf_465 = t830 * 1.0E-5;
  } else {
    intrm_sf_mf_465 = ((1.0 - t890) * intrm_sf_mf_474 + t830 * t890) * 1.0E-5;
  }

  if (-X[274ULL] >= 0.0) {
    piece8 = -X[274ULL];
  } else {
    piece8 = X[274ULL];
  }

  t830 = piece8 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  intrm_sf_mf_474 = t830 >= 1.0 ? t830 : 1.0;
  t1090 = pmf_log10(6.9 / (intrm_sf_mf_474 == 0.0 ? 1.0E-16 : intrm_sf_mf_474) +
                    6.2093190311196615E-5) * pmf_log10(6.9 / (intrm_sf_mf_474 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_474) + 6.2093190311196615E-5) * 3.24;
  intrm_sf_mf_510 = X[274ULL] * intrm_sf_mf_510 * -8.0 / (t1081 == 0.0 ? 1.0E-16
    : t1081);
  piece8 = X[274ULL] * piece8 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) *
    -0.125 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  intrm_sf_mf_474 = (t830 - 2000.0) / 2000.0;
  t890 = intrm_sf_mf_474 * intrm_sf_mf_474 * 3.0 - intrm_sf_mf_474 *
    intrm_sf_mf_474 * intrm_sf_mf_474 * 2.0;
  if (t830 <= 2000.0) {
    intrm_sf_mf_474 = intrm_sf_mf_510 * 1.0E-5;
  } else if (t830 >= 4000.0) {
    intrm_sf_mf_474 = piece8 * 1.0E-5;
  } else {
    intrm_sf_mf_474 = ((1.0 - t890) * intrm_sf_mf_510 + piece8 * t890) * 1.0E-5;
  }

  if (-X[275ULL] >= 0.0) {
    piece8 = -X[275ULL];
  } else {
    piece8 = X[275ULL];
  }

  t1078 = intrm_sf_mf_553 * 0.00049087385212340522;
  t830 = piece8 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  intrm_sf_mf_510 = t830 >= 1.0 ? t830 : 1.0;
  t1090 = pmf_log10(6.9 / (intrm_sf_mf_510 == 0.0 ? 1.0E-16 : intrm_sf_mf_510) +
                    6.2093190311196615E-5) * pmf_log10(6.9 / (intrm_sf_mf_510 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_510) + 6.2093190311196615E-5) * 3.24;
  t1081 = Heating_Cooling_Unit_Radiator_Radiator_return_rho_I *
    6.1359231515425667E-7;
  t890 = X[275ULL] * intrm_sf_mf_553 * -8.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1083 = Heating_Cooling_Unit_Radiator_Radiator_return_rho_I *
    1.2047856934923534E-8;
  piece8 = X[275ULL] * piece8 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) *
    -0.125 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  intrm_sf_mf_510 = (t830 - 2000.0) / 2000.0;
  t995 = intrm_sf_mf_510 * intrm_sf_mf_510 * 3.0 - intrm_sf_mf_510 *
    intrm_sf_mf_510 * intrm_sf_mf_510 * 2.0;
  if (t830 <= 2000.0) {
    intrm_sf_mf_510 = t890 * 1.0E-5;
  } else if (t830 >= 4000.0) {
    intrm_sf_mf_510 = piece8 * 1.0E-5;
  } else {
    intrm_sf_mf_510 = ((1.0 - t995) * t890 + piece8 * t995) * 1.0E-5;
  }

  if (-X[230ULL] >= 0.0) {
    piece8 = -X[230ULL];
  } else {
    piece8 = X[230ULL];
  }

  t830 = piece8 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t890 = t830 >= 1.0 ? t830 : 1.0;
  t1090 = pmf_log10(6.9 / (t890 == 0.0 ? 1.0E-16 : t890) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t890 == 0.0 ? 1.0E-16 : t890) + 6.2093190311196615E-5) *
    3.24;
  intrm_sf_mf_553 = X[230ULL] * intrm_sf_mf_553 * -8.0 / (t1081 == 0.0 ? 1.0E-16
    : t1081);
  piece8 = X[230ULL] * piece8 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) *
    -0.125 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t890 = (t830 - 2000.0) / 2000.0;
  t995 = t890 * t890 * 3.0 - t890 * t890 * t890 * 2.0;
  if (t830 <= 2000.0) {
    t890 = intrm_sf_mf_553 * 1.0E-5;
  } else if (t830 >= 4000.0) {
    t890 = piece8 * 1.0E-5;
  } else {
    t890 = ((1.0 - t995) * intrm_sf_mf_553 + piece8 * t995) * 1.0E-5;
  }

  piece8 = X[244ULL] >= 0.0 ? X[244ULL] : -X[244ULL];
  t1078 = intrm_sf_mf_78 * 0.0049087385212340526;
  t830 = piece8 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  intrm_sf_mf_553 = t830 >= 1.0 ? t830 : 1.0;
  t1090 = pmf_log10(6.9 / (intrm_sf_mf_553 == 0.0 ? 1.0E-16 : intrm_sf_mf_553) +
                    6.2093190311196615E-5) * pmf_log10(6.9 / (intrm_sf_mf_553 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_553) + 6.2093190311196615E-5) * 3.24;
  t1081 = Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_rho_I *
    6.1359231515425667E-6;
  t995 = X[244ULL] * intrm_sf_mf_78 * 24.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1083 = Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_rho_I *
    1.2047856934923538E-6;
  piece8 = X[244ULL] * piece8 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * 0.375
    / (t1083 == 0.0 ? 1.0E-16 : t1083);
  intrm_sf_mf_553 = (t830 - 2000.0) / 2000.0;
  t901 = intrm_sf_mf_553 * intrm_sf_mf_553 * 3.0 - intrm_sf_mf_553 *
    intrm_sf_mf_553 * intrm_sf_mf_553 * 2.0;
  if (t830 <= 2000.0) {
    intrm_sf_mf_553 = t995 * 1.0E-5;
  } else if (t830 >= 4000.0) {
    intrm_sf_mf_553 = piece8 * 1.0E-5;
  } else {
    intrm_sf_mf_553 = ((1.0 - t901) * t995 + piece8 * t901) * 1.0E-5;
  }

  if (-X[228ULL] >= 0.0) {
    piece8 = -X[228ULL];
  } else {
    piece8 = X[228ULL];
  }

  t830 = piece8 * 0.025 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t995 = t830 >= 1.0 ? t830 : 1.0;
  t1090 = pmf_log10(6.9 / (t995 == 0.0 ? 1.0E-16 : t995) + 6.2093190311196615E-5)
    * pmf_log10(6.9 / (t995 == 0.0 ? 1.0E-16 : t995) + 6.2093190311196615E-5) *
    3.24;
  intrm_sf_mf_78 = X[228ULL] * intrm_sf_mf_78 * -24.0 / (t1081 == 0.0 ? 1.0E-16 :
    t1081);
  piece8 = X[228ULL] * piece8 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) *
    -0.375 / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t995 = (t830 - 2000.0) / 2000.0;
  t901 = t995 * t995 * 3.0 - t995 * t995 * t995 * 2.0;
  if (t830 <= 2000.0) {
    t995 = intrm_sf_mf_78 * 1.0E-5;
  } else if (t830 >= 4000.0) {
    t995 = piece8 * 1.0E-5;
  } else {
    t995 = ((1.0 - t901) * intrm_sf_mf_78 + piece8 * t901) * 1.0E-5;
  }

  if (-X[167ULL] >= 0.0) {
    piece8 = -X[167ULL];
  } else {
    piece8 = X[167ULL];
  }

  t1078 = t827 * 0.00030000000000000003;
  t830 = piece8 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  intrm_sf_mf_78 = t830 >= 1.0 ? t830 : 1.0;
  t1090 = pmf_log10(6.9 / (intrm_sf_mf_78 == 0.0 ? 1.0E-16 : intrm_sf_mf_78) +
                    0.00018834447959264583) * pmf_log10(6.9 / (intrm_sf_mf_78 ==
    0.0 ? 1.0E-16 : intrm_sf_mf_78) + 0.00018834447959264583) * 3.24;
  t1081 = Cold_Plate_Pipe_in_L2_rho_I * 5.0784000000000007E-8;
  t901 = X[167ULL] * t827 * -48.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  t1083 = Cold_Plate_Pipe_in_L2_rho_I * 1.6560000000000003E-9;
  piece8 = X[167ULL] * piece8 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.75
    / (t1083 == 0.0 ? 1.0E-16 : t1083);
  intrm_sf_mf_78 = (t830 - 2000.0) / 2000.0;
  t806_idx_0 = intrm_sf_mf_78 * intrm_sf_mf_78 * 3.0 - intrm_sf_mf_78 *
    intrm_sf_mf_78 * intrm_sf_mf_78 * 2.0;
  if (t830 <= 2000.0) {
    intrm_sf_mf_78 = t901 * 1.0E-5;
  } else if (t830 >= 4000.0) {
    intrm_sf_mf_78 = piece8 * 1.0E-5;
  } else {
    intrm_sf_mf_78 = ((1.0 - t806_idx_0) * t901 + piece8 * t806_idx_0) * 1.0E-5;
  }

  if (-X[152ULL] >= 0.0) {
    piece8 = -X[152ULL];
  } else {
    piece8 = X[152ULL];
  }

  t830 = piece8 * 0.0092 / (t1078 == 0.0 ? 1.0E-16 : t1078);
  t901 = t830 >= 1.0 ? t830 : 1.0;
  t1090 = pmf_log10(6.9 / (t901 == 0.0 ? 1.0E-16 : t901) +
                    0.00018834447959264583) * pmf_log10(6.9 / (t901 == 0.0 ?
    1.0E-16 : t901) + 0.00018834447959264583) * 3.24;
  t827 = X[152ULL] * t827 * -48.0 / (t1081 == 0.0 ? 1.0E-16 : t1081);
  piece8 = X[152ULL] * piece8 * (1.0 / (t1090 == 0.0 ? 1.0E-16 : t1090)) * -0.75
    / (t1083 == 0.0 ? 1.0E-16 : t1083);
  t901 = (t830 - 2000.0) / 2000.0;
  t806_idx_0 = t901 * t901 * 3.0 - t901 * t901 * t901 * 2.0;
  if (t830 <= 2000.0) {
    t901 = t827 * 1.0E-5;
  } else if (t830 >= 4000.0) {
    t901 = piece8 * 1.0E-5;
  } else {
    t901 = ((1.0 - t806_idx_0) * t827 + piece8 * t806_idx_0) * 1.0E-5;
  }

  t827 = X[43ULL] * 0.00375;
  t830 = X[44ULL] * 0.00375;
  t724[0ULL] = U_idx_0;
  t724[1ULL] = U_idx_0;
  t724[2ULL] = X[63ULL];
  t724[3ULL] = X[64ULL] * 0.1;
  t724[4ULL] = X[65ULL];
  t724[5ULL] = X[66ULL] * 0.1;
  t724[6ULL] = U_idx_0;
  t724[7ULL] = X[67ULL];
  t724[8ULL] = -X[67ULL];
  t724[9ULL] = X[63ULL];
  t724[10ULL] = X[64ULL] * 0.1;
  t724[11ULL] = X[67ULL];
  t724[12ULL] = X[68ULL];
  t724[13ULL] = U_idx_0;
  t724[14ULL] = X[65ULL];
  t724[15ULL] = X[66ULL] * 0.1;
  t724[16ULL] = -X[67ULL];
  t724[17ULL] = X[68ULL];
  t724[18ULL] = -U_idx_0;
  t724[19ULL] = U_idx_0;
  t724[20ULL] = -U_idx_0;
  t724[21ULL] = X[0ULL];
  t724[22ULL] = X[0ULL];
  t724[23ULL] = Battery_Heat_Flow_Rate_Sensor_H * 1000.0;
  t724[24ULL] = Battery_Heat_Flow_Rate_Sensor_H * 1000.0;
  t724[25ULL] = X[1ULL];
  t724[26ULL] = X[1ULL];
  t724[27ULL] = Battery_Heat_Flow_Rate_Sensor1_H * 1000.0;
  t724[28ULL] = Battery_Heat_Flow_Rate_Sensor1_H * 1000.0;
  t724[29ULL] = X[3ULL];
  t724[30ULL] = X[3ULL];
  t724[31ULL] = Battery_Heat_Flow_Rate_Sensor2_H * 1000.0;
  t724[32ULL] = Battery_Heat_Flow_Rate_Sensor2_H * 1000.0;
  t724[33ULL] = X[2ULL];
  t724[34ULL] = X[2ULL];
  t724[35ULL] = Battery_Heat_Flow_Rate_Sensor3_H * 1000.0;
  t724[36ULL] = Battery_Heat_Flow_Rate_Sensor3_H * 1000.0;
  t724[37ULL] = U_idx_1;
  t724[38ULL] = U_idx_1;
  t724[39ULL] = U_idx_1;
  t724[40ULL] = Battery_Input_Current_tail_v;
  t724[41ULL] = Battery_Input_Current_tail_v;
  t724[42ULL] = X[0ULL] - 273.15;
  t724[43ULL] = X[1ULL] - 273.15;
  t724[44ULL] = X[2ULL] - 273.15;
  t724[45ULL] = X[3ULL] - 273.15;
  t724[46ULL] = -U_idx_1;
  t724[47ULL] = X[77ULL];
  t724[48ULL] = Battery_Pack_1_Controlled_Voltage_Source_p_v;
  t724[49ULL] = Battery_Pack_1_Controlled_Voltage_Source_v;
  t724[50ULL] = Battery_Pack_1_Controlled_Voltage_Source_v;
  t724[51ULL] = X[0ULL];
  t724[52ULL] = X[80ULL];
  t724[53ULL] = X[0ULL];
  t724[54ULL] = -X[81ULL] + U_idx_1;
  t724[55ULL] = Battery_Pack_1_Lithium_Cell_1RC_C1_n_v;
  t724[56ULL] = X[78ULL];
  t724[57ULL] = X[4ULL];
  t724[58ULL] = X[82ULL] * 0.00027777777777777778;
  t724[59ULL] = X[5ULL] * 0.00027777777777777778;
  t724[60ULL] = X[80ULL];
  t724[61ULL] = X[0ULL];
  t724[62ULL] = -U_idx_1;
  t724[63ULL] = Battery_Pack_1_Controlled_Voltage_Source_p_v;
  t724[64ULL] = X[78ULL];
  t724[65ULL] = X[79ULL];
  t724[66ULL] = Battery_Pack_1_Lithium_Cell_1RC_P * 1000.0;
  t724[67ULL] = Battery_Pack_1_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[68ULL] = X[84ULL] * 1000.0;
  t724[69ULL] = Battery_Pack_1_Lithium_Cell_1RC_P * 1000.0;
  t724[70ULL] = X[80ULL];
  t724[71ULL] = X[0ULL];
  t724[72ULL] = U_idx_1;
  t724[73ULL] = Battery_Input_Current_tail_v;
  t724[74ULL] = Battery_Pack_1_Lithium_Cell_1RC_C1_n_v;
  t724[75ULL] = X[84ULL] * 1000.0;
  t724[76ULL] = ((-X[4ULL] + X[77ULL] * 0.052631578947368418) + X[78ULL] *
                 -0.052631578947368363) + X[79ULL] * 1.0526315789473684;
  t724[77ULL] = X[80ULL];
  t724[78ULL] = X[0ULL];
  t724[79ULL] = X[81ULL];
  t724[80ULL] = Battery_Pack_1_Lithium_Cell_1RC_C1_n_v;
  t724[81ULL] = X[78ULL];
  t724[82ULL] = Battery_Pack_1_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[83ULL] = X[4ULL];
  t724[84ULL] = X[80ULL];
  t724[85ULL] = X[0ULL];
  t724[86ULL] = Battery_Input_Current_tail_v;
  t724[87ULL] = Battery_Pack_1_Controlled_Voltage_Source_p_v;
  t724[88ULL] = Battery_Pack_1_Lithium_Cell_1RC_P * 1000.0;
  t724[89ULL] = Battery_Pack_1_Lithium_Cell_1RC_P * 20000.0;
  t724[90ULL] = Battery_Pack_1_Controlled_Voltage_Source_v *
    0.052631578947368418;
  t724[91ULL] = Battery_Pack_1_Controlled_Voltage_Source_v;
  t724[92ULL] = X[0ULL];
  t724[93ULL] = X[0ULL];
  t724[94ULL] = X[0ULL];
  t724[95ULL] = X[83ULL] * 1000.0;
  t724[96ULL] = X[0ULL];
  t724[97ULL] = X[0ULL];
  t724[98ULL] = Battery_Pack_1_Lithium_Cell_1RC_P * 20000.0;
  t724[99ULL] = Battery_Pack_1_Lithium_Cell_1RC_P * 20000.0;
  t724[100ULL] = -X[0ULL];
  t724[101ULL] = X[0ULL];
  t724[102ULL] = Battery_Pack_1_Lithium_Cell_1RC_P * 20000.0;
  t724[103ULL] = X[0ULL];
  t724[104ULL] = X[0ULL];
  t724[105ULL] = X[0ULL];
  t724[106ULL] = Battery_Pack_1_Controlled_Voltage_Source_v *
    0.052631578947368418;
  t724[107ULL] = Battery_Pack_1_Controlled_Voltage_Source_p_v;
  t724[108ULL] = Battery_Input_Current_tail_v;
  t724[109ULL] = Battery_Input_Current_tail_v;
  t724[110ULL] = X[77ULL];
  t724[111ULL] = -U_idx_1;
  t724[112ULL] = X[85ULL];
  t724[113ULL] = t811;
  t724[114ULL] = Battery_Pack_2_Controlled_Voltage_Source_v;
  t724[115ULL] = Battery_Pack_2_Controlled_Voltage_Source_v;
  t724[116ULL] = X[1ULL];
  t724[117ULL] = X[88ULL];
  t724[118ULL] = X[1ULL];
  t724[119ULL] = -X[89ULL] + U_idx_1;
  t724[120ULL] = Battery_Pack_2_Lithium_Cell_1RC_C1_n_v;
  t724[121ULL] = Battery_Pack_2_Lithium_Cell_1RC_C1_p_v;
  t724[122ULL] = X[6ULL];
  t724[123ULL] = X[90ULL] * 0.00027777777777777778;
  t724[124ULL] = X[7ULL] * 0.00027777777777777778;
  t724[125ULL] = X[88ULL];
  t724[126ULL] = X[1ULL];
  t724[127ULL] = -U_idx_1;
  t724[128ULL] = t811;
  t724[129ULL] = Battery_Pack_2_Lithium_Cell_1RC_C1_p_v;
  t724[130ULL] = X[86ULL];
  t724[131ULL] = Battery_Pack_2_Lithium_Cell_1RC_P * 1000.0;
  t724[132ULL] = Battery_Pack_2_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[133ULL] = X[92ULL] * 1000.0;
  t724[134ULL] = Battery_Pack_2_Lithium_Cell_1RC_P * 1000.0;
  t724[135ULL] = X[88ULL];
  t724[136ULL] = X[1ULL];
  t724[137ULL] = U_idx_1;
  t724[138ULL] = X[77ULL];
  t724[139ULL] = Battery_Pack_2_Lithium_Cell_1RC_C1_n_v;
  t724[140ULL] = X[92ULL] * 1000.0;
  t724[141ULL] = X[87ULL];
  t724[142ULL] = X[88ULL];
  t724[143ULL] = X[1ULL];
  t724[144ULL] = X[89ULL];
  t724[145ULL] = Battery_Pack_2_Lithium_Cell_1RC_C1_n_v;
  t724[146ULL] = Battery_Pack_2_Lithium_Cell_1RC_C1_p_v;
  t724[147ULL] = Battery_Pack_2_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[148ULL] = X[6ULL];
  t724[149ULL] = X[88ULL];
  t724[150ULL] = X[1ULL];
  t724[151ULL] = X[77ULL];
  t724[152ULL] = t811;
  t724[153ULL] = Battery_Pack_2_Lithium_Cell_1RC_P * 1000.0;
  t724[154ULL] = Battery_Pack_2_Lithium_Cell_1RC_P * 20000.0;
  t724[155ULL] = Battery_Pack_2_Controlled_Voltage_Source_v *
    0.052631578947368418;
  t724[156ULL] = Battery_Pack_2_Controlled_Voltage_Source_v;
  t724[157ULL] = X[1ULL];
  t724[158ULL] = X[1ULL];
  t724[159ULL] = X[1ULL];
  t724[160ULL] = X[91ULL] * 1000.0;
  t724[161ULL] = X[1ULL];
  t724[162ULL] = X[1ULL];
  t724[163ULL] = Battery_Pack_2_Lithium_Cell_1RC_P * 20000.0;
  t724[164ULL] = Battery_Pack_2_Lithium_Cell_1RC_P * 20000.0;
  t724[165ULL] = -X[1ULL];
  t724[166ULL] = X[1ULL];
  t724[167ULL] = Battery_Pack_2_Lithium_Cell_1RC_P * 20000.0;
  t724[168ULL] = X[1ULL];
  t724[169ULL] = X[1ULL];
  t724[170ULL] = X[1ULL];
  t724[171ULL] = Battery_Pack_2_Controlled_Voltage_Source_v *
    0.052631578947368418;
  t724[172ULL] = t811;
  t724[173ULL] = X[77ULL];
  t724[174ULL] = X[77ULL];
  t724[175ULL] = X[85ULL];
  t724[176ULL] = -U_idx_1;
  t724[177ULL] = X[93ULL];
  t724[178ULL] = t812;
  t724[179ULL] = Battery_Pack_3_Controlled_Voltage_Source_v;
  t724[180ULL] = Battery_Pack_3_Controlled_Voltage_Source_v;
  t724[181ULL] = X[3ULL];
  t724[182ULL] = X[96ULL];
  t724[183ULL] = X[3ULL];
  t724[184ULL] = -X[97ULL] + U_idx_1;
  t724[185ULL] = Battery_Pack_3_Lithium_Cell_1RC_C1_n_v;
  t724[186ULL] = Battery_Pack_3_Lithium_Cell_1RC_C1_p_v;
  t724[187ULL] = X[8ULL];
  t724[188ULL] = X[98ULL] * 0.00027777777777777778;
  t724[189ULL] = X[9ULL] * 0.00027777777777777778;
  t724[190ULL] = X[96ULL];
  t724[191ULL] = X[3ULL];
  t724[192ULL] = -U_idx_1;
  t724[193ULL] = t812;
  t724[194ULL] = Battery_Pack_3_Lithium_Cell_1RC_C1_p_v;
  t724[195ULL] = X[94ULL];
  t724[196ULL] = Battery_Pack_3_Lithium_Cell_1RC_P * 1000.0;
  t724[197ULL] = Battery_Pack_3_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[198ULL] = X[100ULL] * 1000.0;
  t724[199ULL] = Battery_Pack_3_Lithium_Cell_1RC_P * 1000.0;
  t724[200ULL] = X[96ULL];
  t724[201ULL] = X[3ULL];
  t724[202ULL] = U_idx_1;
  t724[203ULL] = X[85ULL];
  t724[204ULL] = Battery_Pack_3_Lithium_Cell_1RC_C1_n_v;
  t724[205ULL] = X[100ULL] * 1000.0;
  t724[206ULL] = X[95ULL];
  t724[207ULL] = X[96ULL];
  t724[208ULL] = X[3ULL];
  t724[209ULL] = X[97ULL];
  t724[210ULL] = Battery_Pack_3_Lithium_Cell_1RC_C1_n_v;
  t724[211ULL] = Battery_Pack_3_Lithium_Cell_1RC_C1_p_v;
  t724[212ULL] = Battery_Pack_3_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[213ULL] = X[8ULL];
  t724[214ULL] = X[96ULL];
  t724[215ULL] = X[3ULL];
  t724[216ULL] = X[85ULL];
  t724[217ULL] = t812;
  t724[218ULL] = Battery_Pack_3_Lithium_Cell_1RC_P * 1000.0;
  t724[219ULL] = Battery_Pack_3_Lithium_Cell_1RC_P * 20000.0;
  t724[220ULL] = Battery_Pack_3_Controlled_Voltage_Source_v *
    0.052631578947368418;
  t724[221ULL] = Battery_Pack_3_Controlled_Voltage_Source_v;
  t724[222ULL] = X[3ULL];
  t724[223ULL] = X[3ULL];
  t724[224ULL] = X[3ULL];
  t724[225ULL] = X[99ULL] * 1000.0;
  t724[226ULL] = X[3ULL];
  t724[227ULL] = X[3ULL];
  t724[228ULL] = Battery_Pack_3_Lithium_Cell_1RC_P * 20000.0;
  t724[229ULL] = Battery_Pack_3_Lithium_Cell_1RC_P * 20000.0;
  t724[230ULL] = -X[3ULL];
  t724[231ULL] = X[3ULL];
  t724[232ULL] = Battery_Pack_3_Lithium_Cell_1RC_P * 20000.0;
  t724[233ULL] = X[3ULL];
  t724[234ULL] = X[3ULL];
  t724[235ULL] = X[3ULL];
  t724[236ULL] = Battery_Pack_3_Controlled_Voltage_Source_v *
    0.052631578947368418;
  t724[237ULL] = t812;
  t724[238ULL] = X[85ULL];
  t724[239ULL] = X[85ULL];
  t724[240ULL] = X[93ULL];
  t724[241ULL] = -U_idx_1;
  t724[242ULL] = t813;
  t724[243ULL] = t813;
  t724[244ULL] = t813;
  t724[245ULL] = X[2ULL];
  t724[246ULL] = X[103ULL];
  t724[247ULL] = X[2ULL];
  t724[248ULL] = -X[104ULL] + U_idx_1;
  t724[249ULL] = Battery_Pack_4_Lithium_Cell_1RC_C1_n_v;
  t724[250ULL] = Battery_Pack_4_Lithium_Cell_1RC_C1_p_v;
  t724[251ULL] = X[10ULL];
  t724[252ULL] = X[105ULL] * 0.00027777777777777778;
  t724[253ULL] = X[11ULL] * 0.00027777777777777778;
  t724[254ULL] = X[103ULL];
  t724[255ULL] = X[2ULL];
  t724[256ULL] = -U_idx_1;
  t724[257ULL] = t813;
  t724[258ULL] = Battery_Pack_4_Lithium_Cell_1RC_C1_p_v;
  t724[259ULL] = X[101ULL];
  t724[260ULL] = Battery_Pack_4_Lithium_Cell_1RC_P * 1000.0;
  t724[261ULL] = Battery_Pack_4_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[262ULL] = X[107ULL] * 1000.0;
  t724[263ULL] = Battery_Pack_4_Lithium_Cell_1RC_P * 1000.0;
  t724[264ULL] = X[103ULL];
  t724[265ULL] = X[2ULL];
  t724[266ULL] = U_idx_1;
  t724[267ULL] = X[93ULL];
  t724[268ULL] = Battery_Pack_4_Lithium_Cell_1RC_C1_n_v;
  t724[269ULL] = X[107ULL] * 1000.0;
  t724[270ULL] = X[102ULL];
  t724[271ULL] = X[103ULL];
  t724[272ULL] = X[2ULL];
  t724[273ULL] = X[104ULL];
  t724[274ULL] = Battery_Pack_4_Lithium_Cell_1RC_C1_n_v;
  t724[275ULL] = Battery_Pack_4_Lithium_Cell_1RC_C1_p_v;
  t724[276ULL] = Battery_Pack_4_Lithium_Cell_1RC_PS_Add_I1 * 1000.0;
  t724[277ULL] = X[10ULL];
  t724[278ULL] = X[103ULL];
  t724[279ULL] = X[2ULL];
  t724[280ULL] = X[93ULL];
  t724[281ULL] = t813;
  t724[282ULL] = Battery_Pack_4_Lithium_Cell_1RC_P * 1000.0;
  t724[283ULL] = Battery_Pack_4_Lithium_Cell_1RC_P * 20000.0;
  t724[284ULL] = t813 * 0.052631578947368418;
  t724[285ULL] = t813;
  t724[286ULL] = X[2ULL];
  t724[287ULL] = X[2ULL];
  t724[288ULL] = X[2ULL];
  t724[289ULL] = X[106ULL] * 1000.0;
  t724[290ULL] = X[2ULL];
  t724[291ULL] = X[2ULL];
  t724[292ULL] = Battery_Pack_4_Lithium_Cell_1RC_P * 20000.0;
  t724[293ULL] = Battery_Pack_4_Lithium_Cell_1RC_P * 20000.0;
  t724[294ULL] = -X[2ULL];
  t724[295ULL] = X[2ULL];
  t724[296ULL] = Battery_Pack_4_Lithium_Cell_1RC_P * 20000.0;
  t724[297ULL] = X[2ULL];
  t724[298ULL] = X[2ULL];
  t724[299ULL] = X[2ULL];
  t724[300ULL] = t813 * 0.052631578947368418;
  t724[301ULL] = t813;
  t724[302ULL] = X[93ULL];
  t724[303ULL] = X[93ULL];
  t724[304ULL] = X[0ULL];
  t724[305ULL] = X[1ULL];
  t724[306ULL] = X[3ULL];
  t724[307ULL] = X[2ULL];
  t724[308ULL] = Battery_Input_Current_tail_v;
  t724[309ULL] = Battery_Input_Current_tail_v;
  t724[310ULL] = Battery_Input_Current_tail_v;
  t724[311ULL] = U_idx_1;
  t724[312ULL] = X[108ULL];
  t724[313ULL] = X[109ULL] * 0.1;
  t724[314ULL] = X[108ULL];
  t724[315ULL] = X[109ULL] * 0.1;
  t724[316ULL] = X[110ULL];
  t724[317ULL] = X[111ULL] * 0.1;
  t724[318ULL] = X[110ULL];
  t724[319ULL] = X[111ULL] * 0.1;
  t724[320ULL] = X[112ULL];
  t724[321ULL] = X[13ULL] * 0.1;
  t724[322ULL] = X[113ULL];
  t724[323ULL] = X[13ULL] * 0.1;
  t724[324ULL] = X[114ULL];
  t724[325ULL] = X[13ULL] * 0.1;
  t724[326ULL] = X[12ULL];
  t724[327ULL] = X[13ULL] * 0.1;
  t724[328ULL] = X[12ULL];
  t724[329ULL] = X[115ULL];
  t724[330ULL] = X[116ULL];
  t724[331ULL] = X[117ULL];
  t724[332ULL] = X[12ULL];
  t724[333ULL] = X[13ULL] * 0.1;
  t724[334ULL] = X[112ULL];
  t724[335ULL] = X[13ULL] * 0.1;
  t724[336ULL] = X[115ULL];
  t724[337ULL] = X[118ULL];
  t724[338ULL] = X[119ULL];
  t724[339ULL] = X[120ULL];
  t724[340ULL] = X[113ULL];
  t724[341ULL] = X[13ULL] * 0.1;
  t724[342ULL] = X[116ULL];
  t724[343ULL] = X[121ULL];
  t724[344ULL] = X[122ULL];
  t724[345ULL] = X[120ULL];
  t724[346ULL] = X[114ULL];
  t724[347ULL] = X[13ULL] * 0.1;
  t724[348ULL] = X[117ULL];
  t724[349ULL] = X[123ULL];
  t724[350ULL] = X[124ULL];
  t724[351ULL] = X[120ULL];
  t724[352ULL] = X[125ULL];
  t724[353ULL] = X[120ULL];
  t724[354ULL] = X[13ULL] / (X[125ULL] == 0.0 ? 1.0E-16 : X[125ULL]) * 100.0 +
    X[120ULL];
  t724[355ULL] = X[119ULL];
  t724[356ULL] = X[122ULL];
  t724[357ULL] = X[124ULL];
  t724[358ULL] = X[126ULL];
  t724[359ULL] = X[15ULL] * 0.1;
  t724[360ULL] = X[127ULL];
  t724[361ULL] = X[15ULL] * 0.1;
  t724[362ULL] = X[128ULL];
  t724[363ULL] = X[15ULL] * 0.1;
  t724[364ULL] = X[14ULL];
  t724[365ULL] = X[15ULL] * 0.1;
  t724[366ULL] = X[14ULL];
  t724[367ULL] = X[129ULL];
  t724[368ULL] = X[130ULL];
  t724[369ULL] = X[131ULL];
  t724[370ULL] = X[14ULL];
  t724[371ULL] = X[15ULL] * 0.1;
  t724[372ULL] = X[126ULL];
  t724[373ULL] = X[15ULL] * 0.1;
  t724[374ULL] = X[129ULL];
  t724[375ULL] = X[132ULL];
  t724[376ULL] = X[133ULL];
  t724[377ULL] = X[134ULL];
  t724[378ULL] = X[127ULL];
  t724[379ULL] = X[15ULL] * 0.1;
  t724[380ULL] = X[130ULL];
  t724[381ULL] = X[135ULL];
  t724[382ULL] = X[136ULL];
  t724[383ULL] = X[134ULL];
  t724[384ULL] = X[128ULL];
  t724[385ULL] = X[15ULL] * 0.1;
  t724[386ULL] = X[131ULL];
  t724[387ULL] = X[137ULL];
  t724[388ULL] = X[138ULL];
  t724[389ULL] = X[134ULL];
  t724[390ULL] = X[139ULL];
  t724[391ULL] = X[134ULL];
  t724[392ULL] = X[15ULL] / (X[139ULL] == 0.0 ? 1.0E-16 : X[139ULL]) * 100.0 +
    X[134ULL];
  t724[393ULL] = X[133ULL];
  t724[394ULL] = X[136ULL];
  t724[395ULL] = X[138ULL];
  t724[396ULL] = X[140ULL];
  t724[397ULL] = X[17ULL] * 0.1;
  t724[398ULL] = X[141ULL];
  t724[399ULL] = X[17ULL] * 0.1;
  t724[400ULL] = X[142ULL];
  t724[401ULL] = X[17ULL] * 0.1;
  t724[402ULL] = X[16ULL];
  t724[403ULL] = X[17ULL] * 0.1;
  t724[404ULL] = X[16ULL];
  t724[405ULL] = t820;
  t724[406ULL] = X[145ULL];
  t724[407ULL] = X[146ULL];
  t724[408ULL] = X[16ULL];
  t724[409ULL] = X[17ULL] * 0.1;
  t724[410ULL] = X[140ULL];
  t724[411ULL] = X[17ULL] * 0.1;
  t724[412ULL] = t820;
  t724[413ULL] = X[147ULL];
  t724[414ULL] = t821;
  t724[415ULL] = X[150ULL];
  t724[416ULL] = X[141ULL];
  t724[417ULL] = X[17ULL] * 0.1;
  t724[418ULL] = X[145ULL];
  t724[419ULL] = X[151ULL];
  t724[420ULL] = X[152ULL];
  t724[421ULL] = X[150ULL];
  t724[422ULL] = X[142ULL];
  t724[423ULL] = X[17ULL] * 0.1;
  t724[424ULL] = X[146ULL];
  t724[425ULL] = X[153ULL];
  t724[426ULL] = X[154ULL];
  t724[427ULL] = X[150ULL];
  t724[428ULL] = X[155ULL];
  t724[429ULL] = X[150ULL];
  t724[430ULL] = X[17ULL] / (X[155ULL] == 0.0 ? 1.0E-16 : X[155ULL]) * 100.0 +
    X[150ULL];
  t724[431ULL] = t821;
  t724[432ULL] = X[152ULL];
  t724[433ULL] = X[154ULL];
  t724[434ULL] = X[0ULL];
  t724[435ULL] = X[18ULL];
  t724[436ULL] = X[69ULL] * 1000.0;
  t724[437ULL] = X[69ULL] * 0.00975609756097561;
  t724[438ULL] = X[0ULL];
  t724[439ULL] = X[19ULL];
  t724[440ULL] = X[70ULL] * 1000.0;
  t724[441ULL] = X[70ULL] * 0.00975609756097561;
  t724[442ULL] = X[18ULL];
  t724[443ULL] = X[19ULL];
  t724[444ULL] = t823 * 1000.0;
  t724[445ULL] = t823 * 5.8536585365853666;
  t724[446ULL] = X[18ULL];
  t724[447ULL] = X[19ULL];
  t724[448ULL] = X[18ULL];
  t724[449ULL] = X[18ULL];
  t724[450ULL] = (((X[18ULL] * -0.17083333333333331 + X[19ULL] *
                    0.17083333333333331) - X[156ULL]) + X[69ULL]) * 1000.0;
  t724[451ULL] = X[18ULL];
  t724[452ULL] = X[19ULL];
  t724[453ULL] = X[19ULL];
  t724[454ULL] = (((X[18ULL] * 0.17083333333333331 + X[19ULL] *
                    -0.17083333333333331) - X[157ULL]) + X[70ULL]) * 1000.0;
  t724[455ULL] = X[19ULL];
  t724[456ULL] = X[0ULL];
  t724[457ULL] = X[1ULL];
  t724[458ULL] = X[20ULL];
  t724[459ULL] = X[71ULL] * 1000.0;
  t724[460ULL] = X[71ULL] * 0.00975609756097561;
  t724[461ULL] = X[1ULL];
  t724[462ULL] = X[21ULL];
  t724[463ULL] = X[72ULL] * 1000.0;
  t724[464ULL] = X[72ULL] * 0.00975609756097561;
  t724[465ULL] = X[20ULL];
  t724[466ULL] = X[21ULL];
  t724[467ULL] = Cold_Plate_Cooling_Plate_Pack_2_Cooling_channels_conduction_Q *
    1000.0;
  t724[468ULL] = Cold_Plate_Cooling_Plate_Pack_2_Cooling_channels_conduction_Q *
    5.8536585365853666;
  t724[469ULL] = X[20ULL];
  t724[470ULL] = X[21ULL];
  t724[471ULL] = X[20ULL];
  t724[472ULL] = X[20ULL];
  t724[473ULL] = (((X[20ULL] * -0.17083333333333331 + X[21ULL] *
                    0.17083333333333331) - X[158ULL]) + X[71ULL]) * 1000.0;
  t724[474ULL] = X[20ULL];
  t724[475ULL] = X[21ULL];
  t724[476ULL] = X[21ULL];
  t724[477ULL] = (((X[20ULL] * 0.17083333333333331 + X[21ULL] *
                    -0.17083333333333331) - X[159ULL]) + X[72ULL]) * 1000.0;
  t724[478ULL] = X[21ULL];
  t724[479ULL] = X[1ULL];
  t724[480ULL] = X[3ULL];
  t724[481ULL] = X[22ULL];
  t724[482ULL] = X[73ULL] * 1000.0;
  t724[483ULL] = X[73ULL] * 0.00975609756097561;
  t724[484ULL] = X[3ULL];
  t724[485ULL] = X[23ULL];
  t724[486ULL] = X[74ULL] * 1000.0;
  t724[487ULL] = X[74ULL] * 0.00975609756097561;
  t724[488ULL] = X[22ULL];
  t724[489ULL] = X[23ULL];
  t724[490ULL] = Cold_Plate_Cooling_Plate_Pack_3_Cooling_channels_conduction_Q *
    1000.0;
  t724[491ULL] = Cold_Plate_Cooling_Plate_Pack_3_Cooling_channels_conduction_Q *
    5.8536585365853666;
  t724[492ULL] = X[22ULL];
  t724[493ULL] = X[23ULL];
  t724[494ULL] = X[22ULL];
  t724[495ULL] = X[22ULL];
  t724[496ULL] = (((X[22ULL] * -0.17083333333333331 + X[23ULL] *
                    0.17083333333333331) - X[160ULL]) + X[73ULL]) * 1000.0;
  t724[497ULL] = X[22ULL];
  t724[498ULL] = X[23ULL];
  t724[499ULL] = X[23ULL];
  t724[500ULL] = (((X[22ULL] * 0.17083333333333331 + X[23ULL] *
                    -0.17083333333333331) - X[161ULL]) + X[74ULL]) * 1000.0;
  t724[501ULL] = X[23ULL];
  t724[502ULL] = X[3ULL];
  t724[503ULL] = X[2ULL];
  t724[504ULL] = X[24ULL];
  t724[505ULL] = X[75ULL] * 1000.0;
  t724[506ULL] = X[75ULL] * 0.00975609756097561;
  t724[507ULL] = X[2ULL];
  t724[508ULL] = X[25ULL];
  t724[509ULL] = X[76ULL] * 1000.0;
  t724[510ULL] = X[76ULL] * 0.00975609756097561;
  t724[511ULL] = X[24ULL];
  t724[512ULL] = X[25ULL];
  t724[513ULL] = Cold_Plate_Cooling_Plate_Pack_4_Cooling_channels_conduction_Q *
    1000.0;
  t724[514ULL] = Cold_Plate_Cooling_Plate_Pack_4_Cooling_channels_conduction_Q *
    5.8536585365853666;
  t724[515ULL] = X[24ULL];
  t724[516ULL] = X[25ULL];
  t724[517ULL] = X[24ULL];
  t724[518ULL] = X[24ULL];
  t724[519ULL] = (((X[24ULL] * -0.17083333333333331 + X[25ULL] *
                    0.17083333333333331) - X[162ULL]) + X[75ULL]) * 1000.0;
  t724[520ULL] = X[24ULL];
  t724[521ULL] = X[25ULL];
  t724[522ULL] = X[25ULL];
  t724[523ULL] = (((X[24ULL] * 0.17083333333333331 + X[25ULL] *
                    -0.17083333333333331) - X[163ULL]) + X[76ULL]) * 1000.0;
  t724[524ULL] = X[25ULL];
  t724[525ULL] = X[2ULL];
  t724[526ULL] = X[112ULL];
  t724[527ULL] = X[13ULL] * 0.1;
  t724[528ULL] = X[126ULL];
  t724[529ULL] = X[15ULL] * 0.1;
  t724[530ULL] = X[0ULL];
  t724[531ULL] = X[1ULL];
  t724[532ULL] = X[3ULL];
  t724[533ULL] = X[2ULL];
  t724[534ULL] = X[12ULL];
  t724[535ULL] = X[12ULL];
  t724[536ULL] = X[14ULL];
  t724[537ULL] = X[14ULL];
  t724[538ULL] = X[16ULL];
  t724[539ULL] = X[16ULL];
  t724[540ULL] = X[113ULL];
  t724[541ULL] = X[13ULL] * 0.1;
  t724[542ULL] = X[164ULL];
  t724[543ULL] = X[165ULL] * 0.1;
  t724[544ULL] = X[18ULL];
  t724[545ULL] = -X[116ULL];
  t724[546ULL] = X[166ULL];
  t724[547ULL] = X[26ULL] * 0.1;
  t724[548ULL] = X[27ULL];
  t724[549ULL] = -X[122ULL];
  t724[550ULL] = X[167ULL];
  t724[551ULL] = X[156ULL];
  t724[552ULL] = X[113ULL];
  t724[553ULL] = X[13ULL] * 0.1;
  t724[554ULL] = -X[116ULL];
  t724[555ULL] = X[168ULL];
  t724[556ULL] = -X[122ULL];
  t724[557ULL] = X[169ULL];
  t724[558ULL] = X[164ULL];
  t724[559ULL] = X[165ULL] * 0.1;
  t724[560ULL] = X[166ULL];
  t724[561ULL] = X[170ULL];
  t724[562ULL] = X[167ULL];
  t724[563ULL] = X[171ULL];
  t724[564ULL] = Cold_Plate_Pipe_in_L1_rho_I;
  t724[565ULL] = Cold_Plate_Pipe_in_L1_u_I;
  t724[566ULL] = Cold_Plate_Pipe_in_L1_h_I;
  t724[567ULL] = t842 * 0.1;
  t724[568ULL] = intrm_sf_mf_46 * 0.1;
  t724[569ULL] = Cold_Plate_Pipe_in_L1_convection_A_rho;
  t724[570ULL] = -X[122ULL] / (Cold_Plate_Pipe_in_L1_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_L1_convection_A_rho);
  t724[571ULL] = Cold_Plate_Pipe_in_L1_convection_B_rho;
  t724[572ULL] = X[167ULL] / (Cold_Plate_Pipe_in_L1_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_L1_convection_B_rho);
  t724[573ULL] = X[164ULL];
  t724[574ULL] = X[165ULL] * 0.1;
  t724[575ULL] = X[141ULL];
  t724[576ULL] = X[17ULL] * 0.1;
  t724[577ULL] = X[20ULL];
  t724[578ULL] = -X[166ULL];
  t724[579ULL] = -X[145ULL];
  t724[580ULL] = X[28ULL] * 0.1;
  t724[581ULL] = X[29ULL];
  t724[582ULL] = -X[167ULL];
  t724[583ULL] = -X[152ULL];
  t724[584ULL] = X[158ULL];
  t724[585ULL] = X[164ULL];
  t724[586ULL] = X[165ULL] * 0.1;
  t724[587ULL] = -X[166ULL];
  t724[588ULL] = X[172ULL];
  t724[589ULL] = -X[167ULL];
  t724[590ULL] = X[173ULL];
  t724[591ULL] = X[141ULL];
  t724[592ULL] = X[17ULL] * 0.1;
  t724[593ULL] = -X[145ULL];
  t724[594ULL] = X[174ULL];
  t724[595ULL] = -X[152ULL];
  t724[596ULL] = X[175ULL];
  t724[597ULL] = Cold_Plate_Pipe_in_L2_rho_I;
  t724[598ULL] = Cold_Plate_Pipe_in_L2_u_I;
  t724[599ULL] = Cold_Plate_Pipe_in_L2_h_I;
  t724[600ULL] = intrm_sf_mf_78 * 0.1;
  t724[601ULL] = t901 * 0.1;
  t724[602ULL] = Cold_Plate_Pipe_in_L2_convection_A_rho;
  t724[603ULL] = -X[167ULL] / (Cold_Plate_Pipe_in_L2_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_L2_convection_A_rho);
  t724[604ULL] = Cold_Plate_Pipe_in_L2_convection_B_rho;
  t724[605ULL] = -X[152ULL] / (Cold_Plate_Pipe_in_L2_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_L2_convection_B_rho);
  t724[606ULL] = X[114ULL];
  t724[607ULL] = X[13ULL] * 0.1;
  t724[608ULL] = X[176ULL];
  t724[609ULL] = X[177ULL] * 0.1;
  t724[610ULL] = X[23ULL];
  t724[611ULL] = -X[117ULL];
  t724[612ULL] = X[178ULL];
  t724[613ULL] = X[30ULL] * 0.1;
  t724[614ULL] = X[31ULL];
  t724[615ULL] = -X[124ULL];
  t724[616ULL] = X[179ULL];
  t724[617ULL] = X[161ULL];
  t724[618ULL] = X[114ULL];
  t724[619ULL] = X[13ULL] * 0.1;
  t724[620ULL] = -X[117ULL];
  t724[621ULL] = X[180ULL];
  t724[622ULL] = -X[124ULL];
  t724[623ULL] = X[181ULL];
  t724[624ULL] = X[176ULL];
  t724[625ULL] = X[177ULL] * 0.1;
  t724[626ULL] = X[178ULL];
  t724[627ULL] = X[182ULL];
  t724[628ULL] = X[179ULL];
  t724[629ULL] = X[183ULL];
  t724[630ULL] = Cold_Plate_Pipe_in_R1_rho_I;
  t724[631ULL] = Cold_Plate_Pipe_in_R1_u_I;
  t724[632ULL] = Cold_Plate_Pipe_in_R1_h_I;
  t724[633ULL] = intrm_sf_mf_123 * 0.1;
  t724[634ULL] = intrm_sf_mf_132 * 0.1;
  t724[635ULL] = Cold_Plate_Pipe_in_R1_convection_A_rho;
  t724[636ULL] = -X[124ULL] / (Cold_Plate_Pipe_in_R1_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_R1_convection_A_rho);
  t724[637ULL] = Cold_Plate_Pipe_in_R1_convection_B_rho;
  t724[638ULL] = X[179ULL] / (Cold_Plate_Pipe_in_R1_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_R1_convection_B_rho);
  t724[639ULL] = X[176ULL];
  t724[640ULL] = X[177ULL] * 0.1;
  t724[641ULL] = X[142ULL];
  t724[642ULL] = X[17ULL] * 0.1;
  t724[643ULL] = X[25ULL];
  t724[644ULL] = -X[178ULL];
  t724[645ULL] = -X[146ULL];
  t724[646ULL] = X[32ULL] * 0.1;
  t724[647ULL] = X[33ULL];
  t724[648ULL] = -X[179ULL];
  t724[649ULL] = -X[154ULL];
  t724[650ULL] = X[163ULL];
  t724[651ULL] = X[176ULL];
  t724[652ULL] = X[177ULL] * 0.1;
  t724[653ULL] = -X[178ULL];
  t724[654ULL] = X[184ULL];
  t724[655ULL] = -X[179ULL];
  t724[656ULL] = X[185ULL];
  t724[657ULL] = X[142ULL];
  t724[658ULL] = X[17ULL] * 0.1;
  t724[659ULL] = -X[146ULL];
  t724[660ULL] = X[186ULL];
  t724[661ULL] = -X[154ULL];
  t724[662ULL] = X[187ULL];
  t724[663ULL] = Cold_Plate_Pipe_in_R2_rho_I;
  t724[664ULL] = Cold_Plate_Pipe_in_R2_u_I;
  t724[665ULL] = Cold_Plate_Pipe_in_R2_h_I;
  t724[666ULL] = intrm_sf_mf_166 * 0.1;
  t724[667ULL] = t888 * 0.1;
  t724[668ULL] = Cold_Plate_Pipe_in_R2_convection_A_rho;
  t724[669ULL] = -X[179ULL] / (Cold_Plate_Pipe_in_R2_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_R2_convection_A_rho);
  t724[670ULL] = Cold_Plate_Pipe_in_R2_convection_B_rho;
  t724[671ULL] = -X[154ULL] / (Cold_Plate_Pipe_in_R2_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_in_R2_convection_B_rho);
  t724[672ULL] = X[188ULL];
  t724[673ULL] = X[189ULL] * 0.1;
  t724[674ULL] = X[140ULL];
  t724[675ULL] = X[17ULL] * 0.1;
  t724[676ULL] = X[21ULL];
  t724[677ULL] = X[190ULL];
  t724[678ULL] = X[143ULL];
  t724[679ULL] = X[34ULL] * 0.1;
  t724[680ULL] = X[35ULL];
  t724[681ULL] = X[191ULL];
  t724[682ULL] = X[148ULL];
  t724[683ULL] = X[159ULL];
  t724[684ULL] = X[188ULL];
  t724[685ULL] = X[189ULL] * 0.1;
  t724[686ULL] = X[190ULL];
  t724[687ULL] = X[192ULL];
  t724[688ULL] = X[191ULL];
  t724[689ULL] = X[193ULL];
  t724[690ULL] = X[140ULL];
  t724[691ULL] = X[17ULL] * 0.1;
  t724[692ULL] = X[143ULL];
  t724[693ULL] = X[194ULL];
  t724[694ULL] = X[148ULL];
  t724[695ULL] = X[195ULL];
  t724[696ULL] = Cold_Plate_Pipe_out_L1_rho_I;
  t724[697ULL] = Cold_Plate_Pipe_out_L1_u_I;
  t724[698ULL] = Cold_Plate_Pipe_out_L1_h_I;
  t724[699ULL] = t884 * 0.1;
  t724[700ULL] = t886 * 0.1;
  t724[701ULL] = Cold_Plate_Pipe_out_L1_convection_A_rho;
  t724[702ULL] = X[191ULL] / (Cold_Plate_Pipe_out_L1_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_L1_convection_A_rho);
  t724[703ULL] = Cold_Plate_Pipe_out_L1_convection_B_rho;
  t724[704ULL] = X[148ULL] / (Cold_Plate_Pipe_out_L1_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_L1_convection_B_rho);
  t724[705ULL] = X[128ULL];
  t724[706ULL] = X[15ULL] * 0.1;
  t724[707ULL] = X[188ULL];
  t724[708ULL] = X[189ULL] * 0.1;
  t724[709ULL] = X[19ULL];
  t724[710ULL] = -X[131ULL];
  t724[711ULL] = -X[190ULL];
  t724[712ULL] = X[36ULL] * 0.1;
  t724[713ULL] = X[37ULL];
  t724[714ULL] = -X[138ULL];
  t724[715ULL] = -X[191ULL];
  t724[716ULL] = X[157ULL];
  t724[717ULL] = X[128ULL];
  t724[718ULL] = X[15ULL] * 0.1;
  t724[719ULL] = -X[131ULL];
  t724[720ULL] = X[196ULL];
  t724[721ULL] = -X[138ULL];
  t724[722ULL] = X[197ULL];
  t724[723ULL] = X[188ULL];
  t724[724ULL] = X[189ULL] * 0.1;
  t724[725ULL] = -X[190ULL];
  t724[726ULL] = X[198ULL];
  t724[727ULL] = -X[191ULL];
  t724[728ULL] = X[199ULL];
  t724[729ULL] = Cold_Plate_Pipe_out_L2_rho_I;
  t724[730ULL] = Cold_Plate_Pipe_out_L2_u_I;
  t724[731ULL] = Cold_Plate_Pipe_out_L2_h_I;
  t724[732ULL] = intrm_sf_mf_252 * 0.1;
  t724[733ULL] = intrm_sf_mf_259 * 0.1;
  t724[734ULL] = Cold_Plate_Pipe_out_L2_convection_A_rho;
  t724[735ULL] = -X[138ULL] / (Cold_Plate_Pipe_out_L2_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_L2_convection_A_rho);
  t724[736ULL] = Cold_Plate_Pipe_out_L2_convection_B_rho;
  t724[737ULL] = -X[191ULL] / (Cold_Plate_Pipe_out_L2_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_L2_convection_B_rho);
  t724[738ULL] = X[200ULL];
  t724[739ULL] = X[201ULL] * 0.1;
  t724[740ULL] = X[140ULL];
  t724[741ULL] = X[17ULL] * 0.1;
  t724[742ULL] = X[24ULL];
  t724[743ULL] = X[202ULL];
  t724[744ULL] = X[144ULL];
  t724[745ULL] = X[38ULL] * 0.1;
  t724[746ULL] = X[39ULL];
  t724[747ULL] = X[203ULL];
  t724[748ULL] = X[149ULL];
  t724[749ULL] = X[162ULL];
  t724[750ULL] = X[200ULL];
  t724[751ULL] = X[201ULL] * 0.1;
  t724[752ULL] = X[202ULL];
  t724[753ULL] = X[204ULL];
  t724[754ULL] = X[203ULL];
  t724[755ULL] = X[205ULL];
  t724[756ULL] = X[140ULL];
  t724[757ULL] = X[17ULL] * 0.1;
  t724[758ULL] = X[144ULL];
  t724[759ULL] = X[206ULL];
  t724[760ULL] = X[149ULL];
  t724[761ULL] = X[207ULL];
  t724[762ULL] = Cold_Plate_Pipe_out_R1_rho_I;
  t724[763ULL] = Cold_Plate_Pipe_out_R1_u_I;
  t724[764ULL] = Cold_Plate_Pipe_out_R1_h_I;
  t724[765ULL] = t839 * 0.1;
  t724[766ULL] = t891 * 0.1;
  t724[767ULL] = Cold_Plate_Pipe_out_R1_convection_A_rho;
  t724[768ULL] = X[203ULL] / (Cold_Plate_Pipe_out_R1_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_R1_convection_A_rho);
  t724[769ULL] = Cold_Plate_Pipe_out_R1_convection_B_rho;
  t724[770ULL] = X[149ULL] / (Cold_Plate_Pipe_out_R1_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_R1_convection_B_rho);
  t724[771ULL] = X[127ULL];
  t724[772ULL] = X[15ULL] * 0.1;
  t724[773ULL] = X[200ULL];
  t724[774ULL] = X[201ULL] * 0.1;
  t724[775ULL] = X[22ULL];
  t724[776ULL] = -X[130ULL];
  t724[777ULL] = -X[202ULL];
  t724[778ULL] = X[40ULL] * 0.1;
  t724[779ULL] = X[41ULL];
  t724[780ULL] = -X[136ULL];
  t724[781ULL] = -X[203ULL];
  t724[782ULL] = X[160ULL];
  t724[783ULL] = X[127ULL];
  t724[784ULL] = X[15ULL] * 0.1;
  t724[785ULL] = -X[130ULL];
  t724[786ULL] = X[208ULL];
  t724[787ULL] = -X[136ULL];
  t724[788ULL] = X[209ULL];
  t724[789ULL] = X[200ULL];
  t724[790ULL] = X[201ULL] * 0.1;
  t724[791ULL] = -X[202ULL];
  t724[792ULL] = X[210ULL];
  t724[793ULL] = -X[203ULL];
  t724[794ULL] = X[211ULL];
  t724[795ULL] = Cold_Plate_Pipe_out_R2_rho_I;
  t724[796ULL] = Cold_Plate_Pipe_out_R2_u_I;
  t724[797ULL] = Cold_Plate_Pipe_out_R2_h_I;
  t724[798ULL] = t895 * 0.1;
  t724[799ULL] = t893 * 0.1;
  t724[800ULL] = Cold_Plate_Pipe_out_R2_convection_A_rho;
  t724[801ULL] = -X[136ULL] / (Cold_Plate_Pipe_out_R2_convection_A_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_R2_convection_A_rho);
  t724[802ULL] = Cold_Plate_Pipe_out_R2_convection_B_rho;
  t724[803ULL] = -X[203ULL] / (Cold_Plate_Pipe_out_R2_convection_B_rho == 0.0 ?
    1.0E-16 : Cold_Plate_Pipe_out_R2_convection_B_rho);
  t724[804ULL] = t848;
  t724[805ULL] = t848;
  t724[806ULL] = X[212ULL];
  t724[807ULL] = t848;
  t724[808ULL] = t848;
  t724[809ULL] = X[42ULL];
  t724[810ULL] = t848;
  t724[811ULL] = t848;
  t724[812ULL] = X[42ULL];
  t724[813ULL] = t848;
  t724[814ULL] = t848;
  t724[815ULL] = t848;
  t724[816ULL] = -X[212ULL];
  t724[817ULL] = -X[212ULL];
  t724[818ULL] = -X[212ULL];
  t724[819ULL] = t848;
  t724[820ULL] = t848;
  t724[821ULL] = U_idx_2;
  t724[822ULL] = X[43ULL];
  t724[823ULL] = -1136.8124999999998 + t827 * 1000.0;
  t724[824ULL] = (X[43ULL] * 0.00375 - 1.1368124999999998) * 266.66666666666669;
  t724[825ULL] = X[44ULL];
  t724[826ULL] = -1136.8124999999998 + t830 * 1000.0;
  t724[827ULL] = (X[44ULL] * 0.00375 - 1.1368124999999998) * 266.66666666666669;
  t724[828ULL] = X[43ULL];
  t724[829ULL] = X[44ULL];
  t724[830ULL] = -1136.8124999999998 + t827 * 1000.0;
  t724[831ULL] = -1136.8124999999998 + t830 * 1000.0;
  t724[832ULL] = X[65ULL];
  t724[833ULL] = X[66ULL] * 0.1;
  t724[834ULL] = X[65ULL];
  t724[835ULL] = X[66ULL] * 0.1;
  t724[836ULL] = X[213ULL];
  t724[837ULL] = X[214ULL] * 0.1;
  t724[838ULL] = X[215ULL];
  t724[839ULL] = X[216ULL] * 0.1;
  t724[840ULL] = X[217ULL];
  t724[841ULL] = X[46ULL] * 0.1;
  t724[842ULL] = X[217ULL];
  t724[843ULL] = X[46ULL] * 0.1;
  t724[844ULL] = X[218ULL];
  t724[845ULL] = X[46ULL] * 0.1;
  t724[846ULL] = X[219ULL];
  t724[847ULL] = X[46ULL] * 0.1;
  t724[848ULL] = X[220ULL];
  t724[849ULL] = X[46ULL] * 0.1;
  t724[850ULL] = X[45ULL];
  t724[851ULL] = X[221ULL];
  t724[852ULL] = X[222ULL];
  t724[853ULL] = X[223ULL];
  t724[854ULL] = X[224ULL];
  t724[855ULL] = X[45ULL];
  t724[856ULL] = X[46ULL] * 0.1;
  t724[857ULL] = X[217ULL];
  t724[858ULL] = X[46ULL] * 0.1;
  t724[859ULL] = X[221ULL];
  t724[860ULL] = X[225ULL];
  t724[861ULL] = -X[119ULL];
  t724[862ULL] = X[226ULL];
  t724[863ULL] = X[218ULL];
  t724[864ULL] = X[46ULL] * 0.1;
  t724[865ULL] = X[222ULL];
  t724[866ULL] = X[227ULL];
  t724[867ULL] = X[228ULL];
  t724[868ULL] = X[226ULL];
  t724[869ULL] = X[219ULL];
  t724[870ULL] = X[46ULL] * 0.1;
  t724[871ULL] = X[223ULL];
  t724[872ULL] = X[229ULL];
  t724[873ULL] = X[230ULL];
  t724[874ULL] = X[226ULL];
  t724[875ULL] = X[220ULL];
  t724[876ULL] = X[46ULL] * 0.1;
  t724[877ULL] = X[224ULL];
  t724[878ULL] = X[231ULL];
  t724[879ULL] = X[232ULL];
  t724[880ULL] = X[226ULL];
  t724[881ULL] = X[233ULL];
  t724[882ULL] = X[226ULL];
  t724[883ULL] = X[46ULL] / (X[233ULL] == 0.0 ? 1.0E-16 : X[233ULL]) * 100.0 +
    X[226ULL];
  t724[884ULL] = -X[119ULL];
  t724[885ULL] = X[228ULL];
  t724[886ULL] = X[230ULL];
  t724[887ULL] = X[232ULL];
  t724[888ULL] = t849 * 1000.0;
  t724[889ULL] = U_idx_3;
  t724[890ULL] = X[217ULL];
  t724[891ULL] = X[46ULL] * 0.1;
  t724[892ULL] = X[217ULL];
  t724[893ULL] = X[46ULL] * 0.1;
  t724[894ULL] = X[46ULL] * 99999.999999999985;
  t724[895ULL] = X[217ULL];
  t724[896ULL] = X[217ULL] - 273.15;
  t724[897ULL] = X[213ULL];
  t724[898ULL] = X[214ULL] * 0.1;
  t724[899ULL] = X[234ULL];
  t724[900ULL] = X[235ULL] * 0.1;
  t724[901ULL] = X[236ULL];
  t724[902ULL] = X[237ULL];
  t724[903ULL] = t852;
  t724[904ULL] = X[47ULL] * 0.1;
  t724[905ULL] = X[48ULL];
  t724[906ULL] = X[241ULL];
  t724[907ULL] = Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot;
  t724[908ULL] = X[213ULL];
  t724[909ULL] = X[214ULL] * 0.1;
  t724[910ULL] = X[237ULL];
  t724[911ULL] = X[245ULL];
  t724[912ULL] = X[241ULL];
  t724[913ULL] = X[246ULL];
  t724[914ULL] = X[234ULL];
  t724[915ULL] = X[235ULL] * 0.1;
  t724[916ULL] = t852;
  t724[917ULL] = X[247ULL];
  t724[918ULL] = Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot;
  t724[919ULL] = X[248ULL];
  t724[920ULL] = Heating_Cooling_Unit_Cooling_Inlet_rho_I;
  t724[921ULL] = Heating_Cooling_Unit_Cooling_Inlet_u_I;
  t724[922ULL] = Heating_Cooling_Unit_Cooling_Inlet_h_I;
  t724[923ULL] = t845 * 0.1;
  t724[924ULL] = t898 * 0.1;
  t724[925ULL] = Heating_Cooling_Unit_Cooling_Inlet_convection_A_rho;
  t724[926ULL] = X[241ULL] /
    (Heating_Cooling_Unit_Cooling_Inlet_convection_A_rho == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Cooling_Inlet_convection_A_rho);
  t724[927ULL] = Heating_Cooling_Unit_Cooling_Inlet_convection_B_rho;
  t724[928ULL] = Heating_Cooling_Unit_Cooling_Inlet_convection_B_mdot /
    (Heating_Cooling_Unit_Cooling_Inlet_convection_B_rho == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Cooling_Inlet_convection_B_rho);
  t724[929ULL] = X[249ULL];
  t724[930ULL] = X[250ULL] * 0.1;
  t724[931ULL] = X[220ULL];
  t724[932ULL] = X[46ULL] * 0.1;
  t724[933ULL] = X[251ULL] + 303.075;
  t724[934ULL] = X[252ULL] * 1000.0;
  t724[935ULL] = X[251ULL] + 303.075;
  t724[936ULL] = X[251ULL] + 303.075;
  t724[937ULL] = X[251ULL];
  t724[938ULL] = X[251ULL] + 303.075;
  t724[939ULL] = X[242ULL] - 0.01;
  t724[940ULL] = (X[242ULL] - 0.01) * 100.0;
  t724[941ULL] = (X[242ULL] - 0.01) * 100.0;
  t724[942ULL] = (X[242ULL] - 0.01) * 400.0;
  t724[943ULL] = X[251ULL] * -13.333333333335354;
  t724[944ULL] = X[251ULL];
  t724[945ULL] = X[242ULL];
  t724[946ULL] = X[242ULL] - 0.01;
  t724[947ULL] = X[251ULL] + 303.075;
  t724[948ULL] = X[242ULL];
  t724[949ULL] = (X[242ULL] - 0.01) * 400.0;
  t724[950ULL] = X[251ULL] * -13.333333333335354;
  t724[951ULL] = X[249ULL];
  t724[952ULL] = X[250ULL] * 0.1;
  t724[953ULL] = X[249ULL];
  t724[954ULL] = X[250ULL] * 0.1;
  t724[955ULL] = X[242ULL];
  t724[956ULL] = X[238ULL] * 1000.0;
  t724[957ULL] = X[238ULL];
  t724[958ULL] = X[242ULL];
  t724[959ULL] = X[249ULL];
  t724[960ULL] = X[250ULL] * 0.1;
  t724[961ULL] = X[220ULL];
  t724[962ULL] = X[46ULL] * 0.1;
  t724[963ULL] = X[251ULL] + 303.075;
  t724[964ULL] = X[238ULL];
  t724[965ULL] = -X[224ULL];
  t724[966ULL] = X[49ULL] * 0.1;
  t724[967ULL] = X[50ULL];
  t724[968ULL] = X[242ULL];
  t724[969ULL] = -X[232ULL];
  t724[970ULL] = -X[252ULL];
  t724[971ULL] = X[249ULL];
  t724[972ULL] = X[250ULL] * 0.1;
  t724[973ULL] = X[238ULL];
  t724[974ULL] = X[253ULL];
  t724[975ULL] = X[242ULL];
  t724[976ULL] = X[254ULL];
  t724[977ULL] = X[220ULL];
  t724[978ULL] = X[46ULL] * 0.1;
  t724[979ULL] = -X[224ULL];
  t724[980ULL] = X[255ULL];
  t724[981ULL] = -X[232ULL];
  t724[982ULL] = X[256ULL];
  t724[983ULL] = Heating_Cooling_Unit_Heater_Pipe_TL_rho_I;
  t724[984ULL] = Heating_Cooling_Unit_Heater_Pipe_TL_u_I;
  t724[985ULL] = Heating_Cooling_Unit_Heater_Pipe_TL_h_I;
  t724[986ULL] = t896 * 0.1;
  t724[987ULL] = t892 * 0.1;
  t724[988ULL] = Heating_Cooling_Unit_Heater_Pipe_TL_convection_A_rho;
  t724[989ULL] = X[242ULL] /
    (Heating_Cooling_Unit_Heater_Pipe_TL_convection_A_rho == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Heater_Pipe_TL_convection_A_rho);
  t724[990ULL] = Heating_Cooling_Unit_Heater_Pipe_TL_convection_B_rho;
  t724[991ULL] = -X[232ULL] /
    (Heating_Cooling_Unit_Heater_Pipe_TL_convection_B_rho == 0.0 ? 1.0E-16 :
     Heating_Cooling_Unit_Heater_Pipe_TL_convection_B_rho);
  t724[992ULL] = X[45ULL];
  t724[993ULL] = X[45ULL];
  t724[994ULL] = X[236ULL];
  t724[995ULL] = X[236ULL];
  t724[996ULL] = X[65ULL];
  t724[997ULL] = X[66ULL] * 0.1;
  t724[998ULL] = X[257ULL];
  t724[999ULL] = X[258ULL] * 0.1;
  t724[1000ULL] = X[215ULL];
  t724[1001ULL] = X[216ULL] * 0.1;
  t724[1002ULL] = X[219ULL];
  t724[1003ULL] = X[46ULL] * 0.1;
  t724[1004ULL] = X[259ULL];
  t724[1005ULL] = X[259ULL];
  t724[1006ULL] = X[260ULL];
  t724[1007ULL] = X[260ULL];
  t724[1008ULL] = X[65ULL];
  t724[1009ULL] = X[66ULL] * 0.1;
  t724[1010ULL] = X[261ULL];
  t724[1011ULL] = X[262ULL] * 0.1;
  t724[1012ULL] = X[215ULL];
  t724[1013ULL] = X[216ULL] * 0.1;
  t724[1014ULL] = X[263ULL];
  t724[1015ULL] = X[264ULL] * 0.1;
  t724[1016ULL] = X[65ULL];
  t724[1017ULL] = X[66ULL] * 0.1;
  t724[1018ULL] = X[215ULL];
  t724[1019ULL] = X[216ULL] * 0.1;
  t724[1020ULL] = X[265ULL];
  t724[1021ULL] = t857;
  t724[1022ULL] = X[67ULL];
  t724[1023ULL] = X[267ULL];
  t724[1024ULL] = X[268ULL];
  t724[1025ULL] = X[51ULL];
  t724[1026ULL] = X[51ULL] + 126.84999999999997;
  t724[1027ULL] = U_idx_0;
  t724[1028ULL] = X[266ULL];
  t724[1029ULL] = X[52ULL] * 0.1;
  t724[1030ULL] = X[269ULL];
  t724[1031ULL] = X[270ULL];
  t724[1032ULL] = X[271ULL];
  t724[1033ULL] = X[272ULL] * 0.001;
  t724[1034ULL] = X[265ULL];
  t724[1035ULL] = X[273ULL];
  t724[1036ULL] = t857;
  t724[1037ULL] = Heating_Cooling_Unit_Radiator_Radiator_heat_transfer_M2;
  t724[1038ULL] = -X[268ULL];
  t724[1039ULL] = X[276ULL] * 0.001;
  t724[1040ULL] = X[277ULL] * 0.001;
  t724[1041ULL] = X[261ULL];
  t724[1042ULL] = X[262ULL] * 0.1;
  t724[1043ULL] = X[263ULL];
  t724[1044ULL] = X[264ULL] * 0.1;
  t724[1045ULL] = X[278ULL];
  t724[1046ULL] = X[279ULL];
  t724[1047ULL] = X[280ULL];
  t724[1048ULL] = X[281ULL];
  t724[1049ULL] = X[53ULL];
  t724[1050ULL] = X[274ULL];
  t724[1051ULL] = X[275ULL];
  t724[1052ULL] = X[54ULL] * 0.1;
  t724[1053ULL] = X[282ULL];
  t724[1054ULL] = X[283ULL];
  t724[1055ULL] = X[284ULL];
  t724[1056ULL] = X[285ULL];
  t724[1057ULL] = X[286ULL];
  t724[1058ULL] = X[272ULL] * 0.001;
  t724[1059ULL] = X[273ULL];
  t724[1060ULL] = Heating_Cooling_Unit_Radiator_Radiator_heat_transfer_M2;
  t724[1061ULL] = -X[268ULL];
  t724[1062ULL] = Heating_Cooling_Unit_Radiator_Radiator_thermal_liquid_2_rho_I;
  t724[1063ULL] = X[257ULL];
  t724[1064ULL] = X[258ULL] * 0.1;
  t724[1065ULL] = X[261ULL];
  t724[1066ULL] = X[262ULL] * 0.1;
  t724[1067ULL] = X[259ULL];
  t724[1068ULL] = X[239ULL];
  t724[1069ULL] = -X[278ULL];
  t724[1070ULL] = X[55ULL] * 0.1;
  t724[1071ULL] = X[56ULL];
  t724[1072ULL] = X[243ULL];
  t724[1073ULL] = -X[274ULL];
  t724[1074ULL] = X[257ULL];
  t724[1075ULL] = X[258ULL] * 0.1;
  t724[1076ULL] = X[239ULL];
  t724[1077ULL] = X[287ULL];
  t724[1078ULL] = X[243ULL];
  t724[1079ULL] = X[288ULL];
  t724[1080ULL] = X[261ULL];
  t724[1081ULL] = X[262ULL] * 0.1;
  t724[1082ULL] = -X[278ULL];
  t724[1083ULL] = X[289ULL];
  t724[1084ULL] = -X[274ULL];
  t724[1085ULL] = X[290ULL];
  t724[1086ULL] = Heating_Cooling_Unit_Radiator_Radiator_inlet_rho_I;
  t724[1087ULL] = Heating_Cooling_Unit_Radiator_Radiator_inlet_u_I;
  t724[1088ULL] = Heating_Cooling_Unit_Radiator_Radiator_inlet_h_I;
  t724[1089ULL] = intrm_sf_mf_465 * 0.1;
  t724[1090ULL] = intrm_sf_mf_474 * 0.1;
  t724[1091ULL] = Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_A_rho;
  t724[1092ULL] = X[243ULL] /
    (Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_A_rho == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_A_rho);
  t724[1093ULL] = Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_B_rho;
  t724[1094ULL] = -X[274ULL] /
    (Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_B_rho == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_Radiator_Radiator_inlet_convection_B_rho);
  t724[1095ULL] = X[263ULL];
  t724[1096ULL] = X[264ULL] * 0.1;
  t724[1097ULL] = X[219ULL];
  t724[1098ULL] = X[46ULL] * 0.1;
  t724[1099ULL] = X[260ULL];
  t724[1100ULL] = -X[279ULL];
  t724[1101ULL] = -X[223ULL];
  t724[1102ULL] = X[57ULL] * 0.1;
  t724[1103ULL] = X[58ULL];
  t724[1104ULL] = -X[275ULL];
  t724[1105ULL] = -X[230ULL];
  t724[1106ULL] = X[263ULL];
  t724[1107ULL] = X[264ULL] * 0.1;
  t724[1108ULL] = -X[279ULL];
  t724[1109ULL] = X[291ULL];
  t724[1110ULL] = -X[275ULL];
  t724[1111ULL] = X[292ULL];
  t724[1112ULL] = X[219ULL];
  t724[1113ULL] = X[46ULL] * 0.1;
  t724[1114ULL] = -X[223ULL];
  t724[1115ULL] = X[293ULL];
  t724[1116ULL] = -X[230ULL];
  t724[1117ULL] = X[294ULL];
  t724[1118ULL] = Heating_Cooling_Unit_Radiator_Radiator_return_rho_I;
  t724[1119ULL] = Heating_Cooling_Unit_Radiator_Radiator_return_u_I;
  t724[1120ULL] = Heating_Cooling_Unit_Radiator_Radiator_return_h_I;
  t724[1121ULL] = intrm_sf_mf_510 * 0.1;
  t724[1122ULL] = t890 * 0.1;
  t724[1123ULL] = Heating_Cooling_Unit_Radiator_Radiator_return_convection_A_rho;
  t724[1124ULL] = -X[275ULL] /
    (Heating_Cooling_Unit_Radiator_Radiator_return_convection_A_rho == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_Radiator_Radiator_return_convection_A_rho);
  t724[1125ULL] = Heating_Cooling_Unit_Radiator_Radiator_return_convection_B_rho;
  t724[1126ULL] = -X[230ULL] /
    (Heating_Cooling_Unit_Radiator_Radiator_return_convection_B_rho == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_Radiator_Radiator_return_convection_B_rho);
  t724[1127ULL] = X[295ULL];
  t724[1128ULL] = X[296ULL] * 0.1;
  t724[1129ULL] = X[218ULL];
  t724[1130ULL] = X[46ULL] * 0.1;
  t724[1131ULL] = X[297ULL] + 288.575;
  t724[1132ULL] = X[298ULL] * 1000.0;
  t724[1133ULL] = X[297ULL] + 288.575;
  t724[1134ULL] = X[297ULL] + 288.575;
  t724[1135ULL] = X[297ULL] + 288.575;
  t724[1136ULL] = X[297ULL] + 288.575;
  t724[1137ULL] = X[298ULL] * 1000.0;
  t724[1138ULL] = X[298ULL] * 1000.0;
  t724[1139ULL] = X[298ULL];
  t724[1140ULL] = X[295ULL];
  t724[1141ULL] = X[296ULL] * 0.1;
  t724[1142ULL] = X[295ULL];
  t724[1143ULL] = X[296ULL] * 0.1;
  t724[1144ULL] = X[244ULL];
  t724[1145ULL] = X[240ULL] * 1000.0;
  t724[1146ULL] = X[240ULL];
  t724[1147ULL] = X[244ULL];
  t724[1148ULL] = X[295ULL];
  t724[1149ULL] = X[296ULL] * 0.1;
  t724[1150ULL] = X[218ULL];
  t724[1151ULL] = X[46ULL] * 0.1;
  t724[1152ULL] = X[297ULL] + 288.575;
  t724[1153ULL] = X[240ULL];
  t724[1154ULL] = -X[222ULL];
  t724[1155ULL] = X[59ULL] * 0.1;
  t724[1156ULL] = X[60ULL];
  t724[1157ULL] = X[244ULL];
  t724[1158ULL] = -X[228ULL];
  t724[1159ULL] = -X[298ULL];
  t724[1160ULL] = X[295ULL];
  t724[1161ULL] = X[296ULL] * 0.1;
  t724[1162ULL] = X[240ULL];
  t724[1163ULL] = X[299ULL];
  t724[1164ULL] = X[244ULL];
  t724[1165ULL] = X[300ULL];
  t724[1166ULL] = X[218ULL];
  t724[1167ULL] = X[46ULL] * 0.1;
  t724[1168ULL] = -X[222ULL];
  t724[1169ULL] = X[301ULL];
  t724[1170ULL] = -X[228ULL];
  t724[1171ULL] = X[302ULL];
  t724[1172ULL] = Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_rho_I;
  t724[1173ULL] = Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_u_I;
  t724[1174ULL] = Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_h_I;
  t724[1175ULL] = intrm_sf_mf_553 * 0.1;
  t724[1176ULL] = t995 * 0.1;
  t724[1177ULL] =
    Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_A_rh;
  t724[1178ULL] = X[244ULL] /
    (Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_A_rh == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_A_rh);
  t724[1179ULL] =
    Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_B_rh;
  t724[1180ULL] = -X[228ULL] /
    (Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_B_rh == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_convection_B_rh);
  t724[1181ULL] = X[297ULL];
  t724[1182ULL] = X[297ULL] + 288.575;
  t724[1183ULL] = X[244ULL] - 0.01;
  t724[1184ULL] = (X[244ULL] - 0.01) * 100.0;
  t724[1185ULL] = (X[244ULL] - 0.01) * 100.0;
  t724[1186ULL] = (X[244ULL] - 0.01) * 400.0;
  t724[1187ULL] = X[297ULL] * -0.068610634648370555;
  t724[1188ULL] = X[297ULL];
  t724[1189ULL] = X[244ULL];
  t724[1190ULL] = X[244ULL] - 0.01;
  t724[1191ULL] = X[297ULL] + 288.575;
  t724[1192ULL] = X[244ULL];
  t724[1193ULL] = (X[244ULL] - 0.01) * 400.0;
  t724[1194ULL] = X[297ULL] * -0.068610634648370555;
  t724[1195ULL] = X[234ULL];
  t724[1196ULL] = X[235ULL] * 0.1;
  t724[1197ULL] = t849 * 1000.0;
  t724[1198ULL] = X[295ULL];
  t724[1199ULL] = X[296ULL] * 0.1;
  t724[1200ULL] = X[257ULL];
  t724[1201ULL] = X[258ULL] * 0.1;
  t724[1202ULL] = X[249ULL];
  t724[1203ULL] = X[250ULL] * 0.1;
  t724[1204ULL] = X[234ULL];
  t724[1205ULL] = X[235ULL] * 0.1;
  t724[1206ULL] = X[295ULL];
  t724[1207ULL] = X[296ULL] * 0.1;
  t724[1208ULL] = X[240ULL];
  t724[1209ULL] = -X[240ULL];
  t724[1210ULL] = t849;
  t724[1211ULL] = X[234ULL];
  t724[1212ULL] = X[235ULL] * 0.1;
  t724[1213ULL] = X[240ULL];
  t724[1214ULL] = X[303ULL];
  t724[1215ULL] = X[244ULL];
  t724[1216ULL] = X[304ULL];
  t724[1217ULL] = X[295ULL];
  t724[1218ULL] = X[296ULL] * 0.1;
  t724[1219ULL] = -X[240ULL];
  t724[1220ULL] = X[305ULL];
  t724[1221ULL] = -X[244ULL];
  t724[1222ULL] = X[304ULL];
  t724[1223ULL] =
    Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_orif;
  t724[1224ULL] = X[244ULL];
  t724[1225ULL] = -X[244ULL];
  t724[1226ULL] =
    Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con2;
  t724[1227ULL] =
    Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con7;
  t724[1228ULL] = X[244ULL] /
    (Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con2 == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL_con2);
  t724[1229ULL] = t865;
  t724[1230ULL] = X[234ULL];
  t724[1231ULL] = X[235ULL] * 0.1;
  t724[1232ULL] = X[257ULL];
  t724[1233ULL] = X[258ULL] * 0.1;
  t724[1234ULL] = X[239ULL];
  t724[1235ULL] = -X[239ULL];
  t724[1236ULL] = t849;
  t724[1237ULL] = X[234ULL];
  t724[1238ULL] = X[235ULL] * 0.1;
  t724[1239ULL] = X[239ULL];
  t724[1240ULL] = X[306ULL];
  t724[1241ULL] = X[243ULL];
  t724[1242ULL] = X[307ULL];
  t724[1243ULL] = X[257ULL];
  t724[1244ULL] = X[258ULL] * 0.1;
  t724[1245ULL] = -X[239ULL];
  t724[1246ULL] = X[308ULL];
  t724[1247ULL] = -X[243ULL];
  t724[1248ULL] = X[307ULL];
  t724[1249ULL] = t868;
  t724[1250ULL] = X[243ULL];
  t724[1251ULL] = -X[243ULL];
  t724[1252ULL] =
    Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co2;
  t724[1253ULL] =
    Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co7;
  t724[1254ULL] = X[243ULL] /
    (Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co2 == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL1_co2);
  t724[1255ULL] = t859;
  t724[1256ULL] = X[234ULL];
  t724[1257ULL] = X[235ULL] * 0.1;
  t724[1258ULL] = X[249ULL];
  t724[1259ULL] = X[250ULL] * 0.1;
  t724[1260ULL] = X[238ULL];
  t724[1261ULL] = -X[238ULL];
  t724[1262ULL] = t849;
  t724[1263ULL] = X[234ULL];
  t724[1264ULL] = X[235ULL] * 0.1;
  t724[1265ULL] = X[238ULL];
  t724[1266ULL] = X[309ULL];
  t724[1267ULL] = X[242ULL];
  t724[1268ULL] = X[310ULL];
  t724[1269ULL] = X[249ULL];
  t724[1270ULL] = X[250ULL] * 0.1;
  t724[1271ULL] = -X[238ULL];
  t724[1272ULL] = X[311ULL];
  t724[1273ULL] = -X[242ULL];
  t724[1274ULL] = X[310ULL];
  t724[1275ULL] = t870;
  t724[1276ULL] = X[242ULL];
  t724[1277ULL] = -X[242ULL];
  t724[1278ULL] =
    Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co2;
  t724[1279ULL] =
    Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co7;
  t724[1280ULL] = X[242ULL] /
    (Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co2 == 0.0 ?
     1.0E-16 : Heating_Cooling_Unit_x4_Way_Valve_Variable_Area_Orifice_TL2_co2);
  t724[1281ULL] = t856;
  t724[1282ULL] = X[63ULL];
  t724[1283ULL] = X[64ULL] * 0.1;
  t724[1284ULL] = -X[67ULL];
  t724[1285ULL] = X[63ULL];
  t724[1286ULL] = X[64ULL] * 0.1;
  t724[1287ULL] = -X[67ULL];
  t724[1288ULL] = X[312ULL];
  t724[1289ULL] = -U_idx_0;
  t724[1290ULL] = -U_idx_0;
  t724[1291ULL] = X[126ULL];
  t724[1292ULL] = X[15ULL] * 0.1;
  t724[1293ULL] = X[313ULL];
  t724[1294ULL] = X[314ULL] * 0.1;
  t724[1295ULL] = -X[129ULL];
  t724[1296ULL] = X[129ULL];
  t724[1297ULL] = X[126ULL];
  t724[1298ULL] = X[15ULL] * 0.1;
  t724[1299ULL] = -X[129ULL];
  t724[1300ULL] = X[315ULL];
  t724[1301ULL] = -X[133ULL];
  t724[1302ULL] = X[316ULL];
  t724[1303ULL] = X[313ULL];
  t724[1304ULL] = X[314ULL] * 0.1;
  t724[1305ULL] = X[129ULL];
  t724[1306ULL] = X[317ULL];
  t724[1307ULL] = X[133ULL];
  t724[1308ULL] = X[316ULL];
  t724[1309ULL] = -X[133ULL];
  t724[1310ULL] = X[133ULL];
  t724[1311ULL] = t872;
  t724[1312ULL] = -X[133ULL] / (t872 == 0.0 ? 1.0E-16 : t872);
  t724[1313ULL] = Local_Restriction_TL_convection_B_rho;
  t724[1314ULL] = t873;
  t724[1315ULL] = X[318ULL];
  t724[1316ULL] = X[213ULL];
  t724[1317ULL] = X[214ULL] * 0.1;
  t724[1318ULL] = X[319ULL];
  t724[1319ULL] = X[320ULL] * 0.1;
  t724[1320ULL] = -X[237ULL];
  t724[1321ULL] = X[237ULL];
  t724[1322ULL] = X[213ULL];
  t724[1323ULL] = X[214ULL] * 0.1;
  t724[1324ULL] = -X[237ULL];
  t724[1325ULL] = X[321ULL];
  t724[1326ULL] = -X[241ULL];
  t724[1327ULL] = X[322ULL];
  t724[1328ULL] = X[319ULL];
  t724[1329ULL] = X[320ULL] * 0.1;
  t724[1330ULL] = X[237ULL];
  t724[1331ULL] = X[323ULL];
  t724[1332ULL] = X[241ULL];
  t724[1333ULL] = X[322ULL];
  t724[1334ULL] = -X[241ULL];
  t724[1335ULL] = X[241ULL];
  t724[1336ULL] = t874;
  t724[1337ULL] = -X[241ULL] / (t874 == 0.0 ? 1.0E-16 : t874);
  t724[1338ULL] = Local_Restriction_TL1_convection_B_rho;
  t724[1339ULL] = t875;
  t724[1340ULL] = X[324ULL];
  t724[1341ULL] = X[215ULL];
  t724[1342ULL] = X[216ULL] * 0.1;
  t724[1343ULL] = -X[267ULL];
  t724[1344ULL] = X[215ULL];
  t724[1345ULL] = X[216ULL] * 0.1;
  t724[1346ULL] = -X[267ULL];
  t724[1347ULL] = X[325ULL];
  t724[1348ULL] = -X[266ULL];
  t724[1349ULL] = -X[266ULL];
  t724[1350ULL] = X[217ULL];
  t724[1351ULL] = X[46ULL] * 0.1;
  t724[1352ULL] = X[112ULL];
  t724[1353ULL] = X[13ULL] * 0.1;
  t724[1354ULL] = -X[221ULL];
  t724[1355ULL] = -X[115ULL];
  t724[1356ULL] = t848;
  t724[1357ULL] = X[217ULL];
  t724[1358ULL] = X[46ULL] * 0.1;
  t724[1359ULL] = -X[221ULL];
  t724[1360ULL] = X[326ULL];
  t724[1361ULL] = X[119ULL];
  t724[1362ULL] = X[327ULL];
  t724[1363ULL] = X[112ULL];
  t724[1364ULL] = X[13ULL] * 0.1;
  t724[1365ULL] = -X[115ULL];
  t724[1366ULL] = X[328ULL];
  t724[1367ULL] = -X[119ULL];
  t724[1368ULL] = X[327ULL];
  t724[1369ULL] = t877 * 0.1;
  t724[1370ULL] = t848 * 9.5492965855137211;
  t724[1371ULL] = -X[212ULL];
  t724[1372ULL] = Pump_friction_torque_;
  t724[1373ULL] = X[119ULL];
  t724[1374ULL] = t854;
  t724[1375ULL] = Pump_convection_B_rho;
  t724[1376ULL] = t878 * 100.0;
  t724[1377ULL] = -X[119ULL];
  t724[1378ULL] = t877 * 1.9199999999999989E-13 / (Pump_mechanical_power == 0.0 ?
    1.0E-16 : Pump_mechanical_power) * 100000.0;
  t724[1379ULL] = -(X[212ULL] * t848) * 0.001;
  t724[1380ULL] = X[119ULL] / (t854 == 0.0 ? 1.0E-16 : t854);
  t724[1381ULL] = -X[119ULL] / (Pump_convection_B_rho == 0.0 ? 1.0E-16 :
    Pump_convection_B_rho);
  t724[1382ULL] = X[108ULL];
  t724[1383ULL] = X[109ULL] * 0.1;
  t724[1384ULL] = X[319ULL];
  t724[1385ULL] = X[320ULL] * 0.1;
  t724[1386ULL] = X[110ULL];
  t724[1387ULL] = X[111ULL] * 0.1;
  t724[1388ULL] = X[313ULL];
  t724[1389ULL] = X[314ULL] * 0.1;
  t724[1390ULL] = X[43ULL];
  t724[1391ULL] = X[44ULL];
  t724[1392ULL] = X[329ULL] * 0.016;
  t724[1393ULL] = -X[237ULL];
  t724[1394ULL] = X[329ULL] * 0.016;
  t724[1395ULL] = -X[129ULL];
  t724[1396ULL] = -X[241ULL];
  t724[1397ULL] = -X[133ULL];
  t724[1398ULL] = 1.1368124999999998 - t827;
  t724[1399ULL] = 1.1368124999999998 - t830;
  t724[1400ULL] = X[43ULL];
  t724[1401ULL] = X[44ULL];
  t724[1402ULL] = X[329ULL] * 0.001;
  t724[1403ULL] = X[61ULL] * 0.1;
  t724[1404ULL] = X[108ULL];
  t724[1405ULL] = X[109ULL] * 0.1;
  t724[1406ULL] = X[330ULL];
  t724[1407ULL] = X[319ULL];
  t724[1408ULL] = X[320ULL] * 0.1;
  t724[1409ULL] = -X[237ULL];
  t724[1410ULL] = X[331ULL];
  t724[1411ULL] = -X[241ULL];
  t724[1412ULL] = X[332ULL];
  t724[1413ULL] = X[110ULL];
  t724[1414ULL] = X[111ULL] * 0.1;
  t724[1415ULL] = X[333ULL];
  t724[1416ULL] = X[313ULL];
  t724[1417ULL] = X[314ULL] * 0.1;
  t724[1418ULL] = -X[129ULL];
  t724[1419ULL] = X[334ULL];
  t724[1420ULL] = -X[133ULL];
  t724[1421ULL] = X[335ULL];
  t724[1422ULL] = (X[43ULL] - 293.15) + 420.0;
  t724[1423ULL] = X[336ULL];
  t724[1424ULL] = X[329ULL];
  t724[1425ULL] = 0.01 - X[329ULL] * 0.001;
  t724[1426ULL] = Tank_rho_liquid;
  t724[1427ULL] = Tank_u_liquid;
  t724[1428ULL] = X[61ULL] / (Tank_rho_liquid == 0.0 ? 1.0E-16 : Tank_rho_liquid)
    * 100.0 + Tank_u_liquid;
  t724[1429ULL] = X[62ULL];
  t724[1430ULL] = X[112ULL];
  t724[1431ULL] = X[13ULL] * 0.1;
  for (b = 0; b < 1432; b++) {
    out.mX[b] = t724[b];
  }

  (void)LC;
  (void)t1092;
  return 0;
}
