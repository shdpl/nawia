module qt.core.QByteArray;

public import qt.core.QByteArray_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QByteArray : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QByteArray_QByteArray();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QByteArray) arg__1) {
        void* ret = qtd_QByteArray_QByteArray_QByteArray(arg__1 is null ? null : (cast(QByteArray)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(const(char*) arg__1, int size) {
        void* ret = qtd_QByteArray_QByteArray_nativepointerchar_int(arg__1, size);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int size, char c) {
        void* ret = qtd_QByteArray_QByteArray_int_char(size, c);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QByteArray append(char c) {
        void* ret = qtd_QByteArray_append_char(qtdNativeId, c);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray append(const(QByteArray) a) {
        void* ret = qtd_QByteArray_append_QByteArray(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray append(string s) {
        void* ret = qtd_QByteArray_append_string(qtdNativeId, s);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray append(const(char*) s, int len) {
        void* ret = qtd_QByteArray_append_nativepointerchar_int(qtdNativeId, s, len);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final ubyte at(int i) const {
        return qtd_QByteArray_at_int_const(qtdNativeId, i);
    }

    public final int capacity() const {
        return qtd_QByteArray_capacity_const(qtdNativeId);
    }

    public final void chop(int n) {
        qtd_QByteArray_chop_int(qtdNativeId, n);
    }

    public final void clear() {
        qtd_QByteArray_clear(qtdNativeId);
    }

    public final bool contains(char c) const {
        return qtd_QByteArray_contains_char_const(qtdNativeId, c);
    }

    public final bool contains(const(QByteArray) a) const {
        return qtd_QByteArray_contains_QByteArray_const(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId);
    }

    public final int count(char c) const {
        return qtd_QByteArray_count_char_const(qtdNativeId, c);
    }

    public final int count(const(QByteArray) a) const {
        return qtd_QByteArray_count_QByteArray_const(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId);
    }

    public final char* data() {
        return qtd_QByteArray_data(qtdNativeId);
    }

    public final bool endsWith(char c) const {
        return qtd_QByteArray_endsWith_char_const(qtdNativeId, c);
    }

    public final bool endsWith(const(QByteArray) a) const {
        return qtd_QByteArray_endsWith_QByteArray_const(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId);
    }

    public final QByteArray fill(char c, int size = -1) {
        void* ret = qtd_QByteArray_fill_char_int(qtdNativeId, c, size);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final int indexOf(char c, int from = 0) const {
        return qtd_QByteArray_indexOf_char_int_const(qtdNativeId, c, from);
    }

    public final int indexOf(const(QByteArray) a, int from = 0) const {
        return qtd_QByteArray_indexOf_QByteArray_int_const(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId, from);
    }

    public final int indexOf(string s, int from = 0) const {
        return qtd_QByteArray_indexOf_string_int_const(qtdNativeId, s, from);
    }

    public final QByteArray insert(int i, char c) {
        void* ret = qtd_QByteArray_insert_int_char(qtdNativeId, i, c);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray insert(int i, const(QByteArray) a) {
        void* ret = qtd_QByteArray_insert_int_QByteArray(qtdNativeId, i, a is null ? null : (cast(QByteArray)a).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray insert(int i, string s) {
        void* ret = qtd_QByteArray_insert_int_string(qtdNativeId, i, s);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray insert(int i, const(char*) s, int len) {
        void* ret = qtd_QByteArray_insert_int_nativepointerchar_int(qtdNativeId, i, s, len);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final bool isEmpty() const {
        return qtd_QByteArray_isEmpty_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QByteArray_isNull_const(qtdNativeId);
    }

    public final bool isSharedWith(const(QByteArray) other) const {
        return qtd_QByteArray_isSharedWith_QByteArray_const(qtdNativeId, other is null ? null : (cast(QByteArray)other).qtdNativeId);
    }

    public final int lastIndexOf(char c, int from = -1) const {
        return qtd_QByteArray_lastIndexOf_char_int_const(qtdNativeId, c, from);
    }

    public final int lastIndexOf(const(QByteArray) a, int from = -1) const {
        return qtd_QByteArray_lastIndexOf_QByteArray_int_const(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId, from);
    }

    public final int lastIndexOf(string s, int from = -1) const {
        return qtd_QByteArray_lastIndexOf_string_int_const(qtdNativeId, s, from);
    }

    public final QByteArray left(int len) const {
        void* ret = qtd_QByteArray_left_int_const(qtdNativeId, len);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray leftJustified(int width, char fill = ' ', bool truncate = false) const {
        void* ret = qtd_QByteArray_leftJustified_int_char_bool_const(qtdNativeId, width, fill, truncate);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int length() const {
        return qtd_QByteArray_length_const(qtdNativeId);
    }

    public final QByteArray mid(int index, int len = -1) const {
        void* ret = qtd_QByteArray_mid_int_int_const(qtdNativeId, index, len);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    private final bool operator_less(const(QByteArray) a2) {
        return qtd_QByteArray_operator_less_QByteArray(qtdNativeId, a2 is null ? null : (cast(QByteArray)a2).qtdNativeId);
    }

    private final bool operator_less(string s2) const {
        return qtd_QByteArray_operator_less_string_const(qtdNativeId, s2);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QByteArray_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final QByteArray operator_assign(const(QByteArray) arg__1) {
        void* ret = qtd_QByteArray_operator_assign_QByteArray(qtdNativeId, arg__1 is null ? null : (cast(QByteArray)arg__1).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final bool operator_equal(const(QByteArray) a2) {
        return qtd_QByteArray_operator_equal_QByteArray(qtdNativeId, a2 is null ? null : (cast(QByteArray)a2).qtdNativeId);
    }

    private final bool operator_equal(string s2) const {
        return qtd_QByteArray_operator_equal_string_const(qtdNativeId, s2);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QByteArray_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final QByteArray prepend(char c) {
        void* ret = qtd_QByteArray_prepend_char(qtdNativeId, c);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray prepend(const(QByteArray) a) {
        void* ret = qtd_QByteArray_prepend_QByteArray(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray prepend(const(char*) s, int len) {
        void* ret = qtd_QByteArray_prepend_nativepointerchar_int(qtdNativeId, s, len);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray remove(int index, int len) {
        void* ret = qtd_QByteArray_remove_int_int(qtdNativeId, index, len);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray repeated(int times) const {
        void* ret = qtd_QByteArray_repeated_int_const(qtdNativeId, times);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray replace(char before, char after) {
        void* ret = qtd_QByteArray_replace_char_char(qtdNativeId, before, after);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray replace(char before, const(QByteArray) after) {
        void* ret = qtd_QByteArray_replace_char_QByteArray(qtdNativeId, before, after is null ? null : (cast(QByteArray)after).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray replace(char c, string after) {
        void* ret = qtd_QByteArray_replace_char_string(qtdNativeId, c, after);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray replace(const(QByteArray) before, const(QByteArray) after) {
        void* ret = qtd_QByteArray_replace_QByteArray_QByteArray(qtdNativeId, before is null ? null : (cast(QByteArray)before).qtdNativeId, after is null ? null : (cast(QByteArray)after).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray replace(string before, const(QByteArray) after) {
        void* ret = qtd_QByteArray_replace_string_QByteArray(qtdNativeId, before, after is null ? null : (cast(QByteArray)after).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray replace(const(char*) before, int bsize, const(char*) after, int asize) {
        void* ret = qtd_QByteArray_replace_nativepointerchar_int_nativepointerchar_int(qtdNativeId, before, bsize, after, asize);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray replace(int index, int len, const(QByteArray) s) {
        void* ret = qtd_QByteArray_replace_int_int_QByteArray(qtdNativeId, index, len, s is null ? null : (cast(QByteArray)s).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray replace(int index, int len, const(char*) s, int alen) {
        void* ret = qtd_QByteArray_replace_int_int_nativepointerchar_int(qtdNativeId, index, len, s, alen);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final void reserve(int size) {
        qtd_QByteArray_reserve_int(qtdNativeId, size);
    }

    public final void resize(int size) {
        qtd_QByteArray_resize_int(qtdNativeId, size);
    }

    public final QByteArray right(int len) const {
        void* ret = qtd_QByteArray_right_int_const(qtdNativeId, len);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray rightJustified(int width, char fill = ' ', bool truncate = false) const {
        void* ret = qtd_QByteArray_rightJustified_int_char_bool_const(qtdNativeId, width, fill, truncate);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray setNum(double arg__1, char f = 'g', int prec = 6) {
        void* ret = qtd_QByteArray_setNum_double_char_int(qtdNativeId, arg__1, f, prec);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray setNum(float arg__1, char f = 'g', int prec = 6) {
        void* ret = qtd_QByteArray_setNum_float_char_int(qtdNativeId, arg__1, f, prec);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray setNum(int arg__1, int base = 10) {
        void* ret = qtd_QByteArray_setNum_int_int(qtdNativeId, arg__1, base);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray setNum(short arg__1, int base = 10) {
        void* ret = qtd_QByteArray_setNum_short_int(qtdNativeId, arg__1, base);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray setRawData(const(char*) a, uint n) {
        void* ret = qtd_QByteArray_setRawData_nativepointerchar_uint(qtdNativeId, a, n);
        QByteArray __d_return_value = new QByteArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QByteArray simplified() const {
        void* ret = qtd_QByteArray_simplified_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int size() const {
        return qtd_QByteArray_size_const(qtdNativeId);
    }

    public final QList!(QByteArray) split(char sep) const {
        auto res = QList!(QByteArray).opCall();
        qtd_QByteArray_split_char_const(qtdNativeId, &res, sep);
        return res;
    }

    public final void squeeze() {
        qtd_QByteArray_squeeze(qtdNativeId);
    }

    public final bool startsWith(char c) const {
        return qtd_QByteArray_startsWith_char_const(qtdNativeId, c);
    }

    public final bool startsWith(const(QByteArray) a) const {
        return qtd_QByteArray_startsWith_QByteArray_const(qtdNativeId, a is null ? null : (cast(QByteArray)a).qtdNativeId);
    }

    public final QByteArray toBase64() const {
        void* ret = qtd_QByteArray_toBase64_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final double toDouble(bool* ok = null) const {
        return qtd_QByteArray_toDouble_nativepointerbool_const(qtdNativeId, ok);
    }

    public final float toFloat(bool* ok = null) const {
        return qtd_QByteArray_toFloat_nativepointerbool_const(qtdNativeId, ok);
    }

    public final QByteArray toHex() const {
        void* ret = qtd_QByteArray_toHex_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int toInt(bool* ok = null, int base = 10) const {
        return qtd_QByteArray_toInt_nativepointerbool_int_const(qtdNativeId, ok, base);
    }

    public final QByteArray toLower() const {
        void* ret = qtd_QByteArray_toLower_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray toPercentEncoding(const(QByteArray) exclude = new QByteArray(), const(QByteArray) include = new QByteArray(), char percent = '%') const {
        void* ret = qtd_QByteArray_toPercentEncoding_QByteArray_QByteArray_char_const(qtdNativeId, exclude is null ? null : (cast(QByteArray)exclude).qtdNativeId, include is null ? null : (cast(QByteArray)include).qtdNativeId, percent);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray toUpper() const {
        void* ret = qtd_QByteArray_toUpper_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QByteArray trimmed() const {
        void* ret = qtd_QByteArray_trimmed_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final void truncate(int pos) {
        qtd_QByteArray_truncate_int(qtdNativeId, pos);
    }

    public static QByteArray fromBase64(const(QByteArray) base64) {
        void* ret = qtd_QByteArray_fromBase64_QByteArray(base64 is null ? null : (cast(QByteArray)base64).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray fromHex(const(QByteArray) hexEncoded) {
        void* ret = qtd_QByteArray_fromHex_QByteArray(hexEncoded is null ? null : (cast(QByteArray)hexEncoded).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray fromPercentEncoding(const(QByteArray) pctEncoded, char percent = '%') {
        void* ret = qtd_QByteArray_fromPercentEncoding_QByteArray_char(pctEncoded is null ? null : (cast(QByteArray)pctEncoded).qtdNativeId, percent);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray number(double arg__1, char f = 'g', int prec = 6) {
        void* ret = qtd_QByteArray_number_double_char_int(arg__1, f, prec);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public static QByteArray number(int arg__1, int base = 10) {
        void* ret = qtd_QByteArray_number_int_int(arg__1, base);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QByteArray;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QByteArray_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QByteArray_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QByteArray_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QByteArray_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QByteArray_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QByteArray_QTypeInfo_isComplex();
        isStatic = qtd_QByteArray_QTypeInfo_isStatic();
        isLarge = qtd_QByteArray_QTypeInfo_isLarge();
        isPointer = qtd_QByteArray_QTypeInfo_isPointer();
        isDummy = qtd_QByteArray_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QByteArray_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QByteArray_native_copy(const void* orig);
extern (C) void qtd_QByteArray_delete(void *ptr);
extern (C) void qtd_QByteArray_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QByteArray_QByteArray();
private extern(C) void* qtd_QByteArray_QByteArray_QByteArray(void* arg__1);
private extern(C) void* qtd_QByteArray_QByteArray_nativepointerchar_int(const (char*) arg__1,
 int size1);
private extern(C) void* qtd_QByteArray_QByteArray_int_char(int size0,
 char c1);
private extern(C) void*  qtd_QByteArray_append_char(void* __this_nativeId,
 char c0);
private extern(C) void*  qtd_QByteArray_append_QByteArray(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QByteArray_append_string(void* __this_nativeId,
 string s0);
private extern(C) void*  qtd_QByteArray_append_nativepointerchar_int(void* __this_nativeId,
 const (char*) s0,
 int len1);
private extern(C) ubyte  qtd_QByteArray_at_int_const(void* __this_nativeId,
 int i0);
private extern(C) int  qtd_QByteArray_capacity_const(void* __this_nativeId);
private extern(C) void  qtd_QByteArray_chop_int(void* __this_nativeId,
 int n0);
private extern(C) void  qtd_QByteArray_clear(void* __this_nativeId);
private extern(C) bool  qtd_QByteArray_contains_char_const(void* __this_nativeId,
 char c0);
private extern(C) bool  qtd_QByteArray_contains_QByteArray_const(void* __this_nativeId,
 void* a0);
private extern(C) int  qtd_QByteArray_count_char_const(void* __this_nativeId,
 char c0);
private extern(C) int  qtd_QByteArray_count_QByteArray_const(void* __this_nativeId,
 void* a0);
private extern(C) char*  qtd_QByteArray_data(void* __this_nativeId);
private extern(C) bool  qtd_QByteArray_endsWith_char_const(void* __this_nativeId,
 char c0);
private extern(C) bool  qtd_QByteArray_endsWith_QByteArray_const(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QByteArray_fill_char_int(void* __this_nativeId,
 char c0,
 int size1);
private extern(C) int  qtd_QByteArray_indexOf_char_int_const(void* __this_nativeId,
 char c0,
 int from1);
private extern(C) int  qtd_QByteArray_indexOf_QByteArray_int_const(void* __this_nativeId,
 void* a0,
 int from1);
private extern(C) int  qtd_QByteArray_indexOf_string_int_const(void* __this_nativeId,
 string s0,
 int from1);
private extern(C) void*  qtd_QByteArray_insert_int_char(void* __this_nativeId,
 int i0,
 char c1);
private extern(C) void*  qtd_QByteArray_insert_int_QByteArray(void* __this_nativeId,
 int i0,
 void* a1);
private extern(C) void*  qtd_QByteArray_insert_int_string(void* __this_nativeId,
 int i0,
 string s1);
private extern(C) void*  qtd_QByteArray_insert_int_nativepointerchar_int(void* __this_nativeId,
 int i0,
 const (char*) s1,
 int len2);
private extern(C) bool  qtd_QByteArray_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QByteArray_isNull_const(void* __this_nativeId);
private extern(C) bool  qtd_QByteArray_isSharedWith_QByteArray_const(void* __this_nativeId,
 void* other0);
private extern(C) int  qtd_QByteArray_lastIndexOf_char_int_const(void* __this_nativeId,
 char c0,
 int from1);
private extern(C) int  qtd_QByteArray_lastIndexOf_QByteArray_int_const(void* __this_nativeId,
 void* a0,
 int from1);
private extern(C) int  qtd_QByteArray_lastIndexOf_string_int_const(void* __this_nativeId,
 string s0,
 int from1);
private extern(C) void*  qtd_QByteArray_left_int_const(void* __this_nativeId,
 int len0);
private extern(C) void*  qtd_QByteArray_leftJustified_int_char_bool_const(void* __this_nativeId,
 int width0,
 char fill1,
 bool truncate2);
private extern(C) int  qtd_QByteArray_length_const(void* __this_nativeId);
private extern(C) void*  qtd_QByteArray_mid_int_int_const(void* __this_nativeId,
 int index0,
 int len1);
private extern(C) bool  qtd_QByteArray_operator_less_QByteArray(void* __this_nativeId,
 void* a21);
private extern(C) bool  qtd_QByteArray_operator_less_string_const(void* __this_nativeId,
 string s20);
private extern(C) void  qtd_QByteArray_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QByteArray_operator_assign_QByteArray(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QByteArray_operator_equal_QByteArray(void* __this_nativeId,
 void* a21);
private extern(C) bool  qtd_QByteArray_operator_equal_string_const(void* __this_nativeId,
 string s20);
private extern(C) void  qtd_QByteArray_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QByteArray_prepend_char(void* __this_nativeId,
 char c0);
private extern(C) void*  qtd_QByteArray_prepend_QByteArray(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QByteArray_prepend_nativepointerchar_int(void* __this_nativeId,
 const (char*) s0,
 int len1);
private extern(C) void*  qtd_QByteArray_remove_int_int(void* __this_nativeId,
 int index0,
 int len1);
private extern(C) void*  qtd_QByteArray_repeated_int_const(void* __this_nativeId,
 int times0);
private extern(C) void*  qtd_QByteArray_replace_char_char(void* __this_nativeId,
 char before0,
 char after1);
private extern(C) void*  qtd_QByteArray_replace_char_QByteArray(void* __this_nativeId,
 char before0,
 void* after1);
private extern(C) void*  qtd_QByteArray_replace_char_string(void* __this_nativeId,
 char c0,
 string after1);
private extern(C) void*  qtd_QByteArray_replace_QByteArray_QByteArray(void* __this_nativeId,
 void* before0,
 void* after1);
private extern(C) void*  qtd_QByteArray_replace_string_QByteArray(void* __this_nativeId,
 string before0,
 void* after1);
private extern(C) void*  qtd_QByteArray_replace_nativepointerchar_int_nativepointerchar_int(void* __this_nativeId,
 const (char*) before0,
 int bsize1,
 const (char*) after2,
 int asize3);
private extern(C) void*  qtd_QByteArray_replace_int_int_QByteArray(void* __this_nativeId,
 int index0,
 int len1,
 void* s2);
private extern(C) void*  qtd_QByteArray_replace_int_int_nativepointerchar_int(void* __this_nativeId,
 int index0,
 int len1,
 const (char*) s2,
 int alen3);
private extern(C) void  qtd_QByteArray_reserve_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QByteArray_resize_int(void* __this_nativeId,
 int size0);
private extern(C) void*  qtd_QByteArray_right_int_const(void* __this_nativeId,
 int len0);
private extern(C) void*  qtd_QByteArray_rightJustified_int_char_bool_const(void* __this_nativeId,
 int width0,
 char fill1,
 bool truncate2);
private extern(C) void*  qtd_QByteArray_setNum_double_char_int(void* __this_nativeId,
 double arg__1,
 char f1,
 int prec2);
private extern(C) void*  qtd_QByteArray_setNum_float_char_int(void* __this_nativeId,
 float arg__1,
 char f1,
 int prec2);
private extern(C) void*  qtd_QByteArray_setNum_int_int(void* __this_nativeId,
 int arg__1,
 int base1);
private extern(C) void*  qtd_QByteArray_setNum_short_int(void* __this_nativeId,
 short arg__1,
 int base1);
private extern(C) void*  qtd_QByteArray_setRawData_nativepointerchar_uint(void* __this_nativeId,
 const (char*) a0,
 uint n1);
private extern(C) void*  qtd_QByteArray_simplified_const(void* __this_nativeId);
private extern(C) int  qtd_QByteArray_size_const(void* __this_nativeId);
private extern(C) void  qtd_QByteArray_split_char_const(void* __this_nativeId,
 void* __d_return_value,
 char sep0);
private extern(C) void  qtd_QByteArray_squeeze(void* __this_nativeId);
private extern(C) bool  qtd_QByteArray_startsWith_char_const(void* __this_nativeId,
 char c0);
private extern(C) bool  qtd_QByteArray_startsWith_QByteArray_const(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QByteArray_toBase64_const(void* __this_nativeId);
private extern(C) double  qtd_QByteArray_toDouble_nativepointerbool_const(void* __this_nativeId,
 bool* ok0);
private extern(C) float  qtd_QByteArray_toFloat_nativepointerbool_const(void* __this_nativeId,
 bool* ok0);
private extern(C) void*  qtd_QByteArray_toHex_const(void* __this_nativeId);
private extern(C) int  qtd_QByteArray_toInt_nativepointerbool_int_const(void* __this_nativeId,
 bool* ok0,
 int base1);
private extern(C) void*  qtd_QByteArray_toLower_const(void* __this_nativeId);
private extern(C) void*  qtd_QByteArray_toPercentEncoding_QByteArray_QByteArray_char_const(void* __this_nativeId,
 void* exclude0,
 void* include1,
 char percent2);
private extern(C) void*  qtd_QByteArray_toUpper_const(void* __this_nativeId);
private extern(C) void*  qtd_QByteArray_trimmed_const(void* __this_nativeId);
private extern(C) void  qtd_QByteArray_truncate_int(void* __this_nativeId,
 int pos0);
private extern(C) void*  qtd_QByteArray_fromBase64_QByteArray(void* base640);
private extern(C) void*  qtd_QByteArray_fromHex_QByteArray(void* hexEncoded0);
private extern(C) void*  qtd_QByteArray_fromPercentEncoding_QByteArray_char(void* pctEncoded0,
 char percent1);
private extern(C) void*  qtd_QByteArray_number_double_char_int(double arg__1,
 char f1,
 int prec2);
private extern(C) void*  qtd_QByteArray_number_int_int(int arg__1,
 int base1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QByteArray() {
    QByteArray.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QByteArray_QTypeInfo_isComplex();
private extern (C) bool qtd_QByteArray_QTypeInfo_isStatic();
private extern (C) bool qtd_QByteArray_QTypeInfo_isLarge();
private extern (C) bool qtd_QByteArray_QTypeInfo_isPointer();
private extern (C) bool qtd_QByteArray_QTypeInfo_isDummy();
