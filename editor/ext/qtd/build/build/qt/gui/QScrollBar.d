module qt.gui.QScrollBar;

public import qt.gui.QScrollBar_aux;
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


public class QScrollBar : QAbstractSlider
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
        void* ret = qtd_QScrollBar_QScrollBar_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.Orientation arg__1, QWidget parent_ = null) {
        void* ret = qtd_QScrollBar_QScrollBar_Orientation_QWidget(cast(void*) this, arg__1, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void initStyleOption(QStyleOptionSlider option) const {
        qtd_QScrollBar_initStyleOption_nativepointerQStyleOptionSlider_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent arg__1) {
        qtd_QScrollBar_contextMenuEvent_QContextMenuEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QScrollBar_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void hideEvent(QHideEvent arg__1) {
        qtd_QScrollBar_hideEvent_QHideEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QScrollBar_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QScrollBar_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QScrollBar_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QScrollBar_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QScrollBar_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void sliderChange(QAbstractSlider.SliderChange change) {
        qtd_QScrollBar_sliderChange_SliderChange(qtdNativeId, change);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QScrollBar_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QScrollBar);
    }

    static QScrollBar __getObject(void* nativeId) {
        return static_cast!(QScrollBar)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QScrollBar_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QScrollBar_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QScrollBar(nativeId, initFlags);
        QScrollBar.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QScrollBar;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QScrollBar_QScrollBar_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QScrollBar_QScrollBar_Orientation_QWidget(void *d_ptr,
 int arg__1,
 void* parent1);
private extern(C) void  qtd_QScrollBar_initStyleOption_nativepointerQStyleOptionSlider_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QScrollBar_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QScrollBar_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QScrollBar_hideEvent_QHideEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QScrollBar_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QScrollBar_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QScrollBar_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QScrollBar_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QScrollBar_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QScrollBar_sliderChange_SliderChange(void* __this_nativeId,
 int change0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QScrollBar_initCallBacks(void* virtuals);

extern(C) void static_init_QScrollBar() {
    qtd_QScrollBar_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QScrollBar_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QScrollBar) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QScrollBar_actionTriggered_handle(void* dId, void** args) {
        auto d_object = cast(QScrollBar) dId;
        auto action0 = *(cast(int*)args[1]);
        //d_object.actionTriggered_emit(action0);
}*/
/*private extern(C) void qtd_QScrollBar_rangeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QScrollBar) dId;
        auto min0 = *(cast(int*)args[1]);
        auto max1 = *(cast(int*)args[2]);
        //d_object.rangeChanged_emit(min0, max1);
}*/
/*private extern(C) void qtd_QScrollBar_sliderMoved_handle(void* dId, void** args) {
        auto d_object = cast(QScrollBar) dId;
        auto position0 = *(cast(int*)args[1]);
        //d_object.sliderMoved_emit(position0);
}*/
/*private extern(C) void qtd_QScrollBar_sliderPressed_handle(void* dId, void** args) {
        auto d_object = cast(QScrollBar) dId;
        //d_object.sliderPressed_emit();
}*/
/*private extern(C) void qtd_QScrollBar_sliderReleased_handle(void* dId, void** args) {
        auto d_object = cast(QScrollBar) dId;
        //d_object.sliderReleased_emit();
}*/
/*private extern(C) void qtd_QScrollBar_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QScrollBar) dId;
        auto value0 = *(cast(int*)args[1]);
        //d_object.valueChanged_emit(value0);
}*/

extern(C) QMetaObjectNative* qtd_QScrollBar_staticMetaObject();

extern(C) void qtd_QScrollBar_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QScrollBar_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
