module qt.gui.QItemEditorFactory;

public import qt.gui.QItemEditorFactory_aux;
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


public class QItemEditorFactory : QtdObject
{

static Object __rcDefaultItemEditorFactory = null;

// Functions

    public this() {
        void* ret = qtd_QItemEditorFactory_QItemEditorFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public static QItemEditorFactory defaultFactory() {
        void* ret = qtd_QItemEditorFactory_defaultFactory();
        QItemEditorFactory __d_return_value = qtd_QItemEditorFactory_from_ptr(ret);

        return __d_return_value;
    }

    public static void setDefaultFactory(QItemEditorFactory factory) {
        {
            __rcDefaultItemEditorFactory = cast(Object) factory;
        }
        qtd_QItemEditorFactory_setDefaultFactory_QItemEditorFactory(factory is null ? null : factory.qtdNativeId);
    }
// Field accessors
    static QItemEditorFactory __getObject(void* nativeId) {
        return qtd_QItemEditorFactory_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QItemEditorFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QItemEditorFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QItemEditorFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QItemEditorFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QItemEditorFactory_entity(void *q_ptr);

QItemEditorFactory qtd_QItemEditorFactory_from_ptr(void* ret) {
    auto return_value = new QItemEditorFactory(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QItemEditorFactory_delete(void *ptr);
extern (C) void qtd_QItemEditorFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QItemEditorFactory_QItemEditorFactory(void *d_ptr);
private extern(C) void*  qtd_QItemEditorFactory_defaultFactory();
private extern(C) void  qtd_QItemEditorFactory_setDefaultFactory_QItemEditorFactory(void* factory0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QItemEditorFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QItemEditorFactory() {
    qtd_QItemEditorFactory_initCallBacks(null);
}

// signal handlers

