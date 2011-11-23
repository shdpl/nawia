module qt.gui.QPolygon;

import qt.core.QPoint;
public import qt.gui.QPolygon_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QList;
public import qt.core.QRect;
public import qt.core.QVariant;
public import qt.core.QDataStream;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPolygon : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPolygon_QPolygon();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPolygon) a) {
        void* ret = qtd_QPolygon_QPolygon_QPolygon(a is null ? null : (cast(QPolygon)a).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRect) r, bool closed = false) {
        void* ret = qtd_QPolygon_QPolygon_QRect_bool(r, closed);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QPoint[] v) {
        void* ret = qtd_QPolygon_QPolygon_QVector(&v);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int size) {
        void* ret = qtd_QPolygon_QPolygon_int(size);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void append(const(QPoint) t) {
        qtd_QPolygon_append_QPoint(qtdNativeId, t);
    }

    public final const(QPoint) at(int i) const {
        QPoint res;
        qtd_QPolygon_at_int_const(qtdNativeId, &res, i);
        return res;
    }

    public final QRect boundingRect() const {
        QRect res;
        qtd_QPolygon_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final int capacity() const {
        return qtd_QPolygon_capacity_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QPolygon_clear(qtdNativeId);
    }

    public final bool contains(const(QPoint) t) const {
        return qtd_QPolygon_contains_QPoint_const(qtdNativeId, t);
    }

    public final bool containsPoint(const(QPoint) pt, Qt.FillRule fillRule) const {
        return qtd_QPolygon_containsPoint_QPoint_FillRule_const(qtdNativeId, pt, fillRule);
    }

    public final int count() const {
        return qtd_QPolygon_count_const(qtdNativeId);
    }

    public final int count(const(QPoint) t) const {
        return qtd_QPolygon_count_QPoint_const(qtdNativeId, t);
    }

    public final bool empty() const {
        return qtd_QPolygon_empty_const(qtdNativeId);
    }

    public final bool endsWith(const(QPoint) t) const {
        return qtd_QPolygon_endsWith_QPoint_const(qtdNativeId, t);
    }

    public final QPoint[] fill(const(QPoint) t, int size = -1) {
        QPoint[] res;
        qtd_QPolygon_fill_QPoint_int(qtdNativeId, &res, t, size);
        return res;
    }

    public final const(QPoint) first() const {
        QPoint res;
        qtd_QPolygon_first_const(qtdNativeId, &res);
        return res;
    }

    public final int indexOf(const(QPoint) t, int from = 0) const {
        return qtd_QPolygon_indexOf_QPoint_int_const(qtdNativeId, t, from);
    }

    public final QPolygon intersected(const(QPolygon) r) const {
        void* ret = qtd_QPolygon_intersected_QPolygon_const(qtdNativeId, r is null ? null : (cast(QPolygon)r).qtdNativeId);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final bool isEmpty() const {
        return qtd_QPolygon_isEmpty_const(qtdNativeId);
    }

    public final bool isSharedWith(QPoint[] other) const {
        return qtd_QPolygon_isSharedWith_QVector_const(qtdNativeId, &other);
    }

    public final const(QPoint) last() const {
        QPoint res;
        qtd_QPolygon_last_const(qtdNativeId, &res);
        return res;
    }

    public final int lastIndexOf(const(QPoint) t, int from = -1) const {
        return qtd_QPolygon_lastIndexOf_QPoint_int_const(qtdNativeId, t, from);
    }

    public final QPoint[] mid(int pos, int length = -1) const {
        QPoint[] res;
        qtd_QPolygon_mid_int_int_const(qtdNativeId, &res, pos, length);
        return res;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QPolygon_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream stream) {
        qtd_QPolygon_writeTo_QDataStream(qtdNativeId, stream is null ? null : stream.qtdNativeId);
    }

    private final bool operator_equal(QPoint[] v) const {
        return qtd_QPolygon_operator_equal_QVector_const(qtdNativeId, &v);
    }

    public final void readFrom(QDataStream stream) {
        qtd_QPolygon_readFrom_QDataStream(qtdNativeId, stream is null ? null : stream.qtdNativeId);
    }

    public final void pop_back() {
        qtd_QPolygon_pop_back(qtdNativeId);
    }

    public final void pop_front() {
        qtd_QPolygon_pop_front(qtdNativeId);
    }

    public final void prepend(const(QPoint) t) {
        qtd_QPolygon_prepend_QPoint(qtdNativeId, t);
    }

    public final void push_back(const(QPoint) t) {
        qtd_QPolygon_push_back_QPoint(qtdNativeId, t);
    }

    public final void push_front(const(QPoint) t) {
        qtd_QPolygon_push_front_QPoint(qtdNativeId, t);
    }

    public final void remove(int i) {
        qtd_QPolygon_remove_int(qtdNativeId, i);
    }

    public final void remove(int i, int n) {
        qtd_QPolygon_remove_int_int(qtdNativeId, i, n);
    }

    public final void replace(int i, const(QPoint) t) {
        qtd_QPolygon_replace_int_QPoint(qtdNativeId, i, t);
    }

    public final void reserve(int size) {
        qtd_QPolygon_reserve_int(qtdNativeId, size);
    }

    public final void resize(int size) {
        qtd_QPolygon_resize_int(qtdNativeId, size);
    }

    public final void setSharable(bool sharable) {
        qtd_QPolygon_setSharable_bool(qtdNativeId, sharable);
    }

    public final int size() const {
        return qtd_QPolygon_size_const(qtdNativeId);
    }

    public final void squeeze() {
        qtd_QPolygon_squeeze(qtdNativeId);
    }

    public final bool startsWith(const(QPoint) t) const {
        return qtd_QPolygon_startsWith_QPoint_const(qtdNativeId, t);
    }

    public final QPolygon subtracted(const(QPolygon) r) const {
        void* ret = qtd_QPolygon_subtracted_QPolygon_const(qtdNativeId, r is null ? null : (cast(QPolygon)r).qtdNativeId);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QList!(QPoint) toList() const {
        auto res = QList!(QPoint).opCall();
        qtd_QPolygon_toList_const(qtdNativeId, &res);
        return res;
    }

    public final void translate(const(QPoint) offset) {
        qtd_QPolygon_translate_QPoint(qtdNativeId, offset);
    }

    public final void translate(int dx, int dy) {
        qtd_QPolygon_translate_int_int(qtdNativeId, dx, dy);
    }

    public final QPolygon translated(const(QPoint) offset) const {
        void* ret = qtd_QPolygon_translated_QPoint_const(qtdNativeId, offset);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPolygon translated(int dx, int dy) const {
        void* ret = qtd_QPolygon_translated_int_int_const(qtdNativeId, dx, dy);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPolygon united(const(QPolygon) r) const {
        void* ret = qtd_QPolygon_united_QPolygon_const(qtdNativeId, r is null ? null : (cast(QPolygon)r).qtdNativeId);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPoint value(int i) const {
        QPoint res;
        qtd_QPolygon_value_int_const(qtdNativeId, &res, i);
        return res;
    }

    public final QPoint value(int i, const(QPoint) defaultValue) const {
        QPoint res;
        qtd_QPolygon_value_int_QPoint_const(qtdNativeId, &res, i, defaultValue);
        return res;
    }

    public static QPoint[] fromList(QList!(QPoint) list) {
        QPoint[] res;
        qtd_QPolygon_fromList_QList(&res, &list);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPolygon;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPolygon_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPolygon_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPolygon_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPolygon_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPolygon_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPolygon_QTypeInfo_isComplex();
        isStatic = qtd_QPolygon_QTypeInfo_isStatic();
        isLarge = qtd_QPolygon_QTypeInfo_isLarge();
        isPointer = qtd_QPolygon_QTypeInfo_isPointer();
        isDummy = qtd_QPolygon_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final void insert(int i, QPoint t) {
        qtd_QPolygon_insert_int_QPoint(qtdNativeId, i, t);
    }

    public final void insert(int i, int n, QPoint t) {
        qtd_QPolygon_insert_int_int_QPoint(qtdNativeId, i, n, t);
    }


    /*
    private native void add_private(long nid, int x, int y);

    @QtBlockedSlot
    public final QPolygon add(int x, int y) {
    add_private(qtdNativeId(), x, y);
    return this;
    }

    @QtBlockedSlot
    public final QPolygon add(QPoint pt) {
    add_private(qtdNativeId(), pt.x(), pt.y());
    return this;
    }

    @QtBlockedSlot
    public final QPolygon add(QPolygon p) {
    int size = p.size();
    long nid = qtdNativeId();
    for (int i = 0; i < size; ++i) {
    QPoint pt = p.at(i);
    add_private(nid, pt.x(), pt.y());
    }
    return this;
    }
     */

}

    private extern(C) void  qtd_QPolygon_insert_int_QPoint(void* __this_nativeId,
        int i0,
        QPoint t1);
    private extern(C) void  qtd_QPolygon_insert_int_int_QPoint(void* __this_nativeId,
        int i0,
        int n1,
        QPoint t2);

private extern(C) void qtd_QPolygon_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPolygon_native_copy(const void* orig);
extern (C) void qtd_QPolygon_delete(void *ptr);
extern (C) void qtd_QPolygon_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPolygon_QPolygon();
private extern(C) void* qtd_QPolygon_QPolygon_QPolygon(void* a0);
private extern(C) void* qtd_QPolygon_QPolygon_QRect_bool(QRect r0,
 bool closed1);
private extern(C) void* qtd_QPolygon_QPolygon_QVector(DArray* v0);
private extern(C) void* qtd_QPolygon_QPolygon_int(int size0);
private extern(C) void  qtd_QPolygon_append_QPoint(void* __this_nativeId,
 QPoint t0);
private extern(C) void  qtd_QPolygon_at_int_const(void* __this_nativeId,
 QPoint * __d_return_value,
 int i0);
private extern(C) void  qtd_QPolygon_boundingRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QPolygon_capacity_const(void* __this_nativeId);
private extern(C) void  qtd_QPolygon_clear(void* __this_nativeId);
private extern(C) bool  qtd_QPolygon_contains_QPoint_const(void* __this_nativeId,
 QPoint t0);
private extern(C) bool  qtd_QPolygon_containsPoint_QPoint_FillRule_const(void* __this_nativeId,
 QPoint pt0,
 int fillRule1);
private extern(C) int  qtd_QPolygon_count_const(void* __this_nativeId);
private extern(C) int  qtd_QPolygon_count_QPoint_const(void* __this_nativeId,
 QPoint t0);
private extern(C) bool  qtd_QPolygon_empty_const(void* __this_nativeId);
private extern(C) bool  qtd_QPolygon_endsWith_QPoint_const(void* __this_nativeId,
 QPoint t0);
private extern(C) void  qtd_QPolygon_fill_QPoint_int(void* __this_nativeId,
 void* __d_return_value,
 QPoint t0,
 int size1);
private extern(C) void  qtd_QPolygon_first_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QPolygon_indexOf_QPoint_int_const(void* __this_nativeId,
 QPoint t0,
 int from1);
private extern(C) void*  qtd_QPolygon_intersected_QPolygon_const(void* __this_nativeId,
 void* r0);
private extern(C) bool  qtd_QPolygon_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QPolygon_isSharedWith_QVector_const(void* __this_nativeId,
 DArray* other0);
private extern(C) void  qtd_QPolygon_last_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) int  qtd_QPolygon_lastIndexOf_QPoint_int_const(void* __this_nativeId,
 QPoint t0,
 int from1);
private extern(C) void  qtd_QPolygon_mid_int_int_const(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1);
private extern(C) void*  qtd_QPolygon_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QPolygon_writeTo_QDataStream(void* __this_nativeId,
 void* stream0);
private extern(C) bool  qtd_QPolygon_operator_equal_QVector_const(void* __this_nativeId,
 DArray* v0);
private extern(C) void  qtd_QPolygon_readFrom_QDataStream(void* __this_nativeId,
 void* stream0);
private extern(C) void  qtd_QPolygon_pop_back(void* __this_nativeId);
private extern(C) void  qtd_QPolygon_pop_front(void* __this_nativeId);
private extern(C) void  qtd_QPolygon_prepend_QPoint(void* __this_nativeId,
 QPoint t0);
private extern(C) void  qtd_QPolygon_push_back_QPoint(void* __this_nativeId,
 QPoint t0);
private extern(C) void  qtd_QPolygon_push_front_QPoint(void* __this_nativeId,
 QPoint t0);
private extern(C) void  qtd_QPolygon_remove_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QPolygon_remove_int_int(void* __this_nativeId,
 int i0,
 int n1);
private extern(C) void  qtd_QPolygon_replace_int_QPoint(void* __this_nativeId,
 int i0,
 QPoint t1);
private extern(C) void  qtd_QPolygon_reserve_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QPolygon_resize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QPolygon_setSharable_bool(void* __this_nativeId,
 bool sharable0);
private extern(C) int  qtd_QPolygon_size_const(void* __this_nativeId);
private extern(C) void  qtd_QPolygon_squeeze(void* __this_nativeId);
private extern(C) bool  qtd_QPolygon_startsWith_QPoint_const(void* __this_nativeId,
 QPoint t0);
private extern(C) void*  qtd_QPolygon_subtracted_QPolygon_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QPolygon_toList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QPolygon_translate_QPoint(void* __this_nativeId,
 QPoint offset0);
private extern(C) void  qtd_QPolygon_translate_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void*  qtd_QPolygon_translated_QPoint_const(void* __this_nativeId,
 QPoint offset0);
private extern(C) void*  qtd_QPolygon_translated_int_int_const(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void*  qtd_QPolygon_united_QPolygon_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QPolygon_value_int_const(void* __this_nativeId,
 QPoint * __d_return_value,
 int i0);
private extern(C) void  qtd_QPolygon_value_int_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 int i0,
 QPoint defaultValue1);
private extern(C) void  qtd_QPolygon_fromList_QList(void* __d_return_value,
 void* list0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QPolygon() {
    QPolygon.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QPolygon_QTypeInfo_isComplex();
private extern (C) bool qtd_QPolygon_QTypeInfo_isStatic();
private extern (C) bool qtd_QPolygon_QTypeInfo_isLarge();
private extern (C) bool qtd_QPolygon_QTypeInfo_isPointer();
private extern (C) bool qtd_QPolygon_QTypeInfo_isDummy();
