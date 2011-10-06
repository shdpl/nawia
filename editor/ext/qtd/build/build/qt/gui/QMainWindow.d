module qt.gui.QMainWindow;

public import qt.gui.QMainWindow_aux;
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
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QDockWidget;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QStatusBar;
public import qt.gui.QToolBar;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QMenuBar;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.core.QByteArray;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QMenu;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMainWindow : QWidget
{
    public enum DockOption {
        AnimatedDocks = 1,
        AllowNestedDocks = 2,
        AllowTabbedDocks = 4,
        ForceTabbedDocks = 8,
        VerticalTabs = 16
    }

    alias DockOption.AnimatedDocks AnimatedDocks;
    alias DockOption.AllowNestedDocks AllowNestedDocks;
    alias DockOption.AllowTabbedDocks AllowTabbedDocks;
    alias DockOption.ForceTabbedDocks ForceTabbedDocks;
    alias DockOption.VerticalTabs VerticalTabs;


    private static const string[] __signalSignatures = [
            "iconSizeChanged(QSize)", 
            "toolButtonStyleChanged(Qt::ToolButtonStyle)"    ];

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

    protected final void iconSizeChanged(const(QSize) iconSize) {
        qtd_QMainWindow_iconSizeChanged_QSize(qtdNativeId, iconSize);
    }

    protected final void toolButtonStyleChanged(Qt.ToolButtonStyle toolButtonStyle) {
        qtd_QMainWindow_toolButtonStyleChanged_ToolButtonStyle(qtdNativeId, toolButtonStyle);
    }
// Functions

    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QMainWindow_QMainWindow_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addDockWidget(Qt.DockWidgetArea area, QDockWidget dockwidget) {
        qtd_QMainWindow_addDockWidget_DockWidgetArea_QDockWidget(qtdNativeId, area, dockwidget is null ? null : dockwidget.qtdNativeId);
    }

    public final void addDockWidget(Qt.DockWidgetArea area, QDockWidget dockwidget, Qt.Orientation orientation) {
        qtd_QMainWindow_addDockWidget_DockWidgetArea_QDockWidget_Orientation(qtdNativeId, area, dockwidget is null ? null : dockwidget.qtdNativeId, orientation);
    }

    public final void addToolBar(QToolBar toolbar) {
        qtd_QMainWindow_addToolBar_QToolBar(qtdNativeId, toolbar is null ? null : toolbar.qtdNativeId);
    }

    public final void addToolBar(Qt.ToolBarArea area, QToolBar toolbar) {
        qtd_QMainWindow_addToolBar_ToolBarArea_QToolBar(qtdNativeId, area, toolbar is null ? null : toolbar.qtdNativeId);
    }

    public final QToolBar addToolBar(string title) {
        void *ret = qtd_QMainWindow_addToolBar_string(qtdNativeId, title);
        QToolBar __d_return_value = QToolBar.__getObject(ret);
        return __d_return_value;
    }

    public final void addToolBarBreak(Qt.ToolBarArea area = Qt.ToolBarArea.TopToolBarArea) {
        qtd_QMainWindow_addToolBarBreak_ToolBarArea(qtdNativeId, area);
    }

    public final QWidget centralWidget() const {
        void *ret = qtd_QMainWindow_centralWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final Qt.DockWidgetArea corner(Qt.Corner corner) const {
        return cast(Qt.DockWidgetArea) qtd_QMainWindow_corner_Corner_const(qtdNativeId, corner);
    }

    public final int dockOptions() const {
        return qtd_QMainWindow_dockOptions_const(qtdNativeId);
    }

    public final Qt.DockWidgetArea dockWidgetArea(QDockWidget dockwidget) const {
        return cast(Qt.DockWidgetArea) qtd_QMainWindow_dockWidgetArea_QDockWidget_const(qtdNativeId, dockwidget is null ? null : dockwidget.qtdNativeId);
    }

    public final bool documentMode() const {
        return qtd_QMainWindow_documentMode_const(qtdNativeId);
    }

    public final QSize iconSize() const {
        QSize res;
        qtd_QMainWindow_iconSize_const(qtdNativeId, &res);
        return res;
    }

    public final void insertToolBar(QToolBar before, QToolBar toolbar) {
        qtd_QMainWindow_insertToolBar_QToolBar_QToolBar(qtdNativeId, before is null ? null : before.qtdNativeId, toolbar is null ? null : toolbar.qtdNativeId);
    }

    public final void insertToolBarBreak(QToolBar before) {
        qtd_QMainWindow_insertToolBarBreak_QToolBar(qtdNativeId, before is null ? null : before.qtdNativeId);
    }

    public final bool isAnimated() const {
        return qtd_QMainWindow_isAnimated_const(qtdNativeId);
    }

    public final bool isDockNestingEnabled() const {
        return qtd_QMainWindow_isDockNestingEnabled_const(qtdNativeId);
    }

    public final bool isSeparator(const(QPoint) pos) const {
        return qtd_QMainWindow_isSeparator_QPoint_const(qtdNativeId, pos);
    }

    public final QMenuBar menuBar() const {
        void *ret = qtd_QMainWindow_menuBar_const(qtdNativeId);
        QMenuBar __d_return_value = QMenuBar.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget menuWidget() const {
        void *ret = qtd_QMainWindow_menuWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void removeDockWidget(QDockWidget dockwidget) {
        qtd_QMainWindow_removeDockWidget_QDockWidget(qtdNativeId, dockwidget is null ? null : dockwidget.qtdNativeId);
    }

    public final void removeToolBar(QToolBar toolbar) {
        qtd_QMainWindow_removeToolBar_QToolBar(qtdNativeId, toolbar is null ? null : toolbar.qtdNativeId);
    }

    public final void removeToolBarBreak(QToolBar before) {
        qtd_QMainWindow_removeToolBarBreak_QToolBar(qtdNativeId, before is null ? null : before.qtdNativeId);
    }

    public final bool restoreDockWidget(QDockWidget dockwidget) {
        return qtd_QMainWindow_restoreDockWidget_QDockWidget(qtdNativeId, dockwidget is null ? null : dockwidget.qtdNativeId);
    }

    public final bool restoreState(const(QByteArray) state, int version_ = 0) {
        return qtd_QMainWindow_restoreState_QByteArray_int(qtdNativeId, state is null ? null : (cast(QByteArray)state).qtdNativeId, version_);
    }

    public final QByteArray saveState(int version_ = 0) const {
        void* ret = qtd_QMainWindow_saveState_int_const(qtdNativeId, version_);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final void setAnimated(bool enabled) {
        qtd_QMainWindow_setAnimated_bool(qtdNativeId, enabled);
    }

    public final void setCentralWidget(QWidget widget) {
        qtd_QMainWindow_setCentralWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setCorner(Qt.Corner corner, Qt.DockWidgetArea area) {
        qtd_QMainWindow_setCorner_Corner_DockWidgetArea(qtdNativeId, corner, area);
    }

    public final void setDockNestingEnabled(bool enabled) {
        qtd_QMainWindow_setDockNestingEnabled_bool(qtdNativeId, enabled);
    }

    public final void setDockOptions(int options) {
        qtd_QMainWindow_setDockOptions_DockOptions(qtdNativeId, options);
    }

    public final void setDocumentMode(bool enabled) {
        qtd_QMainWindow_setDocumentMode_bool(qtdNativeId, enabled);
    }

    public final void setIconSize(const(QSize) iconSize) {
        qtd_QMainWindow_setIconSize_QSize(qtdNativeId, iconSize);
    }

    public final void setMenuBar(QMenuBar menubar) {
        qtd_QMainWindow_setMenuBar_QMenuBar(qtdNativeId, menubar is null ? null : menubar.qtdNativeId);
    }

    public final void setMenuWidget(QWidget menubar) {
        qtd_QMainWindow_setMenuWidget_QWidget(qtdNativeId, menubar is null ? null : menubar.qtdNativeId);
    }

    public final void setStatusBar(QStatusBar statusbar) {
        qtd_QMainWindow_setStatusBar_QStatusBar(qtdNativeId, statusbar is null ? null : statusbar.qtdNativeId);
    }

    public final void setTabPosition(int areas, QTabWidget.TabPosition tabPosition) {
        qtd_QMainWindow_setTabPosition_DockWidgetAreas_TabPosition(qtdNativeId, areas, tabPosition);
    }

    public final void setTabShape(QTabWidget.TabShape tabShape) {
        qtd_QMainWindow_setTabShape_TabShape(qtdNativeId, tabShape);
    }

    public final void setToolButtonStyle(Qt.ToolButtonStyle toolButtonStyle) {
        qtd_QMainWindow_setToolButtonStyle_ToolButtonStyle(qtdNativeId, toolButtonStyle);
    }

    public final void setUnifiedTitleAndToolBarOnMac(bool set) {
        qtd_QMainWindow_setUnifiedTitleAndToolBarOnMac_bool(qtdNativeId, set);
    }

    public final void splitDockWidget(QDockWidget after, QDockWidget dockwidget, Qt.Orientation orientation) {
        qtd_QMainWindow_splitDockWidget_QDockWidget_QDockWidget_Orientation(qtdNativeId, after is null ? null : after.qtdNativeId, dockwidget is null ? null : dockwidget.qtdNativeId, orientation);
    }

    public final QStatusBar statusBar() const {
        void *ret = qtd_QMainWindow_statusBar_const(qtdNativeId);
        QStatusBar __d_return_value = QStatusBar.__getObject(ret);
        return __d_return_value;
    }

    public final QTabWidget.TabPosition tabPosition(Qt.DockWidgetArea area) const {
        return cast(QTabWidget.TabPosition) qtd_QMainWindow_tabPosition_DockWidgetArea_const(qtdNativeId, area);
    }

    public final QTabWidget.TabShape tabShape() const {
        return cast(QTabWidget.TabShape) qtd_QMainWindow_tabShape_const(qtdNativeId);
    }

    public final QList!(QDockWidget) tabifiedDockWidgets(QDockWidget dockwidget) const {
        auto res = QList!(QDockWidget).opCall();
        qtd_QMainWindow_tabifiedDockWidgets_QDockWidget_const(qtdNativeId, &res, dockwidget is null ? null : dockwidget.qtdNativeId);
        return res;
    }

    public final void tabifyDockWidget(QDockWidget first, QDockWidget second) {
        qtd_QMainWindow_tabifyDockWidget_QDockWidget_QDockWidget(qtdNativeId, first is null ? null : first.qtdNativeId, second is null ? null : second.qtdNativeId);
    }

    public final Qt.ToolBarArea toolBarArea(QToolBar toolbar) const {
        return cast(Qt.ToolBarArea) qtd_QMainWindow_toolBarArea_QToolBar_const(qtdNativeId, toolbar is null ? null : toolbar.qtdNativeId);
    }

    public final bool toolBarBreak(QToolBar toolbar) const {
        return qtd_QMainWindow_toolBarBreak_QToolBar_const(qtdNativeId, toolbar is null ? null : toolbar.qtdNativeId);
    }

    public final Qt.ToolButtonStyle toolButtonStyle() const {
        return cast(Qt.ToolButtonStyle) qtd_QMainWindow_toolButtonStyle_const(qtdNativeId);
    }

    public final bool unifiedTitleAndToolBarOnMac() const {
        return qtd_QMainWindow_unifiedTitleAndToolBarOnMac_const(qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent event) {
        qtd_QMainWindow_contextMenuEvent_QContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QMenu createPopupMenu() {
        void *ret = qtd_QMainWindow_createPopupMenu(qtdNativeId);
        QMenu __d_return_value = QMenu.__getObject(ret);
        return __d_return_value;
    }

    public bool event(QEvent event) {
        return qtd_QMainWindow_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setAnimated(bool)", 
            "setDockNestingEnabled(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QMainWindow_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QMainWindow);
    }

    static QMainWindow __getObject(void* nativeId) {
        return static_cast!(QMainWindow)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QMainWindow_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QMainWindow_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QMainWindow(nativeId, initFlags);
        QMainWindow.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(const(QSize))("iconSizeChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(Qt.ToolButtonStyle)("toolButtonStyleChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setAnimated"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setDockNestingEnabled"), index));

    }

    public alias void __isQtType_QMainWindow;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QMainWindow_iconSizeChanged_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QMainWindow_toolButtonStyleChanged_ToolButtonStyle(void* __this_nativeId,
 int toolButtonStyle0);

// C wrappers
private extern(C) void* qtd_QMainWindow_QMainWindow_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) void  qtd_QMainWindow_addDockWidget_DockWidgetArea_QDockWidget(void* __this_nativeId,
 int area0,
 void* dockwidget1);
private extern(C) void  qtd_QMainWindow_addDockWidget_DockWidgetArea_QDockWidget_Orientation(void* __this_nativeId,
 int area0,
 void* dockwidget1,
 int orientation2);
private extern(C) void  qtd_QMainWindow_addToolBar_QToolBar(void* __this_nativeId,
 void* toolbar0);
private extern(C) void  qtd_QMainWindow_addToolBar_ToolBarArea_QToolBar(void* __this_nativeId,
 int area0,
 void* toolbar1);
private extern(C) void*  qtd_QMainWindow_addToolBar_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QMainWindow_addToolBarBreak_ToolBarArea(void* __this_nativeId,
 int area0);
private extern(C) void*  qtd_QMainWindow_centralWidget_const(void* __this_nativeId);
private extern(C) int  qtd_QMainWindow_corner_Corner_const(void* __this_nativeId,
 int corner0);
private extern(C) int  qtd_QMainWindow_dockOptions_const(void* __this_nativeId);
private extern(C) int  qtd_QMainWindow_dockWidgetArea_QDockWidget_const(void* __this_nativeId,
 void* dockwidget0);
private extern(C) bool  qtd_QMainWindow_documentMode_const(void* __this_nativeId);
private extern(C) void  qtd_QMainWindow_iconSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QMainWindow_insertToolBar_QToolBar_QToolBar(void* __this_nativeId,
 void* before0,
 void* toolbar1);
private extern(C) void  qtd_QMainWindow_insertToolBarBreak_QToolBar(void* __this_nativeId,
 void* before0);
private extern(C) bool  qtd_QMainWindow_isAnimated_const(void* __this_nativeId);
private extern(C) bool  qtd_QMainWindow_isDockNestingEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QMainWindow_isSeparator_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void*  qtd_QMainWindow_menuBar_const(void* __this_nativeId);
private extern(C) void*  qtd_QMainWindow_menuWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QMainWindow_removeDockWidget_QDockWidget(void* __this_nativeId,
 void* dockwidget0);
private extern(C) void  qtd_QMainWindow_removeToolBar_QToolBar(void* __this_nativeId,
 void* toolbar0);
private extern(C) void  qtd_QMainWindow_removeToolBarBreak_QToolBar(void* __this_nativeId,
 void* before0);
private extern(C) bool  qtd_QMainWindow_restoreDockWidget_QDockWidget(void* __this_nativeId,
 void* dockwidget0);
private extern(C) bool  qtd_QMainWindow_restoreState_QByteArray_int(void* __this_nativeId,
 void* state0,
 int version1);
private extern(C) void*  qtd_QMainWindow_saveState_int_const(void* __this_nativeId,
 int version0);
private extern(C) void  qtd_QMainWindow_setAnimated_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QMainWindow_setCentralWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QMainWindow_setCorner_Corner_DockWidgetArea(void* __this_nativeId,
 int corner0,
 int area1);
private extern(C) void  qtd_QMainWindow_setDockNestingEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QMainWindow_setDockOptions_DockOptions(void* __this_nativeId,
 int options0);
private extern(C) void  qtd_QMainWindow_setDocumentMode_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QMainWindow_setIconSize_QSize(void* __this_nativeId,
 QSize iconSize0);
private extern(C) void  qtd_QMainWindow_setMenuBar_QMenuBar(void* __this_nativeId,
 void* menubar0);
private extern(C) void  qtd_QMainWindow_setMenuWidget_QWidget(void* __this_nativeId,
 void* menubar0);
private extern(C) void  qtd_QMainWindow_setStatusBar_QStatusBar(void* __this_nativeId,
 void* statusbar0);
private extern(C) void  qtd_QMainWindow_setTabPosition_DockWidgetAreas_TabPosition(void* __this_nativeId,
 int areas0,
 int tabPosition1);
private extern(C) void  qtd_QMainWindow_setTabShape_TabShape(void* __this_nativeId,
 int tabShape0);
private extern(C) void  qtd_QMainWindow_setToolButtonStyle_ToolButtonStyle(void* __this_nativeId,
 int toolButtonStyle0);
private extern(C) void  qtd_QMainWindow_setUnifiedTitleAndToolBarOnMac_bool(void* __this_nativeId,
 bool set0);
private extern(C) void  qtd_QMainWindow_splitDockWidget_QDockWidget_QDockWidget_Orientation(void* __this_nativeId,
 void* after0,
 void* dockwidget1,
 int orientation2);
private extern(C) void*  qtd_QMainWindow_statusBar_const(void* __this_nativeId);
private extern(C) int  qtd_QMainWindow_tabPosition_DockWidgetArea_const(void* __this_nativeId,
 int area0);
private extern(C) int  qtd_QMainWindow_tabShape_const(void* __this_nativeId);
private extern(C) void  qtd_QMainWindow_tabifiedDockWidgets_QDockWidget_const(void* __this_nativeId,
 void* __d_return_value,
 void* dockwidget0);
private extern(C) void  qtd_QMainWindow_tabifyDockWidget_QDockWidget_QDockWidget(void* __this_nativeId,
 void* first0,
 void* second1);
private extern(C) int  qtd_QMainWindow_toolBarArea_QToolBar_const(void* __this_nativeId,
 void* toolbar0);
private extern(C) bool  qtd_QMainWindow_toolBarBreak_QToolBar_const(void* __this_nativeId,
 void* toolbar0);
private extern(C) int  qtd_QMainWindow_toolButtonStyle_const(void* __this_nativeId);
private extern(C) bool  qtd_QMainWindow_unifiedTitleAndToolBarOnMac_const(void* __this_nativeId);
private extern(C) void  qtd_QMainWindow_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QMainWindow_createPopupMenu(void* __this_nativeId);
private extern(C) bool  qtd_QMainWindow_event_QEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QMainWindow_createPopupMenu_dispatch; }
extern(C) void* qtd_export_QMainWindow_createPopupMenu_dispatch(void *dId){
    auto d_object = cast(QMainWindow) dId;
    QMenu ret_value = d_object.createPopupMenu();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QMainWindow_initCallBacks(void* virtuals);

extern(C) void static_init_QMainWindow() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QMainWindow_createPopupMenu_dispatch;
    qtd_QMainWindow_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QMainWindow_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QMainWindow) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QMainWindow_iconSizeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QMainWindow) dId;
        auto iconSize0 = *(cast(QSize*)args[1]);
        //d_object.iconSizeChanged_emit(iconSize0);
}*/
/*private extern(C) void qtd_QMainWindow_toolButtonStyleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QMainWindow) dId;
        auto toolButtonStyle0 = *(cast(Qt.ToolButtonStyle*)args[1]);
        //d_object.toolButtonStyleChanged_emit(toolButtonStyle0);
}*/

extern(C) QMetaObjectNative* qtd_QMainWindow_staticMetaObject();

extern(C) void qtd_QMainWindow_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QMainWindow_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
