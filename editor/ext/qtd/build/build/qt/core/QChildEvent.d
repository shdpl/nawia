module qt.core.QChildEvent;

public import qt.core.QChildEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QObject;
public import qt.core.QEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QChildEvent : QEvent
{

// Functions

    public this(QEvent.Type type, QObject child) {
        void* ret = qtd_QChildEvent_QChildEvent_Type_QObject(cast(void*) this, type, child is null ? null : child.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool added() const {
        return qtd_QChildEvent_added_const(qtdNativeId);
    }

    public final QObject child() const {
        void *ret = qtd_QChildEvent_child_const(qtdNativeId);
        QObject __d_return_value = QObject.__getObject(ret);
        return __d_return_value;
    }

    public final bool polished() const {
        return qtd_QChildEvent_polished_const(qtdNativeId);
    }

    public final bool removed() const {
        return qtd_QChildEvent_removed_const(qtdNativeId);
    }
// Field accessors
    static QChildEvent __getObject(void* nativeId) {
        return qtd_QChildEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QChildEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QChildEvent_entity(void *q_ptr);

QChildEvent qtd_QChildEvent_from_ptr(void* ret) {
    auto return_value = new QChildEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QChildEvent_QChildEvent_Type_QObject(void *d_ptr,
 int type0,
 void* child1);
private extern(C) bool  qtd_QChildEvent_added_const(void* __this_nativeId);
private extern(C) void*  qtd_QChildEvent_child_const(void* __this_nativeId);
private extern(C) bool  qtd_QChildEvent_polished_const(void* __this_nativeId);
private extern(C) bool  qtd_QChildEvent_removed_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QChildEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QChildEvent() {
    qtd_QChildEvent_initCallBacks(null);
}

// signal handlers

