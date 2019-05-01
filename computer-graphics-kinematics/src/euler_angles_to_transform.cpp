#include "euler_angles_to_transform.h"
#include <Eigen/Geometry>

Eigen::Affine3d euler_angles_to_transform(
  const Eigen::Vector3d & xzx)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  float PI = 3.1415926;

  Eigen::AngleAxisd m1(xzx[2] * PI / 180.0, Eigen::Vector3d::UnitX());
  Eigen::AngleAxisd m2(xzx[1] * PI / 180.0, Eigen::Vector3d::UnitZ());
  Eigen::AngleAxisd m3(xzx[0] * PI / 180.0, Eigen::Vector3d::UnitX());

  return Eigen::Affine3d(m1 * m2 * m3);
  /////////////////////////////////////////////////////////////////////////////
}
