module qt.gui.QPainterPathStroker;

public import qt.gui.QPainterPathStroker_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPainterPath;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPainterPathStroker : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPainterPathStroker_QPainterPathStroker(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.PenCapStyle capStyle() const {
        return cast(Qt.PenCapStyle) qtd_QPainterPathStroker_capStyle_const(qtdNativeId);
    }

    public final QPainterPath createStroke(const(QPainterPath) path) const {
        void* ret = qtd_QPainterPathStroker_createStroke_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final double curveThreshold() const {
        return qtd_QPainterPathStroker_curveThreshold_const(qtdNativeId);
    }

    public final double dashOffset() const {
        return qtd_QPainterPathStroker_dashOffset_const(qtdNativeId);
    }

    public final double[] dashPattern() const {
        double[] res;
        qtd_QPainterPathStroker_dashPattern_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.PenJoinStyle joinStyle() const {
        return cast(Qt.PenJoinStyle) qtd_QPainterPathStroker_joinStyle_const(qtdNativeId);
    }

    public final double miterLimit() const {
        return qtd_QPainterPathStroker_miterLimit_const(qtdNativeId);
    }

    public final void setCapStyle(Qt.PenCapStyle style) {
        qtd_QPainterPathStroker_setCapStyle_PenCapStyle(qtdNativeId, style);
    }

    public final void setCurveThreshold(double threshold) {
        qtd_QPainterPathStroker_setCurveThreshold_double(qtdNativeId, threshold);
    }

    public final void setDashOffset(double offset) {
        qtd_QPainterPathStroker_setDashOffset_double(qtdNativeId, offset);
    }

    public final void setDashPattern(Qt.PenStyle arg__1) {
        qtd_QPainterPathStroker_setDashPattern_PenStyle(qtdNativeId, arg__1);
    }

    public final void setDashPattern(double[] dashPattern) {
        qtd_QPainterPathStroker_setDashPattern_QVector(qtdNativeId, &dashPattern);
    }

    public final void setJoinStyle(Qt.PenJoinStyle style) {
        qtd_QPainterPathStroker_setJoinStyle_PenJoinStyle(qtdNativeId, style);
    }

    public final void setMiterLimit(double length) {
        qtd_QPainterPathStroker_setMiterLimit_double(qtdNativeId, length);
    }

    public final void setWidth(double width) {
        qtd_QPainterPathStroker_setWidth_double(qtdNativeId, width);
    }

    public final double width() const {
        return qtd_QPainterPathStroker_width_const(qtdNativeId);
    }
// Field accessors
    static QPainterPathStroker __getObject(void* nativeId) {
        return qtd_QPainterPathStroker_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPainterPathStroker;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPainterPathStroker_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPainterPathStroker_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPainterPathStroker_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QPainterPathStroker qtd_QPainterPathStroker_from_ptr(void* ret) {
    auto return_value = new QPainterPathStroker(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QPainterPathStroker_delete(void *ptr);
extern (C) void qtd_QPainterPathStroker_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPainterPathStroker_QPainterPathStroker(void *d_ptr);
private extern(C) int  qtd_QPainterPathStroker_capStyle_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainterPathStroker_createStroke_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) double  qtd_QPainterPathStroker_curveThreshold_const(void* __this_nativeId);
private extern(C) double  qtd_QPainterPathStroker_dashOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QPainterPathStroker_dashPattern_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QPainterPathStroker_joinStyle_const(void* __this_nativeId);
private extern(C) double  qtd_QPainterPathStroker_miterLimit_const(void* __this_nativeId);
private extern(C) void  qtd_QPainterPathStroker_setCapStyle_PenCapStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QPainterPathStroker_setCurveThreshold_double(void* __this_nativeId,
 double threshold0);
private extern(C) void  qtd_QPainterPathStroker_setDashOffset_double(void* __this_nativeId,
 double offset0);
private extern(C) void  qtd_QPainterPathStroker_setDashPattern_PenStyle(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPainterPathStroker_setDashPattern_QVector(void* __this_nativeId,
 DArray* dashPattern0);
private extern(C) void  qtd_QPainterPathStroker_setJoinStyle_PenJoinStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QPainterPathStroker_setMiterLimit_double(void* __this_nativeId,
 double length0);
private extern(C) void  qtd_QPainterPathStroker_setWidth_double(void* __this_nativeId,
 double width0);
private extern(C) double  qtd_QPainterPathStroker_width_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPainterPathStroker_initCallBacks(void* virtuals);

extern(C) void static_init_QPainterPathStroker() {
    qtd_QPainterPathStroker_initCallBacks(null);
}

// signal handlers

