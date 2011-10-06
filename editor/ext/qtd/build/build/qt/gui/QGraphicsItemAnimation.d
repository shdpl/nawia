module qt.gui.QGraphicsItemAnimation;

public import qt.gui.QGraphicsItemAnimation_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.gui.QGraphicsItem;
public import qt.core.QObject;
public import qt.gui.QMatrix;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QPointF;
public import qt.core.QChildEvent;
public import qt.core.QTimeLine;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsItemAnimation : QObject
{

Object __rcTimeLine = null;

Object __rcItem = null;

    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QGraphicsItemAnimation_QGraphicsItemAnimation_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clear() {
        qtd_QGraphicsItemAnimation_clear(qtdNativeId);
    }

    public final double horizontalScaleAt(double step) const {
        return qtd_QGraphicsItemAnimation_horizontalScaleAt_double_const(qtdNativeId, step);
    }

    public final double horizontalShearAt(double step) const {
        return qtd_QGraphicsItemAnimation_horizontalShearAt_double_const(qtdNativeId, step);
    }

    public final IQGraphicsItem item() const {
        void* ret = qtd_QGraphicsItemAnimation_item_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QMatrix matrixAt(double step) const {
        void* ret = qtd_QGraphicsItemAnimation_matrixAt_double_const(qtdNativeId, step);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final QPointF posAt(double step) const {
        QPointF res;
        qtd_QGraphicsItemAnimation_posAt_double_const(qtdNativeId, &res, step);
        return res;
    }

    public final void reset() {
        qtd_QGraphicsItemAnimation_reset(qtdNativeId);
    }

    public final double rotationAt(double step) const {
        return qtd_QGraphicsItemAnimation_rotationAt_double_const(qtdNativeId, step);
    }

    public final void setItem(IQGraphicsItem item) {
        {
            __rcItem = cast(Object) item;
        }
        qtd_QGraphicsItemAnimation_setItem_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void setPosAt(double step, const(QPointF) pos) {
        qtd_QGraphicsItemAnimation_setPosAt_double_QPointF(qtdNativeId, step, pos);
    }

    public final void setRotationAt(double step, double angle) {
        qtd_QGraphicsItemAnimation_setRotationAt_double_double(qtdNativeId, step, angle);
    }

    public final void setScaleAt(double step, double sx, double sy) {
        qtd_QGraphicsItemAnimation_setScaleAt_double_double_double(qtdNativeId, step, sx, sy);
    }

    public final void setShearAt(double step, double sh, double sv) {
        qtd_QGraphicsItemAnimation_setShearAt_double_double_double(qtdNativeId, step, sh, sv);
    }

    public final void setStep(double x) {
        qtd_QGraphicsItemAnimation_setStep_double(qtdNativeId, x);
    }

    public final void setTimeLine(QTimeLine timeLine) {
        {
            __rcTimeLine = cast(Object) timeLine;
        }
        qtd_QGraphicsItemAnimation_setTimeLine_QTimeLine(qtdNativeId, timeLine is null ? null : timeLine.qtdNativeId);
    }

    public final void setTranslationAt(double step, double dx, double dy) {
        qtd_QGraphicsItemAnimation_setTranslationAt_double_double_double(qtdNativeId, step, dx, dy);
    }

    public final QTimeLine timeLine() const {
        void *ret = qtd_QGraphicsItemAnimation_timeLine_const(qtdNativeId);
        QTimeLine __d_return_value = QTimeLine.__getObject(ret);
        return __d_return_value;
    }

    public final double verticalScaleAt(double step) const {
        return qtd_QGraphicsItemAnimation_verticalScaleAt_double_const(qtdNativeId, step);
    }

    public final double verticalShearAt(double step) const {
        return qtd_QGraphicsItemAnimation_verticalShearAt_double_const(qtdNativeId, step);
    }

    public final double xTranslationAt(double step) const {
        return qtd_QGraphicsItemAnimation_xTranslationAt_double_const(qtdNativeId, step);
    }

    public final double yTranslationAt(double step) const {
        return qtd_QGraphicsItemAnimation_yTranslationAt_double_const(qtdNativeId, step);
    }

    protected void afterAnimationStep(double step) {
        qtd_QGraphicsItemAnimation_afterAnimationStep_double(qtdNativeId, step);
    }

    protected void beforeAnimationStep(double step) {
        qtd_QGraphicsItemAnimation_beforeAnimationStep_double(qtdNativeId, step);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "reset()", 
            "setStep(double)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsItemAnimation_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsItemAnimation);
    }

    static QGraphicsItemAnimation __getObject(void* nativeId) {
        return static_cast!(QGraphicsItemAnimation)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsItemAnimation_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsItemAnimation_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsItemAnimation(nativeId, initFlags);
        QGraphicsItemAnimation.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("reset"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(double)("setStep"), index));

    }

    public alias void __isQtType_QGraphicsItemAnimation;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsItemAnimation_QGraphicsItemAnimation_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QGraphicsItemAnimation_clear(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsItemAnimation_horizontalScaleAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) double  qtd_QGraphicsItemAnimation_horizontalShearAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) void*  qtd_QGraphicsItemAnimation_item_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItemAnimation_matrixAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) void  qtd_QGraphicsItemAnimation_posAt_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double step0);
private extern(C) void  qtd_QGraphicsItemAnimation_reset(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsItemAnimation_rotationAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) void  qtd_QGraphicsItemAnimation_setItem_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsItemAnimation_setPosAt_double_QPointF(void* __this_nativeId,
 double step0,
 QPointF pos1);
private extern(C) void  qtd_QGraphicsItemAnimation_setRotationAt_double_double(void* __this_nativeId,
 double step0,
 double angle1);
private extern(C) void  qtd_QGraphicsItemAnimation_setScaleAt_double_double_double(void* __this_nativeId,
 double step0,
 double sx1,
 double sy2);
private extern(C) void  qtd_QGraphicsItemAnimation_setShearAt_double_double_double(void* __this_nativeId,
 double step0,
 double sh1,
 double sv2);
private extern(C) void  qtd_QGraphicsItemAnimation_setStep_double(void* __this_nativeId,
 double x0);
private extern(C) void  qtd_QGraphicsItemAnimation_setTimeLine_QTimeLine(void* __this_nativeId,
 void* timeLine0);
private extern(C) void  qtd_QGraphicsItemAnimation_setTranslationAt_double_double_double(void* __this_nativeId,
 double step0,
 double dx1,
 double dy2);
private extern(C) void*  qtd_QGraphicsItemAnimation_timeLine_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsItemAnimation_verticalScaleAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) double  qtd_QGraphicsItemAnimation_verticalShearAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) double  qtd_QGraphicsItemAnimation_xTranslationAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) double  qtd_QGraphicsItemAnimation_yTranslationAt_double_const(void* __this_nativeId,
 double step0);
private extern(C) void  qtd_QGraphicsItemAnimation_afterAnimationStep_double(void* __this_nativeId,
 double step0);
private extern(C) void  qtd_QGraphicsItemAnimation_beforeAnimationStep_double(void* __this_nativeId,
 double step0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, double step0) qtd_QGraphicsItemAnimation_afterAnimationStep_double_dispatch; }
extern(C) void qtd_export_QGraphicsItemAnimation_afterAnimationStep_double_dispatch(void *dId, double step0){
    auto d_object = cast(QGraphicsItemAnimation) dId;
    d_object.afterAnimationStep(step0);
}

extern(C){ extern void function(void *dId, double step0) qtd_QGraphicsItemAnimation_beforeAnimationStep_double_dispatch; }
extern(C) void qtd_export_QGraphicsItemAnimation_beforeAnimationStep_double_dispatch(void *dId, double step0){
    auto d_object = cast(QGraphicsItemAnimation) dId;
    d_object.beforeAnimationStep(step0);
}

private extern (C) void qtd_QGraphicsItemAnimation_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsItemAnimation() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QGraphicsItemAnimation_afterAnimationStep_double_dispatch;
    virt_arr[1] = &qtd_export_QGraphicsItemAnimation_beforeAnimationStep_double_dispatch;
    qtd_QGraphicsItemAnimation_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QGraphicsItemAnimation_staticMetaObject();

extern(C) void qtd_QGraphicsItemAnimation_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsItemAnimation_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
