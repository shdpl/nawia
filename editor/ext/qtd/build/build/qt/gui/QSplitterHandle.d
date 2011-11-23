module qt.gui.QSplitterHandle;

public import qt.gui.QSplitterHandle_aux;
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
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QSplitter;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSplitterHandle : QWidget
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

    public this(Qt.Orientation o, QSplitter parent_) {
        void* ret = qtd_QSplitterHandle_QSplitterHandle_Orientation_QSplitter(cast(void*) this, o, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final int closestLegalPosition(int p) {
        return qtd_QSplitterHandle_closestLegalPosition_int(qtdNativeId, p);
    }

    protected final void moveSplitter(int p) {
        qtd_QSplitterHandle_moveSplitter_int(qtdNativeId, p);
    }

    public final bool opaqueResize() const {
        return qtd_QSplitterHandle_opaqueResize_const(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QSplitterHandle_orientation_const(qtdNativeId);
    }

    public final void setOrientation(Qt.Orientation o) {
        qtd_QSplitterHandle_setOrientation_Orientation(qtdNativeId, o);
    }

    public final QSplitter splitter() const {
        void *ret = qtd_QSplitterHandle_splitter_const(qtdNativeId);
        QSplitter __d_return_value = QSplitter.__getObject(ret);
        return __d_return_value;
    }

    public bool event(QEvent arg__1) {
        return qtd_QSplitterHandle_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QSplitterHandle_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QSplitterHandle_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QSplitterHandle_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QSplitterHandle_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QSplitterHandle_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QSplitterHandle_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSplitterHandle_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSplitterHandle);
    }

    static QSplitterHandle __getObject(void* nativeId) {
        return static_cast!(QSplitterHandle)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSplitterHandle_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSplitterHandle_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSplitterHandle(nativeId, initFlags);
        QSplitterHandle.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QSplitterHandle;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSplitterHandle_QSplitterHandle_Orientation_QSplitter(void *d_ptr,
 int o0,
 void* parent1);
private extern(C) int  qtd_QSplitterHandle_closestLegalPosition_int(void* __this_nativeId,
 int p0);
private extern(C) void  qtd_QSplitterHandle_moveSplitter_int(void* __this_nativeId,
 int p0);
private extern(C) bool  qtd_QSplitterHandle_opaqueResize_const(void* __this_nativeId);
private extern(C) int  qtd_QSplitterHandle_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QSplitterHandle_setOrientation_Orientation(void* __this_nativeId,
 int o0);
private extern(C) void*  qtd_QSplitterHandle_splitter_const(void* __this_nativeId);
private extern(C) bool  qtd_QSplitterHandle_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitterHandle_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitterHandle_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitterHandle_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitterHandle_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitterHandle_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitterHandle_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSplitterHandle_initCallBacks(void* virtuals);

extern(C) void static_init_QSplitterHandle() {
    qtd_QSplitterHandle_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSplitterHandle_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QSplitterHandle) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QSplitterHandle_staticMetaObject();

extern(C) void qtd_QSplitterHandle_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSplitterHandle_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
