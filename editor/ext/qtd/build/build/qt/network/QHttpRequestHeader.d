module qt.network.QHttpRequestHeader;

public import qt.network.QHttpRequestHeader_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.network.QHttpHeader;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QHttpRequestHeader : QHttpHeader
{

// Functions

    public this() {
        void* ret = qtd_QHttpRequestHeader_QHttpRequestHeader(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QHttpRequestHeader) header) {
        void* ret = qtd_QHttpRequestHeader_QHttpRequestHeader_QHttpRequestHeader(cast(void*) this, header is null ? null : (cast(QHttpRequestHeader)header).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string method, string path, int majorVer = 1, int minorVer = 1) {
        void* ret = qtd_QHttpRequestHeader_QHttpRequestHeader_string_string_int_int(cast(void*) this, method, path, majorVer, minorVer);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string str) {
        void* ret = qtd_QHttpRequestHeader_QHttpRequestHeader_string(cast(void*) this, str);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string method() const {
        string res;
        qtd_QHttpRequestHeader_method_const(qtdNativeId, &res);
        return res;
    }

    public final string path() const {
        string res;
        qtd_QHttpRequestHeader_path_const(qtdNativeId, &res);
        return res;
    }

    public final void setRequest(string method, string path, int majorVer = 1, int minorVer = 1) {
        qtd_QHttpRequestHeader_setRequest_string_string_int_int(qtdNativeId, method, path, majorVer, minorVer);
    }

    public int majorVersion() const {
        return qtd_QHttpRequestHeader_majorVersion_const(qtdNativeId);
    }

    public int minorVersion() const {
        return qtd_QHttpRequestHeader_minorVersion_const(qtdNativeId);
    }

    protected bool parseLine(string line, int number) {
        return qtd_QHttpRequestHeader_parseLine_string_int(qtdNativeId, line, number);
    }

    public string toString() const {
        string res;
        qtd_QHttpRequestHeader_toString_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QHttpRequestHeader;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QHttpRequestHeader_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QHttpRequestHeader_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QHttpRequestHeader_QTypeInfo_isComplex();
        isStatic = qtd_QHttpRequestHeader_QTypeInfo_isStatic();
        isLarge = qtd_QHttpRequestHeader_QTypeInfo_isLarge();
        isPointer = qtd_QHttpRequestHeader_QTypeInfo_isPointer();
        isDummy = qtd_QHttpRequestHeader_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QHttpRequestHeader_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QHttpRequestHeader_native_copy(const void* orig);

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHttpRequestHeader_QHttpRequestHeader(void *d_ptr);
private extern(C) void* qtd_QHttpRequestHeader_QHttpRequestHeader_QHttpRequestHeader(void *d_ptr,
 void* header0);
private extern(C) void* qtd_QHttpRequestHeader_QHttpRequestHeader_string_string_int_int(void *d_ptr,
 string method0,
 string path1,
 int majorVer2,
 int minorVer3);
private extern(C) void* qtd_QHttpRequestHeader_QHttpRequestHeader_string(void *d_ptr,
 string str0);
private extern(C) void  qtd_QHttpRequestHeader_method_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QHttpRequestHeader_path_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QHttpRequestHeader_setRequest_string_string_int_int(void* __this_nativeId,
 string method0,
 string path1,
 int majorVer2,
 int minorVer3);
private extern(C) int  qtd_QHttpRequestHeader_majorVersion_const(void* __this_nativeId);
private extern(C) int  qtd_QHttpRequestHeader_minorVersion_const(void* __this_nativeId);
private extern(C) bool  qtd_QHttpRequestHeader_parseLine_string_int(void* __this_nativeId,
 string line0,
 int number1);
private extern(C) void  qtd_QHttpRequestHeader_toString_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QHttpRequestHeader_initCallBacks(void* virtuals);

extern(C) void static_init_QHttpRequestHeader() {
    QHttpRequestHeader.QTypeInfo.init();
    qtd_QHttpRequestHeader_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QHttpRequestHeader_QTypeInfo_isComplex();
private extern (C) bool qtd_QHttpRequestHeader_QTypeInfo_isStatic();
private extern (C) bool qtd_QHttpRequestHeader_QTypeInfo_isLarge();
private extern (C) bool qtd_QHttpRequestHeader_QTypeInfo_isPointer();
private extern (C) bool qtd_QHttpRequestHeader_QTypeInfo_isDummy();
