module qt.core.QBitArray;

public import qt.core.QBitArray_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QBitArray : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QBitArray_QBitArray();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QBitArray) other) {
        void* ret = qtd_QBitArray_QBitArray_QBitArray(other is null ? null : (cast(QBitArray)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int size, bool val = false) {
        void* ret = qtd_QBitArray_QBitArray_int_bool(size, val);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool at(int i) const {
        return qtd_QBitArray_at_int_const(qtdNativeId, i);
    }

    public final void clear() {
        qtd_QBitArray_clear(qtdNativeId);
    }

    public final void clearBit(int i) {
        qtd_QBitArray_clearBit_int(qtdNativeId, i);
    }

    public final int count() const {
        return qtd_QBitArray_count_const(qtdNativeId);
    }

    public final int count(bool on) const {
        return qtd_QBitArray_count_bool_const(qtdNativeId, on);
    }

    public final void fill(bool val, int first, int last) {
        qtd_QBitArray_fill_bool_int_int(qtdNativeId, val, first, last);
    }

    public final bool fill(bool val, int size = -1) {
        return qtd_QBitArray_fill_bool_int(qtdNativeId, val, size);
    }

    public final bool isEmpty() const {
        return qtd_QBitArray_isEmpty_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QBitArray_isNull_const(qtdNativeId);
    }

    private final QBitArray operator_and_assign(const(QBitArray) arg__1) {
        void* ret = qtd_QBitArray_operator_and_assign_QBitArray(qtdNativeId, arg__1 is null ? null : (cast(QBitArray)arg__1).qtdNativeId);
        QBitArray __d_return_value = new QBitArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QBitArray_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final QBitArray operator_assign(const(QBitArray) other) {
        void* ret = qtd_QBitArray_operator_assign_QBitArray(qtdNativeId, other is null ? null : (cast(QBitArray)other).qtdNativeId);
        QBitArray __d_return_value = new QBitArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final bool operator_equal(const(QBitArray) a) const {
        return qtd_QBitArray_operator_equal_QBitArray_const(qtdNativeId, a is null ? null : (cast(QBitArray)a).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QBitArray_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final QBitArray operator_xor_assign(const(QBitArray) arg__1) {
        void* ret = qtd_QBitArray_operator_xor_assign_QBitArray(qtdNativeId, arg__1 is null ? null : (cast(QBitArray)arg__1).qtdNativeId);
        QBitArray __d_return_value = new QBitArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QBitArray operator_or_assign(const(QBitArray) arg__1) {
        void* ret = qtd_QBitArray_operator_or_assign_QBitArray(qtdNativeId, arg__1 is null ? null : (cast(QBitArray)arg__1).qtdNativeId);
        QBitArray __d_return_value = new QBitArray(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QBitArray operator_negate() const {
        void* ret = qtd_QBitArray_operator_negate_const(qtdNativeId);
        QBitArray __d_return_value = new QBitArray(ret);
        return __d_return_value;
    }

    public final void resize(int size) {
        qtd_QBitArray_resize_int(qtdNativeId, size);
    }

    public final void setBit(int i) {
        qtd_QBitArray_setBit_int(qtdNativeId, i);
    }

    public final void setBit(int i, bool val) {
        qtd_QBitArray_setBit_int_bool(qtdNativeId, i, val);
    }

    public final int size() const {
        return qtd_QBitArray_size_const(qtdNativeId);
    }

    public final bool testBit(int i) const {
        return qtd_QBitArray_testBit_int_const(qtdNativeId, i);
    }

    public final bool toggleBit(int i) {
        return qtd_QBitArray_toggleBit_int(qtdNativeId, i);
    }

    public final void truncate(int pos) {
        qtd_QBitArray_truncate_int(qtdNativeId, pos);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QBitArray;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QBitArray_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QBitArray_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QBitArray_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QBitArray_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QBitArray_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QBitArray_QTypeInfo_isComplex();
        isStatic = qtd_QBitArray_QTypeInfo_isStatic();
        isLarge = qtd_QBitArray_QTypeInfo_isLarge();
        isPointer = qtd_QBitArray_QTypeInfo_isPointer();
        isDummy = qtd_QBitArray_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    @qt.QtBlockedSlot
    public final void xor(QBitArray other) {
    operator_xor_assign(other);
    }

    @qt.QtBlockedSlot
    public final void and(QBitArray other) {
    operator_and_assign(other);
    }

    @qt.QtBlockedSlot
    public final void or(QBitArray other) {
    operator_or_assign(other);
    }

    @qt.QtBlockedSlot
    public final void set(QBitArray other) {
    operator_assign(other);
    }

    @qt.QtBlockedSlot
    public final QBitArray inverted() {
    return operator_negate();
    }
     */

}
private extern(C) void qtd_QBitArray_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QBitArray_native_copy(const void* orig);
extern (C) void qtd_QBitArray_delete(void *ptr);
extern (C) void qtd_QBitArray_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QBitArray_QBitArray();
private extern(C) void* qtd_QBitArray_QBitArray_QBitArray(void* other0);
private extern(C) void* qtd_QBitArray_QBitArray_int_bool(int size0,
 bool val1);
private extern(C) bool  qtd_QBitArray_at_int_const(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QBitArray_clear(void* __this_nativeId);
private extern(C) void  qtd_QBitArray_clearBit_int(void* __this_nativeId,
 int i0);
private extern(C) int  qtd_QBitArray_count_const(void* __this_nativeId);
private extern(C) int  qtd_QBitArray_count_bool_const(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QBitArray_fill_bool_int_int(void* __this_nativeId,
 bool val0,
 int first1,
 int last2);
private extern(C) bool  qtd_QBitArray_fill_bool_int(void* __this_nativeId,
 bool val0,
 int size1);
private extern(C) bool  qtd_QBitArray_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QBitArray_isNull_const(void* __this_nativeId);
private extern(C) void*  qtd_QBitArray_operator_and_assign_QBitArray(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QBitArray_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QBitArray_operator_assign_QBitArray(void* __this_nativeId,
 void* other0);
private extern(C) bool  qtd_QBitArray_operator_equal_QBitArray_const(void* __this_nativeId,
 void* a0);
private extern(C) void  qtd_QBitArray_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QBitArray_operator_xor_assign_QBitArray(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QBitArray_operator_or_assign_QBitArray(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QBitArray_operator_negate_const(void* __this_nativeId);
private extern(C) void  qtd_QBitArray_resize_int(void* __this_nativeId,
 int size0);
private extern(C) void  qtd_QBitArray_setBit_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QBitArray_setBit_int_bool(void* __this_nativeId,
 int i0,
 bool val1);
private extern(C) int  qtd_QBitArray_size_const(void* __this_nativeId);
private extern(C) bool  qtd_QBitArray_testBit_int_const(void* __this_nativeId,
 int i0);
private extern(C) bool  qtd_QBitArray_toggleBit_int(void* __this_nativeId,
 int i0);
private extern(C) void  qtd_QBitArray_truncate_int(void* __this_nativeId,
 int pos0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QBitArray() {
    QBitArray.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QBitArray_QTypeInfo_isComplex();
private extern (C) bool qtd_QBitArray_QTypeInfo_isStatic();
private extern (C) bool qtd_QBitArray_QTypeInfo_isLarge();
private extern (C) bool qtd_QBitArray_QTypeInfo_isPointer();
private extern (C) bool qtd_QBitArray_QTypeInfo_isDummy();
