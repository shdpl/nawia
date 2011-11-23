module qt.xml.QXmlInputSource;

public import qt.xml.QXmlInputSource_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QXmlInputSource : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlInputSource_QXmlInputSource(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QIODevice dev) {
        void* ret = qtd_QXmlInputSource_QXmlInputSource_QIODevice(cast(void*) this, dev is null ? null : dev.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public string data() const {
        string res;
        qtd_QXmlInputSource_data_const(qtdNativeId, &res);
        return res;
    }

    public void fetchData() {
        qtd_QXmlInputSource_fetchData(qtdNativeId);
    }

    protected string fromRawData(const(QByteArray) data, bool beginning = false) {
        string res;
        qtd_QXmlInputSource_fromRawData_QByteArray_bool(qtdNativeId, &res, data is null ? null : (cast(QByteArray)data).qtdNativeId, beginning);
        return res;
    }

    public void reset() {
        qtd_QXmlInputSource_reset(qtdNativeId);
    }

    public void setData(const(QByteArray) dat) {
        qtd_QXmlInputSource_setData_QByteArray(qtdNativeId, dat is null ? null : (cast(QByteArray)dat).qtdNativeId);
    }

    public void setData(string dat) {
        qtd_QXmlInputSource_setData_string(qtdNativeId, dat);
    }
// Field accessors
    static QXmlInputSource __getObject(void* nativeId) {
        return qtd_QXmlInputSource_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QXmlInputSource;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlInputSource_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlInputSource_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlInputSource_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QXmlInputSource_entity(void *q_ptr);

QXmlInputSource qtd_QXmlInputSource_from_ptr(void* ret) {
    void* d_obj = __QXmlInputSource_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QXmlInputSource) d_obj_ref;
    } else {
        auto return_value = new QXmlInputSource(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QXmlInputSource_delete(void *ptr);
extern (C) void qtd_QXmlInputSource_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlInputSource_QXmlInputSource(void *d_ptr);
private extern(C) void* qtd_QXmlInputSource_QXmlInputSource_QIODevice(void *d_ptr,
 void* dev0);
private extern(C) void  qtd_QXmlInputSource_data_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlInputSource_fetchData(void* __this_nativeId);
private extern(C) void  qtd_QXmlInputSource_fromRawData_QByteArray_bool(void* __this_nativeId,
 void* __d_return_value,
 void* data0,
 bool beginning1);
private extern(C) void  qtd_QXmlInputSource_reset(void* __this_nativeId);
private extern(C) void  qtd_QXmlInputSource_setData_QByteArray(void* __this_nativeId,
 void* dat0);
private extern(C) void  qtd_QXmlInputSource_setData_string(void* __this_nativeId,
 string dat0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str) qtd_QXmlInputSource_data_const_dispatch; }
extern(C) void qtd_export_QXmlInputSource_data_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QXmlInputSource) dId;
    string _d_str = d_object.data();
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId) qtd_QXmlInputSource_fetchData_dispatch; }
extern(C) void qtd_export_QXmlInputSource_fetchData_dispatch(void *dId){
    auto d_object = cast(QXmlInputSource) dId;
    d_object.fetchData();
}

extern(C){ extern void function(void *dId, string* ret_str, void* data0, bool beginning1) qtd_QXmlInputSource_fromRawData_QByteArray_bool_dispatch; }
extern(C) void qtd_export_QXmlInputSource_fromRawData_QByteArray_bool_dispatch(void *dId, string* ret_str, void* data0, bool beginning1){
    auto d_object = cast(QXmlInputSource) dId;
    scope data0_d_ref = new QByteArray(data0, QtdObjectInitFlags.onStack);
    string _d_str = d_object.fromRawData(data0_d_ref, beginning1);
    *ret_str = _d_str;
}

extern(C){ extern void function(void *dId) qtd_QXmlInputSource_reset_dispatch; }
extern(C) void qtd_export_QXmlInputSource_reset_dispatch(void *dId){
    auto d_object = cast(QXmlInputSource) dId;
    d_object.reset();
}

extern(C){ extern void function(void *dId, void* dat0) qtd_QXmlInputSource_setData_QByteArray_dispatch; }
extern(C) void qtd_export_QXmlInputSource_setData_QByteArray_dispatch(void *dId, void* dat0){
    auto d_object = cast(QXmlInputSource) dId;
    scope dat0_d_ref = new QByteArray(dat0, QtdObjectInitFlags.onStack);
    d_object.setData(dat0_d_ref);
}

extern(C){ extern void function(void *dId, wchar* dat0, int dat0_size) qtd_QXmlInputSource_setData_string_dispatch; }
extern(C) void qtd_export_QXmlInputSource_setData_string_dispatch(void *dId, wchar* dat0, int dat0_size){
    auto d_object = cast(QXmlInputSource) dId;
    string dat0_d_ref = toUTF8(dat0[0..dat0_size]);
    d_object.setData(dat0_d_ref);
}

private extern (C) void qtd_QXmlInputSource_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlInputSource() {
    void*[6] virt_arr;
    virt_arr[0] = &qtd_export_QXmlInputSource_data_const_dispatch;
    virt_arr[1] = &qtd_export_QXmlInputSource_fetchData_dispatch;
    virt_arr[2] = &qtd_export_QXmlInputSource_fromRawData_QByteArray_bool_dispatch;
    virt_arr[3] = &qtd_export_QXmlInputSource_reset_dispatch;
    virt_arr[4] = &qtd_export_QXmlInputSource_setData_QByteArray_dispatch;
    virt_arr[5] = &qtd_export_QXmlInputSource_setData_string_dispatch;
    qtd_QXmlInputSource_initCallBacks(virt_arr.ptr);
}

// signal handlers

