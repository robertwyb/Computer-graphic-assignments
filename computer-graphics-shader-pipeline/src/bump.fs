// Set the pixel color using Blinn-Phong shading (e.g., with constant blue and
// gray material color) with a bumpy texture.
// 
// Uniforms:
uniform mat4 view;
uniform mat4 proj;
uniform float animation_seconds;
uniform bool is_moon;
// Inputs:
//                     linearly interpolated from tessellation evaluation shader
//                     output
in vec3 sphere_fs_in;
in vec3 normal_fs_in;
in vec4 pos_fs_in; 
in vec4 view_pos_fs_in; 
// Outputs:
//               rgb color of this pixel
out vec3 color;
// expects: model, blinn_phong, bump_height, bump_position,
// improved_perlin_noise, tangent
void main()
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  
  float theta = (2.0 * 3.1415926 / 8.0)*animation_seconds;
  vec4 light = view * vec4(5*cos(theta), 5*1, 5*sin(theta), 1);
  vec3 lightPoint = vec3(light.x, light.y, light.z);
  mat4 model = model(is_moon, animation_seconds);
  
  // compute bump normal 
  vec3 T, B;
  tangent(sphere_fs_in, T, B);
  vec3 b_pos = bump_position(is_moon, sphere_fs_in);
  vec3 b_normal = normalize(cross((bump_position(is_moon, sphere_fs_in+0.0001 * T) - b_pos), (bump_position(is_moon, sphere_fs_in+0.0001 * B) - b_pos)));
  if (dot(sphere_fs_in, b_normal) < 0){
    b_normal = -b_normal;
  }
  // compute view points and view normal for blinn phong shading
  vec4 viewPoint_ = view * model * vec4(b_pos, 1.0);
  vec3 viewPoint = vec3(viewPoint_.x, viewPoint_.y, viewPoint_.z);
  vec3 viewNormal = (inverse(transpose(view * model)) * vec4(b_normal, 1.0)).xyz;
    
  
  if (is_moon) {
    color = blinn_phong(vec3(0.1, 0.1, 0.1),
                        vec3(0.6, 0.6, 0.6),
                        vec3(0.1, 0.1, 0.1),
                        1000,
                        viewNormal,
                        normalize(-viewPoint),
                        normalize(lightPoint-viewPoint));
  } 
  else {
    color = blinn_phong(vec3(0.02, 0.03, 0.08),
                        vec3(0.1, 0.2, 1.4),
                        vec3(0.1, 0.1, 0.1),
                        1000,
                        viewNormal,
                        normalize(-viewPoint),
                        normalize(lightPoint-viewPoint));
  } 
  /////////////////////////////////////////////////////////////////////////////
}
