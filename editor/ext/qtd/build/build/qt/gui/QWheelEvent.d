module qt.gui.QWheelEvent;

public import qt.gui.QWheelEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QInputEvent;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QWheelEvent : QInputEvent
{

// Functions

    public this(const(QPoint) pos, const(QPoint) globalPos, int delta, int buttons, int modifiers, Qt.Orientation orient = Qt.Orientation.Vertical) {
        void* ret = qtd_QWheelEvent_QWheelEvent_QPoint_QPoint_int_MouseButtons_KeyboardModifiers_Orientation(cast(void*) this, pos, globalPos, delta, buttons, modifiers, orient);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPoint) pos, int delta, int buttons, int modifiers, Qt.Orientation orient = Qt.Orientation.Vertical) {
        void* ret = qtd_QWheelEvent_QWheelEvent_QPoint_int_MouseButtons_KeyboardModifiers_Orientation(cast(void*) this, pos, delta, buttons, modifiers, orient);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int buttons() const {
        return qtd_QWheelEvent_buttons_const(qtdNativeId);
    }

    public final int delta() const {
        return qtd_QWheelEvent_delta_const(qtdNativeId);
    }

    public final const(QPoint) globalPos() const {
        QPoint res;
        qtd_QWheelEvent_globalPos_const(qtdNativeId, &res);
        return res;
    }

    public final int globalX() const {
        return qtd_QWheelEvent_globalX_const(qtdNativeId);
    }

    public final int globalY() const {
        return qtd_QWheelEvent_globalY_const(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QWheelEvent_orientation_const(qtdNativeId);
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QWheelEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final int x() const {
        return qtd_QWheelEvent_x_const(qtdNativeId);
    }

    public final int y() const {
        return qtd_QWheelEvent_y_const(qtdNativeId);
    }
// Field accessors

    protected final void setG(QPoint g) {
        qtd_QWheelEvent_setG_QPoint(qtdNativeId, g);
    }

    protected final QPoint g() {
        QPoint res;
        qtd_QWheelEvent_g(qtdNativeId, &res);
        return res;
    }

    protected final void setMouseState(int mouseState) {
        qtd_QWheelEvent_setMouseState_MouseButtons(qtdNativeId, mouseState);
    }

    protected final int mouseState() {
        return qtd_QWheelEvent_mouseState(qtdNativeId);
    }

    protected final void setO(Qt.Orientation o) {
        qtd_QWheelEvent_setO_Orientation(qtdNativeId, o);
    }

    protected final Qt.Orientation o() {
        return cast(Qt.Orientation) qtd_QWheelEvent_o(qtdNativeId);
    }

    protected final void setP(QPoint p) {
        qtd_QWheelEvent_setP_QPoint(qtdNativeId, p);
    }

    protected final QPoint p() {
        QPoint res;
        qtd_QWheelEvent_p(qtdNativeId, &res);
        return res;
    }
    static QWheelEvent __getObject(void* nativeId) {
        return qtd_QWheelEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QWheelEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QWheelEvent_entity(void *q_ptr);

QWheelEvent qtd_QWheelEvent_from_ptr(void* ret) {
    auto return_value = new QWheelEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QWheelEvent_QWheelEvent_QPoint_QPoint_int_MouseButtons_KeyboardModifiers_Orientation(void *d_ptr,
 QPoint pos0,
 QPoint globalPos1,
 int delta2,
 int buttons3,
 int modifiers4,
 int orient5);
private extern(C) void* qtd_QWheelEvent_QWheelEvent_QPoint_int_MouseButtons_KeyboardModifiers_Orientation(void *d_ptr,
 QPoint pos0,
 int delta1,
 int buttons2,
 int modifiers3,
 int orient4);
private extern(C) int  qtd_QWheelEvent_buttons_const(void* __this_nativeId);
private extern(C) int  qtd_QWheelEvent_delta_const(void* __this_nativeId);
private extern(C) void  qtd_QWheelEvent_globalPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QWheelEvent_globalX_const(void* __this_nativeId);
private extern(C) int  qtd_QWheelEvent_globalY_const(void* __this_nativeId);
private extern(C) int  qtd_QWheelEvent_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QWheelEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QWheelEvent_x_const(void* __this_nativeId);
private extern(C) int  qtd_QWheelEvent_y_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QWheelEvent_setG_QPoint(void* __this_nativeId,
 QPoint g0);
private extern(C) void  qtd_QWheelEvent_g(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QWheelEvent_setMouseState_MouseButtons(void* __this_nativeId,
 int mouseState0);
private extern(C) int  qtd_QWheelEvent_mouseState(void* __this_nativeId);
private extern(C) void  qtd_QWheelEvent_setO_Orientation(void* __this_nativeId,
 int o0);
private extern(C) int  qtd_QWheelEvent_o(void* __this_nativeId);
private extern(C) void  qtd_QWheelEvent_setP_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QWheelEvent_p(void* __this_nativeId,
 QPoint * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QWheelEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QWheelEvent() {
    qtd_QWheelEvent_initCallBacks(null);
}

// signal handlers

