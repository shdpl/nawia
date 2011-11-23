module qt.gui.QTabWidget;

public import qt.gui.QTabWidget_aux;
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
public import qt.gui.QTabBar;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QStyleOptionTabWidgetFrame;
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


public class QTabWidget : QWidget
{
    public enum TabShape {
        Rounded = 0,
        Triangular = 1
    }

    alias TabShape.Rounded Rounded;
    alias TabShape.Triangular Triangular;

    public enum TabPosition {
        North = 0,
        South = 1,
        West = 2,
        East = 3
    }

    alias TabPosition.North North;
    alias TabPosition.South South;
    alias TabPosition.West West;
    alias TabPosition.East East;


    private static const string[] __signalSignatures = [
            "currentChanged(int)", 
            "tabCloseRequested(int)"    ];

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

    protected final void currentChanged(int index) {
        qtd_QTabWidget_currentChanged_int(qtdNativeId, index);
    }

    protected final void tabCloseRequested(int index) {
        qtd_QTabWidget_tabCloseRequested_int(qtdNativeId, index);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTabWidget_QTabWidget_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int addTab(QWidget widget, const(QIcon) icon, string label) {
        return qtd_QTabWidget_addTab_QWidget_QIcon_string(qtdNativeId, widget is null ? null : widget.qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, label);
    }

    public final int addTab(QWidget widget, string arg__2) {
        return qtd_QTabWidget_addTab_QWidget_string(qtdNativeId, widget is null ? null : widget.qtdNativeId, arg__2);
    }

    public final void clear() {
        qtd_QTabWidget_clear(qtdNativeId);
    }

    public final QWidget cornerWidget(Qt.Corner corner = Qt.Corner.TopRightCorner) const {
        void *ret = qtd_QTabWidget_cornerWidget_Corner_const(qtdNativeId, corner);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int count() const {
        return qtd_QTabWidget_count_const(qtdNativeId);
    }

    public final int currentIndex() const {
        return qtd_QTabWidget_currentIndex_const(qtdNativeId);
    }

    public final QWidget currentWidget() const {
        void *ret = qtd_QTabWidget_currentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final bool documentMode() const {
        return qtd_QTabWidget_documentMode_const(qtdNativeId);
    }

    public final Qt.TextElideMode elideMode() const {
        return cast(Qt.TextElideMode) qtd_QTabWidget_elideMode_const(qtdNativeId);
    }

    public final QSize iconSize() const {
        QSize res;
        qtd_QTabWidget_iconSize_const(qtdNativeId, &res);
        return res;
    }

    public final int indexOf(QWidget widget) const {
        return qtd_QTabWidget_indexOf_QWidget_const(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    protected final void initStyleOption(QStyleOptionTabWidgetFrame option) const {
        qtd_QTabWidget_initStyleOption_nativepointerQStyleOptionTabWidgetFrame_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final int insertTab(int index, QWidget widget, const(QIcon) icon, string label) {
        return qtd_QTabWidget_insertTab_int_QWidget_QIcon_string(qtdNativeId, index, widget is null ? null : widget.qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, label);
    }

    public final int insertTab(int index, QWidget widget, string arg__3) {
        return qtd_QTabWidget_insertTab_int_QWidget_string(qtdNativeId, index, widget is null ? null : widget.qtdNativeId, arg__3);
    }

    public final bool isMovable() const {
        return qtd_QTabWidget_isMovable_const(qtdNativeId);
    }

    public final bool isTabEnabled(int index) const {
        return qtd_QTabWidget_isTabEnabled_int_const(qtdNativeId, index);
    }

    public final void removeTab(int index) {
        qtd_QTabWidget_removeTab_int(qtdNativeId, index);
    }

    public final void setCornerWidget(QWidget w, Qt.Corner corner = Qt.Corner.TopRightCorner) {
        qtd_QTabWidget_setCornerWidget_QWidget_Corner(qtdNativeId, w is null ? null : w.qtdNativeId, corner);
    }

    public final void setCurrentIndex(int index) {
        qtd_QTabWidget_setCurrentIndex_int(qtdNativeId, index);
    }

    public final void setCurrentWidget(QWidget widget) {
        qtd_QTabWidget_setCurrentWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setDocumentMode(bool set) {
        qtd_QTabWidget_setDocumentMode_bool(qtdNativeId, set);
    }

    public final void setElideMode(Qt.TextElideMode arg__1) {
        qtd_QTabWidget_setElideMode_TextElideMode(qtdNativeId, arg__1);
    }

    public final void setIconSize(const(QSize) size) {
        qtd_QTabWidget_setIconSize_QSize(qtdNativeId, size);
    }

    public final void setMovable(bool movable) {
        qtd_QTabWidget_setMovable_bool(qtdNativeId, movable);
    }

    protected final void setTabBar(QTabBar arg__1) {
        qtd_QTabWidget_setTabBar_QTabBar(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setTabEnabled(int index, bool arg__2) {
        qtd_QTabWidget_setTabEnabled_int_bool(qtdNativeId, index, arg__2);
    }

    public final void setTabIcon(int index, const(QIcon) icon) {
        qtd_QTabWidget_setTabIcon_int_QIcon(qtdNativeId, index, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setTabPosition(QTabWidget.TabPosition arg__1) {
        qtd_QTabWidget_setTabPosition_TabPosition(qtdNativeId, arg__1);
    }

    public final void setTabShape(QTabWidget.TabShape s) {
        qtd_QTabWidget_setTabShape_TabShape(qtdNativeId, s);
    }

    public final void setTabText(int index, string arg__2) {
        qtd_QTabWidget_setTabText_int_string(qtdNativeId, index, arg__2);
    }

    public final void setTabToolTip(int index, string tip) {
        qtd_QTabWidget_setTabToolTip_int_string(qtdNativeId, index, tip);
    }

    public final void setTabWhatsThis(int index, string text) {
        qtd_QTabWidget_setTabWhatsThis_int_string(qtdNativeId, index, text);
    }

    public final void setTabsClosable(bool closeable) {
        qtd_QTabWidget_setTabsClosable_bool(qtdNativeId, closeable);
    }

    public final void setUsesScrollButtons(bool useButtons) {
        qtd_QTabWidget_setUsesScrollButtons_bool(qtdNativeId, useButtons);
    }

    protected final QTabBar tabBar() const {
        void *ret = qtd_QTabWidget_tabBar_const(qtdNativeId);
        QTabBar __d_return_value = QTabBar.__getObject(ret);
        return __d_return_value;
    }

    public final QIcon tabIcon(int index) const {
        void* ret = qtd_QTabWidget_tabIcon_int_const(qtdNativeId, index);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final QTabWidget.TabPosition tabPosition() const {
        return cast(QTabWidget.TabPosition) qtd_QTabWidget_tabPosition_const(qtdNativeId);
    }

    public final QTabWidget.TabShape tabShape() const {
        return cast(QTabWidget.TabShape) qtd_QTabWidget_tabShape_const(qtdNativeId);
    }

    public final string tabText(int index) const {
        string res;
        qtd_QTabWidget_tabText_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string tabToolTip(int index) const {
        string res;
        qtd_QTabWidget_tabToolTip_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string tabWhatsThis(int index) const {
        string res;
        qtd_QTabWidget_tabWhatsThis_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final bool tabsClosable() const {
        return qtd_QTabWidget_tabsClosable_const(qtdNativeId);
    }

    public final bool usesScrollButtons() const {
        return qtd_QTabWidget_usesScrollButtons_const(qtdNativeId);
    }

    public final QWidget widget(int index) const {
        void *ret = qtd_QTabWidget_widget_int_const(qtdNativeId, index);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QTabWidget_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QTabWidget_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QTabWidget_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QTabWidget_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QTabWidget_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QTabWidget_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QTabWidget_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QTabWidget_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void tabInserted(int index) {
        qtd_QTabWidget_tabInserted_int(qtdNativeId, index);
    }

    protected void tabRemoved(int index) {
        qtd_QTabWidget_tabRemoved_int(qtdNativeId, index);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setCurrentIndex(int)", 
            "setCurrentWidget(QWidget*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTabWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTabWidget);
    }

    static QTabWidget __getObject(void* nativeId) {
        return static_cast!(QTabWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTabWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTabWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTabWidget(nativeId, initFlags);
        QTabWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("tabCloseRequested"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setCurrentWidget"), index));

    }

    public alias void __isQtType_QTabWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTabWidget_currentChanged_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabWidget_tabCloseRequested_int(void* __this_nativeId,
 int index0);

// C wrappers
private extern(C) void* qtd_QTabWidget_QTabWidget_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QTabWidget_addTab_QWidget_QIcon_string(void* __this_nativeId,
 void* widget0,
 void* icon1,
 string label2);
private extern(C) int  qtd_QTabWidget_addTab_QWidget_string(void* __this_nativeId,
 void* widget0,
 string arg__2);
private extern(C) void  qtd_QTabWidget_clear(void* __this_nativeId);
private extern(C) void*  qtd_QTabWidget_cornerWidget_Corner_const(void* __this_nativeId,
 int corner0);
private extern(C) int  qtd_QTabWidget_count_const(void* __this_nativeId);
private extern(C) int  qtd_QTabWidget_currentIndex_const(void* __this_nativeId);
private extern(C) void*  qtd_QTabWidget_currentWidget_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabWidget_documentMode_const(void* __this_nativeId);
private extern(C) int  qtd_QTabWidget_elideMode_const(void* __this_nativeId);
private extern(C) void  qtd_QTabWidget_iconSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) int  qtd_QTabWidget_indexOf_QWidget_const(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QTabWidget_initStyleOption_nativepointerQStyleOptionTabWidgetFrame_const(void* __this_nativeId,
 void* option0);
private extern(C) int  qtd_QTabWidget_insertTab_int_QWidget_QIcon_string(void* __this_nativeId,
 int index0,
 void* widget1,
 void* icon2,
 string label3);
private extern(C) int  qtd_QTabWidget_insertTab_int_QWidget_string(void* __this_nativeId,
 int index0,
 void* widget1,
 string arg__3);
private extern(C) bool  qtd_QTabWidget_isMovable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabWidget_isTabEnabled_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabWidget_removeTab_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabWidget_setCornerWidget_QWidget_Corner(void* __this_nativeId,
 void* w0,
 int corner1);
private extern(C) void  qtd_QTabWidget_setCurrentIndex_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabWidget_setCurrentWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QTabWidget_setDocumentMode_bool(void* __this_nativeId,
 bool set0);
private extern(C) void  qtd_QTabWidget_setElideMode_TextElideMode(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QTabWidget_setIconSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QTabWidget_setMovable_bool(void* __this_nativeId,
 bool movable0);
private extern(C) void  qtd_QTabWidget_setTabBar_QTabBar(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabWidget_setTabEnabled_int_bool(void* __this_nativeId,
 int index0,
 bool arg__2);
private extern(C) void  qtd_QTabWidget_setTabIcon_int_QIcon(void* __this_nativeId,
 int index0,
 void* icon1);
private extern(C) void  qtd_QTabWidget_setTabPosition_TabPosition(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QTabWidget_setTabShape_TabShape(void* __this_nativeId,
 int s0);
private extern(C) void  qtd_QTabWidget_setTabText_int_string(void* __this_nativeId,
 int index0,
 string arg__2);
private extern(C) void  qtd_QTabWidget_setTabToolTip_int_string(void* __this_nativeId,
 int index0,
 string tip1);
private extern(C) void  qtd_QTabWidget_setTabWhatsThis_int_string(void* __this_nativeId,
 int index0,
 string text1);
private extern(C) void  qtd_QTabWidget_setTabsClosable_bool(void* __this_nativeId,
 bool closeable0);
private extern(C) void  qtd_QTabWidget_setUsesScrollButtons_bool(void* __this_nativeId,
 bool useButtons0);
private extern(C) void*  qtd_QTabWidget_tabBar_const(void* __this_nativeId);
private extern(C) void*  qtd_QTabWidget_tabIcon_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QTabWidget_tabPosition_const(void* __this_nativeId);
private extern(C) int  qtd_QTabWidget_tabShape_const(void* __this_nativeId);
private extern(C) void  qtd_QTabWidget_tabText_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QTabWidget_tabToolTip_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QTabWidget_tabWhatsThis_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) bool  qtd_QTabWidget_tabsClosable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabWidget_usesScrollButtons_const(void* __this_nativeId);
private extern(C) void*  qtd_QTabWidget_widget_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabWidget_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTabWidget_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabWidget_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabWidget_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QTabWidget_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabWidget_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabWidget_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabWidget_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QTabWidget_tabInserted_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabWidget_tabRemoved_int(void* __this_nativeId,
 int index0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int index0) qtd_QTabWidget_tabInserted_int_dispatch; }
extern(C) void qtd_export_QTabWidget_tabInserted_int_dispatch(void *dId, int index0){
    auto d_object = cast(QTabWidget) dId;
    d_object.tabInserted(index0);
}

extern(C){ extern void function(void *dId, int index0) qtd_QTabWidget_tabRemoved_int_dispatch; }
extern(C) void qtd_export_QTabWidget_tabRemoved_int_dispatch(void *dId, int index0){
    auto d_object = cast(QTabWidget) dId;
    d_object.tabRemoved(index0);
}

private extern (C) void qtd_QTabWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QTabWidget() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QTabWidget_tabInserted_int_dispatch;
    virt_arr[1] = &qtd_export_QTabWidget_tabRemoved_int_dispatch;
    qtd_QTabWidget_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTabWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTabWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTabWidget_currentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTabWidget) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.currentChanged_emit(index0);
}*/
/*private extern(C) void qtd_QTabWidget_tabCloseRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTabWidget) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.tabCloseRequested_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QTabWidget_staticMetaObject();

extern(C) void qtd_QTabWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTabWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
