#include "ray_intersect_triangle_mesh_brute_force.h"
#include "ray_intersect_triangle.h"

bool ray_intersect_triangle_mesh_brute_force(
  const Ray & ray,
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  const double min_t,
  const double max_t,
  double & hit_t,
  int & hit_f)
{
  bool found = false;
  double temp_t = std::numeric_limits<double>::infinity();
  int temp_f;

  for (int i=0; i<F.rows(); i++) {
    double cur_t;
    if (ray_intersect_triangle(ray, V.row(F(i, 0)), V.row(F(i, 1)), V.row(F(i, 2)), min_t, max_t, cur_t) && cur_t < temp_t) {
      found = true;
      temp_t = cur_t;
      temp_f = i;
    }
  }

  if (found) {
    hit_t = temp_t;
    hit_f = temp_f;
    return true;
  }
  return false;
}
