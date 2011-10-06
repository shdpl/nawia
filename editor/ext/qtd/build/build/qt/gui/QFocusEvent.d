module qt.gui.QFocusEvent;

public import qt.gui.QFocusEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QEvent;
public import qt.core.QEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFocusEvent : QEvent
{

// Functions

    public this(QEvent.Type type, Qt.FocusReason reason = Qt.FocusReason.OtherFocusReason) {
        void* ret = qtd_QFocusEvent_QFocusEvent_Type_FocusReason(cast(void*) this, type, reason);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool gotFocus() const {
        return qtd_QFocusEvent_gotFocus_const(qtdNativeId);
    }

    public final bool lostFocus() const {
        return qtd_QFocusEvent_lostFocus_const(qtdNativeId);
    }

    public final Qt.FocusReason reason() {
        return cast(Qt.FocusReason) qtd_QFocusEvent_reason(qtdNativeId);
    }
// Field accessors
    static QFocusEvent __getObject(void* nativeId) {
        return qtd_QFocusEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QFocusEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QFocusEvent_entity(void *q_ptr);

QFocusEvent qtd_QFocusEvent_from_ptr(void* ret) {
    auto return_value = new QFocusEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFocusEvent_QFocusEvent_Type_FocusReason(void *d_ptr,
 int type0,
 int reason1);
private extern(C) bool  qtd_QFocusEvent_gotFocus_const(void* __this_nativeId);
private extern(C) bool  qtd_QFocusEvent_lostFocus_const(void* __this_nativeId);
private extern(C) int  qtd_QFocusEvent_reason(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFocusEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QFocusEvent() {
    qtd_QFocusEvent_initCallBacks(null);
}

// signal handlers

