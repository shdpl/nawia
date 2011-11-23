module qt.gui.QTabBar;

public import qt.gui.QTabBar_aux;
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
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.core.QRect;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QStyleOptionTab;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QColor;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
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


public class QTabBar : QWidget
{
    public enum Shape {
        RoundedNorth = 0,
        RoundedSouth = 1,
        RoundedWest = 2,
        RoundedEast = 3,
        TriangularNorth = 4,
        TriangularSouth = 5,
        TriangularWest = 6,
        TriangularEast = 7
    }

    alias Shape.RoundedNorth RoundedNorth;
    alias Shape.RoundedSouth RoundedSouth;
    alias Shape.RoundedWest RoundedWest;
    alias Shape.RoundedEast RoundedEast;
    alias Shape.TriangularNorth TriangularNorth;
    alias Shape.TriangularSouth TriangularSouth;
    alias Shape.TriangularWest TriangularWest;
    alias Shape.TriangularEast TriangularEast;


    private static const string[] __signalSignatures = [
            "currentChanged(int)", 
            "tabCloseRequested(int)", 
            "tabMoved(int,int)"    ];

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
        qtd_QTabBar_currentChanged_int(qtdNativeId, index);
    }

    protected final void tabCloseRequested(int index) {
        qtd_QTabBar_tabCloseRequested_int(qtdNativeId, index);
    }

    protected final void tabMoved(int from, int to) {
        qtd_QTabBar_tabMoved_int_int(qtdNativeId, from, to);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QTabBar_QTabBar_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int addTab(const(QIcon) icon, string text) {
        return qtd_QTabBar_addTab_QIcon_string(qtdNativeId, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
    }

    public final int addTab(string text) {
        return qtd_QTabBar_addTab_string(qtdNativeId, text);
    }

    public final int count() const {
        return qtd_QTabBar_count_const(qtdNativeId);
    }

    public final int currentIndex() const {
        return qtd_QTabBar_currentIndex_const(qtdNativeId);
    }

    public final bool documentMode() const {
        return qtd_QTabBar_documentMode_const(qtdNativeId);
    }

    public final bool drawBase() const {
        return qtd_QTabBar_drawBase_const(qtdNativeId);
    }

    public final Qt.TextElideMode elideMode() const {
        return cast(Qt.TextElideMode) qtd_QTabBar_elideMode_const(qtdNativeId);
    }

    public final bool expanding() const {
        return qtd_QTabBar_expanding_const(qtdNativeId);
    }

    public final QSize iconSize() const {
        QSize res;
        qtd_QTabBar_iconSize_const(qtdNativeId, &res);
        return res;
    }

    protected final void initStyleOption(QStyleOptionTab option, int tabIndex) const {
        qtd_QTabBar_initStyleOption_nativepointerQStyleOptionTab_int_const(qtdNativeId, option is null ? null : option.qtdNativeId, tabIndex);
    }

    public final int insertTab(int index, const(QIcon) icon, string text) {
        return qtd_QTabBar_insertTab_int_QIcon_string(qtdNativeId, index, icon is null ? null : (cast(QIcon)icon).qtdNativeId, text);
    }

    public final int insertTab(int index, string text) {
        return qtd_QTabBar_insertTab_int_string(qtdNativeId, index, text);
    }

    public final bool isMovable() const {
        return qtd_QTabBar_isMovable_const(qtdNativeId);
    }

    public final bool isTabEnabled(int index) const {
        return qtd_QTabBar_isTabEnabled_int_const(qtdNativeId, index);
    }

    public final void moveTab(int from, int to) {
        qtd_QTabBar_moveTab_int_int(qtdNativeId, from, to);
    }

    public final void removeTab(int index) {
        qtd_QTabBar_removeTab_int(qtdNativeId, index);
    }

    public final void setCurrentIndex(int index) {
        qtd_QTabBar_setCurrentIndex_int(qtdNativeId, index);
    }

    public final void setDocumentMode(bool set) {
        qtd_QTabBar_setDocumentMode_bool(qtdNativeId, set);
    }

    public final void setDrawBase(bool drawTheBase) {
        qtd_QTabBar_setDrawBase_bool(qtdNativeId, drawTheBase);
    }

    public final void setElideMode(Qt.TextElideMode arg__1) {
        qtd_QTabBar_setElideMode_TextElideMode(qtdNativeId, arg__1);
    }

    public final void setExpanding(bool enabled) {
        qtd_QTabBar_setExpanding_bool(qtdNativeId, enabled);
    }

    public final void setIconSize(const(QSize) size) {
        qtd_QTabBar_setIconSize_QSize(qtdNativeId, size);
    }

    public final void setMovable(bool movable) {
        qtd_QTabBar_setMovable_bool(qtdNativeId, movable);
    }

    public final void setShape(QTabBar.Shape shape) {
        qtd_QTabBar_setShape_Shape(qtdNativeId, shape);
    }

    public final void setTabData(int index, QVariant data) {
        qtd_QTabBar_setTabData_int_QVariant(qtdNativeId, index, data is null ? null : data.qtdNativeId);
    }

    public final void setTabEnabled(int index, bool arg__2) {
        qtd_QTabBar_setTabEnabled_int_bool(qtdNativeId, index, arg__2);
    }

    public final void setTabIcon(int index, const(QIcon) icon) {
        qtd_QTabBar_setTabIcon_int_QIcon(qtdNativeId, index, icon is null ? null : (cast(QIcon)icon).qtdNativeId);
    }

    public final void setTabText(int index, string text) {
        qtd_QTabBar_setTabText_int_string(qtdNativeId, index, text);
    }

    public final void setTabTextColor(int index, const(QColor) color) {
        qtd_QTabBar_setTabTextColor_int_QColor(qtdNativeId, index, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setTabToolTip(int index, string tip) {
        qtd_QTabBar_setTabToolTip_int_string(qtdNativeId, index, tip);
    }

    public final void setTabWhatsThis(int index, string text) {
        qtd_QTabBar_setTabWhatsThis_int_string(qtdNativeId, index, text);
    }

    public final void setTabsClosable(bool closable) {
        qtd_QTabBar_setTabsClosable_bool(qtdNativeId, closable);
    }

    public final void setUsesScrollButtons(bool useButtons) {
        qtd_QTabBar_setUsesScrollButtons_bool(qtdNativeId, useButtons);
    }

    public final QTabBar.Shape shape() const {
        return cast(QTabBar.Shape) qtd_QTabBar_shape_const(qtdNativeId);
    }

    public final int tabAt(const(QPoint) pos) const {
        return qtd_QTabBar_tabAt_QPoint_const(qtdNativeId, pos);
    }

    public final QVariant tabData(int index) const {
        void* ret = qtd_QTabBar_tabData_int_const(qtdNativeId, index);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QIcon tabIcon(int index) const {
        void* ret = qtd_QTabBar_tabIcon_int_const(qtdNativeId, index);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public final QRect tabRect(int index) const {
        QRect res;
        qtd_QTabBar_tabRect_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string tabText(int index) const {
        string res;
        qtd_QTabBar_tabText_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final QColor tabTextColor(int index) const {
        void* ret = qtd_QTabBar_tabTextColor_int_const(qtdNativeId, index);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final string tabToolTip(int index) const {
        string res;
        qtd_QTabBar_tabToolTip_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string tabWhatsThis(int index) const {
        string res;
        qtd_QTabBar_tabWhatsThis_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final bool tabsClosable() const {
        return qtd_QTabBar_tabsClosable_const(qtdNativeId);
    }

    public final bool usesScrollButtons() const {
        return qtd_QTabBar_usesScrollButtons_const(qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QTabBar_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QTabBar_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void hideEvent(QHideEvent arg__1) {
        qtd_QTabBar_hideEvent_QHideEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QTabBar_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QTabBar_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QTabBar_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QTabBar_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QTabBar_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QTabBar_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QTabBar_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QTabBar_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QTabBar_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void tabInserted(int index) {
        qtd_QTabBar_tabInserted_int(qtdNativeId, index);
    }

    protected void tabLayoutChange() {
        qtd_QTabBar_tabLayoutChange(qtdNativeId);
    }

    protected void tabRemoved(int index) {
        qtd_QTabBar_tabRemoved_int(qtdNativeId, index);
    }

    protected QSize tabSizeHint(int index) const {
        QSize res;
        qtd_QTabBar_tabSizeHint_int_const(qtdNativeId, &res, index);
        return res;
    }

    protected void wheelEvent(QWheelEvent event) {
        qtd_QTabBar_wheelEvent_QWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setCurrentIndex(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTabBar_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTabBar);
    }

    static QTabBar __getObject(void* nativeId) {
        return static_cast!(QTabBar)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTabBar_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTabBar_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTabBar(nativeId, initFlags);
        QTabBar.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("tabCloseRequested"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("tabMoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentIndex"), index));

    }

    public alias void __isQtType_QTabBar;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTabBar_currentChanged_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_tabCloseRequested_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_tabMoved_int_int(void* __this_nativeId,
 int from0,
 int to1);

// C wrappers
private extern(C) void* qtd_QTabBar_QTabBar_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QTabBar_addTab_QIcon_string(void* __this_nativeId,
 void* icon0,
 string text1);
private extern(C) int  qtd_QTabBar_addTab_string(void* __this_nativeId,
 string text0);
private extern(C) int  qtd_QTabBar_count_const(void* __this_nativeId);
private extern(C) int  qtd_QTabBar_currentIndex_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabBar_documentMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabBar_drawBase_const(void* __this_nativeId);
private extern(C) int  qtd_QTabBar_elideMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabBar_expanding_const(void* __this_nativeId);
private extern(C) void  qtd_QTabBar_iconSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QTabBar_initStyleOption_nativepointerQStyleOptionTab_int_const(void* __this_nativeId,
 void* option0,
 int tabIndex1);
private extern(C) int  qtd_QTabBar_insertTab_int_QIcon_string(void* __this_nativeId,
 int index0,
 void* icon1,
 string text2);
private extern(C) int  qtd_QTabBar_insertTab_int_string(void* __this_nativeId,
 int index0,
 string text1);
private extern(C) bool  qtd_QTabBar_isMovable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabBar_isTabEnabled_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_moveTab_int_int(void* __this_nativeId,
 int from0,
 int to1);
private extern(C) void  qtd_QTabBar_removeTab_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_setCurrentIndex_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_setDocumentMode_bool(void* __this_nativeId,
 bool set0);
private extern(C) void  qtd_QTabBar_setDrawBase_bool(void* __this_nativeId,
 bool drawTheBase0);
private extern(C) void  qtd_QTabBar_setElideMode_TextElideMode(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QTabBar_setExpanding_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QTabBar_setIconSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QTabBar_setMovable_bool(void* __this_nativeId,
 bool movable0);
private extern(C) void  qtd_QTabBar_setShape_Shape(void* __this_nativeId,
 int shape0);
private extern(C) void  qtd_QTabBar_setTabData_int_QVariant(void* __this_nativeId,
 int index0,
 void* data1);
private extern(C) void  qtd_QTabBar_setTabEnabled_int_bool(void* __this_nativeId,
 int index0,
 bool arg__2);
private extern(C) void  qtd_QTabBar_setTabIcon_int_QIcon(void* __this_nativeId,
 int index0,
 void* icon1);
private extern(C) void  qtd_QTabBar_setTabText_int_string(void* __this_nativeId,
 int index0,
 string text1);
private extern(C) void  qtd_QTabBar_setTabTextColor_int_QColor(void* __this_nativeId,
 int index0,
 void* color1);
private extern(C) void  qtd_QTabBar_setTabToolTip_int_string(void* __this_nativeId,
 int index0,
 string tip1);
private extern(C) void  qtd_QTabBar_setTabWhatsThis_int_string(void* __this_nativeId,
 int index0,
 string text1);
private extern(C) void  qtd_QTabBar_setTabsClosable_bool(void* __this_nativeId,
 bool closable0);
private extern(C) void  qtd_QTabBar_setUsesScrollButtons_bool(void* __this_nativeId,
 bool useButtons0);
private extern(C) int  qtd_QTabBar_shape_const(void* __this_nativeId);
private extern(C) int  qtd_QTabBar_tabAt_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void*  qtd_QTabBar_tabData_int_const(void* __this_nativeId,
 int index0);
private extern(C) void*  qtd_QTabBar_tabIcon_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_tabRect_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int index0);
private extern(C) void  qtd_QTabBar_tabText_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void*  qtd_QTabBar_tabTextColor_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_tabToolTip_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QTabBar_tabWhatsThis_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) bool  qtd_QTabBar_tabsClosable_const(void* __this_nativeId);
private extern(C) bool  qtd_QTabBar_usesScrollButtons_const(void* __this_nativeId);
private extern(C) void  qtd_QTabBar_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTabBar_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_hideEvent_QHideEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QTabBar_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTabBar_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QTabBar_tabInserted_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_tabLayoutChange(void* __this_nativeId);
private extern(C) void  qtd_QTabBar_tabRemoved_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QTabBar_tabSizeHint_int_const(void* __this_nativeId,
 QSize * __d_return_value,
 int index0);
private extern(C) void  qtd_QTabBar_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int index0) qtd_QTabBar_tabInserted_int_dispatch; }
extern(C) void qtd_export_QTabBar_tabInserted_int_dispatch(void *dId, int index0){
    auto d_object = cast(QTabBar) dId;
    d_object.tabInserted(index0);
}

extern(C){ extern void function(void *dId) qtd_QTabBar_tabLayoutChange_dispatch; }
extern(C) void qtd_export_QTabBar_tabLayoutChange_dispatch(void *dId){
    auto d_object = cast(QTabBar) dId;
    d_object.tabLayoutChange();
}

extern(C){ extern void function(void *dId, int index0) qtd_QTabBar_tabRemoved_int_dispatch; }
extern(C) void qtd_export_QTabBar_tabRemoved_int_dispatch(void *dId, int index0){
    auto d_object = cast(QTabBar) dId;
    d_object.tabRemoved(index0);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value, int index0) qtd_QTabBar_tabSizeHint_int_const_dispatch; }
extern(C) void qtd_export_QTabBar_tabSizeHint_int_const_dispatch(void *dId, QSize *__d_return_value, int index0){
    auto d_object = cast(QTabBar) dId;
    *__d_return_value = d_object.tabSizeHint(index0);
}

private extern (C) void qtd_QTabBar_initCallBacks(void* virtuals);

extern(C) void static_init_QTabBar() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QTabBar_tabInserted_int_dispatch;
    virt_arr[1] = &qtd_export_QTabBar_tabLayoutChange_dispatch;
    virt_arr[2] = &qtd_export_QTabBar_tabRemoved_int_dispatch;
    virt_arr[3] = &qtd_export_QTabBar_tabSizeHint_int_const_dispatch;
    qtd_QTabBar_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTabBar_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTabBar) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTabBar_currentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTabBar) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.currentChanged_emit(index0);
}*/
/*private extern(C) void qtd_QTabBar_tabCloseRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTabBar) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.tabCloseRequested_emit(index0);
}*/
/*private extern(C) void qtd_QTabBar_tabMoved_handle(void* dId, void** args) {
        auto d_object = cast(QTabBar) dId;
        auto from0 = *(cast(int*)args[1]);
        auto to1 = *(cast(int*)args[2]);
        //d_object.tabMoved_emit(from0, to1);
}*/

extern(C) QMetaObjectNative* qtd_QTabBar_staticMetaObject();

extern(C) void qtd_QTabBar_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTabBar_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
