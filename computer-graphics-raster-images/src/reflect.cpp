#include "reflect.h"

void reflect(
  const std::vector<unsigned char> & input,
  const int width,
  const int height,
  const int num_channels,
  std::vector<unsigned char> & reflected)
{
  reflected.resize(width*height*num_channels);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  ////////////////////////////////////////////////////////////////////////////
  int i = 0;
  int j = width - 1;
  while (i <= j) {
    for (int h = 0; h < height; h++){
      for (int color = 0; color < num_channels; color++) {
        reflected[num_channels * (i + width * h) + color] = input[num_channels * (j + width * h) + color];
        reflected[num_channels * (j + width * h) + color] = input[num_channels * (i + width * h) + color];
      }
    }
    i++;
    j--;
  }
}
