#include "forward_kinematics.h"
#include "euler_angles_to_transform.h"
#include <functional> // std::function

void forward_kinematics(
  const Skeleton & skeleton,
  std::vector<Eigen::Affine3d,Eigen::aligned_allocator<Eigen::Affine3d> > & T)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  T.resize(skeleton.size(),Eigen::Affine3d::Identity());


  for (int i=0; i < skeleton.size(); i++) {
    Bone b = skeleton[i];
    if (b.parent_index == -1) {
      T[i] = Eigen::Affine3d::Identity() * b.rest_T * euler_angles_to_transform(b.xzx) * b.rest_T.inverse();
    }
    else {
      T[i] = T[b.parent_index] * b.rest_T * euler_angles_to_transform(b.xzx) * b.rest_T.inverse();
    }
  }
  /////////////////////////////////////////////////////////////////////////////
}
