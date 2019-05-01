#include "insert_triangle_into_box.h"

void insert_triangle_into_box(
  const Eigen::RowVector3d & a,
  const Eigen::RowVector3d & b,
  const Eigen::RowVector3d & c,
  BoundingBox & B)
{
  for (int i = 0; i < 3; i++) {
      B.min_corner(i) = fmin(fmin(B.min_corner(i), a(i)), fmin(b(i), c(i)));
      B.max_corner(i) = fmax(fmax(B.max_corner(i), a(i)), fmax(b(i), c(i)));
  }
}


