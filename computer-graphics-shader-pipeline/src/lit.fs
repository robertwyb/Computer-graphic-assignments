// Add (hard code) an orbiting (point or directional) light to the scene. Light
// the scene using the Blinn-Phong Lighting Model.
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
// expects: PI, blinn_phong
void main()
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  float theta = (2.0 * 3.14159 / 8.0) * animation_seconds;
  vec4 light = view * vec4(5*cos(theta), 5*1, 5*sin(theta), 1);
  vec3 lightPoint = vec3(light.x, light.y, light.z);
  vec3 viewPoint = vec3(view_pos_fs_in.x, view_pos_fs_in.y, view_pos_fs_in.z);
  if (is_moon) {
    color = blinn_phong(vec3(0.01, 0.01, 0.01),
                        vec3(0.5, 0.5, 0.5),
                        vec3(0.1, 0.1, 0.1),
                        1000,
                        normalize(normal_fs_in),
                        normalize(-viewPoint),
                        normalize(lightPoint-viewPoint));
  } 
  else {
    color = blinn_phong(vec3(0.01, 0.02, 0.07),
                        vec3(0.1, 0.2, 0.7),
                        vec3(0.1, 0.1, 0.1),
                        1000,
                        normalize(normal_fs_in),
                        normalize(-viewPoint),
                        normalize(lightPoint-viewPoint));
  } 
  /////////////////////////////////////////////////////////////////////////////

}
