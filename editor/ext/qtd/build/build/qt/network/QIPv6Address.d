module qt.network.QIPv6Address;

public import qt.network.QIPv6Address_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QIPv6Address : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QIPv6Address_QIPv6Address();
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setC(ubyte[] c) {
        qtd_QIPv6Address_setC_ubyte_3(qtdNativeId, c.ptr);
    }

    public final ubyte[] c() {
        ubyte* ret = qtd_QIPv6Address_c(qtdNativeId);
        ubyte[] __d_return_value = ret[0 .. 16];
        return __d_return_value;
    }
    public alias void __isValueType;

    public alias void __isQtType_QIPv6Address;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QIPv6Address_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QIPv6Address_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QIPv6Address_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QIPv6Address_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QIPv6Address_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QIPv6Address_QTypeInfo_isComplex();
        isStatic = qtd_QIPv6Address_QTypeInfo_isStatic();
        isLarge = qtd_QIPv6Address_QTypeInfo_isLarge();
        isPointer = qtd_QIPv6Address_QTypeInfo_isPointer();
        isDummy = qtd_QIPv6Address_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QIPv6Address_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QIPv6Address_native_copy(const void* orig);
extern (C) void qtd_QIPv6Address_delete(void *ptr);
extern (C) void qtd_QIPv6Address_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QIPv6Address_QIPv6Address();
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QIPv6Address_setC_ubyte_3(void* __this_nativeId,
 ubyte* c0);
private extern(C) ubyte*  qtd_QIPv6Address_c(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QIPv6Address_initCallBacks(void* virtuals);

extern(C) void static_init_QIPv6Address() {
    QIPv6Address.QTypeInfo.init();
    qtd_QIPv6Address_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QIPv6Address_QTypeInfo_isComplex();
private extern (C) bool qtd_QIPv6Address_QTypeInfo_isStatic();
private extern (C) bool qtd_QIPv6Address_QTypeInfo_isLarge();
private extern (C) bool qtd_QIPv6Address_QTypeInfo_isPointer();
private extern (C) bool qtd_QIPv6Address_QTypeInfo_isDummy();
