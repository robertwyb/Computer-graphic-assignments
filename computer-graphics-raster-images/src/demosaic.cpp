#include "demosaic.h"
#include <iostream>


void demosaic(
  const std::vector<unsigned char> & bayer,
  const int & width,
  const int & height,
  std::vector<unsigned char> & rgb)
{
  rgb.resize(width*height*3);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  //     g b g b g b
  //     r g r g r g
  //     g b g b g b
  //     r g r g r g 
  ////////////////////////////////////////////////////////////////////////////
  std::vector<std::vector<char>> bayer_filter = {{'g', 'b'}, {'r', 'g'}};
  std::vector<std::vector<int>> directions = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};

  //////////////////////////////////////////////////////////////////////////////////////////////////
  // std::vector<std::vector<int>> r_gdirections = {{-1, 0}, {0, -1}, {0, 1}, {1, 1}};
  // std::vector<std::vector<int>> r_bdirections = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
  // std::vector<std::vector<int>> g_rdirections = {{0, -1}, {0, 1}};
  // std::vector<std::vector<int>> g_bdirections = {{-1, 0}, {1, 0}};
  // std::vector<std::vector<int>> b_rdirections = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
  // std::vector<std::vector<int>> b_gdirections = {{-1, 0}, {0, -1}, {0, 1}, {1, 1}};
  //
  // at first i tried to identify current color then use those specific directions to make calculation easier, but the result image looks like desaturated
  //////////////////////////////////////////////////////////////////////////////////////////////////

  int rgb_index = 0;
  for (int i = 0; i < height; i++) {
    int height_index = i % 2;
    for (int j = 0; j < width; j++) {
      int width_index = j % 2;
      char color = bayer_filter[height_index][width_index];
      int r_count = 0, g_count = 0, b_count = 0;
      double r_sum = 0.0, g_sum = 0.0, b_sum = 0.0;
      for (auto dir : directions) {
        int h = i + dir[0];
        int w = j + dir[1];
        int h_index = h % 2;
        int w_index = w % 2;
        // check if the new pixel is in the range
        if (h >= 0 && h < height && w >= 0 && w < height) {
          char new_color = bayer_filter[h_index][w_index];
          // add the value to color sum and update color count
          if (new_color  == 'r') {
            r_sum += bayer[w + h * width];
            r_count++;
          }
          else if (new_color == 'g') {
            g_sum += bayer[w + h * width];
            g_count++;
          }
          else {
            b_sum += bayer[w + h * width];
            b_count++;
          }
        }
      }    
      // write in the data
      if (color == 'r') {
        // write in red as its original value and calculate green, blue
        rgb[rgb_index++] = bayer[j + i * width];
        rgb[rgb_index++] = (unsigned char) (g_sum / g_count);
        rgb[rgb_index++] = (unsigned char) (b_sum / b_count);
      }
      else if (color == 'g') {
        // write in green as its original value and calculate red, blue
        rgb[rgb_index++] = (unsigned char) (r_sum / r_count);
        rgb[rgb_index++] = bayer[j + i * width];
        rgb[rgb_index++] = (unsigned char) (b_sum / b_count);
      }
      else {
        // write in blue as its original value and calculate red, green
        rgb[rgb_index++] = (unsigned char) (r_sum / r_count);
        rgb[rgb_index++] = (unsigned char) (g_sum / g_count);
        rgb[rgb_index++] = bayer[j + i * width];
      }
    }
  }
}   
