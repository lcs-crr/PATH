#include "rtwtypes.h"
#include "automldiffls_oVvi23Xz.h"

void automldiffls_oVvi23Xz(const real_T u[4], real_T bw1, real_T bd, real_T bw2,
  real_T Ndiff, real_T shaftSwitch, real_T Jd, real_T Jw1, real_T Jw2, const
  real_T x[2], real_T y[4], real_T xdot[2])
{
  real_T diffDir_e[8];
  real_T diffDir_p[8];
  real_T invJ_p[8];
  real_T invJ[4];
  real_T NbdTerm;
  real_T invJ_e;
  real_T invJ_tmp;
  real_T term1;
  real_T term2;
  real_T x_p;
  int32_T diffDir;
  int32_T diffDir_tmp;
  int32_T invJ_tmp_p;
  term1 = Ndiff * Ndiff;
  NbdTerm = term1 * bd / 4.0;
  if (shaftSwitch != 0.0) {
    diffDir = -1;
  } else {
    diffDir = 1;
  }

  term1 *= Jd;
  term2 = (4.0 * Jw1 * Jw2 + term1 * Jw1) + Jw2 * term1;
  invJ[0] = (Jw2 * 4.0 + term1) / term2;
  invJ_tmp = -term1 / term2;
  invJ[2] = invJ_tmp;
  invJ[1] = invJ_tmp;
  invJ[3] = (Jw1 * 4.0 + term1) / term2;
  invJ_tmp = (real_T)diffDir / 2.0 * Ndiff;
  diffDir_p[0] = invJ_tmp;
  diffDir_p[2] = -1.0;
  diffDir_p[4] = 0.0;
  diffDir_p[6] = -0.5;
  diffDir_p[1] = invJ_tmp;
  diffDir_p[3] = 0.0;
  diffDir_p[5] = -1.0;
  diffDir_p[7] = 0.5;
  term1 = -(bw1 + NbdTerm);
  term2 = -(NbdTerm + bw2);
  diffDir_e[0] = invJ_tmp;
  diffDir_e[4] = invJ_tmp;
  for (diffDir = 0; diffDir < 2; diffDir++) {
    invJ_tmp = invJ[diffDir + 2];
    invJ_e = invJ[diffDir];
    for (diffDir_tmp = 0; diffDir_tmp < 4; diffDir_tmp++) {
      invJ_tmp_p = diffDir_tmp << 1;
      invJ_p[diffDir + invJ_tmp_p] = diffDir_p[invJ_tmp_p + 1] * invJ_tmp +
        diffDir_p[invJ_tmp_p] * invJ_e;
    }

    xdot[diffDir] = (((invJ_p[diffDir + 2] * u[1] + invJ_p[diffDir] * u[0]) +
                      invJ_p[diffDir + 4] * u[2]) + invJ_p[diffDir + 6] * u[3])
      + ((invJ_tmp * term2 + invJ_e * -NbdTerm) * x[1] + (invJ_tmp * -NbdTerm +
          invJ_e * term1) * x[0]);
    diffDir_tmp = diffDir << 2;
    diffDir_e[diffDir_tmp + 1] = (real_T)diffDir - 1.0;
    diffDir_e[diffDir_tmp + 2] = 0.0 - (real_T)diffDir;
    diffDir_e[diffDir_tmp + 3] = 0.5 - (real_T)diffDir;
  }

  NbdTerm = u[0];
  term1 = u[1];
  term2 = u[2];
  invJ_tmp = u[3];
  invJ_e = x[1];
  x_p = x[0];
  for (diffDir = 0; diffDir < 4; diffDir++) {
    y[diffDir] = (((0.0 * NbdTerm + 0.0 * term1) + 0.0 * term2) + 0.0 * invJ_tmp)
      + (diffDir_e[diffDir + 4] * invJ_e + diffDir_e[diffDir] * x_p);
  }
}
