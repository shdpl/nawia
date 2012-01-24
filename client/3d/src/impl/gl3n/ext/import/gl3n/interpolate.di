// D import file generated from 'gl3n/interpolate.d'
module gl3n.interpolate;
private 
{
    import gl3n.linalg;
    import gl3n.util;
    import gl3n.math;
    import std.conv;
    version (unittest)
{
    import gl3n.linalg;
}
}
template interp(T)
{
T interp(T a, T b, float t)
{
return a * (1 - t) + b * t;
}
}
alias interp interp_linear;
alias interp lerp;
alias interp mix;
template interp_spherical(T) if (is_vector!(T) || is_quaternion!(T))
{
T interp_spherical(T a, T b, float t)
{
static if(is_vector!(T))
{
real theta = acos(dot(a,b));
}
else
{
real theta = acos(a.w * b.w + a.x * b.x + a.y * b.y + a.z * b.z);
}

if (almost_equal(theta,0))
{
return a;
}
else
if (almost_equal(theta,PI))
{
return interp(a,b,t);
}
else
{
real sintheta = sin(theta);
return sin((1 - t) * theta) / sintheta * a + sin(t * theta) / sintheta * b;
}
}
}
alias interp_spherical slerp;
template interp_nearest(T)
{
T interp_nearest(T x, T y, float t)
{
if (t < 0.5F)
{
return x;
}
else
{
return y;
}
}
}
template interp_catmullrom(T)
{
T interp_catmullrom(T p0, T p1, T p2, T p3, float t)
{
return 0.5F * (2 * p1 + (-p0 + p2) * t + (2 * p0 - 5 * p1 + 4 * p2 - p3) * t ^^ 2 + (-p0 + 3 * p1 - 3 * p2 + p3) * t ^^ 3);
}
}
template catmullrom_derivative(T)
{
T catmullrom_derivative(T p0, T p1, T p2, T p3, float t)
{
return 0.5F * (2 * p1 + (-p0 + p2) + 2 * (2 * p0 - 5 * p1 + 4 * p2 - p3) * t + 3 * (-p0 + 3 * p1 - 3 * p2 + p3) * t ^^ 2);
}
}
template interp_hermite(T)
{
T interp_hermite(T x, T tx, T y, T ty, float t)
{
float h1 = 2 * t ^^ 3 - 3 * t ^^ 2 + 1;
float h2 = -2 * t ^^ 3 + 3 * t ^^ 2;
float h3 = t ^^ 3 - 2 * t ^^ 2 + t;
float h4 = t ^^ 3 - t ^^ 2;
return h1 * x + h3 * tx + h2 * y + h4 * ty;
}
}
