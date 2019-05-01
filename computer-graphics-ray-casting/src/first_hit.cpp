#include "first_hit.h"

bool first_hit(
  const Ray & ray, 
  const double min_t,
  const std::vector< std::shared_ptr<Object> > & objects,
  int & hit_id, 
  double & t,
  Eigen::Vector3d & n)
{
  int temp_id;
  double temp_t = 999999999999;
  Eigen::Vector3d temp_n;
  bool hit = false;

  for (int i = 0; i < objects.size(); i++) {
    double cur_t;
    Eigen::Vector3d cur_n;
    if (cur_t < temp_t && objects[i]->intersect(ray, min_t, cur_t, cur_n)) {
      hit = true;
      temp_t = cur_t;
      temp_n = cur_n;
      temp_id = i;
    }
  }

  if (hit) {
    t = temp_t;
    n = temp_n;
    hit_id = temp_id;
    return true;
  }

  return false;
}

