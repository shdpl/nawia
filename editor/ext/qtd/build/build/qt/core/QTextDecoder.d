module qt.core.QTextDecoder;

public import qt.core.QTextDecoder_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QTextCodec;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextDecoder : QtdObject
{

// Functions

    public this(QTextCodec codec) {
        void* ret = qtd_QTextDecoder_QTextDecoder_QTextCodec(cast(void*) this, codec is null ? null : (cast(QTextCodec)codec).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextCodec codec, int flags) {
        void* ret = qtd_QTextDecoder_QTextDecoder_QTextCodec_ConversionFlags(cast(void*) this, codec is null ? null : (cast(QTextCodec)codec).qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool hasFailure() const {
        return qtd_QTextDecoder_hasFailure_const(qtdNativeId);
    }

    public final string toUnicode(const(QByteArray) ba) {
        string res;
        qtd_QTextDecoder_toUnicode_QByteArray(qtdNativeId, &res, ba is null ? null : (cast(QByteArray)ba).qtdNativeId);
        return res;
    }
// Field accessors
    static QTextDecoder __getObject(void* nativeId) {
        return qtd_QTextDecoder_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextDecoder;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextDecoder_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextDecoder_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextDecoder_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QTextDecoder qtd_QTextDecoder_from_ptr(void* ret) {
    auto return_value = new QTextDecoder(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QTextDecoder_delete(void *ptr);
extern (C) void qtd_QTextDecoder_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextDecoder_QTextDecoder_QTextCodec(void *d_ptr,
 void* codec0);
private extern(C) void* qtd_QTextDecoder_QTextDecoder_QTextCodec_ConversionFlags(void *d_ptr,
 void* codec0,
 int flags1);
private extern(C) bool  qtd_QTextDecoder_hasFailure_const(void* __this_nativeId);
private extern(C) void  qtd_QTextDecoder_toUnicode_QByteArray(void* __this_nativeId,
 void* __d_return_value,
 void* ba0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextDecoder_initCallBacks(void* virtuals);

extern(C) void static_init_QTextDecoder() {
    qtd_QTextDecoder_initCallBacks(null);
}

// signal handlers

