module qt.gui.QPaintEvent;

public import qt.gui.QPaintEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QRect;
public import qt.gui.QRegion;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPaintEvent : QEvent
{

// Functions

    public this(const(QRect) paintRect) {
        void* ret = qtd_QPaintEvent_QPaintEvent_QRect(cast(void*) this, paintRect);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRegion) paintRegion) {
        void* ret = qtd_QPaintEvent_QPaintEvent_QRegion(cast(void*) this, paintRegion is null ? null : (cast(QRegion)paintRegion).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QRect) rect() const {
        QRect res;
        qtd_QPaintEvent_rect_const(qtdNativeId, &res);
        return res;
    }

    public final const(QRegion) region() const {
        void* ret = qtd_QPaintEvent_region_const(qtdNativeId);
        const(QRegion) __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
// Field accessors

    protected final void setM_rect(QRect m_rect) {
        qtd_QPaintEvent_setM_rect_QRect(qtdNativeId, m_rect);
    }

    protected final QRect m_rect() {
        QRect res;
        qtd_QPaintEvent_m_rect(qtdNativeId, &res);
        return res;
    }

    protected final void setM_erased(bool m_erased) {
        qtd_QPaintEvent_setM_erased_bool(qtdNativeId, m_erased);
    }

    protected final bool m_erased() {
        return qtd_QPaintEvent_m_erased(qtdNativeId);
    }

    protected final void setM_region(QRegion m_region) {
        qtd_QPaintEvent_setM_region_QRegion(qtdNativeId, m_region is null ? null : m_region.qtdNativeId);
    }

    protected final QRegion m_region() {
        void* ret = qtd_QPaintEvent_m_region(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
    static QPaintEvent __getObject(void* nativeId) {
        return qtd_QPaintEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QPaintEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QPaintEvent_entity(void *q_ptr);

QPaintEvent qtd_QPaintEvent_from_ptr(void* ret) {
    auto return_value = new QPaintEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPaintEvent_QPaintEvent_QRect(void *d_ptr,
 QRect paintRect0);
private extern(C) void* qtd_QPaintEvent_QPaintEvent_QRegion(void *d_ptr,
 void* paintRegion0);
private extern(C) void  qtd_QPaintEvent_rect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void*  qtd_QPaintEvent_region_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QPaintEvent_setM_rect_QRect(void* __this_nativeId,
 QRect m_rect0);
private extern(C) void  qtd_QPaintEvent_m_rect(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QPaintEvent_setM_erased_bool(void* __this_nativeId,
 bool m_erased0);
private extern(C) bool  qtd_QPaintEvent_m_erased(void* __this_nativeId);
private extern(C) void  qtd_QPaintEvent_setM_region_QRegion(void* __this_nativeId,
 void* m_region0);
private extern(C) void*  qtd_QPaintEvent_m_region(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QPaintEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QPaintEvent() {
    qtd_QPaintEvent_initCallBacks(null);
}

// signal handlers

