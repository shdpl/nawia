module qt.gui.QHelpEvent;

public import qt.gui.QHelpEvent_aux;
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


public class QHelpEvent : QEvent
{

// Functions

    public this(QEvent.Type type, const(QPoint) pos, const(QPoint) globalPos) {
        void* ret = qtd_QHelpEvent_QHelpEvent_Type_QPoint_QPoint(cast(void*) this, type, pos, globalPos);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QPoint) globalPos() const {
        QPoint res;
        qtd_QHelpEvent_globalPos_const(qtdNativeId, &res);
        return res;
    }

    public final int globalX() const {
        return qtd_QHelpEvent_globalX_const(qtdNativeId);
    }

    public final int globalY() const {
        return qtd_QHelpEvent_globalY_const(qtdNativeId);
    }

    public final const(QPoint) pos() const {
        QPoint res;
        qtd_QHelpEvent_pos_const(qtdNativeId, &res);
        return res;
    }

    public final int x() const {
        return qtd_QHelpEvent_x_const(qtdNativeId);
    }

    public final int y() const {
        return qtd_QHelpEvent_y_const(qtdNativeId);
    }
// Field accessors
    static QHelpEvent __getObject(void* nativeId) {
        return qtd_QHelpEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QHelpEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QHelpEvent_entity(void *q_ptr);

QHelpEvent qtd_QHelpEvent_from_ptr(void* ret) {
    auto return_value = new QHelpEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHelpEvent_QHelpEvent_Type_QPoint_QPoint(void *d_ptr,
 int type0,
 QPoint pos1,
 QPoint globalPos2);
private extern(C) void  qtd_QHelpEvent_globalPos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QHelpEvent_globalX_const(void* __this_nativeId);
private extern(C) int  qtd_QHelpEvent_globalY_const(void* __this_nativeId);
private extern(C) void  qtd_QHelpEvent_pos_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QHelpEvent_x_const(void* __this_nativeId);
private extern(C) int  qtd_QHelpEvent_y_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QHelpEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QHelpEvent() {
    qtd_QHelpEvent_initCallBacks(null);
}

// signal handlers

