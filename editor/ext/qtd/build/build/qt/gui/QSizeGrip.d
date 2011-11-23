module qt.gui.QSizeGrip;

public import qt.gui.QSizeGrip_aux;
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
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
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
public import qt.core.QObject;
public import qt.gui.QPaintEvent;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSizeGrip : QWidget
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

    public this(QWidget parent_) {
        void* ret = qtd_QSizeGrip_QSizeGrip_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public bool event(QEvent arg__1) {
        return qtd_QSizeGrip_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QSizeGrip_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected void hideEvent(QHideEvent hideEvent) {
        qtd_QSizeGrip_hideEvent_QHideEvent(qtdNativeId, hideEvent is null ? null : hideEvent.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QSizeGrip_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QSizeGrip_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent mouseEvent) {
        qtd_QSizeGrip_mouseReleaseEvent_QMouseEvent(qtdNativeId, mouseEvent is null ? null : mouseEvent.qtdNativeId);
    }

    protected void moveEvent(QMoveEvent moveEvent) {
        qtd_QSizeGrip_moveEvent_QMoveEvent(qtdNativeId, moveEvent is null ? null : moveEvent.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QSizeGrip_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void setVisible(bool arg__1) {
        qtd_QSizeGrip_setVisible_bool(qtdNativeId, arg__1);
    }

    protected void showEvent(QShowEvent showEvent) {
        qtd_QSizeGrip_showEvent_QShowEvent(qtdNativeId, showEvent is null ? null : showEvent.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QSizeGrip_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSizeGrip_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSizeGrip);
    }

    static QSizeGrip __getObject(void* nativeId) {
        return static_cast!(QSizeGrip)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSizeGrip_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSizeGrip_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSizeGrip(nativeId, initFlags);
        QSizeGrip.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QSizeGrip;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSizeGrip_QSizeGrip_QWidget(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QSizeGrip_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QSizeGrip_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QSizeGrip_hideEvent_QHideEvent(void* __this_nativeId,
 void* hideEvent0);
private extern(C) void  qtd_QSizeGrip_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSizeGrip_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSizeGrip_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* mouseEvent0);
private extern(C) void  qtd_QSizeGrip_moveEvent_QMoveEvent(void* __this_nativeId,
 void* moveEvent0);
private extern(C) void  qtd_QSizeGrip_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSizeGrip_setVisible_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QSizeGrip_showEvent_QShowEvent(void* __this_nativeId,
 void* showEvent0);
private extern(C) void  qtd_QSizeGrip_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSizeGrip_initCallBacks(void* virtuals);

extern(C) void static_init_QSizeGrip() {
    qtd_QSizeGrip_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSizeGrip_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QSizeGrip) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QSizeGrip_staticMetaObject();

extern(C) void qtd_QSizeGrip_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSizeGrip_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
