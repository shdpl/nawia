module qt.gui.QWindowStateChangeEvent;

public import qt.gui.QWindowStateChangeEvent_aux;
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


public class QWindowStateChangeEvent : QEvent
{

// Functions

    public this(int aOldState) {
        void* ret = qtd_QWindowStateChangeEvent_QWindowStateChangeEvent_WindowStates(cast(void*) this, aOldState);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int aOldState, bool isOverride) {
        void* ret = qtd_QWindowStateChangeEvent_QWindowStateChangeEvent_WindowStates_bool(cast(void*) this, aOldState, isOverride);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isOverride() const {
        return qtd_QWindowStateChangeEvent_isOverride_const(qtdNativeId);
    }

    public final int oldState() const {
        return qtd_QWindowStateChangeEvent_oldState_const(qtdNativeId);
    }
// Field accessors
    static QWindowStateChangeEvent __getObject(void* nativeId) {
        return qtd_QWindowStateChangeEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QWindowStateChangeEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QWindowStateChangeEvent_entity(void *q_ptr);

QWindowStateChangeEvent qtd_QWindowStateChangeEvent_from_ptr(void* ret) {
    auto return_value = new QWindowStateChangeEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWindowStateChangeEvent_QWindowStateChangeEvent_WindowStates(void *d_ptr,
 int aOldState0);
private extern(C) void* qtd_QWindowStateChangeEvent_QWindowStateChangeEvent_WindowStates_bool(void *d_ptr,
 int aOldState0,
 bool isOverride1);
private extern(C) bool  qtd_QWindowStateChangeEvent_isOverride_const(void* __this_nativeId);
private extern(C) int  qtd_QWindowStateChangeEvent_oldState_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QWindowStateChangeEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QWindowStateChangeEvent() {
    qtd_QWindowStateChangeEvent_initCallBacks(null);
}

// signal handlers

