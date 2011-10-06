module qt.gui.QDial;

public import qt.gui.QDial_aux;
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
public import qt.gui.QAbstractSlider;
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QAbstractSlider;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QStyleOptionSlider;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDial : QAbstractSlider
{

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

    public this(QWidget parent_ = null) {
        void* ret = qtd_QDial_QDial_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void initStyleOption(QStyleOptionSlider option) const {
        qtd_QDial_initStyleOption_nativepointerQStyleOptionSlider_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final int notchSize() const {
        return qtd_QDial_notchSize_const(qtdNativeId);
    }

    public final double notchTarget() const {
        return qtd_QDial_notchTarget_const(qtdNativeId);
    }

    public final bool notchesVisible() const {
        return qtd_QDial_notchesVisible_const(qtdNativeId);
    }

    public final void setNotchTarget(double target) {
        qtd_QDial_setNotchTarget_double(qtdNativeId, target);
    }

    public final void setNotchesVisible(bool visible) {
        qtd_QDial_setNotchesVisible_bool(qtdNativeId, visible);
    }

    public final void setWrapping(bool on) {
        qtd_QDial_setWrapping_bool(qtdNativeId, on);
    }

    public final bool wrapping() const {
        return qtd_QDial_wrapping_const(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QDial_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QDial_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseMoveEvent(QMouseEvent me) {
        qtd_QDial_mouseMoveEvent_QMouseEvent(qtdNativeId, me is null ? null : me.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent me) {
        qtd_QDial_mousePressEvent_QMouseEvent(qtdNativeId, me is null ? null : me.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent me) {
        qtd_QDial_mouseReleaseEvent_QMouseEvent(qtdNativeId, me is null ? null : me.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent pe) {
        qtd_QDial_paintEvent_QPaintEvent(qtdNativeId, pe is null ? null : pe.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent re) {
        qtd_QDial_resizeEvent_QResizeEvent(qtdNativeId, re is null ? null : re.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QDial_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void sliderChange(QAbstractSlider.SliderChange change) {
        qtd_QDial_sliderChange_SliderChange(qtdNativeId, change);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setNotchesVisible(bool)", 
            "setWrapping(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDial_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDial);
    }

    static QDial __getObject(void* nativeId) {
        return static_cast!(QDial)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDial_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDial_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDial(nativeId, initFlags);
        QDial.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setNotchesVisible"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setWrapping"), index));

    }

    public alias void __isQtType_QDial;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDial_QDial_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QDial_initStyleOption_nativepointerQStyleOptionSlider_const(void* __this_nativeId,
 void* option0);
private extern(C) int  qtd_QDial_notchSize_const(void* __this_nativeId);
private extern(C) double  qtd_QDial_notchTarget_const(void* __this_nativeId);
private extern(C) bool  qtd_QDial_notchesVisible_const(void* __this_nativeId);
private extern(C) void  qtd_QDial_setNotchTarget_double(void* __this_nativeId,
 double target0);
private extern(C) void  qtd_QDial_setNotchesVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QDial_setWrapping_bool(void* __this_nativeId,
 bool on0);
private extern(C) bool  qtd_QDial_wrapping_const(void* __this_nativeId);
private extern(C) bool  qtd_QDial_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QDial_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QDial_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* me0);
private extern(C) void  qtd_QDial_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* me0);
private extern(C) void  qtd_QDial_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* me0);
private extern(C) void  qtd_QDial_paintEvent_QPaintEvent(void* __this_nativeId,
 void* pe0);
private extern(C) void  qtd_QDial_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* re0);
private extern(C) void  qtd_QDial_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QDial_sliderChange_SliderChange(void* __this_nativeId,
 int change0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDial_initCallBacks(void* virtuals);

extern(C) void static_init_QDial() {
    qtd_QDial_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QDial_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDial) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QDial_actionTriggered_handle(void* dId, void** args) {
        auto d_object = cast(QDial) dId;
        auto action0 = *(cast(int*)args[1]);
        //d_object.actionTriggered_emit(action0);
}*/
/*private extern(C) void qtd_QDial_rangeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDial) dId;
        auto min0 = *(cast(int*)args[1]);
        auto max1 = *(cast(int*)args[2]);
        //d_object.rangeChanged_emit(min0, max1);
}*/
/*private extern(C) void qtd_QDial_sliderMoved_handle(void* dId, void** args) {
        auto d_object = cast(QDial) dId;
        auto position0 = *(cast(int*)args[1]);
        //d_object.sliderMoved_emit(position0);
}*/
/*private extern(C) void qtd_QDial_sliderPressed_handle(void* dId, void** args) {
        auto d_object = cast(QDial) dId;
        //d_object.sliderPressed_emit();
}*/
/*private extern(C) void qtd_QDial_sliderReleased_handle(void* dId, void** args) {
        auto d_object = cast(QDial) dId;
        //d_object.sliderReleased_emit();
}*/
/*private extern(C) void qtd_QDial_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDial) dId;
        auto value0 = *(cast(int*)args[1]);
        //d_object.valueChanged_emit(value0);
}*/

extern(C) QMetaObjectNative* qtd_QDial_staticMetaObject();

extern(C) void qtd_QDial_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDial_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
