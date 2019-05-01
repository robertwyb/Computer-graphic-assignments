#include "ray_intersect_triangle.h"

bool ray_intersect_triangle(
  const Ray & ray,
  const Eigen::RowVector3d & A,
  const Eigen::RowVector3d & B,
  const Eigen::RowVector3d & C,
  const double min_t,
  const double max_t,
  double & t)
{
  double xa, xb, xc, ya, yb, yc, za, zb, zc;
  xa = A(0);
  ya = A(1);
  za = A(2);
  xb = B(0);
  yb = B(1);
  zb = B(2); 
  xc = C(0);
  yc = C(1);
  zc = C(2);
  double a, b, c, d, e, f, g, h, i, j, k, l;
  a = xa - xb;
  b = ya - yb;
  c = za - zb;
  d = xa - xc;
  e = ya - yc;
  f = za - zc;
  g = ray.direction[0];
  h = ray.direction[1];
  i = ray.direction[2];
  j = xa - ray.origin[0];
  k = ya - ray.origin[1];
  l = za - ray.origin[2];

  double beta, gamma, t_prime, M;
  M = a*(e*i-h*f)+b*(g*f-d*i)+c*(d*h-e*g);
  t_prime = (-1) * (f*(a*k-j*b)+e*(j*c-a*l)+d*(b*l-k*c)) / M;
  if (t_prime < min_t || t_prime > max_t) {
    return false;
  }
  gamma = (i*(a*k-j*b)+h*(j*c-a*l)+g*(b*l-k*c)) / M;
  if (gamma < 0 || gamma > 1) {
    return false;
  }
  beta = (j*(e*i-h*f)+k*(g*f-d*i)+l*(d*h-e*g)) / M;
  if (beta < 0 || beta > (1 - gamma)) {
    return false;
  }

  t =t_prime;

  return true;
}

