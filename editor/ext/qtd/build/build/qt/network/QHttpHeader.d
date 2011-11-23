module qt.network.QHttpHeader;

public import qt.network.QHttpHeader_aux;
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


public abstract class QHttpHeader : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QHttpHeader_QHttpHeader(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QHttpHeader header) {
        void* ret = qtd_QHttpHeader_QHttpHeader_QHttpHeader(cast(void*) this, header is null ? null : (cast(QHttpHeader)header).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string str) {
        void* ret = qtd_QHttpHeader_QHttpHeader_string(cast(void*) this, str);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addValue(string key, string value) {
        qtd_QHttpHeader_addValue_string_string(qtdNativeId, key, value);
    }

    public final QList!(string) allValues(string key) const {
        auto res = QList!(string).opCall();
        qtd_QHttpHeader_allValues_string_const(qtdNativeId, &res, key);
        return res;
    }

    public final uint contentLength() const {
        return qtd_QHttpHeader_contentLength_const(qtdNativeId);
    }

    public final string contentType() const {
        string res;
        qtd_QHttpHeader_contentType_const(qtdNativeId, &res);
        return res;
    }

    public final bool hasContentLength() const {
        return qtd_QHttpHeader_hasContentLength_const(qtdNativeId);
    }

    public final bool hasContentType() const {
        return qtd_QHttpHeader_hasContentType_const(qtdNativeId);
    }

    public final bool hasKey(string key) const {
        return qtd_QHttpHeader_hasKey_string_const(qtdNativeId, key);
    }

    public final bool isValid() const {
        return qtd_QHttpHeader_isValid_const(qtdNativeId);
    }

    public final QList!(string) keys() const {
        auto res = QList!(string).opCall();
        qtd_QHttpHeader_keys_const(qtdNativeId, &res);
        return res;
    }

    protected final bool parse(string str) {
        return qtd_QHttpHeader_parse_string(qtdNativeId, str);
    }

    public final void removeAllValues(string key) {
        qtd_QHttpHeader_removeAllValues_string(qtdNativeId, key);
    }

    public final void removeValue(string key) {
        qtd_QHttpHeader_removeValue_string(qtdNativeId, key);
    }

    public final void setContentLength(int len) {
        qtd_QHttpHeader_setContentLength_int(qtdNativeId, len);
    }

    public final void setContentType(string type) {
        qtd_QHttpHeader_setContentType_string(qtdNativeId, type);
    }

    protected final void setValid(bool arg__1) {
        qtd_QHttpHeader_setValid_bool(qtdNativeId, arg__1);
    }

    public final void setValue(string key, string value) {
        qtd_QHttpHeader_setValue_string_string(qtdNativeId, key, value);
    }

    public final string value(string key) const {
        string res;
        qtd_QHttpHeader_value_string_const(qtdNativeId, &res, key);
        return res;
    }

    public abstract int majorVersion() const;

    public abstract int minorVersion() const;

    protected bool parseLine(string line, int number) {
        return qtd_QHttpHeader_parseLine_string_int(qtdNativeId, line, number);
    }

    public string toString() const {
        string res;
        qtd_QHttpHeader_toString_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    static QHttpHeader __getObject(void* nativeId) {
        return qtd_QHttpHeader_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QHttpHeader;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QHttpHeader_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QHttpHeader_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QHttpHeader_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QHttpHeader_ConcreteWrapper : QHttpHeader {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int majorVersion() const {
            return qtd_QHttpHeader_majorVersion_const(qtdNativeId);
        }

        override         public int minorVersion() const {
            return qtd_QHttpHeader_minorVersion_const(qtdNativeId);
        }
    }


extern (C) void *__QHttpHeader_entity(void *q_ptr);

QHttpHeader qtd_QHttpHeader_from_ptr(void* ret) {
    void* d_obj = __QHttpHeader_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QHttpHeader) d_obj_ref;
    } else {
        auto return_value = new QHttpHeader_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QHttpHeader_delete(void *ptr);
extern (C) void qtd_QHttpHeader_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHttpHeader_QHttpHeader(void *d_ptr);
private extern(C) void* qtd_QHttpHeader_QHttpHeader_QHttpHeader(void *d_ptr,
 void* header0);
private extern(C) void* qtd_QHttpHeader_QHttpHeader_string(void *d_ptr,
 string str0);
private extern(C) void  qtd_QHttpHeader_addValue_string_string(void* __this_nativeId,
 string key0,
 string value1);
private extern(C) void  qtd_QHttpHeader_allValues_string_const(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) uint  qtd_QHttpHeader_contentLength_const(void* __this_nativeId);
private extern(C) void  qtd_QHttpHeader_contentType_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QHttpHeader_hasContentLength_const(void* __this_nativeId);
private extern(C) bool  qtd_QHttpHeader_hasContentType_const(void* __this_nativeId);
private extern(C) bool  qtd_QHttpHeader_hasKey_string_const(void* __this_nativeId,
 string key0);
private extern(C) bool  qtd_QHttpHeader_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QHttpHeader_keys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QHttpHeader_parse_string(void* __this_nativeId,
 string str0);
private extern(C) void  qtd_QHttpHeader_removeAllValues_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QHttpHeader_removeValue_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QHttpHeader_setContentLength_int(void* __this_nativeId,
 int len0);
private extern(C) void  qtd_QHttpHeader_setContentType_string(void* __this_nativeId,
 string type0);
private extern(C) void  qtd_QHttpHeader_setValid_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QHttpHeader_setValue_string_string(void* __this_nativeId,
 string key0,
 string value1);
private extern(C) void  qtd_QHttpHeader_value_string_const(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) int  qtd_QHttpHeader_majorVersion_const(void* __this_nativeId);
private extern(C) int  qtd_QHttpHeader_minorVersion_const(void* __this_nativeId);
private extern(C) bool  qtd_QHttpHeader_parseLine_string_int(void* __this_nativeId,
 string line0,
 int number1);
private extern(C) void  qtd_QHttpHeader_toString_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QHttpHeader_majorVersion_const_dispatch; }
extern(C) int qtd_export_QHttpHeader_majorVersion_const_dispatch(void *dId){
    auto d_object = cast(QHttpHeader) dId;
    auto return_value = d_object.majorVersion();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QHttpHeader_minorVersion_const_dispatch; }
extern(C) int qtd_export_QHttpHeader_minorVersion_const_dispatch(void *dId){
    auto d_object = cast(QHttpHeader) dId;
    auto return_value = d_object.minorVersion();
    return return_value;
}

extern(C){ extern bool function(void *dId, wchar* line0, int line0_size, int number1) qtd_QHttpHeader_parseLine_string_int_dispatch; }
extern(C) bool qtd_export_QHttpHeader_parseLine_string_int_dispatch(void *dId, wchar* line0, int line0_size, int number1){
    auto d_object = cast(QHttpHeader) dId;
    string line0_d_ref = toUTF8(line0[0..line0_size]);
    auto return_value = d_object.parseLine(line0_d_ref, number1);
    return return_value;
}

extern(C){ extern void function(void *dId, string* ret_str) qtd_QHttpHeader_toString_const_dispatch; }
extern(C) void qtd_export_QHttpHeader_toString_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QHttpHeader) dId;
    string _d_str = d_object.toString();
    *ret_str = _d_str;
}

private extern (C) void qtd_QHttpHeader_initCallBacks(void* virtuals);

extern(C) void static_init_QHttpHeader() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QHttpHeader_majorVersion_const_dispatch;
    virt_arr[1] = &qtd_export_QHttpHeader_minorVersion_const_dispatch;
    virt_arr[2] = &qtd_export_QHttpHeader_parseLine_string_int_dispatch;
    virt_arr[3] = &qtd_export_QHttpHeader_toString_const_dispatch;
    qtd_QHttpHeader_initCallBacks(virt_arr.ptr);
}

// signal handlers

