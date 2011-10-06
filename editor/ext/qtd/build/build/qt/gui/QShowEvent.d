module qt.gui.QShowEvent;

public import qt.gui.QShowEvent_aux;
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


public class QShowEvent : QEvent
{

// Functions

    public this() {
        void* ret = qtd_QShowEvent_QShowEvent(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    static QShowEvent __getObject(void* nativeId) {
        return qtd_QShowEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QShowEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QShowEvent_entity(void *q_ptr);

QShowEvent qtd_QShowEvent_from_ptr(void* ret) {
    auto return_value = new QShowEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QShowEvent_QShowEvent(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QShowEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QShowEvent() {
    qtd_QShowEvent_initCallBacks(null);
}

// signal handlers

