#include "over.h"

void over(
  const std::vector<unsigned char> & A,
  const std::vector<unsigned char> & B,
  const int & width,
  const int & height,
  std::vector<unsigned char> & C)
{
  C.resize(A.size());
  
  int a_index = 0, b_index = 0, c_index = 0;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      double A_r = (double)(A[a_index++] / 255.0);
      double A_g = (double)(A[a_index++] / 255.0);
      double A_b = (double)(A[a_index++] / 255.0);
      double A_a = (double)(A[a_index++] / 255.0);
      double B_r = (double)(B[b_index++] / 255.0);
      double B_g = (double)(B[b_index++] / 255.0);
      double B_b = (double)(B[b_index++] / 255.0);
      double B_a = (double)(B[b_index++] / 255.0);

      double a = 1.0 - (1.0 - A_a)*(1.0 - B_a);
      double r = (A_a * A_r + (1.0 -A_a) * B_a * B_r) / a;
      double g = (A_a * A_g + (1.0 -A_a) * B_a * B_g) / a;
      double b = (A_a * A_b + (1.0 -A_a) * B_a * B_b) / a;

      C[c_index++] = (unsigned char)(r * 255.0);
      C[c_index++] = (unsigned char)(g * 255.0);
      C[c_index++] = (unsigned char)(b * 255.0);
      C[c_index++] = (unsigned char)(a * 255.0);
    }
  }
  
}
