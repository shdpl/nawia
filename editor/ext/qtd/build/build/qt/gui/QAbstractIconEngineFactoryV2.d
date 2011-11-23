module qt.gui.QAbstractIconEngineFactoryV2;

public import qt.gui.QAbstractIconEngineFactoryV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QAbstractFactory;
public import qt.gui.QIconEngineV2;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractIconEngineFactoryV2 : QtdObject, IQAbstractIconEngineFactoryV2, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractIconEngineFactoryV2_QAbstractIconEngineFactoryV2(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QIconEngineV2 create(string filename = "");

    public abstract QList!(string) keys() const;
// Field accessors
    static IQAbstractIconEngineFactoryV2 __getObject(void* nativeId) {
        return qtd_QIconEngineFactoryInterfaceV2_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractIconEngineFactoryV2;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractIconEngineFactoryV2 = qtd_QAbstractIconEngineFactoryV2_cast_to_QAbstractIconEngineFactoryV2(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAbstractIconEngineFactoryV2_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractIconEngineFactoryV2;
    public void* __ptr_IQAbstractIconEngineFactoryV2() { return __m_ptr_IQAbstractIconEngineFactoryV2; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractIconEngineFactoryV2_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractIconEngineFactoryV2_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractIconEngineFactoryV2_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractIconEngineFactoryV2_cast_to_QAbstractIconEngineFactoryV2(void* nativeId);
    private static extern (C) void*qtd_QAbstractIconEngineFactoryV2_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractIconEngineFactoryV2_ConcreteWrapper : QAbstractIconEngineFactoryV2 {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QIconEngineV2 create(string filename = "") {
            void* ret = qtd_QAbstractIconEngineFactoryV2_create_string(qtdNativeId, filename);
            QIconEngineV2 __d_return_value = qtd_QIconEngineV2_from_ptr(ret);

            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractIconEngineFactoryV2_keys_const(qtdNativeId, &res);
            return res;
        }
    }


extern (C) void *__QAbstractIconEngineFactoryV2_entity(void *q_ptr);

IQAbstractIconEngineFactoryV2 qtd_QIconEngineFactoryInterfaceV2_from_ptr(void* ret) {
    void* d_obj = __QAbstractIconEngineFactoryV2_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractIconEngineFactoryV2) d_obj_ref;
    } else {
        auto return_value = new QAbstractIconEngineFactoryV2_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractIconEngineFactoryV2_delete(void *ptr);
extern (C) void qtd_QAbstractIconEngineFactoryV2_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractIconEngineFactoryV2_QAbstractIconEngineFactoryV2(void *d_ptr);
private extern(C) void*  qtd_QAbstractIconEngineFactoryV2_create_string(void* __this_nativeId,
 string filename0);
private extern(C) void  qtd_QAbstractIconEngineFactoryV2_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, wchar* filename0, int filename0_size) qtd_QAbstractIconEngineFactoryV2_create_string_dispatch; }
extern(C) void* qtd_export_QAbstractIconEngineFactoryV2_create_string_dispatch(void *dId, wchar* filename0, int filename0_size){
    auto d_object = cast(IQAbstractIconEngineFactoryV2)cast(Object) dId;
    string filename0_d_ref = toUTF8(filename0[0..filename0_size]);
    QIconEngineV2 ret_value = d_object.create(filename0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QAbstractIconEngineFactoryV2_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractIconEngineFactoryV2() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractIconEngineFactoryV2_create_string_dispatch;
    qtd_QAbstractIconEngineFactoryV2_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractIconEngineFactoryV2 : IQAbstractFactory
{
// Functions

        public QIconEngineV2 create(string filename = "");

        public QList!(string) keys() const;

        public void* __ptr_IQAbstractIconEngineFactoryV2();

// Field accessors
        public alias void __isQtType_IQAbstractIconEngineFactoryV2;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}
        private static extern (C) void*qtd_IQAbstractIconEngineFactoryV2_cast_to_QAbstractFactory(void* nativeId);

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

