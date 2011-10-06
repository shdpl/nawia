module qt.xml.QXmlStreamEntityDeclaration;

public import qt.xml.QXmlStreamEntityDeclaration_aux;
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


public class QXmlStreamEntityDeclaration : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QXmlStreamEntityDeclaration) arg__1) {
        void* ret = qtd_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration(arg__1 is null ? null : (cast(QXmlStreamEntityDeclaration)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string name() const {
        string res;
        qtd_QXmlStreamEntityDeclaration_name_const(qtdNativeId, &res);
        return res;
    }

    public final string notationName() const {
        string res;
        qtd_QXmlStreamEntityDeclaration_notationName_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QXmlStreamEntityDeclaration) other) const {
        return qtd_QXmlStreamEntityDeclaration_operator_equal_QXmlStreamEntityDeclaration_const(qtdNativeId, other is null ? null : (cast(QXmlStreamEntityDeclaration)other).qtdNativeId);
    }

    public final string publicId() const {
        string res;
        qtd_QXmlStreamEntityDeclaration_publicId_const(qtdNativeId, &res);
        return res;
    }

    public final string systemId() const {
        string res;
        qtd_QXmlStreamEntityDeclaration_systemId_const(qtdNativeId, &res);
        return res;
    }

    public final string value() const {
        string res;
        qtd_QXmlStreamEntityDeclaration_value_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlStreamEntityDeclaration;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QXmlStreamEntityDeclaration_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QXmlStreamEntityDeclaration_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamEntityDeclaration_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamEntityDeclaration_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamEntityDeclaration_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlStreamEntityDeclaration_QTypeInfo_isComplex();
        isStatic = qtd_QXmlStreamEntityDeclaration_QTypeInfo_isStatic();
        isLarge = qtd_QXmlStreamEntityDeclaration_QTypeInfo_isLarge();
        isPointer = qtd_QXmlStreamEntityDeclaration_QTypeInfo_isPointer();
        isDummy = qtd_QXmlStreamEntityDeclaration_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QXmlStreamEntityDeclaration_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QXmlStreamEntityDeclaration_native_copy(const void* orig);
extern (C) void qtd_QXmlStreamEntityDeclaration_delete(void *ptr);
extern (C) void qtd_QXmlStreamEntityDeclaration_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration();
private extern(C) void* qtd_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration_QXmlStreamEntityDeclaration(void* arg__1);
private extern(C) void  qtd_QXmlStreamEntityDeclaration_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamEntityDeclaration_notationName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlStreamEntityDeclaration_operator_equal_QXmlStreamEntityDeclaration_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QXmlStreamEntityDeclaration_publicId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamEntityDeclaration_systemId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamEntityDeclaration_value_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QXmlStreamEntityDeclaration() {
    QXmlStreamEntityDeclaration.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlStreamEntityDeclaration_QTypeInfo_isDummy();
