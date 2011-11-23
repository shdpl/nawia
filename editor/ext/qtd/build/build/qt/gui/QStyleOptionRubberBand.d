module qt.gui.QStyleOptionRubberBand;

public import qt.gui.QStyleOptionRubberBand_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QRubberBand;
public import qt.gui.QStyleOption;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionRubberBand : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 15
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionRubberBand_QStyleOptionRubberBand();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionRubberBand) other) {
        void* ret = qtd_QStyleOptionRubberBand_QStyleOptionRubberBand_QStyleOptionRubberBand(other is null ? null : (cast(QStyleOptionRubberBand)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionRubberBand_QStyleOptionRubberBand_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setOpaque(bool opaque) {
        qtd_QStyleOptionRubberBand_setOpaque_bool(qtdNativeId, opaque);
    }

    public final bool opaque() {
        return qtd_QStyleOptionRubberBand_opaque(qtdNativeId);
    }

    public final void setShape(QRubberBand.Shape shape) {
        qtd_QStyleOptionRubberBand_setShape_Shape(qtdNativeId, shape);
    }

    public final QRubberBand.Shape shape() {
        return cast(QRubberBand.Shape) qtd_QStyleOptionRubberBand_shape(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionRubberBand;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionRubberBand_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionRubberBand_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionRubberBand_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionRubberBand_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionRubberBand_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionRubberBand_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionRubberBand_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionRubberBand_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionRubberBand_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionRubberBand_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionRubberBand_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionRubberBand_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionRubberBand_delete(void *ptr);
extern (C) void qtd_QStyleOptionRubberBand_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionRubberBand_QStyleOptionRubberBand();
private extern(C) void* qtd_QStyleOptionRubberBand_QStyleOptionRubberBand_QStyleOptionRubberBand(void* other0);
private extern(C) void* qtd_QStyleOptionRubberBand_QStyleOptionRubberBand_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionRubberBand_setOpaque_bool(void* __this_nativeId,
 bool opaque0);
private extern(C) bool  qtd_QStyleOptionRubberBand_opaque(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionRubberBand_setShape_Shape(void* __this_nativeId,
 int shape0);
private extern(C) int  qtd_QStyleOptionRubberBand_shape(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionRubberBand_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionRubberBand() {
    QStyleOptionRubberBand.QTypeInfo.init();
    qtd_QStyleOptionRubberBand_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionRubberBand_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionRubberBand_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionRubberBand_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionRubberBand_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionRubberBand_QTypeInfo_isDummy();
