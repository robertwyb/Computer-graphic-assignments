#include "kinematics_jacobian.h"
#include "transformed_tips.h"
#include <iostream>

void kinematics_jacobian(
  const Skeleton & skeleton,
  const Eigen::VectorXi & b,
  Eigen::MatrixXd & J)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  J = Eigen::MatrixXd::Zero(b.size()*3,skeleton.size()*3);

  Eigen::VectorXd tips = transformed_tips(skeleton, b);
  for (int i=0; i<skeleton.size(); i++) {
    for (int j=0; j<3; j++){
      Skeleton s = skeleton;
      s[i].xzx[j] += 1e-7;
      Eigen::VectorXd newtips = transformed_tips(s, b);
      for (int k=0; k<3 * b.size(); k++){
        J(k, 3 * i + j) = (newtips[k] - tips[k]) / 1e-7;
      }
    }
  }
  /////////////////////////////////////////////////////////////////////////////
}
