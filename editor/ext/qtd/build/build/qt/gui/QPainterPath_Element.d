module qt.gui.QPainterPath_Element;

public import qt.gui.QPainterPath_Element_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPainterPath;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPainterPath_Element : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPainterPath_Element_QPainterPath_Element();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isCurveTo() const {
        return qtd_QPainterPath_Element_isCurveTo_const(qtdNativeId);
    }

    public final bool isLineTo() const {
        return qtd_QPainterPath_Element_isLineTo_const(qtdNativeId);
    }

    public final bool isMoveTo() const {
        return qtd_QPainterPath_Element_isMoveTo_const(qtdNativeId);
    }

    private final bool operator_equal(const(QPainterPath_Element) e) const {
        return qtd_QPainterPath_Element_operator_equal_QPainterPath_Element_const(qtdNativeId, e is null ? null : (cast(QPainterPath_Element)e).qtdNativeId);
    }
// Field accessors

    public final double x() {
        return qtd_QPainterPath_Element_x(qtdNativeId);
    }

    public final double y() {
        return qtd_QPainterPath_Element_y(qtdNativeId);
    }

    public final QPainterPath.ElementType type() {
        return cast(QPainterPath.ElementType) qtd_QPainterPath_Element_type(qtdNativeId);
    }
    public alias void __isValueType;

    public alias void __isQtType_QPainterPath_Element;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPainterPath_Element_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPainterPath_Element_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPainterPath_Element_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPainterPath_Element_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPainterPath_Element_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPainterPath_Element_QTypeInfo_isComplex();
        isStatic = qtd_QPainterPath_Element_QTypeInfo_isStatic();
        isLarge = qtd_QPainterPath_Element_QTypeInfo_isLarge();
        isPointer = qtd_QPainterPath_Element_QTypeInfo_isPointer();
        isDummy = qtd_QPainterPath_Element_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    @QtBlockedSlot
    public final qt.core.QPointF toPoint() {
    return operator_cast_QPointF();
    }
     */

}
private extern(C) void qtd_QPainterPath_Element_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPainterPath_Element_native_copy(const void* orig);
extern (C) void qtd_QPainterPath_Element_delete(void *ptr);
extern (C) void qtd_QPainterPath_Element_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPainterPath_Element_QPainterPath_Element();
private extern(C) bool  qtd_QPainterPath_Element_isCurveTo_const(void* __this_nativeId);
private extern(C) bool  qtd_QPainterPath_Element_isLineTo_const(void* __this_nativeId);
private extern(C) bool  qtd_QPainterPath_Element_isMoveTo_const(void* __this_nativeId);
private extern(C) bool  qtd_QPainterPath_Element_operator_equal_QPainterPath_Element_const(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) double  qtd_QPainterPath_Element_x(void* __this_nativeId);
private extern(C) double  qtd_QPainterPath_Element_y(void* __this_nativeId);
private extern(C) int  qtd_QPainterPath_Element_type(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QPainterPath_Element_initCallBacks(void* virtuals);

extern(C) void static_init_QPainterPath_Element() {
    QPainterPath_Element.QTypeInfo.init();
    qtd_QPainterPath_Element_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QPainterPath_Element_QTypeInfo_isComplex();
private extern (C) bool qtd_QPainterPath_Element_QTypeInfo_isStatic();
private extern (C) bool qtd_QPainterPath_Element_QTypeInfo_isLarge();
private extern (C) bool qtd_QPainterPath_Element_QTypeInfo_isPointer();
private extern (C) bool qtd_QPainterPath_Element_QTypeInfo_isDummy();
