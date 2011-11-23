module qt.gui.QGraphicsSceneHelpEvent;

public import qt.gui.QGraphicsSceneHelpEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QPointF;
public import qt.gui.QGraphicsSceneEvent;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSceneHelpEvent : QGraphicsSceneEvent
{

// Functions

    public this(QEvent.Type type = QEvent.Type.None) {
        void* ret = qtd_QGraphicsSceneHelpEvent_QGraphicsSceneHelpEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsSceneHelpEvent_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QPoint screenPos() const {
        QPoint res;
        qtd_QGraphicsSceneHelpEvent_screenPos_const(qtdNativeId, &res);
        return res;
    }

    public final void setScenePos(const(QPointF) pos) {
        qtd_QGraphicsSceneHelpEvent_setScenePos_QPointF(qtdNativeId, pos);
    }

    public final void setScreenPos(const(QPoint) pos) {
        qtd_QGraphicsSceneHelpEvent_setScreenPos_QPoint(qtdNativeId, pos);
    }
// Field accessors
    static QGraphicsSceneHelpEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneHelpEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneHelpEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneHelpEvent_entity(void *q_ptr);

QGraphicsSceneHelpEvent qtd_QGraphicsSceneHelpEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneHelpEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneHelpEvent_QGraphicsSceneHelpEvent_Type(void *d_ptr,
 int type0);
private extern(C) void  qtd_QGraphicsSceneHelpEvent_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneHelpEvent_screenPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneHelpEvent_setScenePos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsSceneHelpEvent_setScreenPos_QPoint(void* __this_nativeId,
 QPoint pos0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneHelpEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneHelpEvent() {
    qtd_QGraphicsSceneHelpEvent_initCallBacks(null);
}

// signal handlers

