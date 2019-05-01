// Given a 3d position as a seed, compute a smooth procedural noise
// value: "Perlin Noise", also known as "Gradient noise".
//
// Inputs:
//   st  3D seed
// Returns a smooth value between (-1,1)
//
// expects: random_direction, smooth_step
float perlin_noise( vec3 st) 
{
  /////////////////////////////////////////////////////////////////////////////
  float fx = floor(st.x);
  float fy = floor(st.y);
  float fz = floor(st.z);
  
  float x1 = fx;
  float x2 = fx;
  float x3 = fx;
  float x4 = fx;
  float x5 = fx + 1;
  float x6 = fx + 1;
  float x7 = fx + 1;
  float x8 = fx + 1;

  float y1 = fy;
  float y2 = fy;
  float y3 = fy + 1;
  float y4 = fy + 1;
  float y5 = fy;
  float y6 = fy;
  float y7 = fy + 1;
  float y8 = fy + 1;
  
  float z1 = fz;
  float z2 = fz + 1;
  float z3 = fz;
  float z4 = fz + 1;
  float z5 = fz;
  float z6 = fz + 1;
  float z7 = fz;
  float z8 = fz + 1;

  float x0 = st.x;
  float y0 = st.y;
  float z0 = st.z;

  
  vec3 r1 = (random_direction(vec3(x1, y1, z1)));
  vec3 r2 = (random_direction(vec3(x2, y2, z2)));
  vec3 r3 = (random_direction(vec3(x3, y3, z3)));
  vec3 r4 = (random_direction(vec3(x4, y4, z4)));
  vec3 r5 = (random_direction(vec3(x5, y5, z5)));
  vec3 r6 = (random_direction(vec3(x6, y6, z6)));
  vec3 r7 = (random_direction(vec3(x7, y7, z7)));
  vec3 r8 = (random_direction(vec3(x8, y8, z8)));

  float s1 = dot(vec3(x0 - x1, y0 - y1, z0 - z1), r1);
  float s2 = dot(vec3(x0 - x2, y0 - y2, z0 - z2), r2);
  float s3 = dot(vec3(x0 - x3, y0 - y3, z0 - z3), r3);
  float s4 = dot(vec3(x0 - x4, y0 - y4, z0 - z4), r4);
  float s5 = dot(vec3(x0 - x5, y0 - y5, z0 - z5), r5);
  float s6 = dot(vec3(x0 - x6, y0 - y6, z0 - z6), r6);
  float s7 = dot(vec3(x0 - x7, y0 - y7, z0 - z7), r7);
  float s8 = dot(vec3(x0 - x8, y0 - y8, z0 - z8), r8);

  vec3 frac = smooth_step(fract(st));
  
  float ipx15 = frac.x * (s5 - s1) + s1;
  float ipx26 = frac.x * (s6 - s2) + s2;
  float ipx37 = frac.x * (s7 - s3) + s3;
  float ipx48 = frac.x * (s8 - s4) + s4;

  float ipy1 = frac.y * (ipx37 - ipx15) + ipx15;
  float ipy2 = frac.y * (ipx48 - ipx26) + ipx26;

  return frac.z * (ipy2 - ipy1) + ipy1;
  
  /////////////////////////////////////////////////////////////////////////////
}

