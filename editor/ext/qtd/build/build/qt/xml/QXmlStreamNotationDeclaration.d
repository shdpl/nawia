module qt.xml.QXmlStreamNotationDeclaration;

public import qt.xml.QXmlStreamNotationDeclaration_aux;
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


public class QXmlStreamNotationDeclaration : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QXmlStreamNotationDeclaration) arg__1) {
        void* ret = qtd_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration(arg__1 is null ? null : (cast(QXmlStreamNotationDeclaration)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string name() const {
        string res;
        qtd_QXmlStreamNotationDeclaration_name_const(qtdNativeId, &res);
        return res;
    }

    private final bool operator_equal(const(QXmlStreamNotationDeclaration) other) const {
        return qtd_QXmlStreamNotationDeclaration_operator_equal_QXmlStreamNotationDeclaration_const(qtdNativeId, other is null ? null : (cast(QXmlStreamNotationDeclaration)other).qtdNativeId);
    }

    public final string publicId() const {
        string res;
        qtd_QXmlStreamNotationDeclaration_publicId_const(qtdNativeId, &res);
        return res;
    }

    public final string systemId() const {
        string res;
        qtd_QXmlStreamNotationDeclaration_systemId_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlStreamNotationDeclaration;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QXmlStreamNotationDeclaration_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QXmlStreamNotationDeclaration_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamNotationDeclaration_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamNotationDeclaration_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamNotationDeclaration_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlStreamNotationDeclaration_QTypeInfo_isComplex();
        isStatic = qtd_QXmlStreamNotationDeclaration_QTypeInfo_isStatic();
        isLarge = qtd_QXmlStreamNotationDeclaration_QTypeInfo_isLarge();
        isPointer = qtd_QXmlStreamNotationDeclaration_QTypeInfo_isPointer();
        isDummy = qtd_QXmlStreamNotationDeclaration_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QXmlStreamNotationDeclaration_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QXmlStreamNotationDeclaration_native_copy(const void* orig);
extern (C) void qtd_QXmlStreamNotationDeclaration_delete(void *ptr);
extern (C) void qtd_QXmlStreamNotationDeclaration_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration();
private extern(C) void* qtd_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration_QXmlStreamNotationDeclaration(void* arg__1);
private extern(C) void  qtd_QXmlStreamNotationDeclaration_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QXmlStreamNotationDeclaration_operator_equal_QXmlStreamNotationDeclaration_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QXmlStreamNotationDeclaration_publicId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamNotationDeclaration_systemId_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QXmlStreamNotationDeclaration() {
    QXmlStreamNotationDeclaration.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlStreamNotationDeclaration_QTypeInfo_isDummy();
