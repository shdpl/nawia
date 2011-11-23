module qt.gui.QGraphicsSceneMouseEvent;

public import qt.gui.QGraphicsSceneMouseEvent_aux;
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


public class QGraphicsSceneMouseEvent : QGraphicsSceneEvent
{

// Functions

    public this(QEvent.Type type = QEvent.Type.None) {
        void* ret = qtd_QGraphicsSceneMouseEvent_QGraphicsSceneMouseEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.MouseButton button() const {
        return cast(Qt.MouseButton) qtd_QGraphicsSceneMouseEvent_button_const(qtdNativeId);
    }

    public final QPointF buttonDownPos(Qt.MouseButton button) const {
        QPointF res;
        qtd_QGraphicsSceneMouseEvent_buttonDownPos_MouseButton_const(qtdNativeId, &res, button);
        return res;
    }

    public final QPointF buttonDownScenePos(Qt.MouseButton button) const {
        QPointF res;
        qtd_QGraphicsSceneMouseEvent_buttonDownScenePos_MouseButton_const(qtdNativeId, &res, button);
        return res;
    }

    public final QPoint buttonDownScreenPos(Qt.MouseButton button) const {
        QPoint res;
        qtd_QGraphicsSceneMouseEvent_buttonDownScreenPos_MouseButton_const(qtdNativeId, &res, button);
        return res;
    }

    public final int buttons() const {
        return qtd_QGraphicsSceneMouseEvent_buttons_const(qtdNativeId);
    }

    public final QPointF lastPos() const {
        QPointF res;
        qtd_QGraphicsSceneMouseEvent_lastPos_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF lastScenePos() const {
        QPointF res;
        qtd_QGraphicsSceneMouseEvent_lastScenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint lastScreenPos() const {
        QPoint res;
        qtd_QGraphicsSceneMouseEvent_lastScreenPos_const(qtdNativeId, &res);
        return res;
    }

    public final int modifiers() const {
        return qtd_QGraphicsSceneMouseEvent_modifiers_const(qtdNativeId);
    }

    public final QPointF pos() const {
        QPointF res;
        qtd_QGraphicsSceneMouseEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsSceneMouseEvent_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint screenPos() const {
        QPoint res;
        qtd_QGraphicsSceneMouseEvent_screenPos_const(qtdNativeId, &res);
        return res;
    }

    public final void setButton(Qt.MouseButton button) {
        qtd_QGraphicsSceneMouseEvent_setButton_MouseButton(qtdNativeId, button);
    }

    public final void setButtonDownPos(Qt.MouseButton button, const(QPointF) pos) {
        qtd_QGraphicsSceneMouseEvent_setButtonDownPos_MouseButton_QPointF(qtdNativeId, button, pos);
    }

    public final void setButtonDownScenePos(Qt.MouseButton button, const(QPointF) pos) {
        qtd_QGraphicsSceneMouseEvent_setButtonDownScenePos_MouseButton_QPointF(qtdNativeId, button, pos);
    }

    public final void setButtonDownScreenPos(Qt.MouseButton button, const(QPoint) pos) {
        qtd_QGraphicsSceneMouseEvent_setButtonDownScreenPos_MouseButton_QPoint(qtdNativeId, button, pos);
    }

    public final void setButtons(int buttons) {
        qtd_QGraphicsSceneMouseEvent_setButtons_MouseButtons(qtdNativeId, buttons);
    }

    public final void setLastPos(const(QPointF) pos) {
        qtd_QGraphicsSceneMouseEvent_setLastPos_QPointF(qtdNativeId, pos);
    }

    public final void setLastScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneMouseEvent_setLastScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setLastScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneMouseEvent_setLastScreenPos_QPoint(qtdNativeId, pos);
    }

    public final void setModifiers(int modifiers) {
        qtd_QGraphicsSceneMouseEvent_setModifiers_KeyboardModifiers(qtdNativeId, modifiers);
    }

    public final void setPos(const(QPointF) pos) {
        qtd_QGraphicsSceneMouseEvent_setPos_QPointF(qtdNativeId, pos);
    }

    public final void setScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneMouseEvent_setScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneMouseEvent_setScreenPos_QPoint(qtdNativeId, pos);
    }
// Field accessors
    static QGraphicsSceneMouseEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneMouseEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneMouseEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneMouseEvent_entity(void *q_ptr);

QGraphicsSceneMouseEvent qtd_QGraphicsSceneMouseEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneMouseEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneMouseEvent_QGraphicsSceneMouseEvent_Type(void *d_ptr,
 int type0);
private extern(C) int  qtd_QGraphicsSceneMouseEvent_button_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_buttonDownPos_MouseButton_const(void* __this_nativeId,
 QPointF * __d_return_value,
 int button0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_buttonDownScenePos_MouseButton_const(void* __this_nativeId,
 QPointF * __d_return_value,
 int button0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_buttonDownScreenPos_MouseButton_const(void* __this_nativeId,
 QPoint * __d_return_value,
 int button0);
private extern(C) int  qtd_QGraphicsSceneMouseEvent_buttons_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_lastPos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_lastScenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_lastScreenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QGraphicsSceneMouseEvent_modifiers_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_pos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_screenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setButton_MouseButton(void* __this_nativeId,
 int button0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setButtonDownPos_MouseButton_QPointF(void* __this_nativeId,
 int button0,
 QPointF pos1);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setButtonDownScenePos_MouseButton_QPointF(void* __this_nativeId,
 int button0,
 QPointF pos1);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setButtonDownScreenPos_MouseButton_QPoint(void* __this_nativeId,
 int button0,
 QPoint pos1);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setButtons_MouseButtons(void* __this_nativeId,
 int buttons0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setLastPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setLastScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setLastScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setModifiers_KeyboardModifiers(void* __this_nativeId,
 int modifiers0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneMouseEvent_setScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneMouseEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneMouseEvent() {
    qtd_QGraphicsSceneMouseEvent_initCallBacks(null);
}

// signal handlers

