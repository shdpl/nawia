module qt.xml.QDomDocumentFragment;

public import qt.xml.QDomDocumentFragment_aux;
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


public class QDomDocumentFragment : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomDocumentFragment_QDomDocumentFragment();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomDocumentFragment) x) {
        void* ret = qtd_QDomDocumentFragment_QDomDocumentFragment_QDomDocumentFragment(x is null ? null : (cast(QDomDocumentFragment)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    public alias void __isQtType_QDomDocumentFragment;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomDocumentFragment_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomDocumentFragment_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomDocumentFragment_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomDocumentFragment_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomDocumentFragment_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomDocumentFragment_QTypeInfo_isComplex();
        isStatic = qtd_QDomDocumentFragment_QTypeInfo_isStatic();
        isLarge = qtd_QDomDocumentFragment_QTypeInfo_isLarge();
        isPointer = qtd_QDomDocumentFragment_QTypeInfo_isPointer();
        isDummy = qtd_QDomDocumentFragment_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomDocumentFragment_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomDocumentFragment_native_copy(const void* orig);
extern (C) void qtd_QDomDocumentFragment_delete(void *ptr);
extern (C) void qtd_QDomDocumentFragment_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomDocumentFragment_QDomDocumentFragment();
private extern(C) void* qtd_QDomDocumentFragment_QDomDocumentFragment_QDomDocumentFragment(void* x0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomDocumentFragment() {
    QDomDocumentFragment.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomDocumentFragment_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomDocumentFragment_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomDocumentFragment_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomDocumentFragment_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomDocumentFragment_QTypeInfo_isDummy();
