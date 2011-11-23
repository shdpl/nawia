module qt.gui.QTextBlockUserData;

public import qt.gui.QTextBlockUserData_aux;
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


public class QTextBlockUserData : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextBlockUserData_QTextBlockUserData(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    static QTextBlockUserData __getObject(void* nativeId) {
        return qtd_QTextBlockUserData_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QTextBlockUserData;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextBlockUserData_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextBlockUserData_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextBlockUserData_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QTextBlockUserData_entity(void *q_ptr);

QTextBlockUserData qtd_QTextBlockUserData_from_ptr(void* ret) {
    auto return_value = new QTextBlockUserData(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QTextBlockUserData_delete(void *ptr);
extern (C) void qtd_QTextBlockUserData_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextBlockUserData_QTextBlockUserData(void *d_ptr);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextBlockUserData_initCallBacks(void* virtuals);

extern(C) void static_init_QTextBlockUserData() {
    qtd_QTextBlockUserData_initCallBacks(null);
}

// signal handlers

