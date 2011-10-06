module qt.core.QRunnable;

public import qt.core.QRunnable_aux;
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


public abstract class QRunnable : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QRunnable_QRunnable(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoDelete() const {
        return qtd_QRunnable_autoDelete_const(qtdNativeId);
    }

    public final void setAutoDelete(bool _autoDelete) {
        qtd_QRunnable_setAutoDelete_bool(qtdNativeId, _autoDelete);
    }

    public abstract void run();
// Field accessors
    static QRunnable __getObject(void* nativeId) {
        return qtd_QRunnable_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QRunnable;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QRunnable_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QRunnable_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QRunnable_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QRunnable_ConcreteWrapper : QRunnable {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void run() {
            qtd_QRunnable_run(qtdNativeId);
        }
    }


extern (C) void *__QRunnable_entity(void *q_ptr);

QRunnable qtd_QRunnable_from_ptr(void* ret) {
    void* d_obj = __QRunnable_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QRunnable) d_obj_ref;
    } else {
        auto return_value = new QRunnable_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QRunnable_delete(void *ptr);
extern (C) void qtd_QRunnable_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QRunnable_QRunnable(void *d_ptr);
private extern(C) bool  qtd_QRunnable_autoDelete_const(void* __this_nativeId);
private extern(C) void  qtd_QRunnable_setAutoDelete_bool(void* __this_nativeId,
 bool _autoDelete0);
private extern(C) void  qtd_QRunnable_run(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QRunnable_run_dispatch; }
extern(C) void qtd_export_QRunnable_run_dispatch(void *dId){
    auto d_object = cast(QRunnable) dId;
    d_object.run();
}

private extern (C) void qtd_QRunnable_initCallBacks(void* virtuals);

extern(C) void static_init_QRunnable() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QRunnable_run_dispatch;
    qtd_QRunnable_initCallBacks(virt_arr.ptr);
}

// signal handlers

