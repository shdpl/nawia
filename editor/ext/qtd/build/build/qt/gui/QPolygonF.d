module qt.gui.QPolygonF;

import qt.core.QPoint;
public import qt.gui.QPolygonF_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPolygon;
public import qt.core.QList;
public import qt.core.QRectF;
public import qt.core.QPointF;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPolygonF : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPolygonF_QPolygonF();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPolygon) a) {
        void* ret = qtd_QPolygonF_QPolygonF_QPolygon(a is null ? null : (cast(QPolygon)a).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPolygonF) a) {
        void* ret = qtd_QPolygonF_QPolygonF_QPolygonF(a is null ? null : (cast(QPolygonF)a).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRectF) r) {
        void* ret = qtd_QPolygonF_QPolygonF_QRectF(r);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QPointF[] v) {
        void* ret = qtd_QPolygonF_QPolygonF_QVector(&v);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int size) {
        void* ret = qtd_QPolygonF_QPolygonF_int(size);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void append(const(QPointF) t) {
        qtd_QPolygonF_append_QPointF(qtdNativeId, t);
    }

    public final const(QPointF) at(int i) const {
        QPointF res;
        qtd_QPolygonF_at_int_const(qtdNativeId, &res, i);
        return res;
    }

    public final QRectF boundingRect() const {
        QRectF res;
        qtd_QPolygonF_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final int capacity() const {
        return qtd_QPolygonF_capacity_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QPolygonF_clear(qtdNativeId);
    }

    public final bool contains(const(QPointF) t) const {
        return qtd_QPolygonF_contains_QPointF_const(qtdNativeId, t);
    }

    public final bool containsPoint(const(QPointF) pt, Qt.FillRule fillRule) const {
        return qtd_QPolygonF_containsPoint_QPointF_FillRule_const(qtdNativeId, pt, fillRule);
    }

    public final int count() const {
        return qtd_QPolygonF_count_const(qtdNativeId);
    }

    public final int count(const(QPointF) t) const {
        return qtd_QPolygonF_count_QPointF_const(qtdNativeId, t);
    }

    public final bool empty() const {
        return qtd_QPolygonF_empty_const(qtdNativeId);
    }

    public final bool endsWith(const(QPointF) t) const {
        return qtd_QPolygonF_endsWith_QPointF_const(qtdNativeId, t);
    }

    public final QPointF[] fill(const(QPointF) t, int size = -1) {
        QPointF[] res;
        qtd_QPolygonF_fill_QPointF_int(qtdNativeId, &res, t, size);
        return res;
    }

    public final const(QPointF) first() const {
        QPointF res;
        qtd_QPolygonF_first_const(qtdNativeId, &res);
        return res;
    }

    public final int indexOf(const(QPointF) t, int from = 0) const {
        return qtd_QPolygonF_indexOf_QPointF_int_const(qtdNativeId, t, from);
    }

    public final QPolygonF intersected(const(QPolygonF) r) const {
        void* ret = qtd_QPolygonF_intersected_QPolygonF_const(qtdNativeId, r is null ? null : (cast(QPolygonF)r).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final bool isClosed() const {
        return qtd_QPolygonF_isClosed_const(qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QPolygonF_isEmpty_const(qtdNativeId);
    }

    public final bool isSharedWith(QPointF[] other) const {
        return qtd_QPolygonF_isSharedWith_QVector_const(qtdNativeId, &other);
    }

    public final const(QPointF) last() const {
        QPointF res;
        qtd_QPolygonF_last_const(qtdNativeId, &res);
        return res;
    }

    public final int lastIndexOf(const(QPointF) t, int from = -1) const {
        return qtd_QPolygonF_lastIndexOf_QPointF_int_const(qtdNativeId, t, from);
    }

    public final QPointF[] mid(int pos, int length = -1) const {
        QPointF[] res;
        qtd_QPolygonF_mid_int_int_const(qtdNativeId, &res, pos, length);
        return res;
    }

    public final void writeTo(QDataStream stream) {
        qtd_QPolygonF_writeTo_QDataStream(qtdNativeId, stream is null ? null : stream.qtdNativeId);
    }

    private final bool operator_equal(QPointF[] v) const {
        return qtd_QPolygonF_operator_equal_QVector_const(qtdNativeId, &v);
    }

    public final void readFrom(QDataStream stream) {
        qtd_QPolygonF_readFrom_QDataStream(qtdNativeId, stream is null ? null : stream.qtdNativeId);
    }

    public final void pop_back() {
        qtd_QPolygonF_pop_back(qtdNativeId);
    }

    public final void pop_front() {
        qtd_QPolygonF_pop_front(qtdNativeId);
    }

    public final void prepend(const(QPointF) t) {
        qtd_QPolygonF_prepend_QPointF(qtdNativeId, t);
    }

    public final void push_back(const(QPointF) t) {
        qtd_QPolygonF_push_back_QPointF(qtdNativeId, t);
    }

    public final void push_front(const(QPointF) t) {
        qtd_QPolygonF_push_front_QPointF(qtdNativeId, t);
    }

    public final void remove(int i) {
        qtd_QPolygonF_remove_int(qtdNativeId, i);
    }

    public final void remove(int i, int n) {
        qtd_QPolygonF_remove_int_int(qtdNativeId, i, n);
    }

    public final void replace(int i, const(QPointF) t) {
        qtd_QPolygonF_replace_int_QPointF(qtdNativeId, i, t);
    }

    public final void reserve(int size) {
        qtd_QPolygonF_reserve_int(qtdNativeId, size);
    }

    public final void resize(int size) {
        qtd_QPolygonF_resize_int(qtdNativeId, size);
    }

    public final void setSharable(bool sharable) {
        qtd_QPolygonF_setSharable_bool(qtdNativeId, sharable);
    }

    public final int size() const {
        return qtd_QPolygonF_size_const(qtdNativeId);
    }

    public final void squeeze() {
        qtd_QPolygonF_squeeze(qtdNativeId);
    }

    public final bool startsWith(const(QPointF) t) const {
        return qtd_QPolygonF_startsWith_QPointF_const(qtdNativeId, t);
    }

    public final QPolygonF subtracted(const(QPolygonF) r) const {
        void* ret = qtd_QPolygonF_subtracted_QPolygonF_const(qtdNativeId, r is null ? null : (cast(QPolygonF)r).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QList!(QPointF) toList() const {
        auto res = QList!(QPointF).opCall();
        qtd_QPolygonF_toList_const(qtdNativeId, &res);
        return res;
    }

    public final QPolygon toPolygon() const {
        void* ret = qtd_QPolygonF_toPolygon_const(qtdNativeId);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final void translate(const(QPointF) offset) {
        qtd_QPolygonF_translate_QPointF(qtdNativeId, offset);
    }

    public final void translate(double dx, double dy) {
        qtd_QPolygonF_translate_double_double(qtdNativeId, dx, dy);
    }

    public final QPolygonF translated(const(QPointF) offset) const {
        void* ret = qtd_QPolygonF_translated_QPointF_const(qtdNativeId, offset);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF translated(double dx, double dy) const {
        void* ret = qtd_QPolygonF_translated_double_double_const(qtdNativeId, dx, dy);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF united(const(QPolygonF) r) const {
        void* ret = qtd_QPolygonF_united_QPolygonF_const(qtdNativeId, r is null ? null : (cast(QPolygonF)r).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF value(int i) const {
        QPointF res;
        qtd_QPolygonF_value_int_const(qtdNativeId, &res, i);
        return res;
    }

    public final QPointF value(int i, const(QPointF) defaultValue) const {
        QPointF res;
        qtd_QPolygonF_value_int_QPointF_const(qtdNativeId, &res, i, defaultValue);
        return res;
    }

    public static QPointF[] fromList(QList!(QPointF) list) {
        QPointF[] res;
        qtd_QPolygonF_fromList_QList(&res, &list);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPolygonF;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPolygonF_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPolygonF_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPolygonF_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPolygonF_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPolygonF_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPolygonF_QTypeInfo_isComplex();
        isStatic = qtd_QPolygonF_QTypeInfo_isStatic();
        isLarge = qtd_QPolygonF_QTypeInfo_isLarge();
        isPointer = qtd_QPolygonF_QTypeInfo_isPointer();
        isDummy = qtd_QPolygonF_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    private native void add_private(long nid, double x, double y);

    @QtBlockedSlot
    public final QPolygonF add(double x, double y) {
    add_private(qtdNativeId(), x, y);
    return this;
    }

    @QtBlockedSlot
    public final QPolygonF add(QPointF pt) {
    add_private(qtdNativeId(), pt.x(), pt.y());
    return this;
    }

    @QtBlockedSlot
    public final QPolygonF add(QPolygonF p) {
    int size = p.size();
    long nid = qtdNativeId();
    for (int i = 0; i < size; ++i) {
    QPointF pt = p.at(i);
    add_private(nid, pt.x(), pt.y());
    }
    return this;
    }
     */


    public final void insert(int i, QPointF t) {
        qtd_QPolygonF_insert_int_QPointF(qtdNativeId, i, t);
    }

    public final void insert(int i, int n, QPointF t) {
        qtd_QPolygonF_insert_int_int_QPointF(qtdNativeId, i, n, t);
    }

}

    private extern(C) void  qtd_QPolygonF_insert_int_QPointF(void* __this_nativeId,
        int i0,
        QPointF t1);
    private extern(C) void  qtd_QPolygonF_insert_int_int_QPointF(void* __this_nativeId,
        int i0,
        int n1,
        QPointF t2);

private extern(C) void qtd_QPolygonF_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPolygonF_native_copy(const void* orig);
extern (C) void qtd_QPolygonF_delete(void *ptr);
extern (C) void qtd_QPolygonF_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPolygonF_QPolygonF();
private extern(C) void* qtd_QPolygonF_QPolygonF_QPolygon(void* a0);
private extern(C) void* qtd_QPolygonF_QPolygonF_QPolygonF(void* a0);
private extern(C) void* qtd_QPolygonF_QPolygonF_QRectF(QRectF r0);
private extern(C) void* qtd_QPolygonF_QPolygonF_QVector(DArray* v0);
private extern(C) void* qtd_QPolygonF_QPolygonF_int(int size0);
private extern(C) void  qtd_QPolygonF_append_QPointF(void* __this_nativeId,
 QPointF t0);
private extern(C) void  qtd_QPolygonF_at_int_const(void* __this_nativeId,
 QPointF * __d_return_value,
 int i0);
private extern(C) void  qtd_QPolygonF_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) int  qtd_QPolygonF_capacity_const(void* __this_nativeId);
private extern(C) void  qtd_QPolygonF_clear(void* __this_nativeId);
private extern(C) bool  qtd_QPolygonF_contains_QPointF_const(void* __this_nativeId,
 QPointF t0);
private extern(C) bool  qtd_QPolygonF_containsPoint_QPointF_FillRule_const(void* __this_nativeId,
 QPointF pt0,
 int fillRule1);
private extern(C) int  qtd_QPolygonF_count_const(void* __this_nativeId);
private extern(C) int  qtd_QPolygonF_count_QPointF_const(void* __this_nativeId,
 QPointF t0);
private extern(C) bool  qtd_QPolygonF_empty_const(void* __this_nativeId);
private extern(C) bool  qtd_QPolygonF_endsWith_QPointF_const(void* __this_nativeId,
 QPointF t0);
private extern(C) void  qtd_QPolygonF_fill_QPointF_int(void* __this_nativeId,
 void* __d_return_value,
 QPointF t0,
 int size1);
private extern(C) void  qtd_QPolygonF_first_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) int  qtd_QPolygonF_indexOf_QPointF_int_const(void* __this_nativeId,
 QPointF t0,
 int from1);
private extern(C) void*  qtd_QPolygonF_intersected_QPolygonF_const(void* __this_nativeId,
 void* r0);
private extern(C) bool  qtd_QPolygonF_isClosed_const(void* __this_nativeId);
private extern(C) bool  qtd_QPolygonF_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QPolygonF_isSharedWith_QVector_const(void* __this_nativeId,
 DArray* other0);
private extern(C) void  qtd_QPolygonF_last_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) int  qtd_QPolygonF_lastIndexOf_QPointF_int_const(void* __this_nativeId,
 QPointF t0,
 int from1);
private extern(C) void  qtd_QPolygonF_mid_int_int_const(void* __this_nativeId,
 void* __d_return_value,
 int pos0,
 int length1);
private extern(C) void  qtd_QPolygonF_writeTo_QDataStream(void* __this_nativeId,
 void* stream0);
private extern(C) bool  qtd_QPolygonF_operator_equal_QVector_const(void* __this_nativeId,
 DArray* v0);
private extern(C) void  qtd_QPolygonF_readFrom_QDataStream(void* __this_nativeId,
 void* stream0);
private extern(C) void  qtd_QPolygonF_pop_back(void* __this_nativeId);
private extern(C) void  qtd_QPolygonF_pop_front(void* __this_nativeId);
private extern(C) void  qtd_QPolygonF_prepend_QPointF(void* __this_nativeId,
 QPointF t0);
private extern(C) void  qtd_QPolygonF_push_back_QPointF(void* __this_nativeId,
 QPointF t0);
private extern(C) void  qtd_QPolygonF_push_front_QPointF(void* __this_nativeId,
 QPointF t0);
private extern(C) void  qtd_QPolygonF_remove_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QPolygonF_remove_int_int(void* __this_nativeId,
 int i0,
 int n1);
private extern(C) void  qtd_QPolygonF_replace_int_QPointF(void* __this_nativeId,
 int i0,
 QPointF t1);
private extern(C) void  qtd_QPolygonF_reserve_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QPolygonF_resize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QPolygonF_setSharable_bool(void* __this_nativeId,
 bool sharable0);
private extern(C) int  qtd_QPolygonF_size_const(void* __this_nativeId);
private extern(C) void  qtd_QPolygonF_squeeze(void* __this_nativeId);
private extern(C) bool  qtd_QPolygonF_startsWith_QPointF_const(void* __this_nativeId,
 QPointF t0);
private extern(C) void*  qtd_QPolygonF_subtracted_QPolygonF_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QPolygonF_toList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QPolygonF_toPolygon_const(void* __this_nativeId);
private extern(C) void  qtd_QPolygonF_translate_QPointF(void* __this_nativeId,
 QPointF offset0);
private extern(C) void  qtd_QPolygonF_translate_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void*  qtd_QPolygonF_translated_QPointF_const(void* __this_nativeId,
 QPointF offset0);
private extern(C) void*  qtd_QPolygonF_translated_double_double_const(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void*  qtd_QPolygonF_united_QPolygonF_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QPolygonF_value_int_const(void* __this_nativeId,
 QPointF * __d_return_value,
 int i0);
private extern(C) void  qtd_QPolygonF_value_int_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 int i0,
 QPointF defaultValue1);
private extern(C) void  qtd_QPolygonF_fromList_QList(void* __d_return_value,
 void* list0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QPolygonF() {
    QPolygonF.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QPolygonF_QTypeInfo_isComplex();
private extern (C) bool qtd_QPolygonF_QTypeInfo_isStatic();
private extern (C) bool qtd_QPolygonF_QTypeInfo_isLarge();
private extern (C) bool qtd_QPolygonF_QTypeInfo_isPointer();
private extern (C) bool qtd_QPolygonF_QTypeInfo_isDummy();
