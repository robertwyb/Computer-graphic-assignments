#include "rotate.h"

void rotate(
  const std::vector<unsigned char> & input,
  const int width,
  const int height,
  const int num_channels,
  std::vector<unsigned char> & rotated)
{
  rotated.resize(height*width*num_channels);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  ////////////////////////////////////////////////////////////////////////////
  
  // copy each colomn as row into rotated vector to get rotate image
  int index = 0;
  for (int i = width - 1; i >= 0; i--) {
    for (int j = 0; j <= height - 1; j ++) {
      for (int color = 0; color < num_channels; color++) {
        rotated[index++] = input[num_channels*(i + width * j) + color];
      }
    }
  }
}
