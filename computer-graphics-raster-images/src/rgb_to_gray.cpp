#include "rgb_to_gray.h"

void rgb_to_gray(
  const std::vector<unsigned char> & rgb,
  const int width,
  const int height,
  std::vector<unsigned char> & gray)
{
  gray.resize(height*width);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  ////////////////////////////////////////////////////////////////////////////
  int gray_index = 0;
  int rgb_index = 0;
  int total = height*width;
  for (int i=0; i<total; i++) {
    double r = (double)rgb[rgb_index++];
    double g = (double)rgb[rgb_index++];
    double b = (double)rgb[rgb_index++];
    double gray_computed = 0.2126*r + 0.7152*g + 0.0722*b;
    int gray_i = (int) gray_computed;
    gray[gray_index++] = (unsigned char) gray_i;
    }
}


