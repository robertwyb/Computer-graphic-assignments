#include "write_ppm.h"
#include <fstream>
#include <cassert>
#include <iostream>

bool write_ppm(
  const std::string & filename,
  const std::vector<unsigned char> & data,
  const int width,
  const int height,
  const int num_channels)
{
  assert((num_channels == 3 || num_channels == 1) && ".ppm only supports RGB or grayscale images");

  std::ofstream image(filename, std::ios::binary);

  if (!image) {
    return false;
  }
  image<<"P6"<<std::endl;
  std::string widthStr = std::to_string(width);
  std::string heightStr = std::to_string(height);
  image<<widthStr<<" "<<heightStr<<std::endl;

  // specify the maximum value for each color channel
  image<<"255"<<std::endl;

  int read = 0;
  for (int i=0; i<width*height; i++) {
    if (num_channels == 1) {
      unsigned char grayScale = data[read++];
      char * g = reinterpret_cast<char *>(&grayScale);
      int g_size = sizeof(grayScale);
      for (int j = 0; j < 3; j++){
        image.write(g, g_size);
      }
    } else {
      unsigned char red = data[read++];
      unsigned char green = data[read++];
      unsigned char blue = data[read++];
      char * r = reinterpret_cast<char *>(&red);
      char * g = reinterpret_cast<char *>(&green);
      char * b = reinterpret_cast<char *>(&blue);
      int r_size = sizeof(red), g_size = sizeof(green), b_size = sizeof(blue);
      image.write(r, r_size);
      image.write(g, g_size);
      image.write(b, b_size);
    }
  }
  image.close();
  return true;
}

