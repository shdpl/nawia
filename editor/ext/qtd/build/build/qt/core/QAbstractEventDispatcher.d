module qt.core.QAbstractEventDispatcher;

public import qt.core.QAbstractEventDispatcher_aux;
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
private import qt.core.ArrayOps2;
// automatic imports-------------
public import qt.core.QObject;
public import qt.core.QSocketNotifier;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractEventDispatcher : QObject
{

    private static const string[] __signalSignatures = [
            "aboutToBlock()", 
            "awake()"    ];

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

    protected final void aboutToBlock() {
        qtd_QAbstractEventDispatcher_aboutToBlock(qtdNativeId);
    }

    protected final void awake() {
        qtd_QAbstractEventDispatcher_awake(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QAbstractEventDispatcher_QAbstractEventDispatcher_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int registerTimer(int interval, QObject object) {
        return qtd_QAbstractEventDispatcher_registerTimer_int_QObject(qtdNativeId, interval, object is null ? null : object.qtdNativeId);
    }

    public void closingDown() {
        qtd_QAbstractEventDispatcher_closingDown(qtdNativeId);
    }

    public abstract void flush();

    public abstract bool hasPendingEvents();

    public abstract void interrupt();

    public abstract bool processEvents(int flags);

    public abstract void registerSocketNotifier(QSocketNotifier notifier);

    public abstract void registerTimer(int timerId, int interval, QObject object);

    public void startingUp() {
        qtd_QAbstractEventDispatcher_startingUp(qtdNativeId);
    }

    public abstract void unregisterSocketNotifier(QSocketNotifier notifier);

    public abstract bool unregisterTimer(int timerId);

    public abstract bool unregisterTimers(QObject object);

    public abstract void wakeUp();
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractEventDispatcher_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractEventDispatcher);
    }

    static QAbstractEventDispatcher __getObject(void* nativeId) {
        return static_cast!(QAbstractEventDispatcher)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractEventDispatcher_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractEventDispatcher_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractEventDispatcher_ConcreteWrapper(nativeId, initFlags);
        QAbstractEventDispatcher.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("aboutToBlock"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("awake"), index));

    }

    public alias void __isQtType_QAbstractEventDispatcher;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractEventDispatcher_ConcreteWrapper : QAbstractEventDispatcher {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void flush() {
            qtd_QAbstractEventDispatcher_flush(qtdNativeId);
        }

        override         public bool hasPendingEvents() {
            return qtd_QAbstractEventDispatcher_hasPendingEvents(qtdNativeId);
        }

        override         public void interrupt() {
            qtd_QAbstractEventDispatcher_interrupt(qtdNativeId);
        }

        override         public bool processEvents(int flags) {
            return qtd_QAbstractEventDispatcher_processEvents_ProcessEventsFlags(qtdNativeId, flags);
        }

        override         public void registerSocketNotifier(QSocketNotifier notifier) {
            qtd_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier(qtdNativeId, notifier is null ? null : notifier.qtdNativeId);
        }

        override         public void registerTimer(int timerId, int interval, QObject object) {
            qtd_QAbstractEventDispatcher_registerTimer_int_int_QObject(qtdNativeId, timerId, interval, object is null ? null : object.qtdNativeId);
        }

        override         public void unregisterSocketNotifier(QSocketNotifier notifier) {
            qtd_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier(qtdNativeId, notifier is null ? null : notifier.qtdNativeId);
        }

        override         public bool unregisterTimer(int timerId) {
            return qtd_QAbstractEventDispatcher_unregisterTimer_int(qtdNativeId, timerId);
        }

        override         public bool unregisterTimers(QObject object) {
            return qtd_QAbstractEventDispatcher_unregisterTimers_QObject(qtdNativeId, object is null ? null : object.qtdNativeId);
        }

        override         public void wakeUp() {
            qtd_QAbstractEventDispatcher_wakeUp(qtdNativeId);
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractEventDispatcher_aboutToBlock(void* __this_nativeId);
private extern(C) void  qtd_QAbstractEventDispatcher_awake(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QAbstractEventDispatcher_QAbstractEventDispatcher_QObject(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QAbstractEventDispatcher_registerTimer_int_QObject(void* __this_nativeId,
 int interval0,
 void* object1);
private extern(C) void  qtd_QAbstractEventDispatcher_closingDown(void* __this_nativeId);
private extern(C) void  qtd_QAbstractEventDispatcher_flush(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractEventDispatcher_hasPendingEvents(void* __this_nativeId);
private extern(C) void  qtd_QAbstractEventDispatcher_interrupt(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractEventDispatcher_processEvents_ProcessEventsFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier(void* __this_nativeId,
 void* notifier0);
private extern(C) void  qtd_QAbstractEventDispatcher_registerTimer_int_int_QObject(void* __this_nativeId,
 int timerId0,
 int interval1,
 void* object2);
private extern(C) void  qtd_QAbstractEventDispatcher_startingUp(void* __this_nativeId);
private extern(C) void  qtd_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier(void* __this_nativeId,
 void* notifier0);
private extern(C) bool  qtd_QAbstractEventDispatcher_unregisterTimer_int(void* __this_nativeId,
 int timerId0);
private extern(C) bool  qtd_QAbstractEventDispatcher_unregisterTimers_QObject(void* __this_nativeId,
 void* object0);
private extern(C) void  qtd_QAbstractEventDispatcher_wakeUp(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QAbstractEventDispatcher_closingDown_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_closingDown_dispatch(void *dId){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    d_object.closingDown();
}

extern(C){ extern void function(void *dId) qtd_QAbstractEventDispatcher_flush_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_flush_dispatch(void *dId){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    d_object.flush();
}

extern(C){ extern bool function(void *dId) qtd_QAbstractEventDispatcher_hasPendingEvents_dispatch; }
extern(C) bool qtd_export_QAbstractEventDispatcher_hasPendingEvents_dispatch(void *dId){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    auto return_value = d_object.hasPendingEvents();
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QAbstractEventDispatcher_interrupt_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_interrupt_dispatch(void *dId){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    d_object.interrupt();
}

extern(C){ extern bool function(void *dId, int flags0) qtd_QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch; }
extern(C) bool qtd_export_QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch(void *dId, int flags0){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    auto return_value = d_object.processEvents(flags0);
    return return_value;
}

extern(C){ extern void function(void *dId, void* notifier0) qtd_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch(void *dId, void* notifier0){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    scope notifier0_d_ref = new QSocketNotifier(notifier0, QtdObjectInitFlags.onStack);

    d_object.registerSocketNotifier(notifier0_d_ref);
}

extern(C){ extern void function(void *dId, int timerId0, int interval1, void* object2) qtd_QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch(void *dId, int timerId0, int interval1, void* object2){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    scope object2_d_ref = new QObject(object2, QtdObjectInitFlags.onStack);

    d_object.registerTimer(timerId0, interval1, object2_d_ref);
}

extern(C){ extern void function(void *dId) qtd_QAbstractEventDispatcher_startingUp_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_startingUp_dispatch(void *dId){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    d_object.startingUp();
}

extern(C){ extern void function(void *dId, void* notifier0) qtd_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch(void *dId, void* notifier0){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    scope notifier0_d_ref = new QSocketNotifier(notifier0, QtdObjectInitFlags.onStack);

    d_object.unregisterSocketNotifier(notifier0_d_ref);
}

extern(C){ extern bool function(void *dId, int timerId0) qtd_QAbstractEventDispatcher_unregisterTimer_int_dispatch; }
extern(C) bool qtd_export_QAbstractEventDispatcher_unregisterTimer_int_dispatch(void *dId, int timerId0){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    auto return_value = d_object.unregisterTimer(timerId0);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* object0) qtd_QAbstractEventDispatcher_unregisterTimers_QObject_dispatch; }
extern(C) bool qtd_export_QAbstractEventDispatcher_unregisterTimers_QObject_dispatch(void *dId, void* object0){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    scope object0_d_ref = new QObject(object0, QtdObjectInitFlags.onStack);

    auto return_value = d_object.unregisterTimers(object0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QAbstractEventDispatcher_wakeUp_dispatch; }
extern(C) void qtd_export_QAbstractEventDispatcher_wakeUp_dispatch(void *dId){
    auto d_object = cast(QAbstractEventDispatcher) dId;
    d_object.wakeUp();
}

private extern (C) void qtd_QAbstractEventDispatcher_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractEventDispatcher() {
    void*[12] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractEventDispatcher_closingDown_dispatch;
    virt_arr[1] = &qtd_export_QAbstractEventDispatcher_flush_dispatch;
    virt_arr[2] = &qtd_export_QAbstractEventDispatcher_hasPendingEvents_dispatch;
    virt_arr[3] = &qtd_export_QAbstractEventDispatcher_interrupt_dispatch;
    virt_arr[4] = &qtd_export_QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch;
    virt_arr[5] = &qtd_export_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch;
    virt_arr[6] = &qtd_export_QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch;
    virt_arr[7] = &qtd_export_QAbstractEventDispatcher_startingUp_dispatch;
    virt_arr[8] = &qtd_export_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch;
    virt_arr[9] = &qtd_export_QAbstractEventDispatcher_unregisterTimer_int_dispatch;
    virt_arr[10] = &qtd_export_QAbstractEventDispatcher_unregisterTimers_QObject_dispatch;
    virt_arr[11] = &qtd_export_QAbstractEventDispatcher_wakeUp_dispatch;
    qtd_QAbstractEventDispatcher_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractEventDispatcher_aboutToBlock_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractEventDispatcher) dId;
        //d_object.aboutToBlock_emit();
}*/
/*private extern(C) void qtd_QAbstractEventDispatcher_awake_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractEventDispatcher) dId;
        //d_object.awake_emit();
}*/

extern(C) QMetaObjectNative* qtd_QAbstractEventDispatcher_staticMetaObject();

extern(C) void qtd_QAbstractEventDispatcher_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractEventDispatcher_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
