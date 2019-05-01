#include "nearest_neighbor_brute_force.h"
#include <limits>// std::numeric_limits<double>::infinity();

void nearest_neighbor_brute_force(
  const Eigen::MatrixXd & points,
  const Eigen::RowVector3d & query,
  int & I,
  double & sqrD)
{
  sqrD = std::numeric_limits<double>::infinity();
  for (int i = 0; i < points.rows(); i++) {
    double cur = (query-points.row(i)).squaredNorm();
    if (cur < sqrD) {
      sqrD = cur;
      I = i;
    }
  }
}
