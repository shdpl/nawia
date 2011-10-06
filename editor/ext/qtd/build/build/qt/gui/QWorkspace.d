module qt.gui.QWorkspace;

public import qt.gui.QWorkspace_aux;
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
public import qt.gui.QWheelEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QBrush;
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


public class QWorkspace : QWidget
{
    public enum WindowOrder {
        CreationOrder = 0,
        StackingOrder = 1
    }

    alias WindowOrder.CreationOrder CreationOrder;
    alias WindowOrder.StackingOrder StackingOrder;


    private static const string[] __signalSignatures = [
            "windowActivated(QWidget*)"    ];

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

    protected final void windowActivated(QWidget w) {
        qtd_QWorkspace_windowActivated_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QWorkspace_QWorkspace_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void activateNextWindow() {
        qtd_QWorkspace_activateNextWindow(qtdNativeId);
    }

    public final void activatePreviousWindow() {
        qtd_QWorkspace_activatePreviousWindow(qtdNativeId);
    }

    public final QWidget activeWindow() const {
        void *ret = qtd_QWorkspace_activeWindow_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget addWindow(QWidget w, int flags = 0) {
        void *ret = qtd_QWorkspace_addWindow_QWidget_WindowFlags(qtdNativeId, w is null ? null : w.qtdNativeId, flags);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void arrangeIcons() {
        qtd_QWorkspace_arrangeIcons(qtdNativeId);
    }

    public final QBrush background() const {
        void* ret = qtd_QWorkspace_background_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final void cascade() {
        qtd_QWorkspace_cascade(qtdNativeId);
    }

    public final void closeActiveWindow() {
        qtd_QWorkspace_closeActiveWindow(qtdNativeId);
    }

    public final void closeAllWindows() {
        qtd_QWorkspace_closeAllWindows(qtdNativeId);
    }

    public final bool scrollBarsEnabled() const {
        return qtd_QWorkspace_scrollBarsEnabled_const(qtdNativeId);
    }

    public final void setActiveWindow(QWidget w) {
        qtd_QWorkspace_setActiveWindow_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void setBackground(const(QBrush) background) {
        qtd_QWorkspace_setBackground_QBrush(qtdNativeId, background is null ? null : (cast(QBrush)background).qtdNativeId);
    }

    public final void setScrollBarsEnabled(bool enable) {
        qtd_QWorkspace_setScrollBarsEnabled_bool(qtdNativeId, enable);
    }

    public final void tile() {
        qtd_QWorkspace_tile(qtdNativeId);
    }

    public final QList!(QWidget) windowList(QWorkspace.WindowOrder order = QWorkspace.WindowOrder.CreationOrder) const {
        auto res = QList!(QWidget).opCall();
        qtd_QWorkspace_windowList_WindowOrder_const(qtdNativeId, &res, order);
        return res;
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QWorkspace_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void childEvent(QChildEvent arg__1) {
        qtd_QWorkspace_childEvent_QChildEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QWorkspace_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QWorkspace_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected void hideEvent(QHideEvent e) {
        qtd_QWorkspace_hideEvent_QHideEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent e) {
        qtd_QWorkspace_paintEvent_QPaintEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QWorkspace_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void showEvent(QShowEvent e) {
        qtd_QWorkspace_showEvent_QShowEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QWorkspace_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void wheelEvent(QWheelEvent e) {
        qtd_QWorkspace_wheelEvent_QWheelEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "activateNextWindow()", 
            "activatePreviousWindow()", 
            "arrangeIcons()", 
            "cascade()", 
            "closeActiveWindow()", 
            "closeAllWindows()", 
            "setActiveWindow(QWidget*)", 
            "tile()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWorkspace_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWorkspace);
    }

    static QWorkspace __getObject(void* nativeId) {
        return static_cast!(QWorkspace)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWorkspace_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWorkspace_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWorkspace(nativeId, initFlags);
        QWorkspace.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QWidget)("windowActivated"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("activateNextWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("activatePreviousWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("arrangeIcons"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("cascade"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("closeActiveWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("closeAllWindows"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setActiveWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!()("tile"), index));

    }

    public alias void __isQtType_QWorkspace;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QWorkspace_windowActivated_QWidget(void* __this_nativeId,
 void* w0);

// C wrappers
private extern(C) void* qtd_QWorkspace_QWorkspace_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QWorkspace_activateNextWindow(void* __this_nativeId);
private extern(C) void  qtd_QWorkspace_activatePreviousWindow(void* __this_nativeId);
private extern(C) void*  qtd_QWorkspace_activeWindow_const(void* __this_nativeId);
private extern(C) void*  qtd_QWorkspace_addWindow_QWidget_WindowFlags(void* __this_nativeId,
 void* w0,
 int flags1);
private extern(C) void  qtd_QWorkspace_arrangeIcons(void* __this_nativeId);
private extern(C) void*  qtd_QWorkspace_background_const(void* __this_nativeId);
private extern(C) void  qtd_QWorkspace_cascade(void* __this_nativeId);
private extern(C) void  qtd_QWorkspace_closeActiveWindow(void* __this_nativeId);
private extern(C) void  qtd_QWorkspace_closeAllWindows(void* __this_nativeId);
private extern(C) bool  qtd_QWorkspace_scrollBarsEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QWorkspace_setActiveWindow_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QWorkspace_setBackground_QBrush(void* __this_nativeId,
 void* background0);
private extern(C) void  qtd_QWorkspace_setScrollBarsEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QWorkspace_tile(void* __this_nativeId);
private extern(C) void  qtd_QWorkspace_windowList_WindowOrder_const(void* __this_nativeId,
 void* __d_return_value,
 int order0);
private extern(C) void  qtd_QWorkspace_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWorkspace_childEvent_QChildEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWorkspace_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QWorkspace_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QWorkspace_hideEvent_QHideEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QWorkspace_paintEvent_QPaintEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QWorkspace_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QWorkspace_showEvent_QShowEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QWorkspace_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QWorkspace_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QWorkspace_initCallBacks(void* virtuals);

extern(C) void static_init_QWorkspace() {
    qtd_QWorkspace_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QWorkspace_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QWorkspace) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QWorkspace_windowActivated_handle(void* dId, void** args) {
        auto d_object = cast(QWorkspace) dId;
        scope w0 = new QWidget(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.windowActivated_emit(w0);
}*/

extern(C) QMetaObjectNative* qtd_QWorkspace_staticMetaObject();

extern(C) void qtd_QWorkspace_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWorkspace_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
