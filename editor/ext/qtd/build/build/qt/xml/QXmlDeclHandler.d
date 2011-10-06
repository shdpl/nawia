module qt.xml.QXmlDeclHandler;

public import qt.xml.QXmlDeclHandler_aux;
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


public abstract class QXmlDeclHandler : QtdObject, IQXmlDeclHandler
{

// Functions

    public this() {
        void* ret = qtd_QXmlDeclHandler_QXmlDeclHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract bool attributeDecl(string eName, string aName, string type, string valueDefault, string value);

    public abstract string errorString() const;

    public abstract bool externalEntityDecl(string name, string publicId, string systemId);

    public abstract bool internalEntityDecl(string name, string value);
// Field accessors
    static IQXmlDeclHandler __getObject(void* nativeId) {
        return qtd_QXmlDeclHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlDeclHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQXmlDeclHandler = qtd_QXmlDeclHandler_cast_to_QXmlDeclHandler(nativeId);
    }

    private void* __m_ptr_IQXmlDeclHandler;
    public void* __ptr_IQXmlDeclHandler() { return __m_ptr_IQXmlDeclHandler; }

    protected override void qtdDeleteNative() {
        qtd_QXmlDeclHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlDeclHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlDeclHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QXmlDeclHandler_cast_to_QXmlDeclHandler(void* nativeId);

    public class QXmlDeclHandler_ConcreteWrapper : QXmlDeclHandler {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool attributeDecl(string eName, string aName, string type, string valueDefault, string value) {
            return qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string(qtdNativeId, eName, aName, type, valueDefault, value);
        }

        override         public string errorString() const {
            string res;
            qtd_QXmlDeclHandler_errorString_const(qtdNativeId, &res);
            return res;
        }

        override         public bool externalEntityDecl(string name, string publicId, string systemId) {
            return qtd_QXmlDeclHandler_externalEntityDecl_string_string_string(qtdNativeId, name, publicId, systemId);
        }

        override         public bool internalEntityDecl(string name, string value) {
            return qtd_QXmlDeclHandler_internalEntityDecl_string_string(qtdNativeId, name, value);
        }
    }


extern (C) void *__QXmlDeclHandler_entity(void *q_ptr);

IQXmlDeclHandler qtd_QXmlDeclHandler_from_ptr(void* ret) {
    void* d_obj = __QXmlDeclHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQXmlDeclHandler) d_obj_ref;
    } else {
        auto return_value = new QXmlDeclHandler_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlDeclHandler_delete(void *ptr);
extern (C) void qtd_QXmlDeclHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlDeclHandler_QXmlDeclHandler(void *d_ptr);
private extern(C) bool  qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string(void* __this_nativeId,
 string eName0,
 string aName1,
 string type2,
 string valueDefault3,
 string value4);
private extern(C) void  qtd_QXmlDeclHandler_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlDeclHandler_externalEntityDecl_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2);
private extern(C) bool  qtd_QXmlDeclHandler_internalEntityDecl_string_string(void* __this_nativeId,
 string name0,
 string value1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, wchar* eName0, int eName0_size, wchar* aName1, int aName1_size, wchar* type2, int type2_size, wchar* valueDefault3, int valueDefault3_size, wchar* value4, int value4_size) qtd_QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch; }
extern(C) bool qtd_export_QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch(void *dId, wchar* eName0, int eName0_size, wchar* aName1, int aName1_size, wchar* type2, int type2_size, wchar* valueDefault3, int valueDefault3_size, wchar* value4, int value4_size){
    auto d_object = cast(IQXmlDeclHandler)cast(Object) dId;
    string eName0_d_ref = toUTF8(eName0[0..eName0_size]);
    string aName1_d_ref = toUTF8(aName1[0..aName1_size]);
    string type2_d_ref = toUTF8(type2[0..type2_size]);
    string valueDefault3_d_ref = toUTF8(valueDefault3[0..valueDefault3_size]);
    string value4_d_ref = toUTF8(value4[0..value4_size]);
    auto return_value = d_object.attributeDecl(eName0_d_ref, aName1_d_ref, type2_d_ref, valueDefault3_d_ref, value4_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QXmlDeclHandler_errorString_const_dispatch; }
extern(C) void qtd_export_QXmlDeclHandler_errorString_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(IQXmlDeclHandler)cast(Object) dId;
    string _d_str = d_object.errorString();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size) qtd_QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch; }
extern(C) bool qtd_export_QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size){
    auto d_object = cast(IQXmlDeclHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    string publicId1_d_ref = toUTF8(publicId1[0..publicId1_size]);
    string systemId2_d_ref = toUTF8(systemId2[0..systemId2_size]);
    auto return_value = d_object.externalEntityDecl(name0_d_ref, publicId1_d_ref, systemId2_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size, wchar* value1, int value1_size) qtd_QXmlDeclHandler_internalEntityDecl_string_string_dispatch; }
extern(C) bool qtd_export_QXmlDeclHandler_internalEntityDecl_string_string_dispatch(void *dId, wchar* name0, int name0_size, wchar* value1, int value1_size){
    auto d_object = cast(IQXmlDeclHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    string value1_d_ref = toUTF8(value1[0..value1_size]);
    auto return_value = d_object.internalEntityDecl(name0_d_ref, value1_d_ref);
    return return_value;
}

private extern (C) void qtd_QXmlDeclHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlDeclHandler() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QXmlDeclHandler_attributeDecl_string_string_string_string_string_dispatch;
    virt_arr[1] = &qtd_export_QXmlDeclHandler_errorString_const_dispatch;
    virt_arr[2] = &qtd_export_QXmlDeclHandler_externalEntityDecl_string_string_string_dispatch;
    virt_arr[3] = &qtd_export_QXmlDeclHandler_internalEntityDecl_string_string_dispatch;
    qtd_QXmlDeclHandler_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQXmlDeclHandler
{
// Functions

        public bool attributeDecl(string eName, string aName, string type, string valueDefault, string value);

        public string errorString() const;

        public bool externalEntityDecl(string name, string publicId, string systemId);

        public bool internalEntityDecl(string name, string value);

        public void* __ptr_IQXmlDeclHandler();

// Field accessors
        public alias void __isQtType_IQXmlDeclHandler;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

