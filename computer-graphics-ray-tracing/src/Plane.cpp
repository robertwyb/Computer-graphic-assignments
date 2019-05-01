#include "Plane.h"
#include "Ray.h"

bool Plane::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
  ////////////////////////////////////////////////////////////////////////////
  Eigen::Vector3d e = ray.origin;
  Eigen::Vector3d d = ray.direction;

  if (d.dot(normal) == 0) {
    return false;
  }
  double newt = (point - e).dot(normal) / d.dot(normal);
  if (newt >= min_t) {
    t = newt;
    n = normal;
    return true;
  }
  return false;
}

