#include "rtwtypes.h"
#include "recomputeBlockDiag_jaPUPAO1.h"
#include "mwmathutil.h"

void recomputeBlockDiag_jaPUPAO1(const real_T A[4], real_T F[4], int32_T
  blockFormat)
{
  real_T delta;
  real_T expa;
  real_T sinchdelta;
  real_T x;
  if (blockFormat == 1) {
    delta = muDoubleScalarExp(A[0]);
    expa = muDoubleScalarExp(A[3]);
    sinchdelta = (A[0] + A[3]) / 2.0;
    if (muDoubleScalarMax(sinchdelta, muDoubleScalarAbs(A[0] - A[3]) / 2.0) <
        709.782712893384) {
      x = (A[3] - A[0]) / 2.0;
      if (x == 0.0) {
        x = 1.0;
      } else {
        x = muDoubleScalarSinh(x) / x;
      }

      F[2] = A[2] * muDoubleScalarExp(sinchdelta) * x;
    } else {
      F[2] = (expa - delta) * A[2] / (A[3] - A[0]);
    }

    F[0] = delta;
    F[3] = expa;
  } else {
    delta = muDoubleScalarSqrt(muDoubleScalarAbs(A[1] * A[2]));
    expa = muDoubleScalarExp(A[0]);
    if (delta == 0.0) {
      sinchdelta = 1.0;
    } else {
      sinchdelta = muDoubleScalarSin(delta) / delta;
    }

    F[0] = expa * muDoubleScalarCos(delta);
    F[1] = expa * A[1] * sinchdelta;
    F[2] = expa * A[2] * sinchdelta;
    F[3] = F[0];
  }
}
