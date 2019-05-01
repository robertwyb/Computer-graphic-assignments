#include "Sphere.h"
#include "Ray.h"
bool Sphere::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
  Eigen::Vector3d e = ray.origin;
  Eigen::Vector3d d = ray.direction;
  Eigen::Vector3d c = center;

  double discriminant = pow(d.dot(e-c), 2) - d.dot(d) * ((e-c).dot(e-c)-pow(radius, 2));
  if (discriminant < 0) {
    return false;
  }
  else if (discriminant == 0) {
    double temp_t = (-1) * (d.dot(e-c)) / d.dot(d);
    if (temp_t >= min_t) {
      t = temp_t;
      n = ((e + t * d) - c) / radius;
      return true;
    }
    return false;
  }
  else {
    double s1 = ((-1) * d.dot(e - c) + sqrt(discriminant)) / d.dot(d);
    double s2 = ((-1) * d.dot(e - c) - sqrt(discriminant)) / d.dot(d);
    double small_s = fmin(s1, s2);
    if (small_s >= min_t) {
      t = small_s;
      n = ((e + t * d) - c) / radius;
      return true;
    }
    return false;
  }

  return false;

}

