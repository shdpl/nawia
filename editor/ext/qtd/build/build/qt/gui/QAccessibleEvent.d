module qt.gui.QAccessibleEvent;

public import qt.gui.QAccessibleEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAccessibleEvent : QEvent
{

// Functions

    public this(QEvent.Type type, int child) {
        void* ret = qtd_QAccessibleEvent_QAccessibleEvent_Type_int(cast(void*) this, type, child);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int child() const {
        return qtd_QAccessibleEvent_child_const(qtdNativeId);
    }

    public final void setValue(string aText) {
        qtd_QAccessibleEvent_setValue_string(qtdNativeId, aText);
    }

    public final string value() const {
        string res;
        qtd_QAccessibleEvent_value_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    static QAccessibleEvent __getObject(void* nativeId) {
        return qtd_QAccessibleEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QAccessibleEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QAccessibleEvent_entity(void *q_ptr);

QAccessibleEvent qtd_QAccessibleEvent_from_ptr(void* ret) {
    auto return_value = new QAccessibleEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessibleEvent_QAccessibleEvent_Type_int(void *d_ptr,
 int type0,
 int child1);
private extern(C) int  qtd_QAccessibleEvent_child_const(void* __this_nativeId);
private extern(C) void  qtd_QAccessibleEvent_setValue_string(void* __this_nativeId,
 string aText0);
private extern(C) void  qtd_QAccessibleEvent_value_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QAccessibleEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessibleEvent() {
    qtd_QAccessibleEvent_initCallBacks(null);
}

// signal handlers

