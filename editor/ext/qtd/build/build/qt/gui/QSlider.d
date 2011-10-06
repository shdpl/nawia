module qt.gui.QSlider;

public import qt.gui.QSlider_aux;
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
public import qt.core.Qt;
public import qt.gui.QAbstractSlider;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
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


public class QSlider : QAbstractSlider
{
    public enum TickPosition {
        NoTicks = 0,
        TicksAbove = 1,
        TicksLeft = 1,
        TicksBelow = 2,
        TicksRight = 2,
        TicksBothSides = 3
    }

    alias TickPosition.NoTicks NoTicks;
    alias TickPosition.TicksAbove TicksAbove;
    alias TickPosition.TicksLeft TicksLeft;
    alias TickPosition.TicksBelow TicksBelow;
    alias TickPosition.TicksRight TicksRight;
    alias TickPosition.TicksBothSides TicksBothSides;


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
        void* ret = qtd_QSlider_QSlider_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.Orientation orientation, QWidget parent_ = null) {
        void* ret = qtd_QSlider_QSlider_Orientation_QWidget(cast(void*) this, orientation, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void initStyleOption(QStyleOptionSlider option) const {
        qtd_QSlider_initStyleOption_nativepointerQStyleOptionSlider_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final void setTickInterval(int ti) {
        qtd_QSlider_setTickInterval_int(qtdNativeId, ti);
    }

    public final void setTickPosition(QSlider.TickPosition position) {
        qtd_QSlider_setTickPosition_TickPosition(qtdNativeId, position);
    }

    public final int tickInterval() const {
        return qtd_QSlider_tickInterval_const(qtdNativeId);
    }

    public final QSlider.TickPosition tickPosition() const {
        return cast(QSlider.TickPosition) qtd_QSlider_tickPosition_const(qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QSlider_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QSlider_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseMoveEvent(QMouseEvent ev) {
        qtd_QSlider_mouseMoveEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent ev) {
        qtd_QSlider_mousePressEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent ev) {
        qtd_QSlider_mouseReleaseEvent_QMouseEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent ev) {
        qtd_QSlider_paintEvent_QPaintEvent(qtdNativeId, ev is null ? null : ev.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QSlider_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSlider_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSlider);
    }

    static QSlider __getObject(void* nativeId) {
        return static_cast!(QSlider)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSlider_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSlider_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSlider(nativeId, initFlags);
        QSlider.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QSlider;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSlider_QSlider_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSlider_QSlider_Orientation_QWidget(void *d_ptr,
 int orientation0,
 void* parent1);
private extern(C) void  qtd_QSlider_initStyleOption_nativepointerQStyleOptionSlider_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QSlider_setTickInterval_int(void* __this_nativeId,
 int ti0);
private extern(C) void  qtd_QSlider_setTickPosition_TickPosition(void* __this_nativeId,
 int position0);
private extern(C) int  qtd_QSlider_tickInterval_const(void* __this_nativeId);
private extern(C) int  qtd_QSlider_tickPosition_const(void* __this_nativeId);
private extern(C) bool  qtd_QSlider_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QSlider_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QSlider_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QSlider_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QSlider_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QSlider_paintEvent_QPaintEvent(void* __this_nativeId,
 void* ev0);
private extern(C) void  qtd_QSlider_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSlider_initCallBacks(void* virtuals);

extern(C) void static_init_QSlider() {
    qtd_QSlider_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSlider_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QSlider) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QSlider_actionTriggered_handle(void* dId, void** args) {
        auto d_object = cast(QSlider) dId;
        auto action0 = *(cast(int*)args[1]);
        //d_object.actionTriggered_emit(action0);
}*/
/*private extern(C) void qtd_QSlider_rangeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSlider) dId;
        auto min0 = *(cast(int*)args[1]);
        auto max1 = *(cast(int*)args[2]);
        //d_object.rangeChanged_emit(min0, max1);
}*/
/*private extern(C) void qtd_QSlider_sliderMoved_handle(void* dId, void** args) {
        auto d_object = cast(QSlider) dId;
        auto position0 = *(cast(int*)args[1]);
        //d_object.sliderMoved_emit(position0);
}*/
/*private extern(C) void qtd_QSlider_sliderPressed_handle(void* dId, void** args) {
        auto d_object = cast(QSlider) dId;
        //d_object.sliderPressed_emit();
}*/
/*private extern(C) void qtd_QSlider_sliderReleased_handle(void* dId, void** args) {
        auto d_object = cast(QSlider) dId;
        //d_object.sliderReleased_emit();
}*/
/*private extern(C) void qtd_QSlider_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSlider) dId;
        auto value0 = *(cast(int*)args[1]);
        //d_object.valueChanged_emit(value0);
}*/

extern(C) QMetaObjectNative* qtd_QSlider_staticMetaObject();

extern(C) void qtd_QSlider_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSlider_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
