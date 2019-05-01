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
    
    std::ofstream file(filename, std::ios::binary);
    
    // error handling when opening the file
    if (!file) {
        return false;
    }
    
    // binary header for .ppm file
    file.write("P6 ", 3);
    
    // specify the width of the image
    std::string widthStr = std::to_string(width) + " ";
    file.write(widthStr.c_str(), widthStr.size());
    
    // specify the height of the image
    std::string heightStr = std::to_string(height) + " ";
    file.write(heightStr.c_str(), heightStr.size());
    
    // specify the maximum value for each color channel
    file.write("255 ", 4);
    
    // if num_channels is 3, write corresponding value to rgb color channel
    // if num_channels is 1, write the same gray scale value to the three rgb color channels
    int read = 0;
    for (int i=0; i<width*height; i++) {
        if (num_channels == 3) {
            unsigned char red = data[read++];
            unsigned char green = data[read++];
            unsigned char blue = data[read++];
            file.write(reinterpret_cast<char *>(&red), sizeof(red));
            file.write(reinterpret_cast<char *>(&green), sizeof(green));
            file.write(reinterpret_cast<char *>(&blue), sizeof(blue));
        } else {
            unsigned char grayScale = data[read++];
            file.write(reinterpret_cast<char *>(&grayScale), sizeof(grayScale));
            file.write(reinterpret_cast<char *>(&grayScale), sizeof(grayScale));
            file.write(reinterpret_cast<char *>(&grayScale), sizeof(grayScale));
        }
    }
    
    file.close();
    // error handling when closing the file
    if (!file) {
        return false;
    }
    
    return true;
}
