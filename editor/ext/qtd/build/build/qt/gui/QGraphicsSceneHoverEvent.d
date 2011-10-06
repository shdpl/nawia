module qt.gui.QGraphicsSceneHoverEvent;

public import qt.gui.QGraphicsSceneHoverEvent_aux;
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


public class QGraphicsSceneHoverEvent : QGraphicsSceneEvent
{

// Functions

    public this(QEvent.Type type = QEvent.Type.None) {
        void* ret = qtd_QGraphicsSceneHoverEvent_QGraphicsSceneHoverEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPointF lastPos() const {
        QPointF res;
        qtd_QGraphicsSceneHoverEvent_lastPos_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF lastScenePos() const {
        QPointF res;
        qtd_QGraphicsSceneHoverEvent_lastScenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint lastScreenPos() const {
        QPoint res;
        qtd_QGraphicsSceneHoverEvent_lastScreenPos_const(qtdNativeId, &res);
        return res;
    }

    public final int modifiers() const {
        return qtd_QGraphicsSceneHoverEvent_modifiers_const(qtdNativeId);
    }

    public final QPointF pos() const {
        QPointF res;
        qtd_QGraphicsSceneHoverEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsSceneHoverEvent_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint screenPos() const {
        QPoint res;
        qtd_QGraphicsSceneHoverEvent_screenPos_const(qtdNativeId, &res);
        return res;
    }

    public final void setLastPos(const(QPointF) pos) {
        qtd_QGraphicsSceneHoverEvent_setLastPos_QPointF(qtdNativeId, pos);
    }

    public final void setLastScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneHoverEvent_setLastScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setLastScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneHoverEvent_setLastScreenPos_QPoint(qtdNativeId, pos);
    }

    public final void setModifiers(int modifiers) {
        qtd_QGraphicsSceneHoverEvent_setModifiers_KeyboardModifiers(qtdNativeId, modifiers);
    }

    public final void setPos(const(QPointF) pos) {
        qtd_QGraphicsSceneHoverEvent_setPos_QPointF(qtdNativeId, pos);
    }

    public final void setScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneHoverEvent_setScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneHoverEvent_setScreenPos_QPoint(qtdNativeId, pos);
    }
// Field accessors
    static QGraphicsSceneHoverEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneHoverEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneHoverEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneHoverEvent_entity(void *q_ptr);

QGraphicsSceneHoverEvent qtd_QGraphicsSceneHoverEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneHoverEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneHoverEvent_QGraphicsSceneHoverEvent_Type(void *d_ptr,
 int type0);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_lastPos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_lastScenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_lastScreenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QGraphicsSceneHoverEvent_modifiers_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_pos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_screenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_setLastPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_setLastScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_setLastScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_setModifiers_KeyboardModifiers(void* __this_nativeId,
 int modifiers0);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_setPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_setScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneHoverEvent_setScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneHoverEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneHoverEvent() {
    qtd_QGraphicsSceneHoverEvent_initCallBacks(null);
}

// signal handlers

