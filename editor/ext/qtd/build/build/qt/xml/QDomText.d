module qt.xml.QDomText;

public import qt.xml.QDomText_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomCharacterData;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomText : QDomCharacterData
{

// Functions

    public this() {
        void* ret = qtd_QDomText_QDomText();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomText) x) {
        void* ret = qtd_QDomText_QDomText_QDomText(x is null ? null : (cast(QDomText)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDomText splitText(int offset) {
        void* ret = qtd_QDomText_splitText_int(qtdNativeId, offset);
        QDomText __d_return_value = new QDomText(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isQtType_QDomText;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomText_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomText_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomText_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomText_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomText_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomText_QTypeInfo_isComplex();
        isStatic = qtd_QDomText_QTypeInfo_isStatic();
        isLarge = qtd_QDomText_QTypeInfo_isLarge();
        isPointer = qtd_QDomText_QTypeInfo_isPointer();
        isDummy = qtd_QDomText_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomText_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomText_native_copy(const void* orig);
extern (C) void qtd_QDomText_delete(void *ptr);
extern (C) void qtd_QDomText_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomText_QDomText();
private extern(C) void* qtd_QDomText_QDomText_QDomText(void* x0);
private extern(C) void*  qtd_QDomText_splitText_int(void* __this_nativeId,
 int offset0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomText() {
    QDomText.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomText_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomText_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomText_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomText_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomText_QTypeInfo_isDummy();
