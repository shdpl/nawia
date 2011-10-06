module qt.gui.QHideEvent;

public import qt.gui.QHideEvent_aux;
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


public class QHideEvent : QEvent
{

// Functions

    public this() {
        void* ret = qtd_QHideEvent_QHideEvent(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    static QHideEvent __getObject(void* nativeId) {
        return qtd_QHideEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QHideEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QHideEvent_entity(void *q_ptr);

QHideEvent qtd_QHideEvent_from_ptr(void* ret) {
    auto return_value = new QHideEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHideEvent_QHideEvent(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QHideEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QHideEvent() {
    qtd_QHideEvent_initCallBacks(null);
}

// signal handlers

