#include "rgb_to_hsv.h"
#include <math.h>
#include <iostream>

void rgb_to_hsv(
  const double r,
  const double g,
  const double b,
  double & h,
  double & s,
  double & v)
{

  double maximum = fmax(fmax(r, g), b);
  double minimum = fmin(fmin(r, g), b);

  double diff = maximum - minimum;
  if (diff == 0) {
    h = 0.0;
  }
  else if (maximum == r) {
    h = 60.0 * (0.0 + (g - b) / diff);
  }
  else if (maximum == g) {
    h = 60.0 * (2.0 + (b - r) / diff);
  }
  else {
    h = 60.0 * (4.0 + (r - g) / diff);
  }

  if (h < 0.0) {
    h += 360;
  }

  if (maximum == 0.0) {
    s = 0;
  }
  else {
    s = diff / maximum;
  }
  
  v = maximum;

}
