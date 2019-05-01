#include "Sphere.h"
#include "Ray.h"

bool Sphere::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
    Eigen::Vector3d d = ray.direction;
    Eigen::Vector3d e = ray.origin;
    Eigen::Vector3d c = center;
    
    double discriminant = pow(d.dot(e-c),2)-d.dot(d)*((e-c).dot(e-c)-pow(radius,2));
    // case where the ray does not intersect with the sphere
    if (discriminant < 0) {
        return false;
    // case where the ray grazes the sphere
    } else if (fabs(discriminant) <= 0.00001) {
        double ret = (d.dot(e-c)*(-1))/(d.dot(d));
        if (ret >= min_t) {
            t = ret;
            n = ((e+t*d)-c)/radius;
            return true;
        }
        return false;
    }
    
    // one solution where the ray enters the sphere and one where it leaves
    double first = ((d.dot(e-c)*(-1))+sqrt(discriminant))/d.dot(d);
    double second = ((d.dot(e-c)*(-1))-sqrt(discriminant))/d.dot(d);
    if (fmin(first, second) >= min_t) {
        t = fmin(first, second);
        n = ((e+t*d)-c)/radius;
        return true;
    }
    return false;
}

