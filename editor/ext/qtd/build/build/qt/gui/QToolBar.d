module qt.gui.QToolBar;

public import qt.gui.QToolBar_aux;
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
public import qt.core.QRect;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QAction;
public import qt.gui.QStyleOptionToolBar;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QIcon;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QToolBar : QWidget
{

    private static const string[] __signalSignatures = [
            "actionTriggered(QAction*)", 
            "allowedAreasChanged(QFlags<Qt::ToolBarArea>)", 
            "iconSizeChanged(QSize)", 
            "movableChanged(bool)", 
            "orientationChanged(Qt::Orientation)", 
            "toolButtonStyleChanged(Qt::ToolButtonStyle)", 
            "topLevelChanged(bool)", 
            "visibilityChanged(bool)"    ];

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

    protected final void actionTriggered(QAction action) {
        qtd_QToolBar_actionTriggered_QAction(qtdNativeId, action is null ? null : action.qtdNativeId);
    }

    protected final void allowedAreasChanged(int allowedAreas) {
        qtd_QToolBar_allowedAreasChanged_ToolBarAreas(qtdNativeId, allowedAreas);
    }

    protected final void iconSizeChanged(const(QSize) iconSize) {
        qtd_QToolBar_iconSizeChanged_QSize(qtdNativeId, iconSize);
    }

    protected final void movableChanged(bool movable) {
        qtd_QToolBar_movableChanged_bool(qtdNativeId, movable);
    }

    protected final void orientationChanged(Qt.Orientation orientation) {
        qtd_QToolBar_orientationChanged_Orientation(qtdNativeId, orientation);
    }

    protected final void toolButtonStyleChanged(Qt.ToolButtonStyle toolButtonStyle) {
        qtd_QToolBar_toolButtonStyleChanged_ToolButtonStyle(qtdNativeId, toolButtonStyle);
    }

    protected final void topLevelChanged(bool topLevel) {
        qtd_QToolBar_topLevelChanged_bool(qtdNativeId, topLevel);
    }

    protected final void visibilityChanged(bool visible) {
        qtd_QToolBar_visibilityChanged_bool(qtdNativeId, visible);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QToolBar_QToolBar_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string title, QWidget parent_ = null) {
        void* ret = qtd_QToolBar_QToolBar_string_QWidget(cast(void*) this, title, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAction actionAt(const(QPoint) p) const {
        void *ret = qtd_QToolBar_actionAt_QPoint_const(qtdNativeId, p);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction actionAt(int x, int y) const {
        void *ret = qtd_QToolBar_actionAt_int_int_const(qtdNativeId, x, y);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QRect actionGeometry(QAction action) const {
        QRect res;
        qtd_QToolBar_actionGeometry_QAction_const(qtdNativeId, &res, action is null ? null : action.qtdNativeId);
        return res;
    }

    public final QAction addAction(const(QIcon) icon, string text) {
        void *ret = qtd_QToolBar_addAction_QIcon_string(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addAction(string text) {
        void *ret = qtd_QToolBar_addAction_string(qtdNativeId, text);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addSeparator() {
        void *ret = qtd_QToolBar_addSeparator(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction addWidget(QWidget widget) {
        if (widget !is null) {
            widget.qtdSetOwnership(QtdObjectOwnership.native);
        }
        void *ret = qtd_QToolBar_addWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final int allowedAreas() const {
        return qtd_QToolBar_allowedAreas_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QToolBar_clear(qtdNativeId);
    }

    public final QSize iconSize() const {
        QSize res;
        qtd_QToolBar_iconSize_const(qtdNativeId, &res);
        return res;
    }

    protected final void initStyleOption(QStyleOptionToolBar option) const {
        qtd_QToolBar_initStyleOption_nativepointerQStyleOptionToolBar_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final QAction insertSeparator(QAction before) {
        void *ret = qtd_QToolBar_insertSeparator_QAction(qtdNativeId, before is null ? null : before.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction insertWidget(QAction before, QWidget widget) {
        if (widget !is null) {
            widget.qtdSetOwnership(QtdObjectOwnership.native);
        }
        void *ret = qtd_QToolBar_insertWidget_QAction_QWidget(qtdNativeId, before is null ? null : before.qtdNativeId, widget is null ? null : widget.qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final bool isAreaAllowed(Qt.ToolBarArea area) const {
        return qtd_QToolBar_isAreaAllowed_ToolBarArea_const(qtdNativeId, area);
    }

    public final bool isFloatable() const {
        return qtd_QToolBar_isFloatable_const(qtdNativeId);
    }

    public final bool isFloating() const {
        return qtd_QToolBar_isFloating_const(qtdNativeId);
    }

    public final bool isMovable() const {
        return qtd_QToolBar_isMovable_const(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QToolBar_orientation_const(qtdNativeId);
    }

    public final void setAllowedAreas(int areas) {
        qtd_QToolBar_setAllowedAreas_ToolBarAreas(qtdNativeId, areas);
    }

    public final void setFloatable(bool floatable) {
        qtd_QToolBar_setFloatable_bool(qtdNativeId, floatable);
    }

    public final void setIconSize(const(QSize) iconSize) {
        qtd_QToolBar_setIconSize_QSize(qtdNativeId, iconSize);
    }

    public final void setMovable(bool movable) {
        qtd_QToolBar_setMovable_bool(qtdNativeId, movable);
    }

    public final void setOrientation(Qt.Orientation orientation) {
        qtd_QToolBar_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final void setToolButtonStyle(Qt.ToolButtonStyle toolButtonStyle) {
        qtd_QToolBar_setToolButtonStyle_ToolButtonStyle(qtdNativeId, toolButtonStyle);
    }

    public final QAction toggleViewAction() const {
        void *ret = qtd_QToolBar_toggleViewAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final Qt.ToolButtonStyle toolButtonStyle() const {
        return cast(Qt.ToolButtonStyle) qtd_QToolBar_toolButtonStyle_const(qtdNativeId);
    }

    public final QWidget widgetForAction(QAction action) const {
        void *ret = qtd_QToolBar_widgetForAction_QAction_const(qtdNativeId, action is null ? null : action.qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void actionEvent(QActionEvent event) {
        qtd_QToolBar_actionEvent_QActionEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void changeEvent(QEvent event) {
        qtd_QToolBar_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void childEvent(QChildEvent event) {
        qtd_QToolBar_childEvent_QChildEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QToolBar_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QToolBar_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QToolBar_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setIconSize(QSize)", 
            "setToolButtonStyle(Qt::ToolButtonStyle)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QToolBar_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QToolBar);
    }

    static QToolBar __getObject(void* nativeId) {
        return static_cast!(QToolBar)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QToolBar_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QToolBar_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QToolBar(nativeId, initFlags);
        QToolBar.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QAction)("actionTriggered"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("allowedAreasChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(const(QSize))("iconSizeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("movableChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(Qt.Orientation)("orientationChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(Qt.ToolButtonStyle)("toolButtonStyleChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(bool)("topLevelChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(bool)("visibilityChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QSize))("setIconSize"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(Qt.ToolButtonStyle)("setToolButtonStyle"), index));

    }

    public alias void __isQtType_QToolBar;


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
private extern(C) void  qtd_QToolBar_actionTriggered_QAction(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QToolBar_allowedAreasChanged_ToolBarAreas(void* __this_nativeId,
 int allowedAreas0);
private extern(C) void  qtd_QToolBar_iconSizeChanged_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QToolBar_movableChanged_bool(void* __this_nativeId,
 bool movable0);
private extern(C) void  qtd_QToolBar_orientationChanged_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) void  qtd_QToolBar_toolButtonStyleChanged_ToolButtonStyle(void* __this_nativeId,
 int toolButtonStyle0);
private extern(C) void  qtd_QToolBar_topLevelChanged_bool(void* __this_nativeId,
 bool topLevel0);
private extern(C) void  qtd_QToolBar_visibilityChanged_bool(void* __this_nativeId,
 bool visible0);

// C wrappers
private extern(C) void* qtd_QToolBar_QToolBar_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QToolBar_QToolBar_string_QWidget(void *d_ptr,
 string title0,
 void* parent1);
private extern(C) void*  qtd_QToolBar_actionAt_QPoint_const(void* __this_nativeId,
 QPoint p0);
private extern(C) void*  qtd_QToolBar_actionAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void  qtd_QToolBar_actionGeometry_QAction_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* action0);
private extern(C) void*  qtd_QToolBar_addAction_QIcon_string(void* __this_nativeId,
 void* icon0,
 string text1);
private extern(C) void*  qtd_QToolBar_addAction_string(void* __this_nativeId,
 string text0);
private extern(C) void*  qtd_QToolBar_addSeparator(void* __this_nativeId);
private extern(C) void*  qtd_QToolBar_addWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) int  qtd_QToolBar_allowedAreas_const(void* __this_nativeId);
private extern(C) void  qtd_QToolBar_clear(void* __this_nativeId);
private extern(C) void  qtd_QToolBar_iconSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QToolBar_initStyleOption_nativepointerQStyleOptionToolBar_const(void* __this_nativeId,
 void* option0);
private extern(C) void*  qtd_QToolBar_insertSeparator_QAction(void* __this_nativeId,
 void* before0);
private extern(C) void*  qtd_QToolBar_insertWidget_QAction_QWidget(void* __this_nativeId,
 void* before0,
 void* widget1);
private extern(C) bool  qtd_QToolBar_isAreaAllowed_ToolBarArea_const(void* __this_nativeId,
 int area0);
private extern(C) bool  qtd_QToolBar_isFloatable_const(void* __this_nativeId);
private extern(C) bool  qtd_QToolBar_isFloating_const(void* __this_nativeId);
private extern(C) bool  qtd_QToolBar_isMovable_const(void* __this_nativeId);
private extern(C) int  qtd_QToolBar_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QToolBar_setAllowedAreas_ToolBarAreas(void* __this_nativeId,
 int areas0);
private extern(C) void  qtd_QToolBar_setFloatable_bool(void* __this_nativeId,
 bool floatable0);
private extern(C) void  qtd_QToolBar_setIconSize_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QToolBar_setMovable_bool(void* __this_nativeId,
 bool movable0);
private extern(C) void  qtd_QToolBar_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) void  qtd_QToolBar_setToolButtonStyle_ToolButtonStyle(void* __this_nativeId,
 int toolButtonStyle0);
private extern(C) void*  qtd_QToolBar_toggleViewAction_const(void* __this_nativeId);
private extern(C) int  qtd_QToolBar_toolButtonStyle_const(void* __this_nativeId);
private extern(C) void*  qtd_QToolBar_widgetForAction_QAction_const(void* __this_nativeId,
 void* action0);
private extern(C) void  qtd_QToolBar_actionEvent_QActionEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QToolBar_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QToolBar_childEvent_QChildEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QToolBar_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QToolBar_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QToolBar_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QToolBar_initCallBacks(void* virtuals);

extern(C) void static_init_QToolBar() {
    qtd_QToolBar_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QToolBar_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QToolBar_actionTriggered_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        scope action0 = new QAction(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.actionTriggered_emit(action0);
}*/
/*private extern(C) void qtd_QToolBar_allowedAreasChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto allowedAreas0 = *(cast(Qt.ToolBarAreas*)args[1]);
        //d_object.allowedAreasChanged_emit(allowedAreas0);
}*/
/*private extern(C) void qtd_QToolBar_iconSizeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto iconSize0 = *(cast(QSize*)args[1]);
        //d_object.iconSizeChanged_emit(iconSize0);
}*/
/*private extern(C) void qtd_QToolBar_movableChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto movable0 = *(cast(bool*)args[1]);
        //d_object.movableChanged_emit(movable0);
}*/
/*private extern(C) void qtd_QToolBar_orientationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto orientation0 = *(cast(Qt.Orientation*)args[1]);
        //d_object.orientationChanged_emit(orientation0);
}*/
/*private extern(C) void qtd_QToolBar_toolButtonStyleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto toolButtonStyle0 = *(cast(Qt.ToolButtonStyle*)args[1]);
        //d_object.toolButtonStyleChanged_emit(toolButtonStyle0);
}*/
/*private extern(C) void qtd_QToolBar_topLevelChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto topLevel0 = *(cast(bool*)args[1]);
        //d_object.topLevelChanged_emit(topLevel0);
}*/
/*private extern(C) void qtd_QToolBar_visibilityChanged_handle(void* dId, void** args) {
        auto d_object = cast(QToolBar) dId;
        auto visible0 = *(cast(bool*)args[1]);
        //d_object.visibilityChanged_emit(visible0);
}*/

extern(C) QMetaObjectNative* qtd_QToolBar_staticMetaObject();

extern(C) void qtd_QToolBar_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QToolBar_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
