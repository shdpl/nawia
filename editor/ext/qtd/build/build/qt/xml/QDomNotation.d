module qt.xml.QDomNotation;

public import qt.xml.QDomNotation_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomNode;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomNotation : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomNotation_QDomNotation();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomNotation) x) {
        void* ret = qtd_QDomNotation_QDomNotation_QDomNotation(x is null ? null : (cast(QDomNotation)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string publicId() const {
        string res;
        qtd_QDomNotation_publicId_const(qtdNativeId, &res);
        return res;
    }

    public final string systemId() const {
        string res;
        qtd_QDomNotation_systemId_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomNotation;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomNotation_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomNotation_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomNotation_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomNotation_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomNotation_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomNotation_QTypeInfo_isComplex();
        isStatic = qtd_QDomNotation_QTypeInfo_isStatic();
        isLarge = qtd_QDomNotation_QTypeInfo_isLarge();
        isPointer = qtd_QDomNotation_QTypeInfo_isPointer();
        isDummy = qtd_QDomNotation_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomNotation_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomNotation_native_copy(const void* orig);
extern (C) void qtd_QDomNotation_delete(void *ptr);
extern (C) void qtd_QDomNotation_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomNotation_QDomNotation();
private extern(C) void* qtd_QDomNotation_QDomNotation_QDomNotation(void* x0);
private extern(C) void  qtd_QDomNotation_publicId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomNotation_systemId_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomNotation() {
    QDomNotation.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomNotation_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomNotation_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomNotation_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomNotation_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomNotation_QTypeInfo_isDummy();
