module qt.core.QDynamicPropertyChangeEvent;

public import qt.core.QDynamicPropertyChangeEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QEvent;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDynamicPropertyChangeEvent : QEvent
{

// Functions

    public this(const(QByteArray) name) {
        void* ret = qtd_QDynamicPropertyChangeEvent_QDynamicPropertyChangeEvent_QByteArray(cast(void*) this, name is null ? null : (cast(QByteArray)name).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QByteArray propertyName() const {
        void* ret = qtd_QDynamicPropertyChangeEvent_propertyName_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }
// Field accessors
    static QDynamicPropertyChangeEvent __getObject(void* nativeId) {
        return qtd_QDynamicPropertyChangeEvent_from_ptr(nativeId);
    }

    public alias void __isQtType_QDynamicPropertyChangeEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QDynamicPropertyChangeEvent_entity(void *q_ptr);

QDynamicPropertyChangeEvent qtd_QDynamicPropertyChangeEvent_from_ptr(void* ret) {
    auto return_value = new QDynamicPropertyChangeEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDynamicPropertyChangeEvent_QDynamicPropertyChangeEvent_QByteArray(void *d_ptr,
 void* name0);
private extern(C) void*  qtd_QDynamicPropertyChangeEvent_propertyName_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDynamicPropertyChangeEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QDynamicPropertyChangeEvent() {
    qtd_QDynamicPropertyChangeEvent_initCallBacks(null);
}

// signal handlers

