module qt.core.QByteArrayMatcher;

public import qt.core.QByteArrayMatcher_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QByteArrayMatcher : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QByteArrayMatcher_QByteArrayMatcher();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) pattern) {
        void* ret = qtd_QByteArrayMatcher_QByteArrayMatcher_QByteArray(pattern is null ? null : (cast(QByteArray)pattern).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArrayMatcher) other) {
        void* ret = qtd_QByteArrayMatcher_QByteArrayMatcher_QByteArrayMatcher(other is null ? null : (cast(QByteArrayMatcher)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(char*) pattern, int length) {
        void* ret = qtd_QByteArrayMatcher_QByteArrayMatcher_nativepointerchar_int(pattern, length);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int indexIn(const(QByteArray) ba, int from = 0) const {
        return qtd_QByteArrayMatcher_indexIn_QByteArray_int_const(qtdNativeId, ba is null ? null : (cast(QByteArray)ba).qtdNativeId, from);
    }

    public final int indexIn(const(char*) str, int len, int from = 0) const {
        return qtd_QByteArrayMatcher_indexIn_nativepointerchar_int_int_const(qtdNativeId, str, len, from);
    }

    public final QByteArray pattern() const {
        void* ret = qtd_QByteArrayMatcher_pattern_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final void setPattern(const(QByteArray) pattern) {
        qtd_QByteArrayMatcher_setPattern_QByteArray(qtdNativeId, pattern is null ? null : (cast(QByteArray)pattern).qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QByteArrayMatcher;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QByteArrayMatcher_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QByteArrayMatcher_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QByteArrayMatcher_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QByteArrayMatcher_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QByteArrayMatcher_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QByteArrayMatcher_QTypeInfo_isComplex();
        isStatic = qtd_QByteArrayMatcher_QTypeInfo_isStatic();
        isLarge = qtd_QByteArrayMatcher_QTypeInfo_isLarge();
        isPointer = qtd_QByteArrayMatcher_QTypeInfo_isPointer();
        isDummy = qtd_QByteArrayMatcher_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QByteArrayMatcher_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QByteArrayMatcher_native_copy(const void* orig);
extern (C) void qtd_QByteArrayMatcher_delete(void *ptr);
extern (C) void qtd_QByteArrayMatcher_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QByteArrayMatcher_QByteArrayMatcher();
private extern(C) void* qtd_QByteArrayMatcher_QByteArrayMatcher_QByteArray(void* pattern0);
private extern(C) void* qtd_QByteArrayMatcher_QByteArrayMatcher_QByteArrayMatcher(void* other0);
private extern(C) void* qtd_QByteArrayMatcher_QByteArrayMatcher_nativepointerchar_int(const (char*) pattern0,
 int length1);
private extern(C) int  qtd_QByteArrayMatcher_indexIn_QByteArray_int_const(void* __this_nativeId,
 void* ba0,
 int from1);
private extern(C) int  qtd_QByteArrayMatcher_indexIn_nativepointerchar_int_int_const(void* __this_nativeId,
 const (char*) str0,
 int len1,
 int from2);
private extern(C) void*  qtd_QByteArrayMatcher_pattern_const(void* __this_nativeId);
private extern(C) void  qtd_QByteArrayMatcher_setPattern_QByteArray(void* __this_nativeId,
 void* pattern0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QByteArrayMatcher() {
    QByteArrayMatcher.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QByteArrayMatcher_QTypeInfo_isComplex();
private extern (C) bool qtd_QByteArrayMatcher_QTypeInfo_isStatic();
private extern (C) bool qtd_QByteArrayMatcher_QTypeInfo_isLarge();
private extern (C) bool qtd_QByteArrayMatcher_QTypeInfo_isPointer();
private extern (C) bool qtd_QByteArrayMatcher_QTypeInfo_isDummy();
