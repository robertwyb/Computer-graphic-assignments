#include "hsv_to_rgb.h"
#include "tgmath.h"


void hsv_to_rgb(
  const double h,
  const double s,
  const double v,
  double & r,
  double & g,
  double & b)

// based on formula on https://en.wikipedia.org/wiki/HSL_and_HSV
{
  double k_r = fmod((5 + h/60.0), 6.0);
  double k_g = fmod((3 + h/60.0), 6.0);
  double k_b = fmod((1 + h/60.0), 6.0);
  r = v - v * s * fmax(fmin(fmin(k_r, 4 - k_r), 1), 0);
  g = v - v * s * fmax(fmin(fmin(k_g, 4 - k_g), 1), 0);
  b = v - v * s * fmax(fmin(fmin(k_b, 4 - k_b), 1), 0);
  
}
