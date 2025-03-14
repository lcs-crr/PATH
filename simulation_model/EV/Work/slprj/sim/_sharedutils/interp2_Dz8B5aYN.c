#include "rtwtypes.h"
#include "interp2_Dz8B5aYN.h"

real_T interp2_Dz8B5aYN(const real_T varargin_1[3], const real_T varargin_2[3],
  const real_T varargin_3[9], real_T varargin_4, real_T varargin_5)
{
  real_T Vq;
  real_T qx1;
  real_T rx;
  real_T tmp;
  int32_T ix;
  int32_T low_ip1;
  int32_T qx1_tmp;
  if ((varargin_4 >= varargin_1[0]) && (varargin_4 <= varargin_1[2]) &&
      (varargin_5 >= varargin_2[0]) && (varargin_5 <= varargin_2[2])) {
    ix = 0;
    if (varargin_4 >= varargin_1[1]) {
      ix = 1;
    }

    low_ip1 = 0;
    if (varargin_5 >= varargin_2[1]) {
      low_ip1 = 1;
    }

    if (varargin_4 == varargin_1[ix]) {
      qx1_tmp = 3 * ix + low_ip1;
      qx1 = varargin_3[qx1_tmp];
      Vq = varargin_3[qx1_tmp + 1];
    } else {
      tmp = varargin_1[ix + 1];
      if (tmp == varargin_4) {
        qx1_tmp = (ix + 1) * 3 + low_ip1;
        qx1 = varargin_3[qx1_tmp];
        Vq = varargin_3[qx1_tmp + 1];
      } else {
        rx = (varargin_4 - varargin_1[ix]) / (tmp - varargin_1[ix]);
        qx1_tmp = 3 * ix + low_ip1;
        ix = (ix + 1) * 3 + low_ip1;
        tmp = varargin_3[ix];
        qx1 = varargin_3[qx1_tmp];
        if (tmp == qx1) {
          qx1 = varargin_3[qx1_tmp];
        } else {
          qx1 = (1.0 - rx) * qx1 + tmp * rx;
        }

        Vq = varargin_3[qx1_tmp + 1];
        tmp = varargin_3[ix + 1];
        if (!(tmp == Vq)) {
          Vq = (1.0 - rx) * Vq + tmp * rx;
        }
      }
    }

    if ((varargin_5 == varargin_2[low_ip1]) || (qx1 == Vq)) {
      Vq = qx1;
    } else {
      tmp = varargin_2[low_ip1 + 1];
      if (!(tmp == varargin_5)) {
        rx = (varargin_5 - varargin_2[low_ip1]) / (tmp - varargin_2[low_ip1]);
        Vq = (1.0 - rx) * qx1 + rx * Vq;
      }
    }
  } else {
    Vq = 0.0;
  }

  return Vq;
}
