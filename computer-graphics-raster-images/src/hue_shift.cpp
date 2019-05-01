#include "hue_shift.h"
#include "hsv_to_rgb.h"
#include "rgb_to_hsv.h"

void hue_shift(
  const std::vector<unsigned char> & rgb,
  const int width,
  const int height,
  const double shift,
  std::vector<unsigned char> & shifted)
{
  shifted.resize(rgb.size());
  
  int rgb_index = 0;
  int shifted_index = 0;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++){
      double h, s, v;
      double r = (double)(rgb[rgb_index++]) / 255.0;
      double g = (double)(rgb[rgb_index++]) / 255.0;
      double b = (double)(rgb[rgb_index++]) / 255.0;
      rgb_to_hsv(r, g, b, h, s, v);
      h += shift;
      hsv_to_rgb(h, s, v, r, g, b);

      shifted[shifted_index++] = (unsigned char)(r * 255.0);
      shifted[shifted_index++] = (unsigned char)(g * 255.0);
      shifted[shifted_index++] = (unsigned char)(b * 255.0);
    }
  }

}