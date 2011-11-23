module qt.gui.QStyleOptionComplex;

public import qt.gui.QStyleOptionComplex_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOption;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionComplex : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 983040
    }

    alias StyleOptionType.Type Type;


// Functions

    public this(const(QStyleOptionComplex) other) {
        void* ret = qtd_QStyleOptionComplex_QStyleOptionComplex_QStyleOptionComplex(other is null ? null : (cast(QStyleOptionComplex)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int version_ = 1, int type = 983040) {
        void* ret = qtd_QStyleOptionComplex_QStyleOptionComplex_int_int(version_, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setSubControls(int subControls) {
        qtd_QStyleOptionComplex_setSubControls_int(qtdNativeId, subControls);
    }

    public final int subControls() {
        return qtd_QStyleOptionComplex_subControls(qtdNativeId);
    }

    public final void setActiveSubControls(int activeSubControls) {
        qtd_QStyleOptionComplex_setActiveSubControls_int(qtdNativeId, activeSubControls);
    }

    public final int activeSubControls() {
        return qtd_QStyleOptionComplex_activeSubControls(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionComplex;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionComplex_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionComplex_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionComplex_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionComplex_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionComplex_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionComplex_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionComplex_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionComplex_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionComplex_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionComplex_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionComplex_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionComplex_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionComplex_delete(void *ptr);
extern (C) void qtd_QStyleOptionComplex_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionComplex_QStyleOptionComplex_QStyleOptionComplex(void* other0);
private extern(C) void* qtd_QStyleOptionComplex_QStyleOptionComplex_int_int(int version0,
 int type1);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionComplex_setSubControls_int(void* __this_nativeId,
 int subControls0);
private extern(C) int  qtd_QStyleOptionComplex_subControls(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionComplex_setActiveSubControls_int(void* __this_nativeId,
 int activeSubControls0);
private extern(C) int  qtd_QStyleOptionComplex_activeSubControls(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionComplex_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionComplex() {
    QStyleOptionComplex.QTypeInfo.init();
    qtd_QStyleOptionComplex_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionComplex_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionComplex_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionComplex_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionComplex_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionComplex_QTypeInfo_isDummy();
