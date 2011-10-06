module qt.gui.QRadialGradient;

public import qt.gui.QRadialGradient_aux;
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


public class QRadialGradient : QGradient
{

// Functions

    public this() {
        void* ret = qtd_QRadialGradient_QRadialGradient();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPointF) center, double radius) {
        void* ret = qtd_QRadialGradient_QRadialGradient_QPointF_double(center, radius);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPointF) center, double radius, const(QPointF) focalPoint) {
        void* ret = qtd_QRadialGradient_QRadialGradient_QPointF_double_QPointF(center, radius, focalPoint);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double cx, double cy, double radius) {
        void* ret = qtd_QRadialGradient_QRadialGradient_double_double_double(cx, cy, radius);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double cx, double cy, double radius, double fx, double fy) {
        void* ret = qtd_QRadialGradient_QRadialGradient_double_double_double_double_double(cx, cy, radius, fx, fy);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPointF center() const {
        QPointF res;
        qtd_QRadialGradient_center_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF focalPoint() const {
        QPointF res;
        qtd_QRadialGradient_focalPoint_const(qtdNativeId, &res);
        return res;
    }

    public final double radius() const {
        return qtd_QRadialGradient_radius_const(qtdNativeId);
    }

    public final void setCenter(const(QPointF) center) {
        qtd_QRadialGradient_setCenter_QPointF(qtdNativeId, center);
    }

    public final void setCenter(double x, double y) {
        qtd_QRadialGradient_setCenter_double_double(qtdNativeId, x, y);
    }

    public final void setFocalPoint(const(QPointF) focalPoint) {
        qtd_QRadialGradient_setFocalPoint_QPointF(qtdNativeId, focalPoint);
    }

    public final void setFocalPoint(double x, double y) {
        qtd_QRadialGradient_setFocalPoint_double_double(qtdNativeId, x, y);
    }

    public final void setRadius(double radius) {
        qtd_QRadialGradient_setRadius_double(qtdNativeId, radius);
    }
// Field accessors
    public alias void __isQtType_QRadialGradient;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QRadialGradient_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QRadialGradient_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QRadialGradient_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QRadialGradient_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QRadialGradient_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QRadialGradient_QTypeInfo_isComplex();
        isStatic = qtd_QRadialGradient_QTypeInfo_isStatic();
        isLarge = qtd_QRadialGradient_QTypeInfo_isLarge();
        isPointer = qtd_QRadialGradient_QTypeInfo_isPointer();
        isDummy = qtd_QRadialGradient_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QRadialGradient_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QRadialGradient_native_copy(const void* orig);
extern (C) void qtd_QRadialGradient_delete(void *ptr);
extern (C) void qtd_QRadialGradient_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QRadialGradient_QRadialGradient();
private extern(C) void* qtd_QRadialGradient_QRadialGradient_QPointF_double(QPointF center0,
 double radius1);
private extern(C) void* qtd_QRadialGradient_QRadialGradient_QPointF_double_QPointF(QPointF center0,
 double radius1,
 QPointF focalPoint2);
private extern(C) void* qtd_QRadialGradient_QRadialGradient_double_double_double(double cx0,
 double cy1,
 double radius2);
private extern(C) void* qtd_QRadialGradient_QRadialGradient_double_double_double_double_double(double cx0,
 double cy1,
 double radius2,
 double fx3,
 double fy4);
private extern(C) void  qtd_QRadialGradient_center_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QRadialGradient_focalPoint_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) double  qtd_QRadialGradient_radius_const(void* __this_nativeId);
private extern(C) void  qtd_QRadialGradient_setCenter_QPointF(void* __this_nativeId,
 QPointF center0);
private extern(C) void  qtd_QRadialGradient_setCenter_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void  qtd_QRadialGradient_setFocalPoint_QPointF(void* __this_nativeId,
 QPointF focalPoint0);
private extern(C) void  qtd_QRadialGradient_setFocalPoint_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void  qtd_QRadialGradient_setRadius_double(void* __this_nativeId,
 double radius0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QRadialGradient() {
    QRadialGradient.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QRadialGradient_QTypeInfo_isComplex();
private extern (C) bool qtd_QRadialGradient_QTypeInfo_isStatic();
private extern (C) bool qtd_QRadialGradient_QTypeInfo_isLarge();
private extern (C) bool qtd_QRadialGradient_QTypeInfo_isPointer();
private extern (C) bool qtd_QRadialGradient_QTypeInfo_isDummy();
