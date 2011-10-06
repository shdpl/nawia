module qt.core.QTimerEvent;

public import qt.core.QTimerEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTimerEvent : QEvent
{

// Functions

    public this(int timerId) {
        void* ret = qtd_QTimerEvent_QTimerEvent_int(cast(void*) this, timerId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int timerId() const {
        return qtd_QTimerEvent_timerId_const(qtdNativeId);
    }
// Field accessors

    protected final void setId(int id) {
        qtd_QTimerEvent_setId_int(qtdNativeId, id);
    }

    protected final int id() {
        return qtd_QTimerEvent_id(qtdNativeId);
    }
    static QTimerEvent __getObject(void* nativeId) {
        return qtd_QTimerEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QTimerEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QTimerEvent_entity(void *q_ptr);

QTimerEvent qtd_QTimerEvent_from_ptr(void* ret) {
    auto return_value = new QTimerEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTimerEvent_QTimerEvent_int(void *d_ptr,
 int timerId0);
private extern(C) int  qtd_QTimerEvent_timerId_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QTimerEvent_setId_int(void* __this_nativeId,
 int id0);
private extern(C) int  qtd_QTimerEvent_id(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QTimerEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QTimerEvent() {
    qtd_QTimerEvent_initCallBacks(null);
}

// signal handlers

