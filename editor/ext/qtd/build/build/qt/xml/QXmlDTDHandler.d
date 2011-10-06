module qt.xml.QXmlDTDHandler;

public import qt.xml.QXmlDTDHandler_aux;
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


public abstract class QXmlDTDHandler : QtdObject, IQXmlDTDHandler
{

// Functions

    public this() {
        void* ret = qtd_QXmlDTDHandler_QXmlDTDHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract string errorString() const;

    public abstract bool notationDecl(string name, string publicId, string systemId);

    public abstract bool unparsedEntityDecl(string name, string publicId, string systemId, string notationName);
// Field accessors
    static IQXmlDTDHandler __getObject(void* nativeId) {
        return qtd_QXmlDTDHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlDTDHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQXmlDTDHandler = qtd_QXmlDTDHandler_cast_to_QXmlDTDHandler(nativeId);
    }

    private void* __m_ptr_IQXmlDTDHandler;
    public void* __ptr_IQXmlDTDHandler() { return __m_ptr_IQXmlDTDHandler; }

    protected override void qtdDeleteNative() {
        qtd_QXmlDTDHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlDTDHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlDTDHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QXmlDTDHandler_cast_to_QXmlDTDHandler(void* nativeId);

    public class QXmlDTDHandler_ConcreteWrapper : QXmlDTDHandler {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public string errorString() const {
            string res;
            qtd_QXmlDTDHandler_errorString_const(qtdNativeId, &res);
            return res;
        }

        override         public bool notationDecl(string name, string publicId, string systemId) {
            return qtd_QXmlDTDHandler_notationDecl_string_string_string(qtdNativeId, name, publicId, systemId);
        }

        override         public bool unparsedEntityDecl(string name, string publicId, string systemId, string notationName) {
            return qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string(qtdNativeId, name, publicId, systemId, notationName);
        }
    }


extern (C) void *__QXmlDTDHandler_entity(void *q_ptr);

IQXmlDTDHandler qtd_QXmlDTDHandler_from_ptr(void* ret) {
    void* d_obj = __QXmlDTDHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQXmlDTDHandler) d_obj_ref;
    } else {
        auto return_value = new QXmlDTDHandler_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlDTDHandler_delete(void *ptr);
extern (C) void qtd_QXmlDTDHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlDTDHandler_QXmlDTDHandler(void *d_ptr);
private extern(C) void  qtd_QXmlDTDHandler_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlDTDHandler_notationDecl_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2);
private extern(C) bool  qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2,
 string notationName3);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str) qtd_QXmlDTDHandler_errorString_const_dispatch; }
extern(C) void qtd_export_QXmlDTDHandler_errorString_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(IQXmlDTDHandler)cast(Object) dId;
    string _d_str = d_object.errorString();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size) qtd_QXmlDTDHandler_notationDecl_string_string_string_dispatch; }
extern(C) bool qtd_export_QXmlDTDHandler_notationDecl_string_string_string_dispatch(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size){
    auto d_object = cast(IQXmlDTDHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    string publicId1_d_ref = toUTF8(publicId1[0..publicId1_size]);
    string systemId2_d_ref = toUTF8(systemId2[0..systemId2_size]);
    auto return_value = d_object.notationDecl(name0_d_ref, publicId1_d_ref, systemId2_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size, wchar* notationName3, int notationName3_size) qtd_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch; }
extern(C) bool qtd_export_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size, wchar* notationName3, int notationName3_size){
    auto d_object = cast(IQXmlDTDHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    string publicId1_d_ref = toUTF8(publicId1[0..publicId1_size]);
    string systemId2_d_ref = toUTF8(systemId2[0..systemId2_size]);
    string notationName3_d_ref = toUTF8(notationName3[0..notationName3_size]);
    auto return_value = d_object.unparsedEntityDecl(name0_d_ref, publicId1_d_ref, systemId2_d_ref, notationName3_d_ref);
    return return_value;
}

private extern (C) void qtd_QXmlDTDHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlDTDHandler() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QXmlDTDHandler_errorString_const_dispatch;
    virt_arr[1] = &qtd_export_QXmlDTDHandler_notationDecl_string_string_string_dispatch;
    virt_arr[2] = &qtd_export_QXmlDTDHandler_unparsedEntityDecl_string_string_string_string_dispatch;
    qtd_QXmlDTDHandler_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQXmlDTDHandler
{
// Functions

        public string errorString() const;

        public bool notationDecl(string name, string publicId, string systemId);

        public bool unparsedEntityDecl(string name, string publicId, string systemId, string notationName);

        public void* __ptr_IQXmlDTDHandler();

// Field accessors
        public alias void __isQtType_IQXmlDTDHandler;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

