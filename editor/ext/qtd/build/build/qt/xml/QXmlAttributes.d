module qt.xml.QXmlAttributes;

public import qt.xml.QXmlAttributes_aux;
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


public class QXmlAttributes : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlAttributes_QXmlAttributes(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void append(string qName, string uri, string localPart, string value) {
        qtd_QXmlAttributes_append_string_string_string_string(qtdNativeId, qName, uri, localPart, value);
    }

    public final void clear() {
        qtd_QXmlAttributes_clear(qtdNativeId);
    }

    public final int count() const {
        return qtd_QXmlAttributes_count_const(qtdNativeId);
    }

    public final int index(string qName) const {
        return qtd_QXmlAttributes_index_string_const(qtdNativeId, qName);
    }

    public final int index(string uri, string localPart) const {
        return qtd_QXmlAttributes_index_string_string_const(qtdNativeId, uri, localPart);
    }

    public final int length() const {
        return qtd_QXmlAttributes_length_const(qtdNativeId);
    }

    public final string localName(int index) const {
        string res;
        qtd_QXmlAttributes_localName_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string qName(int index) const {
        string res;
        qtd_QXmlAttributes_qName_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string type(string qName) const {
        string res;
        qtd_QXmlAttributes_type_string_const(qtdNativeId, &res, qName);
        return res;
    }

    public final string type(string uri, string localName) const {
        string res;
        qtd_QXmlAttributes_type_string_string_const(qtdNativeId, &res, uri, localName);
        return res;
    }

    public final string type(int index) const {
        string res;
        qtd_QXmlAttributes_type_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string uri(int index) const {
        string res;
        qtd_QXmlAttributes_uri_int_const(qtdNativeId, &res, index);
        return res;
    }

    public final string value(string qName) const {
        string res;
        qtd_QXmlAttributes_value_string_const(qtdNativeId, &res, qName);
        return res;
    }

    public final string value(string uri, string localName) const {
        string res;
        qtd_QXmlAttributes_value_string_string_const(qtdNativeId, &res, uri, localName);
        return res;
    }

    public final string value(int index) const {
        string res;
        qtd_QXmlAttributes_value_int_const(qtdNativeId, &res, index);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlAttributes;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QXmlAttributes_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QXmlAttributes_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlAttributes_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlAttributes_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlAttributes_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlAttributes_QTypeInfo_isComplex();
        isStatic = qtd_QXmlAttributes_QTypeInfo_isStatic();
        isLarge = qtd_QXmlAttributes_QTypeInfo_isLarge();
        isPointer = qtd_QXmlAttributes_QTypeInfo_isPointer();
        isDummy = qtd_QXmlAttributes_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QXmlAttributes_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QXmlAttributes_native_copy(const void* orig);
extern (C) void qtd_QXmlAttributes_delete(void *ptr);
extern (C) void qtd_QXmlAttributes_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlAttributes_QXmlAttributes(void *d_ptr);
private extern(C) void  qtd_QXmlAttributes_append_string_string_string_string(void* __this_nativeId,
 string qName0,
 string uri1,
 string localPart2,
 string value3);
private extern(C) void  qtd_QXmlAttributes_clear(void* __this_nativeId);
private extern(C) int  qtd_QXmlAttributes_count_const(void* __this_nativeId);
private extern(C) int  qtd_QXmlAttributes_index_string_const(void* __this_nativeId,
 string qName0);
private extern(C) int  qtd_QXmlAttributes_index_string_string_const(void* __this_nativeId,
 string uri0,
 string localPart1);
private extern(C) int  qtd_QXmlAttributes_length_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlAttributes_localName_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QXmlAttributes_qName_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QXmlAttributes_type_string_const(void* __this_nativeId,
 void* __d_return_value,
 string qName0);
private extern(C) void  qtd_QXmlAttributes_type_string_string_const(void* __this_nativeId,
 void* __d_return_value,
 string uri0,
 string localName1);
private extern(C) void  qtd_QXmlAttributes_type_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QXmlAttributes_uri_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
private extern(C) void  qtd_QXmlAttributes_value_string_const(void* __this_nativeId,
 void* __d_return_value,
 string qName0);
private extern(C) void  qtd_QXmlAttributes_value_string_string_const(void* __this_nativeId,
 void* __d_return_value,
 string uri0,
 string localName1);
private extern(C) void  qtd_QXmlAttributes_value_int_const(void* __this_nativeId,
 void* __d_return_value,
 int index0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QXmlAttributes_initCallBacks(void* virtuals);

extern(C) void static_init_QXmlAttributes() {
    QXmlAttributes.QTypeInfo.init();
    qtd_QXmlAttributes_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QXmlAttributes_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlAttributes_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlAttributes_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlAttributes_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlAttributes_QTypeInfo_isDummy();
