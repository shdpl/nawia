module qt.gui.QStackedWidget;

public import qt.gui.QStackedWidget_aux;
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
public import qt.gui.QFrame;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
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


public class QStackedWidget : QFrame
{

    private static const string[] __signalSignatures = [
            "currentChanged(int)", 
            "widgetRemoved(int)"    ];

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

    protected final void currentChanged(int arg__1) {
        qtd_QStackedWidget_currentChanged_int(qtdNativeId, arg__1);
    }

    protected final void widgetRemoved(int index) {
        qtd_QStackedWidget_widgetRemoved_int(qtdNativeId, index);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QStackedWidget_QStackedWidget_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int addWidget(QWidget w) {
        return qtd_QStackedWidget_addWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final int count() const {
        return qtd_QStackedWidget_count_const(qtdNativeId);
    }

    public final int currentIndex() const {
        return qtd_QStackedWidget_currentIndex_const(qtdNativeId);
    }

    public final QWidget currentWidget() const {
        void *ret = qtd_QStackedWidget_currentWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int indexOf(QWidget arg__1) const {
        return qtd_QStackedWidget_indexOf_QWidget_const(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final int insertWidget(int index, QWidget w) {
        return qtd_QStackedWidget_insertWidget_int_QWidget(qtdNativeId, index, w is null ? null : w.qtdNativeId);
    }

    public final void removeWidget(QWidget w) {
        qtd_QStackedWidget_removeWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void setCurrentIndex(int index) {
        qtd_QStackedWidget_setCurrentIndex_int(qtdNativeId, index);
    }

    public final void setCurrentWidget(QWidget w) {
        qtd_QStackedWidget_setCurrentWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final QWidget widget(int arg__1) const {
        void *ret = qtd_QStackedWidget_widget_int_const(qtdNativeId, arg__1);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public bool event(QEvent e) {
        return qtd_QStackedWidget_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setCurrentIndex(int)", 
            "setCurrentWidget(QWidget*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStackedWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStackedWidget);
    }

    static QStackedWidget __getObject(void* nativeId) {
        return static_cast!(QStackedWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStackedWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStackedWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStackedWidget(nativeId, initFlags);
        QStackedWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("currentChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("widgetRemoved"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int)("setCurrentIndex"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setCurrentWidget"), index));

    }

    public alias void __isQtType_QStackedWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QStackedWidget_currentChanged_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QStackedWidget_widgetRemoved_int(void* __this_nativeId,
 int index0);

// C wrappers
private extern(C) void* qtd_QStackedWidget_QStackedWidget_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QStackedWidget_addWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) int  qtd_QStackedWidget_count_const(void* __this_nativeId);
private extern(C) int  qtd_QStackedWidget_currentIndex_const(void* __this_nativeId);
private extern(C) void*  qtd_QStackedWidget_currentWidget_const(void* __this_nativeId);
private extern(C) int  qtd_QStackedWidget_indexOf_QWidget_const(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QStackedWidget_insertWidget_int_QWidget(void* __this_nativeId,
 int index0,
 void* w1);
private extern(C) void  qtd_QStackedWidget_removeWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QStackedWidget_setCurrentIndex_int(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QStackedWidget_setCurrentWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void*  qtd_QStackedWidget_widget_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) bool  qtd_QStackedWidget_event_QEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStackedWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QStackedWidget() {
    qtd_QStackedWidget_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QStackedWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QStackedWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QStackedWidget_currentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStackedWidget) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.currentChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QStackedWidget_widgetRemoved_handle(void* dId, void** args) {
        auto d_object = cast(QStackedWidget) dId;
        auto index0 = *(cast(int*)args[1]);
        //d_object.widgetRemoved_emit(index0);
}*/

extern(C) QMetaObjectNative* qtd_QStackedWidget_staticMetaObject();

extern(C) void qtd_QStackedWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStackedWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
