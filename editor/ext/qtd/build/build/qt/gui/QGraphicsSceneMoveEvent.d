module qt.gui.QGraphicsSceneMoveEvent;

public import qt.gui.QGraphicsSceneMoveEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QPointF;
public import qt.gui.QGraphicsSceneEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSceneMoveEvent : QGraphicsSceneEvent
{

// Functions

    public this() {
        void* ret = qtd_QGraphicsSceneMoveEvent_QGraphicsSceneMoveEvent(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPointF newPos() const {
        QPointF res;
        qtd_QGraphicsSceneMoveEvent_newPos_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF oldPos() const {
        QPointF res;
        qtd_QGraphicsSceneMoveEvent_oldPos_const(qtdNativeId, &res);
        return res;
    }

    public final void setNewPos(const(QPointF) pos) {
        qtd_QGraphicsSceneMoveEvent_setNewPos_QPointF(qtdNativeId, pos);
    }

    public final void setOldPos(const(QPointF) pos) {
        qtd_QGraphicsSceneMoveEvent_setOldPos_QPointF(qtdNativeId, pos);
    }
// Field accessors
    static QGraphicsSceneMoveEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneMoveEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneMoveEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneMoveEvent_entity(void *q_ptr);

QGraphicsSceneMoveEvent qtd_QGraphicsSceneMoveEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneMoveEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneMoveEvent_QGraphicsSceneMoveEvent(void *d_ptr);
private extern(C) void  qtd_QGraphicsSceneMoveEvent_newPos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneMoveEvent_oldPos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneMoveEvent_setNewPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneMoveEvent_setOldPos_QPointF(void* __this_nativeId,
 QPointF pos0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneMoveEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneMoveEvent() {
    qtd_QGraphicsSceneMoveEvent_initCallBacks(null);
}

// signal handlers

