#include "blinn_phong_shading.h"
// Hint:
#include "first_hit.h"
#include <iostream>

Eigen::Vector3d blinn_phong_shading(
  const Ray & ray,
  const int & hit_id, 
  const double & t,
  const Eigen::Vector3d & n,
  const std::vector< std::shared_ptr<Object> > & objects,
  const std::vector<std::shared_ptr<Light> > & lights)
{
  ////////////////////////////////////////////////////////////////////////////

  Eigen::Vector3d c(0,0,0);
  Eigen::Vector3d q = ray.origin + t * ray.direction;

  // add ambient
  const Eigen::Vector3d& ka = objects[hit_id]->material->ka;
  c += (0.1 * ka.array() * Eigen::Vector3d(1, 1, 1).array()).matrix();
  for (const auto& light : lights) {
      // get light's direction and distance
      Eigen::Vector3d l;
      double max_t;
      light->direction(q, l, max_t);
      // construct the ray
      Ray light_ray;
      light_ray.origin = q;
      light_ray.direction = l;

      int temp_hit_id;
      double temp_t;
      Eigen::Vector3d temp_n;
      // check is the point in shadow or not
      if (!first_hit(light_ray, 0.000001, objects, temp_hit_id, temp_t, temp_n) || temp_t >= max_t) {
          
          // add lambertian
          const Eigen::Vector3d& kd = objects[hit_id]->material->kd;
          const Eigen::Vector3d& I = light->I;
          const double p = objects[hit_id]->material->phong_exponent;
          l = l.normalized();
          c += (kd.array() * I.array() * fmax(n.dot(l), 0)).matrix();
          // add specular
          const Eigen::Vector3d& ks = objects[hit_id]->material->ks;
          const Eigen::Vector3d v = (-ray.direction).normalized();
          const Eigen::Vector3d h = (v + l).normalized();
          c += (ks.array() * I.array() * pow(fmax(n.dot(h), 0), p)).matrix();
      }
  }
  return c;
}
