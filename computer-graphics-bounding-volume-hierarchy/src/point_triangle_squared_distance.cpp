#include "point_triangle_squared_distance.h"

double point_triangle_squared_distance(
  const Eigen::RowVector3d & query,
  const Eigen::RowVector3d & A,
  const Eigen::RowVector3d & B,
  const Eigen::RowVector3d & C,
  Eigen::RowVector3d & bary)
{
  const Eigen::Vector3d qt(query);
  const Eigen::Vector3d At(A);
  const Eigen::Vector3d Bt(B);
  const Eigen::Vector3d Ct(C);
  double alpha, beta, gamma;

  double xa = At(0), ya = At(1), za = At(2);
  double xb = Bt(0), yb = Bt(1), zb = Bt(2);
  double xc = Ct(0), yc = Ct(1), zc = Ct(2);
  double xq = qt(0), yq = qt(1), zq = qt(2);

  Eigen::Vector3d normal = ((Bt - At).cross(Ct - At)).normalized();
  Eigen::Vector3d vec = qt - At;
  Eigen::Vector3d projection = qt - normal * vec.dot(normal);
  double xp = projection(0), yp = projection(1), zp = projection(2);

}
