#include "sphere.h"
#include <iostream>

void sphere(
  const int num_faces_u,
  const int num_faces_v,
  Eigen::MatrixXd & V,
  Eigen::MatrixXi & F,
  Eigen::MatrixXd & UV,
  Eigen::MatrixXi & UF,
  Eigen::MatrixXd & NV,
  Eigen::MatrixXi & NF)
{
    V.resize((num_faces_u+1)*(num_faces_v+1), 3);
    F.resize(num_faces_u*num_faces_v, 4);
    UV.resize((num_faces_u+1)*(num_faces_v+1), 2);    
    UF.resize(num_faces_u*num_faces_v, 4);
    NV.resize((num_faces_u+1)*(num_faces_v+1), 3);
    NF.resize(num_faces_u*num_faces_v, 4);
    const float PI = 3.1415926;
        
    const double u_unit = 1.0 / num_faces_u;
    const double v_unit = 1.0 / num_faces_v;
    
    // loop through texture u v cords
    int index = 0;
    int index_1 = 0;
    for (int i=0; i<=num_faces_v; i++) {
        for (int j=0; j<=num_faces_u; j++) {
            const double u = j * u_unit;
            const double v = i * v_unit;
            double x, y, z;
            double lat = v * PI - PI / 2.0;
            double lon = u * 2.0 * PI - PI;
            // idk why y and z need to swap according to the formula
            x = cos(lat) * cos(lon);
            y = cos(lat) * sin(lon);
            z = sin(lat);
            V.row(index) = Eigen::RowVector3d(x, y, z);
            UV.row(index) = Eigen::RowVector2d(u, v);
            NV.row(index) = Eigen::RowVector3d(x, y, z);
            index++;
            // for i < num_faces_v and j < num_faces_u, store the face information
            if (i < num_faces_v && j < num_faces_u) {
                const int idx1 = i*(num_faces_u+1)+j;
                const int idx2 = i*(num_faces_u+1)+(j+1);
                const int idx3 = (i+1)*(num_faces_u+1)+(j+1);
                const int idx4 = (i+1)*(num_faces_u+1)+j;
                F.row(index_1) = Eigen::RowVector4i(idx1, idx2, idx3, idx4);
                UF.row(index_1) = Eigen::RowVector4i(idx1, idx2, idx3, idx4);
                NF.row(index_1) = Eigen::RowVector4i(idx1, idx2, idx3, idx4);
                index_1++;
            }
        }
    }
    

}
