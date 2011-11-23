module qt.gui.QStyleOptionTabV2;

public import qt.gui.QStyleOptionTabV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOptionTab;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionTabV2 : QStyleOptionTab
{
    public enum StyleOptionVersion {
        Version = 2
    }

    alias StyleOptionVersion.Version Version;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionTabV2_QStyleOptionTabV2();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionTab) other) {
        void* ret = qtd_QStyleOptionTabV2_QStyleOptionTabV2_QStyleOptionTab(other is null ? null : (cast(QStyleOptionTab)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionTabV2) other) {
        void* ret = qtd_QStyleOptionTabV2_QStyleOptionTabV2_QStyleOptionTabV2(other is null ? null : (cast(QStyleOptionTabV2)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionTabV2_QStyleOptionTabV2_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setIconSize(QSize iconSize) {
        qtd_QStyleOptionTabV2_setIconSize_QSize(qtdNativeId, iconSize);
    }

    public final QSize iconSize() {
        QSize res;
        qtd_QStyleOptionTabV2_iconSize(qtdNativeId, &res);
        return res;
    }
    public alias void __isQtType_QStyleOptionTabV2;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionTabV2_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionTabV2_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionTabV2_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionTabV2_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionTabV2_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionTabV2_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionTabV2_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionTabV2_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionTabV2_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionTabV2_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionTabV2_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionTabV2_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionTabV2_delete(void *ptr);
extern (C) void qtd_QStyleOptionTabV2_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionTabV2_QStyleOptionTabV2();
private extern(C) void* qtd_QStyleOptionTabV2_QStyleOptionTabV2_QStyleOptionTab(void* other0);
private extern(C) void* qtd_QStyleOptionTabV2_QStyleOptionTabV2_QStyleOptionTabV2(void* other0);
private extern(C) void* qtd_QStyleOptionTabV2_QStyleOptionTabV2_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionTabV2_setIconSize_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QStyleOptionTabV2_iconSize(void* __this_nativeId,
 QSize * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionTabV2_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionTabV2() {
    QStyleOptionTabV2.QTypeInfo.init();
    qtd_QStyleOptionTabV2_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionTabV2_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionTabV2_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionTabV2_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionTabV2_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionTabV2_QTypeInfo_isDummy();
