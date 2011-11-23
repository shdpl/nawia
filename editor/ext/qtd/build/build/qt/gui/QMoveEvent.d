module qt.gui.QMoveEvent;

public import qt.gui.QMoveEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMoveEvent : QEvent
{

// Functions

    public this(const(QPoint) pos, const(QPoint) oldPos) {
        void* ret = qtd_QMoveEvent_QMoveEvent_QPoint_QPoint(cast(void*) this, pos, oldPos);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QPoint) oldPos() const {
        QPoint res;
        qtd_QMoveEvent_oldPos_const(qtdNativeId, &res);
        return res;
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QMoveEvent_pos_const(qtdNativeId, &res);
        return res;
    }
// Field accessors

    protected final void setOldp(QPoint oldp) {
        qtd_QMoveEvent_setOldp_QPoint(qtdNativeId, oldp);
    }

    protected final QPoint oldp() {
        QPoint res;
        qtd_QMoveEvent_oldp(qtdNativeId, &res);
        return res;
    }

    protected final void setP(QPoint p) {
        qtd_QMoveEvent_setP_QPoint(qtdNativeId, p);
    }

    protected final QPoint p() {
        QPoint res;
        qtd_QMoveEvent_p(qtdNativeId, &res);
        return res;
    }
    static QMoveEvent __getObject(void* nativeId) {
        return qtd_QMoveEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QMoveEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QMoveEvent_entity(void *q_ptr);

QMoveEvent qtd_QMoveEvent_from_ptr(void* ret) {
    auto return_value = new QMoveEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QMoveEvent_QMoveEvent_QPoint_QPoint(void *d_ptr,
 QPoint pos0,
 QPoint oldPos1);
private extern(C) void  qtd_QMoveEvent_oldPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QMoveEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QMoveEvent_setOldp_QPoint(void* __this_nativeId,
 QPoint oldp0);
private extern(C) void  qtd_QMoveEvent_oldp(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QMoveEvent_setP_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QMoveEvent_p(void* __this_nativeId,
 QPoint * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QMoveEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QMoveEvent() {
    qtd_QMoveEvent_initCallBacks(null);
}

// signal handlers

