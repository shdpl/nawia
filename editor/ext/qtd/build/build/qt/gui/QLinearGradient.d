module qt.gui.QLinearGradient;

public import qt.gui.QLinearGradient_aux;
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


public class QLinearGradient : QGradient
{

// Functions

    public this() {
        void* ret = qtd_QLinearGradient_QLinearGradient();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPointF) start, const(QPointF) finalStop) {
        void* ret = qtd_QLinearGradient_QLinearGradient_QPointF_QPointF(start, finalStop);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double xStart, double yStart, double xFinalStop, double yFinalStop) {
        void* ret = qtd_QLinearGradient_QLinearGradient_double_double_double_double(xStart, yStart, xFinalStop, yFinalStop);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPointF finalStop() const {
        QPointF res;
        qtd_QLinearGradient_finalStop_const(qtdNativeId, &res);
        return res;
    }

    public final void setFinalStop(const(QPointF) stop) {
        qtd_QLinearGradient_setFinalStop_QPointF(qtdNativeId, stop);
    }

    public final void setFinalStop(double x, double y) {
        qtd_QLinearGradient_setFinalStop_double_double(qtdNativeId, x, y);
    }

    public final void setStart(const(QPointF) start) {
        qtd_QLinearGradient_setStart_QPointF(qtdNativeId, start);
    }

    public final void setStart(double x, double y) {
        qtd_QLinearGradient_setStart_double_double(qtdNativeId, x, y);
    }

    public final QPointF start() const {
        QPointF res;
        qtd_QLinearGradient_start_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QLinearGradient;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QLinearGradient_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QLinearGradient_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QLinearGradient_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QLinearGradient_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QLinearGradient_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QLinearGradient_QTypeInfo_isComplex();
        isStatic = qtd_QLinearGradient_QTypeInfo_isStatic();
        isLarge = qtd_QLinearGradient_QTypeInfo_isLarge();
        isPointer = qtd_QLinearGradient_QTypeInfo_isPointer();
        isDummy = qtd_QLinearGradient_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QLinearGradient_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QLinearGradient_native_copy(const void* orig);
extern (C) void qtd_QLinearGradient_delete(void *ptr);
extern (C) void qtd_QLinearGradient_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QLinearGradient_QLinearGradient();
private extern(C) void* qtd_QLinearGradient_QLinearGradient_QPointF_QPointF(QPointF start0,
 QPointF finalStop1);
private extern(C) void* qtd_QLinearGradient_QLinearGradient_double_double_double_double(double xStart0,
 double yStart1,
 double xFinalStop2,
 double yFinalStop3);
private extern(C) void  qtd_QLinearGradient_finalStop_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QLinearGradient_setFinalStop_QPointF(void* __this_nativeId,
 QPointF stop0);
private extern(C) void  qtd_QLinearGradient_setFinalStop_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void  qtd_QLinearGradient_setStart_QPointF(void* __this_nativeId,
 QPointF start0);
private extern(C) void  qtd_QLinearGradient_setStart_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void  qtd_QLinearGradient_start_const(void* __this_nativeId,
 QPointF * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QLinearGradient() {
    QLinearGradient.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QLinearGradient_QTypeInfo_isComplex();
private extern (C) bool qtd_QLinearGradient_QTypeInfo_isStatic();
private extern (C) bool qtd_QLinearGradient_QTypeInfo_isLarge();
private extern (C) bool qtd_QLinearGradient_QTypeInfo_isPointer();
private extern (C) bool qtd_QLinearGradient_QTypeInfo_isDummy();
