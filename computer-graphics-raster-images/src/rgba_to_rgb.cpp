#include "rgba_to_rgb.h"

void rgba_to_rgb(
  const std::vector<unsigned char> & rgba,
  const int & width,
  const int & height,
  std::vector<unsigned char> & rgb)
{
  rgb.resize(height*width*3);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  ////////////////////////////////////////////////////////////////////////////
  int length = height * width * 3;
  rgb.resize(length);
  int rgb_index = 0;
  int rgba_index = 0;
  for (int i = 0; i < width * height; i++){
    for (int j = 0; j < 3; j++){
      rgb[rgb_index++] = rgba[rgba_index++];
    }
    rgba_index++; // ignore alpha value
  }
}
