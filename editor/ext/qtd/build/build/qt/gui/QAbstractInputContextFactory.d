module qt.gui.QAbstractInputContextFactory;

public import qt.gui.QAbstractInputContextFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QAbstractFactory;
public import qt.gui.QInputContext;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractInputContextFactory : QtdObject, IQAbstractInputContextFactory, IQAbstractFactory
{

// Functions

    public this() {
        void* ret = qtd_QAbstractInputContextFactory_QAbstractInputContextFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QInputContext create(string key);

    public abstract string description(string key);

    public abstract string displayName(string key);

    public abstract QList!(string) keys() const;

    public abstract QList!(string) languages(string key);
// Field accessors
    static IQAbstractInputContextFactory __getObject(void* nativeId) {
        return qtd_QInputContextFactoryInterface_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAbstractInputContextFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractInputContextFactory = qtd_QAbstractInputContextFactory_cast_to_QAbstractInputContextFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAbstractInputContextFactory_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractInputContextFactory;
    public void* __ptr_IQAbstractInputContextFactory() { return __m_ptr_IQAbstractInputContextFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    protected override void qtdDeleteNative() {
        qtd_QAbstractInputContextFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractInputContextFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractInputContextFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAbstractInputContextFactory_cast_to_QAbstractInputContextFactory(void* nativeId);
    private static extern (C) void*qtd_QAbstractInputContextFactory_cast_to_QAbstractFactory(void* nativeId);

    public class QAbstractInputContextFactory_ConcreteWrapper : QAbstractInputContextFactory {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QInputContext create(string key) {
            void *ret = qtd_QAbstractInputContextFactory_create_string(qtdNativeId, key);
            QInputContext __d_return_value = QInputContext.__getObject(ret);
            return __d_return_value;
        }

        override         public string description(string key) {
            string res;
            qtd_QAbstractInputContextFactory_description_string(qtdNativeId, &res, key);
            return res;
        }

        override         public string displayName(string key) {
            string res;
            qtd_QAbstractInputContextFactory_displayName_string(qtdNativeId, &res, key);
            return res;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAbstractInputContextFactory_keys_const(qtdNativeId, &res);
            return res;
        }

        override         public QList!(string) languages(string key) {
            auto res = QList!(string).opCall();
            qtd_QAbstractInputContextFactory_languages_string(qtdNativeId, &res, key);
            return res;
        }
    }


extern (C) void *__QAbstractInputContextFactory_entity(void *q_ptr);

IQAbstractInputContextFactory qtd_QInputContextFactoryInterface_from_ptr(void* ret) {
    void* d_obj = __QAbstractInputContextFactory_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQAbstractInputContextFactory) d_obj_ref;
    } else {
        auto return_value = new QAbstractInputContextFactory_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QAbstractInputContextFactory_delete(void *ptr);
extern (C) void qtd_QAbstractInputContextFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractInputContextFactory_QAbstractInputContextFactory(void *d_ptr);
private extern(C) void*  qtd_QAbstractInputContextFactory_create_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QAbstractInputContextFactory_description_string(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) void  qtd_QAbstractInputContextFactory_displayName_string(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) void  qtd_QAbstractInputContextFactory_keys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QAbstractInputContextFactory_languages_string(void* __this_nativeId,
 void* __d_return_value,
 string key0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, wchar* key0, int key0_size) qtd_QAbstractInputContextFactory_create_string_dispatch; }
extern(C) void* qtd_export_QAbstractInputContextFactory_create_string_dispatch(void *dId, wchar* key0, int key0_size){
    auto d_object = cast(IQAbstractInputContextFactory)cast(Object) dId;
    string key0_d_ref = toUTF8(key0[0..key0_size]);
    QInputContext ret_value = d_object.create(key0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, string* ret_str, wchar* key0, int key0_size) qtd_QAbstractInputContextFactory_description_string_dispatch; }
extern(C) void qtd_export_QAbstractInputContextFactory_description_string_dispatch(void *dId, string* ret_str, wchar* key0, int key0_size){
    auto d_object = cast(IQAbstractInputContextFactory)cast(Object) dId;
    string key0_d_ref = toUTF8(key0[0..key0_size]);
    string _d_str = d_object.description(key0_d_ref);
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId, string* ret_str, wchar* key0, int key0_size) qtd_QAbstractInputContextFactory_displayName_string_dispatch; }
extern(C) void qtd_export_QAbstractInputContextFactory_displayName_string_dispatch(void *dId, string* ret_str, wchar* key0, int key0_size){
    auto d_object = cast(IQAbstractInputContextFactory)cast(Object) dId;
    string key0_d_ref = toUTF8(key0[0..key0_size]);
    string _d_str = d_object.displayName(key0_d_ref);
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId, QList!(string)* __d_arr, wchar* key0, int key0_size) qtd_QAbstractInputContextFactory_languages_string_dispatch; }
extern(C) void qtd_export_QAbstractInputContextFactory_languages_string_dispatch(void *dId, QList!(string)* __d_arr, wchar* key0, int key0_size){
    auto d_object = cast(IQAbstractInputContextFactory)cast(Object) dId;
    string key0_d_ref = toUTF8(key0[0..key0_size]);
    auto return_value = d_object.languages(key0_d_ref);
    *__d_arr = return_value;
}

private extern (C) void qtd_QAbstractInputContextFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractInputContextFactory() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractInputContextFactory_create_string_dispatch;
    virt_arr[1] = &qtd_export_QAbstractInputContextFactory_description_string_dispatch;
    virt_arr[2] = &qtd_export_QAbstractInputContextFactory_displayName_string_dispatch;
    virt_arr[3] = &qtd_export_QAbstractInputContextFactory_languages_string_dispatch;
    qtd_QAbstractInputContextFactory_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQAbstractInputContextFactory : IQAbstractFactory
{
// Functions

        public QInputContext create(string key);

        public string description(string key);

        public string displayName(string key);

        public QList!(string) keys() const;

        public QList!(string) languages(string key);

        public void* __ptr_IQAbstractInputContextFactory();

// Field accessors
        public alias void __isQtType_IQAbstractInputContextFactory;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}
        private static extern (C) void*qtd_IQAbstractInputContextFactory_cast_to_QAbstractFactory(void* nativeId);

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

