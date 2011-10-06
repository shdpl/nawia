module qt.gui.QGraphicsSceneContextMenuEvent;

public import qt.gui.QGraphicsSceneContextMenuEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QPointF;
public import qt.gui.QGraphicsSceneEvent;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSceneContextMenuEvent : QGraphicsSceneEvent
{
    public enum Reason {
        Mouse = 0,
        Keyboard = 1,
        Other = 2
    }

    alias Reason.Mouse Mouse;
    alias Reason.Keyboard Keyboard;
    alias Reason.Other Other;


// Functions

    public this(QEvent.Type type = QEvent.Type.None) {
        void* ret = qtd_QGraphicsSceneContextMenuEvent_QGraphicsSceneContextMenuEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int modifiers() const {
        return qtd_QGraphicsSceneContextMenuEvent_modifiers_const(qtdNativeId);
    }

    public final QPointF pos() const {
        QPointF res;
        qtd_QGraphicsSceneContextMenuEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final QGraphicsSceneContextMenuEvent.Reason reason() const {
        return cast(QGraphicsSceneContextMenuEvent.Reason) qtd_QGraphicsSceneContextMenuEvent_reason_const(qtdNativeId);
    }

    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsSceneContextMenuEvent_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint screenPos() const {
        QPoint res;
        qtd_QGraphicsSceneContextMenuEvent_screenPos_const(qtdNativeId, &res);
        return res;
    }

    public final void setModifiers(int modifiers) {
        qtd_QGraphicsSceneContextMenuEvent_setModifiers_KeyboardModifiers(qtdNativeId, modifiers);
    }

    public final void setPos(const(QPointF) pos) {
        qtd_QGraphicsSceneContextMenuEvent_setPos_QPointF(qtdNativeId, pos);
    }

    public final void setReason(QGraphicsSceneContextMenuEvent.Reason reason) {
        qtd_QGraphicsSceneContextMenuEvent_setReason_Reason(qtdNativeId, reason);
    }

    public final void setScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneContextMenuEvent_setScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneContextMenuEvent_setScreenPos_QPoint(qtdNativeId, pos);
    }
// Field accessors
    static QGraphicsSceneContextMenuEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneContextMenuEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneContextMenuEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneContextMenuEvent_entity(void *q_ptr);

QGraphicsSceneContextMenuEvent qtd_QGraphicsSceneContextMenuEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneContextMenuEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneContextMenuEvent_QGraphicsSceneContextMenuEvent_Type(void *d_ptr,
 int type0);
private extern(C) int  qtd_QGraphicsSceneContextMenuEvent_modifiers_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_pos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) int  qtd_QGraphicsSceneContextMenuEvent_reason_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_screenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_setModifiers_KeyboardModifiers(void* __this_nativeId,
 int modifiers0);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_setPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_setReason_Reason(void* __this_nativeId,
 int reason0);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_setScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneContextMenuEvent_setScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneContextMenuEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneContextMenuEvent() {
    qtd_QGraphicsSceneContextMenuEvent_initCallBacks(null);
}

// signal handlers

