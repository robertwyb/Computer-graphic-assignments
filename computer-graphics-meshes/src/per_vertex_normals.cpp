#include "per_vertex_normals.h"
#include "triangle_area_normal.h"

void per_vertex_normals(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  Eigen::MatrixXd & N)
{
  N = Eigen::MatrixXd::Zero(V.rows(),3);
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here:
  ////////////////////////////////////////////////////////////////////////////
  std::unordered_map<int, std::vector<int>> vertex_adj_face;
  for (int i=0; i < F.rows(); i++) {
  	for (int j=0; j < F.cols(); j++) {
  		vertex_adj_face[F(i, j)].push_back(i);
  	}
  }
  for (int i=0; i<V.rows(); i++) {
  	double total_area = 0;
  	for (const auto face : vertex_adj_face[i]) {
  		Eigen::RowVector3d A = V.row(F(face, 0));
        Eigen::RowVector3d B = V.row(F(face, 1));
        Eigen::RowVector3d C = V.row(F(face, 2));
  		total_area += ((B-A).cross(C-A)).norm() * 0.5;
  		N.row(i) += triangle_area_normal(V.row(F(face, 0)), V.row(F(face,1)), V.row(F(face,2)));
  	}
  	N.row(i) /= total_area;
  	N.row(i) = N.row(i).normalized();
  }
}
