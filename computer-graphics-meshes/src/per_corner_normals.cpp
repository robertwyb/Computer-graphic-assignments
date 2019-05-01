#include "per_corner_normals.h"
#include "triangle_area_normal.h"
// Hint:
#include "vertex_triangle_adjacency.h"
#include <iostream>

void per_corner_normals(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  const double corner_threshold,
  Eigen::MatrixXd & N)
{
  N = Eigen::MatrixXd::Zero(F.rows()*3,3);
  double pi = 3.1415926;
  std::vector<std::vector<int>> adj_lst;
  vertex_triangle_adjacency(F, V.rows(), adj_lst);

  for (int i=0; i < F.rows(); i++) {
  	Eigen::RowVector3d A = V.row(F(i, 0));
  	Eigen::RowVector3d B = V.row(F(i, 1));
  	Eigen::RowVector3d C = V.row(F(i, 2));
  	for (int j=0; j < F.cols(); j++) {
  		Eigen::RowVector3d NF = ((B-A).cross(C-A)).normalized();
  		double total_area = 0;
  		Eigen::RowVector3d vertex_normal (0, 0, 0);
  		for (const auto face : adj_lst[F(i, j)]) {
  			Eigen::RowVector3d A_ = V.row(F(face, 0));
  			Eigen::RowVector3d B_ = V.row(F(face, 1));
  			Eigen::RowVector3d C_ = V.row(F(face, 2));
  			Eigen::RowVector3d NF_ = ((B_-A_).cross(C_-A_)).normalized();
  			if (NF.dot(NF_) > cos(corner_threshold * pi / 180)) {
  				total_area += ((B_-A_).cross(C_-A_)).norm() * 0.5;
  				vertex_normal += triangle_area_normal(V.row(F(face, 0)), V.row(F(face, 1)), V.row(F(face, 2)));
  			}
  		}
  		N.row(i*3+j) = vertex_normal / total_area;
  		N.row(i*3+j) = N.row(i*3+j).normalized();
  	}
  }
  ////////////////////////////////////////////////////////////////////////////
  // Add your code here:
  ////////////////////////////////////////////////////////////////////////////
}
