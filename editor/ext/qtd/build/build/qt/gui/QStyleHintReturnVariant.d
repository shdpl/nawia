module qt.gui.QStyleHintReturnVariant;

public import qt.gui.QStyleHintReturnVariant_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleHintReturn;
public import qt.core.QVariant;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleHintReturnVariant : QStyleHintReturn
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 61442
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleHintReturnVariant_QStyleHintReturnVariant(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setVariant(QVariant variant) {
        qtd_QStyleHintReturnVariant_setVariant_QVariant(qtdNativeId, variant is null ? null : variant.qtdNativeId);
    }

    public final QVariant variant() {
        void* ret = qtd_QStyleHintReturnVariant_variant(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }
    static QStyleHintReturnVariant __getObject(void* nativeId) {
        return qtd_QStyleHintReturnVariant_from_ptr(nativeId);
    }

    public alias void __isQtType_QStyleHintReturnVariant;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleHintReturnVariant_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleHintReturnVariant_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleHintReturnVariant_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QStyleHintReturnVariant qtd_QStyleHintReturnVariant_from_ptr(void* ret) {
    auto return_value = new QStyleHintReturnVariant(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QStyleHintReturnVariant_delete(void *ptr);
extern (C) void qtd_QStyleHintReturnVariant_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleHintReturnVariant_QStyleHintReturnVariant(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleHintReturnVariant_setVariant_QVariant(void* __this_nativeId,
 void* variant0);
private extern(C) void*  qtd_QStyleHintReturnVariant_variant(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleHintReturnVariant_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleHintReturnVariant() {
    qtd_QStyleHintReturnVariant_initCallBacks(null);
}

// signal handlers

