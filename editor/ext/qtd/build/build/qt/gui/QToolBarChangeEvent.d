module qt.gui.QToolBarChangeEvent;

public import qt.gui.QToolBarChangeEvent_aux;
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


public class QToolBarChangeEvent : QEvent
{

// Functions

    public this(bool t) {
        void* ret = qtd_QToolBarChangeEvent_QToolBarChangeEvent_bool(cast(void*) this, t);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool toggle() const {
        return qtd_QToolBarChangeEvent_toggle_const(qtdNativeId);
    }
// Field accessors
    static QToolBarChangeEvent __getObject(void* nativeId) {
        return qtd_QToolBarChangeEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QToolBarChangeEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QToolBarChangeEvent_entity(void *q_ptr);

QToolBarChangeEvent qtd_QToolBarChangeEvent_from_ptr(void* ret) {
    auto return_value = new QToolBarChangeEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QToolBarChangeEvent_QToolBarChangeEvent_bool(void *d_ptr,
 bool t0);
private extern(C) bool  qtd_QToolBarChangeEvent_toggle_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QToolBarChangeEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QToolBarChangeEvent() {
    qtd_QToolBarChangeEvent_initCallBacks(null);
}

// signal handlers

