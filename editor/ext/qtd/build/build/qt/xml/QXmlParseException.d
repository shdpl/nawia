module qt.xml.QXmlParseException;

public import qt.xml.QXmlParseException_aux;
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


public class QXmlParseException : QtdObject
{

// Functions

    public this(string name = "", int c = -1, int l = -1, string p = "", string s = "") {
        void* ret = qtd_QXmlParseException_QXmlParseException_string_int_int_string_string(name, c, l, p, s);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QXmlParseException) other) {
        void* ret = qtd_QXmlParseException_QXmlParseException_QXmlParseException(other is null ? null : (cast(QXmlParseException)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int columnNumber() const {
        return qtd_QXmlParseException_columnNumber_const(qtdNativeId);
    }

    public final int lineNumber() const {
        return qtd_QXmlParseException_lineNumber_const(qtdNativeId);
    }

    public final string message() const {
        string res;
        qtd_QXmlParseException_message_const(qtdNativeId, &res);
        return res;
    }

    public final string publicId() const {
        string res;
        qtd_QXmlParseException_publicId_const(qtdNativeId, &res);
        return res;
    }

    public final string systemId() const {
        string res;
        qtd_QXmlParseException_systemId_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlParseException;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QXmlParseException_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QXmlParseException_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlParseException_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlParseException_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlParseException_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlParseException_QTypeInfo_isComplex();
        isStatic = qtd_QXmlParseException_QTypeInfo_isStatic();
        isLarge = qtd_QXmlParseException_QTypeInfo_isLarge();
        isPointer = qtd_QXmlParseException_QTypeInfo_isPointer();
        isDummy = qtd_QXmlParseException_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QXmlParseException_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QXmlParseException_native_copy(const void* orig);
extern (C) void qtd_QXmlParseException_delete(void *ptr);
extern (C) void qtd_QXmlParseException_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlParseException_QXmlParseException_string_int_int_string_string(string name0,
 int c1,
 int l2,
 string p3,
 string s4);
private extern(C) void* qtd_QXmlParseException_QXmlParseException_QXmlParseException(void* other0);
private extern(C) int  qtd_QXmlParseException_columnNumber_const(void* __this_nativeId);
private extern(C) int  qtd_QXmlParseException_lineNumber_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlParseException_message_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlParseException_publicId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlParseException_systemId_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QXmlParseException() {
    QXmlParseException.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QXmlParseException_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlParseException_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlParseException_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlParseException_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlParseException_QTypeInfo_isDummy();
