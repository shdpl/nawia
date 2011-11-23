module qt.core.QAbstractFileEngineHandler;

public import qt.core.QAbstractFileEngineHandler_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QAbstractFileEngine;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractFileEngineHandler : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QAbstractFileEngineHandler_QAbstractFileEngineHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QAbstractFileEngine create(string fileName) const;
// Field accessors
    static QAbstractFileEngineHandler __getObject(void* nativeId) {
        return qtd_QAbstractFileEngineHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractFileEngineHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAbstractFileEngineHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractFileEngineHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractFileEngineHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractFileEngineHandler_ConcreteWrapper : QAbstractFileEngineHandler {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QAbstractFileEngine create(string fileName) const {
            void* ret = qtd_QAbstractFileEngineHandler_create_string_const(qtdNativeId, fileName);
            QAbstractFileEngine __d_return_value = qtd_QAbstractFileEngine_from_ptr(ret);

            return __d_return_value;
        }
    }


extern (C) void *__QAbstractFileEngineHandler_entity(void *q_ptr);

QAbstractFileEngineHandler qtd_QAbstractFileEngineHandler_from_ptr(void* ret) {
    void* d_obj = __QAbstractFileEngineHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QAbstractFileEngineHandler) d_obj_ref;
    } else {
        auto return_value = new QAbstractFileEngineHandler_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractFileEngineHandler_delete(void *ptr);
extern (C) void qtd_QAbstractFileEngineHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractFileEngineHandler_QAbstractFileEngineHandler(void *d_ptr);
private extern(C) void*  qtd_QAbstractFileEngineHandler_create_string_const(void* __this_nativeId,
 string fileName0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, wchar* fileName0, int fileName0_size) qtd_QAbstractFileEngineHandler_create_string_const_dispatch; }
extern(C) void* qtd_export_QAbstractFileEngineHandler_create_string_const_dispatch(void *dId, wchar* fileName0, int fileName0_size){
    auto d_object = cast(QAbstractFileEngineHandler) dId;
    string fileName0_d_ref = toUTF8(fileName0[0..fileName0_size]);
    QAbstractFileEngine ret_value = d_object.create(fileName0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAbstractFileEngineHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractFileEngineHandler() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractFileEngineHandler_create_string_const_dispatch;
    qtd_QAbstractFileEngineHandler_initCallBacks(virt_arr.ptr);
}

// signal handlers

