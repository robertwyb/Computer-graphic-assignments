// Create a bumpy surface by using procedural noise to generate a height (
// displacement in normal direction).
//
// Inputs:
//   is_moon  whether we're looking at the moon or centre planet
//   s  3D position of seed for noise generation
// Returns elevation adjust along normal (values between -0.1 and 0.1 are
//   reasonable.
float bump_height( bool is_moon, vec3 s)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  float noise;
  // adjust parameter for smooth_heaviside and improved_per_noise to get better terrain result
  if (is_moon) {
    return smooth_heaviside(improved_perlin_noise(s*3)*2, 5);
  } else {
    return smooth_heaviside(improved_perlin_noise(s*2)*5 , 10);
  }
  /////////////////////////////////////////////////
}
