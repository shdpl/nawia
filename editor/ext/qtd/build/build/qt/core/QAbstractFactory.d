module qt.core.QAbstractFactory;

public import qt.core.QAbstractFactory_aux;
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


public abstract class QAbstractFactory : QtdObject, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractFactory_QAbstractFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QList!(string) keys() const;
// Field accessors
    static IQAbstractFactory __getObject(void* nativeId) {
        return qtd_QFactoryInterface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractFactory = qtd_QAbstractFactory_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractFactory_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractFactory_ConcreteWrapper : QAbstractFactory {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractFactory_keys_const(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QAbstractFactory_entity(void *q_ptr);

IQAbstractFactory qtd_QFactoryInterface_from_ptr(void* ret) {
    void* d_obj = __QAbstractFactory_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractFactory) d_obj_ref;
    } else {
        auto return_value = new QAbstractFactory_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractFactory_delete(void *ptr);
extern (C) void qtd_QAbstractFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractFactory_QAbstractFactory(void *d_ptr);
private extern(C) void  qtd_QAbstractFactory_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QList!(string)* __d_arr) qtd_QAbstractFactory_keys_const_dispatch; }
extern(C) void qtd_export_QAbstractFactory_keys_const_dispatch(void *dId, QList!(string)* __d_arr){
    auto d_object = cast(IQAbstractFactory)cast(Object) dId;
    auto return_value = d_object.keys();
    *__d_arr = return_value;
}

private extern (C) void qtd_QAbstractFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractFactory() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractFactory_keys_const_dispatch;
    qtd_QAbstractFactory_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractFactory
{
// Functions

        public QList!(string) keys() const;

        public void* __ptr_IQAbstractFactory();

// Field accessors
        public alias void __isQtType_IQAbstractFactory;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

