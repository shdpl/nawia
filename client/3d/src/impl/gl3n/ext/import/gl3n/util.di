// D import file generated from 'gl3n/util.d'
module gl3n.util;
private import gl3n.linalg;

private template is_vector_impl(T,int d)
{
void is_vector_impl(Vector!(T,d) vec)
{
}
}

template is_vector(T)
{
enum is_vector = is(typeof(is_vector_impl(T.init)));
}
private template is_matrix_impl(T,int r,int c)
{
void is_matrix_impl(Matrix!(T,r,c) mat)
{
}
}

template is_matrix(T)
{
enum is_matrix = is(typeof(is_matrix_impl(T.init)));
}
private template is_quaternion_impl(T)
{
void is_quaternion_impl(Quaternion!(T) qu)
{
}
}

template is_quaternion(T)
{
enum is_quaternion = is(typeof(is_quaternion_impl(T.init)));
}
