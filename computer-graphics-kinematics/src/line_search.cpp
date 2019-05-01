#include "line_search.h"
#include <iostream>

double line_search(
  const std::function<double(const Eigen::VectorXd &)> & f,
  const std::function<void(Eigen::VectorXd &)> & proj_z,
  const Eigen::VectorXd & z,
  const Eigen::VectorXd & dz,
  const double max_step)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  double step = max_step;
  double step_count = 0;
  double old = f(z);
  Eigen::VectorXd new_z = z - max_step*dz;
  proj_z(new_z);
  while (f(new_z) > old) {
    step /= 2;
    new_z = z - step * dz;
    proj_z(new_z);
    if (new_z == z) {
      return 0;
    }
  }
  return step;

  /////////////////////////////////////////////////////////////////////////////
}
