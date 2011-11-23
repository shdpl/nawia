module qt.core.QTextEncoder;

public import qt.core.QTextEncoder_aux;
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


public class QTextEncoder : QtdObject
{

// Functions

    public this(QTextCodec codec) {
        void* ret = qtd_QTextEncoder_QTextEncoder_QTextCodec(cast(void*) this, codec is null ? null : (cast(QTextCodec)codec).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextCodec codec, int flags) {
        void* ret = qtd_QTextEncoder_QTextEncoder_QTextCodec_ConversionFlags(cast(void*) this, codec is null ? null : (cast(QTextCodec)codec).qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QByteArray fromUnicode(string str) {
        void* ret = qtd_QTextEncoder_fromUnicode_string(qtdNativeId, str);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final bool hasFailure() const {
        return qtd_QTextEncoder_hasFailure_const(qtdNativeId);
    }
// Field accessors
    static QTextEncoder __getObject(void* nativeId) {
        return qtd_QTextEncoder_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextEncoder;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextEncoder_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextEncoder_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextEncoder_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QTextEncoder qtd_QTextEncoder_from_ptr(void* ret) {
    auto return_value = new QTextEncoder(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QTextEncoder_delete(void *ptr);
extern (C) void qtd_QTextEncoder_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextEncoder_QTextEncoder_QTextCodec(void *d_ptr,
 void* codec0);
private extern(C) void* qtd_QTextEncoder_QTextEncoder_QTextCodec_ConversionFlags(void *d_ptr,
 void* codec0,
 int flags1);
private extern(C) void*  qtd_QTextEncoder_fromUnicode_string(void* __this_nativeId,
 string str0);
private extern(C) bool  qtd_QTextEncoder_hasFailure_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextEncoder_initCallBacks(void* virtuals);

extern(C) void static_init_QTextEncoder() {
    qtd_QTextEncoder_initCallBacks(null);
}

// signal handlers

