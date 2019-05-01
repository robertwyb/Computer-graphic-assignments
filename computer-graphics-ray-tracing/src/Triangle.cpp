#include "Triangle.h"
#include "Ray.h"
#include <Eigen/Geometry>

bool Triangle::intersect(
  const Ray & ray, const double min_t, double & t, Eigen::Vector3d & n) const
{
    // use Cramer's rule to solve for t, gamma, beta
    double a, b, c, d, e, f, g, h, i, j, k, l;
    a = std::get<0>(corners)[0]-std::get<1>(corners)[0];
    d = std::get<0>(corners)[0]-std::get<2>(corners)[0];
    g = ray.direction[0];
    b = std::get<0>(corners)[1]-std::get<1>(corners)[1];
    e = std::get<0>(corners)[1]-std::get<2>(corners)[1];
    h = ray.direction[1];
    c = std::get<0>(corners)[2]-std::get<1>(corners)[2];
    f = std::get<0>(corners)[2]-std::get<2>(corners)[2];
    i = ray.direction[2];
    j = std::get<0>(corners)[0]-ray.origin[0];
    k = std::get<0>(corners)[1]-ray.origin[1];
    l = std::get<0>(corners)[2]-ray.origin[2];
    
    double t_, gamma, beta, M;
    M = a*(e*i-h*f)+b*(g*f-d*i)+c*(d*h-e*g);
    t_ = (f*(a*k-j*b)+e*(j*c-a*l)+d*(b*l-k*c))/(-M);
    if (t_ < min_t) {
        return false;
    }
    
    gamma = (i*(a*k-j*b)+h*(j*c-a*l)+g*(b*l-k*c))/M;
    if (gamma < 0 || gamma > 1) {
        return false;
    }
    
    beta = (j*(e*i-h*f)+k*(g*f-d*i)+l*(d*h-e*g))/M;
    if (beta < 0 || beta > 1-gamma) {
        return false;
    }
    
    t = t_;
    Eigen::Vector3d u = std::get<1>(corners)-std::get<0>(corners);
    Eigen::Vector3d v = std::get<2>(corners)-std::get<0>(corners);
    n = u.cross(v).normalized();
    return true;
}


