module qt.core.QThreadPool;

public import qt.core.QThreadPool_aux;
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
public import qt.core.QRunnable;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QThreadPool : QObject
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

    public this(QObject parent_ = null) {
        void* ret = qtd_QThreadPool_QThreadPool_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int activeThreadCount() const {
        return qtd_QThreadPool_activeThreadCount_const(qtdNativeId);
    }

    public final int expiryTimeout() const {
        return qtd_QThreadPool_expiryTimeout_const(qtdNativeId);
    }

    public final int maxThreadCount() const {
        return qtd_QThreadPool_maxThreadCount_const(qtdNativeId);
    }

    public final void releaseThread() {
        qtd_QThreadPool_releaseThread(qtdNativeId);
    }

    public final void reserveThread() {
        qtd_QThreadPool_reserveThread(qtdNativeId);
    }

    public final void setExpiryTimeout(int expiryTimeout) {
        qtd_QThreadPool_setExpiryTimeout_int(qtdNativeId, expiryTimeout);
    }

    public final void setMaxThreadCount(int maxThreadCount) {
        qtd_QThreadPool_setMaxThreadCount_int(qtdNativeId, maxThreadCount);
    }

    public final void start(QRunnable runnable, int priority = 0) {
        qtd_QThreadPool_start_QRunnable_int(qtdNativeId, runnable is null ? null : runnable.qtdNativeId, priority);
    }

    public final bool tryStart(QRunnable runnable) {
        return qtd_QThreadPool_tryStart_QRunnable(qtdNativeId, runnable is null ? null : runnable.qtdNativeId);
    }

    public final void waitForDone() {
        qtd_QThreadPool_waitForDone(qtdNativeId);
    }

    public static QThreadPool globalInstance() {
        void *ret = qtd_QThreadPool_globalInstance();
        QThreadPool __d_return_value = QThreadPool.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QThreadPool_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QThreadPool);
    }

    static QThreadPool __getObject(void* nativeId) {
        return static_cast!(QThreadPool)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QThreadPool_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QThreadPool_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QThreadPool(nativeId, initFlags);
        QThreadPool.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QThreadPool;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QThreadPool_QThreadPool_QObject(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QThreadPool_activeThreadCount_const(void* __this_nativeId);
private extern(C) int  qtd_QThreadPool_expiryTimeout_const(void* __this_nativeId);
private extern(C) int  qtd_QThreadPool_maxThreadCount_const(void* __this_nativeId);
private extern(C) void  qtd_QThreadPool_releaseThread(void* __this_nativeId);
private extern(C) void  qtd_QThreadPool_reserveThread(void* __this_nativeId);
private extern(C) void  qtd_QThreadPool_setExpiryTimeout_int(void* __this_nativeId,
 int expiryTimeout0);
private extern(C) void  qtd_QThreadPool_setMaxThreadCount_int(void* __this_nativeId,
 int maxThreadCount0);
private extern(C) void  qtd_QThreadPool_start_QRunnable_int(void* __this_nativeId,
 void* runnable0,
 int priority1);
private extern(C) bool  qtd_QThreadPool_tryStart_QRunnable(void* __this_nativeId,
 void* runnable0);
private extern(C) void  qtd_QThreadPool_waitForDone(void* __this_nativeId);
private extern(C) void*  qtd_QThreadPool_globalInstance();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QThreadPool_initCallBacks(void* virtuals);

extern(C) void static_init_QThreadPool() {
    qtd_QThreadPool_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QThreadPool_staticMetaObject();

extern(C) void qtd_QThreadPool_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QThreadPool_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
