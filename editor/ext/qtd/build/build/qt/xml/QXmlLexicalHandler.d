module qt.xml.QXmlLexicalHandler;

public import qt.xml.QXmlLexicalHandler_aux;
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


public abstract class QXmlLexicalHandler : QtdObject, IQXmlLexicalHandler
{

// Functions

    public this() {
        void* ret = qtd_QXmlLexicalHandler_QXmlLexicalHandler(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract bool comment(string ch);

    public abstract bool endCDATA();

    public abstract bool endDTD();

    public abstract bool endEntity(string name);

    public abstract string errorString() const;

    public abstract bool startCDATA();

    public abstract bool startDTD(string name, string publicId, string systemId);

    public abstract bool startEntity(string name);
// Field accessors
    static IQXmlLexicalHandler __getObject(void* nativeId) {
        return qtd_QXmlLexicalHandler_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlLexicalHandler;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQXmlLexicalHandler = qtd_QXmlLexicalHandler_cast_to_QXmlLexicalHandler(nativeId);
    }

    private void* __m_ptr_IQXmlLexicalHandler;
    public void* __ptr_IQXmlLexicalHandler() { return __m_ptr_IQXmlLexicalHandler; }

    protected override void qtdDeleteNative() {
        qtd_QXmlLexicalHandler_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlLexicalHandler_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlLexicalHandler_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QXmlLexicalHandler_cast_to_QXmlLexicalHandler(void* nativeId);

    public class QXmlLexicalHandler_ConcreteWrapper : QXmlLexicalHandler {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool comment(string ch) {
            return qtd_QXmlLexicalHandler_comment_string(qtdNativeId, ch);
        }

        override         public bool endCDATA() {
            return qtd_QXmlLexicalHandler_endCDATA(qtdNativeId);
        }

        override         public bool endDTD() {
            return qtd_QXmlLexicalHandler_endDTD(qtdNativeId);
        }

        override         public bool endEntity(string name) {
            return qtd_QXmlLexicalHandler_endEntity_string(qtdNativeId, name);
        }

        override         public string errorString() const {
            string res;
            qtd_QXmlLexicalHandler_errorString_const(qtdNativeId, &res);
            return res;
        }

        override         public bool startCDATA() {
            return qtd_QXmlLexicalHandler_startCDATA(qtdNativeId);
        }

        override         public bool startDTD(string name, string publicId, string systemId) {
            return qtd_QXmlLexicalHandler_startDTD_string_string_string(qtdNativeId, name, publicId, systemId);
        }

        override         public bool startEntity(string name) {
            return qtd_QXmlLexicalHandler_startEntity_string(qtdNativeId, name);
        }
    }


extern (C) void *__QXmlLexicalHandler_entity(void *q_ptr);

IQXmlLexicalHandler qtd_QXmlLexicalHandler_from_ptr(void* ret) {
    void* d_obj = __QXmlLexicalHandler_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQXmlLexicalHandler) d_obj_ref;
    } else {
        auto return_value = new QXmlLexicalHandler_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlLexicalHandler_delete(void *ptr);
extern (C) void qtd_QXmlLexicalHandler_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlLexicalHandler_QXmlLexicalHandler(void *d_ptr);
private extern(C) bool  qtd_QXmlLexicalHandler_comment_string(void* __this_nativeId,
 string ch0);
private extern(C) bool  qtd_QXmlLexicalHandler_endCDATA(void* __this_nativeId);
private extern(C) bool  qtd_QXmlLexicalHandler_endDTD(void* __this_nativeId);
private extern(C) bool  qtd_QXmlLexicalHandler_endEntity_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QXmlLexicalHandler_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlLexicalHandler_startCDATA(void* __this_nativeId);
private extern(C) bool  qtd_QXmlLexicalHandler_startDTD_string_string_string(void* __this_nativeId,
 string name0,
 string publicId1,
 string systemId2);
private extern(C) bool  qtd_QXmlLexicalHandler_startEntity_string(void* __this_nativeId,
 string name0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, wchar* ch0, int ch0_size) qtd_QXmlLexicalHandler_comment_string_dispatch; }
extern(C) bool qtd_export_QXmlLexicalHandler_comment_string_dispatch(void *dId, wchar* ch0, int ch0_size){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    string ch0_d_ref = toUTF8(ch0[0..ch0_size]);
    auto return_value = d_object.comment(ch0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QXmlLexicalHandler_endCDATA_dispatch; }
extern(C) bool qtd_export_QXmlLexicalHandler_endCDATA_dispatch(void *dId){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    auto return_value = d_object.endCDATA();
    return return_value;
}

extern(C){ extern bool function(void *dId) qtd_QXmlLexicalHandler_endDTD_dispatch; }
extern(C) bool qtd_export_QXmlLexicalHandler_endDTD_dispatch(void *dId){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    auto return_value = d_object.endDTD();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size) qtd_QXmlLexicalHandler_endEntity_string_dispatch; }
extern(C) bool qtd_export_QXmlLexicalHandler_endEntity_string_dispatch(void *dId, wchar* name0, int name0_size){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    auto return_value = d_object.endEntity(name0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QXmlLexicalHandler_errorString_const_dispatch; }
extern(C) void qtd_export_QXmlLexicalHandler_errorString_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    string _d_str = d_object.errorString();
    *ret_str = _d_str;
}

extern(C){ extern bool function(void *dId) qtd_QXmlLexicalHandler_startCDATA_dispatch; }
extern(C) bool qtd_export_QXmlLexicalHandler_startCDATA_dispatch(void *dId){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    auto return_value = d_object.startCDATA();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size) qtd_QXmlLexicalHandler_startDTD_string_string_string_dispatch; }
extern(C) bool qtd_export_QXmlLexicalHandler_startDTD_string_string_string_dispatch(void *dId, wchar* name0, int name0_size, wchar* publicId1, int publicId1_size, wchar* systemId2, int systemId2_size){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    string publicId1_d_ref = toUTF8(publicId1[0..publicId1_size]);
    string systemId2_d_ref = toUTF8(systemId2[0..systemId2_size]);
    auto return_value = d_object.startDTD(name0_d_ref, publicId1_d_ref, systemId2_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* name0, int name0_size) qtd_QXmlLexicalHandler_startEntity_string_dispatch; }
extern(C) bool qtd_export_QXmlLexicalHandler_startEntity_string_dispatch(void *dId, wchar* name0, int name0_size){
    auto d_object = cast(IQXmlLexicalHandler)cast(Object) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    auto return_value = d_object.startEntity(name0_d_ref);
    return return_value;
}

private extern (C) void qtd_QXmlLexicalHandler_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlLexicalHandler() {
    void*[8] virt_arr;
    virt_arr[0] = &qtd_export_QXmlLexicalHandler_comment_string_dispatch;
    virt_arr[1] = &qtd_export_QXmlLexicalHandler_endCDATA_dispatch;
    virt_arr[2] = &qtd_export_QXmlLexicalHandler_endDTD_dispatch;
    virt_arr[3] = &qtd_export_QXmlLexicalHandler_endEntity_string_dispatch;
    virt_arr[4] = &qtd_export_QXmlLexicalHandler_errorString_const_dispatch;
    virt_arr[5] = &qtd_export_QXmlLexicalHandler_startCDATA_dispatch;
    virt_arr[6] = &qtd_export_QXmlLexicalHandler_startDTD_string_string_string_dispatch;
    virt_arr[7] = &qtd_export_QXmlLexicalHandler_startEntity_string_dispatch;
    qtd_QXmlLexicalHandler_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQXmlLexicalHandler
{
// Functions

        public bool comment(string ch);

        public bool endCDATA();

        public bool endDTD();

        public bool endEntity(string name);

        public string errorString() const;

        public bool startCDATA();

        public bool startDTD(string name, string publicId, string systemId);

        public bool startEntity(string name);

        public void* __ptr_IQXmlLexicalHandler();

// Field accessors
        public alias void __isQtType_IQXmlLexicalHandler;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

