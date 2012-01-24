// D import file generated from 'gl3n/math.d'
module gl3n.math;
public 
{
    import std.math;
    alias round roundEven;
    alias floor fract;
    import core.stdc.math;
    import std.algorithm;
}
private import std.conv;

public enum real PI_180 = PI / 180;

public enum real _180_PI = 180 / PI;

real inversesqrt(real x)
{
return 1 / sqrt(x);
}
template sign(T)
{
float sign(T x)
{
if (x > 0)
{
return 1F;
}
else
if (x == 0)
{
return 0F;
}
else
{
return -1F;
}
}
}
template mod(T)
{
T mod(T x, T y)
{
return x - y * floor(x / y);
}
}
template almost_equal(T,S)
{
bool almost_equal(T a, S b, float epsilon = 1e-06F)
{
if (abs(a - b) <= epsilon)
{
return true;
}
return abs(a - b) <= epsilon * abs(b);
}
}
real radians(real degrees)
{
return PI_180 * degrees;
}
real degrees(real radians)
{
return _180_PI * radians;
}
template clamp(T1,T2,T3)
{
auto clamp(T1 x, T2 min_val, T3 max_val)
{
return min(max(x,min_val),max_val);
}
}
template step(T1,T2)
{
float step(T1 edge, T2 x)
{
return x < edge ? 0F : 1F;
}
}
template smoothstep(T1,T2,T3)
{
auto smoothstep(T1 edge0, T2 edge1, T3 x)
{
auto t = clamp((x - edge0) / (edge1 - edge0),0,1);
return t * t * (3 - 2 * t);
}
}
