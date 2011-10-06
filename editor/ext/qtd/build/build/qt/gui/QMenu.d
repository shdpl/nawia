module qt.gui.QMenu;

public import qt.gui.QMenu_aux;
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
public import qt.gui.QWheelEvent;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QActionEvent;
public import qt.core.QList;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.core.QRect;
public import qt.gui.QFocusEvent;
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
public import qt.gui.QStyleOptionMenuItem;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QIcon;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMenu : QWidget
{

    package Object[] __rcMenus;

    private static const string[] __signalSignatures = [
            "aboutToHide()", 
            "aboutToShow()", 
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

    protected final void aboutToHide() {
        qtd_QMenu_aboutToHide(qtdNativeId);
    }

    protected final void aboutToShow() {
        qtd_QMenu_aboutToShow(qtdNativeId);
    }

    protected final void hovered(QAction action) {
        qtd_QMenu_hovered_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    protected final void triggered(QAction action) {
        qtd_QMenu_triggered_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QMenu_QMenu_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string title, QWidget parent_ = null) {
        void* ret = qtd_QMenu_QMenu_string_QWidget(cast(void*) this, title, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAction actionAt(const(QPoint) arg__1) const {
        void *ret = qtd_QMenu_actionAt_QPoint_const(qtdNativeId, arg__1);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QRect actionGeometry(QAction arg__1) const {
        QRect res;
        qtd_QMenu_actionGeometry_QAction_const(qtdNativeId, &res, arg__1 is null ? null : arg__1.qtdNativeId);
        return res;
    }

    public final QAction activeAction() const {
        void *ret = qtd_QMenu_activeAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addAction(const(QIcon) icon, string text) {
        void *ret = qtd_QMenu_addAction_QIcon_string(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addAction(string text) {
        void *ret = qtd_QMenu_addAction_string(qtdNativeId, text);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addMenu(QMenu menu) {
        if (menu !is null) {
            __rcMenus ~= cast(Object) menu;
        }
        void *ret = qtd_QMenu_addMenu_QMenu(qtdNativeId, menu is null ? null : menu.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QMenu addMenu(const(QIcon) icon, string title) {
        void *ret = qtd_QMenu_addMenu_QIcon_string(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, title);
        QMenu __d_return_value = QMenu.__getObject(ret);
        if (__d_return_value !is null) {
            __rcMenus ~= cast(Object) __d_return_value;
        }
        return __d_return_value;
    }

    public final QMenu addMenu(string title) {
        void *ret = qtd_QMenu_addMenu_string(qtdNativeId, title);
        QMenu __d_return_value = QMenu.__getObject(ret);
        if (__d_return_value !is null) {
            __rcMenus ~= cast(Object) __d_return_value;
        }
        return __d_return_value;
    }

    public final QAction addSeparator() {
        void *ret = qtd_QMenu_addSeparator(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final void clear() {
        qtd_QMenu_clear(qtdNativeId);
    }

    protected final int columnCount() const {
        return qtd_QMenu_columnCount_const(qtdNativeId);
    }

    public final QAction defaultAction() const {
        void *ret = qtd_QMenu_defaultAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction exec() {
        void *ret = qtd_QMenu_exec(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction exec(const(QPoint) pos, QAction at = null) {
        void *ret = qtd_QMenu_exec_QPoint_QAction(qtdNativeId, pos, at is null ? null : at.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final void hideTearOffMenu() {
        qtd_QMenu_hideTearOffMenu(qtdNativeId);
    }

    public final QIcon icon() const {
        void* ret = qtd_QMenu_icon_const(qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    private final void initStyleOption(QStyleOptionMenuItem option, QAction action) const {
        qtd_QMenu_initStyleOption_nativepointerQStyleOptionMenuItem_QAction_const(qtdNativeId, option is null ? null : option.qtdNativeId, action is null ? null : (cast(QAction)action).qtdNativeId);
    }

    public final QAction insertMenu(QAction before, QMenu menu) {
        if (menu !is null) {
            __rcMenus ~= cast(Object) menu;
        }
        void *ret = qtd_QMenu_insertMenu_QAction_QMenu(qtdNativeId, before is null ? null : before.qtdNativeId, menu is null ? null : menu.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction insertSeparator(QAction before) {
        void *ret = qtd_QMenu_insertSeparator_QAction(qtdNativeId, before is null ? null : before.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final bool isEmpty() const {
        return qtd_QMenu_isEmpty_const(qtdNativeId);
    }

    public final bool isTearOffEnabled() const {
        return qtd_QMenu_isTearOffEnabled_const(qtdNativeId);
    }

    public final bool isTearOffMenuVisible() const {
        return qtd_QMenu_isTearOffMenuVisible_const(qtdNativeId);
    }

    public final QAction menuAction() const {
        void *ret = qtd_QMenu_menuAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final void popup(const(QPoint) pos, QAction at = null) {
        qtd_QMenu_popup_QPoint_QAction(qtdNativeId, pos, at is null ? null : at.qtdNativeId);
    }

    public final bool separatorsCollapsible() const {
        return qtd_QMenu_separatorsCollapsible_const(qtdNativeId);
    }

    public final void setActiveAction(QAction act) {
        qtd_QMenu_setActiveAction_QAction(qtdNativeId, act is null ? null : act.qtdNativeId);
    }

    public final void setDefaultAction(QAction arg__1) {
        qtd_QMenu_setDefaultAction_QAction(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setIcon(const(QIcon) icon) {
        qtd_QMenu_setIcon_QIcon(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setSeparatorsCollapsible(bool collapse) {
        qtd_QMenu_setSeparatorsCollapsible_bool(qtdNativeId, collapse);
    }

    public final void setTearOffEnabled(bool arg__1) {
        qtd_QMenu_setTearOffEnabled_bool(qtdNativeId, arg__1);
    }

    public final void setTitle(string title) {
        qtd_QMenu_setTitle_string(qtdNativeId, title);
    }

    public final string title() const {
        string res;
        qtd_QMenu_title_const(qtdNativeId, &res);
        return res;
    }

    protected void actionEvent(QActionEvent arg__1) {
        qtd_QMenu_actionEvent_QActionEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QMenu_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void enterEvent(QEvent arg__1) {
        qtd_QMenu_enterEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QMenu_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QMenu_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void hideEvent(QHideEvent arg__1) {
        qtd_QMenu_hideEvent_QHideEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QMenu_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void leaveEvent(QEvent arg__1) {
        qtd_QMenu_leaveEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QMenu_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QMenu_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QMenu_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QMenu_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QMenu_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void timerEvent(QTimerEvent arg__1) {
        qtd_QMenu_timerEvent_QTimerEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void wheelEvent(QWheelEvent arg__1) {
        qtd_QMenu_wheelEvent_QWheelEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public static QAction exec(QList!(QAction) actions, const(QPoint) pos, QAction at = null) {
        void *ret = qtd_QMenu_exec_QList_QPoint_QAction(&actions, pos, at is null ? null : at.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public static QAction exec(QList!(QAction) actions, const(QPoint) pos, QAction at, QWidget parent_) {
        void *ret = qtd_QMenu_exec_QList_QPoint_QAction_QWidget(&actions, pos, at is null ? null : at.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMenu_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMenu);
    }

    static QMenu __getObject(void* nativeId) {
        return static_cast!(QMenu)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMenu_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMenu_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMenu(nativeId, initFlags);
        QMenu.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("aboutToHide"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("aboutToShow"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("hovered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("triggered"), index));

    }

    public alias void __isQtType_QMenu;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    protected final void initStyleOption(qt.gui.QStyleOptionMenuItem option, QAction action) {
    initStyleOption(option.nativePointer(), action);
    }
     */
        alias QWidget.addAction addAction;

}

// C wrappers for signal emitters
private extern(C) void  qtd_QMenu_aboutToHide(void* __this_nativeId);
private extern(C) void  qtd_QMenu_aboutToShow(void* __this_nativeId);
private extern(C) void  qtd_QMenu_hovered_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QMenu_triggered_QAction(void* __this_nativeId,
 void* action0);

// C wrappers
private extern(C) void* qtd_QMenu_QMenu_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QMenu_QMenu_string_QWidget(void *d_ptr,
 string title0,
 void* parent1);
private extern(C) void*  qtd_QMenu_actionAt_QPoint_const(void* __this_nativeId,
 QPoint arg__1);
private extern(C) void  qtd_QMenu_actionGeometry_QAction_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* arg__1);
private extern(C) void*  qtd_QMenu_activeAction_const(void* __this_nativeId);
private extern(C) void*  qtd_QMenu_addAction_QIcon_string(void* __this_nativeId,
 void* icon0,
 string text1);
private extern(C) void*  qtd_QMenu_addAction_string(void* __this_nativeId,
 string text0);
private extern(C) void*  qtd_QMenu_addMenu_QMenu(void* __this_nativeId,
 void* menu0);
private extern(C) void*  qtd_QMenu_addMenu_QIcon_string(void* __this_nativeId,
 void* icon0,
 string title1);
private extern(C) void*  qtd_QMenu_addMenu_string(void* __this_nativeId,
 string title0);
private extern(C) void*  qtd_QMenu_addSeparator(void* __this_nativeId);
private extern(C) void  qtd_QMenu_clear(void* __this_nativeId);
private extern(C) int  qtd_QMenu_columnCount_const(void* __this_nativeId);
private extern(C) void*  qtd_QMenu_defaultAction_const(void* __this_nativeId);
private extern(C) void*  qtd_QMenu_exec(void* __this_nativeId);
private extern(C) void*  qtd_QMenu_exec_QPoint_QAction(void* __this_nativeId,
 QPoint pos0,
 void* at1);
private extern(C) void  qtd_QMenu_hideTearOffMenu(void* __this_nativeId);
private extern(C) void*  qtd_QMenu_icon_const(void* __this_nativeId);
private extern(C) void  qtd_QMenu_initStyleOption_nativepointerQStyleOptionMenuItem_QAction_const(void* __this_nativeId,
 void* option0,
 void* action1);
private extern(C) void*  qtd_QMenu_insertMenu_QAction_QMenu(void* __this_nativeId,
 void* before0,
 void* menu1);
private extern(C) void*  qtd_QMenu_insertSeparator_QAction(void* __this_nativeId,
 void* before0);
private extern(C) bool  qtd_QMenu_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QMenu_isTearOffEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QMenu_isTearOffMenuVisible_const(void* __this_nativeId);
private extern(C) void*  qtd_QMenu_menuAction_const(void* __this_nativeId);
private extern(C) void  qtd_QMenu_popup_QPoint_QAction(void* __this_nativeId,
 QPoint pos0,
 void* at1);
private extern(C) bool  qtd_QMenu_separatorsCollapsible_const(void* __this_nativeId);
private extern(C) void  qtd_QMenu_setActiveAction_QAction(void* __this_nativeId,
 void* act0);
private extern(C) void  qtd_QMenu_setDefaultAction_QAction(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_setIcon_QIcon(void* __this_nativeId,
 void* icon0);
private extern(C) void  qtd_QMenu_setSeparatorsCollapsible_bool(void* __this_nativeId,
 bool collapse0);
private extern(C) void  qtd_QMenu_setTearOffEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QMenu_setTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QMenu_title_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QMenu_actionEvent_QActionEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_enterEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QMenu_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QMenu_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QMenu_hideEvent_QHideEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_leaveEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMenu_timerEvent_QTimerEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMenu_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QMenu_exec_QList_QPoint_QAction(void* actions0,
 QPoint pos1,
 void* at2);
private extern(C) void*  qtd_QMenu_exec_QList_QPoint_QAction_QWidget(void* actions0,
 QPoint pos1,
 void* at2,
 void* parent3);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMenu_initCallBacks(void* virtuals);

extern(C) void static_init_QMenu() {
    qtd_QMenu_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QMenu_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QMenu) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QMenu_aboutToHide_handle(void* dId, void** args) {
        auto d_object = cast(QMenu) dId;
        //d_object.aboutToHide_emit();
}*/
/*private extern(C) void qtd_QMenu_aboutToShow_handle(void* dId, void** args) {
        auto d_object = cast(QMenu) dId;
        //d_object.aboutToShow_emit();
}*/
/*private extern(C) void qtd_QMenu_hovered_handle(void* dId, void** args) {
        auto d_object = cast(QMenu) dId;
        scope action0 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.hovered_emit(action0);
}*/
/*private extern(C) void qtd_QMenu_triggered_handle(void* dId, void** args) {
        auto d_object = cast(QMenu) dId;
        scope action0 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.triggered_emit(action0);
}*/

extern(C) QMetaObjectNative* qtd_QMenu_staticMetaObject();

extern(C) void qtd_QMenu_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMenu_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
