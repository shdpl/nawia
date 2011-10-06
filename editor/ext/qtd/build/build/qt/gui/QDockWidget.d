module qt.gui.QDockWidget;

public import qt.gui.QDockWidget_aux;
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
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QStyleOptionDockWidget;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QAction;
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


public class QDockWidget : QWidget
{
    public enum DockWidgetFeature {
        DockWidgetClosable = 1,
        DockWidgetMovable = 2,
        DockWidgetFloatable = 4,
        DockWidgetVerticalTitleBar = 8,
        DockWidgetFeatureMask = 15,
        AllDockWidgetFeatures = 7,
        NoDockWidgetFeatures = 0,
        Reserved = 255
    }

    alias DockWidgetFeature.DockWidgetClosable DockWidgetClosable;
    alias DockWidgetFeature.DockWidgetMovable DockWidgetMovable;
    alias DockWidgetFeature.DockWidgetFloatable DockWidgetFloatable;
    alias DockWidgetFeature.DockWidgetVerticalTitleBar DockWidgetVerticalTitleBar;
    alias DockWidgetFeature.DockWidgetFeatureMask DockWidgetFeatureMask;
    alias DockWidgetFeature.AllDockWidgetFeatures AllDockWidgetFeatures;
    alias DockWidgetFeature.NoDockWidgetFeatures NoDockWidgetFeatures;
    alias DockWidgetFeature.Reserved Reserved;


    private static const string[] __signalSignatures = [
            "allowedAreasChanged(QFlags<Qt::DockWidgetArea>)", 
            "dockLocationChanged(Qt::DockWidgetArea)", 
            "featuresChanged(QFlags<QDockWidget::DockWidgetFeature>)", 
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

    protected final void allowedAreasChanged(int allowedAreas) {
        qtd_QDockWidget_allowedAreasChanged_DockWidgetAreas(qtdNativeId, allowedAreas);
    }

    protected final void dockLocationChanged(Qt.DockWidgetArea area) {
        qtd_QDockWidget_dockLocationChanged_DockWidgetArea(qtdNativeId, area);
    }

    protected final void featuresChanged(int features) {
        qtd_QDockWidget_featuresChanged_DockWidgetFeatures(qtdNativeId, features);
    }

    protected final void topLevelChanged(bool topLevel) {
        qtd_QDockWidget_topLevelChanged_bool(qtdNativeId, topLevel);
    }

    protected final void visibilityChanged(bool visible) {
        qtd_QDockWidget_visibilityChanged_bool(qtdNativeId, visible);
    }
// Functions

    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QDockWidget_QDockWidget_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string title, QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QDockWidget_QDockWidget_string_QWidget_WindowFlags(cast(void*) this, title, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int allowedAreas() const {
        return qtd_QDockWidget_allowedAreas_const(qtdNativeId);
    }

    public final int features() const {
        return qtd_QDockWidget_features_const(qtdNativeId);
    }

    protected final void initStyleOption(QStyleOptionDockWidget option) const {
        qtd_QDockWidget_initStyleOption_nativepointerQStyleOptionDockWidget_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final bool isAreaAllowed(Qt.DockWidgetArea area) const {
        return qtd_QDockWidget_isAreaAllowed_DockWidgetArea_const(qtdNativeId, area);
    }

    public final bool isFloating() const {
        return qtd_QDockWidget_isFloating_const(qtdNativeId);
    }

    public final void setAllowedAreas(int areas) {
        qtd_QDockWidget_setAllowedAreas_DockWidgetAreas(qtdNativeId, areas);
    }

    public final void setFeatures(int features) {
        qtd_QDockWidget_setFeatures_DockWidgetFeatures(qtdNativeId, features);
    }

    public final void setFloating(bool floating) {
        qtd_QDockWidget_setFloating_bool(qtdNativeId, floating);
    }

    public final void setTitleBarWidget(QWidget widget) {
        qtd_QDockWidget_setTitleBarWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setWidget(QWidget widget) {
        qtd_QDockWidget_setWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final QWidget titleBarWidget() const {
        void *ret = qtd_QDockWidget_titleBarWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QAction toggleViewAction() const {
        void *ret = qtd_QDockWidget_toggleViewAction_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget widget() const {
        void *ret = qtd_QDockWidget_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void changeEvent(QEvent event) {
        qtd_QDockWidget_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void closeEvent(QCloseEvent event) {
        qtd_QDockWidget_closeEvent_QCloseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QDockWidget_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QDockWidget_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDockWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDockWidget);
    }

    static QDockWidget __getObject(void* nativeId) {
        return static_cast!(QDockWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDockWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDockWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDockWidget(nativeId, initFlags);
        QDockWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("allowedAreasChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(Qt.DockWidgetArea)("dockLocationChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int)("featuresChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("topLevelChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(bool)("visibilityChanged"), index));

    }

    public alias void __isQtType_QDockWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDockWidget_allowedAreasChanged_DockWidgetAreas(void* __this_nativeId,
 int allowedAreas0);
private extern(C) void  qtd_QDockWidget_dockLocationChanged_DockWidgetArea(void* __this_nativeId,
 int area0);
private extern(C) void  qtd_QDockWidget_featuresChanged_DockWidgetFeatures(void* __this_nativeId,
 int features0);
private extern(C) void  qtd_QDockWidget_topLevelChanged_bool(void* __this_nativeId,
 bool topLevel0);
private extern(C) void  qtd_QDockWidget_visibilityChanged_bool(void* __this_nativeId,
 bool visible0);

// C wrappers
private extern(C) void* qtd_QDockWidget_QDockWidget_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) void* qtd_QDockWidget_QDockWidget_string_QWidget_WindowFlags(void *d_ptr,
 string title0,
 void* parent1,
 int flags2);
private extern(C) int  qtd_QDockWidget_allowedAreas_const(void* __this_nativeId);
private extern(C) int  qtd_QDockWidget_features_const(void* __this_nativeId);
private extern(C) void  qtd_QDockWidget_initStyleOption_nativepointerQStyleOptionDockWidget_const(void* __this_nativeId,
 void* option0);
private extern(C) bool  qtd_QDockWidget_isAreaAllowed_DockWidgetArea_const(void* __this_nativeId,
 int area0);
private extern(C) bool  qtd_QDockWidget_isFloating_const(void* __this_nativeId);
private extern(C) void  qtd_QDockWidget_setAllowedAreas_DockWidgetAreas(void* __this_nativeId,
 int areas0);
private extern(C) void  qtd_QDockWidget_setFeatures_DockWidgetFeatures(void* __this_nativeId,
 int features0);
private extern(C) void  qtd_QDockWidget_setFloating_bool(void* __this_nativeId,
 bool floating0);
private extern(C) void  qtd_QDockWidget_setTitleBarWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QDockWidget_setWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void*  qtd_QDockWidget_titleBarWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QDockWidget_toggleViewAction_const(void* __this_nativeId);
private extern(C) void*  qtd_QDockWidget_widget_const(void* __this_nativeId);
private extern(C) void  qtd_QDockWidget_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QDockWidget_closeEvent_QCloseEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QDockWidget_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QDockWidget_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDockWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QDockWidget() {
    qtd_QDockWidget_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QDockWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDockWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QDockWidget_allowedAreasChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDockWidget) dId;
        auto allowedAreas0 = *(cast(Qt.DockWidgetAreas*)args[1]);
        //d_object.allowedAreasChanged_emit(allowedAreas0);
}*/
/*private extern(C) void qtd_QDockWidget_dockLocationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDockWidget) dId;
        auto area0 = *(cast(Qt.DockWidgetArea*)args[1]);
        //d_object.dockLocationChanged_emit(area0);
}*/
/*private extern(C) void qtd_QDockWidget_featuresChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDockWidget) dId;
        auto features0 = *(cast(QDockWidget.DockWidgetFeatures*)args[1]);
        //d_object.featuresChanged_emit(features0);
}*/
/*private extern(C) void qtd_QDockWidget_topLevelChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDockWidget) dId;
        auto topLevel0 = *(cast(bool*)args[1]);
        //d_object.topLevelChanged_emit(topLevel0);
}*/
/*private extern(C) void qtd_QDockWidget_visibilityChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDockWidget) dId;
        auto visible0 = *(cast(bool*)args[1]);
        //d_object.visibilityChanged_emit(visible0);
}*/

extern(C) QMetaObjectNative* qtd_QDockWidget_staticMetaObject();

extern(C) void qtd_QDockWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDockWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
