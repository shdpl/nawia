module qt.gui.QInputContextFactory;

public import qt.gui.QInputContextFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QObject;
public import qt.gui.QInputContext;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QInputContextFactory : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QInputContextFactory_QInputContextFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public static QInputContext create(string key, QObject parent_) {
        void *ret = qtd_QInputContextFactory_create_string_QObject(key, parent_ is null ? null : parent_.qtdNativeId);
        QInputContext __d_return_value = QInputContext.__getObject(ret);
        return __d_return_value;
    }

    public static string description(string key) {
        string res;
        qtd_QInputContextFactory_description_string(&res, key);
        return res;
    }

    public static string displayName(string key) {
        string res;
        qtd_QInputContextFactory_displayName_string(&res, key);
        return res;
    }

    public static QList!(string) keys() {
        auto res = QList!(string).opCall();
        qtd_QInputContextFactory_keys(&res);
        return res;
    }

    public static QList!(string) languages(string key) {
        auto res = QList!(string).opCall();
        qtd_QInputContextFactory_languages_string(&res, key);
        return res;
    }
// Field accessors
    static QInputContextFactory __getObject(void* nativeId) {
        return qtd_QInputContextFactory_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QInputContextFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QInputContextFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QInputContextFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QInputContextFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QInputContextFactory qtd_QInputContextFactory_from_ptr(void* ret) {
    auto return_value = new QInputContextFactory(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QInputContextFactory_delete(void *ptr);
extern (C) void qtd_QInputContextFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QInputContextFactory_QInputContextFactory(void *d_ptr);
private extern(C) void*  qtd_QInputContextFactory_create_string_QObject(string key0,
 void* parent1);
private extern(C) void  qtd_QInputContextFactory_description_string(void* __d_return_value,
 string key0);
private extern(C) void  qtd_QInputContextFactory_displayName_string(void* __d_return_value,
 string key0);
private extern(C) void  qtd_QInputContextFactory_keys(void* __d_return_value);
private extern(C) void  qtd_QInputContextFactory_languages_string(void* __d_return_value,
 string key0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QInputContextFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QInputContextFactory() {
    qtd_QInputContextFactory_initCallBacks(null);
}

// signal handlers

