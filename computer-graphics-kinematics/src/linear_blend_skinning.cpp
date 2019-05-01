
#include "linear_blend_skinning.h"

void linear_blend_skinning(
  const Eigen::MatrixXd & V,
  const Skeleton & skeleton,
  const std::vector<Eigen::Affine3d,Eigen::aligned_allocator<Eigen::Affine3d> > & T,
  const Eigen::MatrixXd & W,
  Eigen::MatrixXd & U)
{
  U = Eigen::MatrixXd::Zero(V.size(), 3);

  for (int v=0; v<V.rows(); v++) {
    Eigen::RowVector3d pose = V.row(v);
    for (int i=0; i<skeleton.size(); i++) {
      if (skeleton[i].weight_index != -1) {
        U.row(v) += W(v, skeleton[i].weight_index) * (T[i] * pose.transpose()).transpose();
      }
    }
  }
}
