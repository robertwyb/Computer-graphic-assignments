#include "Triangle.h"
#include "Ray.h"
#include <Eigen/Geometry>


bool Triangle::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
  double xa, xb, xc, ya, yb, yc, za, zb, zc;
  xa = std::get<0>(corners)[0];
  ya = std::get<0>(corners)[1];
  za = std::get<0>(corners)[2];
  xb = std::get<1>(corners)[0];
  yb = std::get<1>(corners)[1];
  zb = std::get<1>(corners)[2];
  xc = std::get<2>(corners)[0];
  yc = std::get<2>(corners)[1];
  zc = std::get<2>(corners)[2];

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
  if (t_prime < min_t) {
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
  Eigen::Vector3d u = std::get<1>(corners) - std::get<0>(corners);
  Eigen::Vector3d v = std::get<2>(corners) - std::get<0>(corners);
  n = u.cross(v).normalized();

  return true;
}


