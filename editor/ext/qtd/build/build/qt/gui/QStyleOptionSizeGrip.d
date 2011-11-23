module qt.gui.QStyleOptionSizeGrip;

public import qt.gui.QStyleOptionSizeGrip_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QStyleOptionComplex;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionSizeGrip : QStyleOptionComplex
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 983048
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionSizeGrip) other) {
        void* ret = qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip_QStyleOptionSizeGrip(other is null ? null : (cast(QStyleOptionSizeGrip)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setCorner(Qt.Corner corner) {
        qtd_QStyleOptionSizeGrip_setCorner_Corner(qtdNativeId, corner);
    }

    public final Qt.Corner corner() {
        return cast(Qt.Corner) qtd_QStyleOptionSizeGrip_corner(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionSizeGrip;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionSizeGrip_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionSizeGrip_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionSizeGrip_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionSizeGrip_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionSizeGrip_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionSizeGrip_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionSizeGrip_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionSizeGrip_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionSizeGrip_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionSizeGrip_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionSizeGrip_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionSizeGrip_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionSizeGrip_delete(void *ptr);
extern (C) void qtd_QStyleOptionSizeGrip_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip();
private extern(C) void* qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip_QStyleOptionSizeGrip(void* other0);
private extern(C) void* qtd_QStyleOptionSizeGrip_QStyleOptionSizeGrip_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionSizeGrip_setCorner_Corner(void* __this_nativeId,
 int corner0);
private extern(C) int  qtd_QStyleOptionSizeGrip_corner(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionSizeGrip_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionSizeGrip() {
    QStyleOptionSizeGrip.QTypeInfo.init();
    qtd_QStyleOptionSizeGrip_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionSizeGrip_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionSizeGrip_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionSizeGrip_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionSizeGrip_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionSizeGrip_QTypeInfo_isDummy();
