/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'EVBatteryCoolingSystem/Solver Configuration'.
 */

#include "ne_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_sys_struct.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_dnf_v_x.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_externals.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T EVBatteryCoolingSystem_e473bc05_1_ds_dnf_v_x(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static boolean_T _cg_const_1[337] = { true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, true, true, true, true,
    true, true, true, false, true, true, true, true, true, true, true, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, false,
    false, false, false, false, false, false, false, true, true, true, true,
    false, false, false, false, false, true, true, true, true, false, false,
    false, false, false, true, true, true, true, false, false, false, false,
    false, true, true, true, true, false, false, false, false, false, true, true,
    true, true, false, false, false, false, false, true, true, true, true, false,
    false, false, false, false, true, true, true, true, false, false, false,
    false, false, true, true, true, true, false, false, false, false, false,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, false, false, false, false, true, true, true, true, true, false,
    false, false, false, false, false, false, true, true, true, false, false,
    false, true, true, true, true, true, true, true, true, true, true, true,
    true, false, true, false, false, true, true, true, true, false, false, false,
    false, false, true, true, true, true, false, false, false, false, false,
    true, true, true, true, false, false, false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, false, true, true, true, true, true, false, false,
    false, true, true, true, true, true, true, false, false, true, true, true,
    false, true, false, false, false };

  PmBoolVector out;
  int32_T b;
  boolean_T t0[337];
  (void)t1;
  (void)LC;
  out = t2->mDNF_V_X;
  for (b = 0; b < 337; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 337; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
