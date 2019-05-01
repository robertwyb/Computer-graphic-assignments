#include "catmull_rom_interpolation.h"
#include <Eigen/Dense>
#include <algorithm>

Eigen::Vector3d catmull_rom_interpolation(
  const std::vector<std::pair<double, Eigen::Vector3d> > & keyframes,
  double t)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code
  if (keyframes.size() == 0) {
  	return Eigen::Vector3d(0, 0, 0);
  }
  t = std::fmod(t, keyframes.back().first);
  int idx = 0;
  while (t > keyframes[idx].first){
  	idx++;
  }
  int last_idx = keyframes.size()-1;

  // cant perform catmull-rom spline since not enough data for first two and last index
  if (idx < 2 || idx == last_idx){
  	double cur_t = keyframes[idx].first;
  	double prev_t = keyframes[idx-1].first;
  	t = (cur_t - t) / (cur_t - prev_t);
  	return t*keyframes[idx-1].second +(1-t)*keyframes[idx].second;
  }

  // from wikipedia formula to compute centripetal Catmull-Rom spline
  Eigen::Vector3d P0 = keyframes[idx-2].second;
  Eigen::Vector3d P1 = keyframes[idx-1].second;
  Eigen::Vector3d P2 = keyframes[idx].second;
  Eigen::Vector3d P3 = keyframes[idx+1].second;

  double t0 = 0;
  double t1 = keyframes[idx-1].first - keyframes[idx-2].first;
  double t2 = keyframes[idx].first - keyframes[idx-2].first;
  double t3 = keyframes[idx+1].first - keyframes[idx-2].first;
  t -= keyframes[idx-2].first;

  Eigen::Vector3d A1 = ((t1-t)/(t1-t0))*P0 + ((t-t0)/(t1-t0))*P1;
  Eigen::Vector3d A2 = ((t2-t)/(t2-t1))*P1 + ((t-t1)/(t2-t1))*P2;
  Eigen::Vector3d A3 = ((t3-t)/(t3-t2))*P2 + ((t-t2)/(t3-t2))*P3;

  Eigen::Vector3d B1 = ((t2-t)/(t2-t0))*A1 + ((t-t0)/(t2-t0))*A2;
  Eigen::Vector3d B2 = ((t3-t)/(t3-t1))*A2 + ((t-t1)/(t3-t1))*A3;

  Eigen::Vector3d C = ((t2-t)/(t2-t1))*B1 + ((t-t1)/(t2-t1))*B2;
  
  return C;

  /////////////////////////////////////////////////////////////////////////////
}
