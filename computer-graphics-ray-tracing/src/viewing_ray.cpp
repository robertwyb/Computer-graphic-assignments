#include "viewing_ray.h"

void viewing_ray(
  const Camera & camera,
  const int i,
  const int j,
  const int width,
  const int height,
  Ray & ray)
{
    ray.origin = camera.e;
    
    double pixelWidth = camera.width/width;
    double pixelHeight = camera.height/height;
    
    double l, r, t, b;
    l = -camera.width/2;
    r = camera.width/2;
    b = -camera.height/2;
    t = camera.height/2;
    
    double u = l+(j+0.5)*pixelWidth;
    double v = b+camera.height-(i+0.5)*pixelHeight;
    
    Eigen::Vector3d pixelCenter = camera.e-camera.d*camera.w+u*camera.u+v*camera.v;
    ray.direction = pixelCenter-camera.e;
}

