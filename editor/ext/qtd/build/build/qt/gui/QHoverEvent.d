module qt.gui.QHoverEvent;

public import qt.gui.QHoverEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QEvent;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QHoverEvent : QEvent
{

// Functions

    public this(QEvent.Type type, const(QPoint) pos, const(QPoint) oldPos) {
        void* ret = qtd_QHoverEvent_QHoverEvent_Type_QPoint_QPoint(cast(void*) this, type, pos, oldPos);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QPoint) oldPos() const {
        QPoint res;
        qtd_QHoverEvent_oldPos_const(qtdNativeId, &res);
        return res;
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QHoverEvent_pos_const(qtdNativeId, &res);
        return res;
    }
// Field accessors

    protected final void setOp(QPoint op) {
        qtd_QHoverEvent_setOp_QPoint(qtdNativeId, op);
    }

    protected final QPoint op() {
        QPoint res;
        qtd_QHoverEvent_op(qtdNativeId, &res);
        return res;
    }

    protected final void setP(QPoint p) {
        qtd_QHoverEvent_setP_QPoint(qtdNativeId, p);
    }

    protected final QPoint p() {
        QPoint res;
        qtd_QHoverEvent_p(qtdNativeId, &res);
        return res;
    }
    static QHoverEvent __getObject(void* nativeId) {
        return qtd_QHoverEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QHoverEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QHoverEvent_entity(void *q_ptr);

QHoverEvent qtd_QHoverEvent_from_ptr(void* ret) {
    auto return_value = new QHoverEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHoverEvent_QHoverEvent_Type_QPoint_QPoint(void *d_ptr,
 int type0,
 QPoint pos1,
 QPoint oldPos2);
private extern(C) void  qtd_QHoverEvent_oldPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QHoverEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QHoverEvent_setOp_QPoint(void* __this_nativeId,
 QPoint op0);
private extern(C) void  qtd_QHoverEvent_op(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QHoverEvent_setP_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QHoverEvent_p(void* __this_nativeId,
 QPoint * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QHoverEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QHoverEvent() {
    qtd_QHoverEvent_initCallBacks(null);
}

// signal handlers

