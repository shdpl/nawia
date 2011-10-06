module qt.gui.QMdiSubWindow;

public import qt.gui.QMdiSubWindow_aux;
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
public import qt.gui.QKeyEvent;
public import qt.gui.QDragMoveEvent;
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
public import qt.gui.QMdiArea;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QMenu;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMdiSubWindow : QWidget
{
    public enum SubWindowOption {
        AllowOutsideAreaHorizontally = 1,
        AllowOutsideAreaVertically = 2,
        RubberBandResize = 4,
        RubberBandMove = 8
    }

    alias SubWindowOption.AllowOutsideAreaHorizontally AllowOutsideAreaHorizontally;
    alias SubWindowOption.AllowOutsideAreaVertically AllowOutsideAreaVertically;
    alias SubWindowOption.RubberBandResize RubberBandResize;
    alias SubWindowOption.RubberBandMove RubberBandMove;


    private static const string[] __signalSignatures = [
            "aboutToActivate()", 
            "windowStateChanged(QFlags<Qt::WindowState>,QFlags<Qt::WindowState>)"    ];

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

    protected final void aboutToActivate() {
        qtd_QMdiSubWindow_aboutToActivate(qtdNativeId);
    }

    protected final void windowStateChanged(int oldState, int newState) {
        qtd_QMdiSubWindow_windowStateChanged_WindowStates_WindowStates(qtdNativeId, oldState, newState);
    }
// Functions

    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QMdiSubWindow_QMdiSubWindow_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isShaded() const {
        return qtd_QMdiSubWindow_isShaded_const(qtdNativeId);
    }

    public final int keyboardPageStep() const {
        return qtd_QMdiSubWindow_keyboardPageStep_const(qtdNativeId);
    }

    public final int keyboardSingleStep() const {
        return qtd_QMdiSubWindow_keyboardSingleStep_const(qtdNativeId);
    }

    public final QWidget maximizedButtonsWidget() const {
        void *ret = qtd_QMdiSubWindow_maximizedButtonsWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget maximizedSystemMenuIconWidget() const {
        void *ret = qtd_QMdiSubWindow_maximizedSystemMenuIconWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QMdiArea mdiArea() const {
        void *ret = qtd_QMdiSubWindow_mdiArea_const(qtdNativeId);
        QMdiArea __d_return_value = QMdiArea.__getObject(ret);
        return __d_return_value;
    }

    public final void setKeyboardPageStep(int step) {
        qtd_QMdiSubWindow_setKeyboardPageStep_int(qtdNativeId, step);
    }

    public final void setKeyboardSingleStep(int step) {
        qtd_QMdiSubWindow_setKeyboardSingleStep_int(qtdNativeId, step);
    }

    public final void setOption(QMdiSubWindow.SubWindowOption option, bool on = true) {
        qtd_QMdiSubWindow_setOption_SubWindowOption_bool(qtdNativeId, option, on);
    }

    public final void setSystemMenu(QMenu systemMenu) {
        qtd_QMdiSubWindow_setSystemMenu_QMenu(qtdNativeId, systemMenu is null ? null : systemMenu.qtdNativeId);
    }

    public final void setWidget(QWidget widget) {
        qtd_QMdiSubWindow_setWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void showShaded() {
        qtd_QMdiSubWindow_showShaded(qtdNativeId);
    }

    public final void showSystemMenu() {
        qtd_QMdiSubWindow_showSystemMenu(qtdNativeId);
    }

    public final QMenu systemMenu() const {
        void *ret = qtd_QMdiSubWindow_systemMenu_const(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final bool testOption(QMdiSubWindow.SubWindowOption arg__1) const {
        return qtd_QMdiSubWindow_testOption_SubWindowOption_const(qtdNativeId, arg__1);
    }

    public final QWidget widget() const {
        void *ret = qtd_QMdiSubWindow_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void changeEvent(QEvent changeEvent) {
        qtd_QMdiSubWindow_changeEvent_QEvent(qtdNativeId, changeEvent is null ? null : changeEvent.qtdNativeId);
    }

    protected void childEvent(QChildEvent childEvent) {
        qtd_QMdiSubWindow_childEvent_QChildEvent(qtdNativeId, childEvent is null ? null : childEvent.qtdNativeId);
    }

    protected void closeEvent(QCloseEvent closeEvent) {
        qtd_QMdiSubWindow_closeEvent_QCloseEvent(qtdNativeId, closeEvent is null ? null : closeEvent.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent contextMenuEvent) {
        qtd_QMdiSubWindow_contextMenuEvent_QContextMenuEvent(qtdNativeId, contextMenuEvent is null ? null : contextMenuEvent.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QMdiSubWindow_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool eventFilter(QObject object, QEvent event) {
        return qtd_QMdiSubWindow_eventFilter_QObject_QEvent(qtdNativeId, object is null ? null : object.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent focusInEvent) {
        qtd_QMdiSubWindow_focusInEvent_QFocusEvent(qtdNativeId, focusInEvent is null ? null : focusInEvent.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent focusOutEvent) {
        qtd_QMdiSubWindow_focusOutEvent_QFocusEvent(qtdNativeId, focusOutEvent is null ? null : focusOutEvent.qtdNativeId);
    }

    protected void hideEvent(QHideEvent hideEvent) {
        qtd_QMdiSubWindow_hideEvent_QHideEvent(qtdNativeId, hideEvent is null ? null : hideEvent.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent keyEvent) {
        qtd_QMdiSubWindow_keyPressEvent_QKeyEvent(qtdNativeId, keyEvent is null ? null : keyEvent.qtdNativeId);
    }

    protected void leaveEvent(QEvent leaveEvent) {
        qtd_QMdiSubWindow_leaveEvent_QEvent(qtdNativeId, leaveEvent is null ? null : leaveEvent.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QMdiSubWindow_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseDoubleClickEvent(QMouseEvent mouseEvent) {
        qtd_QMdiSubWindow_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, mouseEvent is null ? null : mouseEvent.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent mouseEvent) {
        qtd_QMdiSubWindow_mouseMoveEvent_QMouseEvent(qtdNativeId, mouseEvent is null ? null : mouseEvent.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent mouseEvent) {
        qtd_QMdiSubWindow_mousePressEvent_QMouseEvent(qtdNativeId, mouseEvent is null ? null : mouseEvent.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent mouseEvent) {
        qtd_QMdiSubWindow_mouseReleaseEvent_QMouseEvent(qtdNativeId, mouseEvent is null ? null : mouseEvent.qtdNativeId);
    }

    protected void moveEvent(QMoveEvent moveEvent) {
        qtd_QMdiSubWindow_moveEvent_QMoveEvent(qtdNativeId, moveEvent is null ? null : moveEvent.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent paintEvent) {
        qtd_QMdiSubWindow_paintEvent_QPaintEvent(qtdNativeId, paintEvent is null ? null : paintEvent.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent resizeEvent) {
        qtd_QMdiSubWindow_resizeEvent_QResizeEvent(qtdNativeId, resizeEvent is null ? null : resizeEvent.qtdNativeId);
    }

    protected void showEvent(QShowEvent showEvent) {
        qtd_QMdiSubWindow_showEvent_QShowEvent(qtdNativeId, showEvent is null ? null : showEvent.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QMdiSubWindow_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void timerEvent(QTimerEvent timerEvent) {
        qtd_QMdiSubWindow_timerEvent_QTimerEvent(qtdNativeId, timerEvent is null ? null : timerEvent.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "showShaded()", 
            "showSystemMenu()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMdiSubWindow_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMdiSubWindow);
    }

    static QMdiSubWindow __getObject(void* nativeId) {
        return static_cast!(QMdiSubWindow)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMdiSubWindow_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMdiSubWindow_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMdiSubWindow(nativeId, initFlags);
        QMdiSubWindow.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("aboutToActivate"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("windowStateChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("showShaded"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("showSystemMenu"), index));

    }

    public alias void __isQtType_QMdiSubWindow;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QMdiSubWindow_aboutToActivate(void* __this_nativeId);
private extern(C) void  qtd_QMdiSubWindow_windowStateChanged_WindowStates_WindowStates(void* __this_nativeId,
 int oldState0,
 int newState1);

// C wrappers
private extern(C) void* qtd_QMdiSubWindow_QMdiSubWindow_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) bool  qtd_QMdiSubWindow_isShaded_const(void* __this_nativeId);
private extern(C) int  qtd_QMdiSubWindow_keyboardPageStep_const(void* __this_nativeId);
private extern(C) int  qtd_QMdiSubWindow_keyboardSingleStep_const(void* __this_nativeId);
private extern(C) void*  qtd_QMdiSubWindow_maximizedButtonsWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QMdiSubWindow_maximizedSystemMenuIconWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QMdiSubWindow_mdiArea_const(void* __this_nativeId);
private extern(C) void  qtd_QMdiSubWindow_setKeyboardPageStep_int(void* __this_nativeId,
 int step0);
private extern(C) void  qtd_QMdiSubWindow_setKeyboardSingleStep_int(void* __this_nativeId,
 int step0);
private extern(C) void  qtd_QMdiSubWindow_setOption_SubWindowOption_bool(void* __this_nativeId,
 int option0,
 bool on1);
private extern(C) void  qtd_QMdiSubWindow_setSystemMenu_QMenu(void* __this_nativeId,
 void* systemMenu0);
private extern(C) void  qtd_QMdiSubWindow_setWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QMdiSubWindow_showShaded(void* __this_nativeId);
private extern(C) void  qtd_QMdiSubWindow_showSystemMenu(void* __this_nativeId);
private extern(C) void*  qtd_QMdiSubWindow_systemMenu_const(void* __this_nativeId);
private extern(C) bool  qtd_QMdiSubWindow_testOption_SubWindowOption_const(void* __this_nativeId,
 int arg__1);
private extern(C) void*  qtd_QMdiSubWindow_widget_const(void* __this_nativeId);
private extern(C) void  qtd_QMdiSubWindow_changeEvent_QEvent(void* __this_nativeId,
 void* changeEvent0);
private extern(C) void  qtd_QMdiSubWindow_childEvent_QChildEvent(void* __this_nativeId,
 void* childEvent0);
private extern(C) void  qtd_QMdiSubWindow_closeEvent_QCloseEvent(void* __this_nativeId,
 void* closeEvent0);
private extern(C) void  qtd_QMdiSubWindow_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* contextMenuEvent0);
private extern(C) bool  qtd_QMdiSubWindow_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QMdiSubWindow_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* object0,
 void* event1);
private extern(C) void  qtd_QMdiSubWindow_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* focusInEvent0);
private extern(C) void  qtd_QMdiSubWindow_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* focusOutEvent0);
private extern(C) void  qtd_QMdiSubWindow_hideEvent_QHideEvent(void* __this_nativeId,
 void* hideEvent0);
private extern(C) void  qtd_QMdiSubWindow_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* keyEvent0);
private extern(C) void  qtd_QMdiSubWindow_leaveEvent_QEvent(void* __this_nativeId,
 void* leaveEvent0);
private extern(C) void  qtd_QMdiSubWindow_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMdiSubWindow_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* mouseEvent0);
private extern(C) void  qtd_QMdiSubWindow_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* mouseEvent0);
private extern(C) void  qtd_QMdiSubWindow_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* mouseEvent0);
private extern(C) void  qtd_QMdiSubWindow_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* mouseEvent0);
private extern(C) void  qtd_QMdiSubWindow_moveEvent_QMoveEvent(void* __this_nativeId,
 void* moveEvent0);
private extern(C) void  qtd_QMdiSubWindow_paintEvent_QPaintEvent(void* __this_nativeId,
 void* paintEvent0);
private extern(C) void  qtd_QMdiSubWindow_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* resizeEvent0);
private extern(C) void  qtd_QMdiSubWindow_showEvent_QShowEvent(void* __this_nativeId,
 void* showEvent0);
private extern(C) void  qtd_QMdiSubWindow_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMdiSubWindow_timerEvent_QTimerEvent(void* __this_nativeId,
 void* timerEvent0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMdiSubWindow_initCallBacks(void* virtuals);

extern(C) void static_init_QMdiSubWindow() {
    qtd_QMdiSubWindow_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QMdiSubWindow_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QMdiSubWindow) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QMdiSubWindow_aboutToActivate_handle(void* dId, void** args) {
        auto d_object = cast(QMdiSubWindow) dId;
        //d_object.aboutToActivate_emit();
}*/
/*private extern(C) void qtd_QMdiSubWindow_windowStateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QMdiSubWindow) dId;
        auto oldState0 = *(cast(Qt.WindowStates*)args[1]);
        auto newState1 = *(cast(Qt.WindowStates*)args[2]);
        //d_object.windowStateChanged_emit(oldState0, newState1);
}*/

extern(C) QMetaObjectNative* qtd_QMdiSubWindow_staticMetaObject();

extern(C) void qtd_QMdiSubWindow_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMdiSubWindow_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
