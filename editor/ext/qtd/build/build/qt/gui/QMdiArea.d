module qt.gui.QMdiArea;

public import qt.gui.QMdiArea_aux;
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
public import qt.gui.QTabWidget;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.core.QList;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QBrush;
public import qt.gui.QAbstractScrollArea;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QMdiSubWindow;
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


public class QMdiArea : QAbstractScrollArea
{
    public enum WindowOrder {
        CreationOrder = 0,
        StackingOrder = 1,
        ActivationHistoryOrder = 2
    }

    alias WindowOrder.CreationOrder CreationOrder;
    alias WindowOrder.StackingOrder StackingOrder;
    alias WindowOrder.ActivationHistoryOrder ActivationHistoryOrder;

    public enum ViewMode {
        SubWindowView = 0,
        TabbedView = 1
    }

    alias ViewMode.SubWindowView SubWindowView;
    alias ViewMode.TabbedView TabbedView;

    public enum AreaOption {
        DontMaximizeSubWindowOnActivation = 1
    }

    alias AreaOption.DontMaximizeSubWindowOnActivation DontMaximizeSubWindowOnActivation;


    private static const string[] __signalSignatures = [
            "subWindowActivated(QMdiSubWindow*)"    ];

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

    protected final void subWindowActivated(QMdiSubWindow arg__1) {
        qtd_QMdiArea_subWindowActivated_QMdiSubWindow(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QMdiArea_QMdiArea_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void activateNextSubWindow() {
        qtd_QMdiArea_activateNextSubWindow(qtdNativeId);
    }

    public final void activatePreviousSubWindow() {
        qtd_QMdiArea_activatePreviousSubWindow(qtdNativeId);
    }

    public final QMdiArea.WindowOrder activationOrder() const {
        return cast(QMdiArea.WindowOrder) qtd_QMdiArea_activationOrder_const(qtdNativeId);
    }

    public final QMdiSubWindow activeSubWindow() const {
        void *ret = qtd_QMdiArea_activeSubWindow_const(qtdNativeId);
        QMdiSubWindow __d_return_value = QMdiSubWindow.__getObject(ret);
        return __d_return_value;
    }

    public final QMdiSubWindow addSubWindow(QWidget widget, int flags = 0) {
        void *ret = qtd_QMdiArea_addSubWindow_QWidget_WindowFlags(qtdNativeId, widget is null ? null : widget.qtdNativeId, flags);
        QMdiSubWindow __d_return_value = QMdiSubWindow.__getObject(ret);
        return __d_return_value;
    }

    public final QBrush background() const {
        void* ret = qtd_QMdiArea_background_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final void cascadeSubWindows() {
        qtd_QMdiArea_cascadeSubWindows(qtdNativeId);
    }

    public final void closeActiveSubWindow() {
        qtd_QMdiArea_closeActiveSubWindow(qtdNativeId);
    }

    public final void closeAllSubWindows() {
        qtd_QMdiArea_closeAllSubWindows(qtdNativeId);
    }

    public final QMdiSubWindow currentSubWindow() const {
        void *ret = qtd_QMdiArea_currentSubWindow_const(qtdNativeId);
        QMdiSubWindow __d_return_value = QMdiSubWindow.__getObject(ret);
        return __d_return_value;
    }

    public final bool documentMode() const {
        return qtd_QMdiArea_documentMode_const(qtdNativeId);
    }

    public final void removeSubWindow(QWidget widget) {
        qtd_QMdiArea_removeSubWindow_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setActivationOrder(QMdiArea.WindowOrder order) {
        qtd_QMdiArea_setActivationOrder_WindowOrder(qtdNativeId, order);
    }

    public final void setActiveSubWindow(QMdiSubWindow window) {
        qtd_QMdiArea_setActiveSubWindow_QMdiSubWindow(qtdNativeId, window is null ? null : window.qtdNativeId);
    }

    public final void setBackground(const(QBrush) background) {
        qtd_QMdiArea_setBackground_QBrush(qtdNativeId, background is null ? null : (cast(QBrush)background).qtdNativeId);
    }

    public final void setDocumentMode(bool enabled) {
        qtd_QMdiArea_setDocumentMode_bool(qtdNativeId, enabled);
    }

    public final void setOption(QMdiArea.AreaOption option, bool on = true) {
        qtd_QMdiArea_setOption_AreaOption_bool(qtdNativeId, option, on);
    }

    public final void setTabPosition(QTabWidget.TabPosition position) {
        qtd_QMdiArea_setTabPosition_TabPosition(qtdNativeId, position);
    }

    public final void setTabShape(QTabWidget.TabShape shape) {
        qtd_QMdiArea_setTabShape_TabShape(qtdNativeId, shape);
    }

    public final void setViewMode(QMdiArea.ViewMode mode) {
        qtd_QMdiArea_setViewMode_ViewMode(qtdNativeId, mode);
    }

    protected final void setupViewport(QWidget viewport) {
        qtd_QMdiArea_setupViewport_QWidget(qtdNativeId, viewport is null ? null : viewport.qtdNativeId);
    }

    public final QList!(QMdiSubWindow) subWindowList(QMdiArea.WindowOrder order = QMdiArea.WindowOrder.CreationOrder) const {
        auto res = QList!(QMdiSubWindow).opCall();
        qtd_QMdiArea_subWindowList_WindowOrder_const(qtdNativeId, &res, order);
        return res;
    }

    public final QTabWidget.TabPosition tabPosition() const {
        return cast(QTabWidget.TabPosition) qtd_QMdiArea_tabPosition_const(qtdNativeId);
    }

    public final QTabWidget.TabShape tabShape() const {
        return cast(QTabWidget.TabShape) qtd_QMdiArea_tabShape_const(qtdNativeId);
    }

    public final bool testOption(QMdiArea.AreaOption opton) const {
        return qtd_QMdiArea_testOption_AreaOption_const(qtdNativeId, opton);
    }

    public final void tileSubWindows() {
        qtd_QMdiArea_tileSubWindows(qtdNativeId);
    }

    public final QMdiArea.ViewMode viewMode() const {
        return cast(QMdiArea.ViewMode) qtd_QMdiArea_viewMode_const(qtdNativeId);
    }

    protected void childEvent(QChildEvent childEvent) {
        qtd_QMdiArea_childEvent_QChildEvent(qtdNativeId, childEvent is null ? null : childEvent.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QMdiArea_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool eventFilter(QObject object, QEvent event) {
        return qtd_QMdiArea_eventFilter_QObject_QEvent(qtdNativeId, object is null ? null : object.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QMdiArea_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void paintEvent(QPaintEvent paintEvent) {
        qtd_QMdiArea_paintEvent_QPaintEvent(qtdNativeId, paintEvent is null ? null : paintEvent.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent resizeEvent) {
        qtd_QMdiArea_resizeEvent_QResizeEvent(qtdNativeId, resizeEvent is null ? null : resizeEvent.qtdNativeId);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QMdiArea_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    protected void showEvent(QShowEvent showEvent) {
        qtd_QMdiArea_showEvent_QShowEvent(qtdNativeId, showEvent is null ? null : showEvent.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QMdiArea_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void timerEvent(QTimerEvent timerEvent) {
        qtd_QMdiArea_timerEvent_QTimerEvent(qtdNativeId, timerEvent is null ? null : timerEvent.qtdNativeId);
    }

    protected bool viewportEvent(QEvent event) {
        return qtd_QMdiArea_viewportEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "activateNextSubWindow()", 
            "activatePreviousSubWindow()", 
            "cascadeSubWindows()", 
            "closeActiveSubWindow()", 
            "closeAllSubWindows()", 
            "setActiveSubWindow(QMdiSubWindow*)", 
            "setupViewport(QWidget*)", 
            "tileSubWindows()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMdiArea_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMdiArea);
    }

    static QMdiArea __getObject(void* nativeId) {
        return static_cast!(QMdiArea)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMdiArea_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMdiArea_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMdiArea(nativeId, initFlags);
        QMdiArea.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QMdiSubWindow)("subWindowActivated"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("activateNextSubWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("activatePreviousSubWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("cascadeSubWindows"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("closeActiveSubWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("closeAllSubWindows"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(QMdiSubWindow)("setActiveSubWindow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setupViewport"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!()("tileSubWindows"), index));

    }

    public alias void __isQtType_QMdiArea;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QMdiArea_subWindowActivated_QMdiSubWindow(void* __this_nativeId,
 void* arg__1);

// C wrappers
private extern(C) void* qtd_QMdiArea_QMdiArea_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QMdiArea_activateNextSubWindow(void* __this_nativeId);
private extern(C) void  qtd_QMdiArea_activatePreviousSubWindow(void* __this_nativeId);
private extern(C) int  qtd_QMdiArea_activationOrder_const(void* __this_nativeId);
private extern(C) void*  qtd_QMdiArea_activeSubWindow_const(void* __this_nativeId);
private extern(C) void*  qtd_QMdiArea_addSubWindow_QWidget_WindowFlags(void* __this_nativeId,
 void* widget0,
 int flags1);
private extern(C) void*  qtd_QMdiArea_background_const(void* __this_nativeId);
private extern(C) void  qtd_QMdiArea_cascadeSubWindows(void* __this_nativeId);
private extern(C) void  qtd_QMdiArea_closeActiveSubWindow(void* __this_nativeId);
private extern(C) void  qtd_QMdiArea_closeAllSubWindows(void* __this_nativeId);
private extern(C) void*  qtd_QMdiArea_currentSubWindow_const(void* __this_nativeId);
private extern(C) bool  qtd_QMdiArea_documentMode_const(void* __this_nativeId);
private extern(C) void  qtd_QMdiArea_removeSubWindow_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QMdiArea_setActivationOrder_WindowOrder(void* __this_nativeId,
 int order0);
private extern(C) void  qtd_QMdiArea_setActiveSubWindow_QMdiSubWindow(void* __this_nativeId,
 void* window0);
private extern(C) void  qtd_QMdiArea_setBackground_QBrush(void* __this_nativeId,
 void* background0);
private extern(C) void  qtd_QMdiArea_setDocumentMode_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QMdiArea_setOption_AreaOption_bool(void* __this_nativeId,
 int option0,
 bool on1);
private extern(C) void  qtd_QMdiArea_setTabPosition_TabPosition(void* __this_nativeId,
 int position0);
private extern(C) void  qtd_QMdiArea_setTabShape_TabShape(void* __this_nativeId,
 int shape0);
private extern(C) void  qtd_QMdiArea_setViewMode_ViewMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QMdiArea_setupViewport_QWidget(void* __this_nativeId,
 void* viewport0);
private extern(C) void  qtd_QMdiArea_subWindowList_WindowOrder_const(void* __this_nativeId,
 void* __d_return_value,
 int order0);
private extern(C) int  qtd_QMdiArea_tabPosition_const(void* __this_nativeId);
private extern(C) int  qtd_QMdiArea_tabShape_const(void* __this_nativeId);
private extern(C) bool  qtd_QMdiArea_testOption_AreaOption_const(void* __this_nativeId,
 int opton0);
private extern(C) void  qtd_QMdiArea_tileSubWindows(void* __this_nativeId);
private extern(C) int  qtd_QMdiArea_viewMode_const(void* __this_nativeId);
private extern(C) void  qtd_QMdiArea_childEvent_QChildEvent(void* __this_nativeId,
 void* childEvent0);
private extern(C) bool  qtd_QMdiArea_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QMdiArea_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* object0,
 void* event1);
private extern(C) void  qtd_QMdiArea_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMdiArea_paintEvent_QPaintEvent(void* __this_nativeId,
 void* paintEvent0);
private extern(C) void  qtd_QMdiArea_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* resizeEvent0);
private extern(C) void  qtd_QMdiArea_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QMdiArea_showEvent_QShowEvent(void* __this_nativeId,
 void* showEvent0);
private extern(C) void  qtd_QMdiArea_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMdiArea_timerEvent_QTimerEvent(void* __this_nativeId,
 void* timerEvent0);
private extern(C) bool  qtd_QMdiArea_viewportEvent_QEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMdiArea_initCallBacks(void* virtuals);

extern(C) void static_init_QMdiArea() {
    qtd_QMdiArea_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QMdiArea_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QMdiArea) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QMdiArea_subWindowActivated_handle(void* dId, void** args) {
        auto d_object = cast(QMdiArea) dId;
        scope arg__1 = new QMdiSubWindow(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.subWindowActivated_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QMdiArea_staticMetaObject();

extern(C) void qtd_QMdiArea_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMdiArea_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
