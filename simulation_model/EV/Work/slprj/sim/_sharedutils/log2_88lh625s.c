#include "rtwtypes.h"
#include "log2_88lh625s.h"
#include "mwmathutil.h"
#include <math.h>
#include "rt_nonfinite.h"

real_T log2_88lh625s(real_T x)
{
  real_T f;
  real_T t;
  int32_T inte;
  if (x == 0.0) {
    f = (rtMinusInf);
  } else if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x))) {
    t = frexp(x, &inte);
    if (t == 0.5) {
      f = (real_T)inte - 1.0;
    } else if ((inte == 1) && (t < 0.75)) {
      f = muDoubleScalarLog(2.0 * t) / 0.69314718055994529;
    } else {
      f = muDoubleScalarLog(t) / 0.69314718055994529 + (real_T)inte;
    }
  } else {
    f = x;
  }

  return f;
}
