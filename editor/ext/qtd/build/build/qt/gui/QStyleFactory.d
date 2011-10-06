module qt.gui.QStyleFactory;

public import qt.gui.QStyleFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyle;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleFactory : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QStyleFactory_QStyleFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public static QStyle create(string arg__1) {
        void *ret = qtd_QStyleFactory_create_string(arg__1);
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }

    public static QList!(string) keys() {
        auto res = QList!(string).opCall();
        qtd_QStyleFactory_keys(&res);
        return res;
    }
// Field accessors
    static QStyleFactory __getObject(void* nativeId) {
        return qtd_QStyleFactory_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QStyleFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QStyleFactory qtd_QStyleFactory_from_ptr(void* ret) {
    auto return_value = new QStyleFactory(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QStyleFactory_delete(void *ptr);
extern (C) void qtd_QStyleFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleFactory_QStyleFactory(void *d_ptr);
private extern(C) void*  qtd_QStyleFactory_create_string(string arg__1);
private extern(C) void  qtd_QStyleFactory_keys(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStyleFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleFactory() {
    qtd_QStyleFactory_initCallBacks(null);
}

// signal handlers

