module qt.core.QWaitCondition;

public import qt.core.QWaitCondition_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QMutex;
public import qt.core.QReadWriteLock;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWaitCondition : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QWaitCondition_QWaitCondition(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool wait(QMutex mutex, uint time = 0xffffffff) {
        return qtd_QWaitCondition_wait_QMutex_uint(qtdNativeId, mutex is null ? null : mutex.qtdNativeId, time);
    }

    public final bool wait(QReadWriteLock readWriteLock, uint time = 0xffffffff) {
        return qtd_QWaitCondition_wait_QReadWriteLock_uint(qtdNativeId, readWriteLock is null ? null : readWriteLock.qtdNativeId, time);
    }

    public final void wakeAll() {
        qtd_QWaitCondition_wakeAll(qtdNativeId);
    }

    public final void wakeOne() {
        qtd_QWaitCondition_wakeOne(qtdNativeId);
    }
// Field accessors
    static QWaitCondition __getObject(void* nativeId) {
        return qtd_QWaitCondition_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QWaitCondition;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QWaitCondition_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QWaitCondition_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QWaitCondition_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QWaitCondition qtd_QWaitCondition_from_ptr(void* ret) {
    auto return_value = new QWaitCondition(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QWaitCondition_delete(void *ptr);
extern (C) void qtd_QWaitCondition_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWaitCondition_QWaitCondition(void *d_ptr);
private extern(C) bool  qtd_QWaitCondition_wait_QMutex_uint(void* __this_nativeId,
 void* mutex0,
 uint time1);
private extern(C) bool  qtd_QWaitCondition_wait_QReadWriteLock_uint(void* __this_nativeId,
 void* readWriteLock0,
 uint time1);
private extern(C) void  qtd_QWaitCondition_wakeAll(void* __this_nativeId);
private extern(C) void  qtd_QWaitCondition_wakeOne(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QWaitCondition_initCallBacks(void* virtuals);

extern(C) void static_init_QWaitCondition() {
    qtd_QWaitCondition_initCallBacks(null);
}

// signal handlers

