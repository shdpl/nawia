module qt.core.QTextCodec_ConverterState;

public import qt.core.QTextCodec_ConverterState_aux;
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


public class QTextCodec_ConverterState : QtdObject
{

// Functions

    public this(int f = 0) {
        void* ret = qtd_QTextCodec_ConverterState_QTextCodec_ConverterState_ConversionFlags(cast(void*) this, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setFlags(int flags) {
        qtd_QTextCodec_ConverterState_setFlags_ConversionFlags(qtdNativeId, flags);
    }

    public final int flags() {
        return qtd_QTextCodec_ConverterState_flags(qtdNativeId);
    }

    public final void setRemainingChars(int remainingChars) {
        qtd_QTextCodec_ConverterState_setRemainingChars_int(qtdNativeId, remainingChars);
    }

    public final int remainingChars() {
        return qtd_QTextCodec_ConverterState_remainingChars(qtdNativeId);
    }

    public final void setInvalidChars(int invalidChars) {
        qtd_QTextCodec_ConverterState_setInvalidChars_int(qtdNativeId, invalidChars);
    }

    public final int invalidChars() {
        return qtd_QTextCodec_ConverterState_invalidChars(qtdNativeId);
    }

    public final void setState_data(uint[] state_data) {
        qtd_QTextCodec_ConverterState_setState_data_uint_3(qtdNativeId, state_data.ptr);
    }

    public final uint[] state_data() {
        uint* ret = qtd_QTextCodec_ConverterState_state_data(qtdNativeId);
        uint[] __d_return_value = ret[0 .. 3];
        return __d_return_value;
    }
    static QTextCodec_ConverterState __getObject(void* nativeId) {
        return qtd_QTextCodec_ConverterState_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextCodec_ConverterState;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextCodec_ConverterState_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextCodec_ConverterState_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextCodec_ConverterState_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QTextCodec_ConverterState qtd_QTextCodec_ConverterState_from_ptr(void* ret) {
    auto return_value = new QTextCodec_ConverterState(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QTextCodec_ConverterState_delete(void *ptr);
extern (C) void qtd_QTextCodec_ConverterState_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextCodec_ConverterState_QTextCodec_ConverterState_ConversionFlags(void *d_ptr,
 int f0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QTextCodec_ConverterState_setFlags_ConversionFlags(void* __this_nativeId,
 int flags0);
private extern(C) int  qtd_QTextCodec_ConverterState_flags(void* __this_nativeId);
private extern(C) void  qtd_QTextCodec_ConverterState_setRemainingChars_int(void* __this_nativeId,
 int remainingChars0);
private extern(C) int  qtd_QTextCodec_ConverterState_remainingChars(void* __this_nativeId);
private extern(C) void  qtd_QTextCodec_ConverterState_setInvalidChars_int(void* __this_nativeId,
 int invalidChars0);
private extern(C) int  qtd_QTextCodec_ConverterState_invalidChars(void* __this_nativeId);
private extern(C) void  qtd_QTextCodec_ConverterState_setState_data_uint_3(void* __this_nativeId,
 uint* state_data0);
private extern(C) uint*  qtd_QTextCodec_ConverterState_state_data(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QTextCodec_ConverterState_initCallBacks(void* virtuals);

extern(C) void static_init_QTextCodec_ConverterState() {
    qtd_QTextCodec_ConverterState_initCallBacks(null);
}

// signal handlers

