module qt.gui.QGraphicsSceneWheelEvent;

public import qt.gui.QGraphicsSceneWheelEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QEvent;
public import qt.core.QPointF;
public import qt.gui.QGraphicsSceneEvent;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSceneWheelEvent : QGraphicsSceneEvent
{

// Functions

    public this(QEvent.Type type = QEvent.Type.None) {
        void* ret = qtd_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int buttons() const {
        return qtd_QGraphicsSceneWheelEvent_buttons_const(qtdNativeId);
    }

    public final int delta() const {
        return qtd_QGraphicsSceneWheelEvent_delta_const(qtdNativeId);
    }

    public final int modifiers() const {
        return qtd_QGraphicsSceneWheelEvent_modifiers_const(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QGraphicsSceneWheelEvent_orientation_const(qtdNativeId);
    }

    public final QPointF pos() const {
        QPointF res;
        qtd_QGraphicsSceneWheelEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsSceneWheelEvent_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint screenPos() const {
        QPoint res;
        qtd_QGraphicsSceneWheelEvent_screenPos_const(qtdNativeId, &res);
        return res;
    }

    public final void setButtons(int buttons) {
        qtd_QGraphicsSceneWheelEvent_setButtons_MouseButtons(qtdNativeId, buttons);
    }

    public final void setDelta(int delta) {
        qtd_QGraphicsSceneWheelEvent_setDelta_int(qtdNativeId, delta);
    }

    public final void setModifiers(int modifiers) {
        qtd_QGraphicsSceneWheelEvent_setModifiers_KeyboardModifiers(qtdNativeId, modifiers);
    }

    public final void setOrientation(Qt.Orientation orientation) {
        qtd_QGraphicsSceneWheelEvent_setOrientation_Orientation(qtdNativeId, orientation);
    }

    public final void setPos(const(QPointF) pos) {
        qtd_QGraphicsSceneWheelEvent_setPos_QPointF(qtdNativeId, pos);
    }

    public final void setScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneWheelEvent_setScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneWheelEvent_setScreenPos_QPoint(qtdNativeId, pos);
    }
// Field accessors
    static QGraphicsSceneWheelEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneWheelEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneWheelEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneWheelEvent_entity(void *q_ptr);

QGraphicsSceneWheelEvent qtd_QGraphicsSceneWheelEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneWheelEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent_Type(void *d_ptr,
 int type0);
private extern(C) int  qtd_QGraphicsSceneWheelEvent_buttons_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsSceneWheelEvent_delta_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsSceneWheelEvent_modifiers_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsSceneWheelEvent_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_pos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_screenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_setButtons_MouseButtons(void* __this_nativeId,
 int buttons0);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_setDelta_int(void* __this_nativeId,
 int delta0);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_setModifiers_KeyboardModifiers(void* __this_nativeId,
 int modifiers0);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_setOrientation_Orientation(void* __this_nativeId,
 int orientation0);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_setPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_setScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneWheelEvent_setScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneWheelEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneWheelEvent() {
    qtd_QGraphicsSceneWheelEvent_initCallBacks(null);
}

// signal handlers

