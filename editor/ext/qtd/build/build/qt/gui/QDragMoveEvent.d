module qt.gui.QDragMoveEvent;

public import qt.gui.QDragMoveEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QMimeData;
public import qt.gui.QDropEvent;
public import qt.core.QRect;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDragMoveEvent : QDropEvent
{

// Functions

    public this(const(QPoint) pos, int actions, QMimeData data, int buttons, int modifiers, QEvent.Type type = QEvent.Type.DragMove) {
        void* ret = qtd_QDragMoveEvent_QDragMoveEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers_Type(cast(void*) this, pos, actions, data is null ? null : (cast(QMimeData)data).qtdNativeId, buttons, modifiers, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void accept(const(QRect) r) {
        qtd_QDragMoveEvent_accept_QRect(qtdNativeId, r);
    }

    public final QRect answerRect() const {
        QRect res;
        qtd_QDragMoveEvent_answerRect_const(qtdNativeId, &res);
        return res;
    }

    public final void ignore(const(QRect) r) {
        qtd_QDragMoveEvent_ignore_QRect(qtdNativeId, r);
    }
// Field accessors

    protected final void setRect(QRect rect) {
        qtd_QDragMoveEvent_setRect_QRect(qtdNativeId, rect);
    }

    protected final QRect rect() {
        QRect res;
        qtd_QDragMoveEvent_rect(qtdNativeId, &res);
        return res;
    }
    static QDragMoveEvent __getObject(void* nativeId) {
        return qtd_QDragMoveEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QDragMoveEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QDragMoveEvent_entity(void *q_ptr);

QDragMoveEvent qtd_QDragMoveEvent_from_ptr(void* ret) {
    auto return_value = new QDragMoveEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDragMoveEvent_QDragMoveEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers_Type(void *d_ptr,
 QPoint pos0,
 int actions1,
 void* data2,
 int buttons3,
 int modifiers4,
 int type5);
private extern(C) void  qtd_QDragMoveEvent_accept_QRect(void* __this_nativeId,
 QRect r0);
private extern(C) void  qtd_QDragMoveEvent_answerRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QDragMoveEvent_ignore_QRect(void* __this_nativeId,
 QRect r0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QDragMoveEvent_setRect_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QDragMoveEvent_rect(void* __this_nativeId,
 QRect * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QDragMoveEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QDragMoveEvent() {
    qtd_QDragMoveEvent_initCallBacks(null);
}

// signal handlers

