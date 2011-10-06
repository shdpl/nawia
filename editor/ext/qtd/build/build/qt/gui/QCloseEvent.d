module qt.gui.QCloseEvent;

public import qt.gui.QCloseEvent_aux;
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


public class QCloseEvent : QEvent
{

// Functions

    public this() {
        void* ret = qtd_QCloseEvent_QCloseEvent(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    static QCloseEvent __getObject(void* nativeId) {
        return qtd_QCloseEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QCloseEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QCloseEvent_entity(void *q_ptr);

QCloseEvent qtd_QCloseEvent_from_ptr(void* ret) {
    auto return_value = new QCloseEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QCloseEvent_QCloseEvent(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QCloseEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QCloseEvent() {
    qtd_QCloseEvent_initCallBacks(null);
}

// signal handlers

