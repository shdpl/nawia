module qt.gui.QToolButton;

public import qt.gui.QToolButton_aux;
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
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QAction;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QStyleOptionToolButton;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QAbstractButton;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QMenu;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QToolButton : QAbstractButton
{
    public enum ToolButtonPopupMode {
        DelayedPopup = 0,
        MenuButtonPopup = 1,
        InstantPopup = 2
    }

    alias ToolButtonPopupMode.DelayedPopup DelayedPopup;
    alias ToolButtonPopupMode.MenuButtonPopup MenuButtonPopup;
    alias ToolButtonPopupMode.InstantPopup InstantPopup;


Object __rcDefaultAction = null;

Object __rcMenu = null;

    private static const string[] __signalSignatures = [
            "triggered(QAction*)"    ];

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

    protected final void triggered(QAction arg__1) {
        qtd_QToolButton_triggered_QAction(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QToolButton_QToolButton_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.ArrowType arrowType() const {
        return cast(Qt.ArrowType) qtd_QToolButton_arrowType_const(qtdNativeId);
    }

    public final bool autoRaise() const {
        return qtd_QToolButton_autoRaise_const(qtdNativeId);
    }

    public final QAction defaultAction() const {
        void *ret = qtd_QToolButton_defaultAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    protected final void initStyleOption(QStyleOptionToolButton option) const {
        qtd_QToolButton_initStyleOption_nativepointerQStyleOptionToolButton_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final QMenu menu() const {
        void *ret = qtd_QToolButton_menu_const(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QToolButton.ToolButtonPopupMode popupMode() const {
        return cast(QToolButton.ToolButtonPopupMode) qtd_QToolButton_popupMode_const(qtdNativeId);
    }

    public final void setArrowType(Qt.ArrowType type) {
        qtd_QToolButton_setArrowType_ArrowType(qtdNativeId, type);
    }

    public final void setAutoRaise(bool enable) {
        qtd_QToolButton_setAutoRaise_bool(qtdNativeId, enable);
    }

    public final void setDefaultAction(QAction arg__1) {
        {
            __rcDefaultAction = cast(Object) arg__1;
        }
        qtd_QToolButton_setDefaultAction_QAction(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setMenu(QMenu menu) {
        {
            __rcMenu = cast(Object) menu;
        }
        qtd_QToolButton_setMenu_QMenu(qtdNativeId, menu is null ? null : menu.qtdNativeId);
    }

    public final void setPopupMode(QToolButton.ToolButtonPopupMode mode) {
        qtd_QToolButton_setPopupMode_ToolButtonPopupMode(qtdNativeId, mode);
    }

    public final void setToolButtonStyle(Qt.ToolButtonStyle style) {
        qtd_QToolButton_setToolButtonStyle_ToolButtonStyle(qtdNativeId, style);
    }

    public final void showMenu() {
        qtd_QToolButton_showMenu(qtdNativeId);
    }

    public final Qt.ToolButtonStyle toolButtonStyle() const {
        return cast(Qt.ToolButtonStyle) qtd_QToolButton_toolButtonStyle_const(qtdNativeId);
    }

    protected void actionEvent(QActionEvent arg__1) {
        qtd_QToolButton_actionEvent_QActionEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QToolButton_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void enterEvent(QEvent arg__1) {
        qtd_QToolButton_enterEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QToolButton_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected bool hitButton(const(QPoint) pos) const {
        return qtd_QToolButton_hitButton_QPoint_const(qtdNativeId, pos);
    }

    protected void leaveEvent(QEvent arg__1) {
        qtd_QToolButton_leaveEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QToolButton_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QToolButton_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QToolButton_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void nextCheckState() {
        qtd_QToolButton_nextCheckState(qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QToolButton_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QToolButton_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void timerEvent(QTimerEvent arg__1) {
        qtd_QToolButton_timerEvent_QTimerEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setDefaultAction(QAction*)", 
            "setToolButtonStyle(Qt::ToolButtonStyle)", 
            "showMenu()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QToolButton_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QToolButton);
    }

    static QToolButton __getObject(void* nativeId) {
        return static_cast!(QToolButton)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QToolButton_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QToolButton_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QToolButton(nativeId, initFlags);
        QToolButton.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("triggered"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QAction)("setDefaultAction"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(Qt.ToolButtonStyle)("setToolButtonStyle"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("showMenu"), index));

    }

    public alias void __isQtType_QToolButton;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QToolButton_triggered_QAction(void* __this_nativeId,
 void* arg__1);

// C wrappers
private extern(C) void* qtd_QToolButton_QToolButton_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QToolButton_arrowType_const(void* __this_nativeId);
private extern(C) bool  qtd_QToolButton_autoRaise_const(void* __this_nativeId);
private extern(C) void*  qtd_QToolButton_defaultAction_const(void* __this_nativeId);
private extern(C) void  qtd_QToolButton_initStyleOption_nativepointerQStyleOptionToolButton_const(void* __this_nativeId,
 void* option0);
private extern(C) void*  qtd_QToolButton_menu_const(void* __this_nativeId);
private extern(C) int  qtd_QToolButton_popupMode_const(void* __this_nativeId);
private extern(C) void  qtd_QToolButton_setArrowType_ArrowType(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QToolButton_setAutoRaise_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QToolButton_setDefaultAction_QAction(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QToolButton_setMenu_QMenu(void* __this_nativeId,
 void* menu0);
private extern(C) void  qtd_QToolButton_setPopupMode_ToolButtonPopupMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QToolButton_setToolButtonStyle_ToolButtonStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QToolButton_showMenu(void* __this_nativeId);
private extern(C) int  qtd_QToolButton_toolButtonStyle_const(void* __this_nativeId);
private extern(C) void  qtd_QToolButton_actionEvent_QActionEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QToolButton_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QToolButton_enterEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QToolButton_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QToolButton_hitButton_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QToolButton_leaveEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QToolButton_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QToolButton_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QToolButton_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QToolButton_nextCheckState(void* __this_nativeId);
private extern(C) void  qtd_QToolButton_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QToolButton_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QToolButton_timerEvent_QTimerEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QToolButton_initCallBacks(void* virtuals);

extern(C) void static_init_QToolButton() {
    qtd_QToolButton_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QToolButton_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QToolButton) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QToolButton_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QToolButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.clicked_emit(checked0);
}*/
/*private extern(C) void qtd_QToolButton_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QToolButton) dId;
        //d_object.pressed_emit();
}*/
/*private extern(C) void qtd_QToolButton_released_handle(void* dId, void** args) {
        auto d_object = cast(QToolButton) dId;
        //d_object.released_emit();
}*/
/*private extern(C) void qtd_QToolButton_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QToolButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(checked0);
}*/
/*private extern(C) void qtd_QToolButton_triggered_handle(void* dId, void** args) {
        auto d_object = cast(QToolButton) dId;
        scope arg__1 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.triggered_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QToolButton_staticMetaObject();

extern(C) void qtd_QToolButton_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QToolButton_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
