module qt.core.QEventLoop;

public import qt.core.QEventLoop_aux;
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
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QEventLoop : QObject
{
    public enum ProcessEventsFlag {
        AllEvents = 0,
        ExcludeUserInputEvents = 1,
        ExcludeSocketNotifiers = 2,
        WaitForMoreEvents = 4,
        X11ExcludeTimers = 8,
        DeferredDeletion = 16,
        EventLoopExec = 32,
        DialogExec = 64
    }

    alias ProcessEventsFlag.AllEvents AllEvents;
    alias ProcessEventsFlag.ExcludeUserInputEvents ExcludeUserInputEvents;
    alias ProcessEventsFlag.ExcludeSocketNotifiers ExcludeSocketNotifiers;
    alias ProcessEventsFlag.WaitForMoreEvents WaitForMoreEvents;
    alias ProcessEventsFlag.X11ExcludeTimers X11ExcludeTimers;
    alias ProcessEventsFlag.DeferredDeletion DeferredDeletion;
    alias ProcessEventsFlag.EventLoopExec EventLoopExec;
    alias ProcessEventsFlag.DialogExec DialogExec;


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

    public this(QObject parent_ = null) {
        void* ret = qtd_QEventLoop_QEventLoop_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int exec(int flags = 0) {
        return qtd_QEventLoop_exec_ProcessEventsFlags(qtdNativeId, flags);
    }

    public final void exit(int returnCode = 0) {
        qtd_QEventLoop_exit_int(qtdNativeId, returnCode);
    }

    public final bool isRunning() const {
        return qtd_QEventLoop_isRunning_const(qtdNativeId);
    }

    public final bool processEvents(int flags = 0) {
        return qtd_QEventLoop_processEvents_ProcessEventsFlags(qtdNativeId, flags);
    }

    public final void processEvents(int flags, int maximumTime) {
        qtd_QEventLoop_processEvents_ProcessEventsFlags_int(qtdNativeId, flags, maximumTime);
    }

    public final void quit() {
        qtd_QEventLoop_quit(qtdNativeId);
    }

    public final void wakeUp() {
        qtd_QEventLoop_wakeUp(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "quit()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QEventLoop_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QEventLoop);
    }

    static QEventLoop __getObject(void* nativeId) {
        return static_cast!(QEventLoop)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QEventLoop_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QEventLoop_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QEventLoop(nativeId, initFlags);
        QEventLoop.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("quit"), index));

    }

    public alias void __isQtType_QEventLoop;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QEventLoop_QEventLoop_QObject(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QEventLoop_exec_ProcessEventsFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QEventLoop_exit_int(void* __this_nativeId,
 int returnCode0);
private extern(C) bool  qtd_QEventLoop_isRunning_const(void* __this_nativeId);
private extern(C) bool  qtd_QEventLoop_processEvents_ProcessEventsFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QEventLoop_processEvents_ProcessEventsFlags_int(void* __this_nativeId,
 int flags0,
 int maximumTime1);
private extern(C) void  qtd_QEventLoop_quit(void* __this_nativeId);
private extern(C) void  qtd_QEventLoop_wakeUp(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QEventLoop_initCallBacks(void* virtuals);

extern(C) void static_init_QEventLoop() {
    qtd_QEventLoop_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QEventLoop_staticMetaObject();

extern(C) void qtd_QEventLoop_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QEventLoop_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
