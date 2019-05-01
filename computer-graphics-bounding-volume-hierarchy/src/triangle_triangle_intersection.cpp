#include "triangle_triangle_intersection.h"
#include "ray_intersect_triangle.h"
#include "Ray.h"



bool triangle_triangle_intersection(
  const Eigen::RowVector3d & A0,
  const Eigen::RowVector3d & A1,
  const Eigen::RowVector3d & A2,
  const Eigen::RowVector3d & B0,
  const Eigen::RowVector3d & B1,
  const Eigen::RowVector3d & B2)
{
  double t;
  if (ray_intersect_triangle(Ray(A0, A1-A0), B0, B1, B2, 0, 1, t) ||
      ray_intersect_triangle(Ray(A1, A2-A1), B0, B1, B2, 0, 1, t) ||
      ray_intersect_triangle(Ray(A2, A0-A2), B0, B1, B2, 0, 1, t) ||
      ray_intersect_triangle(Ray(B0, B1-B0), A0, A1, A2, 0, 1, t) ||
      ray_intersect_triangle(Ray(B1, B2-B1), A0, A1, A2, 0, 1, t) ||
      ray_intersect_triangle(Ray(B2, B0-B2), A0, A1, A2, 0, 1, t)) {
    return true;
  }
  return false;
}
