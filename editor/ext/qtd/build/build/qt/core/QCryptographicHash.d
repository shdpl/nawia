module qt.core.QCryptographicHash;

public import qt.core.QCryptographicHash_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QCryptographicHash : QtdObject
{
    public enum Algorithm {
        Md4 = 0,
        Md5 = 1,
        Sha1 = 2
    }

    alias Algorithm.Md4 Md4;
    alias Algorithm.Md5 Md5;
    alias Algorithm.Sha1 Sha1;


// Functions

    public this(QCryptographicHash.Algorithm method) {
        void* ret = qtd_QCryptographicHash_QCryptographicHash_Algorithm(cast(void*) this, method);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addData(const(QByteArray) data) {
        qtd_QCryptographicHash_addData_QByteArray(qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId);
    }

    public final void addData(const(char*) data, int length) {
        qtd_QCryptographicHash_addData_nativepointerchar_int(qtdNativeId, data, length);
    }

    public final void reset() {
        qtd_QCryptographicHash_reset(qtdNativeId);
    }

    public final QByteArray result() const {
        void* ret = qtd_QCryptographicHash_result_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray hash(const(QByteArray) data, QCryptographicHash.Algorithm method) {
        void* ret = qtd_QCryptographicHash_hash_QByteArray_Algorithm(data is null ? null : (cast(QByteArray)data).qtdNativeId, method);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }
// Field accessors
    static QCryptographicHash __getObject(void* nativeId) {
        return qtd_QCryptographicHash_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QCryptographicHash;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QCryptographicHash_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QCryptographicHash_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QCryptographicHash_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QCryptographicHash qtd_QCryptographicHash_from_ptr(void* ret) {
    auto return_value = new QCryptographicHash(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QCryptographicHash_delete(void *ptr);
extern (C) void qtd_QCryptographicHash_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QCryptographicHash_QCryptographicHash_Algorithm(void *d_ptr,
 int method0);
private extern(C) void  qtd_QCryptographicHash_addData_QByteArray(void* __this_nativeId,
 void* data0);
private extern(C) void  qtd_QCryptographicHash_addData_nativepointerchar_int(void* __this_nativeId,
 const (char*) data0,
 int length1);
private extern(C) void  qtd_QCryptographicHash_reset(void* __this_nativeId);
private extern(C) void*  qtd_QCryptographicHash_result_const(void* __this_nativeId);
private extern(C) void*  qtd_QCryptographicHash_hash_QByteArray_Algorithm(void* data0,
 int method1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QCryptographicHash_initCallBacks(void* virtuals);

extern(C) void static_init_QCryptographicHash() {
    qtd_QCryptographicHash_initCallBacks(null);
}

// signal handlers

