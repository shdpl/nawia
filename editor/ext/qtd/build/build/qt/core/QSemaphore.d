module qt.core.QSemaphore;

public import qt.core.QSemaphore_aux;
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


public class QSemaphore : QtdObject
{

// Functions

    public this(int n = 0) {
        void* ret = qtd_QSemaphore_QSemaphore_int(cast(void*) this, n);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void acquire(int n = 1) {
        qtd_QSemaphore_acquire_int(qtdNativeId, n);
    }

    public final int available() const {
        return qtd_QSemaphore_available_const(qtdNativeId);
    }

    public final void release(int n = 1) {
        qtd_QSemaphore_release_int(qtdNativeId, n);
    }

    public final bool tryAcquire(int n = 1) {
        return qtd_QSemaphore_tryAcquire_int(qtdNativeId, n);
    }

    public final bool tryAcquire(int n, int timeout) {
        return qtd_QSemaphore_tryAcquire_int_int(qtdNativeId, n, timeout);
    }
// Field accessors
    static QSemaphore __getObject(void* nativeId) {
        return qtd_QSemaphore_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QSemaphore;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSemaphore_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSemaphore_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSemaphore_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QSemaphore qtd_QSemaphore_from_ptr(void* ret) {
    auto return_value = new QSemaphore(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QSemaphore_delete(void *ptr);
extern (C) void qtd_QSemaphore_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSemaphore_QSemaphore_int(void *d_ptr,
 int n0);
private extern(C) void  qtd_QSemaphore_acquire_int(void* __this_nativeId,
 int n0);
private extern(C) int  qtd_QSemaphore_available_const(void* __this_nativeId);
private extern(C) void  qtd_QSemaphore_release_int(void* __this_nativeId,
 int n0);
private extern(C) bool  qtd_QSemaphore_tryAcquire_int(void* __this_nativeId,
 int n0);
private extern(C) bool  qtd_QSemaphore_tryAcquire_int_int(void* __this_nativeId,
 int n0,
 int timeout1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSemaphore_initCallBacks(void* virtuals);

extern(C) void static_init_QSemaphore() {
    qtd_QSemaphore_initCallBacks(null);
}

// signal handlers

