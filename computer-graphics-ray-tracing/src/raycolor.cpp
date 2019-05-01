#include "raycolor.h"
#include "first_hit.h"
#include "blinn_phong_shading.h"
#include "reflect.h"

bool raycolor(
  const Ray & ray, 
  const double min_t,
  const std::vector< std::shared_ptr<Object> > & objects,
  const std::vector< std::shared_ptr<Light> > & lights,
  const int num_recursive_calls,
  Eigen::Vector3d & rgb)
{
  ////////////////////////////////////////////////////////////////////////////
  // Replace with your code here:
  rgb = Eigen::Vector3d(0,0,0);
  if (num_recursive_calls > 5){
    return false;
  }

  Eigen::Vector3d c(0, 0, 0);
  int temp_hit_id;
  double temp_t;
  Eigen::Vector3d temp_n;
  if (first_hit(ray, min_t, objects, temp_hit_id, temp_t, temp_n)) {
    Eigen::Vector3d p = ray.origin + temp_t * ray.direction;
    Ray reflect_ray;
    reflect_ray.origin = p;
    Eigen::Vector3d rd = ray.direction.normalized();
    reflect_ray.direction = reflect(rd, temp_n);

    Eigen::Vector3d reflect_rgb;
    if (raycolor(reflect_ray, 0.0001, objects, lights, num_recursive_calls + 1, reflect_rgb)) {
      Eigen::Vector3d& km = objects[temp_hit_id]->material->km;
      c += (km.array() * reflect_rgb.array()).matrix();
    }
    Eigen::Vector3d bp_rgb = blinn_phong_shading(ray, temp_hit_id, temp_t, temp_n, objects, lights);
    c += bp_rgb;
    rgb = c;
    return true;
  }
  rgb = c;
  return false;
}
