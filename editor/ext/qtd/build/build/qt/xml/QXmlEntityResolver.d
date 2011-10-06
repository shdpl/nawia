module qt.xml.QXmlEntityResolver;

public import qt.xml.QXmlEntityResolver_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QXmlInputSource;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QXmlEntityResolver : QtdObject, IQXmlEntityResolver
{

// Functions

    public this() {
        void* ret = qtd_QXmlEntityResolver_QXmlEntityResolver(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract string errorString() const;

    public abstract bool resolveEntity(string publicId, string systemId, QXmlInputSource ret);
// Field accessors
    static IQXmlEntityResolver __getObject(void* nativeId) {
        return qtd_QXmlEntityResolver_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlEntityResolver;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQXmlEntityResolver = qtd_QXmlEntityResolver_cast_to_QXmlEntityResolver(nativeId);
    }

    private void* __m_ptr_IQXmlEntityResolver;
    public void* __ptr_IQXmlEntityResolver() { return __m_ptr_IQXmlEntityResolver; }

    protected override void qtdDeleteNative() {
        qtd_QXmlEntityResolver_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlEntityResolver_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlEntityResolver_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QXmlEntityResolver_cast_to_QXmlEntityResolver(void* nativeId);

    public class QXmlEntityResolver_ConcreteWrapper : QXmlEntityResolver {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public string errorString() const {
            string res;
            qtd_QXmlEntityResolver_errorString_const(qtdNativeId, &res);
            return res;
        }

        override         public bool resolveEntity(string publicId, string systemId, QXmlInputSource ret) {
            return qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource(qtdNativeId, publicId, systemId, ret is null ? null : ret.qtdNativeId);
        }
    }


extern (C) void *__QXmlEntityResolver_entity(void *q_ptr);

IQXmlEntityResolver qtd_QXmlEntityResolver_from_ptr(void* ret) {
    void* d_obj = __QXmlEntityResolver_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQXmlEntityResolver) d_obj_ref;
    } else {
        auto return_value = new QXmlEntityResolver_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlEntityResolver_delete(void *ptr);
extern (C) void qtd_QXmlEntityResolver_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlEntityResolver_QXmlEntityResolver(void *d_ptr);
private extern(C) void  qtd_QXmlEntityResolver_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource(void* __this_nativeId,
 string publicId0,
 string systemId1,
 void* ret2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str) qtd_QXmlEntityResolver_errorString_const_dispatch; }
extern(C) void qtd_export_QXmlEntityResolver_errorString_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(IQXmlEntityResolver)cast(Object) dId;
    string _d_str = d_object.errorString();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId, wchar* publicId0, int publicId0_size, wchar* systemId1, int systemId1_size, void* ret2) qtd_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch; }
extern(C) bool qtd_export_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch(void *dId, wchar* publicId0, int publicId0_size, wchar* systemId1, int systemId1_size, void* ret2){
    auto d_object = cast(IQXmlEntityResolver)cast(Object) dId;
    string publicId0_d_ref = toUTF8(publicId0[0..publicId0_size]);
    string systemId1_d_ref = toUTF8(systemId1[0..systemId1_size]);
    scope ret2_d_ref = new QXmlInputSource(ret2, QtdObjectInitFlags.onStack);
    auto return_value = d_object.resolveEntity(publicId0_d_ref, systemId1_d_ref, ret2_d_ref);
    return return_value;
}

private extern (C) void qtd_QXmlEntityResolver_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlEntityResolver() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QXmlEntityResolver_errorString_const_dispatch;
    virt_arr[1] = &qtd_export_QXmlEntityResolver_resolveEntity_string_string_QXmlInputSource_dispatch;
    qtd_QXmlEntityResolver_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQXmlEntityResolver
{
// Functions

        public string errorString() const;

        public bool resolveEntity(string publicId, string systemId, QXmlInputSource ret);

        public void* __ptr_IQXmlEntityResolver();

// Field accessors
        public alias void __isQtType_IQXmlEntityResolver;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

