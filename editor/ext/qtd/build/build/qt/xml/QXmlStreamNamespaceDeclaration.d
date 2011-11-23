module qt.xml.QXmlStreamNamespaceDeclaration;

public import qt.xml.QXmlStreamNamespaceDeclaration_aux;
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


public class QXmlStreamNamespaceDeclaration : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string prefix, string namespaceUri) {
        void* ret = qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration_string_string(prefix, namespaceUri);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QXmlStreamNamespaceDeclaration) arg__1) {
        void* ret = qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration(arg__1 is null ? null : (cast(QXmlStreamNamespaceDeclaration)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string namespaceUri() const {
        string res;
        qtd_QXmlStreamNamespaceDeclaration_namespaceUri_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QXmlStreamNamespaceDeclaration) other) const {
        return qtd_QXmlStreamNamespaceDeclaration_operator_equal_QXmlStreamNamespaceDeclaration_const(qtdNativeId, other is null ? null : (cast(QXmlStreamNamespaceDeclaration)other).qtdNativeId);
    }

    public final string prefix() const {
        string res;
        qtd_QXmlStreamNamespaceDeclaration_prefix_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlStreamNamespaceDeclaration;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QXmlStreamNamespaceDeclaration_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QXmlStreamNamespaceDeclaration_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamNamespaceDeclaration_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamNamespaceDeclaration_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamNamespaceDeclaration_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isComplex();
        isStatic = qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isStatic();
        isLarge = qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isLarge();
        isPointer = qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isPointer();
        isDummy = qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QXmlStreamNamespaceDeclaration_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QXmlStreamNamespaceDeclaration_native_copy(const void* orig);
extern (C) void qtd_QXmlStreamNamespaceDeclaration_delete(void *ptr);
extern (C) void qtd_QXmlStreamNamespaceDeclaration_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration();
private extern(C) void* qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration_string_string(string prefix0,
 string namespaceUri1);
private extern(C) void* qtd_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration(void* arg__1);
private extern(C) void  qtd_QXmlStreamNamespaceDeclaration_namespaceUri_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlStreamNamespaceDeclaration_operator_equal_QXmlStreamNamespaceDeclaration_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QXmlStreamNamespaceDeclaration_prefix_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QXmlStreamNamespaceDeclaration() {
    QXmlStreamNamespaceDeclaration.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlStreamNamespaceDeclaration_QTypeInfo_isDummy();
