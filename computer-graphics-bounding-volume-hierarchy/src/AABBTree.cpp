#include "AABBTree.h"
#include "insert_box_into_box.h"
#include <iostream>

AABBTree::AABBTree(
  const std::vector<std::shared_ptr<Object> > & objects,
  int a_depth): 
  depth(std::move(a_depth)), 
  num_leaves(objects.size())
{
  int s = objects.size();
  if (s == 0) {
    this->left = NULL;
    this->right = NULL;
    // case when only one object
    } 
    else if (s == 1) {
      this->left = objects[0];
      this->right = NULL;
      insert_box_into_box(this->left->box, this->box);
     // case when two objects
    } 
    else if (s == 2) {
      this->left = objects[0];
      this->right = objects[1];
      insert_box_into_box(this->left->box, this->box);
      insert_box_into_box(this->right->box, this->box);
    } 
    else {
       
      for (const auto& object : objects) {
        insert_box_into_box(object->box, this->box);
      }
      
      int max_axis;
      (this->box.max_corner-this->box.min_corner).maxCoeff(&max_axis);
      double max_b = box.max_corner(max_axis);
      double min_b = box.min_corner(max_axis);
      
      const double middle =  min_b + (max_b - min_b) / 2;
      std::vector<std::shared_ptr<Object>> left_part;
      std::vector<std::shared_ptr<Object>> right_part;
      for (const auto& object : objects) {
        if (object->box.center()(max_axis) > middle) {
	  right_part.emplace_back(object);
        } else {
           left_part.emplace_back(object);
        }
      }
      // corner case
      if (left_part.empty() && !right_part.empty()) {
        left_part.emplace_back(right_part.back());
        right_part.pop_back();
      } else if (!left_part.empty() && right_part.empty()) {
        right_part.emplace_back(left_part.back());
        left_part.pop_back();
      }
      
      // create bounding boxes
      double depth = a_depth + 1;
      this->left = std::make_shared<AABBTree>(left_part, depth);
      this->right = std::make_shared<AABBTree>(right_part, depth);
    }
}

bool AABBTree::ray_intersect(
  const Ray& ray,
  const double min_t,
  const double max_t,
  double & t,
  std::shared_ptr<Object> & descendant) const 
{
  if (ray_intersect_box(ray, this->box, min_t, max_t)){
    double left_temp, right_temp;
    std::shared_ptr<Object> left_des, right_des;
    bool left_hit = (this->left != NULL) && (this->left->ray_intersect(ray, min_t, max_t, left_temp, left_des));
    bool right_hit = (this->right != NULL) && (this->right->ray_intersect(ray, min_t, max_t, right_temp, right_des));

    if (!left_des && left_hit) {
        left_des = left;
    }
    if (!right_des && right_hit) {
        right_des = right;
    }
    if (left_hit && right_hit) {
        if (left_temp < right_temp) {
            t  = left_temp;
            descendant = left_des;
        }
        else {
            t = right_temp;
            descendant = right_des;
        }
	return true;
    }
    else if (left_hit) {
        t = left_temp;
        descendant = left_des;
        return true;
    }
    else if (right_hit) {
        t = right_temp;
        descendant = right_des;
        return true;
    }
    else {
        return false;
    }
  } else {
    return false;
  }
}
