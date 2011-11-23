module qt.network.QHttpResponseHeader;

public import qt.network.QHttpResponseHeader_aux;
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


public class QHttpResponseHeader : QHttpHeader
{

// Functions

    public this() {
        void* ret = qtd_QHttpResponseHeader_QHttpResponseHeader(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QHttpResponseHeader) header) {
        void* ret = qtd_QHttpResponseHeader_QHttpResponseHeader_QHttpResponseHeader(cast(void*) this, header is null ? null : (cast(QHttpResponseHeader)header).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string str) {
        void* ret = qtd_QHttpResponseHeader_QHttpResponseHeader_string(cast(void*) this, str);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int code, string text = "", int majorVer = 1, int minorVer = 1) {
        void* ret = qtd_QHttpResponseHeader_QHttpResponseHeader_int_string_int_int(cast(void*) this, code, text, majorVer, minorVer);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string reasonPhrase() const {
        string res;
        qtd_QHttpResponseHeader_reasonPhrase_const(qtdNativeId, &res);
        return res;
    }

    public final void setStatusLine(int code, string text = "", int majorVer = 1, int minorVer = 1) {
        qtd_QHttpResponseHeader_setStatusLine_int_string_int_int(qtdNativeId, code, text, majorVer, minorVer);
    }

    public final int statusCode() const {
        return qtd_QHttpResponseHeader_statusCode_const(qtdNativeId);
    }

    public int majorVersion() const {
        return qtd_QHttpResponseHeader_majorVersion_const(qtdNativeId);
    }

    public int minorVersion() const {
        return qtd_QHttpResponseHeader_minorVersion_const(qtdNativeId);
    }

    protected bool parseLine(string line, int number) {
        return qtd_QHttpResponseHeader_parseLine_string_int(qtdNativeId, line, number);
    }

    public string toString() const {
        string res;
        qtd_QHttpResponseHeader_toString_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QHttpResponseHeader;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QHttpResponseHeader_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QHttpResponseHeader_placed_copy(orig, place);
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
        isComplex = qtd_QHttpResponseHeader_QTypeInfo_isComplex();
        isStatic = qtd_QHttpResponseHeader_QTypeInfo_isStatic();
        isLarge = qtd_QHttpResponseHeader_QTypeInfo_isLarge();
        isPointer = qtd_QHttpResponseHeader_QTypeInfo_isPointer();
        isDummy = qtd_QHttpResponseHeader_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QHttpResponseHeader_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QHttpResponseHeader_native_copy(const void* orig);

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QHttpResponseHeader_QHttpResponseHeader(void *d_ptr);
private extern(C) void* qtd_QHttpResponseHeader_QHttpResponseHeader_QHttpResponseHeader(void *d_ptr,
 void* header0);
private extern(C) void* qtd_QHttpResponseHeader_QHttpResponseHeader_string(void *d_ptr,
 string str0);
private extern(C) void* qtd_QHttpResponseHeader_QHttpResponseHeader_int_string_int_int(void *d_ptr,
 int code0,
 string text1,
 int majorVer2,
 int minorVer3);
private extern(C) void  qtd_QHttpResponseHeader_reasonPhrase_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QHttpResponseHeader_setStatusLine_int_string_int_int(void* __this_nativeId,
 int code0,
 string text1,
 int majorVer2,
 int minorVer3);
private extern(C) int  qtd_QHttpResponseHeader_statusCode_const(void* __this_nativeId);
private extern(C) int  qtd_QHttpResponseHeader_majorVersion_const(void* __this_nativeId);
private extern(C) int  qtd_QHttpResponseHeader_minorVersion_const(void* __this_nativeId);
private extern(C) bool  qtd_QHttpResponseHeader_parseLine_string_int(void* __this_nativeId,
 string line0,
 int number1);
private extern(C) void  qtd_QHttpResponseHeader_toString_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QHttpResponseHeader_initCallBacks(void* virtuals);

extern(C) void static_init_QHttpResponseHeader() {
    QHttpResponseHeader.QTypeInfo.init();
    qtd_QHttpResponseHeader_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QHttpResponseHeader_QTypeInfo_isComplex();
private extern (C) bool qtd_QHttpResponseHeader_QTypeInfo_isStatic();
private extern (C) bool qtd_QHttpResponseHeader_QTypeInfo_isLarge();
private extern (C) bool qtd_QHttpResponseHeader_QTypeInfo_isPointer();
private extern (C) bool qtd_QHttpResponseHeader_QTypeInfo_isDummy();
