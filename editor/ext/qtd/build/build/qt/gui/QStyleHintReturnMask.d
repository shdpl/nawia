module qt.gui.QStyleHintReturnMask;

public import qt.gui.QStyleHintReturnMask_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleHintReturn;
public import qt.gui.QRegion;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleHintReturnMask : QStyleHintReturn
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 61441
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleHintReturnMask_QStyleHintReturnMask(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setRegion(QRegion region) {
        qtd_QStyleHintReturnMask_setRegion_QRegion(qtdNativeId, region is null ? null : region.qtdNativeId);
    }

    public final QRegion region() {
        void* ret = qtd_QStyleHintReturnMask_region(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
    static QStyleHintReturnMask __getObject(void* nativeId) {
        return qtd_QStyleHintReturnMask_from_ptr(nativeId);
    }

    public alias void __isQtType_QStyleHintReturnMask;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleHintReturnMask_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleHintReturnMask_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleHintReturnMask_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QStyleHintReturnMask qtd_QStyleHintReturnMask_from_ptr(void* ret) {
    auto return_value = new QStyleHintReturnMask(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QStyleHintReturnMask_delete(void *ptr);
extern (C) void qtd_QStyleHintReturnMask_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleHintReturnMask_QStyleHintReturnMask(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleHintReturnMask_setRegion_QRegion(void* __this_nativeId,
 void* region0);
private extern(C) void*  qtd_QStyleHintReturnMask_region(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleHintReturnMask_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleHintReturnMask() {
    qtd_QStyleHintReturnMask_initCallBacks(null);
}

// signal handlers

