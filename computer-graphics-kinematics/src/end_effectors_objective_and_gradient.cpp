#include "end_effectors_objective_and_gradient.h"
#include "transformed_tips.h"
#include "kinematics_jacobian.h"
#include "copy_skeleton_at.h"
#include <iostream>

void end_effectors_objective_and_gradient(
  const Skeleton & skeleton,
  const Eigen::VectorXi & b,
  const Eigen::VectorXd & xb0,
  std::function<double(const Eigen::VectorXd &)> & f,
  std::function<Eigen::VectorXd(const Eigen::VectorXd &)> & grad_f,
  std::function<void(Eigen::VectorXd &)> & proj_z)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  f = [&](const Eigen::VectorXd & A)->double
  {
    double total = 0;
    Skeleton s = copy_skeleton_at(skeleton, A);
    Eigen::VectorXd tips = transformed_tips(s, b);

    for (int i=0; i<b.size(); i++) {
      total += (Eigen::Vector3d(tips[3*i], tips[3*i+1], tips[3*i+2]) - Eigen::Vector3d(xb0[3*i], xb0[3*i+1], xb0[3*i+2])).squaredNorm();
    }
    return total;
  };


  grad_f = [&](const Eigen::VectorXd & A)->Eigen::VectorXd
  {
    Eigen::MatrixXd j;
    Skeleton s = copy_skeleton_at(skeleton, A);
    Eigen::VectorXd tips = transformed_tips(s, b);

    kinematics_jacobian(s, b, j);

    Eigen::VectorXd g = Eigen::VectorXd::Zero(A.size());
    g = j.transpose() * 2 * (tips - xb0);
    return g;
  };


  proj_z = [&](Eigen::VectorXd & A)
  {
    assert(skeleton.size()*3 == A.size());
    for (int i=0; i<skeleton.size(); i++) {
      int idx = 3*i;
      A[idx] = std::min(skeleton[i].xzx_max(0), std::max(skeleton[i].xzx_min(0), A(idx)));
      A[idx+1] = std::min(skeleton[i].xzx_max(1), std::max(skeleton[i].xzx_min(1), A(idx+1)));
      A[idx+2] = std::min(skeleton[i].xzx_max(2), std::max(skeleton[i].xzx_min(2), A(idx+2)));
    }
  };
  /////////////////////////////////////////////////////////////////////////////
}
