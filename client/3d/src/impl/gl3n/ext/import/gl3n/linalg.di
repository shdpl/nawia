// D import file generated from 'gl3n/linalg.d'
module gl3n.linalg;
private 
{
    import std.math;
    import std.conv;
    import std.traits;
    import std.string;
    import std.array;
    import std.algorithm;
    import gl3n.math;
    import gl3n.util;
}
template Vector(type,int dimension_) if (dimension_ >= 2 && dimension_ <= 4)
{
struct Vector
{
    alias type vt;
    static const int dimension = dimension_;

    vt[dimension] vector;
    auto @property value_ptr()
{
return vector.ptr;
}
    private @property template get_(char coord)
{
vt get_()
{
return vector[coord_to_index!(coord)];
}
}


    private @property template set_(char coord)
{
void set_(vt value)
{
vector[coord_to_index!(coord)] = value;
}
}


    alias get_!('x') x;
    alias set_!('x') x;
    alias get_!('y') y;
    alias set_!('y') y;
    alias x s;
    alias y t;
    alias x r;
    alias y g;
    static if(dimension >= 3)
{
    alias get_!('z') z;
    alias set_!('z') z;
    alias z b;
    alias z p;
}
    static if(dimension >= 4)
{
    alias get_!('w') w;
    alias set_!('w') w;
    alias w a;
    alias w q;
}
    static template isCompatibleVectorImpl(int d) if (d <= dimension)
{
void isCompatibleVectorImpl(Vector!(vt,d) vec)
{
}
}

    template isCompatibleVector(T)
{
enum isCompatibleVector = is(typeof(isCompatibleVectorImpl(T.init)));
}
    static template isCompatibleMatrixImpl(int r,int c)
{
void isCompatibleMatrixImpl(Matrix!(vt,r,c) m)
{
}
}

    template isCompatibleMatrix(T)
{
enum isCompatibleMatrix = is(typeof(isCompatibleMatrixImpl(T.init)));
}
    private template construct(int i,T,Tail...)
{
void construct(T head, Tail tail)
{
static if(i >= dimension)
{
static assert(false,"constructor has too many arguments");
}
else
{
static if(is(T : vt))
{
vector[i] = head;
construct!(i + 1)(tail);
}
else
{
static if(isDynamicArray!(T))
{
static assert(Tail.length == 0 && i == 0,"dynamic array can not be passed together with other arguments");
vector = head;
}
else
{
static if(isStaticArray!(T))
{
vector[i..i + T.length] = head;
construct!(i + T.length)(tail);
}
else
{
static if(isCompatibleVector!(T))
{
vector[i..i + T.dimension] = head.vector;
construct!(i + T.dimension)(tail);
}
else
{
static assert(false,"Vector constructor argument must be of type " ~ vt.stringof ~ " or Vector, not " ~ T.stringof);
}

}

}

}

}

}
}

    private template construct(int i)
{
void construct()
{
}
}

    template __ctor(Args...)
{
this(Args args)
{
construct!(0)(args);
}
}
    template __ctor(T) if (is_vector!(T) && T.dimension >= dimension)
{
this(T vec)
{
vector = vec.vector[0..dimension];
}
}
    template __ctor()
{
this(vt value)
{
clear(value);
}
}
    @property bool ok()
{
foreach (v; vector)
{
if (isNaN(v) || isInfinity(v))
{
return false;
}
}
return true;
}

    void clear(vt value)
{
foreach (ref v; vector)
{
v = value;
}
}
        template coord_to_index(char c)
{
static if(c == 'x' || c == 'r' || c == 's')
{
    enum coord_to_index = 0;
}
else
{
    static if(c == 'y' || c == 'g' || c == 't')
{
    enum coord_to_index = 1;
}
else
{
    static if(c == 'z' || c == 'b' || c == 'p')
{
    static assert(dimension >= 3,"the " ~ c ~ " property is only available on vectors with a third dimension.");
    enum coord_to_index = 2;
}
else
{
    static if(c == 'w' || c == 'a' || c == 'q')
{
    static assert(dimension >= 4,"the " ~ c ~ " property is only available on vectors with a fourth dimension.");
    enum coord_to_index = 3;
}
else
{
    static assert(false,"accepted coordinates are x, s, r, y, g, t, z, p, b, w, q and a not " ~ c ~ ".");
}
}
}
}
}
    static if(dimension == 2)
{
    void set(vt x, vt y)
{
vector[0] = x;
vector[1] = y;
}
}
    static if(dimension == 3)
{
    void set(vt x, vt y, vt z)
{
vector[0] = x;
vector[1] = y;
vector[2] = z;
}
}
    static if(dimension == 4)
{
    void set(vt x, vt y, vt z, vt w)
{
vector[0] = x;
vector[1] = y;
vector[2] = z;
vector[3] = w;
}
}
    void update(Vector!(vt,dimension) other)
{
vector = other.vector;
}
        @property string as_string()
{
return format(isFloatingPoint!(vt) ? "%f" : "%s",vector);
}

    alias as_string toString;
    template dispatchImpl(int i,string s,int size)
{
void dispatchImpl(ref vt[size] result)
{
static if(s.length > 0)
{
result[i] = vector[coord_to_index!(s[0])];
dispatchImpl!(i + 1,s[1 .. __dollar])(result);
}

}
}
    template opDispatch(string s)
{
vt[s.length] opDispatch()
{
vt[s.length] ret;
dispatchImpl!(0,s)(ret);
return ret;
}
}
        @property real magnitude_squared()
{
real temp = 0;
foreach (v; vector)
{
temp += v ^^ 2;
}
return temp;
}

    @property real magnitude()
{
return sqrt(magnitude_squared);
}

    alias magnitude_squared length_squared;
    alias magnitude length;
    void normalize()
{
real len = length;
if (len != 0)
{
vector[0] /= len;
vector[1] /= len;
static if(dimension >= 3)
{
vector[2] /= len;
}

static if(dimension >= 4)
{
vector[3] /= len;
}

}
}
    @property Vector normalized()
{
Vector ret;
ret.update(this);
ret.normalize();
return ret;
}

    template opUnary(string op : "-")
{
Vector opUnary()
{
Vector ret;
ret.vector[0] = -vector[0];
ret.vector[1] = -vector[1];
static if(dimension >= 3)
{
ret.vector[2] = -vector[2];
}

static if(dimension >= 4)
{
ret.vector[3] = -vector[3];
}

return ret;
}
}
        template opBinary(string op : "*")
{
Vector opBinary(vt r)
{
Vector ret;
ret.vector[0] = vector[0] * r;
ret.vector[1] = vector[1] * r;
static if(dimension >= 3)
{
ret.vector[2] = vector[2] * r;
}

static if(dimension >= 4)
{
ret.vector[3] = vector[3] * r;
}

return ret;
}
}
    template opBinary(string op) if (op == "+" || op == "-")
{
Vector opBinary(Vector r)
{
Vector ret;
ret.vector[0] = mixin("vector[0]" ~ op ~ "r.vector[0]");
ret.vector[1] = mixin("vector[1]" ~ op ~ "r.vector[1]");
static if(dimension >= 3)
{
ret.vector[2] = mixin("vector[2]" ~ op ~ "r.vector[2]");
}

static if(dimension >= 4)
{
ret.vector[3] = mixin("vector[3]" ~ op ~ "r.vector[3]");
}

return ret;
}
}
    template opBinary(string op : "*")
{
vt opBinary(Vector r)
{
return dot(this,r);
}
}
    template opBinary(string op : "*",T) if (isCompatibleMatrix!(T) && T.cols == dimension)
{
Vector!(vt,T.rows) opBinary(T inp)
{
Vector!(vt,T.rows) ret;
ret.clear(0);
{
for (int r = 0;
 r < inp.rows; r++)
{
{
{
for (int c = 0;
 c < inp.cols; c++)
{
{
ret.vector[r] += vector[c] * inp.matrix[r][c];
}
}
}
}
}
}
return ret;
}
}
    template opBinaryRight(string op,T) if (!is_vector!(T) && !is_matrix!(T) && !is_quaternion!(T))
{
auto opBinaryRight(T inp)
{
return this.opBinary!(op)(inp);
}
}
        template opOpAssign(string op : "*")
{
void opOpAssign(vt r)
{
vector[0] *= r;
vector[1] *= r;
static if(dimension >= 3)
{
vector[2] *= r;
}

static if(dimension >= 4)
{
vector[3] *= r;
}

}
}
    template opOpAssign(string op) if (op == "+" || op == "-")
{
void opOpAssign(Vector r)
{
mixin("vector[0]" ~ op ~ "= r.vector[0];");
mixin("vector[1]" ~ op ~ "= r.vector[1];");
static if(dimension >= 3)
{
mixin("vector[2]" ~ op ~ "= r.vector[2];");
}

static if(dimension >= 4)
{
mixin("vector[3]" ~ op ~ "= r.vector[3];");
}

}
}
        const template opEquals(T) if (T.dimension == dimension)
{
bool opEquals(T vec)
{
return vector == vec.vector;
}
}

    template opCast(T : bool)
{
bool opCast()
{
return ok;
}
}
    }
}
template dot(T) if (is_vector!(T))
{
T.vt dot(T veca, T vecb)
{
T.vt temp = 0;
temp += veca.vector[0] * vecb.vector[0];
temp += veca.vector[1] * vecb.vector[1];
static if(T.dimension >= 3)
{
temp += veca.vector[2] * vecb.vector[2];
}

static if(T.dimension >= 4)
{
temp += veca.vector[3] * vecb.vector[3];
}

return temp;
}
}
template cross(T) if (is_vector!(T) && T.dimension == 3)
{
T cross(T veca, T vecb)
{
return T(veca.y * vecb.z - vecb.y * veca.z,veca.z * vecb.x - vecb.z * veca.x,veca.x * vecb.y - vecb.x * veca.y);
}
}
template distance(T) if (is_vector!(T))
{
T.vt distance(T veca, T vecb)
{
return (veca - vecb).length;
}
}
alias Vector!(float,2) vec2;
alias Vector!(float,3) vec3;
alias Vector!(float,4) vec4;
alias Vector!(double,2) vec2d;
alias Vector!(double,3) vec3d;
alias Vector!(double,4) vec4d;
alias Vector!(int,2) vec2i;
alias Vector!(int,3) vec3i;
alias Vector!(int,4) vec4i;
template Matrix(type,int rows_,int cols_) if (rows_ > 0 && cols_ > 0)
{
struct Matrix
{
    alias type mt;
    static const int rows = rows_;

    static const int cols = cols_;

    mt[cols][rows] matrix;
    alias matrix this;
        auto @property value_ptr()
{
return matrix[0].ptr;
}
    static template isCompatibleMatrixImpl(int r,int c)
{
void isCompatibleMatrixImpl(Matrix!(mt,r,c) m)
{
}
}

    template isCompatibleMatrix(T)
{
enum isCompatibleMatrix = is(typeof(isCompatibleMatrixImpl(T.init)));
}
    static template isCompatibleVectorImpl(int d)
{
void isCompatibleVectorImpl(Vector!(mt,d) vec)
{
}
}

    template isCompatibleVector(T)
{
enum isCompatibleVector = is(typeof(isCompatibleVectorImpl(T.init)));
}
    private template construct(int i,T,Tail...)
{
void construct(T head, Tail tail)
{
static if(i >= rows * cols)
{
static assert(false,"constructor has too many arguments");
}
else
{
static if(is(T : mt))
{
matrix[i / cols][i % cols] = head;
construct!(i + 1)(tail);
}
else
{
static if(is(T == Vector!(mt,cols)))
{
static if(i % cols == 0)
{
matrix[i / cols] = head.vector;
construct!(i + T.dimension)(tail);
}
else
{
static assert(false,"Can't convert Vector into the matrix. Maybe it doesn't align to the columns correctly or dimension doesn't fit");
}

}
else
{
static assert(false,"Matrix constructor argument must be of type " ~ mt.stringof ~ " or Vector, not " ~ T.stringof);
}

}

}

}
}

    private template construct(int i)
{
void construct()
{
}
}

    template __ctor(Args...)
{
this(Args args)
{
construct!(0)(args);
}
}
    template __ctor(T) if (is_matrix!(T) && T.cols >= cols && T.rows >= rows)
{
this(T mat)
{
{
for (int r = 0;
 r < rows; r++)
{
{
{
for (int c = 0;
 c < cols; c++)
{
{
matrix[r][c] = mat.matrix[r][c];
}
}
}
}
}
}
}
}
    template __ctor(T) if (is_matrix!(T) && T.cols < cols && T.rows < rows)
{
this(T mat)
{
make_identity();
{
for (int r = 0;
 r < T.rows; r++)
{
{
{
for (int c = 0;
 c < T.cols; c++)
{
{
matrix[r][c] = mat.matrix[r][c];
}
}
}
}
}
}
}
}
    template __ctor()
{
this(mt value)
{
clear(value);
}
}
    @property bool ok()
{
foreach (row; matrix)
{
foreach (col; row)
{
if (isNaN(col) || isInfinity(col))
{
return false;
}
}
}
return true;
}

    void clear(mt value)
{
{
for (int r = 0;
 r < rows; r++)
{
{
{
for (int c = 0;
 c < cols; c++)
{
{
matrix[r][c] = value;
}
}
}
}
}
}
}
        @property string as_string()
{
return format(isFloatingPoint!(mt) ? "%f" : "%s",matrix);
}

    alias as_string toString;
    @property string as_pretty_string()
{
string fmtr = isFloatingPoint!(mt) ? "%f" : "%s";
size_t rjust = max(format(fmtr,reduce!(max)(matrix[])).length,format(fmtr,reduce!(min)(matrix[])).length) - 1;
string[] outer_parts;
foreach (mt[] row; matrix)
{
string[] inner_parts;
foreach (mt col; row)
{
inner_parts ~= rightJustify(format(fmtr,col),rjust);
}
outer_parts ~= " [" ~ join(inner_parts,", ") ~ "]";
}
return "[" ~ join(outer_parts,"\x0a")[1..$] ~ "]";
}

    alias as_pretty_string toPrettyString;
    static if(rows == cols)
{
    void make_identity()
{
clear(0);
{
for (int r = 0;
 r < rows; r++)
{
{
matrix[r][r] = 1;
}
}
}
}
    static @property Matrix identity()
{
Matrix ret;
ret.clear(0);
{
for (int r = 0;
 r < rows; r++)
{
{
ret.matrix[r][r] = 1;
}
}
}
return ret;
}

    void transpose()
{
matrix = transposed().matrix;
}
    }
    @property Matrix transposed()
{
Matrix ret;
{
for (int r = 0;
 r < rows; r++)
{
{
{
for (int c = 0;
 c < cols; c++)
{
{
ret.matrix[c][r] = matrix[r][c];
}
}
}
}
}
}
return ret;
}

    static if(rows == 2 && cols == 2)
{
    @property mt det()
{
return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

    private Matrix invert(ref Matrix mat)
{
mt d = det;
mat.matrix = [[matrix[1][1] / det,-matrix[0][1] / d],[-matrix[1][0] / det,matrix[0][0] / d]];
return mat;
}

}
else
{
    static if(rows == 3 && cols == 3)
{
    @property mt det()
{
return matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1] - matrix[0][2] * matrix[1][1] * matrix[2][0] - matrix[0][1] * matrix[1][0] * matrix[2][2] - matrix[0][0] * matrix[1][2] * matrix[2][1];
}

    private Matrix invert(ref Matrix mat)
{
mt d = det;
mat.matrix = [[(matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / d,(matrix[0][2] * matrix[2][1] - matrix[0][1] * matrix[2][2]) / d,(matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) / d],[(matrix[1][2] * matrix[2][0] - matrix[1][0] * matrix[2][2]) / d,(matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / d,(matrix[0][2] * matrix[1][0] - matrix[0][0] * matrix[1][2]) / d],[(matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / d,(matrix[0][1] * matrix[2][0] - matrix[0][0] * matrix[2][1]) / d,(matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / d]];
return mat;
}

    static Matrix translation(mt x, mt y)
{
Matrix ret = Matrix.identity;
ret.matrix[0][2] = x;
ret.matrix[1][2] = y;
return ret;
}

    Matrix translate(mt x, mt y)
{
this = this * Matrix.translation(x,y);
return this;
}
    static Matrix scaling(mt x, mt y)
{
Matrix ret = Matrix.identity;
ret.matrix[0][0] = x;
ret.matrix[1][1] = y;
return ret;
}

    Matrix scale(mt x, mt y)
{
this = this * Matrix.scaling(x,y);
return this;
}
}
else
{
    static if(rows == 4 && cols == 4)
{
    @property mt det()
{
return matrix[0][3] * matrix[1][2] * matrix[2][1] * matrix[3][0] - matrix[0][2] * matrix[1][3] * matrix[2][1] * matrix[3][0] - matrix[0][3] * matrix[1][1] * matrix[2][2] * matrix[3][0] + matrix[0][1] * matrix[1][3] * matrix[2][2] * matrix[3][0] + matrix[0][2] * matrix[1][1] * matrix[2][3] * matrix[3][0] - matrix[0][1] * matrix[1][2] * matrix[2][3] * matrix[3][0] - matrix[0][3] * matrix[1][2] * matrix[2][0] * matrix[3][1] + matrix[0][2] * matrix[1][3] * matrix[2][0] * matrix[3][1] + matrix[0][3] * matrix[1][0] * matrix[2][2] * matrix[3][1] - matrix[0][0] * matrix[1][3] * matrix[2][2] * matrix[3][1] - matrix[0][2] * matrix[1][0] * matrix[2][3] * matrix[3][1] + matrix[0][0] * matrix[1][2] * matrix[2][3] * matrix[3][1] + matrix[0][3] * matrix[1][1] * matrix[2][0] * matrix[3][2] - matrix[0][1] * matrix[1][3] * matrix[2][0] * matrix[3][2] - matrix[0][3] * matrix[1][0] * matrix[2][1] * matrix[3][2] + matrix[0][0] * matrix[1][3] * matrix[2][1] * matrix[3][2] + matrix[0][1] * matrix[1][0] * matrix[2][3] * matrix[3][2] - matrix[0][0] * matrix[1][1] * matrix[2][3] * matrix[3][2] - matrix[0][2] * matrix[1][1] * matrix[2][0] * matrix[3][3] + matrix[0][1] * matrix[1][2] * matrix[2][0] * matrix[3][3] + matrix[0][2] * matrix[1][0] * matrix[2][1] * matrix[3][3] - matrix[0][0] * matrix[1][2] * matrix[2][1] * matrix[3][3] - matrix[0][1] * matrix[1][0] * matrix[2][2] * matrix[3][3] + matrix[0][0] * matrix[1][1] * matrix[2][2] * matrix[3][3];
}

    private Matrix invert(ref Matrix mat)
{
mt d = det;
mat.matrix = [[(matrix[1][1] * matrix[2][2] * matrix[3][3] + matrix[1][2] * matrix[2][3] * matrix[3][1] + matrix[1][3] * matrix[2][1] * matrix[3][2] - matrix[1][1] * matrix[2][3] * matrix[3][2] - matrix[1][2] * matrix[2][1] * matrix[3][3] - matrix[1][3] * matrix[2][2] * matrix[3][1]) / d,(matrix[0][1] * matrix[2][3] * matrix[3][2] + matrix[0][2] * matrix[2][1] * matrix[3][3] + matrix[0][3] * matrix[2][2] * matrix[3][1] - matrix[0][1] * matrix[2][2] * matrix[3][3] - matrix[0][2] * matrix[2][3] * matrix[3][1] - matrix[0][3] * matrix[2][1] * matrix[3][2]) / d,(matrix[0][1] * matrix[1][2] * matrix[3][3] + matrix[0][2] * matrix[1][3] * matrix[3][1] + matrix[0][3] * matrix[1][1] * matrix[3][2] - matrix[0][1] * matrix[1][3] * matrix[3][2] - matrix[0][2] * matrix[1][1] * matrix[3][3] - matrix[0][3] * matrix[1][2] * matrix[3][1]) / d,(matrix[0][1] * matrix[1][3] * matrix[2][2] + matrix[0][2] * matrix[1][1] * matrix[2][3] + matrix[0][3] * matrix[1][2] * matrix[2][1] - matrix[0][1] * matrix[1][2] * matrix[2][3] - matrix[0][2] * matrix[1][3] * matrix[2][1] - matrix[0][3] * matrix[1][1] * matrix[2][2]) / d],[(matrix[1][0] * matrix[2][3] * matrix[3][2] + matrix[1][2] * matrix[2][0] * matrix[3][3] + matrix[1][3] * matrix[2][2] * matrix[3][0] - matrix[1][0] * matrix[2][2] * matrix[3][3] - matrix[1][2] * matrix[2][3] * matrix[3][0] - matrix[1][3] * matrix[2][0] * matrix[3][2]) / d,(matrix[0][0] * matrix[2][2] * matrix[3][3] + matrix[0][2] * matrix[2][3] * matrix[3][0] + matrix[0][3] * matrix[2][0] * matrix[3][2] - matrix[0][0] * matrix[2][3] * matrix[3][2] - matrix[0][2] * matrix[2][0] * matrix[3][3] - matrix[0][3] * matrix[2][2] * matrix[3][0]) / d,(matrix[0][0] * matrix[1][3] * matrix[3][2] + matrix[0][2] * matrix[1][0] * matrix[3][3] + matrix[0][3] * matrix[1][2] * matrix[3][0] - matrix[0][0] * matrix[1][2] * matrix[3][3] - matrix[0][2] * matrix[1][3] * matrix[3][0] - matrix[0][3] * matrix[1][0] * matrix[3][2]) / d,(matrix[0][0] * matrix[1][2] * matrix[2][3] + matrix[0][2] * matrix[1][3] * matrix[2][0] + matrix[0][3] * matrix[1][0] * matrix[2][2] - matrix[0][0] * matrix[1][3] * matrix[2][2] - matrix[0][2] * matrix[1][0] * matrix[2][3] - matrix[0][3] * matrix[1][2] * matrix[2][0]) / d],[(matrix[1][0] * matrix[2][1] * matrix[3][3] + matrix[1][1] * matrix[2][3] * matrix[3][0] + matrix[1][3] * matrix[2][0] * matrix[3][1] - matrix[1][0] * matrix[2][3] * matrix[3][1] - matrix[1][1] * matrix[2][0] * matrix[3][3] - matrix[1][3] * matrix[2][1] * matrix[3][0]) / d,(matrix[0][0] * matrix[2][3] * matrix[3][1] + matrix[0][1] * matrix[2][0] * matrix[3][3] + matrix[0][3] * matrix[2][1] * matrix[3][0] - matrix[0][0] * matrix[2][1] * matrix[3][3] - matrix[0][1] * matrix[2][3] * matrix[3][0] - matrix[0][3] * matrix[2][0] * matrix[3][1]) / d,(matrix[0][0] * matrix[1][1] * matrix[3][3] + matrix[0][1] * matrix[1][3] * matrix[3][0] + matrix[0][3] * matrix[1][0] * matrix[3][1] - matrix[0][0] * matrix[1][3] * matrix[3][1] - matrix[0][1] * matrix[1][0] * matrix[3][3] - matrix[0][3] * matrix[1][1] * matrix[3][0]) / d,(matrix[0][0] * matrix[1][3] * matrix[2][1] + matrix[0][1] * matrix[1][0] * matrix[2][3] + matrix[0][3] * matrix[1][1] * matrix[2][0] - matrix[0][0] * matrix[1][1] * matrix[2][3] - matrix[0][1] * matrix[1][3] * matrix[2][0] - matrix[0][3] * matrix[1][0] * matrix[2][1]) / d],[(matrix[1][0] * matrix[2][2] * matrix[3][1] + matrix[1][1] * matrix[2][0] * matrix[3][2] + matrix[1][2] * matrix[2][1] * matrix[3][0] - matrix[1][0] * matrix[2][1] * matrix[3][2] - matrix[1][1] * matrix[2][2] * matrix[3][0] - matrix[1][2] * matrix[2][0] * matrix[3][1]) / d,(matrix[0][0] * matrix[2][1] * matrix[3][2] + matrix[0][1] * matrix[2][2] * matrix[3][0] + matrix[0][2] * matrix[2][0] * matrix[3][1] - matrix[0][0] * matrix[2][2] * matrix[3][1] - matrix[0][1] * matrix[2][0] * matrix[3][2] - matrix[0][2] * matrix[2][1] * matrix[3][0]) / d,(matrix[0][0] * matrix[1][2] * matrix[3][1] + matrix[0][1] * matrix[1][0] * matrix[3][2] + matrix[0][2] * matrix[1][1] * matrix[3][0] - matrix[0][0] * matrix[1][1] * matrix[3][2] - matrix[0][1] * matrix[1][2] * matrix[3][0] - matrix[0][2] * matrix[1][0] * matrix[3][1]) / d,(matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1] - matrix[0][0] * matrix[1][2] * matrix[2][1] - matrix[0][1] * matrix[1][0] * matrix[2][2] - matrix[0][2] * matrix[1][1] * matrix[2][0]) / d]];
return mat;
}

    static Matrix translation(mt x, mt y, mt z)
{
Matrix ret = Matrix.identity;
ret.matrix[0][3] = x;
ret.matrix[1][3] = y;
ret.matrix[2][3] = z;
return ret;
}

    Matrix translate(mt x, mt y, mt z)
{
this = this * Matrix.translation(x,y,z);
return this;
}
    static Matrix scaling(mt x, mt y, mt z)
{
Matrix ret = Matrix.identity;
ret.matrix[0][0] = x;
ret.matrix[1][1] = y;
ret.matrix[2][2] = z;
return ret;
}

    Matrix scale(mt x, mt y, mt z)
{
this = this * Matrix.scaling(x,y,z);
return this;
}
        static if(isFloatingPoint!(mt))
{
    static private mt[6] cperspective(mt width, mt height, mt fov, mt near, mt far)
{
mt aspect = width / height;
mt top = near * tan(fov * (PI / 360));
mt bottom = -top;
mt right = top * aspect;
mt left = -right;
return [left,right,bottom,top,near,far];
}


    static Matrix perspective(mt width, mt height, mt fov = 60, mt near = 1, mt far = 100)
{
mt[6] cdata = cperspective(width,height,fov,near,far);
return perspective(cdata[0],cdata[1],cdata[2],cdata[3],cdata[4],cdata[5]);
}

    static Matrix perspective(mt left, mt right, mt bottom, mt top, mt near, mt far)
{
Matrix ret;
ret.clear(0);
ret.matrix[0][0] = 2 * near / (right - left);
ret.matrix[0][2] = (right + left) / (right - left);
ret.matrix[1][1] = 2 * near / (top - bottom);
ret.matrix[1][2] = (top + bottom) / (top - bottom);
ret.matrix[2][2] = -(far + near) / (far - near);
ret.matrix[2][3] = -(2 * far * near) / (far - near);
ret.matrix[3][2] = -1;
return ret;
}

    static Matrix perspective_inverse(mt width, mt height, mt fov = 60, mt near = 1, mt far = 100)
{
mt[6] cdata = cperspective(width,height,fov,near,far);
return perspective_inverse(cdata[0],cdata[1],cdata[2],cdata[3],cdata[4],cdata[5]);
}

    static Matrix perspective_inverse(mt left, mt right, mt bottom, mt top, mt near, mt far)
{
Matrix ret;
ret.clear(0);
ret.matrix[0][0] = (right - left) / (2 * near);
ret.matrix[0][3] = (right + left) / (2 * near);
ret.matrix[1][1] = (top - bottom) / (2 * near);
ret.matrix[1][3] = (top + bottom) / (2 * near);
ret.matrix[2][3] = -1;
ret.matrix[3][2] = -(far - near) / (2 * far * near);
ret.matrix[3][3] = (far + near) / (2 * far * near);
return ret;
}

    static Matrix orthographic(mt left, mt right, mt bottom, mt top, mt near, mt far)
{
Matrix ret;
ret.clear(0);
ret.matrix[0][0] = 2 / (right - left);
ret.matrix[0][3] = -(right + left) / (right - left);
ret.matrix[1][1] = 2 / (top - bottom);
ret.matrix[1][3] = -(top + bottom) / (top - bottom);
ret.matrix[2][2] = -2 / (far - near);
ret.matrix[2][3] = -(far + near) / (far - near);
ret.matrix[3][3] = 1;
return ret;
}

    static Matrix orthographic_inverse(mt left, mt right, mt bottom, mt top, mt near, mt far)
{
Matrix ret;
ret.clear(0);
ret.matrix[0][0] = (right - left) / 2;
ret.matrix[0][3] = (right + left) / 2;
ret.matrix[1][1] = (top - bottom) / 2;
ret.matrix[1][3] = (top + bottom) / 2;
ret.matrix[2][2] = (far - near) / -2;
ret.matrix[2][3] = (far + near) / 2;
ret.matrix[3][3] = 1;
return ret;
}

    static Matrix look_at(Vector!(mt,3) eye, Vector!(mt,3) target, Vector!(mt,3) up)
{
alias Vector!(mt,3) vec3mt;
vec3mt look_dir = (target - eye).normalized;
vec3mt up_dir = up.normalized;
vec3mt right_dir = cross(look_dir,up_dir).normalized;
vec3mt perp_up_dir = cross(right_dir,look_dir);
Matrix rot = Matrix.identity;
rot.matrix[0][0..3] = right_dir.vector;
rot.matrix[1][0..3] = perp_up_dir.vector;
rot.matrix[2][0..3] = (-look_dir).vector;
Matrix trans = Matrix.translation(-eye.x,-eye.y,-eye.z);
return rot * trans;
}

    }
}
}
}
    static if(rows == cols && rows >= 3)
{
    static Matrix xrotation(real alpha)
{
Matrix mult = Matrix.identity;
mt cosamt = to!(mt)(cos(alpha));
mt sinamt = to!(mt)(sin(alpha));
mult.matrix[1][1] = cosamt;
mult.matrix[1][2] = -sinamt;
mult.matrix[2][1] = sinamt;
mult.matrix[2][2] = cosamt;
return mult;
}

    static Matrix yrotation(real alpha)
{
Matrix mult = Matrix.identity;
mt cosamt = to!(mt)(cos(alpha));
mt sinamt = to!(mt)(sin(alpha));
mult.matrix[0][0] = cosamt;
mult.matrix[0][2] = sinamt;
mult.matrix[2][0] = -sinamt;
mult.matrix[2][2] = cosamt;
return mult;
}

    static Matrix zrotation(real alpha)
{
Matrix mult = Matrix.identity;
mt cosamt = to!(mt)(cos(alpha));
mt sinamt = to!(mt)(sin(alpha));
mult.matrix[0][0] = cosamt;
mult.matrix[0][1] = -sinamt;
mult.matrix[1][0] = sinamt;
mult.matrix[1][1] = cosamt;
return mult;
}

    Matrix rotatex(real alpha)
{
this = this * xrotation(alpha);
return this;
}
    Matrix rotatey(real alpha)
{
this = this * yrotation(alpha);
return this;
}
    Matrix rotatez(real alpha)
{
this = this * zrotation(alpha);
return this;
}
        void translation(mt[] values...)
{
assert(values.length >= rows - 1);
{
for (int r = 0;
 r < rows - 1; r++)
{
{
matrix[r][rows - 1] = values[r];
}
}
}
}
    void translation(Matrix mat)
{
{
for (int r = 0;
 r < rows - 1; r++)
{
{
matrix[r][rows - 1] = mat.matrix[r][rows - 1];
}
}
}
}
    Matrix translation()
{
Matrix ret = Matrix.identity;
{
for (int r = 0;
 r < rows - 1; r++)
{
{
ret.matrix[r][rows - 1] = matrix[r][rows - 1];
}
}
}
return ret;
}
        void scale(mt[] values...)
{
assert(values.length >= rows - 1);
{
for (int r = 0;
 r < rows - 1; r++)
{
{
matrix[r][r] = values[r];
}
}
}
}
    void scale(Matrix mat)
{
{
for (int r = 0;
 r < rows - 1; r++)
{
{
matrix[r][r] = mat.matrix[r][r];
}
}
}
}
    Matrix scale()
{
Matrix ret = Matrix.identity;
{
for (int r = 0;
 r < rows - 1; r++)
{
{
ret.matrix[r][r] = matrix[r][r];
}
}
}
return ret;
}
        void rotation(Matrix!(mt,3,3) rot)
{
{
for (int r = 0;
 r < 3; r++)
{
{
{
for (int c = 0;
 c < 3; c++)
{
{
matrix[r][c] = rot[r][c];
}
}
}
}
}
}
}
    Matrix!(mt,3,3) rotation()
{
Matrix!(mt,3,3) ret = Matrix!(mt,3,3).identity;
{
for (int r = 0;
 r < 3; r++)
{
{
{
for (int c = 0;
 c < 3; c++)
{
{
ret.matrix[r][c] = matrix[r][c];
}
}
}
}
}
}
return ret;
}
    }
    static if(rows == cols && rows <= 4)
{
    @property Matrix inverse()
{
Matrix mat;
invert(mat);
return mat;
}

    void invert()
{
invert(this);
}
}
        private void mms(mt inp, ref Matrix mat)
{
{
for (int r = 0;
 r < rows; r++)
{
{
{
for (int c = 0;
 c < cols; c++)
{
{
mat.matrix[r][c] = matrix[r][c] * inp;
}
}
}
}
}
}
}

    private template masm(string op)
{
void masm(Matrix inp, ref Matrix mat)
{
{
for (int r = 0;
 r < rows; r++)
{
{
{
for (int c = 0;
 c < cols; c++)
{
{
mat.matrix[r][c] = mixin("inp.matrix[r][c]" ~ op ~ "matrix[r][c]");
}
}
}
}
}
}
}
}

    template opBinary(string op : "*",T) if (isCompatibleMatrix!(T) && T.rows == cols)
{
Matrix!(mt,rows,T.cols) opBinary(T inp)
{
Matrix!(mt,rows,T.cols) ret;
{
for (int r = 0;
 r < rows; r++)
{
{
{
for (int c = 0;
 c < T.cols; c++)
{
{
ret.matrix[r][c] = 0;
{
for (int c2 = 0;
 c2 < cols; c2++)
{
{
ret.matrix[r][c] += matrix[r][c2] * inp.matrix[c2][c];
}
}
}
}
}
}
}
}
}
return ret;
}
}
    template opBinary(string op : "*",T : Vector!(mt,cols))
{
Vector!(mt,rows) opBinary(T inp)
{
Vector!(mt,rows) ret;
ret.clear(0);
{
for (int r = 0;
 r < rows; r++)
{
{
{
for (int c = 0;
 c < cols; c++)
{
{
ret.vector[r] += matrix[r][c] * inp.vector[c];
}
}
}
}
}
}
return ret;
}
}
    template opBinary(string op : "*")
{
Matrix opBinary(mt inp)
{
Matrix ret;
mms(inp,ret);
return ret;
}
}
    template opBinaryRight(string op : "*")
{
Matrix opBinaryRight(mt inp)
{
return this.opBinary!(op)(inp);
}
}
    template opBinary(string op) if (op == "+" || op == "-")
{
Matrix opBinary(Matrix inp)
{
Matrix ret;
masm!(op)(inp,ret);
return ret;
}
}
    template opOpAssign(string op : "*")
{
void opOpAssign(mt inp)
{
mms(inp,this);
}
}
    template opOpAssign(string op) if (op == "+" || op == "-")
{
void opOpAssign(Matrix inp)
{
masm!(op)(inp,this);
}
}
        template opCast(T : bool)
{
bool opCast()
{
return ok;
}
}
    }
}
alias Matrix!(float,2,2) mat2;
alias Matrix!(float,3,3) mat3;
alias Matrix!(float,3,4) mat34;
alias Matrix!(float,4,4) mat4;
template Quaternion(type)
{
struct Quaternion
{
    alias type qt;
    qt[4] quaternion;
    auto @property value_ptr()
{
return quaternion.ptr;
}
    private @property template get_(char coord)
{
qt get_()
{
return quaternion[coord_to_index!(coord)];
}
}


    private @property template set_(char coord)
{
void set_(qt value)
{
quaternion[coord_to_index!(coord)] = value;
}
}


    alias get_!('w') w;
    alias set_!('w') w;
    alias get_!('x') x;
    alias set_!('x') x;
    alias get_!('y') y;
    alias set_!('y') y;
    alias get_!('z') z;
    alias set_!('z') z;
    this(qt w_, qt x_, qt y_, qt z_)
{
w = w_;
x = x_;
y = y_;
z = z_;
}
    this(qt w_, Vector!(qt,3) vec)
{
w = w_;
quaternion[1..4] = vec.vector;
}
    this(Vector!(qt,4) vec)
{
quaternion = vec.vector;
}
    @property bool ok()
{
foreach (q; quaternion)
{
if (isNaN(q) || isInfinity(q))
{
return false;
}
}
return true;
}

        template coord_to_index(char c)
{
static if(c == 'w')
{
    enum coord_to_index = 0;
}
else
{
    static if(c == 'x')
{
    enum coord_to_index = 1;
}
else
{
    static if(c == 'y')
{
    enum coord_to_index = 2;
}
else
{
    static if(c == 'z')
{
    enum coord_to_index = 3;
}
else
{
    static assert(false,"accepted coordinates are x, y, z and w not " ~ c ~ ".");
}
}
}
}
}
    @property real magnitude_squared()
{
return to!(real)(w ^^ 2 + x ^^ 2 + y ^^ 2 + z ^^ 2);
}

    @property real magnitude()
{
return sqrt(magnitude_squared);
}

    static @property Quaternion identity()
{
return Quaternion(1,0,0,0);
}

    void make_identity()
{
w = 1;
x = 0;
y = 0;
z = 0;
}
    void invert()
{
x = -x;
y = -y;
z = -z;
}
    alias invert conjugate;
    @property Quaternion inverse()
{
return Quaternion(w,-x,-y,-z);
}

    alias inverse conjugated;
        @property string as_string()
{
return format(isFloatingPoint!(qt) ? "%f" : "%s",quaternion);
}

    alias as_string toString;
    static Quaternion from_matrix(Matrix!(qt,3,3) matrix)
{
Quaternion ret;
auto mat = matrix.matrix;
qt trace = mat[0][0] + mat[1][1] + mat[2][2];
if (trace > 0)
{
real s = 0.5 / sqrt(trace + 1);
ret.w = to!(qt)(0.25 / s);
ret.x = to!(qt)((mat[2][1] - mat[1][2]) * s);
ret.y = to!(qt)((mat[0][2] - mat[2][0]) * s);
ret.z = to!(qt)((mat[1][0] - mat[0][1]) * s);
}
else
if (mat[0][0] > mat[1][2] && mat[0][0] > mat[2][2])
{
real s = 2 * sqrt(1 + mat[0][0] - mat[1][1] - mat[2][2]);
ret.w = to!(qt)((mat[2][1] - mat[1][2]) / s);
ret.x = to!(qt)(0.25 * s);
ret.y = to!(qt)((mat[0][1] - mat[1][0]) / s);
ret.z = to!(qt)((mat[0][2] - mat[2][0]) / s);
}
else
if (mat[1][1] > mat[2][2])
{
real s = 2 * sqrt(1 + mat[1][1] - mat[0][0] - mat[2][2]);
ret.w = to!(qt)((mat[0][2] - mat[2][0]) / s);
ret.x = to!(qt)((mat[0][1] + mat[1][0]) / s);
ret.y = to!(qt)(0.25F * s);
ret.z = to!(qt)((mat[1][2] + mat[2][1]) / s);
}
else
{
real s = 2 * sqrt(1 + mat[2][2] - mat[0][0] - mat[1][1]);
ret.w = to!(qt)((mat[1][0] - mat[0][1]) / s);
ret.x = to!(qt)((mat[0][2] + mat[2][0]) / s);
ret.y = to!(qt)((mat[1][2] + mat[2][1]) / s);
ret.z = to!(qt)(0.25F * s);
}
return ret;
}

    template to_matrix(int rows,int cols) if (rows >= 3 && cols >= 3)
{
Matrix!(qt,rows,cols) to_matrix()
{
static if(rows == 3 && cols == 3)
{
Matrix!(qt,rows,cols) ret;
}
else
{
Matrix!(qt,rows,cols) ret = Matrix!(qt,rows,cols).identity;
}

qt xx = x ^^ 2;
qt xy = x * y;
qt xz = x * z;
qt xw = x * w;
qt yy = y ^^ 2;
qt yz = y * z;
qt yw = y * w;
qt zz = z ^^ 2;
qt zw = z * w;
ret.matrix[0][0..3] = [1 - 2 * (yy + zz),2 * (xy - zw),2 * (xz + yw)];
ret.matrix[1][0..3] = [2 * (xy + zw),1 - 2 * (xx + zz),2 * (yz - xw)];
ret.matrix[2][0..3] = [2 * (xz - yw),2 * (yz + xw),1 - 2 * (xx + yy)];
return ret;
}
}
        void normalize()
{
qt m = to!(qt)(magnitude);
if (m != 0)
{
w = w / m;
x = x / m;
y = y / m;
z = z / m;
}
}
    Quaternion normalized()
{
Quaternion ret;
qt m = to!(qt)(magnitude);
if (m != 0)
{
ret.w = w / m;
ret.x = x / m;
ret.y = y / m;
ret.z = z / m;
}
else
{
ret = Quaternion(w,x,y,z);
}
return ret;
}
        @property real yaw()
{
return atan2(to!(real)(2 * (w * y + x * z)),to!(real)(w ^^ 2 - x ^^ 2 - y ^^ 2 + z ^^ 2));
}

    @property real pitch()
{
return asin(to!(real)(2 * (w * x - y * z)));
}

    @property real roll()
{
return atan2(to!(real)(2 * (w * z + x * y)),to!(real)(w ^^ 2 - x ^^ 2 + y ^^ 2 - z ^^ 2));
}

        static Quaternion xrotation(real alpha)
{
Quaternion ret;
alpha /= 2;
ret.w = to!(qt)(cos(alpha));
ret.x = to!(qt)(sin(alpha));
ret.y = 0;
ret.z = 0;
return ret;
}

    static Quaternion yrotation(real alpha)
{
Quaternion ret;
alpha /= 2;
ret.w = to!(qt)(cos(alpha));
ret.x = 0;
ret.y = to!(qt)(sin(alpha));
ret.z = 0;
return ret;
}

    static Quaternion zrotation(real alpha)
{
Quaternion ret;
alpha /= 2;
ret.w = to!(qt)(cos(alpha));
ret.x = 0;
ret.y = 0;
ret.z = to!(qt)(sin(alpha));
return ret;
}

    static Quaternion axis_rotation(Vector!(qt,3) axis, real alpha)
{
if (alpha == 0)
{
return Quaternion.identity;
}
Quaternion ret;
alpha /= 2;
qt sinaqt = to!(qt)(sin(alpha));
ret.w = to!(qt)(cos(alpha));
ret.x = axis.x * sinaqt;
ret.y = axis.y * sinaqt;
ret.z = axis.z * sinaqt;
return ret;
}

    static Quaternion euler_rotation(real heading, real attitude, real bank)
{
Quaternion ret;
real c1 = cos(heading / 2);
real s1 = sin(heading / 2);
real c2 = cos(attitude / 2);
real s2 = sin(attitude / 2);
real c3 = cos(bank / 2);
real s3 = sin(bank / 2);
ret.w = to!(qt)(c1 * c2 * c3 - s1 * s2 * s3);
ret.x = to!(qt)(s1 * s2 * c3 + c1 * c2 * s3);
ret.y = to!(qt)(s1 * c2 * c3 + c1 * s2 * s3);
ret.z = to!(qt)(c1 * s2 * c3 - s1 * c2 * s3);
return ret;
}

    Quaternion rotatex(real alpha)
{
this *= xrotation(alpha);
return this;
}
    Quaternion rotatey(real alpha)
{
this *= yrotation(alpha);
return this;
}
    Quaternion rotatez(real alpha)
{
this *= zrotation(alpha);
return this;
}
    Quaternion rotate_axis(Vector!(qt,3) axis, real alpha)
{
this *= axis_rotation(axis,alpha);
return this;
}
    Quaternion rotate_euler(real heading, real attitude, real bank)
{
this *= euler_rotation(heading,attitude,bank);
return this;
}
        template opBinary(string op : "*")
{
Quaternion opBinary(Quaternion inp)
{
Quaternion ret;
ret.w = -x * inp.x - y * inp.y - z * inp.z + w * inp.w;
ret.x = x * inp.w + y * inp.z - z * inp.y + w * inp.x;
ret.y = -x * inp.z + y * inp.w + z * inp.x + w * inp.y;
ret.z = x * inp.y - y * inp.x + z * inp.w + w * inp.z;
return ret;
}
}
    template opBinaryRight(string op,T) if (!is_quaternion!(T))
{
auto opBinaryRight(T inp)
{
return this.opBinary!(op)(inp);
}
}
    template opBinary(string op) if (op == "+" || op == "-")
{
Quaternion opBinary(Quaternion inp)
{
Quaternion ret;
mixin("ret.w = w" ~ op ~ "inp.w;");
mixin("ret.x = x" ~ op ~ "inp.x;");
mixin("ret.y = y" ~ op ~ "inp.y;");
mixin("ret.z = z" ~ op ~ "inp.z;");
return ret;
}
}
    template opBinary(string op : "*")
{
Vector!(qt,3) opBinary(Vector!(qt,3) inp)
{
Vector!(qt,3) ret;
qt ww = w ^^ 2;
qt w2 = w * 2;
qt wx2 = w2 * x;
qt wy2 = w2 * y;
qt wz2 = w2 * z;
qt xx = x ^^ 2;
qt x2 = x * 2;
qt xy2 = x2 * y;
qt xz2 = x2 * z;
qt yy = y ^^ 2;
qt yz2 = 2 * y * z;
qt zz = z * z;
ret.vector = [ww * inp.x + wy2 * inp.z - wz2 * inp.y + xx * inp.x + xy2 * inp.y + xz2 * inp.z - zz * inp.x - yy * inp.x,xy2 * inp.x + yy * inp.y + yz2 * inp.z + wz2 * inp.x - zz * inp.y + ww * inp.y - wx2 * inp.z - xx * inp.y,xz2 * inp.x + yz2 * inp.y + zz * inp.z - wy2 * inp.x - yy * inp.z + wx2 * inp.y - xx * inp.z + ww * inp.z];
return ret;
}
}
    template opBinary(string op : "*")
{
Quaternion opBinary(qt inp)
{
return Quaternion(w * inp,x * inp,y * inp,z * inp);
}
}
    template opOpAssign(string op : "*")
{
void opOpAssign(Quaternion inp)
{
qt w2 = -x * inp.x - y * inp.y - z * inp.z + w * inp.w;
qt x2 = x * inp.w + y * inp.z - z * inp.y + w * inp.x;
qt y2 = -x * inp.z + y * inp.w + z * inp.x + w * inp.y;
qt z2 = x * inp.y - y * inp.x + z * inp.w + w * inp.z;
w = w2;
x = x2;
y = y2;
z = z2;
}
}
    template opOpAssign(string op) if (op == "+" || op == "-")
{
void opOpAssign(Quaternion inp)
{
mixin("w = w" ~ op ~ "inp.w;");
mixin("x = x" ~ op ~ "inp.x;");
mixin("y = y" ~ op ~ "inp.y;");
mixin("z = z" ~ op ~ "inp.z;");
}
}
    template opOpAssign(string op : "*")
{
void opOpAssign(qt inp)
{
quaternion[0] *= inp;
quaternion[1] *= inp;
quaternion[2] *= inp;
quaternion[3] *= inp;
}
}
        const bool opEquals(ref const Quaternion qu)
{
return quaternion == qu.quaternion;
}

    template opCast(T : bool)
{
bool opCast()
{
return ok;
}
}
    }
}
alias Quaternion!(float) quat;
