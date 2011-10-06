module qt.gui.QMenuBar;

public import qt.gui.QMenuBar_aux;
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
public import qt.core.QRect;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QAction;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.gui.QStyleOptionMenuItem;
public import qt.gui.QPaintEvent;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QIcon;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QMenu;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMenuBar : QWidget
{

    package Object[] __rcMenus;

    private static const string[] __signalSignatures = [
            "hovered(QAction*)", 
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

    protected final void hovered(QAction action) {
        qtd_QMenuBar_hovered_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    protected final void triggered(QAction action) {
        qtd_QMenuBar_triggered_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QMenuBar_QMenuBar_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAction actionAt(const(QPoint) arg__1) const {
        void *ret = qtd_QMenuBar_actionAt_QPoint_const(qtdNativeId, arg__1);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QRect actionGeometry(QAction arg__1) const {
        QRect res;
        qtd_QMenuBar_actionGeometry_QAction_const(qtdNativeId, &res, arg__1 is null ? null : arg__1.qtdNativeId);
        return res;
    }

    public final QAction activeAction() const {
        void *ret = qtd_QMenuBar_activeAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addAction(string text) {
        void *ret = qtd_QMenuBar_addAction_string(qtdNativeId, text);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addMenu(QMenu menu) {
        if (menu !is null) {
            __rcMenus ~= cast(Object) menu;
        }
        void *ret = qtd_QMenuBar_addMenu_QMenu(qtdNativeId, menu is null ? null : menu.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QMenu addMenu(const(QIcon) icon, string title) {
        void *ret = qtd_QMenuBar_addMenu_QIcon_string(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, title);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QMenu addMenu(string title) {
        void *ret = qtd_QMenuBar_addMenu_string(qtdNativeId, title);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addSeparator() {
        void *ret = qtd_QMenuBar_addSeparator(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final void clear() {
        qtd_QMenuBar_clear(qtdNativeId);
    }

    public final QWidget cornerWidget(Qt.Corner corner = Qt.Corner.TopRightCorner) const {
        void *ret = qtd_QMenuBar_cornerWidget_Corner_const(qtdNativeId, corner);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected final void initStyleOption(QStyleOptionMenuItem option, QAction action) const {
        qtd_QMenuBar_initStyleOption_nativepointerQStyleOptionMenuItem_QAction_const(qtdNativeId, option is null ? null : option.qtdNativeId, action is null ? null : (cast(QAction)action).qtdNativeId);
    }

    public final QAction insertMenu(QAction before, QMenu menu) {
        if (menu !is null) {
            __rcMenus ~= cast(Object) menu;
        }
        void *ret = qtd_QMenuBar_insertMenu_QAction_QMenu(qtdNativeId, before is null ? null : before.qtdNativeId, menu is null ? null : menu.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction insertSeparator(QAction before) {
        void *ret = qtd_QMenuBar_insertSeparator_QAction(qtdNativeId, before is null ? null : before.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final bool isDefaultUp() const {
        return qtd_QMenuBar_isDefaultUp_const(qtdNativeId);
    }

    public final bool isNativeMenuBar() const {
        return qtd_QMenuBar_isNativeMenuBar_const(qtdNativeId);
    }

    public final void setActiveAction(QAction action) {
        qtd_QMenuBar_setActiveAction_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    public final void setCornerWidget(QWidget w, Qt.Corner corner = Qt.Corner.TopRightCorner) {
        qtd_QMenuBar_setCornerWidget_QWidget_Corner(qtdNativeId, w is null ? null : w.qtdNativeId, corner);
    }

    public final void setDefaultUp(bool arg__1) {
        qtd_QMenuBar_setDefaultUp_bool(qtdNativeId, arg__1);
    }

    public final void setNativeMenuBar(bool nativeMenuBar) {
        qtd_QMenuBar_setNativeMenuBar_bool(qtdNativeId, nativeMenuBar);
    }

    protected void actionEvent(QActionEvent arg__1) {
        qtd_QMenuBar_actionEvent_QActionEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QMenuBar_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QMenuBar_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QMenuBar_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent arg__1) {
        qtd_QMenuBar_focusInEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent arg__1) {
        qtd_QMenuBar_focusOutEvent_QFocusEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QMenuBar_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QMenuBar_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void leaveEvent(QEvent arg__1) {
        qtd_QMenuBar_leaveEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QMenuBar_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QMenuBar_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QMenuBar_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QMenuBar_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QMenuBar_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QMenuBar_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void setVisible(bool visible) {
        qtd_QMenuBar_setVisible_bool(qtdNativeId, visible);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QMenuBar_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void timerEvent(QTimerEvent arg__1) {
        qtd_QMenuBar_timerEvent_QTimerEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setVisible(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMenuBar_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMenuBar);
    }

    static QMenuBar __getObject(void* nativeId) {
        return static_cast!(QMenuBar)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMenuBar_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMenuBar_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMenuBar(nativeId, initFlags);
        QMenuBar.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("hovered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("triggered"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setVisible"), index));

    }

    public alias void __isQtType_QMenuBar;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    alias QWidget.addAction addAction;


}

// C wrappers for signal emitters
private extern(C) void  qtd_QMenuBar_hovered_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QMenuBar_triggered_QAction(void* __this_nativeId,
 void* action0);

// C wrappers
private extern(C) void* qtd_QMenuBar_QMenuBar_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QMenuBar_actionAt_QPoint_const(void* __this_nativeId,
 QPoint arg__1);
private extern(C) void  qtd_QMenuBar_actionGeometry_QAction_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* arg__1);
private extern(C) void*  qtd_QMenuBar_activeAction_const(void* __this_nativeId);
private extern(C) void*  qtd_QMenuBar_addAction_string(void* __this_nativeId,
 string text0);
private extern(C) void*  qtd_QMenuBar_addMenu_QMenu(void* __this_nativeId,
 void* menu0);
private extern(C) void*  qtd_QMenuBar_addMenu_QIcon_string(void* __this_nativeId,
 void* icon0,
 string title1);
private extern(C) void*  qtd_QMenuBar_addMenu_string(void* __this_nativeId,
 string title0);
private extern(C) void*  qtd_QMenuBar_addSeparator(void* __this_nativeId);
private extern(C) void  qtd_QMenuBar_clear(void* __this_nativeId);
private extern(C) void*  qtd_QMenuBar_cornerWidget_Corner_const(void* __this_nativeId,
 int corner0);
private extern(C) void  qtd_QMenuBar_initStyleOption_nativepointerQStyleOptionMenuItem_QAction_const(void* __this_nativeId,
 void* option0,
 void* action1);
private extern(C) void*  qtd_QMenuBar_insertMenu_QAction_QMenu(void* __this_nativeId,
 void* before0,
 void* menu1);
private extern(C) void*  qtd_QMenuBar_insertSeparator_QAction(void* __this_nativeId,
 void* before0);
private extern(C) bool  qtd_QMenuBar_isDefaultUp_const(void* __this_nativeId);
private extern(C) bool  qtd_QMenuBar_isNativeMenuBar_const(void* __this_nativeId);
private extern(C) void  qtd_QMenuBar_setActiveAction_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QMenuBar_setCornerWidget_QWidget_Corner(void* __this_nativeId,
 void* w0,
 int corner1);
private extern(C) void  qtd_QMenuBar_setDefaultUp_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QMenuBar_setNativeMenuBar_bool(void* __this_nativeId,
 bool nativeMenuBar0);
private extern(C) void  qtd_QMenuBar_actionEvent_QActionEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QMenuBar_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QMenuBar_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QMenuBar_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QMenuBar_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QMenuBar_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_leaveEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMenuBar_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenuBar_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QMenuBar_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMenuBar_timerEvent_QTimerEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMenuBar_initCallBacks(void* virtuals);

extern(C) void static_init_QMenuBar() {
    qtd_QMenuBar_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QMenuBar_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QMenuBar) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QMenuBar_hovered_handle(void* dId, void** args) {
        auto d_object = cast(QMenuBar) dId;
        scope action0 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.hovered_emit(action0);
}*/
/*private extern(C) void qtd_QMenuBar_triggered_handle(void* dId, void** args) {
        auto d_object = cast(QMenuBar) dId;
        scope action0 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.triggered_emit(action0);
}*/

extern(C) QMetaObjectNative* qtd_QMenuBar_staticMetaObject();

extern(C) void qtd_QMenuBar_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMenuBar_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
