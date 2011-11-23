module qt.gui.QStyleHintReturn;

public import qt.gui.QStyleHintReturn_aux;
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


public class QStyleHintReturn : QtdObject
{
    public enum HintReturnType {
        SH_Default = 61440,
        SH_Mask = 61441,
        SH_Variant = 61442
    }

    alias HintReturnType.SH_Default SH_Default;
    alias HintReturnType.SH_Mask SH_Mask;
    alias HintReturnType.SH_Variant SH_Variant;

    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 61440
    }

    alias StyleOptionType.Type Type;


// Functions

    public this(int version_ = 1, int type = 61440) {
        void* ret = qtd_QStyleHintReturn_QStyleHintReturn_int_int(cast(void*) this, version_, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void version_(int version_) {
        qtd_QStyleHintReturn_version__int(qtdNativeId, version_);
    }

    public final int version_() {
        return qtd_QStyleHintReturn_version_(qtdNativeId);
    }

    public final void setType(int type) {
        qtd_QStyleHintReturn_setType_int(qtdNativeId, type);
    }

    public final int type() {
        return qtd_QStyleHintReturn_type(qtdNativeId);
    }
    static QStyleHintReturn __getObject(void* nativeId) {
        return qtd_QStyleHintReturn_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QStyleHintReturn;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleHintReturn_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleHintReturn_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleHintReturn_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QStyleHintReturn qtd_QStyleHintReturn_from_ptr(void* ret) {
    auto return_value = new QStyleHintReturn(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QStyleHintReturn_delete(void *ptr);
extern (C) void qtd_QStyleHintReturn_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleHintReturn_QStyleHintReturn_int_int(void *d_ptr,
 int version0,
 int type1);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleHintReturn_version__int(void* __this_nativeId,
 int version0);
private extern(C) int  qtd_QStyleHintReturn_version_(void* __this_nativeId);
private extern(C) void  qtd_QStyleHintReturn_setType_int(void* __this_nativeId,
 int type0);
private extern(C) int  qtd_QStyleHintReturn_type(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleHintReturn_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleHintReturn() {
    qtd_QStyleHintReturn_initCallBacks(null);
}

// signal handlers

