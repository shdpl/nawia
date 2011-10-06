module qt.gui.QAbstractImageIOHandlerFactory;

public import qt.gui.QAbstractImageIOHandlerFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.gui.QImageIOHandler;
public import qt.core.QAbstractFactory;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractImageIOHandlerFactory : QtdObject, IQAbstractImageIOHandlerFactory, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractImageIOHandlerFactory_QAbstractImageIOHandlerFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QImageIOHandler create(QIODevice device, const(QByteArray) format = new QByteArray()) const;

    public abstract QList!(string) keys() const;
// Field accessors
    static IQAbstractImageIOHandlerFactory __getObject(void* nativeId) {
        return qtd_QImageIOHandlerFactoryInterface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractImageIOHandlerFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractImageIOHandlerFactory = qtd_QAbstractImageIOHandlerFactory_cast_to_QAbstractImageIOHandlerFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAbstractImageIOHandlerFactory_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractImageIOHandlerFactory;
    public void* __ptr_IQAbstractImageIOHandlerFactory() { return __m_ptr_IQAbstractImageIOHandlerFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractImageIOHandlerFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractImageIOHandlerFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractImageIOHandlerFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractImageIOHandlerFactory_cast_to_QAbstractImageIOHandlerFactory(void* nativeId);
    private static extern (C) void*qtd_QAbstractImageIOHandlerFactory_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractImageIOHandlerFactory_ConcreteWrapper : QAbstractImageIOHandlerFactory {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QImageIOHandler create(QIODevice device, const(QByteArray) format = new QByteArray()) const {
            void* ret = qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const(qtdNativeId, device is null ? null : device.qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
            QImageIOHandler __d_return_value = qtd_QImageIOHandler_from_ptr(ret);

            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractImageIOHandlerFactory_keys_const(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QAbstractImageIOHandlerFactory_entity(void *q_ptr);

IQAbstractImageIOHandlerFactory qtd_QImageIOHandlerFactoryInterface_from_ptr(void* ret) {
    void* d_obj = __QAbstractImageIOHandlerFactory_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractImageIOHandlerFactory) d_obj_ref;
    } else {
        auto return_value = new QAbstractImageIOHandlerFactory_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractImageIOHandlerFactory_delete(void *ptr);
extern (C) void qtd_QAbstractImageIOHandlerFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractImageIOHandlerFactory_QAbstractImageIOHandlerFactory(void *d_ptr);
private extern(C) void*  qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const(void* __this_nativeId,
 void* device0,
 void* format1);
private extern(C) void  qtd_QAbstractImageIOHandlerFactory_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, void* device0, void* format1) qtd_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch; }
extern(C) void* qtd_export_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch(void *dId, void* device0, void* format1){
    auto d_object = cast(IQAbstractImageIOHandlerFactory)cast(Object) dId;
    scope device0_d_ref = new QIODevice_ConcreteWrapper(device0, QtdObjectInitFlags.onStack);

    scope format1_d_ref = new QByteArray(format1, QtdObjectInitFlags.onStack);
    QImageIOHandler ret_value = d_object.create(device0_d_ref, format1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAbstractImageIOHandlerFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractImageIOHandlerFactory() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractImageIOHandlerFactory_create_QIODevice_QByteArray_const_dispatch;
    qtd_QAbstractImageIOHandlerFactory_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractImageIOHandlerFactory : IQAbstractFactory
{
// Functions

        public QImageIOHandler create(QIODevice device, const(QByteArray) format = new QByteArray()) const;

        public QList!(string) keys() const;

        public void* __ptr_IQAbstractImageIOHandlerFactory();

// Field accessors
        public alias void __isQtType_IQAbstractImageIOHandlerFactory;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}
        private static extern (C) void*qtd_IQAbstractImageIOHandlerFactory_cast_to_QAbstractFactory(void* nativeId);

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

