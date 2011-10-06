module qt.gui.QActionEvent;

import qt.core.QObject;
public import qt.gui.QActionEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.gui.QAction;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QActionEvent : QEvent
{

// Functions

    public this(int type, QAction action, QAction before = null) {
        void* ret = qtd_QActionEvent_QActionEvent_int_QAction_QAction(cast(void*) this, type, action is null ? null : action.qtdNativeId, before is null ? null : before.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAction action() const {
        void *ret = qtd_QActionEvent_action_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }

    public final QAction before() const {
        void *ret = qtd_QActionEvent_before_const(qtdNativeId);
        QAction __d_return_value = QAction.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    static QActionEvent __getObject(void* nativeId) {
        return qtd_QActionEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QActionEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QActionEvent_entity(void *q_ptr);

QActionEvent qtd_QActionEvent_from_ptr(void* ret) {
    auto return_value = new QActionEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QActionEvent_QActionEvent_int_QAction_QAction(void *d_ptr,
 int type0,
 void* action1,
 void* before2);
private extern(C) void*  qtd_QActionEvent_action_const(void* __this_nativeId);
private extern(C) void*  qtd_QActionEvent_before_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QActionEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QActionEvent() {
    qtd_QActionEvent_initCallBacks(null);
}

// signal handlers

