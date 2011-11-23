module qt.xml.QXmlNamespaceSupport;

public import qt.xml.QXmlNamespaceSupport_aux;
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


public class QXmlNamespaceSupport : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlNamespaceSupport_QXmlNamespaceSupport();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void popContext() {
        qtd_QXmlNamespaceSupport_popContext(qtdNativeId);
    }

    public final string prefix(string arg__1) const {
        string res;
        qtd_QXmlNamespaceSupport_prefix_string_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QList!(string) prefixes() const {
        auto res = QList!(string).opCall();
        qtd_QXmlNamespaceSupport_prefixes_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(string) prefixes(string arg__1) const {
        auto res = QList!(string).opCall();
        qtd_QXmlNamespaceSupport_prefixes_string_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final void processName(string arg__1, bool arg__2, ref string arg__3, ref string arg__4) const {
        qtd_QXmlNamespaceSupport_processName_string_bool_nativepointerstring_nativepointerstring_const(qtdNativeId, arg__1, arg__2, arg__3, arg__4);
    }

    public final void pushContext() {
        qtd_QXmlNamespaceSupport_pushContext(qtdNativeId);
    }

    public final void reset() {
        qtd_QXmlNamespaceSupport_reset(qtdNativeId);
    }

    public final void setPrefix(string arg__1, string arg__2) {
        qtd_QXmlNamespaceSupport_setPrefix_string_string(qtdNativeId, arg__1, arg__2);
    }

    public final void splitName(string arg__1, ref string arg__2, ref string arg__3) const {
        qtd_QXmlNamespaceSupport_splitName_string_nativepointerstring_nativepointerstring_const(qtdNativeId, arg__1, arg__2, arg__3);
    }

    public final string uri(string arg__1) const {
        string res;
        qtd_QXmlNamespaceSupport_uri_string_const(qtdNativeId, &res, arg__1);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlNamespaceSupport;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlNamespaceSupport_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlNamespaceSupport_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlNamespaceSupport_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlNamespaceSupport_QTypeInfo_isComplex();
        isStatic = qtd_QXmlNamespaceSupport_QTypeInfo_isStatic();
        isLarge = qtd_QXmlNamespaceSupport_QTypeInfo_isLarge();
        isPointer = qtd_QXmlNamespaceSupport_QTypeInfo_isPointer();
        isDummy = qtd_QXmlNamespaceSupport_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
extern (C) void qtd_QXmlNamespaceSupport_delete(void *ptr);
extern (C) void qtd_QXmlNamespaceSupport_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlNamespaceSupport_QXmlNamespaceSupport();
private extern(C) void  qtd_QXmlNamespaceSupport_popContext(void* __this_nativeId);
private extern(C) void  qtd_QXmlNamespaceSupport_prefix_string_const(void* __this_nativeId,
 void* __d_return_value,
 string arg__1);
private extern(C) void  qtd_QXmlNamespaceSupport_prefixes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlNamespaceSupport_prefixes_string_const(void* __this_nativeId,
 void* __d_return_value,
 string arg__1);
private extern(C) void  qtd_QXmlNamespaceSupport_processName_string_bool_nativepointerstring_nativepointerstring_const(void* __this_nativeId,
 string arg__1,
 bool arg__2,
 string arg__3,
 string arg__4);
private extern(C) void  qtd_QXmlNamespaceSupport_pushContext(void* __this_nativeId);
private extern(C) void  qtd_QXmlNamespaceSupport_reset(void* __this_nativeId);
private extern(C) void  qtd_QXmlNamespaceSupport_setPrefix_string_string(void* __this_nativeId,
 string arg__1,
 string arg__2);
private extern(C) void  qtd_QXmlNamespaceSupport_splitName_string_nativepointerstring_nativepointerstring_const(void* __this_nativeId,
 string arg__1,
 string arg__2,
 string arg__3);
private extern(C) void  qtd_QXmlNamespaceSupport_uri_string_const(void* __this_nativeId,
 void* __d_return_value,
 string arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QXmlNamespaceSupport() {
    QXmlNamespaceSupport.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QXmlNamespaceSupport_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlNamespaceSupport_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlNamespaceSupport_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlNamespaceSupport_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlNamespaceSupport_QTypeInfo_isDummy();
