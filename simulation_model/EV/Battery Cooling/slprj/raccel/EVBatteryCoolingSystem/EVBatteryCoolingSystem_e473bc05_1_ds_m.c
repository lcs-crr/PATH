/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'EVBatteryCoolingSystem/Solver Configuration'.
 */

#include "ne_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_sys_struct.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_m.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_externals.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T EVBatteryCoolingSystem_e473bc05_1_ds_m(const NeDynamicSystem *LC, const
  NeDynamicSystemInput *t803, NeDsMethodOutput *t804)
{
  ETTSf3049b48 ac_efOut;
  ETTSf3049b48 af_efOut;
  ETTSf3049b48 b_efOut;
  ETTSf3049b48 bc_efOut;
  ETTSf3049b48 bd_efOut;
  ETTSf3049b48 be_efOut;
  ETTSf3049b48 bf_efOut;
  ETTSf3049b48 cd_efOut;
  ETTSf3049b48 ce_efOut;
  ETTSf3049b48 df_efOut;
  ETTSf3049b48 eb_efOut;
  ETTSf3049b48 efOut;
  ETTSf3049b48 ef_efOut;
  ETTSf3049b48 f_efOut;
  ETTSf3049b48 fb_efOut;
  ETTSf3049b48 g_efOut;
  ETTSf3049b48 gf_efOut;
  ETTSf3049b48 hc_efOut;
  ETTSf3049b48 hf_efOut;
  ETTSf3049b48 ic_efOut;
  ETTSf3049b48 id_efOut;
  ETTSf3049b48 ie_efOut;
  ETTSf3049b48 jd_efOut;
  ETTSf3049b48 je_efOut;
  ETTSf3049b48 k_efOut;
  ETTSf3049b48 l_efOut;
  ETTSf3049b48 lb_efOut;
  ETTSf3049b48 mb_efOut;
  ETTSf3049b48 oc_efOut;
  ETTSf3049b48 p_efOut;
  ETTSf3049b48 pc_efOut;
  ETTSf3049b48 pd_efOut;
  ETTSf3049b48 pe_efOut;
  ETTSf3049b48 q_efOut;
  ETTSf3049b48 qd_efOut;
  ETTSf3049b48 qe_efOut;
  ETTSf3049b48 sb_efOut;
  ETTSf3049b48 t31;
  ETTSf3049b48 t34;
  ETTSf3049b48 t41;
  ETTSf3049b48 t42;
  ETTSf3049b48 t44;
  ETTSf3049b48 t45;
  ETTSf3049b48 tb_efOut;
  ETTSf3049b48 td_efOut;
  ETTSf3049b48 ud_efOut;
  ETTSf3049b48 vc_efOut;
  ETTSf3049b48 w_efOut;
  ETTSf3049b48 wc_efOut;
  ETTSf3049b48 we_efOut;
  ETTSf3049b48 x_efOut;
  ETTSf3049b48 xe_efOut;
  PmRealVector out;
  real_T X[337];
  real_T t454[106];
  real_T nonscalar22[7];
  real_T nonscalar23[3];
  real_T ab_efOut[1];
  real_T ad_efOut[1];
  real_T ae_efOut[1];
  real_T bb_efOut[1];
  real_T c_efOut[1];
  real_T cb_efOut[1];
  real_T cc_efOut[1];
  real_T cf_efOut[1];
  real_T d_efOut[1];
  real_T db_efOut[1];
  real_T dc_efOut[1];
  real_T dd_efOut[1];
  real_T de_efOut[1];
  real_T e_efOut[1];
  real_T ec_efOut[1];
  real_T ed_efOut[1];
  real_T ee_efOut[1];
  real_T fc_efOut[1];
  real_T fd_efOut[1];
  real_T fe_efOut[1];
  real_T ff_efOut[1];
  real_T gb_efOut[1];
  real_T gc_efOut[1];
  real_T gd_efOut[1];
  real_T ge_efOut[1];
  real_T h_efOut[1];
  real_T hb_efOut[1];
  real_T hd_efOut[1];
  real_T he_efOut[1];
  real_T i_efOut[1];
  real_T ib_efOut[1];
  real_T if_efOut[1];
  real_T j_efOut[1];
  real_T jb_efOut[1];
  real_T jc_efOut[1];
  real_T jf_efOut[1];
  real_T kb_efOut[1];
  real_T kc_efOut[1];
  real_T kd_efOut[1];
  real_T ke_efOut[1];
  real_T kf_efOut[1];
  real_T lc_efOut[1];
  real_T ld_efOut[1];
  real_T le_efOut[1];
  real_T m_efOut[1];
  real_T mc_efOut[1];
  real_T md_efOut[1];
  real_T me_efOut[1];
  real_T n_efOut[1];
  real_T nb_efOut[1];
  real_T nc_efOut[1];
  real_T nd_efOut[1];
  real_T ne_efOut[1];
  real_T o_efOut[1];
  real_T ob_efOut[1];
  real_T od_efOut[1];
  real_T oe_efOut[1];
  real_T pb_efOut[1];
  real_T qb_efOut[1];
  real_T qc_efOut[1];
  real_T r_efOut[1];
  real_T rb_efOut[1];
  real_T rc_efOut[1];
  real_T rd_efOut[1];
  real_T re_efOut[1];
  real_T s_efOut[1];
  real_T sc_efOut[1];
  real_T sd_efOut[1];
  real_T se_efOut[1];
  real_T t544[1];
  real_T t_efOut[1];
  real_T tc_efOut[1];
  real_T te_efOut[1];
  real_T u_efOut[1];
  real_T ub_efOut[1];
  real_T uc_efOut[1];
  real_T ue_efOut[1];
  real_T v_efOut[1];
  real_T vb_efOut[1];
  real_T vd_efOut[1];
  real_T ve_efOut[1];
  real_T wb_efOut[1];
  real_T wd_efOut[1];
  real_T xb_efOut[1];
  real_T xc_efOut[1];
  real_T xd_efOut[1];
  real_T y_efOut[1];
  real_T yb_efOut[1];
  real_T yc_efOut[1];
  real_T yd_efOut[1];
  real_T ye_efOut[1];
  real_T Cold_Plate_Pipe_in_L2_alpha_I;
  real_T Cold_Plate_Pipe_out_R1_alpha_I;
  real_T Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I;
  real_T Heating_Cooling_Unit_Cooling_Inlet_dUdT;
  real_T Heating_Cooling_Unit_Heater_Pipe_TL_dUdT;
  real_T Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_dUdT;
  real_T Tank_dUdT_liquid;
  real_T Tank_dUdp_liquid;
  real_T Tank_h_liquid;
  real_T intrm_sf_mf_580;
  real_T intrm_sf_mf_586;
  real_T t539_idx_0;
  real_T t628;
  real_T t630;
  real_T t631;
  real_T t632;
  real_T t636;
  real_T t639;
  real_T t642;
  real_T t643;
  real_T t644;
  real_T t647;
  real_T t648;
  real_T t649;
  real_T t650;
  real_T t653;
  real_T t654;
  real_T t655;
  real_T t658;
  real_T t659;
  real_T t660;
  real_T t661;
  real_T t663;
  real_T t664;
  real_T t665;
  real_T t666;
  real_T t667;
  real_T t668;
  real_T t669;
  real_T t673;
  real_T t674;
  real_T t675;
  real_T t677;
  real_T t678;
  real_T t679;
  real_T t682;
  real_T t683;
  real_T t687;
  real_T t690;
  real_T t693;
  real_T t695;
  real_T t696;
  real_T t698;
  real_T t699;
  real_T t700;
  real_T t701;
  real_T t702;
  real_T t703;
  real_T t705;
  real_T t706;
  real_T t707;
  real_T t708;
  real_T t710;
  real_T t711;
  real_T t712;
  real_T t713;
  real_T t714;
  real_T t715;
  real_T t717;
  real_T t718;
  real_T t719;
  real_T t720;
  real_T t722;
  real_T t723;
  real_T t724;
  real_T t725;
  real_T t727;
  real_T t730;
  real_T t731;
  real_T t732;
  real_T t734;
  real_T t736;
  real_T t737;
  real_T t738;
  real_T t739;
  real_T t740;
  real_T t742;
  real_T t743;
  real_T t745;
  real_T t747;
  real_T t750;
  real_T t755;
  real_T t756;
  real_T t758;
  real_T t759;
  real_T t760;
  real_T t784;
  real_T t788;
  real_T t795;
  real_T t799;
  real_T t802;
  uint64_T t413[1];
  uint64_T t416[1];
  uint64_T t47[1];
  uint64_T t48[1];
  uint64_T t50[1];
  int32_T b;
  for (b = 0; b < 337; b++) {
    X[b] = t803->mX.mX[b];
  }

  out = t804->mM;
  nonscalar22[0] = 0.0;
  nonscalar22[1] = 0.1;
  nonscalar22[2] = 0.25;
  nonscalar22[3] = 0.5;
  nonscalar22[4] = 0.75;
  nonscalar22[5] = 0.9;
  nonscalar22[6] = 1.0;
  nonscalar23[0] = 278.15;
  nonscalar23[1] = 293.15;
  nonscalar23[2] = 313.15;
  t544[0ULL] = X[12ULL];
  t47[0] = 20ULL;
  t48[0] = 1ULL;
  tlu2_linear_linear_prelookup(&efOut.mField0[0ULL], &efOut.mField1[0ULL],
    &efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL], &t47
    [0ULL], &t48[0ULL]);
  t44 = efOut;
  t544[0ULL] = X[13ULL];
  t50[0] = 19ULL;
  tlu2_linear_linear_prelookup(&b_efOut.mField0[0ULL], &b_efOut.mField1[0ULL],
    &b_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = b_efOut;
  tlu2_2d_linear_linear_value(&c_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = c_efOut[0];
  t628 = t539_idx_0;
  tlu2_2d_linear_linear_value(&d_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = d_efOut[0];
  t630 = t539_idx_0;
  tlu2_2d_linear_linear_value(&e_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = e_efOut[0];
  t632 = X[13ULL] / (X[125ULL] == 0.0 ? 1.0E-16 : X[125ULL]) * 100.0 + X[120ULL];
  t711 = (t539_idx_0 - t628 * t632 * 1000.0) * X[125ULL] * 0.001;
  t631 = (t632 * X[125ULL] / (t630 == 0.0 ? 1.0E-16 : t630) * 0.01 - X[12ULL] *
          t628) * 0.001;
  t544[0ULL] = X[14ULL];
  tlu2_linear_linear_prelookup(&f_efOut.mField0[0ULL], &f_efOut.mField1[0ULL],
    &f_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t44 = f_efOut;
  t544[0ULL] = X[15ULL];
  tlu2_linear_linear_prelookup(&g_efOut.mField0[0ULL], &g_efOut.mField1[0ULL],
    &g_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = g_efOut;
  tlu2_2d_linear_linear_value(&h_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = h_efOut[0];
  t632 = t539_idx_0;
  tlu2_2d_linear_linear_value(&i_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = i_efOut[0];
  t712 = t539_idx_0;
  tlu2_2d_linear_linear_value(&j_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = j_efOut[0];
  t636 = X[15ULL] / (X[139ULL] == 0.0 ? 1.0E-16 : X[139ULL]) * 100.0 + X[134ULL];
  t714 = (t539_idx_0 - t632 * t636 * 1000.0) * X[139ULL] * 0.001;
  t713 = (t636 * X[139ULL] / (t712 == 0.0 ? 1.0E-16 : t712) * 0.01 - X[14ULL] *
          t632) * 0.001;
  t544[0ULL] = X[16ULL];
  tlu2_linear_linear_prelookup(&k_efOut.mField0[0ULL], &k_efOut.mField1[0ULL],
    &k_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t31 = k_efOut;
  t544[0ULL] = X[17ULL];
  tlu2_linear_linear_prelookup(&l_efOut.mField0[0ULL], &l_efOut.mField1[0ULL],
    &l_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = l_efOut;
  tlu2_2d_linear_linear_value(&m_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = m_efOut[0];
  t636 = t539_idx_0;
  tlu2_2d_linear_linear_value(&n_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = n_efOut[0];
  t715 = t539_idx_0;
  tlu2_2d_linear_linear_value(&o_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = o_efOut[0];
  t642 = X[17ULL] / (X[155ULL] == 0.0 ? 1.0E-16 : X[155ULL]) * 100.0 + X[150ULL];
  t717 = (t539_idx_0 - t636 * t642 * 1000.0) * X[155ULL] * 0.001;
  t639 = (t642 * X[155ULL] / (t715 == 0.0 ? 1.0E-16 : t715) * 0.01 - X[16ULL] *
          t636) * 0.001;
  t544[0ULL] = X[27ULL];
  tlu2_linear_linear_prelookup(&p_efOut.mField0[0ULL], &p_efOut.mField1[0ULL],
    &p_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t31 = p_efOut;
  t544[0ULL] = X[26ULL];
  tlu2_linear_linear_prelookup(&q_efOut.mField0[0ULL], &q_efOut.mField1[0ULL],
    &q_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = q_efOut;
  tlu2_2d_linear_linear_value(&r_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = r_efOut[0];
  t642 = t539_idx_0;
  tlu2_2d_linear_linear_value(&s_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = s_efOut[0];
  t718 = t539_idx_0;
  tlu2_2d_linear_linear_value(&t_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = t_efOut[0];
  t719 = t539_idx_0;
  tlu2_2d_linear_linear_value(&u_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = u_efOut[0];
  t643 = t539_idx_0;
  tlu2_2d_linear_linear_value(&v_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = v_efOut[0];
  Cold_Plate_Pipe_in_L2_alpha_I = X[26ULL] / (t643 == 0.0 ? 1.0E-16 : t643) *
    100.0 + t539_idx_0;
  t644 = (t719 - t642 * Cold_Plate_Pipe_in_L2_alpha_I * 1000.0) * t643 *
    0.00045000000000000004;
  t719 = (Cold_Plate_Pipe_in_L2_alpha_I * t643 / (t718 == 0.0 ? 1.0E-16 : t718) *
          0.01 - X[27ULL] * t642) * 0.00045000000000000004;
  t544[0ULL] = X[29ULL];
  tlu2_linear_linear_prelookup(&w_efOut.mField0[0ULL], &w_efOut.mField1[0ULL],
    &w_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t44 = w_efOut;
  t544[0ULL] = X[28ULL];
  tlu2_linear_linear_prelookup(&x_efOut.mField0[0ULL], &x_efOut.mField1[0ULL],
    &x_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = x_efOut;
  tlu2_2d_linear_linear_value(&y_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = y_efOut[0];
  Cold_Plate_Pipe_in_L2_alpha_I = t539_idx_0;
  tlu2_2d_linear_linear_value(&ab_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ab_efOut[0];
  t720 = t539_idx_0;
  tlu2_2d_linear_linear_value(&bb_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = bb_efOut[0];
  t647 = t539_idx_0;
  tlu2_2d_linear_linear_value(&cb_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = cb_efOut[0];
  t648 = t539_idx_0;
  tlu2_2d_linear_linear_value(&db_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = db_efOut[0];
  t650 = X[28ULL] / (t648 == 0.0 ? 1.0E-16 : t648) * 100.0 + t539_idx_0;
  t649 = (t647 - Cold_Plate_Pipe_in_L2_alpha_I * t650 * 1000.0) * t648 *
    0.00045000000000000004;
  t647 = (t650 * t648 / (t720 == 0.0 ? 1.0E-16 : t720) * 0.01 - X[29ULL] *
          Cold_Plate_Pipe_in_L2_alpha_I) * 0.00045000000000000004;
  t544[0ULL] = X[31ULL];
  tlu2_linear_linear_prelookup(&eb_efOut.mField0[0ULL], &eb_efOut.mField1[0ULL],
    &eb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t44 = eb_efOut;
  t544[0ULL] = X[30ULL];
  tlu2_linear_linear_prelookup(&fb_efOut.mField0[0ULL], &fb_efOut.mField1[0ULL],
    &fb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = fb_efOut;
  tlu2_2d_linear_linear_value(&gb_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = gb_efOut[0];
  t650 = t539_idx_0;
  tlu2_2d_linear_linear_value(&hb_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = hb_efOut[0];
  t722 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ib_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ib_efOut[0];
  t723 = t539_idx_0;
  tlu2_2d_linear_linear_value(&jb_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = jb_efOut[0];
  t653 = t539_idx_0;
  tlu2_2d_linear_linear_value(&kb_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = kb_efOut[0];
  t655 = X[30ULL] / (t653 == 0.0 ? 1.0E-16 : t653) * 100.0 + t539_idx_0;
  t654 = (t723 - t650 * t655 * 1000.0) * t653 * 0.00045000000000000004;
  t723 = (t655 * t653 / (t722 == 0.0 ? 1.0E-16 : t722) * 0.01 - X[31ULL] * t650)
    * 0.00045000000000000004;
  t544[0ULL] = X[33ULL];
  tlu2_linear_linear_prelookup(&lb_efOut.mField0[0ULL], &lb_efOut.mField1[0ULL],
    &lb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t41 = lb_efOut;
  t544[0ULL] = X[32ULL];
  tlu2_linear_linear_prelookup(&mb_efOut.mField0[0ULL], &mb_efOut.mField1[0ULL],
    &mb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t31 = mb_efOut;
  tlu2_2d_linear_linear_value(&nb_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = nb_efOut[0];
  t655 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ob_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ob_efOut[0];
  t724 = t539_idx_0;
  tlu2_2d_linear_linear_value(&pb_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = pb_efOut[0];
  t725 = t539_idx_0;
  tlu2_2d_linear_linear_value(&qb_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = qb_efOut[0];
  t658 = t539_idx_0;
  tlu2_2d_linear_linear_value(&rb_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = rb_efOut[0];
  t660 = X[32ULL] / (t658 == 0.0 ? 1.0E-16 : t658) * 100.0 + t539_idx_0;
  t659 = (t725 - t655 * t660 * 1000.0) * t658 * 0.00045000000000000004;
  t725 = (t660 * t658 / (t724 == 0.0 ? 1.0E-16 : t724) * 0.01 - X[33ULL] * t655)
    * 0.00045000000000000004;
  t544[0ULL] = X[35ULL];
  tlu2_linear_linear_prelookup(&sb_efOut.mField0[0ULL], &sb_efOut.mField1[0ULL],
    &sb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t31 = sb_efOut;
  t544[0ULL] = X[34ULL];
  tlu2_linear_linear_prelookup(&tb_efOut.mField0[0ULL], &tb_efOut.mField1[0ULL],
    &tb_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t41 = tb_efOut;
  tlu2_2d_linear_linear_value(&ub_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ub_efOut[0];
  t660 = t539_idx_0;
  tlu2_2d_linear_linear_value(&vb_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = vb_efOut[0];
  t661 = t539_idx_0;
  tlu2_2d_linear_linear_value(&wb_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = wb_efOut[0];
  t727 = t539_idx_0;
  tlu2_2d_linear_linear_value(&xb_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = xb_efOut[0];
  t663 = t539_idx_0;
  tlu2_2d_linear_linear_value(&yb_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t41.mField0[0ULL], &t41.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = yb_efOut[0];
  t665 = X[34ULL] / (t663 == 0.0 ? 1.0E-16 : t663) * 100.0 + t539_idx_0;
  t664 = (t727 - t660 * t665 * 1000.0) * t663 * 0.00030000000000000003;
  t727 = (t665 * t663 / (t661 == 0.0 ? 1.0E-16 : t661) * 0.01 - X[35ULL] * t660)
    * 0.00030000000000000003;
  t544[0ULL] = X[37ULL];
  tlu2_linear_linear_prelookup(&ac_efOut.mField0[0ULL], &ac_efOut.mField1[0ULL],
    &ac_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t41 = ac_efOut;
  t544[0ULL] = X[36ULL];
  tlu2_linear_linear_prelookup(&bc_efOut.mField0[0ULL], &bc_efOut.mField1[0ULL],
    &bc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t42 = bc_efOut;
  tlu2_2d_linear_linear_value(&cc_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = cc_efOut[0];
  t665 = t539_idx_0;
  tlu2_2d_linear_linear_value(&dc_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = dc_efOut[0];
  t666 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ec_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ec_efOut[0];
  t667 = t539_idx_0;
  tlu2_2d_linear_linear_value(&fc_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = fc_efOut[0];
  t668 = t539_idx_0;
  tlu2_2d_linear_linear_value(&gc_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = gc_efOut[0];
  Cold_Plate_Pipe_out_R1_alpha_I = X[36ULL] / (t668 == 0.0 ? 1.0E-16 : t668) *
    100.0 + t539_idx_0;
  t669 = (t667 - t665 * Cold_Plate_Pipe_out_R1_alpha_I * 1000.0) * t668 *
    0.00030000000000000003;
  t667 = (Cold_Plate_Pipe_out_R1_alpha_I * t668 / (t666 == 0.0 ? 1.0E-16 : t666)
          * 0.01 - X[37ULL] * t665) * 0.00030000000000000003;
  t544[0ULL] = X[39ULL];
  tlu2_linear_linear_prelookup(&hc_efOut.mField0[0ULL], &hc_efOut.mField1[0ULL],
    &hc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t34 = hc_efOut;
  t544[0ULL] = X[38ULL];
  tlu2_linear_linear_prelookup(&ic_efOut.mField0[0ULL], &ic_efOut.mField1[0ULL],
    &ic_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t31 = ic_efOut;
  tlu2_2d_linear_linear_value(&jc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = jc_efOut[0];
  Cold_Plate_Pipe_out_R1_alpha_I = t539_idx_0;
  tlu2_2d_linear_linear_value(&kc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = kc_efOut[0];
  t730 = t539_idx_0;
  tlu2_2d_linear_linear_value(&lc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = lc_efOut[0];
  t731 = t539_idx_0;
  tlu2_2d_linear_linear_value(&mc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = mc_efOut[0];
  t673 = t539_idx_0;
  tlu2_2d_linear_linear_value(&nc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = nc_efOut[0];
  t675 = X[38ULL] / (t673 == 0.0 ? 1.0E-16 : t673) * 100.0 + t539_idx_0;
  t674 = (t731 - Cold_Plate_Pipe_out_R1_alpha_I * t675 * 1000.0) * t673 *
    0.00030000000000000003;
  t731 = (t675 * t673 / (t730 == 0.0 ? 1.0E-16 : t730) * 0.01 - X[39ULL] *
          Cold_Plate_Pipe_out_R1_alpha_I) * 0.00030000000000000003;
  t544[0ULL] = X[41ULL];
  tlu2_linear_linear_prelookup(&oc_efOut.mField0[0ULL], &oc_efOut.mField1[0ULL],
    &oc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t44 = oc_efOut;
  t544[0ULL] = X[40ULL];
  tlu2_linear_linear_prelookup(&pc_efOut.mField0[0ULL], &pc_efOut.mField1[0ULL],
    &pc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = pc_efOut;
  tlu2_2d_linear_linear_value(&qc_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = qc_efOut[0];
  t675 = t539_idx_0;
  tlu2_2d_linear_linear_value(&rc_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = rc_efOut[0];
  t732 = t539_idx_0;
  tlu2_2d_linear_linear_value(&sc_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = sc_efOut[0];
  t677 = t539_idx_0;
  tlu2_2d_linear_linear_value(&tc_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = tc_efOut[0];
  t678 = t539_idx_0;
  tlu2_2d_linear_linear_value(&uc_efOut[0ULL], &t44.mField0[0ULL], &t44.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = uc_efOut[0];
  Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I = X[40ULL] / (t678 ==
    0.0 ? 1.0E-16 : t678) * 100.0 + t539_idx_0;
  t679 = (t677 - t675 * Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I *
          1000.0) * t678 * 0.00030000000000000003;
  t677 = (Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I * t678 / (t732
           == 0.0 ? 1.0E-16 : t732) * 0.01 - X[41ULL] * t675) *
    0.00030000000000000003;
  t544[0ULL] = X[45ULL];
  tlu2_linear_linear_prelookup(&vc_efOut.mField0[0ULL], &vc_efOut.mField1[0ULL],
    &vc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t34 = vc_efOut;
  t544[0ULL] = X[46ULL];
  tlu2_linear_linear_prelookup(&wc_efOut.mField0[0ULL], &wc_efOut.mField1[0ULL],
    &wc_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t31 = wc_efOut;
  tlu2_2d_linear_linear_value(&xc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = xc_efOut[0];
  Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I = t539_idx_0;
  tlu2_2d_linear_linear_value(&yc_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = yc_efOut[0];
  t734 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ad_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t31.mField0[0ULL], &t31.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ad_efOut[0];
  t683 = X[46ULL] / (X[233ULL] == 0.0 ? 1.0E-16 : X[233ULL]) * 100.0 + X[226ULL];
  t736 = (t539_idx_0 - Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I *
          t683 * 1000.0) * X[233ULL] * 4.9999999999999996E-6;
  t682 = (t683 * X[233ULL] / (t734 == 0.0 ? 1.0E-16 : t734) * 0.01 - X[45ULL] *
          Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I) *
    4.9999999999999996E-6;
  t544[0ULL] = X[48ULL];
  tlu2_linear_linear_prelookup(&bd_efOut.mField0[0ULL], &bd_efOut.mField1[0ULL],
    &bd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t34 = bd_efOut;
  t544[0ULL] = X[47ULL];
  tlu2_linear_linear_prelookup(&cd_efOut.mField0[0ULL], &cd_efOut.mField1[0ULL],
    &cd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t45 = cd_efOut;
  tlu2_2d_linear_linear_value(&dd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = dd_efOut[0];
  t683 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ed_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ed_efOut[0];
  t737 = t539_idx_0;
  tlu2_2d_linear_linear_value(&fd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = fd_efOut[0];
  t738 = t539_idx_0;
  tlu2_2d_linear_linear_value(&gd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = gd_efOut[0];
  t687 = t539_idx_0;
  tlu2_2d_linear_linear_value(&hd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = hd_efOut[0];
  t690 = X[47ULL] / (t687 == 0.0 ? 1.0E-16 : t687) * 100.0 + t539_idx_0;
  Heating_Cooling_Unit_Cooling_Inlet_dUdT = (t738 - t683 * t690 * 1000.0) * t687
    * 0.00036815538909255391;
  t738 = (t690 * t687 / (t737 == 0.0 ? 1.0E-16 : t737) * 0.01 - X[48ULL] * t683)
    * 0.00036815538909255391;
  t544[0ULL] = X[50ULL];
  tlu2_linear_linear_prelookup(&id_efOut.mField0[0ULL], &id_efOut.mField1[0ULL],
    &id_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t31 = id_efOut;
  t544[0ULL] = X[49ULL];
  tlu2_linear_linear_prelookup(&jd_efOut.mField0[0ULL], &jd_efOut.mField1[0ULL],
    &jd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = jd_efOut;
  tlu2_2d_linear_linear_value(&kd_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = kd_efOut[0];
  t690 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ld_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ld_efOut[0];
  t739 = t539_idx_0;
  tlu2_2d_linear_linear_value(&md_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = md_efOut[0];
  t740 = t539_idx_0;
  tlu2_2d_linear_linear_value(&nd_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = nd_efOut[0];
  t693 = t539_idx_0;
  tlu2_2d_linear_linear_value(&od_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = od_efOut[0];
  t695 = X[49ULL] / (t693 == 0.0 ? 1.0E-16 : t693) * 100.0 + t539_idx_0;
  Heating_Cooling_Unit_Heater_Pipe_TL_dUdT = (t740 - t690 * t695 * 1000.0) *
    t693 * 0.00036815538909255386;
  t740 = (t695 * t693 / (t739 == 0.0 ? 1.0E-16 : t739) * 0.01 - X[50ULL] * t690)
    * 0.00036815538909255386;
  t544[0ULL] = X[53ULL];
  tlu2_linear_linear_prelookup(&pd_efOut.mField0[0ULL], &pd_efOut.mField1[0ULL],
    &pd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t31 = pd_efOut;
  t544[0ULL] = X[54ULL];
  tlu2_linear_linear_prelookup(&qd_efOut.mField0[0ULL], &qd_efOut.mField1[0ULL],
    &qd_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t45 = qd_efOut;
  tlu2_2d_linear_linear_value(&rd_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = rd_efOut[0];
  t696 = t539_idx_0;
  tlu2_2d_linear_linear_value(&sd_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = sd_efOut[0];
  t742 = t539_idx_0;
  t544[0ULL] = X[56ULL];
  tlu2_linear_linear_prelookup(&td_efOut.mField0[0ULL], &td_efOut.mField1[0ULL],
    &td_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t34 = td_efOut;
  t544[0ULL] = X[55ULL];
  tlu2_linear_linear_prelookup(&ud_efOut.mField0[0ULL], &ud_efOut.mField1[0ULL],
    &ud_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t42 = ud_efOut;
  tlu2_2d_linear_linear_value(&vd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = vd_efOut[0];
  t699 = t539_idx_0;
  tlu2_2d_linear_linear_value(&wd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = wd_efOut[0];
  t698 = t539_idx_0;
  tlu2_2d_linear_linear_value(&xd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = xd_efOut[0];
  t700 = t539_idx_0;
  tlu2_2d_linear_linear_value(&yd_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = yd_efOut[0];
  t701 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ae_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ae_efOut[0];
  t703 = X[55ULL] / (t701 == 0.0 ? 1.0E-16 : t701) * 100.0 + t539_idx_0;
  t702 = (t700 - t699 * t703 * 1000.0) * t701 * 0.0001227184630308513;
  t700 = (t703 * t701 / (t698 == 0.0 ? 1.0E-16 : t698) * 0.01 - X[56ULL] * t699)
    * 0.0001227184630308513;
  t544[0ULL] = X[58ULL];
  tlu2_linear_linear_prelookup(&be_efOut.mField0[0ULL], &be_efOut.mField1[0ULL],
    &be_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t34 = be_efOut;
  t544[0ULL] = X[57ULL];
  tlu2_linear_linear_prelookup(&ce_efOut.mField0[0ULL], &ce_efOut.mField1[0ULL],
    &ce_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t44 = ce_efOut;
  tlu2_2d_linear_linear_value(&de_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = de_efOut[0];
  t703 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ee_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ee_efOut[0];
  t743 = t539_idx_0;
  tlu2_2d_linear_linear_value(&fe_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = fe_efOut[0];
  t705 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ge_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ge_efOut[0];
  t706 = t539_idx_0;
  tlu2_2d_linear_linear_value(&he_efOut[0ULL], &t34.mField0[0ULL], &t34.mField2
    [0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = he_efOut[0];
  t708 = X[57ULL] / (t706 == 0.0 ? 1.0E-16 : t706) * 100.0 + t539_idx_0;
  t707 = (t705 - t703 * t708 * 1000.0) * t706 * 0.0001227184630308513;
  t705 = (t708 * t706 / (t743 == 0.0 ? 1.0E-16 : t743) * 0.01 - X[58ULL] * t703)
    * 0.0001227184630308513;
  t544[0ULL] = X[60ULL];
  tlu2_linear_linear_prelookup(&ie_efOut.mField0[0ULL], &ie_efOut.mField1[0ULL],
    &ie_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t41 = ie_efOut;
  t544[0ULL] = X[59ULL];
  tlu2_linear_linear_prelookup(&je_efOut.mField0[0ULL], &je_efOut.mField1[0ULL],
    &je_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t34 = je_efOut;
  tlu2_2d_linear_linear_value(&ke_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ke_efOut[0];
  t708 = t539_idx_0;
  tlu2_2d_linear_linear_value(&le_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = le_efOut[0];
  t745 = t539_idx_0;
  tlu2_2d_linear_linear_value(&me_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = me_efOut[0];
  t710 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ne_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ne_efOut[0];
  t799 = t539_idx_0;
  tlu2_2d_linear_linear_value(&oe_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = oe_efOut[0];
  t795 = X[59ULL] / (t799 == 0.0 ? 1.0E-16 : t799) * 100.0 + t539_idx_0;
  Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_dUdT = (t710 - t708 * t795 *
    1000.0) * t799 * 0.0036815538909255392;
  t710 = (t795 * t799 / (t745 == 0.0 ? 1.0E-16 : t745) * 0.01 - X[60ULL] * t708)
    * 0.0036815538909255392;
  t544[0ULL] = X[44ULL];
  tlu2_linear_linear_prelookup(&pe_efOut.mField0[0ULL], &pe_efOut.mField1[0ULL],
    &pe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField1, &t544[0ULL],
    &t47[0ULL], &t48[0ULL]);
  t41 = pe_efOut;
  t544[0ULL] = X[61ULL];
  tlu2_linear_linear_prelookup(&qe_efOut.mField0[0ULL], &qe_efOut.mField1[0ULL],
    &qe_efOut.mField2[0ULL], ((_NeDynamicSystem*)(LC))->mField2, &t544[0ULL],
    &t50[0ULL], &t48[0ULL]);
  t42 = qe_efOut;
  tlu2_2d_linear_linear_value(&re_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = re_efOut[0];
  t795 = t539_idx_0;
  tlu2_2d_linear_linear_value(&se_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = se_efOut[0];
  t747 = t539_idx_0;
  tlu2_2d_linear_linear_value(&te_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField6, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = te_efOut[0];
  t695 = t539_idx_0;
  Tank_dUdp_liquid = 0.01 - X[329ULL] * 0.001;
  t788 = -(Tank_dUdp_liquid + 6.25E-5) * X[336ULL] / (X[43ULL] == 0.0 ? 1.0E-16 :
    X[43ULL]);
  tlu2_2d_linear_linear_value(&ue_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField4, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ue_efOut[0];
  t750 = t539_idx_0;
  tlu2_2d_linear_linear_value(&ve_efOut[0ULL], &t41.mField0[0ULL], &t41.mField2
    [0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField5, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t539_idx_0 = ve_efOut[0];
  Tank_h_liquid = X[61ULL] / (t750 == 0.0 ? 1.0E-16 : t750) * 100.0 + t539_idx_0;
  Tank_dUdT_liquid = (X[329ULL] * 0.001 + 6.25E-5) * (t695 - t795 *
    Tank_h_liquid * 1000.0) * t750;
  t755 = X[43ULL] * 287.0;
  t544[0ULL] = X[80ULL];
  t413[0] = 7ULL;
  tlu2_linear_nearest_prelookup(&we_efOut.mField0[0ULL], &we_efOut.mField1[0ULL],
    &we_efOut.mField2[0ULL], &nonscalar22[0ULL], &t544[0ULL], &t413[0ULL], &t48
    [0ULL]);
  t34 = we_efOut;
  t544[0ULL] = X[0ULL];
  t416[0] = 3ULL;
  tlu2_linear_nearest_prelookup(&xe_efOut.mField0[0ULL], &xe_efOut.mField1[0ULL],
    &xe_efOut.mField2[0ULL], &nonscalar23[0ULL], &t544[0ULL], &t416[0ULL], &t48
    [0ULL]);
  t42 = xe_efOut;
  tlu2_2d_linear_nearest_value(&ye_efOut[0ULL], &t34.mField0[0ULL],
    &t34.mField2[0ULL], &t42.mField0[0ULL], &t42.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t413[0ULL], &t416[0ULL], &t48[0ULL]);
  t539_idx_0 = ye_efOut[0];
  t802 = t539_idx_0;
  t544[0ULL] = X[88ULL];
  tlu2_linear_nearest_prelookup(&af_efOut.mField0[0ULL], &af_efOut.mField1[0ULL],
    &af_efOut.mField2[0ULL], &nonscalar22[0ULL], &t544[0ULL], &t413[0ULL], &t48
    [0ULL]);
  t41 = af_efOut;
  t544[0ULL] = X[1ULL];
  tlu2_linear_nearest_prelookup(&bf_efOut.mField0[0ULL], &bf_efOut.mField1[0ULL],
    &bf_efOut.mField2[0ULL], &nonscalar23[0ULL], &t544[0ULL], &t416[0ULL], &t48
    [0ULL]);
  t34 = bf_efOut;
  tlu2_2d_linear_nearest_value(&cf_efOut[0ULL], &t41.mField0[0ULL],
    &t41.mField2[0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t413[0ULL], &t416[0ULL], &t48[0ULL]);
  t539_idx_0 = cf_efOut[0];
  intrm_sf_mf_580 = t539_idx_0;
  t544[0ULL] = X[96ULL];
  tlu2_linear_nearest_prelookup(&df_efOut.mField0[0ULL], &df_efOut.mField1[0ULL],
    &df_efOut.mField2[0ULL], &nonscalar22[0ULL], &t544[0ULL], &t413[0ULL], &t48
    [0ULL]);
  t44 = df_efOut;
  t544[0ULL] = X[3ULL];
  tlu2_linear_nearest_prelookup(&ef_efOut.mField0[0ULL], &ef_efOut.mField1[0ULL],
    &ef_efOut.mField2[0ULL], &nonscalar23[0ULL], &t544[0ULL], &t416[0ULL], &t48
    [0ULL]);
  t34 = ef_efOut;
  tlu2_2d_linear_nearest_value(&ff_efOut[0ULL], &t44.mField0[0ULL],
    &t44.mField2[0ULL], &t34.mField0[0ULL], &t34.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t413[0ULL], &t416[0ULL], &t48[0ULL]);
  t539_idx_0 = ff_efOut[0];
  t544[0ULL] = X[103ULL];
  tlu2_linear_nearest_prelookup(&gf_efOut.mField0[0ULL], &gf_efOut.mField1[0ULL],
    &gf_efOut.mField2[0ULL], &nonscalar22[0ULL], &t544[0ULL], &t413[0ULL], &t48
    [0ULL]);
  t34 = gf_efOut;
  t544[0ULL] = X[2ULL];
  tlu2_linear_nearest_prelookup(&hf_efOut.mField0[0ULL], &hf_efOut.mField1[0ULL],
    &hf_efOut.mField2[0ULL], &nonscalar23[0ULL], &t544[0ULL], &t416[0ULL], &t48
    [0ULL]);
  t44 = hf_efOut;
  tlu2_2d_linear_nearest_value(&if_efOut[0ULL], &t34.mField0[0ULL],
    &t34.mField2[0ULL], &t44.mField0[0ULL], &t44.mField2[0ULL],
    ((_NeDynamicSystem*)(LC))->mField11, &t413[0ULL], &t416[0ULL], &t48[0ULL]);
  t544[0] = if_efOut[0];
  intrm_sf_mf_586 = t544[0ULL];
  t784 = X[51ULL] * 287.0;
  t756 = ((X[51ULL] + 126.84999999999997) / (t784 == 0.0 ? 1.0E-16 : t784) *
          1000.0 - 1.0) * 0.01;
  tlu2_2d_linear_linear_value(&jf_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField3, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t544[0] = jf_efOut[0];
  t695 = t544[0ULL];
  tlu2_2d_linear_linear_value(&kf_efOut[0ULL], &t31.mField0[0ULL], &t31.mField2
    [0ULL], &t45.mField0[0ULL], &t45.mField2[0ULL], ((_NeDynamicSystem*)(LC))
    ->mField0, &t47[0ULL], &t50[0ULL], &t48[0ULL]);
  t544[0] = kf_efOut[0];
  t758 = t544[0ULL];
  t759 = X[54ULL] / (t742 == 0.0 ? 1.0E-16 : t742) * 100.0 + X[286ULL];
  t760 = (t696 - t758 * t759 * 1000.0) * t742 * 0.00015707963267948965;
  t696 = (t742 * t759 / (t695 == 0.0 ? 1.0E-16 : t695) * 0.01 - X[53ULL] * t758)
    * 0.00015707963267948965;
  t759 = -t628 * X[125ULL] * 0.001;
  t628 = t711 * 0.001 / 1.0826370950066049;
  t711 = 1.0 / (t630 == 0.0 ? 1.0E-16 : t630) * X[125ULL] * 0.001;
  t630 = t631 * 100.0 / 1.0826370950066049;
  t631 = -t632 * X[139ULL] * 0.001;
  t632 = t714 * 0.001 / 1.0826370950066049;
  t714 = 1.0 / (t712 == 0.0 ? 1.0E-16 : t712) * X[139ULL] * 0.001;
  t712 = t713 * 100.0 / 1.0826370950066049;
  t713 = -t636 * X[155ULL] * 0.001;
  t636 = t717 * 0.001 / 1.0826370950066049;
  t717 = 1.0 / (t715 == 0.0 ? 1.0E-16 : t715) * X[155ULL] * 0.001;
  t715 = t639 * 100.0 / 1.0826370950066049;
  t639 = 1.0 / (t718 == 0.0 ? 1.0E-16 : t718) * t643 * 0.00045000000000000004;
  t718 = t719 * 100.0 / 1.6276829059147746;
  t719 = -t642 * t643 * 0.00045000000000000004;
  t642 = t644 * 0.001 / 1.6276829059147746;
  t643 = 1.0 / (t720 == 0.0 ? 1.0E-16 : t720) * t648 * 0.00045000000000000004;
  t644 = t647 * 100.0 / 1.6276829059147746;
  t720 = -Cold_Plate_Pipe_in_L2_alpha_I * t648 * 0.00045000000000000004;
  Cold_Plate_Pipe_in_L2_alpha_I = t649 * 0.001 / 1.6276829059147746;
  t647 = 1.0 / (t722 == 0.0 ? 1.0E-16 : t722) * t653 * 0.00045000000000000004;
  t648 = t723 * 100.0 / 1.6276829059147746;
  t649 = -t650 * t653 * 0.00045000000000000004;
  t650 = t654 * 0.001 / 1.6276829059147746;
  t722 = 1.0 / (t724 == 0.0 ? 1.0E-16 : t724) * t658 * 0.00045000000000000004;
  t723 = t725 * 100.0 / 1.6276829059147746;
  t653 = -t655 * t658 * 0.00045000000000000004;
  t654 = t659 * 0.001 / 1.6276829059147746;
  t655 = 1.0 / (t661 == 0.0 ? 1.0E-16 : t661) * t663 * 0.00030000000000000003;
  t724 = t727 * 100.0 / 1.0851219372765166;
  t725 = -t660 * t663 * 0.00030000000000000003;
  t659 = 1.0 / (t666 == 0.0 ? 1.0E-16 : t666) * t668 * 0.00030000000000000003;
  t660 = t667 * 100.0 / 1.0851219372765166;
  t661 = -t665 * t668 * 0.00030000000000000003;
  t727 = t669 * 0.001 / 1.0851219372765166;
  t663 = 1.0 / (t730 == 0.0 ? 1.0E-16 : t730) * t673 * 0.00030000000000000003;
  t667 = 1.0 / (t732 == 0.0 ? 1.0E-16 : t732) * t678 * 0.00030000000000000003;
  t784 = t679 * 0.001;
  t732 = -Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I * X[233ULL] *
    4.9999999999999996E-6;
  t679 = t682 * 100.0;
  Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I = 1.0 / (t737 == 0.0 ?
    1.0E-16 : t737) * t687 * 0.00036815538909255391;
  t682 = -t683 * t687 * 0.00036815538909255391;
  t737 = t740 * 100.0 / 1.3316449634363392;
  t687 = Heating_Cooling_Unit_Heater_Pipe_TL_dUdT * 0.001 / 1.3316449634363392;
  t740 = -t758 * t742 * 0.00015707963267948965;
  Heating_Cooling_Unit_Heater_Pipe_TL_dUdT = 1.0 / (t695 == 0.0 ? 1.0E-16 : t695)
    * t742 * 0.00015707963267948965;
  t695 = t696 * 100.0;
  t696 = 1.0 / (t698 == 0.0 ? 1.0E-16 : t698) * t701 * 0.0001227184630308513;
  t698 = -t699 * t701 * 0.0001227184630308513;
  t454[0ULL] = -1.0;
  t454[1ULL] = -1.0;
  t454[2ULL] = -1.0;
  t454[3ULL] = -1.0;
  t454[4ULL] = -t802 / 9022.9;
  t454[5ULL] = 1.0;
  t454[6ULL] = -intrm_sf_mf_580 / 9022.9;
  t454[7ULL] = 1.0;
  t454[8ULL] = -t539_idx_0 / 9022.9;
  t454[9ULL] = 1.0;
  t454[10ULL] = -intrm_sf_mf_586 / 9022.9;
  t454[11ULL] = 1.0;
  t454[12ULL] = t759;
  t454[13ULL] = t628;
  t454[14ULL] = t711;
  t454[15ULL] = t630;
  t454[16ULL] = t631;
  t454[17ULL] = t632;
  t454[18ULL] = t714;
  t454[19ULL] = t712;
  t454[20ULL] = t713;
  t454[21ULL] = t636;
  t454[22ULL] = t717;
  t454[23ULL] = t715;
  t454[24ULL] = -1.0;
  t454[25ULL] = -1.0;
  t454[26ULL] = -1.0;
  t454[27ULL] = -1.0;
  t454[28ULL] = -1.0;
  t454[29ULL] = -1.0;
  t454[30ULL] = -1.0;
  t454[31ULL] = -1.0;
  t454[32ULL] = t639;
  t454[33ULL] = t718;
  t454[34ULL] = t719;
  t454[35ULL] = t642;
  t454[36ULL] = t643;
  t454[37ULL] = t644;
  t454[38ULL] = t720;
  t454[39ULL] = Cold_Plate_Pipe_in_L2_alpha_I;
  t454[40ULL] = t647;
  t454[41ULL] = t648;
  t454[42ULL] = t649;
  t454[43ULL] = t650;
  t454[44ULL] = t722;
  t454[45ULL] = t723;
  t454[46ULL] = t653;
  t454[47ULL] = t654;
  t454[48ULL] = t655;
  t454[49ULL] = t724;
  t454[50ULL] = t725;
  t454[51ULL] = t664 * 0.001 / 1.0851219372765166;
  t454[52ULL] = t659;
  t454[53ULL] = t660;
  t454[54ULL] = t661;
  t454[55ULL] = t727;
  t454[56ULL] = t663;
  t454[57ULL] = t731 * 100.0 / 1.0851219372765166;
  t454[58ULL] = -Cold_Plate_Pipe_out_R1_alpha_I * t673 * 0.00030000000000000003;
  t454[59ULL] = t674 * 0.001 / 1.0851219372765166;
  t454[60ULL] = t667;
  t454[61ULL] = t677 * 100.0 / 1.0851219372765166;
  t454[62ULL] = -t675 * t678 * 0.00030000000000000003;
  t454[63ULL] = t784 / 1.0851219372765166;
  t454[64ULL] = 1.0;
  t454[65ULL] = t788 / 0.0010036101859617248;
  t454[66ULL] = (Tank_dUdp_liquid + 6.25E-5) * (1000.0 - ((X[43ULL] - 293.15) +
    420.0) / (X[43ULL] == 0.0 ? 1.0E-16 : X[43ULL]) * 1000.0) * X[336ULL] *
    0.001;
  t454[67ULL] = -t795 * (X[329ULL] * 0.001 + 6.25E-5) * X[336ULL] /
    0.0010036101859617248;
  t454[68ULL] = -t795 * (X[329ULL] * 0.001 + 6.25E-5) * ((X[43ULL] - 293.15) +
    420.0) * X[336ULL];
  t454[69ULL] = (Tank_dUdT_liquid * 0.001 + -(-t795 * (X[329ULL] * 0.001 +
    6.25E-5) * t750) * Tank_h_liquid) / 883.14020419759254;
  t454[70ULL] = t732;
  t454[71ULL] = t736 * 0.001;
  t454[72ULL] = 1.0 / (t734 == 0.0 ? 1.0E-16 : t734) * X[233ULL] *
    4.9999999999999996E-6;
  t454[73ULL] = t679;
  t454[74ULL] = Heating_Cooling_Unit_Constant_Volume_Chamber_TL_alpha_I;
  t454[75ULL] = t738 * 100.0 / 1.3316449634363392;
  t454[76ULL] = t682;
  t454[77ULL] = Heating_Cooling_Unit_Cooling_Inlet_dUdT * 0.001 /
    1.3316449634363392;
  t454[78ULL] = 1.0 / (t739 == 0.0 ? 1.0E-16 : t739) * t693 *
    0.00036815538909255386;
  t454[79ULL] = t737;
  t454[80ULL] = -t690 * t693 * 0.00036815538909255386;
  t454[81ULL] = t687;
  t454[82ULL] = X[269ULL] * -0.01 / (X[51ULL] == 0.0 ? 1.0E-16 : X[51ULL]);
  t454[83ULL] = (1000.0 - (X[51ULL] + 126.84999999999997) / (X[51ULL] == 0.0 ?
    1.0E-16 : X[51ULL]) * 1000.0) * X[269ULL] * 0.01 * 0.001 /
    3.8273614848963939;
  t454[84ULL] = X[269ULL] * 0.01 / (X[52ULL] == 0.0 ? 1.0E-16 : X[52ULL]) *
    1.0E-5 * 100000.0;
  t454[85ULL] = t756 * 100.0 / 3.8273614848963939;
  t454[86ULL] = t740;
  t454[87ULL] = t760 * 0.001;
  t454[88ULL] = Heating_Cooling_Unit_Heater_Pipe_TL_dUdT;
  t454[89ULL] = t695;
  t454[90ULL] = t696;
  t454[91ULL] = t700 * 100.0;
  t454[92ULL] = t698;
  t454[93ULL] = t702 * 0.001;
  t454[94ULL] = 1.0 / (t743 == 0.0 ? 1.0E-16 : t743) * t706 *
    0.0001227184630308513;
  t454[95ULL] = t705 * 100.0;
  t454[96ULL] = -t703 * t706 * 0.0001227184630308513;
  t454[97ULL] = t707 * 0.001;
  t454[98ULL] = 1.0 / (t745 == 0.0 ? 1.0E-16 : t745) * t799 *
    0.0036815538909255392;
  t454[99ULL] = t710 * 100.0 / 13.316449634363392;
  t454[100ULL] = -t708 * t799 * 0.0036815538909255392;
  t454[101ULL] = Heating_Cooling_Unit_Refrigerant_System_Pipe_TL_dUdT * 0.001 /
    13.316449634363392;
  t454[102ULL] = ((Tank_dUdp_liquid + 6.25E-5) * X[336ULL] / (X[61ULL] == 0.0 ?
    1.0E-16 : X[61ULL]) * 1.0E-5 * 100000.0 + (X[329ULL] * 0.001 + 6.25E-5) *
                  (1.0 / (t747 == 0.0 ? 1.0E-16 : t747)) * X[336ULL]) /
    0.0010036101859617248;
  t454[103ULL] = (Tank_dUdp_liquid + 6.25E-5) * (((X[43ULL] - 293.15) + 420.0) /
    (t755 == 0.0 ? 1.0E-16 : t755) * 1000.0 - 1.0) * 100.0 + (X[329ULL] * 0.001
    + 6.25E-5) * (1.0 / (t747 == 0.0 ? 1.0E-16 : t747)) * ((X[43ULL] - 293.15) +
    420.0) * X[336ULL];
  t454[104ULL] = ((X[329ULL] * 0.001 + 6.25E-5) * (Tank_h_liquid * t750 / (t747 ==
    0.0 ? 1.0E-16 : t747) * 0.01 - X[44ULL] * t795) * 100.0 + -((X[329ULL] *
    0.001 + 6.25E-5) * (1.0 / (t747 == 0.0 ? 1.0E-16 : t747)) * t750) *
                  Tank_h_liquid) / 883.14020419759254;
  t454[105ULL] = 1.0;
  for (b = 0; b < 106; b++) {
    out.mX[b] = t454[b];
  }

  (void)LC;
  (void)t804;
  return 0;
}
