#include "rtwtypes.h"
#include "xhseqr_9pzSUODQ.h"
#include "mwmathutil.h"

int32_T xhseqr_9pzSUODQ(real_T h[4], real_T z[4])
{
  real_T aa;
  real_T b_bb;
  real_T bb;
  real_T bcmis;
  real_T p;
  real_T s;
  real_T sab;
  real_T sac;
  real_T scale;
  real_T tau;
  int32_T count;
  int32_T i;
  int32_T info;
  int32_T k;
  int32_T tmp;
  boolean_T exitg1;
  info = 0;
  i = 1;
  while (i + 1 >= 1) {
    k = i + 1;
    exitg1 = false;
    while ((!exitg1) && ((k > 1) && (!(muDoubleScalarAbs(h[1]) <=
              2.0041683600089728E-292)))) {
      if (muDoubleScalarAbs(h[1]) <= (muDoubleScalarAbs(h[0]) +
           muDoubleScalarAbs(h[3])) * 2.2204460492503131E-16) {
        aa = muDoubleScalarMax(muDoubleScalarAbs(h[3]), muDoubleScalarAbs(h[0] -
          h[3]));
        bb = muDoubleScalarMin(muDoubleScalarAbs(h[3]), muDoubleScalarAbs(h[0] -
          h[3]));
        s = aa + bb;
        if (muDoubleScalarMax(muDoubleScalarAbs(h[1]), muDoubleScalarAbs(h[2])) /
            s * muDoubleScalarMin(muDoubleScalarAbs(h[1]), muDoubleScalarAbs(h[2]))
            <= muDoubleScalarMax(2.0041683600089728E-292, aa / s * bb *
             2.2204460492503131E-16)) {
          exitg1 = true;
        } else {
          k = 1;
        }
      } else {
        k = 1;
      }
    }

    if (k > 1) {
      h[1] = 0.0;
    }

    if ((i + 1 != k) && (k == i)) {
      b_bb = h[0];
      bcmis = h[i << 1];
      scale = h[i];
      p = h[(i << 1) + i];
      if (h[i] == 0.0) {
        aa = 1.0;
        bb = 0.0;
      } else if (h[i << 1] == 0.0) {
        aa = 0.0;
        bb = 1.0;
        p = h[0];
        b_bb = h[(i << 1) + i];
        bcmis = -h[i];
        scale = 0.0;
      } else if ((h[0] - h[(i << 1) + i] == 0.0) && ((h[i << 1] < 0.0) != (h[i] <
        0.0))) {
        aa = 1.0;
        bb = 0.0;
      } else {
        s = h[0] - h[(i << 1) + i];
        p = 0.5 * s;
        bb = muDoubleScalarMax(muDoubleScalarAbs(h[i << 1]), muDoubleScalarAbs
          (h[i]));
        if (!(h[i << 1] < 0.0)) {
          count = 1;
        } else {
          count = -1;
        }

        if (!(h[i] < 0.0)) {
          tmp = 1;
        } else {
          tmp = -1;
        }

        bcmis = muDoubleScalarMin(muDoubleScalarAbs(h[i << 1]),
          muDoubleScalarAbs(h[i])) * (real_T)count * (real_T)tmp;
        scale = muDoubleScalarMax(muDoubleScalarAbs(p), bb);
        aa = p / scale * p + bb / scale * bcmis;
        if (aa >= 8.8817841970012523E-16) {
          aa = muDoubleScalarSqrt(scale) * muDoubleScalarSqrt(aa);
          if (p < 0.0) {
            aa = -aa;
          }

          aa += p;
          b_bb = h[(i << 1) + i] + aa;
          p = h[(i << 1) + i] - bb / aa * bcmis;
          tau = muDoubleScalarHypot(h[i], aa);
          aa /= tau;
          bb = h[i] / tau;
          bcmis = h[i << 1] - h[i];
          scale = 0.0;
        } else {
          bb = h[i << 1] + h[i];
          scale = muDoubleScalarMax(muDoubleScalarAbs(s), muDoubleScalarAbs(bb));
          count = 0;
          while ((scale >= 7.4428285367870146E+137) && (count <= 20)) {
            bb *= 1.3435752215134178E-138;
            s *= 1.3435752215134178E-138;
            scale = muDoubleScalarMax(muDoubleScalarAbs(s), muDoubleScalarAbs(bb));
            count++;
          }

          while ((scale <= 1.3435752215134178E-138) && (count <= 20)) {
            bb *= 7.4428285367870146E+137;
            s *= 7.4428285367870146E+137;
            scale = muDoubleScalarMax(muDoubleScalarAbs(s), muDoubleScalarAbs(bb));
            count++;
          }

          tau = muDoubleScalarHypot(bb, s);
          aa = muDoubleScalarSqrt((muDoubleScalarAbs(bb) / tau + 1.0) * 0.5);
          if (!(bb < 0.0)) {
            count = 1;
          } else {
            count = -1;
          }

          bb = -(0.5 * s / (tau * aa)) * (real_T)count;
          s = h[i << 1] * bb + h[0] * aa;
          b_bb = h[i << 1] * aa + -h[0] * bb;
          p = h[(i << 1) + i] * bb + h[i] * aa;
          tau = h[(i << 1) + i] * aa + -h[i] * bb;
          bcmis = b_bb * aa + tau * bb;
          scale = -s * bb + p * aa;
          s = ((s * aa + p * bb) + (-b_bb * bb + tau * aa)) * 0.5;
          b_bb = s;
          p = s;
          if (scale != 0.0) {
            if (bcmis != 0.0) {
              if ((bcmis < 0.0) == (scale < 0.0)) {
                sab = muDoubleScalarSqrt(muDoubleScalarAbs(bcmis));
                sac = muDoubleScalarSqrt(muDoubleScalarAbs(scale));
                if (!(scale < 0.0)) {
                  p = sab * sac;
                } else {
                  p = -(sab * sac);
                }

                tau = 1.0 / muDoubleScalarSqrt(muDoubleScalarAbs(bcmis + scale));
                b_bb = s + p;
                p = s - p;
                bcmis -= scale;
                scale = 0.0;
                sab *= tau;
                tau *= sac;
                s = aa * sab - bb * tau;
                bb = aa * tau + bb * sab;
                aa = s;
              }
            } else {
              bcmis = -scale;
              scale = 0.0;
              s = aa;
              aa = -bb;
              bb = s;
            }
          }
        }
      }

      h[0] = b_bb;
      h[i << 1] = bcmis;
      h[i] = scale;
      h[i + (i << 1)] = p;
      if (i + 1 < 2) {
        s = aa * h[2] + bb * h[2];
        h[2] = aa * h[2] - bb * h[2];
        h[2] = s;
      }

      i = (i - 1) << 1;
      s = aa * z[i] + bb * z[2];
      z[2] = aa * z[2] - bb * z[i];
      z[i] = s;
      s = z[i + 1] * aa + bb * z[3];
      z[3] = aa * z[3] - z[i + 1] * bb;
      z[i + 1] = s;
    }

    i = k - 2;
  }

  return info;
}
