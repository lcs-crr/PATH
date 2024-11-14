#include "rtwtypes.h"
#include "norm_doJDoZY6.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"

real_T norm_doJDoZY6(const real_T x[4])
{
  real_T s;
  real_T y;
  int32_T j;
  boolean_T exitg1;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 2)) {
    s = muDoubleScalarAbs(x[(j << 1) + 1]) + muDoubleScalarAbs(x[j << 1]);
    if (muDoubleScalarIsNaN(s)) {
      y = (rtNaN);
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}
