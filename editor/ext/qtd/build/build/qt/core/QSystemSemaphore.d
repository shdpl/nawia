module qt.core.QSystemSemaphore;

public import qt.core.QSystemSemaphore_aux;
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


public class QSystemSemaphore : QtdObject
{
    public enum AccessMode {
        Open = 0,
        Create = 1
    }

    alias AccessMode.Open Open;
    alias AccessMode.Create Create;

    public enum SystemSemaphoreError {
        NoError = 0,
        PermissionDenied = 1,
        KeyError = 2,
        AlreadyExists = 3,
        NotFound = 4,
        OutOfResources = 5,
        UnknownError = 6
    }

    alias SystemSemaphoreError.NoError NoError;
    alias SystemSemaphoreError.PermissionDenied PermissionDenied;
    alias SystemSemaphoreError.KeyError KeyError;
    alias SystemSemaphoreError.AlreadyExists AlreadyExists;
    alias SystemSemaphoreError.NotFound NotFound;
    alias SystemSemaphoreError.OutOfResources OutOfResources;
    alias SystemSemaphoreError.UnknownError UnknownError;


// Functions

    public this(string key, int initialValue = 0, QSystemSemaphore.AccessMode mode = QSystemSemaphore.AccessMode.Open) {
        void* ret = qtd_QSystemSemaphore_QSystemSemaphore_string_int_AccessMode(cast(void*) this, key, initialValue, mode);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool acquire() {
        return qtd_QSystemSemaphore_acquire(qtdNativeId);
    }

    public final QSystemSemaphore.SystemSemaphoreError error() const {
        return cast(QSystemSemaphore.SystemSemaphoreError) qtd_QSystemSemaphore_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QSystemSemaphore_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final string key() const {
        string res;
        qtd_QSystemSemaphore_key_const(qtdNativeId, &res);
        return res;
    }

    public final bool release(int n = 1) {
        return qtd_QSystemSemaphore_release_int(qtdNativeId, n);
    }

    public final void setKey(string key, int initialValue = 0, QSystemSemaphore.AccessMode mode = QSystemSemaphore.AccessMode.Open) {
        qtd_QSystemSemaphore_setKey_string_int_AccessMode(qtdNativeId, key, initialValue, mode);
    }
// Field accessors
    static QSystemSemaphore __getObject(void* nativeId) {
        return qtd_QSystemSemaphore_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QSystemSemaphore;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QSystemSemaphore_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QSystemSemaphore_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QSystemSemaphore_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QSystemSemaphore qtd_QSystemSemaphore_from_ptr(void* ret) {
    auto return_value = new QSystemSemaphore(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QSystemSemaphore_delete(void *ptr);
extern (C) void qtd_QSystemSemaphore_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSystemSemaphore_QSystemSemaphore_string_int_AccessMode(void *d_ptr,
 string key0,
 int initialValue1,
 int mode2);
private extern(C) bool  qtd_QSystemSemaphore_acquire(void* __this_nativeId);
private extern(C) int  qtd_QSystemSemaphore_error_const(void* __this_nativeId);
private extern(C) void  qtd_QSystemSemaphore_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSystemSemaphore_key_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QSystemSemaphore_release_int(void* __this_nativeId,
 int n0);
private extern(C) void  qtd_QSystemSemaphore_setKey_string_int_AccessMode(void* __this_nativeId,
 string key0,
 int initialValue1,
 int mode2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSystemSemaphore_initCallBacks(void* virtuals);

extern(C) void static_init_QSystemSemaphore() {
    qtd_QSystemSemaphore_initCallBacks(null);
}

// signal handlers

