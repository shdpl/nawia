module qt.xml.QXmlStreamAttributes;

public import qt.xml.QXmlStreamAttributes_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.xml.QXmlStreamAttribute;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QXmlStreamAttributes : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QXmlStreamAttributes_QXmlStreamAttributes();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void append(string namespaceUri, string name, string value) {
        qtd_QXmlStreamAttributes_append_string_string_string(qtdNativeId, namespaceUri, name, value);
    }

    public final void append(string qualifiedName, string value) {
        qtd_QXmlStreamAttributes_append_string_string(qtdNativeId, qualifiedName, value);
    }

    public final void append(const(QXmlStreamAttribute) attribute) {
        qtd_QXmlStreamAttributes_append_QXmlStreamAttribute(qtdNativeId, attribute is null ? null : (cast(QXmlStreamAttribute)attribute).qtdNativeId);
    }

    public final const(QXmlStreamAttribute) at(int i) const {
        void* ret = qtd_QXmlStreamAttributes_at_int_const(qtdNativeId, i);
        const(QXmlStreamAttribute) __d_return_value = new QXmlStreamAttribute(ret);
        return __d_return_value;
    }

    public final int capacity() const {
        return qtd_QXmlStreamAttributes_capacity_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QXmlStreamAttributes_clear(qtdNativeId);
    }

    public final bool contains(const(QXmlStreamAttribute) t) const {
        return qtd_QXmlStreamAttributes_contains_QXmlStreamAttribute_const(qtdNativeId, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId);
    }

    public final int count() const {
        return qtd_QXmlStreamAttributes_count_const(qtdNativeId);
    }

    public final int count(const(QXmlStreamAttribute) t) const {
        return qtd_QXmlStreamAttributes_count_QXmlStreamAttribute_const(qtdNativeId, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId);
    }

    public final bool empty() const {
        return qtd_QXmlStreamAttributes_empty_const(qtdNativeId);
    }

    public final bool endsWith(const(QXmlStreamAttribute) t) const {
        return qtd_QXmlStreamAttributes_endsWith_QXmlStreamAttribute_const(qtdNativeId, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId);
    }

    public final QXmlStreamAttribute[] fill(const(QXmlStreamAttribute) t, int size = -1) {
        QXmlStreamAttribute[] res;
        qtd_QXmlStreamAttributes_fill_QXmlStreamAttribute_int(qtdNativeId, &res, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId, size);
        return res;
    }

    public final const(QXmlStreamAttribute) first() const {
        void* ret = qtd_QXmlStreamAttributes_first_const(qtdNativeId);
        const(QXmlStreamAttribute) __d_return_value = new QXmlStreamAttribute(ret);
        return __d_return_value;
    }

    public final bool hasAttribute(string namespaceUri, string name) const {
        return qtd_QXmlStreamAttributes_hasAttribute_string_string_const(qtdNativeId, namespaceUri, name);
    }

    public final bool hasAttribute(string qualifiedName) const {
        return qtd_QXmlStreamAttributes_hasAttribute_string_const(qtdNativeId, qualifiedName);
    }

    public final int indexOf(const(QXmlStreamAttribute) t, int from = 0) const {
        return qtd_QXmlStreamAttributes_indexOf_QXmlStreamAttribute_int_const(qtdNativeId, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId, from);
    }

    public final bool isEmpty() const {
        return qtd_QXmlStreamAttributes_isEmpty_const(qtdNativeId);
    }

    public final bool isSharedWith(QXmlStreamAttribute[] other) const {
        return qtd_QXmlStreamAttributes_isSharedWith_QVector_const(qtdNativeId, &other);
    }

    public final const(QXmlStreamAttribute) last() const {
        void* ret = qtd_QXmlStreamAttributes_last_const(qtdNativeId);
        const(QXmlStreamAttribute) __d_return_value = new QXmlStreamAttribute(ret);
        return __d_return_value;
    }

    public final int lastIndexOf(const(QXmlStreamAttribute) t, int from = -1) const {
        return qtd_QXmlStreamAttributes_lastIndexOf_QXmlStreamAttribute_int_const(qtdNativeId, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId, from);
    }

    public final QXmlStreamAttribute[] mid(int pos, int length = -1) const {
        QXmlStreamAttribute[] res;
        qtd_QXmlStreamAttributes_mid_int_int_const(qtdNativeId, &res, pos, length);
        return res;
    }

    private final bool operator_equal(QXmlStreamAttribute[] v) const {
        return qtd_QXmlStreamAttributes_operator_equal_QVector_const(qtdNativeId, &v);
    }

    public final void prepend(const(QXmlStreamAttribute) t) {
        qtd_QXmlStreamAttributes_prepend_QXmlStreamAttribute(qtdNativeId, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId);
    }

    public final void remove(int i) {
        qtd_QXmlStreamAttributes_remove_int(qtdNativeId, i);
    }

    public final void remove(int i, int n) {
        qtd_QXmlStreamAttributes_remove_int_int(qtdNativeId, i, n);
    }

    public final void replace(int i, const(QXmlStreamAttribute) t) {
        qtd_QXmlStreamAttributes_replace_int_QXmlStreamAttribute(qtdNativeId, i, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId);
    }

    public final void reserve(int size) {
        qtd_QXmlStreamAttributes_reserve_int(qtdNativeId, size);
    }

    public final void resize(int size) {
        qtd_QXmlStreamAttributes_resize_int(qtdNativeId, size);
    }

    public final void setSharable(bool sharable) {
        qtd_QXmlStreamAttributes_setSharable_bool(qtdNativeId, sharable);
    }

    public final int size() const {
        return qtd_QXmlStreamAttributes_size_const(qtdNativeId);
    }

    public final void squeeze() {
        qtd_QXmlStreamAttributes_squeeze(qtdNativeId);
    }

    public final bool startsWith(const(QXmlStreamAttribute) t) const {
        return qtd_QXmlStreamAttributes_startsWith_QXmlStreamAttribute_const(qtdNativeId, t is null ? null : (cast(QXmlStreamAttribute)t).qtdNativeId);
    }

    public final QList!(QXmlStreamAttribute) toList() const {
        auto res = QList!(QXmlStreamAttribute).opCall();
        qtd_QXmlStreamAttributes_toList_const(qtdNativeId, &res);
        return res;
    }

    public final string value(string namespaceUri, string name) const {
        string res;
        qtd_QXmlStreamAttributes_value_string_string_const(qtdNativeId, &res, namespaceUri, name);
        return res;
    }

    public final string value(string qualifiedName) const {
        string res;
        qtd_QXmlStreamAttributes_value_string_const(qtdNativeId, &res, qualifiedName);
        return res;
    }

    public static QXmlStreamAttribute[] fromList(QList!(QXmlStreamAttribute) list) {
        QXmlStreamAttribute[] res;
        qtd_QXmlStreamAttributes_fromList_QList(&res, &list);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QXmlStreamAttributes;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QXmlStreamAttributes_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QXmlStreamAttributes_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QXmlStreamAttributes_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QXmlStreamAttributes_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QXmlStreamAttributes_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QXmlStreamAttributes_QTypeInfo_isComplex();
        isStatic = qtd_QXmlStreamAttributes_QTypeInfo_isStatic();
        isLarge = qtd_QXmlStreamAttributes_QTypeInfo_isLarge();
        isPointer = qtd_QXmlStreamAttributes_QTypeInfo_isPointer();
        isDummy = qtd_QXmlStreamAttributes_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QXmlStreamAttributes_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QXmlStreamAttributes_native_copy(const void* orig);
extern (C) void qtd_QXmlStreamAttributes_delete(void *ptr);
extern (C) void qtd_QXmlStreamAttributes_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QXmlStreamAttributes_QXmlStreamAttributes();
private extern(C) void  qtd_QXmlStreamAttributes_append_string_string_string(void* __this_nativeId,
 string namespaceUri0,
 string name1,
 string value2);
private extern(C) void  qtd_QXmlStreamAttributes_append_string_string(void* __this_nativeId,
 string qualifiedName0,
 string value1);
private extern(C) void  qtd_QXmlStreamAttributes_append_QXmlStreamAttribute(void* __this_nativeId,
 void* attribute0);
private extern(C) void*  qtd_QXmlStreamAttributes_at_int_const(void* __this_nativeId,
 int i0);
private extern(C) int  qtd_QXmlStreamAttributes_capacity_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamAttributes_clear(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamAttributes_contains_QXmlStreamAttribute_const(void* __this_nativeId,
 void* t0);
private extern(C) int  qtd_QXmlStreamAttributes_count_const(void* __this_nativeId);
private extern(C) int  qtd_QXmlStreamAttributes_count_QXmlStreamAttribute_const(void* __this_nativeId,
 void* t0);
private extern(C) bool  qtd_QXmlStreamAttributes_empty_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamAttributes_endsWith_QXmlStreamAttribute_const(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QXmlStreamAttributes_fill_QXmlStreamAttribute_int(void* __this_nativeId,
 void* __d_return_value,
 void* t0,
 int size1);
private extern(C) void*  qtd_QXmlStreamAttributes_first_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamAttributes_hasAttribute_string_string_const(void* __this_nativeId,
 string namespaceUri0,
 string name1);
private extern(C) bool  qtd_QXmlStreamAttributes_hasAttribute_string_const(void* __this_nativeId,
 string qualifiedName0);
private extern(C) int  qtd_QXmlStreamAttributes_indexOf_QXmlStreamAttribute_int_const(void* __this_nativeId,
 void* t0,
 int from1);
private extern(C) bool  qtd_QXmlStreamAttributes_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamAttributes_isSharedWith_QVector_const(void* __this_nativeId,
 DArray* other0);
private extern(C) void*  qtd_QXmlStreamAttributes_last_const(void* __this_nativeId);
private extern(C) int  qtd_QXmlStreamAttributes_lastIndexOf_QXmlStreamAttribute_int_const(void* __this_nativeId,
 void* t0,
 int from1);
private extern(C) void  qtd_QXmlStreamAttributes_mid_int_int_const(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1);
private extern(C) bool  qtd_QXmlStreamAttributes_operator_equal_QVector_const(void* __this_nativeId,
 DArray* v0);
private extern(C) void  qtd_QXmlStreamAttributes_prepend_QXmlStreamAttribute(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QXmlStreamAttributes_remove_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QXmlStreamAttributes_remove_int_int(void* __this_nativeId,
 int i0,
 int n1);
private extern(C) void  qtd_QXmlStreamAttributes_replace_int_QXmlStreamAttribute(void* __this_nativeId,
 int i0,
 void* t1);
private extern(C) void  qtd_QXmlStreamAttributes_reserve_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QXmlStreamAttributes_resize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QXmlStreamAttributes_setSharable_bool(void* __this_nativeId,
 bool sharable0);
private extern(C) int  qtd_QXmlStreamAttributes_size_const(void* __this_nativeId);
private extern(C) void  qtd_QXmlStreamAttributes_squeeze(void* __this_nativeId);
private extern(C) bool  qtd_QXmlStreamAttributes_startsWith_QXmlStreamAttribute_const(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QXmlStreamAttributes_toList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QXmlStreamAttributes_value_string_string_const(void* __this_nativeId,
 void* __d_return_value,
 string namespaceUri0,
 string name1);
private extern(C) void  qtd_QXmlStreamAttributes_value_string_const(void* __this_nativeId,
 void* __d_return_value,
 string qualifiedName0);
private extern(C) void  qtd_QXmlStreamAttributes_fromList_QList(void* __d_return_value,
 void* list0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QXmlStreamAttributes() {
    QXmlStreamAttributes.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QXmlStreamAttributes_QTypeInfo_isComplex();
private extern (C) bool qtd_QXmlStreamAttributes_QTypeInfo_isStatic();
private extern (C) bool qtd_QXmlStreamAttributes_QTypeInfo_isLarge();
private extern (C) bool qtd_QXmlStreamAttributes_QTypeInfo_isPointer();
private extern (C) bool qtd_QXmlStreamAttributes_QTypeInfo_isDummy();
