#include "transformed_tips.h"
#include "forward_kinematics.h"

Eigen::VectorXd transformed_tips(
  const Skeleton & skeleton, 
  const Eigen::VectorXi & b)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  std::vector<Eigen::Affine3d,Eigen::aligned_allocator<Eigen::Affine3d>> T;
  forward_kinematics(skeleton, T);
  Eigen::VectorXd tips(b.size()*3);
  for (int i=0; i<b.size(); i++){
  	int idx = b[i];
  	Bone b = skeleton[idx];
  	Eigen::Vector4d pos = T[idx] * b.rest_T * Eigen::Vector4d(b.length, 0, 0, 1);

  	tips[i*3] = pos[0];
  	tips[i*3 + 1] = pos[1];
  	tips[i*3 + 2] = pos[2];
  }

  return tips;
  /////////////////////////////////////////////////////////////////////////////
}
