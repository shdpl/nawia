module qt.gui.QInputEvent;

public import qt.gui.QInputEvent_aux;
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


public class QInputEvent : QEvent
{

// Functions

    public this(QEvent.Type type, int modifiers = 0) {
        void* ret = qtd_QInputEvent_QInputEvent_Type_KeyboardModifiers(cast(void*) this, type, modifiers);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public int modifiers() const {
        return qtd_QInputEvent_modifiers_const(qtdNativeId);
    }

    public final void setModifiers(int amodifiers) {
        qtd_QInputEvent_setModifiers_KeyboardModifiers(qtdNativeId, amodifiers);
    }
// Field accessors

    protected final void setModState(int modState) {
        qtd_QInputEvent_setModState_KeyboardModifiers(qtdNativeId, modState);
    }

    protected final int modState() {
        return qtd_QInputEvent_modState(qtdNativeId);
    }
    static QInputEvent __getObject(void* nativeId) {
        return qtd_QInputEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QInputEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QInputEvent_entity(void *q_ptr);

QInputEvent qtd_QInputEvent_from_ptr(void* ret) {
    auto return_value = new QInputEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QInputEvent_QInputEvent_Type_KeyboardModifiers(void *d_ptr,
 int type0,
 int modifiers1);
private extern(C) int  qtd_QInputEvent_modifiers_const(void* __this_nativeId);
private extern(C) void  qtd_QInputEvent_setModifiers_KeyboardModifiers(void* __this_nativeId,
 int amodifiers0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QInputEvent_setModState_KeyboardModifiers(void* __this_nativeId,
 int modState0);
private extern(C) int  qtd_QInputEvent_modState(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QInputEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QInputEvent() {
    qtd_QInputEvent_initCallBacks(null);
}

// signal handlers

