module qt.xml.QDomAttr;

public import qt.xml.QDomAttr_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomNode;
public import qt.xml.QDomElement;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomAttr : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomAttr_QDomAttr();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomAttr) x) {
        void* ret = qtd_QDomAttr_QDomAttr_QDomAttr(x is null ? null : (cast(QDomAttr)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string name() const {
        string res;
        qtd_QDomAttr_name_const(qtdNativeId, &res);
        return res;
    }

    public final QDomElement ownerElement() const {
        void* ret = qtd_QDomAttr_ownerElement_const(qtdNativeId);
        QDomElement __d_return_value = new QDomElement(ret);
        return __d_return_value;
    }

    public final void setValue(string arg__1) {
        qtd_QDomAttr_setValue_string(qtdNativeId, arg__1);
    }

    public final bool specified() const {
        return qtd_QDomAttr_specified_const(qtdNativeId);
    }

    public final string value() const {
        string res;
        qtd_QDomAttr_value_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomAttr;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomAttr_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomAttr_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomAttr_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomAttr_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomAttr_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomAttr_QTypeInfo_isComplex();
        isStatic = qtd_QDomAttr_QTypeInfo_isStatic();
        isLarge = qtd_QDomAttr_QTypeInfo_isLarge();
        isPointer = qtd_QDomAttr_QTypeInfo_isPointer();
        isDummy = qtd_QDomAttr_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomAttr_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomAttr_native_copy(const void* orig);
extern (C) void qtd_QDomAttr_delete(void *ptr);
extern (C) void qtd_QDomAttr_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomAttr_QDomAttr();
private extern(C) void* qtd_QDomAttr_QDomAttr_QDomAttr(void* x0);
private extern(C) void  qtd_QDomAttr_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QDomAttr_ownerElement_const(void* __this_nativeId);
private extern(C) void  qtd_QDomAttr_setValue_string(void* __this_nativeId,
 string arg__1);
private extern(C) bool  qtd_QDomAttr_specified_const(void* __this_nativeId);
private extern(C) void  qtd_QDomAttr_value_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomAttr() {
    QDomAttr.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomAttr_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomAttr_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomAttr_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomAttr_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomAttr_QTypeInfo_isDummy();
