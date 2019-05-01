#include "projected_gradient_descent.h"
#include "line_search.h"

void projected_gradient_descent(
  const std::function<double(const Eigen::VectorXd &)> & f,
  const std::function<Eigen::VectorXd(const Eigen::VectorXd &)> & grad_f,
  const std::function<void(Eigen::VectorXd &)> & proj_z,
  const int max_iters,
  Eigen::VectorXd & z)
{
  /////////////////////////////////////////////////////////////////////////////
  // Add your code here
  for (int i=0; i<max_iters; i++) {
    Eigen::VectorXd dz = grad_f(z);
    z -= line_search(f, proj_z, z, dz, 10000) * dz;
    proj_z(z);
  }
  /////////////////////////////////////////////////////////////////////////////
}
