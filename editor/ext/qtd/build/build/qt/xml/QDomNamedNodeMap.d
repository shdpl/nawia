module qt.xml.QDomNamedNodeMap;

public import qt.xml.QDomNamedNodeMap_aux;
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


public class QDomNamedNodeMap : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QDomNamedNodeMap_QDomNamedNodeMap();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomNamedNodeMap) arg__1) {
        void* ret = qtd_QDomNamedNodeMap_QDomNamedNodeMap_QDomNamedNodeMap(arg__1 is null ? null : (cast(QDomNamedNodeMap)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool contains(string name) const {
        return qtd_QDomNamedNodeMap_contains_string_const(qtdNativeId, name);
    }

    public final int count() const {
        return qtd_QDomNamedNodeMap_count_const(qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QDomNamedNodeMap_isEmpty_const(qtdNativeId);
    }

    public final QDomNode item(int index) const {
        void* ret = qtd_QDomNamedNodeMap_item_int_const(qtdNativeId, index);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final uint length() const {
        return qtd_QDomNamedNodeMap_length_const(qtdNativeId);
    }

    public final QDomNode namedItem(string name) const {
        void* ret = qtd_QDomNamedNodeMap_namedItem_string_const(qtdNativeId, name);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomNode namedItemNS(string nsURI, string localName) const {
        void* ret = qtd_QDomNamedNodeMap_namedItemNS_string_string_const(qtdNativeId, nsURI, localName);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    private final bool operator_equal(const(QDomNamedNodeMap) arg__1) const {
        return qtd_QDomNamedNodeMap_operator_equal_QDomNamedNodeMap_const(qtdNativeId, arg__1 is null ? null : (cast(QDomNamedNodeMap)arg__1).qtdNativeId);
    }

    public final QDomNode removeNamedItem(string name) {
        void* ret = qtd_QDomNamedNodeMap_removeNamedItem_string(qtdNativeId, name);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomNode removeNamedItemNS(string nsURI, string localName) {
        void* ret = qtd_QDomNamedNodeMap_removeNamedItemNS_string_string(qtdNativeId, nsURI, localName);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomNode setNamedItem(const(QDomNode) newNode) {
        void* ret = qtd_QDomNamedNodeMap_setNamedItem_QDomNode(qtdNativeId, newNode is null ? null : (cast(QDomNode)newNode).qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final QDomNode setNamedItemNS(const(QDomNode) newNode) {
        void* ret = qtd_QDomNamedNodeMap_setNamedItemNS_QDomNode(qtdNativeId, newNode is null ? null : (cast(QDomNode)newNode).qtdNativeId);
        QDomNode __d_return_value = new QDomNode(ret);
        return __d_return_value;
    }

    public final int size() const {
        return qtd_QDomNamedNodeMap_size_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QDomNamedNodeMap;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomNamedNodeMap_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomNamedNodeMap_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomNamedNodeMap_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomNamedNodeMap_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomNamedNodeMap_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomNamedNodeMap_QTypeInfo_isComplex();
        isStatic = qtd_QDomNamedNodeMap_QTypeInfo_isStatic();
        isLarge = qtd_QDomNamedNodeMap_QTypeInfo_isLarge();
        isPointer = qtd_QDomNamedNodeMap_QTypeInfo_isPointer();
        isDummy = qtd_QDomNamedNodeMap_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomNamedNodeMap_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomNamedNodeMap_native_copy(const void* orig);
extern (C) void qtd_QDomNamedNodeMap_delete(void *ptr);
extern (C) void qtd_QDomNamedNodeMap_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomNamedNodeMap_QDomNamedNodeMap();
private extern(C) void* qtd_QDomNamedNodeMap_QDomNamedNodeMap_QDomNamedNodeMap(void* arg__1);
private extern(C) bool  qtd_QDomNamedNodeMap_contains_string_const(void* __this_nativeId,
 string name0);
private extern(C) int  qtd_QDomNamedNodeMap_count_const(void* __this_nativeId);
private extern(C) bool  qtd_QDomNamedNodeMap_isEmpty_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNamedNodeMap_item_int_const(void* __this_nativeId,
 int index0);
private extern(C) uint  qtd_QDomNamedNodeMap_length_const(void* __this_nativeId);
private extern(C) void*  qtd_QDomNamedNodeMap_namedItem_string_const(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QDomNamedNodeMap_namedItemNS_string_string_const(void* __this_nativeId,
 string nsURI0,
 string localName1);
private extern(C) bool  qtd_QDomNamedNodeMap_operator_equal_QDomNamedNodeMap_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QDomNamedNodeMap_removeNamedItem_string(void* __this_nativeId,
 string name0);
private extern(C) void*  qtd_QDomNamedNodeMap_removeNamedItemNS_string_string(void* __this_nativeId,
 string nsURI0,
 string localName1);
private extern(C) void*  qtd_QDomNamedNodeMap_setNamedItem_QDomNode(void* __this_nativeId,
 void* newNode0);
private extern(C) void*  qtd_QDomNamedNodeMap_setNamedItemNS_QDomNode(void* __this_nativeId,
 void* newNode0);
private extern(C) int  qtd_QDomNamedNodeMap_size_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomNamedNodeMap() {
    QDomNamedNodeMap.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomNamedNodeMap_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomNamedNodeMap_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomNamedNodeMap_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomNamedNodeMap_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomNamedNodeMap_QTypeInfo_isDummy();
