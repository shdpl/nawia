module qt.core.QReadWriteLock;

public import qt.core.QReadWriteLock_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QReadWriteLock : QtdObject
{
    public enum RecursionMode {
        NonRecursive = 0,
        Recursive = 1
    }

    alias RecursionMode.NonRecursive NonRecursive;
    alias RecursionMode.Recursive Recursive;


// Functions

    public this() {
        void* ret = qtd_QReadWriteLock_QReadWriteLock(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QReadWriteLock.RecursionMode recursionMode) {
        void* ret = qtd_QReadWriteLock_QReadWriteLock_RecursionMode(cast(void*) this, recursionMode);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void lockForRead() {
        qtd_QReadWriteLock_lockForRead(qtdNativeId);
    }

    public final void lockForWrite() {
        qtd_QReadWriteLock_lockForWrite(qtdNativeId);
    }

    public final bool tryLockForRead() {
        return qtd_QReadWriteLock_tryLockForRead(qtdNativeId);
    }

    public final bool tryLockForRead(int timeout) {
        return qtd_QReadWriteLock_tryLockForRead_int(qtdNativeId, timeout);
    }

    public final bool tryLockForWrite() {
        return qtd_QReadWriteLock_tryLockForWrite(qtdNativeId);
    }

    public final bool tryLockForWrite(int timeout) {
        return qtd_QReadWriteLock_tryLockForWrite_int(qtdNativeId, timeout);
    }

    public final void unlock() {
        qtd_QReadWriteLock_unlock(qtdNativeId);
    }
// Field accessors
    static QReadWriteLock __getObject(void* nativeId) {
        return qtd_QReadWriteLock_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QReadWriteLock;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QReadWriteLock_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QReadWriteLock_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QReadWriteLock_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QReadWriteLock qtd_QReadWriteLock_from_ptr(void* ret) {
    auto return_value = new QReadWriteLock(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QReadWriteLock_delete(void *ptr);
extern (C) void qtd_QReadWriteLock_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QReadWriteLock_QReadWriteLock(void *d_ptr);
private extern(C) void* qtd_QReadWriteLock_QReadWriteLock_RecursionMode(void *d_ptr,
 int recursionMode0);
private extern(C) void  qtd_QReadWriteLock_lockForRead(void* __this_nativeId);
private extern(C) void  qtd_QReadWriteLock_lockForWrite(void* __this_nativeId);
private extern(C) bool  qtd_QReadWriteLock_tryLockForRead(void* __this_nativeId);
private extern(C) bool  qtd_QReadWriteLock_tryLockForRead_int(void* __this_nativeId,
 int timeout0);
private extern(C) bool  qtd_QReadWriteLock_tryLockForWrite(void* __this_nativeId);
private extern(C) bool  qtd_QReadWriteLock_tryLockForWrite_int(void* __this_nativeId,
 int timeout0);
private extern(C) void  qtd_QReadWriteLock_unlock(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QReadWriteLock_initCallBacks(void* virtuals);

extern(C) void static_init_QReadWriteLock() {
    qtd_QReadWriteLock_initCallBacks(null);
}

// signal handlers

