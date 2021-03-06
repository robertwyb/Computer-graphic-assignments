// Set the pixel color to an interesting procedural color generated by mixing
// and filtering Perlin noise of different frequencies.
//
// Uniforms:
uniform mat4 view;
uniform mat4 proj;
uniform float animation_seconds;
uniform bool is_moon;
// Inputs:
in vec3 sphere_fs_in;
in vec3 normal_fs_in;
in vec4 pos_fs_in; 
in vec4 view_pos_fs_in; 
// Outputs:
out vec3 color;

// expects: blinn_phong, perlin_noise
void main()
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 

  float theta = (2.0 * 3.1415926 / 8.0) * animation_seconds;
  vec4 light = view*vec4(10*cos(theta), 10, 10*sin(theta), 1);
  vec3 lightPoint = vec3(light.x, light.y, light.z);
  vec3 viewPoint = vec3(view_pos_fs_in.x, view_pos_fs_in.y, view_pos_fs_in.z);
    
  // compute perlin noise, only modify blue value for earth and all color for moon at the same time.
  float perlin = perlin_noise(sphere_fs_in);
  float noise = sin(perlin+15*sphere_fs_in.y);
  vec3 earth_offset = vec3(0, 0, noise);
  vec3 moon_offset = vec3(noise, noise, noise);
  
  // set appropriate ka kd ks to moon and earth.
  if (is_moon) {
    color = blinn_phong(vec3(0.01, 0.01, 0.01),
                        vec3(0.8, 0.8, 0.8) + 0.5 * moon_offset,
                        vec3(0.1, 0.1, 0.1),
                        1000,
                        normalize(normal_fs_in),
                        normalize(-viewPoint),
                        normalize(lightPoint-viewPoint));
    
  } 
  else {
    color = blinn_phong(vec3(0.02, 0.03, 0.08),
                        vec3(0.2, 0.3, 0.8) + 0.5 * earth_offset,
                        vec3(0.1, 0.1, 0.1),
                        1000,
                        normalize(normal_fs_in),
                        normalize(-viewPoint),
                        normalize(lightPoint-viewPoint));
  }
  /////////////////////////////////////////////////////////////////////////////
}
