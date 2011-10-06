module qt.gui.QWidgetAction;

public import qt.gui.QWidgetAction_aux;
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
public import qt.core.QList;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QAction;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWidgetAction : QAction
{

    private static const string[] __signalSignatures = [    ];

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
// Functions

    public this(QObject parent_) {
        void* ret = qtd_QWidgetAction_QWidgetAction_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final QList!(QWidget) createdWidgets() const {
        auto res = QList!(QWidget).opCall();
        qtd_QWidgetAction_createdWidgets_const(qtdNativeId, &res);
        return res;
    }

    public final QWidget defaultWidget() const {
        void *ret = qtd_QWidgetAction_defaultWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void releaseWidget(QWidget widget) {
        qtd_QWidgetAction_releaseWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final QWidget requestWidget(QWidget parent_) {
        void *ret = qtd_QWidgetAction_requestWidget_QWidget(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void setDefaultWidget(QWidget w) {
        if (w !is null) {
            w.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QWidgetAction_setDefaultWidget_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    protected QWidget createWidget(QWidget parent_) {
        void *ret = qtd_QWidgetAction_createWidget_QWidget(qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void deleteWidget(QWidget widget) {
        qtd_QWidgetAction_deleteWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QWidgetAction_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QWidgetAction_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QWidgetAction_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QWidgetAction);
    }

    static QWidgetAction __getObject(void* nativeId) {
        return static_cast!(QWidgetAction)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QWidgetAction_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QWidgetAction_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QWidgetAction(nativeId, initFlags);
        QWidgetAction.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QWidgetAction;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWidgetAction_QWidgetAction_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QWidgetAction_createdWidgets_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QWidgetAction_defaultWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QWidgetAction_releaseWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void*  qtd_QWidgetAction_requestWidget_QWidget(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QWidgetAction_setDefaultWidget_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void*  qtd_QWidgetAction_createWidget_QWidget(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QWidgetAction_deleteWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) bool  qtd_QWidgetAction_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QWidgetAction_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, void* parent0) qtd_QWidgetAction_createWidget_QWidget_dispatch; }
extern(C) void* qtd_export_QWidgetAction_createWidget_QWidget_dispatch(void *dId, void* parent0){
    auto d_object = cast(QWidgetAction) dId;
    scope parent0_d_ref = new QWidget(parent0, QtdObjectInitFlags.onStack);

    QWidget ret_value = d_object.createWidget(parent0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* widget0) qtd_QWidgetAction_deleteWidget_QWidget_dispatch; }
extern(C) void qtd_export_QWidgetAction_deleteWidget_QWidget_dispatch(void *dId, void* widget0){
    auto d_object = cast(QWidgetAction) dId;
    scope widget0_d_ref = new QWidget(widget0, QtdObjectInitFlags.onStack);

    d_object.deleteWidget(widget0_d_ref);
}

private extern (C) void qtd_QWidgetAction_initCallBacks(void* virtuals);

extern(C) void static_init_QWidgetAction() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QWidgetAction_createWidget_QWidget_dispatch;
    virt_arr[1] = &qtd_export_QWidgetAction_deleteWidget_QWidget_dispatch;
    qtd_QWidgetAction_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QWidgetAction_changed_handle(void* dId, void** args) {
        auto d_object = cast(QWidgetAction) dId;
        //d_object.changed_emit();
}*/
/*private extern(C) void qtd_QWidgetAction_hovered_handle(void* dId, void** args) {
        auto d_object = cast(QWidgetAction) dId;
        //d_object.hovered_emit();
}*/
/*private extern(C) void qtd_QWidgetAction_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QWidgetAction) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(arg__1);
}*/
/*private extern(C) void qtd_QWidgetAction_triggered_handle(void* dId, void** args) {
        auto d_object = cast(QWidgetAction) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.triggered_emit(checked0);
}*/

extern(C) QMetaObjectNative* qtd_QWidgetAction_staticMetaObject();

extern(C) void qtd_QWidgetAction_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QWidgetAction_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
