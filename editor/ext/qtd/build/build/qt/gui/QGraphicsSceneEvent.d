module qt.gui.QGraphicsSceneEvent;

public import qt.gui.QGraphicsSceneEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QEvent;
public import qt.gui.QWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSceneEvent : QEvent
{

// Functions

    public this(QEvent.Type type) {
        void* ret = qtd_QGraphicsSceneEvent_QGraphicsSceneEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QWidget widget() const {
        void *ret = qtd_QGraphicsSceneEvent_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    static QGraphicsSceneEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneEvent_entity(void *q_ptr);

QGraphicsSceneEvent qtd_QGraphicsSceneEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneEvent_QGraphicsSceneEvent_Type(void *d_ptr,
 int type0);
private extern(C) void*  qtd_QGraphicsSceneEvent_widget_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneEvent() {
    qtd_QGraphicsSceneEvent_initCallBacks(null);
}

// signal handlers

