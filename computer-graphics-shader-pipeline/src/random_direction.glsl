// Generate a pseudorandom unit 3D vector
// 
// Inputs:
//   seed  3D seed
// Returns psuedorandom, unit 3D vector drawn from uniform distribution over
// the unit sphere (assuming random2 is uniform over [0,1]²).
//
// expects: random2.glsl, PI.glsl
vec3 random_direction( vec3 seed)
{
  /////////////////////////////////////////////////////////////////////////////
  vec2 ran = random2(seed);
  float theta = ran.x * 3.1415926 / 2;
  float phi = ran.y * 3.1415926 / 2;
  float x = sin(theta) * cos(phi) * 1.0;
  float y = sin(theta) * sin(phi) * 1.0;
  float z = cos(theta) * 1.0;
  
  return normalize(vec3(x, y, z));
  /////////////////////////////////////////////////////////////////////////////
}
