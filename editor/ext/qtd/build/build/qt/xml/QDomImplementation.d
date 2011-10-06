module qt.xml.QDomImplementation;

public import qt.xml.QDomImplementation_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomDocumentType;
public import qt.xml.QDomDocument;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomImplementation : QtdObject
{
    public enum InvalidDataPolicy {
        AcceptInvalidChars = 0,
        DropInvalidChars = 1,
        ReturnNullNode = 2
    }

    alias InvalidDataPolicy.AcceptInvalidChars AcceptInvalidChars;
    alias InvalidDataPolicy.DropInvalidChars DropInvalidChars;
    alias InvalidDataPolicy.ReturnNullNode ReturnNullNode;


// Functions

    public this() {
        void* ret = qtd_QDomImplementation_QDomImplementation();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomImplementation) arg__1) {
        void* ret = qtd_QDomImplementation_QDomImplementation_QDomImplementation(arg__1 is null ? null : (cast(QDomImplementation)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDomDocument createDocument(string nsURI, string qName, const(QDomDocumentType) doctype) {
        void* ret = qtd_QDomImplementation_createDocument_string_string_QDomDocumentType(qtdNativeId, nsURI, qName, doctype is null ? null : (cast(QDomDocumentType)doctype).qtdNativeId);
        QDomDocument __d_return_value = new QDomDocument(ret);
        return __d_return_value;
    }

    public final QDomDocumentType createDocumentType(string qName, string publicId, string systemId) {
        void* ret = qtd_QDomImplementation_createDocumentType_string_string_string(qtdNativeId, qName, publicId, systemId);
        QDomDocumentType __d_return_value = new QDomDocumentType(ret);
        return __d_return_value;
    }

    public final bool hasFeature(string feature, string version_) const {
        return qtd_QDomImplementation_hasFeature_string_string_const(qtdNativeId, feature, version_);
    }

    public final bool isNull() {
        return qtd_QDomImplementation_isNull(qtdNativeId);
    }

    private final bool operator_equal(const(QDomImplementation) arg__1) const {
        return qtd_QDomImplementation_operator_equal_QDomImplementation_const(qtdNativeId, arg__1 is null ? null : (cast(QDomImplementation)arg__1).qtdNativeId);
    }

    public static QDomImplementation.InvalidDataPolicy invalidDataPolicy() {
        return cast(QDomImplementation.InvalidDataPolicy) qtd_QDomImplementation_invalidDataPolicy();
    }

    public static void setInvalidDataPolicy(QDomImplementation.InvalidDataPolicy policy) {
        qtd_QDomImplementation_setInvalidDataPolicy_InvalidDataPolicy(policy);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QDomImplementation;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomImplementation_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomImplementation_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomImplementation_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomImplementation_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomImplementation_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomImplementation_QTypeInfo_isComplex();
        isStatic = qtd_QDomImplementation_QTypeInfo_isStatic();
        isLarge = qtd_QDomImplementation_QTypeInfo_isLarge();
        isPointer = qtd_QDomImplementation_QTypeInfo_isPointer();
        isDummy = qtd_QDomImplementation_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomImplementation_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomImplementation_native_copy(const void* orig);
extern (C) void qtd_QDomImplementation_delete(void *ptr);
extern (C) void qtd_QDomImplementation_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomImplementation_QDomImplementation();
private extern(C) void* qtd_QDomImplementation_QDomImplementation_QDomImplementation(void* arg__1);
private extern(C) void*  qtd_QDomImplementation_createDocument_string_string_QDomDocumentType(void* __this_nativeId,
 string nsURI0,
 string qName1,
 void* doctype2);
private extern(C) void*  qtd_QDomImplementation_createDocumentType_string_string_string(void* __this_nativeId,
 string qName0,
 string publicId1,
 string systemId2);
private extern(C) bool  qtd_QDomImplementation_hasFeature_string_string_const(void* __this_nativeId,
 string feature0,
 string version1);
private extern(C) bool  qtd_QDomImplementation_isNull(void* __this_nativeId);
private extern(C) bool  qtd_QDomImplementation_operator_equal_QDomImplementation_const(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QDomImplementation_invalidDataPolicy();
private extern(C) void  qtd_QDomImplementation_setInvalidDataPolicy_InvalidDataPolicy(int policy0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomImplementation() {
    QDomImplementation.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomImplementation_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomImplementation_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomImplementation_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomImplementation_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomImplementation_QTypeInfo_isDummy();
