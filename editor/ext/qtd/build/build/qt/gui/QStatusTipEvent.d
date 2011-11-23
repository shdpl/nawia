module qt.gui.QStatusTipEvent;

public import qt.gui.QStatusTipEvent_aux;
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


public class QStatusTipEvent : QEvent
{

// Functions

    public this(string tip) {
        void* ret = qtd_QStatusTipEvent_QStatusTipEvent_string(cast(void*) this, tip);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string tip() const {
        string res;
        qtd_QStatusTipEvent_tip_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    static QStatusTipEvent __getObject(void* nativeId) {
        return qtd_QStatusTipEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QStatusTipEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QStatusTipEvent_entity(void *q_ptr);

QStatusTipEvent qtd_QStatusTipEvent_from_ptr(void* ret) {
    auto return_value = new QStatusTipEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStatusTipEvent_QStatusTipEvent_string(void *d_ptr,
 string tip0);
private extern(C) void  qtd_QStatusTipEvent_tip_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStatusTipEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QStatusTipEvent() {
    qtd_QStatusTipEvent_initCallBacks(null);
}

// signal handlers

