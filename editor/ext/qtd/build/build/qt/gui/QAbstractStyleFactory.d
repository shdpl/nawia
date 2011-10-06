module qt.gui.QAbstractStyleFactory;

public import qt.gui.QAbstractStyleFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyle;
public import qt.core.QAbstractFactory;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractStyleFactory : QtdObject, IQAbstractStyleFactory, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractStyleFactory_QAbstractStyleFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QStyle create(string key);

    public abstract QList!(string) keys() const;
// Field accessors
    static IQAbstractStyleFactory __getObject(void* nativeId) {
        return qtd_QStyleFactoryInterface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractStyleFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractStyleFactory = qtd_QAbstractStyleFactory_cast_to_QAbstractStyleFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAbstractStyleFactory_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractStyleFactory;
    public void* __ptr_IQAbstractStyleFactory() { return __m_ptr_IQAbstractStyleFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractStyleFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractStyleFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractStyleFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractStyleFactory_cast_to_QAbstractStyleFactory(void* nativeId);
    private static extern (C) void*qtd_QAbstractStyleFactory_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractStyleFactory_ConcreteWrapper : QAbstractStyleFactory {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QStyle create(string key) {
            void *ret = qtd_QAbstractStyleFactory_create_string(qtdNativeId, key);
            QStyle __d_return_value = QStyle.__getObject(ret);
            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractStyleFactory_keys_const(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QAbstractStyleFactory_entity(void *q_ptr);

IQAbstractStyleFactory qtd_QStyleFactoryInterface_from_ptr(void* ret) {
    void* d_obj = __QAbstractStyleFactory_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractStyleFactory) d_obj_ref;
    } else {
        auto return_value = new QAbstractStyleFactory_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractStyleFactory_delete(void *ptr);
extern (C) void qtd_QAbstractStyleFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractStyleFactory_QAbstractStyleFactory(void *d_ptr);
private extern(C) void*  qtd_QAbstractStyleFactory_create_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QAbstractStyleFactory_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, wchar* key0, int key0_size) qtd_QAbstractStyleFactory_create_string_dispatch; }
extern(C) void* qtd_export_QAbstractStyleFactory_create_string_dispatch(void *dId, wchar* key0, int key0_size){
    auto d_object = cast(IQAbstractStyleFactory)cast(Object) dId;
    string key0_d_ref = toUTF8(key0[0..key0_size]);
    QStyle ret_value = d_object.create(key0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAbstractStyleFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractStyleFactory() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractStyleFactory_create_string_dispatch;
    qtd_QAbstractStyleFactory_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractStyleFactory : IQAbstractFactory
{
// Functions

        public QStyle create(string key);

        public QList!(string) keys() const;

        public void* __ptr_IQAbstractStyleFactory();

// Field accessors
        public alias void __isQtType_IQAbstractStyleFactory;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}
        private static extern (C) void*qtd_IQAbstractStyleFactory_cast_to_QAbstractFactory(void* nativeId);

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

