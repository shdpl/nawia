module qt.xml.QDomCDATASection;

public import qt.xml.QDomCDATASection_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomText;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomCDATASection : QDomText
{

// Functions

    public this() {
        void* ret = qtd_QDomCDATASection_QDomCDATASection();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomCDATASection) x) {
        void* ret = qtd_QDomCDATASection_QDomCDATASection_QDomCDATASection(x is null ? null : (cast(QDomCDATASection)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    public alias void __isQtType_QDomCDATASection;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomCDATASection_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomCDATASection_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomCDATASection_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomCDATASection_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomCDATASection_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomCDATASection_QTypeInfo_isComplex();
        isStatic = qtd_QDomCDATASection_QTypeInfo_isStatic();
        isLarge = qtd_QDomCDATASection_QTypeInfo_isLarge();
        isPointer = qtd_QDomCDATASection_QTypeInfo_isPointer();
        isDummy = qtd_QDomCDATASection_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomCDATASection_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomCDATASection_native_copy(const void* orig);
extern (C) void qtd_QDomCDATASection_delete(void *ptr);
extern (C) void qtd_QDomCDATASection_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomCDATASection_QDomCDATASection();
private extern(C) void* qtd_QDomCDATASection_QDomCDATASection_QDomCDATASection(void* x0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomCDATASection() {
    QDomCDATASection.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomCDATASection_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomCDATASection_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomCDATASection_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomCDATASection_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomCDATASection_QTypeInfo_isDummy();
