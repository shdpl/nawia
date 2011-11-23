module qt.gui.QContextMenuEvent;

public import qt.gui.QContextMenuEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QInputEvent;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QContextMenuEvent : QInputEvent
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

    public this(QContextMenuEvent.Reason reason, const(QPoint) pos) {
        void* ret = qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint(cast(void*) this, reason, pos);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QContextMenuEvent.Reason reason, const(QPoint) pos, const(QPoint) globalPos) {
        void* ret = qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint_QPoint(cast(void*) this, reason, pos, globalPos);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QContextMenuEvent.Reason reason, const(QPoint) pos, const(QPoint) globalPos, int modifiers) {
        void* ret = qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint_QPoint_KeyboardModifiers(cast(void*) this, reason, pos, globalPos, modifiers);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QPoint) globalPos() const {
        QPoint res;
        qtd_QContextMenuEvent_globalPos_const(qtdNativeId, &res);
        return res;
    }

    public final int globalX() const {
        return qtd_QContextMenuEvent_globalX_const(qtdNativeId);
    }

    public final int globalY() const {
        return qtd_QContextMenuEvent_globalY_const(qtdNativeId);
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QContextMenuEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final QContextMenuEvent.Reason reason() const {
        return cast(QContextMenuEvent.Reason) qtd_QContextMenuEvent_reason_const(qtdNativeId);
    }

    public final int x() const {
        return qtd_QContextMenuEvent_x_const(qtdNativeId);
    }

    public final int y() const {
        return qtd_QContextMenuEvent_y_const(qtdNativeId);
    }
// Field accessors

    protected final void setReas(uint reas) {
        qtd_QContextMenuEvent_setReas_uint(qtdNativeId, reas);
    }

    protected final uint reas() {
        return qtd_QContextMenuEvent_reas(qtdNativeId);
    }

    protected final void setGp(QPoint gp) {
        qtd_QContextMenuEvent_setGp_QPoint(qtdNativeId, gp);
    }

    protected final QPoint gp() {
        QPoint res;
        qtd_QContextMenuEvent_gp(qtdNativeId, &res);
        return res;
    }

    protected final void setP(QPoint p) {
        qtd_QContextMenuEvent_setP_QPoint(qtdNativeId, p);
    }

    protected final QPoint p() {
        QPoint res;
        qtd_QContextMenuEvent_p(qtdNativeId, &res);
        return res;
    }
    static QContextMenuEvent __getObject(void* nativeId) {
        return qtd_QContextMenuEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QContextMenuEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QContextMenuEvent_entity(void *q_ptr);

QContextMenuEvent qtd_QContextMenuEvent_from_ptr(void* ret) {
    auto return_value = new QContextMenuEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint(void *d_ptr,
 int reason0,
 QPoint pos1);
private extern(C) void* qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint_QPoint(void *d_ptr,
 int reason0,
 QPoint pos1,
 QPoint globalPos2);
private extern(C) void* qtd_QContextMenuEvent_QContextMenuEvent_Reason_QPoint_QPoint_KeyboardModifiers(void *d_ptr,
 int reason0,
 QPoint pos1,
 QPoint globalPos2,
 int modifiers3);
private extern(C) void  qtd_QContextMenuEvent_globalPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QContextMenuEvent_globalX_const(void* __this_nativeId);
private extern(C) int  qtd_QContextMenuEvent_globalY_const(void* __this_nativeId);
private extern(C) void  qtd_QContextMenuEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QContextMenuEvent_reason_const(void* __this_nativeId);
private extern(C) int  qtd_QContextMenuEvent_x_const(void* __this_nativeId);
private extern(C) int  qtd_QContextMenuEvent_y_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QContextMenuEvent_setReas_uint(void* __this_nativeId,
 uint reas0);
private extern(C) uint  qtd_QContextMenuEvent_reas(void* __this_nativeId);
private extern(C) void  qtd_QContextMenuEvent_setGp_QPoint(void* __this_nativeId,
 QPoint gp0);
private extern(C) void  qtd_QContextMenuEvent_gp(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QContextMenuEvent_setP_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QContextMenuEvent_p(void* __this_nativeId,
 QPoint * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QContextMenuEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QContextMenuEvent() {
    qtd_QContextMenuEvent_initCallBacks(null);
}

// signal handlers

