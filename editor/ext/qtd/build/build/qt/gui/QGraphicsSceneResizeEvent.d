module qt.gui.QGraphicsSceneResizeEvent;

public import qt.gui.QGraphicsSceneResizeEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QSizeF;
public import qt.gui.QGraphicsSceneEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSceneResizeEvent : QGraphicsSceneEvent
{

// Functions

    public this() {
        void* ret = qtd_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QSizeF newSize() const {
        QSizeF res;
        qtd_QGraphicsSceneResizeEvent_newSize_const(qtdNativeId, &res);
        return res;
    }

    public final QSizeF oldSize() const {
        QSizeF res;
        qtd_QGraphicsSceneResizeEvent_oldSize_const(qtdNativeId, &res);
        return res;
    }

    public final void setNewSize(const(QSizeF) size) {
        qtd_QGraphicsSceneResizeEvent_setNewSize_QSizeF(qtdNativeId, size);
    }

    public final void setOldSize(const(QSizeF) size) {
        qtd_QGraphicsSceneResizeEvent_setOldSize_QSizeF(qtdNativeId, size);
    }
// Field accessors
    static QGraphicsSceneResizeEvent __getObject(void* nativeId) {
        return qtd_QGraphicsSceneResizeEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsSceneResizeEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsSceneResizeEvent_entity(void *q_ptr);

QGraphicsSceneResizeEvent qtd_QGraphicsSceneResizeEvent_from_ptr(void* ret) {
    auto return_value = new QGraphicsSceneResizeEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSceneResizeEvent_QGraphicsSceneResizeEvent(void *d_ptr);
private extern(C) void  qtd_QGraphicsSceneResizeEvent_newSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneResizeEvent_oldSize_const(void* __this_nativeId,
 QSizeF * __d_return_value);
private extern(C) void  qtd_QGraphicsSceneResizeEvent_setNewSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
private extern(C) void  qtd_QGraphicsSceneResizeEvent_setOldSize_QSizeF(void* __this_nativeId,
 QSizeF size0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSceneResizeEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSceneResizeEvent() {
    qtd_QGraphicsSceneResizeEvent_initCallBacks(null);
}

// signal handlers

