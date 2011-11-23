module qt.gui.QAbstractTextCodecFactory;

public import qt.gui.QAbstractTextCodecFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QTextCodec;
public import qt.core.QAbstractFactory;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractTextCodecFactory : QtdObject, IQAbstractTextCodecFactory, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractTextCodecFactory_QAbstractTextCodecFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QTextCodec create(string key);

    public abstract QList!(string) keys() const;
// Field accessors
    static IQAbstractTextCodecFactory __getObject(void* nativeId) {
        return qtd_QTextCodecFactoryInterface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractTextCodecFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractTextCodecFactory = qtd_QAbstractTextCodecFactory_cast_to_QAbstractTextCodecFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAbstractTextCodecFactory_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractTextCodecFactory;
    public void* __ptr_IQAbstractTextCodecFactory() { return __m_ptr_IQAbstractTextCodecFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractTextCodecFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractTextCodecFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractTextCodecFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractTextCodecFactory_cast_to_QAbstractTextCodecFactory(void* nativeId);
    private static extern (C) void*qtd_QAbstractTextCodecFactory_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractTextCodecFactory_ConcreteWrapper : QAbstractTextCodecFactory {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QTextCodec create(string key) {
            void* ret = qtd_QAbstractTextCodecFactory_create_string(qtdNativeId, key);
            QTextCodec __d_return_value = qtd_QTextCodec_from_ptr(ret);

            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractTextCodecFactory_keys_const(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QAbstractTextCodecFactory_entity(void *q_ptr);

IQAbstractTextCodecFactory qtd_QTextCodecFactoryInterface_from_ptr(void* ret) {
    void* d_obj = __QAbstractTextCodecFactory_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractTextCodecFactory) d_obj_ref;
    } else {
        auto return_value = new QAbstractTextCodecFactory_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractTextCodecFactory_delete(void *ptr);
extern (C) void qtd_QAbstractTextCodecFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractTextCodecFactory_QAbstractTextCodecFactory(void *d_ptr);
private extern(C) void*  qtd_QAbstractTextCodecFactory_create_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QAbstractTextCodecFactory_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, wchar* key0, int key0_size) qtd_QAbstractTextCodecFactory_create_string_dispatch; }
extern(C) void* qtd_export_QAbstractTextCodecFactory_create_string_dispatch(void *dId, wchar* key0, int key0_size){
    auto d_object = cast(IQAbstractTextCodecFactory)cast(Object) dId;
    string key0_d_ref = toUTF8(key0[0..key0_size]);
    QTextCodec ret_value = d_object.create(key0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAbstractTextCodecFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractTextCodecFactory() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractTextCodecFactory_create_string_dispatch;
    qtd_QAbstractTextCodecFactory_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractTextCodecFactory : IQAbstractFactory
{
// Functions

        public QTextCodec create(string key);

        public QList!(string) keys() const;

        public void* __ptr_IQAbstractTextCodecFactory();

// Field accessors
        public alias void __isQtType_IQAbstractTextCodecFactory;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}
        private static extern (C) void*qtd_IQAbstractTextCodecFactory_cast_to_QAbstractFactory(void* nativeId);

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

