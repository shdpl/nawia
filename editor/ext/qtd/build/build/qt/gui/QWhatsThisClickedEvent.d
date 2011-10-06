module qt.gui.QWhatsThisClickedEvent;

public import qt.gui.QWhatsThisClickedEvent_aux;
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


public class QWhatsThisClickedEvent : QEvent
{

// Functions

    public this(string href) {
        void* ret = qtd_QWhatsThisClickedEvent_QWhatsThisClickedEvent_string(cast(void*) this, href);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string href() const {
        string res;
        qtd_QWhatsThisClickedEvent_href_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    static QWhatsThisClickedEvent __getObject(void* nativeId) {
        return qtd_QWhatsThisClickedEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QWhatsThisClickedEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QWhatsThisClickedEvent_entity(void *q_ptr);

QWhatsThisClickedEvent qtd_QWhatsThisClickedEvent_from_ptr(void* ret) {
    auto return_value = new QWhatsThisClickedEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWhatsThisClickedEvent_QWhatsThisClickedEvent_string(void *d_ptr,
 string href0);
private extern(C) void  qtd_QWhatsThisClickedEvent_href_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QWhatsThisClickedEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QWhatsThisClickedEvent() {
    qtd_QWhatsThisClickedEvent_initCallBacks(null);
}

// signal handlers

