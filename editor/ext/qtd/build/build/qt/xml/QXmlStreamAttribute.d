module qt.xml.QXmlStreamAttribute;

public import qt.xml.QXmlStreamAttribute_aux;
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


public class QXmlStreamAttribute : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlStreamAttribute_QXmlStreamAttribute();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string namespaceUri, string name, string value) {
        void* ret = qtd_QXmlStreamAttribute_QXmlStreamAttribute_string_string_string(namespaceUri, name, value);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string qualifiedName, string value) {
        void* ret = qtd_QXmlStreamAttribute_QXmlStreamAttribute_string_string(qualifiedName, value);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QXmlStreamAttribute) arg__1) {
        void* ret = qtd_QXmlStreamAttribute_QXmlStreamAttribute_QXmlStreamAttribute(arg__1 is null ? null : (cast(QXmlStreamAttribute)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isDefault() const {
        return qtd_QXmlStreamAttribute_isDefault_const(qtdNativeId);
    }

    public final string name() const {
        string res;
        qtd_QXmlStreamAttribute_name_const(qtdNativeId, &res);
        return res;
    }

    public final string namespaceUri() const {
        string res;
        qtd_QXmlStreamAttribute_namespaceUri_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QXmlStreamAttribute) other) const {
        return qtd_QXmlStreamAttribute_operator_equal_QXmlStreamAttribute_const(qtdNativeId, other is null ? null : (cast(QXmlStreamAttribute)other).qtdNativeId);
    }

    public final string prefix() const {
        string res;
        qtd_QXmlStreamAttribute_prefix_const(qtdNativeId, &res);
        return res;
    }

    public final string qualifiedName() const {
        string res;
        qtd_QXmlStreamAttribute_qualifiedName_const(qtdNativeId, &res);
        return res;
    }

    public final string value() const {
        string res;
        qtd_QXmlStreamAttribute_value_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlStreamAttribute;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QXmlStreamAttribute_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QXmlStreamAttribute_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamAttribute_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamAttribute_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamAttribute_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlStreamAttribute_QTypeInfo_isComplex();
        isStatic = qtd_QXmlStreamAttribute_QTypeInfo_isStatic();
        isLarge = qtd_QXmlStreamAttribute_QTypeInfo_isLarge();
        isPointer = qtd_QXmlStreamAttribute_QTypeInfo_isPointer();
        isDummy = qtd_QXmlStreamAttribute_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QXmlStreamAttribute_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QXmlStreamAttribute_native_copy(const void* orig);
extern (C) void qtd_QXmlStreamAttribute_delete(void *ptr);
extern (C) void qtd_QXmlStreamAttribute_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamAttribute_QXmlStreamAttribute();
private extern(C) void* qtd_QXmlStreamAttribute_QXmlStreamAttribute_string_string_string(string namespaceUri0,
 string name1,
 string value2);
private extern(C) void* qtd_QXmlStreamAttribute_QXmlStreamAttribute_string_string(string qualifiedName0,
 string value1);
private extern(C) void* qtd_QXmlStreamAttribute_QXmlStreamAttribute_QXmlStreamAttribute(void* arg__1);
private extern(C) bool  qtd_QXmlStreamAttribute_isDefault_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamAttribute_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamAttribute_namespaceUri_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlStreamAttribute_operator_equal_QXmlStreamAttribute_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QXmlStreamAttribute_prefix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamAttribute_qualifiedName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamAttribute_value_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QXmlStreamAttribute() {
    QXmlStreamAttribute.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QXmlStreamAttribute_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlStreamAttribute_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlStreamAttribute_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlStreamAttribute_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlStreamAttribute_QTypeInfo_isDummy();
