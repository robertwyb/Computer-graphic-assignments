#include "ray_intersect_box.h"
#include <iostream>

bool ray_intersect_box(
  const Ray & ray,
  const BoundingBox& box,
  const double min_t,
  const double max_t
  )
{
    double xd = 1 / ray.direction(0), yd = 1 / ray.direction(1), zd = 1 / ray.direction(2);
    double x_origin = ray.origin(0), y_origin = ray.origin(1), z_origin = ray.origin(2);
    double tXMin, tXMax, tYMin, tYMax, tZMin, tZMax;
    if (xd >= 0) {
        tXMin = xd*(box.min_corner(0)-x_origin);
        tXMax = xd*(box.max_corner(0)-x_origin);
    } else {
        tXMin = xd*(box.max_corner(0)-x_origin);
        tXMax = xd*(box.min_corner(0)-x_origin);
    }
    
    if (yd >= 0) {
        tYMin = yd*(box.min_corner(1)-y_origin);
        tYMax = yd*(box.max_corner(1)-y_origin);
    } else {
        tYMin = yd*(box.max_corner(1)-y_origin);
        tYMax = yd*(box.min_corner(1)-y_origin);
    }
    
    if (zd >= 0) {
        tZMin = zd*(box.min_corner(2)-z_origin);
        tZMax = zd*(box.max_corner(2)-z_origin);
    } else {
        tZMin = zd*(box.max_corner(2)-z_origin);
        tZMax = zd*(box.min_corner(2)-z_origin);
    }
    
    double tMin = fmax(fmax(tXMin, tYMin), tZMin);
    double tMax = fmin(fmin(tXMax, tYMax), tZMax);
    if (tMax < tMin) {
        return false;
    }
    
    double intersectionMin = fmax(min_t, tMin);
    double intersectionMax = fmin(max_t, tMax);
    if (intersectionMax < intersectionMin) {
        return false;
    }
    return true;
}
