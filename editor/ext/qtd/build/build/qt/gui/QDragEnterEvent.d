module qt.gui.QDragEnterEvent;

public import qt.gui.QDragEnterEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QDragMoveEvent;
public import qt.core.QMimeData;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDragEnterEvent : QDragMoveEvent
{

// Functions

    public this(const(QPoint) pos, int actions, QMimeData data, int buttons, int modifiers) {
        void* ret = qtd_QDragEnterEvent_QDragEnterEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers(cast(void*) this, pos, actions, data is null ? null : (cast(QMimeData)data).qtdNativeId, buttons, modifiers);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    static QDragEnterEvent __getObject(void* nativeId) {
        return qtd_QDragEnterEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QDragEnterEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QDragEnterEvent_entity(void *q_ptr);

QDragEnterEvent qtd_QDragEnterEvent_from_ptr(void* ret) {
    auto return_value = new QDragEnterEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDragEnterEvent_QDragEnterEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers(void *d_ptr,
 QPoint pos0,
 int actions1,
 void* data2,
 int buttons3,
 int modifiers4);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDragEnterEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QDragEnterEvent() {
    qtd_QDragEnterEvent_initCallBacks(null);
}

// signal handlers

