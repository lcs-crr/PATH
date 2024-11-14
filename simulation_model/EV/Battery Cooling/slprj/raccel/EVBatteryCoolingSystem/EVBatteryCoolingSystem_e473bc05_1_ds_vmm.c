/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'EVBatteryCoolingSystem/Solver Configuration'.
 */

#include "ne_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_sys_struct.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_vmm.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_externals.h"
#include "EVBatteryCoolingSystem_e473bc05_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T EVBatteryCoolingSystem_e473bc05_1_ds_vmm(const NeDynamicSystem *LC,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static boolean_T _cg_const_1[106] = { false, false, false, false, true, false,
    true, false, true, false, true, false, true, true, true, true, true, true,
    true, true, true, true, true, true, false, false, false, false, false, false,
    false, false, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, false, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true,
    false };

  PmBoolVector out;
  int32_T b;
  boolean_T t0[106];
  (void)t1;
  (void)LC;
  out = t2->mVMM;
  for (b = 0; b < 106; b++) {
    t0[b] = _cg_const_1[b];
  }

  for (b = 0; b < 106; b++) {
    out.mX[b] = t0[b];
  }

  (void)LC;
  (void)t2;
  return 0;
}
