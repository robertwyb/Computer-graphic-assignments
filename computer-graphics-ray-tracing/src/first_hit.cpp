#include "first_hit.h"
#include <limits>

bool first_hit(
  const Ray & ray, 
  const double min_t,
  const std::vector< std::shared_ptr<Object> > & objects,
  int & hit_id, 
  double & t,
  Eigen::Vector3d & n)


{
    bool found = false;
    double temp_t = std::numeric_limits<double>::infinity();
    Eigen::Vector3d temp_n;
    double temp_id;
    
    // loop through all objects in the scene
    for (int i=0; i < objects.size(); i++) {
        double cur_t;
        Eigen::Vector3d cur_n;
        // choose the closest intersection
        if (objects[i]->intersect(ray, min_t, cur_t, cur_n) && cur_t < temp_t) {
            found = true;
            temp_t = cur_t;
            temp_n = cur_n;
            temp_id = i;
        }
    }
    
    if (found) {
        t = temp_t;
        n = temp_n;
        hit_id = temp_id;
        return true;
    }
    return false;
}
