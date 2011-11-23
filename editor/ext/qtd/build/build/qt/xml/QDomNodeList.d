module qt.xml.QDomNodeList;

public import qt.xml.QDomNodeList_aux;
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


public class QDomNodeList : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QDomNodeList_QDomNodeList();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomNodeList) arg__1) {
        void* ret = qtd_QDomNodeList_QDomNodeList_QDomNodeList(arg__1 is null ? null : (cast(QDomNodeList)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QDomNode at(int index) const {
        void* ret = qtd_QDomNodeList_at_int_const(qtdNativeId, index);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final int count() const {
        return qtd_QDomNodeList_count_const(qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QDomNodeList_isEmpty_const(qtdNativeId);
    }

    public final QDomNode item(int index) const {
        void* ret = qtd_QDomNodeList_item_int_const(qtdNativeId, index);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final uint length() const {
        return qtd_QDomNodeList_length_const(qtdNativeId);
    }

    private final bool operator_equal(const(QDomNodeList) arg__1) const {
        return qtd_QDomNodeList_operator_equal_QDomNodeList_const(qtdNativeId, arg__1 is null ? null : (cast(QDomNodeList)arg__1).qtdNativeId);
    }

    public final int size() const {
        return qtd_QDomNodeList_size_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QDomNodeList;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomNodeList_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomNodeList_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomNodeList_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomNodeList_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomNodeList_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomNodeList_QTypeInfo_isComplex();
        isStatic = qtd_QDomNodeList_QTypeInfo_isStatic();
        isLarge = qtd_QDomNodeList_QTypeInfo_isLarge();
        isPointer = qtd_QDomNodeList_QTypeInfo_isPointer();
        isDummy = qtd_QDomNodeList_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomNodeList_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomNodeList_native_copy(const void* orig);
extern (C) void qtd_QDomNodeList_delete(void *ptr);
extern (C) void qtd_QDomNodeList_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomNodeList_QDomNodeList();
private extern(C) void* qtd_QDomNodeList_QDomNodeList_QDomNodeList(void* arg__1);
private extern(C) void*  qtd_QDomNodeList_at_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QDomNodeList_count_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNodeList_isEmpty_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNodeList_item_int_const(void* __this_nativeId,
 int index0);
private extern(C) uint  qtd_QDomNodeList_length_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNodeList_operator_equal_QDomNodeList_const(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QDomNodeList_size_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomNodeList() {
    QDomNodeList.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomNodeList_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomNodeList_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomNodeList_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomNodeList_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomNodeList_QTypeInfo_isDummy();
