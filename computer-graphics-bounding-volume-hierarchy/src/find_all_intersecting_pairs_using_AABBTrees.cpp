#include "find_all_intersecting_pairs_using_AABBTrees.h"
#include "box_box_intersect.h"
// Hint: use a list as a queue
#include <list> 

void find_all_intersecting_pairs_using_AABBTrees(
  const std::shared_ptr<AABBTree> & rootA,
  const std::shared_ptr<AABBTree> & rootB,
  std::vector<std::pair<std::shared_ptr<Object>,std::shared_ptr<Object> > > & 
    leaf_pairs)
{
  std::list<std::pair<std::shared_ptr<AABBTree>, std::shared_ptr<AABBTree>>> q;
  if (box_box_intersect(rootA->box, rootB->box)) {
    q.emplace_back(rootA, rootB);
  }

  while (!q.empty()) {
    const std::shared_ptr<AABBTree> node1 = q.front().first;
    const std::shared_ptr<AABBTree> node2 = q.front().second;
    q.pop_front();
    // case when node 1 is a leaf node while node 2 is not
    if (node1->num_leaves <= 2 && node2->num_leaves > 2) {
      if (box_box_intersect(node1->box, node2->left->box)) {
        q.emplace_back(node1, std::static_pointer_cast<AABBTree>(node2->left));
      }
      if (box_box_intersect(node1->box, node2->right->box)) {
        q.emplace_back(node1, std::static_pointer_cast<AABBTree>(node2->right));
      }
    }
    // case when node 1 is not a leaf node while node 2 is
    else if (node1->num_leaves > 2 && node2->num_leaves <= 2) {
      if (box_box_intersect(node1->left->box, node2->box)) {
        q.emplace_back(std::static_pointer_cast<AABBTree>(node1->left), node2);
      }
      if (box_box_intersect(node1->right->box, node2->box)) {
        q.emplace_back(std::static_pointer_cast<AABBTree>(node1->right), node2);
      }
    }
    // case when both nodes are leaf nodes
    else if (node1->num_leaves <= 2 && node2->num_leaves <= 2) {
      if (node1->left){
        if (node2->left && box_box_intersect(node1->left->box, node2->left->box)){
          leaf_pairs.emplace_back(node1->left, node2->left);
        }
        if (node2->right && box_box_intersect(node1->left->box, node2->right->box)){
          leaf_pairs.emplace_back(node1->left, node2->right);
        }
      }
      if (node1->right) {
        if (node2->left && box_box_intersect(node1->right->box, node2->left->box)) {
          leaf_pairs.emplace_back(node1->right, node2->left);
        }
        if (node2->right && box_box_intersect(node1->right->box, node2->right->box)){
          leaf_pairs.emplace_back(node1->right, node2->right);
        }
      }
    }
    // case when both nodes are not leaf nodes
    else if (node1->num_leaves > 2 && node2->num_leaves > 2) {
      if (box_box_intersect(node1->left->box, node2->left->box)) {
        q.emplace_back(std::static_pointer_cast<AABBTree>(node1->left), std::static_pointer_cast<AABBTree>(node2->left));
      }
      if (box_box_intersect(node1->left->box, node2->right->box)) {
        q.emplace_back(std::static_pointer_cast<AABBTree>(node1->left), std::static_pointer_cast<AABBTree>(node2->right));
      }
      if (box_box_intersect(node1->right->box, node2->left->box)) {
        q.emplace_back(std::static_pointer_cast<AABBTree>(node1->right), std::static_pointer_cast<AABBTree>(node2->left));
      }
      if (box_box_intersect(node1->right->box, node2->right->box)) {
        q.emplace_back(std::static_pointer_cast<AABBTree>(node1->right), std::static_pointer_cast<AABBTree>(node2->right));
      }
    }
  }
}
