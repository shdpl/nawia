module qt.gui.QDragResponseEvent;

public import qt.gui.QDragResponseEvent_aux;
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


public class QDragResponseEvent : QEvent
{

// Functions

    public this(bool accepted) {
        void* ret = qtd_QDragResponseEvent_QDragResponseEvent_bool(cast(void*) this, accepted);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool dragAccepted() const {
        return qtd_QDragResponseEvent_dragAccepted_const(qtdNativeId);
    }
// Field accessors

    protected final void setA(bool a) {
        qtd_QDragResponseEvent_setA_bool(qtdNativeId, a);
    }

    protected final bool a() {
        return qtd_QDragResponseEvent_a(qtdNativeId);
    }
    static QDragResponseEvent __getObject(void* nativeId) {
        return qtd_QDragResponseEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QDragResponseEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QDragResponseEvent_entity(void *q_ptr);

QDragResponseEvent qtd_QDragResponseEvent_from_ptr(void* ret) {
    auto return_value = new QDragResponseEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDragResponseEvent_QDragResponseEvent_bool(void *d_ptr,
 bool accepted0);
private extern(C) bool  qtd_QDragResponseEvent_dragAccepted_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QDragResponseEvent_setA_bool(void* __this_nativeId,
 bool a0);
private extern(C) bool  qtd_QDragResponseEvent_a(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QDragResponseEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QDragResponseEvent() {
    qtd_QDragResponseEvent_initCallBacks(null);
}

// signal handlers

