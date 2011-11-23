module qt.gui.QResizeEvent;

public import qt.gui.QResizeEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QResizeEvent : QEvent
{

// Functions

    public this(const(QSize) size, const(QSize) oldSize) {
        void* ret = qtd_QResizeEvent_QResizeEvent_QSize_QSize(cast(void*) this, size, oldSize);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QSize) oldSize() const {
        QSize res;
        qtd_QResizeEvent_oldSize_const(qtdNativeId, &res);
        return res;
    }

    public final const(QSize) size() const {
        QSize res;
        qtd_QResizeEvent_size_const(qtdNativeId, &res);
        return res;
    }
// Field accessors

    protected final void setOlds(QSize olds) {
        qtd_QResizeEvent_setOlds_QSize(qtdNativeId, olds);
    }

    protected final QSize olds() {
        QSize res;
        qtd_QResizeEvent_olds(qtdNativeId, &res);
        return res;
    }

    protected final void setS(QSize s) {
        qtd_QResizeEvent_setS_QSize(qtdNativeId, s);
    }

    protected final QSize s() {
        QSize res;
        qtd_QResizeEvent_s(qtdNativeId, &res);
        return res;
    }
    static QResizeEvent __getObject(void* nativeId) {
        return qtd_QResizeEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QResizeEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QResizeEvent_entity(void *q_ptr);

QResizeEvent qtd_QResizeEvent_from_ptr(void* ret) {
    auto return_value = new QResizeEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QResizeEvent_QResizeEvent_QSize_QSize(void *d_ptr,
 QSize size0,
 QSize oldSize1);
private extern(C) void  qtd_QResizeEvent_oldSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QResizeEvent_size_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QResizeEvent_setOlds_QSize(void* __this_nativeId,
 QSize olds0);
private extern(C) void  qtd_QResizeEvent_olds(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QResizeEvent_setS_QSize(void* __this_nativeId,
 QSize s0);
private extern(C) void  qtd_QResizeEvent_s(void* __this_nativeId,
 QSize * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QResizeEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QResizeEvent() {
    qtd_QResizeEvent_initCallBacks(null);
}

// signal handlers

