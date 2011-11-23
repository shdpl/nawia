module qt.gui.QAbstractAccessibleFactory;

public import qt.gui.QAbstractAccessibleFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QObject;
public import qt.gui.QAccessibleInterface;
public import qt.core.QAbstractFactory;
public import qt.gui.QAccessible;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractAccessibleFactory : QAccessible, IQAbstractAccessibleFactory, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractAccessibleFactory_QAbstractAccessibleFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QAccessibleInterface create(string key, QObject object);

    public abstract QList!(string) keys() const;
// Field accessors
    static IQAbstractAccessibleFactory __getObject(void* nativeId) {
        return qtd_QAccessibleFactoryInterface_from_ptr(nativeId);
    }

    public alias void __isQtType_QAbstractAccessibleFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractAccessibleFactory = qtd_QAbstractAccessibleFactory_cast_to_QAbstractAccessibleFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAbstractAccessibleFactory_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractAccessibleFactory;
    public void* __ptr_IQAbstractAccessibleFactory() { return __m_ptr_IQAbstractAccessibleFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractAccessibleFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractAccessibleFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractAccessibleFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractAccessibleFactory_cast_to_QAbstractAccessibleFactory(void* nativeId);
    private static extern (C) void*qtd_QAbstractAccessibleFactory_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractAccessibleFactory_ConcreteWrapper : QAbstractAccessibleFactory {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QAccessibleInterface create(string key, QObject object) {
            void* ret = qtd_QAbstractAccessibleFactory_create_string_QObject(qtdNativeId, key, object is null ? null : object.qtdNativeId);
            QAccessibleInterface __d_return_value = qtd_QAccessibleInterface_from_ptr(ret);

            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractAccessibleFactory_keys_const(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QAbstractAccessibleFactory_entity(void *q_ptr);

IQAbstractAccessibleFactory qtd_QAccessibleFactoryInterface_from_ptr(void* ret) {
    void* d_obj = __QAbstractAccessibleFactory_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractAccessibleFactory) d_obj_ref;
    } else {
        auto return_value = new QAbstractAccessibleFactory_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractAccessibleFactory_delete(void *ptr);
extern (C) void qtd_QAbstractAccessibleFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractAccessibleFactory_QAbstractAccessibleFactory(void *d_ptr);
private extern(C) void*  qtd_QAbstractAccessibleFactory_create_string_QObject(void* __this_nativeId,
 string key0,
 void* object1);
private extern(C) void  qtd_QAbstractAccessibleFactory_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, wchar* key0, int key0_size, void* object1) qtd_QAbstractAccessibleFactory_create_string_QObject_dispatch; }
extern(C) void* qtd_export_QAbstractAccessibleFactory_create_string_QObject_dispatch(void *dId, wchar* key0, int key0_size, void* object1){
    auto d_object = cast(IQAbstractAccessibleFactory)cast(Object) dId;
    string key0_d_ref = toUTF8(key0[0..key0_size]);
    scope object1_d_ref = new QObject(object1, QtdObjectInitFlags.onStack);

    QAccessibleInterface ret_value = d_object.create(key0_d_ref, object1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAbstractAccessibleFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractAccessibleFactory() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractAccessibleFactory_create_string_QObject_dispatch;
    qtd_QAbstractAccessibleFactory_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractAccessibleFactory : IQAbstractFactory
{
// Functions

        public QAccessibleInterface create(string key, QObject object);

        public QList!(string) keys() const;

        public void* __ptr_IQAbstractAccessibleFactory();

// Field accessors
        public alias void __isQtType_IQAbstractAccessibleFactory;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}
        private static extern (C) void*qtd_IQAbstractAccessibleFactory_cast_to_QAbstractFactory(void* nativeId);

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

