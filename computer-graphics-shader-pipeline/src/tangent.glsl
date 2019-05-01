// Input:
//   N  3D unit normal vector
// Outputs:
//   T  3D unit tangent vector
//   B  3D unit bitangent vector
void tangent(in vec3 N, out vec3 T, out vec3 B)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  vec3 v1 = vec3(0, 0, 1);
  vec3 v2 = vec3(0, 1, 0);
  
  vec3 c1 = cross(N, v1);
  vec3 c2 = cross(N, v2);
  
  if (length(c1) < length(c2)) {
    T = c1;
  } 
  else {
    T = c2;
  }
  T = normalize(T);
  B = normalize(cross(T, N));
  return;
  /////////////////////////////////////////////////////////////////////////////
}
