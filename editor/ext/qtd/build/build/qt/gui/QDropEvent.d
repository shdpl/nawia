module qt.gui.QDropEvent;

public import qt.gui.QDropEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QEvent;
public import qt.core.QList;
public import qt.core.QMimeData;
public import qt.core.QEvent;
public import qt.core.QByteArray;
public import qt.gui.QWidget;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDropEvent : QEvent
{

// Functions

    public this(const(QPoint) pos, int actions, QMimeData data, int buttons, int modifiers, QEvent.Type type = QEvent.Type.Drop) {
        void* ret = qtd_QDropEvent_QDropEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers_Type(cast(void*) this, pos, actions, data is null ? null : (cast(QMimeData)data).qtdNativeId, buttons, modifiers, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void acceptProposedAction() {
        qtd_QDropEvent_acceptProposedAction(qtdNativeId);
    }

    public final Qt.DropAction dropAction() const {
        return cast(Qt.DropAction) qtd_QDropEvent_dropAction_const(qtdNativeId);
    }

    public final int keyboardModifiers() const {
        return qtd_QDropEvent_keyboardModifiers_const(qtdNativeId);
    }

    public final QMimeData mimeData() const {
        void *ret = qtd_QDropEvent_mimeData_const(qtdNativeId);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    public final int mouseButtons() const {
        return qtd_QDropEvent_mouseButtons_const(qtdNativeId);
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QDropEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final int possibleActions() const {
        return qtd_QDropEvent_possibleActions_const(qtdNativeId);
    }

    public final Qt.DropAction proposedAction() const {
        return cast(Qt.DropAction) qtd_QDropEvent_proposedAction_const(qtdNativeId);
    }

    public final void setDropAction(Qt.DropAction action) {
        qtd_QDropEvent_setDropAction_DropAction(qtdNativeId, action);
    }

    public final QWidget source() const {
        void *ret = qtd_QDropEvent_source_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors

    protected final QMimeData mdata() {
        void *ret = qtd_QDropEvent_mdata(qtdNativeId);
        QMimeData __d_return_value = QMimeData.__getObject(ret);
        return __d_return_value;
    }

    protected final void setDefault_action(Qt.DropAction default_action) {
        qtd_QDropEvent_setDefault_action_DropAction(qtdNativeId, default_action);
    }

    protected final Qt.DropAction default_action() {
        return cast(Qt.DropAction) qtd_QDropEvent_default_action(qtdNativeId);
    }

    protected final void setModState(int modState) {
        qtd_QDropEvent_setModState_KeyboardModifiers(qtdNativeId, modState);
    }

    protected final int modState() {
        return qtd_QDropEvent_modState(qtdNativeId);
    }

    protected final void setMouseState(int mouseState) {
        qtd_QDropEvent_setMouseState_MouseButtons(qtdNativeId, mouseState);
    }

    protected final int mouseState() {
        return qtd_QDropEvent_mouseState(qtdNativeId);
    }

    protected final void setDrop_action(Qt.DropAction drop_action) {
        qtd_QDropEvent_setDrop_action_DropAction(qtdNativeId, drop_action);
    }

    protected final Qt.DropAction drop_action() {
        return cast(Qt.DropAction) qtd_QDropEvent_drop_action(qtdNativeId);
    }

    protected final void setP(QPoint p) {
        qtd_QDropEvent_setP_QPoint(qtdNativeId, p);
    }

    protected final QPoint p() {
        QPoint res;
        qtd_QDropEvent_p(qtdNativeId, &res);
        return res;
    }

    protected final void setAct(int act) {
        qtd_QDropEvent_setAct_DropActions(qtdNativeId, act);
    }

    protected final int act() {
        return qtd_QDropEvent_act(qtdNativeId);
    }
    static QDropEvent __getObject(void* nativeId) {
        return qtd_QDropEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QDropEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QDropEvent_entity(void *q_ptr);

QDropEvent qtd_QDropEvent_from_ptr(void* ret) {
    auto return_value = new QDropEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDropEvent_QDropEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers_Type(void *d_ptr,
 QPoint pos0,
 int actions1,
 void* data2,
 int buttons3,
 int modifiers4,
 int type5);
private extern(C) void  qtd_QDropEvent_acceptProposedAction(void* __this_nativeId);
private extern(C) int  qtd_QDropEvent_dropAction_const(void* __this_nativeId);
private extern(C) int  qtd_QDropEvent_keyboardModifiers_const(void* __this_nativeId);
private extern(C) void*  qtd_QDropEvent_mimeData_const(void* __this_nativeId);
private extern(C) int  qtd_QDropEvent_mouseButtons_const(void* __this_nativeId);
private extern(C) void  qtd_QDropEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QDropEvent_possibleActions_const(void* __this_nativeId);
private extern(C) int  qtd_QDropEvent_proposedAction_const(void* __this_nativeId);
private extern(C) void  qtd_QDropEvent_setDropAction_DropAction(void* __this_nativeId,
 int action0);
private extern(C) void*  qtd_QDropEvent_source_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void*  qtd_QDropEvent_mdata(void* __this_nativeId);
private extern(C) void  qtd_QDropEvent_setDefault_action_DropAction(void* __this_nativeId,
 int default_action0);
private extern(C) int  qtd_QDropEvent_default_action(void* __this_nativeId);
private extern(C) void  qtd_QDropEvent_setModState_KeyboardModifiers(void* __this_nativeId,
 int modState0);
private extern(C) int  qtd_QDropEvent_modState(void* __this_nativeId);
private extern(C) void  qtd_QDropEvent_setMouseState_MouseButtons(void* __this_nativeId,
 int mouseState0);
private extern(C) int  qtd_QDropEvent_mouseState(void* __this_nativeId);
private extern(C) void  qtd_QDropEvent_setDrop_action_DropAction(void* __this_nativeId,
 int drop_action0);
private extern(C) int  qtd_QDropEvent_drop_action(void* __this_nativeId);
private extern(C) void  qtd_QDropEvent_setP_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QDropEvent_p(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QDropEvent_setAct_DropActions(void* __this_nativeId,
 int act0);
private extern(C) int  qtd_QDropEvent_act(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QDropEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QDropEvent() {
    qtd_QDropEvent_initCallBacks(null);
}

// signal handlers

