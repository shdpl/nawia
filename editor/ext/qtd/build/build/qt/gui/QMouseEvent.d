module qt.gui.QMouseEvent;

public import qt.gui.QMouseEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QEvent;
public import qt.gui.QInputEvent;
public import qt.core.QPointF;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMouseEvent : QInputEvent
{

// Functions

    public this(QEvent.Type type, const(QPoint) pos, Qt.MouseButton button, int buttons, int modifiers) {
        void* ret = qtd_QMouseEvent_QMouseEvent_Type_QPoint_MouseButton_MouseButtons_KeyboardModifiers(cast(void*) this, type, pos, button, buttons, modifiers);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QEvent.Type type, const(QPoint) pos, const(QPoint) globalPos, Qt.MouseButton button, int buttons, int modifiers) {
        void* ret = qtd_QMouseEvent_QMouseEvent_Type_QPoint_QPoint_MouseButton_MouseButtons_KeyboardModifiers(cast(void*) this, type, pos, globalPos, button, buttons, modifiers);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.MouseButton button() const {
        return cast(Qt.MouseButton) qtd_QMouseEvent_button_const(qtdNativeId);
    }

    public final int buttons() const {
        return qtd_QMouseEvent_buttons_const(qtdNativeId);
    }

    public final const(QPoint) globalPos() const {
        QPoint res;
        qtd_QMouseEvent_globalPos_const(qtdNativeId, &res);
        return res;
    }

    public final int globalX() const {
        return qtd_QMouseEvent_globalX_const(qtdNativeId);
    }

    public final int globalY() const {
        return qtd_QMouseEvent_globalY_const(qtdNativeId);
    }

    public final bool hasExtendedInfo() const {
        return qtd_QMouseEvent_hasExtendedInfo_const(qtdNativeId);
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QMouseEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF posF() const {
        QPointF res;
        qtd_QMouseEvent_posF_const(qtdNativeId, &res);
        return res;
    }

    public final int x() const {
        return qtd_QMouseEvent_x_const(qtdNativeId);
    }

    public final int y() const {
        return qtd_QMouseEvent_y_const(qtdNativeId);
    }
// Field accessors

    protected final void setG(QPoint g) {
        qtd_QMouseEvent_setG_QPoint(qtdNativeId, g);
    }

    protected final QPoint g() {
        QPoint res;
        qtd_QMouseEvent_g(qtdNativeId, &res);
        return res;
    }

    protected final void setMouseState(int mouseState) {
        qtd_QMouseEvent_setMouseState_MouseButtons(qtdNativeId, mouseState);
    }

    protected final int mouseState() {
        return qtd_QMouseEvent_mouseState(qtdNativeId);
    }

    protected final void setP(QPoint p) {
        qtd_QMouseEvent_setP_QPoint(qtdNativeId, p);
    }

    protected final QPoint p() {
        QPoint res;
        qtd_QMouseEvent_p(qtdNativeId, &res);
        return res;
    }

    protected final void setB(Qt.MouseButton b) {
        qtd_QMouseEvent_setB_MouseButton(qtdNativeId, b);
    }

    protected final Qt.MouseButton b() {
        return cast(Qt.MouseButton) qtd_QMouseEvent_b(qtdNativeId);
    }
    static QMouseEvent __getObject(void* nativeId) {
        return qtd_QMouseEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QMouseEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QMouseEvent_entity(void *q_ptr);

QMouseEvent qtd_QMouseEvent_from_ptr(void* ret) {
    auto return_value = new QMouseEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QMouseEvent_QMouseEvent_Type_QPoint_MouseButton_MouseButtons_KeyboardModifiers(void *d_ptr,
 int type0,
 QPoint pos1,
 int button2,
 int buttons3,
 int modifiers4);
private extern(C) void* qtd_QMouseEvent_QMouseEvent_Type_QPoint_QPoint_MouseButton_MouseButtons_KeyboardModifiers(void *d_ptr,
 int type0,
 QPoint pos1,
 QPoint globalPos2,
 int button3,
 int buttons4,
 int modifiers5);
private extern(C) int  qtd_QMouseEvent_button_const(void* __this_nativeId);
private extern(C) int  qtd_QMouseEvent_buttons_const(void* __this_nativeId);
private extern(C) void  qtd_QMouseEvent_globalPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QMouseEvent_globalX_const(void* __this_nativeId);
private extern(C) int  qtd_QMouseEvent_globalY_const(void* __this_nativeId);
private extern(C) bool  qtd_QMouseEvent_hasExtendedInfo_const(void* __this_nativeId);
private extern(C) void  qtd_QMouseEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QMouseEvent_posF_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) int  qtd_QMouseEvent_x_const(void* __this_nativeId);
private extern(C) int  qtd_QMouseEvent_y_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QMouseEvent_setG_QPoint(void* __this_nativeId,
 QPoint g0);
private extern(C) void  qtd_QMouseEvent_g(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QMouseEvent_setMouseState_MouseButtons(void* __this_nativeId,
 int mouseState0);
private extern(C) int  qtd_QMouseEvent_mouseState(void* __this_nativeId);
private extern(C) void  qtd_QMouseEvent_setP_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QMouseEvent_p(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QMouseEvent_setB_MouseButton(void* __this_nativeId,
 int b0);
private extern(C) int  qtd_QMouseEvent_b(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QMouseEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QMouseEvent() {
    qtd_QMouseEvent_initCallBacks(null);
}

// signal handlers

