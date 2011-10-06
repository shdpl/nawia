module qt.core.QMutex;

public import qt.core.QMutex_aux;
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


public class QMutex : QtdObject
{
    public enum RecursionMode {
        NonRecursive = 0,
        Recursive = 1
    }

    alias RecursionMode.NonRecursive NonRecursive;
    alias RecursionMode.Recursive Recursive;


// Functions

    public this(QMutex.RecursionMode mode = QMutex.RecursionMode.NonRecursive) {
        void* ret = qtd_QMutex_QMutex_RecursionMode(cast(void*) this, mode);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void lock() {
        qtd_QMutex_lock(qtdNativeId);
    }

    public final bool tryLock() {
        return qtd_QMutex_tryLock(qtdNativeId);
    }

    public final bool tryLock(int timeout) {
        return qtd_QMutex_tryLock_int(qtdNativeId, timeout);
    }

    public final void unlock() {
        qtd_QMutex_unlock(qtdNativeId);
    }
// Field accessors
    static QMutex __getObject(void* nativeId) {
        return qtd_QMutex_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QMutex;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QMutex_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QMutex_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QMutex_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QMutex qtd_QMutex_from_ptr(void* ret) {
    auto return_value = new QMutex(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QMutex_delete(void *ptr);
extern (C) void qtd_QMutex_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QMutex_QMutex_RecursionMode(void *d_ptr,
 int mode0);
private extern(C) void  qtd_QMutex_lock(void* __this_nativeId);
private extern(C) bool  qtd_QMutex_tryLock(void* __this_nativeId);
private extern(C) bool  qtd_QMutex_tryLock_int(void* __this_nativeId,
 int timeout0);
private extern(C) void  qtd_QMutex_unlock(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QMutex_initCallBacks(void* virtuals);

extern(C) void static_init_QMutex() {
    qtd_QMutex_initCallBacks(null);
}

// signal handlers

