#include "simulate_bayer_mosaic.h"

using namespace std;
void simulate_bayer_mosaic(
  const std::vector<unsigned char> & rgb,
  const int & width,
  const int & height,
  std::vector<unsigned char> & bayer)
{
  bayer.resize(width*height);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  ////////////////////////////////////////////////////////////////////////////
   
  // bayer filter shape
  // g b
  // r g

  vector<vector<char>> bayer_filter = {{'g', 'b'}, {'r','g'}};
  int bayer_index = 0;
  for (int i = 0; i < height; i++) {
    int height_index = i % 2;
    for (int j = 0; j < width; j++){
      int width_index = j % 2;
      char c = bayer_filter[height_index][width_index];

      if (c == 'r') {
        bayer[bayer_index++] = rgb[3 * (j + width* i)];
      }
      else if (c == 'g') {
        bayer[bayer_index++] = rgb[3 * (j + width* i) + 1];
      }
      else {
        bayer[bayer_index++] = rgb[3 * (j + width* i) + 2];
      }
    }
  }
}
