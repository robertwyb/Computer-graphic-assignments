#include "catmull_clark.h"
#include <unordered_map>
#include <utility>
#include <functional>

void catmull_clark(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  const int num_iters,
  Eigen::MatrixXd & SV,
  Eigen::MatrixXi & SF)
{
    // end of recursion
    if (num_iters == 0) {
        return ;
    }  
    // step 1 get face point 
    std::unordered_map<int, Eigen::RowVector3d> face_point;
    for (int i=0; i < F.rows(); i++) {
        Eigen::RowVector3d vertices(0, 0, 0);
        for (int j=0; j < F.cols(); j++) {
            vertices += V.row(F(i, j));
        }
        face_point[i] = vertices / 4;
    }

    // create unorder map with vertex as key and faces connect to them as value
    std::unordered_map<int, std::vector<int>> vertex_face_map;
    for (int i=0; i<F.rows(); i++) {
        for (int j=0; j<F.cols(); j++) {
            vertex_face_map[F(i, j)].push_back(i);
        }
    }



    // create unorder map with edge as key and the faces conect to them as value
    std::unordered_map<std::string, std::vector<int>> edges_face_map;
    for (int i=0; i < F.rows(); i++) {
        for (int j=0; j < F.cols(); j++) {
            int v1 = F(i, j);
            int v2 = F(i, (j+1) % F.cols());
            std::string edge1 = std::to_string(v1) + ", " + std::to_string(v2);
            std::string edge2 = std::to_string(v2) + ", " + std::to_string(v1);
            edges_face_map[edge1].push_back(i);
            edges_face_map[edge2].push_back(i);
        }
    }

    // get the vertex next to a given point
    std::unordered_map<int, std::vector<int>> neighbor_point;
    for (int i=0; i < F.rows(); i++) {
        for (int j=0; j<F.cols(); j++) {
            neighbor_point[F(i, j)].push_back(F(i, (j+1)%F.cols()));
        }
    }

    SV.resize(0, 3);
    SF.resize(0, 4);

    // step 2 compute edge points based on adjacent edge endpoints and face points.
    const auto compute_edge_point = [&V, &F, &face_point,  &edges_face_map](const int v1, const int v2) {
        Eigen::RowVector3d edge_center = (V.row(v1) + V.row(v2)) * 0.5;
        Eigen::RowVector3d face_point_center (0, 0, 0);
        std::string edge = std::to_string(v1) + ", " + std::to_string(v2);
        for (const int face : edges_face_map[edge]) {
            face_point_center += face_point[face];
        }
        face_point_center *= 0.5;
        Eigen::RowVector3d edge_point = (face_point_center + edge_center) * 0.5;
        return edge_point;
    };


    // loop through all vertices
    for (int i=0; i < F.rows(); i++) {
        for (int j=0; j<F.cols(); j++) {
            int cur_vertex = F(i, j);
            Eigen::RowVector3d fp = face_point[i];
            Eigen::RowVector3d ep1 = compute_edge_point(F(i, j), F(i, (j+1)%F.cols()));
            Eigen::RowVector3d ep2 = compute_edge_point(F(i, j), F(i, ((j-1)+F.cols())%F.cols()));

            // compute updated vertex based on (F+2R+(n-3)P)/n
            Eigen::RowVector3d new_vertex;
            Eigen::RowVector3d P = V.row(cur_vertex);
            Eigen::RowVector3d R (0, 0, 0);
            Eigen::RowVector3d F (0, 0, 0);
            for (const auto face: vertex_face_map[cur_vertex]) {
                R += face_point[face];
            }
            for (const auto edge_mid_point : neighbor_point[cur_vertex]) {
                F += (V.row(cur_vertex) + V.row(edge_mid_point)) * 0.5;
            }
            R /= vertex_face_map[cur_vertex].size();
            F /= neighbor_point[cur_vertex].size();
            double n = vertex_face_map[cur_vertex].size();
            new_vertex = (F + 2 * R + (n-3) * P) / n;

            // add vertex and faces 
            Eigen::RowVector4i idxs (-1, -1, -1, -1);
            Eigen::MatrixXd points;
            points.resize(4, 3);
            points << new_vertex[0], new_vertex[1], new_vertex[2],
                      ep1[0], ep1[1], ep1[2],
                      fp[0], fp[1], fp[2],
                      ep2[0], ep2[1], ep2[2];

            for (int i=0; i < 4; i ++) {
                for (int j=0; j < SV.rows(); j++) {
                    // if the vertex is already stored in SV, use the SV index instead of inserting the vertex again
                    if (points.row(i) == SV.row(j)) {
                        idxs[i] = j;
                    }
                }
                // store the new vertices
                if (idxs[i] == -1) {
                    SV.conservativeResize(SV.rows()+1, SV.cols());
                    SV.row(SV.rows()-1) = points.row(i);
                    idxs(i) = SV.rows() - 1;
                }
            }
            // store the new face by using index stored in SV
            SF.conservativeResize(SF.rows()+1, SF.cols());
            SF.row(SF.rows()-1) = idxs;
        }
    }

    catmull_clark(Eigen::MatrixXd(SV), Eigen::MatrixXi(SF), num_iters-1, SV, SF);
}
