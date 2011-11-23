module qt.gui.QItemSelection;

public import qt.gui.QItemSelection_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.gui.QItemSelectionRange;
public import qt.core.QModelIndex;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QItemSelection : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QItemSelection_QItemSelection();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        void* ret = qtd_QItemSelection_QItemSelection_QModelIndex_QModelIndex(topLeft, bottomRight);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void append(const(QItemSelectionRange) t) {
        qtd_QItemSelection_append_QItemSelectionRange(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void append(QList!(QItemSelectionRange) t) {
        qtd_QItemSelection_append_QList(qtdNativeId, &t);
    }

    public final const(QItemSelectionRange) at(int i) const {
        void* ret = qtd_QItemSelection_at_int_const(qtdNativeId, i);
        const(QItemSelectionRange) __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final const(QItemSelectionRange) back() const {
        void* ret = qtd_QItemSelection_back_const(qtdNativeId);
        const(QItemSelectionRange) __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final void clear() {
        qtd_QItemSelection_clear(qtdNativeId);
    }

    public final bool contains(const(QModelIndex) index) const {
        return qtd_QItemSelection_contains_QModelIndex_const(qtdNativeId, index);
    }

    public final int count() const {
        return qtd_QItemSelection_count_const(qtdNativeId);
    }

    public final int count(const(QItemSelectionRange) t) const {
        return qtd_QItemSelection_count_QItemSelectionRange_const(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void detachShared() {
        qtd_QItemSelection_detachShared(qtdNativeId);
    }

    public final bool empty() const {
        return qtd_QItemSelection_empty_const(qtdNativeId);
    }

    public final bool endsWith(const(QItemSelectionRange) t) const {
        return qtd_QItemSelection_endsWith_QItemSelectionRange_const(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final const(QItemSelectionRange) first() const {
        void* ret = qtd_QItemSelection_first_const(qtdNativeId);
        const(QItemSelectionRange) __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final const(QItemSelectionRange) front() const {
        void* ret = qtd_QItemSelection_front_const(qtdNativeId);
        const(QItemSelectionRange) __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final int indexOf(const(QItemSelectionRange) t, int from = 0) const {
        return qtd_QItemSelection_indexOf_QItemSelectionRange_int_const(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId, from);
    }

    public final QList!(QModelIndex) indexes() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QItemSelection_indexes_const(qtdNativeId, &res);
        return res;
    }

    public final bool isEmpty() const {
        return qtd_QItemSelection_isEmpty_const(qtdNativeId);
    }

    public final bool isSharedWith(QList!(QItemSelectionRange) other) const {
        return qtd_QItemSelection_isSharedWith_QList_const(qtdNativeId, &other);
    }

    public final const(QItemSelectionRange) last() const {
        void* ret = qtd_QItemSelection_last_const(qtdNativeId);
        const(QItemSelectionRange) __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final int lastIndexOf(const(QItemSelectionRange) t, int from = -1) const {
        return qtd_QItemSelection_lastIndexOf_QItemSelectionRange_int_const(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId, from);
    }

    public final int length() const {
        return qtd_QItemSelection_length_const(qtdNativeId);
    }

    public final void merge(const(QItemSelection) other, int command) {
        qtd_QItemSelection_merge_QItemSelection_SelectionFlags(qtdNativeId, other is null ? null : (cast(QItemSelection)other).qtdNativeId, command);
    }

    public final QList!(QItemSelectionRange) mid(int pos, int length = -1) const {
        auto res = QList!(QItemSelectionRange).opCall();
        qtd_QItemSelection_mid_int_int_const(qtdNativeId, &res, pos, length);
        return res;
    }

    public final void move(int from, int to) {
        qtd_QItemSelection_move_int_int(qtdNativeId, from, to);
    }

    private final bool operator_equal(QList!(QItemSelectionRange) l) const {
        return qtd_QItemSelection_operator_equal_QList_const(qtdNativeId, &l);
    }

    public final void pop_back() {
        qtd_QItemSelection_pop_back(qtdNativeId);
    }

    public final void pop_front() {
        qtd_QItemSelection_pop_front(qtdNativeId);
    }

    public final void prepend(const(QItemSelectionRange) t) {
        qtd_QItemSelection_prepend_QItemSelectionRange(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void push_back(const(QItemSelectionRange) t) {
        qtd_QItemSelection_push_back_QItemSelectionRange(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void push_front(const(QItemSelectionRange) t) {
        qtd_QItemSelection_push_front_QItemSelectionRange(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final int removeAll(const(QItemSelectionRange) t) {
        return qtd_QItemSelection_removeAll_QItemSelectionRange(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void removeAt(int i) {
        qtd_QItemSelection_removeAt_int(qtdNativeId, i);
    }

    public final void removeFirst() {
        qtd_QItemSelection_removeFirst(qtdNativeId);
    }

    public final void removeLast() {
        qtd_QItemSelection_removeLast(qtdNativeId);
    }

    public final bool removeOne(const(QItemSelectionRange) t) {
        return qtd_QItemSelection_removeOne_QItemSelectionRange(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void replace(int i, const(QItemSelectionRange) t) {
        qtd_QItemSelection_replace_int_QItemSelectionRange(qtdNativeId, i, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void reserve(int size) {
        qtd_QItemSelection_reserve_int(qtdNativeId, size);
    }

    public final void select(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        qtd_QItemSelection_select_QModelIndex_QModelIndex(qtdNativeId, topLeft, bottomRight);
    }

    public final void setSharable(bool sharable) {
        qtd_QItemSelection_setSharable_bool(qtdNativeId, sharable);
    }

    public final int size() const {
        return qtd_QItemSelection_size_const(qtdNativeId);
    }

    public final bool startsWith(const(QItemSelectionRange) t) const {
        return qtd_QItemSelection_startsWith_QItemSelectionRange_const(qtdNativeId, t is null ? null : (cast(QItemSelectionRange)t).qtdNativeId);
    }

    public final void swap(int i, int j) {
        qtd_QItemSelection_swap_int_int(qtdNativeId, i, j);
    }

    public final QItemSelectionRange takeAt(int i) {
        void* ret = qtd_QItemSelection_takeAt_int(qtdNativeId, i);
        QItemSelectionRange __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final QItemSelectionRange takeFirst() {
        void* ret = qtd_QItemSelection_takeFirst(qtdNativeId);
        QItemSelectionRange __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final QItemSelectionRange takeLast() {
        void* ret = qtd_QItemSelection_takeLast(qtdNativeId);
        QItemSelectionRange __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final QItemSelectionRange[] toVector() const {
        QItemSelectionRange[] res;
        qtd_QItemSelection_toVector_const(qtdNativeId, &res);
        return res;
    }

    public final QItemSelectionRange value(int i) const {
        void* ret = qtd_QItemSelection_value_int_const(qtdNativeId, i);
        QItemSelectionRange __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final QItemSelectionRange value(int i, const(QItemSelectionRange) defaultValue) const {
        void* ret = qtd_QItemSelection_value_int_QItemSelectionRange_const(qtdNativeId, i, defaultValue is null ? null : (cast(QItemSelectionRange)defaultValue).qtdNativeId);
        QItemSelectionRange __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public static QList!(QItemSelectionRange) fromVector(QItemSelectionRange[] vector) {
        auto res = QList!(QItemSelectionRange).opCall();
        qtd_QItemSelection_fromVector_QVector(&res, &vector);
        return res;
    }

    public static void split(const(QItemSelectionRange) range, const(QItemSelectionRange) other, QItemSelection result) {
        qtd_QItemSelection_split_QItemSelectionRange_QItemSelectionRange_nativepointerQItemSelection(range is null ? null : (cast(QItemSelectionRange)range).qtdNativeId, other is null ? null : (cast(QItemSelectionRange)other).qtdNativeId, result is null ? null : result.qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QItemSelection;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QItemSelection_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QItemSelection_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QItemSelection_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QItemSelection_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QItemSelection_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QItemSelection_QTypeInfo_isComplex();
        isStatic = qtd_QItemSelection_QTypeInfo_isStatic();
        isLarge = qtd_QItemSelection_QTypeInfo_isLarge();
        isPointer = qtd_QItemSelection_QTypeInfo_isPointer();
        isDummy = qtd_QItemSelection_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QItemSelection_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QItemSelection_native_copy(const void* orig);
extern (C) void qtd_QItemSelection_delete(void *ptr);
extern (C) void qtd_QItemSelection_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QItemSelection_QItemSelection();
private extern(C) void* qtd_QItemSelection_QItemSelection_QModelIndex_QModelIndex(const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) void  qtd_QItemSelection_append_QItemSelectionRange(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QItemSelection_append_QList(void* __this_nativeId,
 void* t0);
private extern(C) void*  qtd_QItemSelection_at_int_const(void* __this_nativeId,
 int i0);
private extern(C) void*  qtd_QItemSelection_back_const(void* __this_nativeId);
private extern(C) void  qtd_QItemSelection_clear(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelection_contains_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) int  qtd_QItemSelection_count_const(void* __this_nativeId);
private extern(C) int  qtd_QItemSelection_count_QItemSelectionRange_const(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QItemSelection_detachShared(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelection_empty_const(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelection_endsWith_QItemSelectionRange_const(void* __this_nativeId,
 void* t0);
private extern(C) void*  qtd_QItemSelection_first_const(void* __this_nativeId);
private extern(C) void*  qtd_QItemSelection_front_const(void* __this_nativeId);
private extern(C) int  qtd_QItemSelection_indexOf_QItemSelectionRange_int_const(void* __this_nativeId,
 void* t0,
 int from1);
private extern(C) void  qtd_QItemSelection_indexes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QItemSelection_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelection_isSharedWith_QList_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QItemSelection_last_const(void* __this_nativeId);
private extern(C) int  qtd_QItemSelection_lastIndexOf_QItemSelectionRange_int_const(void* __this_nativeId,
 void* t0,
 int from1);
private extern(C) int  qtd_QItemSelection_length_const(void* __this_nativeId);
private extern(C) void  qtd_QItemSelection_merge_QItemSelection_SelectionFlags(void* __this_nativeId,
 void* other0,
 int command1);
private extern(C) void  qtd_QItemSelection_mid_int_int_const(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1);
private extern(C) void  qtd_QItemSelection_move_int_int(void* __this_nativeId,
 int from0,
 int to1);
private extern(C) bool  qtd_QItemSelection_operator_equal_QList_const(void* __this_nativeId,
 void* l0);
private extern(C) void  qtd_QItemSelection_pop_back(void* __this_nativeId);
private extern(C) void  qtd_QItemSelection_pop_front(void* __this_nativeId);
private extern(C) void  qtd_QItemSelection_prepend_QItemSelectionRange(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QItemSelection_push_back_QItemSelectionRange(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QItemSelection_push_front_QItemSelectionRange(void* __this_nativeId,
 void* t0);
private extern(C) int  qtd_QItemSelection_removeAll_QItemSelectionRange(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QItemSelection_removeAt_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QItemSelection_removeFirst(void* __this_nativeId);
private extern(C) void  qtd_QItemSelection_removeLast(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelection_removeOne_QItemSelectionRange(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QItemSelection_replace_int_QItemSelectionRange(void* __this_nativeId,
 int i0,
 void* t1);
private extern(C) void  qtd_QItemSelection_reserve_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QItemSelection_select_QModelIndex_QModelIndex(void* __this_nativeId,
 const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) void  qtd_QItemSelection_setSharable_bool(void* __this_nativeId,
 bool sharable0);
private extern(C) int  qtd_QItemSelection_size_const(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelection_startsWith_QItemSelectionRange_const(void* __this_nativeId,
 void* t0);
private extern(C) void  qtd_QItemSelection_swap_int_int(void* __this_nativeId,
 int i0,
 int j1);
private extern(C) void*  qtd_QItemSelection_takeAt_int(void* __this_nativeId,
 int i0);
private extern(C) void*  qtd_QItemSelection_takeFirst(void* __this_nativeId);
private extern(C) void*  qtd_QItemSelection_takeLast(void* __this_nativeId);
private extern(C) void  qtd_QItemSelection_toVector_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QItemSelection_value_int_const(void* __this_nativeId,
 int i0);
private extern(C) void*  qtd_QItemSelection_value_int_QItemSelectionRange_const(void* __this_nativeId,
 int i0,
 void* defaultValue1);
private extern(C) void  qtd_QItemSelection_fromVector_QVector(void* __d_return_value,
 DArray* vector0);
private extern(C) void  qtd_QItemSelection_split_QItemSelectionRange_QItemSelectionRange_nativepointerQItemSelection(void* range0,
 void* other1,
 void* result2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QItemSelection() {
    QItemSelection.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QItemSelection_QTypeInfo_isComplex();
private extern (C) bool qtd_QItemSelection_QTypeInfo_isStatic();
private extern (C) bool qtd_QItemSelection_QTypeInfo_isLarge();
private extern (C) bool qtd_QItemSelection_QTypeInfo_isPointer();
private extern (C) bool qtd_QItemSelection_QTypeInfo_isDummy();
