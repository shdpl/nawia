module qt.gui.QGraphicsSceneDragDropEvent;

public import qt.gui.QGraphicsSceneDragDropEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QEvent;
public import qt.core.QMimeData;
public import qt.core.QPointF;
public import qt.gui.QGraphicsSceneEvent;
public import qt.gui.QWidget;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSceneDragDropEvent : QGraphicsSceneEvent
{

// Functions

    public this(QEvent.Type type = QEvent.Type.None) {
        void* ret = qtd_QGraphicsSceneDragDropEvent_QGraphicsSceneDragDropEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void acceptProposedAction() {
        qtd_QGraphicsSceneDragDropEvent_acceptProposedAction(qtdNativeId);
    }

    public final int buttons() const {
        return qtd_QGraphicsSceneDragDropEvent_buttons_const(qtdNativeId);
    }

    public final Qt.DropAction dropAction() const {
        return cast(Qt.DropAction) qtd_QGraphicsSceneDragDropEvent_dropAction_const(qtdNativeId);
    }

    public final QMimeData mimeData() const {
        void *ret = qtd_QGraphicsSceneDragDropEvent_mimeData_const(qtdNativeId);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public final int modifiers() const {
        return qtd_QGraphicsSceneDragDropEvent_modifiers_const(qtdNativeId);
    }

    public final QPointF pos() const {
        QPointF res;
        qtd_QGraphicsSceneDragDropEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final int possibleActions() const {
        return qtd_QGraphicsSceneDragDropEvent_possibleActions_const(qtdNativeId);
    }

    public final Qt.DropAction proposedAction() const {
        return cast(Qt.DropAction) qtd_QGraphicsSceneDragDropEvent_proposedAction_const(qtdNativeId);
    }

    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsSceneDragDropEvent_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint screenPos() const {
        QPoint res;
        qtd_QGraphicsSceneDragDropEvent_screenPos_const(qtdNativeId, &res);
        return res;
    }

    public final void setButtons(int buttons) {
        qtd_QGraphicsSceneDragDropEvent_setButtons_MouseButtons(qtdNativeId, buttons);
    }

    public final void setDropAction(Qt.DropAction action) {
        qtd_QGraphicsSceneDragDropEvent_setDropAction_DropAction(qtdNativeId, action);
    }

    public final void setModifiers(int modifiers) {
        qtd_QGraphicsSceneDragDropEvent_setModifiers_KeyboardModifiers(qtdNativeId, modifiers);
    }

    public final void setPos(const(QPointF) pos) {
        qtd_QGraphicsSceneDragDropEvent_setPos_QPointF(qtdNativeId, pos);
    }

    public final void setPossibleActions(int actions) {
        qtd_QGraphicsSceneDragDropEvent_setPossibleActions_DropActions(qtdNativeId, actions);
    }

    public final void setProposedAction(Qt.DropAction action) {
        qtd_QGraphicsSceneDragDropEvent_setProposedAction_DropAction(qtdNativeId, action);
    }

    public final void setScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneDragDropEvent_setScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneDragDropEvent_setScreenPos_QPoint(qtdNativeId, pos);
    }

    public final QWidget source() const {
        void *ret = qtd_QGraphicsSceneDragDropEvent_source_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    static QGraphicsSceneDragDropEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneDragDropEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneDragDropEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneDragDropEvent_entity(void *q_ptr);

QGraphicsSceneDragDropEvent qtd_QGraphicsSceneDragDropEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneDragDropEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneDragDropEvent_QGraphicsSceneDragDropEvent_Type(void *d_ptr,
 int type0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_acceptProposedAction(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsSceneDragDropEvent_buttons_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsSceneDragDropEvent_dropAction_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsSceneDragDropEvent_mimeData_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsSceneDragDropEvent_modifiers_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_pos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) int  qtd_QGraphicsSceneDragDropEvent_possibleActions_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsSceneDragDropEvent_proposedAction_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_screenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setButtons_MouseButtons(void* __this_nativeId,
 int buttons0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setDropAction_DropAction(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setModifiers_KeyboardModifiers(void* __this_nativeId,
 int modifiers0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setPossibleActions_DropActions(void* __this_nativeId,
 int actions0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setProposedAction_DropAction(void* __this_nativeId,
 int action0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneDragDropEvent_setScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
private extern(C) void*  qtd_QGraphicsSceneDragDropEvent_source_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneDragDropEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneDragDropEvent() {
    qtd_QGraphicsSceneDragDropEvent_initCallBacks(null);
}

// signal handlers

