module qt.xml.QDomDocumentType;

public import qt.xml.QDomDocumentType_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomNode;
public import qt.xml.QDomNamedNodeMap;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomDocumentType : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomDocumentType_QDomDocumentType();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomDocumentType) x) {
        void* ret = qtd_QDomDocumentType_QDomDocumentType_QDomDocumentType(x is null ? null : (cast(QDomDocumentType)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDomNamedNodeMap entities() const {
        void* ret = qtd_QDomDocumentType_entities_const(qtdNativeId);
        QDomNamedNodeMap __d_return_value = new QDomNamedNodeMap(ret);
        return __d_return_value;
    }

    public final string internalSubset() const {
        string res;
        qtd_QDomDocumentType_internalSubset_const(qtdNativeId, &res);
        return res;
    }

    public final string name() const {
        string res;
        qtd_QDomDocumentType_name_const(qtdNativeId, &res);
        return res;
    }

    public final QDomNamedNodeMap notations() const {
        void* ret = qtd_QDomDocumentType_notations_const(qtdNativeId);
        QDomNamedNodeMap __d_return_value = new QDomNamedNodeMap(ret);
        return __d_return_value;
    }

    public final string publicId() const {
        string res;
        qtd_QDomDocumentType_publicId_const(qtdNativeId, &res);
        return res;
    }

    public final string systemId() const {
        string res;
        qtd_QDomDocumentType_systemId_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomDocumentType;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomDocumentType_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomDocumentType_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomDocumentType_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomDocumentType_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomDocumentType_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomDocumentType_QTypeInfo_isComplex();
        isStatic = qtd_QDomDocumentType_QTypeInfo_isStatic();
        isLarge = qtd_QDomDocumentType_QTypeInfo_isLarge();
        isPointer = qtd_QDomDocumentType_QTypeInfo_isPointer();
        isDummy = qtd_QDomDocumentType_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomDocumentType_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomDocumentType_native_copy(const void* orig);
extern (C) void qtd_QDomDocumentType_delete(void *ptr);
extern (C) void qtd_QDomDocumentType_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomDocumentType_QDomDocumentType();
private extern(C) void* qtd_QDomDocumentType_QDomDocumentType_QDomDocumentType(void* x0);
private extern(C) void*  qtd_QDomDocumentType_entities_const(void* __this_nativeId);
private extern(C) void  qtd_QDomDocumentType_internalSubset_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomDocumentType_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QDomDocumentType_notations_const(void* __this_nativeId);
private extern(C) void  qtd_QDomDocumentType_publicId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomDocumentType_systemId_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomDocumentType() {
    QDomDocumentType.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomDocumentType_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomDocumentType_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomDocumentType_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomDocumentType_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomDocumentType_QTypeInfo_isDummy();
