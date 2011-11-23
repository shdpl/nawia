module qt.gui.QConicalGradient;

public import qt.gui.QConicalGradient_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QGradient;
public import qt.core.QPointF;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QConicalGradient : QGradient
{

// Functions

    public this() {
        void* ret = qtd_QConicalGradient_QConicalGradient();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPointF) center, double startAngle) {
        void* ret = qtd_QConicalGradient_QConicalGradient_QPointF_double(center, startAngle);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double cx, double cy, double startAngle) {
        void* ret = qtd_QConicalGradient_QConicalGradient_double_double_double(cx, cy, startAngle);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double angle() const {
        return qtd_QConicalGradient_angle_const(qtdNativeId);
    }

    public final QPointF center() const {
        QPointF res;
        qtd_QConicalGradient_center_const(qtdNativeId, &res);
        return res;
    }

    public final void setAngle(double angle) {
        qtd_QConicalGradient_setAngle_double(qtdNativeId, angle);
    }

    public final void setCenter(const(QPointF) center) {
        qtd_QConicalGradient_setCenter_QPointF(qtdNativeId, center);
    }

    public final void setCenter(double x, double y) {
        qtd_QConicalGradient_setCenter_double_double(qtdNativeId, x, y);
    }
// Field accessors
    public alias void __isQtType_QConicalGradient;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QConicalGradient_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QConicalGradient_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QConicalGradient_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QConicalGradient_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QConicalGradient_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QConicalGradient_QTypeInfo_isComplex();
        isStatic = qtd_QConicalGradient_QTypeInfo_isStatic();
        isLarge = qtd_QConicalGradient_QTypeInfo_isLarge();
        isPointer = qtd_QConicalGradient_QTypeInfo_isPointer();
        isDummy = qtd_QConicalGradient_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QConicalGradient_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QConicalGradient_native_copy(const void* orig);
extern (C) void qtd_QConicalGradient_delete(void *ptr);
extern (C) void qtd_QConicalGradient_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QConicalGradient_QConicalGradient();
private extern(C) void* qtd_QConicalGradient_QConicalGradient_QPointF_double(QPointF center0,
 double startAngle1);
private extern(C) void* qtd_QConicalGradient_QConicalGradient_double_double_double(double cx0,
 double cy1,
 double startAngle2);
private extern(C) double  qtd_QConicalGradient_angle_const(void* __this_nativeId);
private extern(C) void  qtd_QConicalGradient_center_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QConicalGradient_setAngle_double(void* __this_nativeId,
 double angle0);
private extern(C) void  qtd_QConicalGradient_setCenter_QPointF(void* __this_nativeId,
 QPointF center0);
private extern(C) void  qtd_QConicalGradient_setCenter_double_double(void* __this_nativeId,
 double x0,
 double y1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QConicalGradient() {
    QConicalGradient.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QConicalGradient_QTypeInfo_isComplex();
private extern (C) bool qtd_QConicalGradient_QTypeInfo_isStatic();
private extern (C) bool qtd_QConicalGradient_QTypeInfo_isLarge();
private extern (C) bool qtd_QConicalGradient_QTypeInfo_isPointer();
private extern (C) bool qtd_QConicalGradient_QTypeInfo_isDummy();
