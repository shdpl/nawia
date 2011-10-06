module qt.core.QXmlStreamEntityResolver;

public import qt.core.QXmlStreamEntityResolver_aux;
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


public class QXmlStreamEntityResolver : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlStreamEntityResolver_QXmlStreamEntityResolver(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public string resolveEntity(string publicId, string systemId) {
        string res;
        qtd_QXmlStreamEntityResolver_resolveEntity_string_string(qtdNativeId, &res, publicId, systemId);
        return res;
    }

    public string resolveUndeclaredEntity(string name) {
        string res;
        qtd_QXmlStreamEntityResolver_resolveUndeclaredEntity_string(qtdNativeId, &res, name);
        return res;
    }
// Field accessors
    static QXmlStreamEntityResolver __getObject(void* nativeId) {
        return qtd_QXmlStreamEntityResolver_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlStreamEntityResolver;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamEntityResolver_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamEntityResolver_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamEntityResolver_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QXmlStreamEntityResolver_entity(void *q_ptr);

QXmlStreamEntityResolver qtd_QXmlStreamEntityResolver_from_ptr(void* ret) {
    void* d_obj = __QXmlStreamEntityResolver_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QXmlStreamEntityResolver) d_obj_ref;
    } else {
        auto return_value = new QXmlStreamEntityResolver(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlStreamEntityResolver_delete(void *ptr);
extern (C) void qtd_QXmlStreamEntityResolver_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamEntityResolver_QXmlStreamEntityResolver(void *d_ptr);
private extern(C) void  qtd_QXmlStreamEntityResolver_resolveEntity_string_string(void* __this_nativeId,
 void* __d_return_value,
 string publicId0,
 string systemId1);
private extern(C) void  qtd_QXmlStreamEntityResolver_resolveUndeclaredEntity_string(void* __this_nativeId,
 void* __d_return_value,
 string name0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str, wchar* publicId0, int publicId0_size, wchar* systemId1, int systemId1_size) qtd_QXmlStreamEntityResolver_resolveEntity_string_string_dispatch; }
extern(C) void qtd_export_QXmlStreamEntityResolver_resolveEntity_string_string_dispatch(void *dId, string* ret_str, wchar* publicId0, int publicId0_size, wchar* systemId1, int systemId1_size){
    auto d_object = cast(QXmlStreamEntityResolver) dId;
    string publicId0_d_ref = toUTF8(publicId0[0..publicId0_size]);
    string systemId1_d_ref = toUTF8(systemId1[0..systemId1_size]);
    string _d_str = d_object.resolveEntity(publicId0_d_ref, systemId1_d_ref);
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId, string* ret_str, wchar* name0, int name0_size) qtd_QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch; }
extern(C) void qtd_export_QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch(void *dId, string* ret_str, wchar* name0, int name0_size){
    auto d_object = cast(QXmlStreamEntityResolver) dId;
    string name0_d_ref = toUTF8(name0[0..name0_size]);
    string _d_str = d_object.resolveUndeclaredEntity(name0_d_ref);
    *ret_str = _d_str;
}

private extern (C) void qtd_QXmlStreamEntityResolver_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlStreamEntityResolver() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QXmlStreamEntityResolver_resolveEntity_string_string_dispatch;
    virt_arr[1] = &qtd_export_QXmlStreamEntityResolver_resolveUndeclaredEntity_string_dispatch;
    qtd_QXmlStreamEntityResolver_initCallBacks(virt_arr.ptr);
}

// signal handlers

