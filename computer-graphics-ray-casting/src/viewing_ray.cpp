#include "viewing_ray.h"

void viewing_ray(
  const Camera & camera,
  const int i,
  const int j,
  const int width,
  const int height,
  Ray & ray)
{
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here
  ////////////////////////////////////////////////////////////////////////////
  ray.origin = camera.e;
  double cw = camera.width;
  double ch = camera.height;

  double l = -cw/2;
  double r = cw/2;
  double t = ch/2;
  double b = -ch/2;

  // based on formula in textbook;
  double u = l+cw*(j+0.5)/width;
  double v = b+ch -ch*(i+0.5)/height;
    
ray.direction = - camera.d * camera.w + camera.u * u + camera.v * v;

}

