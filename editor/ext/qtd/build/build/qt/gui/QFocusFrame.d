module qt.gui.QFocusFrame;

public import qt.gui.QFocusFrame_aux;
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
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QStyleOption;
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
public import qt.core.QObject;
public import qt.gui.QPaintEvent;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFocusFrame : QWidget
{

Object __rcWidget = null;

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
        void* ret = qtd_QFocusFrame_QFocusFrame_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void initStyleOption(QStyleOption option) const {
        qtd_QFocusFrame_initStyleOption_nativepointerQStyleOption_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final void setWidget(QWidget widget) {
        {
            __rcWidget = cast(Object) widget;
        }
        qtd_QFocusFrame_setWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final QWidget widget() const {
        void *ret = qtd_QFocusFrame_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public bool event(QEvent e) {
        return qtd_QFocusFrame_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QFocusFrame_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QFocusFrame_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFocusFrame_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFocusFrame);
    }

    static QFocusFrame __getObject(void* nativeId) {
        return static_cast!(QFocusFrame)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFocusFrame_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFocusFrame_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFocusFrame(nativeId, initFlags);
        QFocusFrame.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QFocusFrame;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFocusFrame_QFocusFrame_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QFocusFrame_initStyleOption_nativepointerQStyleOption_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QFocusFrame_setWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void*  qtd_QFocusFrame_widget_const(void* __this_nativeId);
private extern(C) bool  qtd_QFocusFrame_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QFocusFrame_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QFocusFrame_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFocusFrame_initCallBacks(void* virtuals);

extern(C) void static_init_QFocusFrame() {
    qtd_QFocusFrame_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFocusFrame_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QFocusFrame) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QFocusFrame_staticMetaObject();

extern(C) void qtd_QFocusFrame_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFocusFrame_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
