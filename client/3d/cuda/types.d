/*
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

module cuda.types;

import std.stdio: writeln;
import std.conv;
import std.traits;
import std.math;
import std.algorithm;
import std.numeric;
import std.bitmanip;
import std.functional;

private:

template report(T,size_t N,alias op,U) {
    pragma(msg, T.stringof~" "~std.metastrings.toStringNow!N~" "~op~" "~U.stringof~" "~(is(bop!(T,N,op,U))).stringof );

    immutable report = true;
}

    template CTstartsWith(string A, string B){
        static if(A.length < B.length)
             immutable CTstartsWith = CTstartsWith!(B,A);
        else immutable CTstartsWith = A[0..B.length] == B;
    }
    template CTendsWith(string A, string B){
        static if(A.length < B.length)
             immutable CTendsWith = CTendsWith!(B,A);
        else immutable CTendsWith = A[$-B.length..$] == B;
    }
    template CTboundedBy(string A, string start, string end) {
        immutable CTboundedBy = CTstartsWith!(A,start) && CTendsWith!(A,end);
    }
    template isSmallVec(T) {
        immutable isSmallVec = //isPointer!T
                    CTboundedBy!(Unqual!T.stringof, "SmallVec!(", ")") ||
                    CTboundedBy!(Unqual!T.stringof, "dim3!("    , ")") ;
    }
    //buggy ??
//    template isSmallVec(T:SmallVec!(U,N),U, size_t N) { immutable isSmallVec = true; }
//    template isSmallVec(T:dim3)                       { immutable isSmallVec = true; }
//    template isSmallVec(T)                            { immutable isSmallVec = false; }

    // Vector suffixes
    template suffix(U) {
             static if(isSmallVec!U) immutable suffix = [".x",".y",".z",".w",".v"];
        else static if(isArray!U)    immutable suffix = ["[0]","[1]","[2]","[3]","[4]"];
        else                         immutable suffix = ["","","","",""];
    }
    template bop_helper(T, size_t N, string op, U) {
        alias typeof( mixin("function(T a, U b){return a"~op~"b"~suffix!U[0]~";}") ) __temp;
        alias ReturnType!( __temp ) bop;
    }
    template bop(T, size_t N, string op, U = T)
        if( is(bop_helper!(T,N,op,U).bop) ) {
        alias bop_helper!(T,N,op,U).bop bop;
    }
    template bop_r_helper(T, size_t N, string op, U) {
        alias typeof( mixin("function(T a, U b){return b"~suffix!U[0]~op~"a;}") ) __temp;
        alias ReturnType!( __temp ) bop_r;
    }
    template bop_r(T, size_t N, string op, U = T)
        if( is(bop_r_helper!(T,N,op,U).bop_r)  ) {
        alias bop_r_helper!(T,N,op,U).bop_r bop_r;
    }

    // The type of op T post;
    template uop_helper(T, string op, string post) {
        alias typeof( mixin("function(T a){return "~op~"a"~post~";}") ) __temp;
        alias ReturnType!( __temp ) uop;
    }
    template uop(T, string op, string post = "")
        if( is(uop_helper!(T,op,post).uop)  ) {
        alias uop_helper!(T,op,post).uop uop;
    }

    template rt(T:SmallVec!(U,N),U,size_t N) { alias T rt; }
    template rt(U,T,size_t N) {
        static if(N==1) alias SmallVec!(T,1) rt;
        static if(N==2) alias SmallVec!(T,2) rt;
        static if(N==3) alias SmallVec!(T,3) rt;
        static if(N==4) alias SmallVec!(T,4) rt;
        static if(N==5) alias SmallVec!(T,5) rt;
    }

public:
struct SmallVec(T, size_t N) if (N > 0 && N < 6) {
public:
    // uvw xyz
    // abcdefghijklmnopqrstuv
                   T x;    ///
    static if(N>1) T y;    ///
    static if(N>2) T z;    ///
    static if(N>3) T w;    ///
    static if(N>4) T v;    ///

    rt!(SmallVec,uop!(T,op,""),N) opUnary(string op)() const if ( is(uop!(T,op)) && !(op=="++" ||op=="--") ) {
        typeof(return) r;
                        mixin("r.x = "~op~" x;");
        static if(N>1)  mixin("r.y = "~op~" y;");
        static if(N>2)  mixin("r.z = "~op~" z;");
        static if(N>3)  mixin("r.w = "~op~" w;");
        static if(N>4)  mixin("r.v = "~op~" v;");
        return r;
    }

    typeof(this) opUnary(string op)() if ( is(uop!(T,op)) && (op=="++" ||op=="--") ) {
                        mixin(op~"x;");
        static if(N>1)  mixin(op~"y;");
        static if(N>2)  mixin(op~"z;");
        static if(N>3)  mixin(op~"w;");
        static if(N>4)  mixin(op~"v;");
        return this;
    }

    rt!(SmallVec,uop!(T,"",op),N) post_op(alias op)() {
        typeof(return) r;
                        mixin("r.x = x"~op~";");
        static if(N>1)  mixin("r.y = y"~op~";");
        static if(N>2)  mixin("r.z = z"~op~";");
        static if(N>3)  mixin("r.w = w"~op~";");
        static if(N>4)  mixin("r.v = v"~op~";");
        return r;
    }

    template tri_op(alias op) {
        rt!(SmallVec,bop!(T,N,op,U),N) tri_op(U)(U b) const
            if( is(bop!(T,N,op,U))  )
        {
            static if(isDynamicArray!U) assert(b.length == N, "invalid lengths for dynamic array and "~typeof(this).stringof~" operation " );
            typeof(return) r;
                            mixin("r.x = x "~op~" b"~suffix!U[0]~";");
            static if(N>1)  mixin("r.y = y "~op~" b"~suffix!U[1]~";");
            static if(N>2)  mixin("r.z = z "~op~" b"~suffix!U[2]~";");
            static if(N>3)  mixin("r.w = w "~op~" b"~suffix!U[3]~";");
            static if(N>4)  mixin("r.v = v "~op~" b"~suffix!U[4]~";");
            return r;
        }
    }
    template tri_op_r(alias op) {
        static if( is(bop_r!(T,N,op,T)) ) {
            rt!(SmallVec,bop_r!(T,N,op,T),N) tri_op_r(T b) const
            {
                alias typeof(b) U;
                static if(isDynamicArray!U) assert(b.length == N, "invalid lengths for dynamic array and "~typeof(this).stringof~" operation");
                typeof(return) r;
                                mixin("r.x = b"~suffix!U[0]~" "~op~" x;");
                static if(N>1)  mixin("r.y = b"~suffix!U[1]~" "~op~" y;");
                static if(N>2)  mixin("r.z = b"~suffix!U[2]~" "~op~" z;");
                static if(N>3)  mixin("r.w = b"~suffix!U[3]~" "~op~" w;");
                static if(N>4)  mixin("r.v = b"~suffix!U[4]~" "~op~" v;");
                return r;
            }
        }


    }
    template assign_op(alias op) {
        typeof(this) assign_op(U, string file = __FILE__, int line = __LINE__)(U b)
            if( is(bop!(T,N,op~"=",U) ) )
        {
            static if(isDynamicArray!U) assert(b.length == N, "invalid lengths for dynamic array and "~typeof(this).stringof~" operation");
                            mixin("x "~op~"= b"~suffix!U[0]~";");
            static if(N>1)  mixin("y "~op~"= b"~suffix!U[1]~";");
            static if(N>2)  mixin("z "~op~"= b"~suffix!U[2]~";");
            static if(N>3)  mixin("w "~op~"= b"~suffix!U[3]~";");
            static if(N>4)  mixin("v "~op~"= b"~suffix!U[4]~";");
            return this;
        }
    }

    public:

    static rt!(SmallVec,T,N) opCall(U)(U b) if( is(bop!(T,N," =",U) ) )                { typeof(return) r; r = b;        return r; }
    static if( N == 2 ) static rt!(SmallVec,T,N) opCall(U:T)(U x, U y)                 { typeof(return) r = {x,y};       return r; }
    static if( N == 3 ) static rt!(SmallVec,T,N) opCall(U:T)(U x, U y, U z)            { typeof(return) r = {x,y,z};     return r; }
    static if( N == 4 ) static rt!(SmallVec,T,N) opCall(U:T)(U x, U y, U z, U w)       { typeof(return) r = {x,y,z,w};   return r; }
    static if( N == 5 ) static rt!(SmallVec,T,N) opCall(U:T)(U x, U y, U z, U w, U v)  { typeof(return) r = {x,y,z,w,v}; return r; }

//    static if(is( uop!(T,"-")     )) { rt!(SmallVec,uop!(T,"-"),N)     opNeg() const { return uni_op!("-");   } }
//    static if(is( uop!(T,"+")     )) { rt!(SmallVec,uop!(T,"+"),N)     opPos() const { return uni_op!("+");   } }
//    static if(is( uop!(T,"~")     )) { rt!(SmallVec,uop!(T,"~"),N)     opCom() const { return uni_op!("~");   } }
    static if(is( uop!(T,"","--") )) { rt!(SmallVec,uop!(T,"","--"),N) opPostDec()   { return post_op!("--"); } }
    static if(is( uop!(T,"","++") )) { rt!(SmallVec,uop!(T,"","++"),N) opPostInc()   { return post_op!("++"); } }

    rt!(SmallVec,bop!(T,N,op,U),N) opBinary(string op, U)(U b) const
        if( op == "^^" && is(bop!(T,N,op,U))  )
    {
        static if(isDynamicArray!U) assert(b.length == N, "invalid lengths for dynamic array and "~typeof(this).stringof~" operation");
        typeof(return) r;
                        mixin("r.x = x "~op~" b"~suffix!U[0]~";");
        static if(N>1)  mixin("r.y = y "~op~" b"~suffix!U[1]~";");
        static if(N>2)  mixin("r.z = z "~op~" b"~suffix!U[2]~";");
        static if(N>3)  mixin("r.w = w "~op~" b"~suffix!U[3]~";");
        static if(N>4)  mixin("r.v = v "~op~" b"~suffix!U[4]~";");
        return r;
    }

   // alias tri_op!"^^"       opBinary(string op = "^^");
    alias tri_op!"+"      opAdd;        ///ditto
    alias tri_op!"-"      opSub;        ///ditto
    alias tri_op!"*"      opMul;        ///ditto
    alias tri_op!"/"      opDiv;        ///ditto
    alias tri_op!"%"      opMod;        ///ditto
    alias tri_op!"&"      opAnd;        ///ditto
    alias tri_op!"|"      opOr;         ///ditto
    alias tri_op!"^"      opXor;        ///ditto
    alias tri_op!"<<"     opShl;        ///ditto
    alias tri_op!">>"     opShr;        ///ditto
    alias tri_op!">>>"    opUShr;       ///ditto
    alias tri_op_r!"-"    opSub_r;      ///ditto
    alias tri_op_r!"/"    opDiv_r;      ///ditto
    alias tri_op_r!"%"    opMod_r;      ///ditto
//    alias tri_op_r!"<<"   opShl_r;      ///ditto
//    alias tri_op_r!">>"   opShr_r;      ///ditto
//    alias tri_op_r!">>>"  opUShr_r;     ///ditto
    alias assign_op!" "   opAssign;     ///ditto
    alias assign_op!"+"   opAddAssign;  ///ditto
    alias assign_op!"-"   opSubAssign;  ///ditto
    alias assign_op!"*"   opMulAssign;  ///ditto
    alias assign_op!"/"   opDivAssign;  ///ditto
    alias assign_op!"%"   opModAssign;  ///ditto
    alias assign_op!"&"   opAndAssign;  ///ditto
    alias assign_op!"|"   opOrAssign;   ///ditto
    alias assign_op!"^"   opXorAssign;  ///ditto
    alias assign_op!"<<"  opShlAssign;  ///ditto
    alias assign_op!">>"  opShrAssign;  ///ditto
    alias assign_op!">>>" opUShrAssign; ///ditto

    bool opEquals(U)(U b) const         ///ditto
        if( is(bop!(T,N,"==",U) )  )
    {
        static if(isDynamicArray!U) assert(b.length == N, "invalid lengths for dynamic array and "~typeof(this).stringof~" operation");
                        mixin("if(x != b"~suffix!U[0]~") return false;");
        static if(N>1)  mixin("if(y != b"~suffix!U[1]~") return false;");
        static if(N>2)  mixin("if(z != b"~suffix!U[2]~") return false;");
        static if(N>3)  mixin("if(w != b"~suffix!U[3]~") return false;");
        static if(N>4)  mixin("if(v != b"~suffix!U[4]~") return false;");
        return true;
    }

    static if( __traits(compiles, x.opCmp(x) )) {
        int opCmp(typeof(this) b) const {                   ///ditto
            int r = x.opCmp(b.x);
            if(r!=0) return r;
            static if(N>1) {
                r = y.opCmp(b.y);
                if(r!=0) return r;
            }
            static if(N>2) {
                r = z.opCmp(b.z);
                if(r!=0) return r;
            }
            static if(N>3) {
                r = w.opCmp(b.w);
                if(r!=0) return r;
            }
            static if(N>4)
                r = v.opCmp(b.v);
            return r;
        }
    } else static if(  is(bop!(T,N,"-",T)) ) { //__traits(compiles, (x-x)!=0)
        bop!(T,N,"-",T) opCmp(typeof(this) b) const {  ///ditto
            typeof(return) r = x-b.x;
            if(r!=0) return r;
            static if(N>1) {
                r = y-b.y;
                if(r!=0) return r;
            }
            static if(N>2) {
                r = z-b.z;
                if(r!=0) return r;
            }
            static if(N>3)
                r = w-b.w;
            return r;
        }
    } else static if( __traits(compiles, x<x) ) {
        int opCmp(typeof(this) b) const {                   ///ditto
            int _opCmp(T a,ref const T b) {
                if(a < b) return -1;
                if(a > b) return 1;
                return 0;
            }
            int r = _opCmp(x,b.x);
            if(r!=0) return r;
            static if(N>1) {
                r = _opCmp(y,b.y);
                if(r!=0) return r;
            }
            static if(N>2) {
                r = _opCmp(z,b.z);
                if(r!=0) return r;
            }
            static if(N>3)
                r = _opCmp(w,b.w);
            return r;
        }
    }

    ///ditto
    string toString() const {
        static if(N==1) return text("(",x,")");
        static if(N==2) return text("(",x," ",y,")");
        static if(N==3) return text("(",x," ",y," ",z,")");
        static if(N==4) return text("(",x," ",y," ",z," ",w,")");
        static if(N==5) return text("(",x," ",y," ",z," ",w," ",v,")");
    }

    /// Converts/treats a SmallVec!(T,N) to/as a T[] of length N.
    T[] opSlice() {
        union result {T[] array; struct { size_t length; T* ptr; }  };
        result r;
        r.length = N;
        r.ptr    = cast(T*)cast(void*)&this;
        return r.array;
    }
    const(T)[] opSlice() const {                                        ///ditto
        union result {T[] array; struct { size_t length; T* ptr; }  };
        result r;
        r.length = N;
        r.ptr    = cast(T*)cast(void*)&this;
        return r.array;
    }
          T[]  opSlice(size_t i, size_t j)       { return opSlice[i..j];                        }    ///ditto
    const(T)[] opSlice(size_t i, size_t j) const { return opSlice[i..j];                        }    ///ditto
          T   opIndex(size_t i)           const { return opSlice[i];                           }    ///ditto
     ref  T   opIndex(size_t i)                 { return opSlice[i];                           }    ///ditto
          T   opIndexAssign(in T v, size_t i)   { return opSlice[i] = v;                       }    ///ditto

    immutable length = N;                                   /// Returns: the length of the SmallVec
    static if(N*T.sizeof == 8)   enum _CUDA_ALIGN = 8;      /// Used for CUDA compatibility
    static if(N*T.sizeof == 16)  enum _CUDA_ALIGN = 16;     /// ditto
    static if(N*T.sizeof == 24)  enum _CUDA_ALIGN = 8;      /// ditto
    static if(N*T.sizeof == 32)  enum _CUDA_ALIGN = 16;     /// ditto

    static if( N ==3 ) {
        rt!(SmallVec,bop!(bop!(T,N,"*",U),N,"-"),N) cross(U)(U b) const     /// Returns: the cross product
            if(is(  bop!(bop!(T,N,"*",U),N,"-")  )&&( suffix!U[0]!="" ))
        {
            typeof(return) r;
            mixin("r.x =  y*b"~suffix!U[2]~" - z*b"~suffix!U[1]~" ;");
            mixin("r.y =  z*b"~suffix!U[0]~" - x*b"~suffix!U[2]~" ;");
            mixin("r.z =  x*b"~suffix!U[1]~" - y*b"~suffix!U[0]~" ;");
            return r;
        }
    }
    static if( N == 2 ){
        bop!(bop!(T,N,"*",U),N,"-") cross(U)(U b) const     /// Returns: the 2D cross product
            if(is(  bop!(bop!(T,N,"*",U),N,"-")  )&&( suffix!U[0]!="" ))
        {
            mixin("return x*b"~suffix!U[1]~" - y*b"~suffix!U[0]~" ;");
        }
    }
    // bop!(bop!(T,N,"*",U),N,"+")
    bop!(bop!(T,N,"*",U),N,"+") dot(U)(U b) const     /// Returns: the inner product of the vector
        if(is( bop!(bop!(T,N,"*",U),N,"+") ))
    {
            typeof(return) r;
            mixin("                r  = b"~suffix!U[0]~" * x;");
            static if(N>1)  mixin("r += b"~suffix!U[1]~" * y;");
            static if(N>2)  mixin("r += b"~suffix!U[2]~" * z;");
            static if(N>3)  mixin("r += b"~suffix!U[3]~" * w;");
            static if(N>4)  mixin("r += b"~suffix!U[4]~" * v;");
            return r;
    }
    static if(__traits(compiles, typeof(x*x+x*x) ))
        typeof(x*x+x*x) normsq() const {            /// Returns: the L2 Norm of the vector squared. Bugs: not DRY due to bug
            return this.dot(this);
        }
    static if(__traits(compiles, sqrt(x*x+x*x) ))
        typeof(sqrt(x*x+x*x)) norm() const { return sqrt(normsq); } /// Returns: the L2 Norm of the vector
    static if(__traits(compiles, x < x ))
        T min() const {                                             /// Returns: the minimum value in the vector
            static if(N==1) return x;
            static if(N==2) return std.algorithm.min(x,y);
            static if(N==3) return std.algorithm.min(x,y,z);
            static if(N==4) return std.algorithm.min(x,y,z,w);
            static if(N==5) return std.algorithm.min(x,y,z,w,v);
        }
    static if(__traits(compiles, x < x ))
        T max() const {                                             /// Returns: the maximum value in the vector
            static if(N==1) return x;
            static if(N==2) return std.algorithm.max(x,y);
            static if(N==3) return std.algorithm.max(x,y,z);
            static if(N==4) return std.algorithm.max(x,y,z,w);
            static if(N==5) return std.algorithm.max(x,y,z,w,v);
        }
    static if(__traits(compiles, x = x + x ))
        T sum() const {                                             /// Returns: the L1 norm of the vector
            static if(N==1) return x;
            static if(N==2) return x+y;
            static if(N==3) return x+y+z;
            static if(N==4) return x+y+z+w;
            static if(N==5) return x+y+z+w+v;
        }
    static if( __traits(compiles, x = x>=-x?x:-x ) )
        rt!(SmallVec,T,N) abs() const {                                /// Returns: the componentwise absolute value of the vector
            typeof(return) r;
                            r.x = x>=-x?x:-x;
            static if(N>1)  r.y = y>=-y?y:-y;
            static if(N>2)  r.z = z>=-z?z:-z;
            static if(N>3)  r.w = w>=-w?w:-w;
            static if(N>4)  r.v = v>=-v?v:-v;
            return r;
        }
    static if(T.sizeof == 2)
        rt!(SmallVec,float,N) opCast() {
            union Converter {
                rt!(SmallVec,T,N) raw;
                CustomFloat!(16)[N] half_float;
            };
            Converter data;
            data.raw = this;
            typeof(return) r;
                            r.x = data.half_float[0].get!float;
            static if(N>1)  r.y = data.half_float[1].get!float;
            static if(N>2)  r.z = data.half_float[2].get!float;
            static if(N>3)  r.w = data.half_float[3].get!float;
            static if(N>4)  r.v = data.half_float[4].get!float;
            return r;
        }

    /// Returns true if dims is a valid swizzle
    private template isSwizzle(string dims) {
             static if(dims.length == 0)          enum isSwizzle = true;
        else static if(dims.length >  4)          enum isSwizzle = false;
        else static if(N >= 1 && dims[0] == 'x' ) enum isSwizzle = isSwizzle!(dims[1..$]);
        else static if(N >= 2 && dims[0] == 'y' ) enum isSwizzle = isSwizzle!(dims[1..$]);
        else static if(N >= 3 && dims[0] == 'z' ) enum isSwizzle = isSwizzle!(dims[1..$]);
        else static if(N >= 4 && dims[0] == 'w' ) enum isSwizzle = isSwizzle!(dims[1..$]);
        else static if(N >= 5 && dims[0] == 'v' ) enum isSwizzle = isSwizzle!(dims[1..$]);
        else                                      enum isSwizzle = false;
    }
    /// Support Swizzling
    rt!(void,T,dims.length) opDispatch(string dims)() const if( isSwizzle!(dims) ) {
        typeof(return) r;
                                    mixin("r.x = "~dims[0]~";");
        static if(dims.length > 1)  mixin("r.y = "~dims[1]~";");
        static if(dims.length > 2)  mixin("r.z = "~dims[2]~";");
        static if(dims.length > 3)  mixin("r.w = "~dims[3]~";");
        static if(dims.length > 4)  mixin("r.v = "~dims[4]~";");
        return r;
    }

    /// Limited support for '~'
    static if(N < 5) {
        rt!(void,T,N+1) opCat(T value) {
            typeof(return) r;
            foreach(i;0..N)
                r[i] = this[i];
            r[N] = value;
            return r;
        }
    }
}

alias SmallVec!(ubyte,1) uchar1;
alias SmallVec!(ubyte,2) uchar2;
alias SmallVec!(ubyte,3) uchar3;
alias SmallVec!(ubyte,4) uchar4;

alias SmallVec!(byte,1) char1;
alias SmallVec!(byte,2) char2;
alias SmallVec!(byte,3) char3;
alias SmallVec!(byte,4) char4;

alias SmallVec!(ushort,1) ushort1;
alias SmallVec!(ushort,2) ushort2;
alias SmallVec!(ushort,3) ushort3;
alias SmallVec!(ushort,4) ushort4;

alias SmallVec!(short,1) short1;
alias SmallVec!(short,2) short2;
alias SmallVec!(short,3) short3;
alias SmallVec!(short,4) short4;

alias SmallVec!(uint,1) uint1;
alias SmallVec!(uint,2) uint2;
alias SmallVec!(uint,3) uint3;
alias SmallVec!(uint,4) uint4;

alias SmallVec!(int,1) int1;
alias SmallVec!(int,2) int2;
alias SmallVec!(int,3) int3;
alias SmallVec!(int,4) int4;

alias SmallVec!(ulong,1) ulong1;
alias SmallVec!(ulong,2) ulong2;
alias SmallVec!(ulong,3) ulong3;
alias SmallVec!(ulong,4) ulong4;

alias SmallVec!(long,1) long1;
alias SmallVec!(long,2) long2;
alias SmallVec!(long,3) long3;
alias SmallVec!(long,4) long4;

alias SmallVec!(float,1) float1;
alias SmallVec!(float,2) float2;
alias SmallVec!(float,3) float3;
alias SmallVec!(float,4) float4;

alias SmallVec!(double,1) double1;
alias SmallVec!(double,2) double2;
alias SmallVec!(double,3) double3;
alias SmallVec!(double,4) double4;

alias SmallVec!(real,1) real1;
alias SmallVec!(real,2) real2;
alias SmallVec!(real,3) real3;
alias SmallVec!(real,4) real4;

///
struct dim3 {
    uint x;
    uint y;
    uint z;
//    uint3 vec;
//    //alias vec this;
//    alias vec.x x;
//    alias vec.y y;
//    alias vec.z z;

    ///
    static dim3 opCall(uint x = 1, uint y = 1, uint z = 1) {
        dim3 result;
        result.x = x;
        result.y = y;
        result.z = z;
        return result;
    }
    ///
    static dim3 opCall(uint3 v)   { return dim3(v.x,v.y,v.z);    }
    ///
    static dim3 opCall(uint2 v)   { return dim3(v.x,v.y);    }
    ///
    static dim3 opCall(uint[3] v) { return dim3(v[0],v[1],v[2]); }
    ///
    static dim3 opCall(uint[2] v) { return dim3(v[0],v[1]);      }

    ///
    uint3 opCast() {
        uint3 result;
        result.x = this.x;
        result.y = this.y;
        result.z = this.z;
        return result;
    }

    string toString() const {
       return text("(",x," ",y," ",z,")");
    }

}

/// A floating point quaternion
struct qfloat {
    float  re;      /// The real part
    float3 im;      /// The imaginary part

    /// Construct a quaternion from seperate real and imaginary parts
    this(float re, float3 im) {
        this.re = re;
        this.im = im;
    }

    /// Contruct an identity quaternion
    static qfloat I() { return qfloat(1, float3(0,0,0)); }

    /// Construct a quaternion from an axis and angle
    this(float3 axis, real theta) {
        real l2 = axis.normsq;
        if(l2==0) {
            re = 0;
            im = 0;
        } else {
            auto sincos = expi(theta*0.5);
            im = axis * sincos.im / l2; // axis * sin;
            re = sincos.re;             // cos
        }
    }
    /// Construct a quaternion from an axis and it's length
    this(float3 axis) {
        real l2 = axis.normsq;
        if(l2==0) {
            re = 0;
            im = 0;
        } else {
            auto sincos = expi(l2*0.5);
            im = axis * sincos.im / l2; // axis * sin;
            re = sincos.re;             // cos
        }
    }
    /// Returns: the axis of a unit quaternion. Bugs: Doesn't not check to see if the quaternion is of unit length
    float3 axis() const  {
        float sin_a = sqrt(1-re*re);
        if(sin_a != 0)
            return im / sin_a;
        float3 r   = {0f,0,1};
        return r;
    }

    /// Returns: the angle of a unit quaternion. Bugs: Doesn't not check to see if the quaternion is of unit length
    float theta() const { return acos(re)*2; }

    /// Returns: the quaternion conjugate.
    qfloat opCom() const  {
        qfloat r;
        r.re = re;
        r.im = -im;
        return r;
    }

    /// Returns: the inverse of a quaternion. For unit quaternions, using ~a is more efficient.
    qfloat inv() const  { return ~this / norm; }

    /// Returns: the magnitude of the quaternion squared.
    float normsq() const  { return re*re + im.normsq; }
    /// Returns: the magnitude of the quaternion
    float norm()   const  { return sqrt(normsq); }

    /// Returns: this quaternion post normalization
    typeof(this) normalize() {
        float nsq = normsq;
        if(nsq != 0 && (abs(1.0-nsq) > float.epsilon)) {
            real inv = 1.0 / sqrt(nsq);
            re *= inv;
            im *= inv;
        }
        return this;
    }

    /// Returns: a * b
    qfloat opMul(qfloat b) const  {
        qfloat r;
        r.re = re*b.re - im.dot(b.im);
        r.im = re*b.im + im*b.re + im.cross(b.im);
        return r;
    }
    float3 opMul(float3 b) const  { ///ditto
        auto v = re*re - im.dot(im);
        auto u = 2*im.dot(b);
        auto c = 2*re;
        float3 r = v*b + u*im + c * im.cross(b);
        return r;
    }
    qfloat opMul(float b) const  { ///ditto
        qfloat r = qfloat(re*b, im*b);
        return r;
    }

    /// Returns: a * b.inv. For unit quaternions, using a * ~b or ~b * a is more efficient.
    qfloat opDiv(qfloat b) const  { return this * b.inv; }
    qfloat opDiv(real b) const    { return this * 1.0/b; } ///ditto

    /// For debug, not final version
    float3[] toMatrix() const {
        auto m = new float3[3];
        qfloat q = qfloat(re, im);
        q.normalize();                    // These can be joined
        auto q2 = qfloat(re*re,im*im);  // These can be joined

        auto temp1 = q2.re - q2.im.sum;
        m[0][0] = temp1 + 2*q2.im.x; // q2.im.x - q2.im.y - q2.im.z + q2.re;
        m[1][1] = temp1 + 2*q2.im.y; //-q2.im.x + q2.im.y - q2.im.z + q2.re;
        m[2][2] = temp1 + 2*q2.im.z; //-q2.im.x - q2.im.y + q2.im.z + q2.re;

             temp1 = q.im.x * q.im.y;
        auto temp2 = q.im.z * q.re;
        m[1][0] = 2 * (temp1 + temp2);
        m[0][1] = 2 * (temp1 - temp2);

        temp1 = q.im.x*q.im.z;
        temp2 = q.im.y*q.re;
        m[2][0] = 2 * (temp1 - temp2);
        m[0][2] = 2 * (temp1 + temp2);

        temp1 = q.im.y * q.im.z;
        temp2 = q.im.x * q.re;
        m[2][1] = 2 * (temp1 + temp2);
        m[1][2] = 2 * (temp1 - temp2);
        return m;
    }

}

///
struct Frame {
    qfloat r;   /// Unit quaternion
    float3 p;   /// Translation

    /// Constructors
    this(qfloat _r, float3 _p){ r = _r;       p = _p; };
    this(qfloat _r           ){ r = _r;       p =  0; }; ///ditto
    this(           float3 _p){ r = qfloat.I; p = _p; }; ///ditto

    this(float3 axis, float angle, float3 _p) { r = qfloat(axis,angle); p = _p; } ///ditto
    this(float3 axis, float angle)            { r = qfloat(axis,angle); p =  0; } ///ditto

    /// Returns: f1*f2
    Frame opMul(Frame b) const { return Frame( r*b.r, r*b.p + p ); }

    /// Returns: the transformed point
    float3 opMul(float3 b) const { return r*b+p; };

    /// Returns: the inverse of the frame
    Frame inv() const {
        auto cr = ~r;
        return Frame( cr, -(cr*p) );
    }

    string toString() const {
        auto m = r.toMatrix;
        return text(m[0],"\t",p.x,"\n",
                    m[1],"\t",p.y,"\n",
                    m[2],"\t",p.z);
    }

}


