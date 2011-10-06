module qt.gui.QAccessible2Interface;

public import qt.gui.QAccessible2Interface_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAccessible2Interface : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QAccessible2Interface_QAccessible2Interface(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    static QAccessible2Interface __getObject(void* nativeId) {
        return qtd_QAccessible2Interface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAccessible2Interface;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAccessible2Interface_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAccessible2Interface_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAccessible2Interface_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QAccessible2Interface_entity(void *q_ptr);

QAccessible2Interface qtd_QAccessible2Interface_from_ptr(void* ret) {
    auto return_value = new QAccessible2Interface(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QAccessible2Interface_delete(void *ptr);
extern (C) void qtd_QAccessible2Interface_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessible2Interface_QAccessible2Interface(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QAccessible2Interface_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessible2Interface() {
    qtd_QAccessible2Interface_initCallBacks(null);
}

// signal handlers

