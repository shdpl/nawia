module qt.gui.QItemSelectionRange;

public import qt.gui.QItemSelectionRange_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.core.QModelIndex;
public import qt.core.QAbstractItemModel;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QItemSelectionRange : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QItemSelectionRange_QItemSelectionRange();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QItemSelectionRange) other) {
        void* ret = qtd_QItemSelectionRange_QItemSelectionRange_QItemSelectionRange(other is null ? null : (cast(QItemSelectionRange)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QModelIndex) index) {
        void* ret = qtd_QItemSelectionRange_QItemSelectionRange_QModelIndex(index);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QModelIndex) topLeft, const(QModelIndex) bottomRight) {
        void* ret = qtd_QItemSelectionRange_QItemSelectionRange_QModelIndex_QModelIndex(topLeft, bottomRight);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int bottom() const {
        return qtd_QItemSelectionRange_bottom_const(qtdNativeId);
    }

    public final QModelIndex bottomRight() const {
        QModelIndex res;
        qtd_QItemSelectionRange_bottomRight_const(qtdNativeId, &res);
        return res;
    }

    public final bool contains(const(QModelIndex) index) const {
        return qtd_QItemSelectionRange_contains_QModelIndex_const(qtdNativeId, index);
    }

    public final bool contains(int row, int column, const(QModelIndex) parentIndex) const {
        return qtd_QItemSelectionRange_contains_int_int_QModelIndex_const(qtdNativeId, row, column, parentIndex);
    }

    public final int height() const {
        return qtd_QItemSelectionRange_height_const(qtdNativeId);
    }

    public final QList!(QModelIndex) indexes() const {
        auto res = QList!(QModelIndex).opCall();
        qtd_QItemSelectionRange_indexes_const(qtdNativeId, &res);
        return res;
    }

    public final QItemSelectionRange intersected(const(QItemSelectionRange) other) const {
        void* ret = qtd_QItemSelectionRange_intersected_QItemSelectionRange_const(qtdNativeId, other is null ? null : (cast(QItemSelectionRange)other).qtdNativeId);
        QItemSelectionRange __d_return_value = new QItemSelectionRange(ret);
        return __d_return_value;
    }

    public final bool intersects(const(QItemSelectionRange) other) const {
        return qtd_QItemSelectionRange_intersects_QItemSelectionRange_const(qtdNativeId, other is null ? null : (cast(QItemSelectionRange)other).qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QItemSelectionRange_isEmpty_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QItemSelectionRange_isValid_const(qtdNativeId);
    }

    public final int left() const {
        return qtd_QItemSelectionRange_left_const(qtdNativeId);
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QItemSelectionRange_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    private final bool operator_equal(const(QItemSelectionRange) other) const {
        return qtd_QItemSelectionRange_operator_equal_QItemSelectionRange_const(qtdNativeId, other is null ? null : (cast(QItemSelectionRange)other).qtdNativeId);
    }

    public final QModelIndex parent() const {
        QModelIndex res;
        qtd_QItemSelectionRange_parent_const(qtdNativeId, &res);
        return res;
    }

    public final int right() const {
        return qtd_QItemSelectionRange_right_const(qtdNativeId);
    }

    public final int top() const {
        return qtd_QItemSelectionRange_top_const(qtdNativeId);
    }

    public final QModelIndex topLeft() const {
        QModelIndex res;
        qtd_QItemSelectionRange_topLeft_const(qtdNativeId, &res);
        return res;
    }

    public final int width() const {
        return qtd_QItemSelectionRange_width_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QItemSelectionRange;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QItemSelectionRange_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QItemSelectionRange_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QItemSelectionRange_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QItemSelectionRange_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QItemSelectionRange_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QItemSelectionRange_QTypeInfo_isComplex();
        isStatic = qtd_QItemSelectionRange_QTypeInfo_isStatic();
        isLarge = qtd_QItemSelectionRange_QTypeInfo_isLarge();
        isPointer = qtd_QItemSelectionRange_QTypeInfo_isPointer();
        isDummy = qtd_QItemSelectionRange_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QItemSelectionRange_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QItemSelectionRange_native_copy(const void* orig);
extern (C) void qtd_QItemSelectionRange_delete(void *ptr);
extern (C) void qtd_QItemSelectionRange_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QItemSelectionRange_QItemSelectionRange();
private extern(C) void* qtd_QItemSelectionRange_QItemSelectionRange_QItemSelectionRange(void* other0);
private extern(C) void* qtd_QItemSelectionRange_QItemSelectionRange_QModelIndex(const(QModelIndexAccessor) index0);
private extern(C) void* qtd_QItemSelectionRange_QItemSelectionRange_QModelIndex_QModelIndex(const(QModelIndexAccessor) topLeft0,
 const(QModelIndexAccessor) bottomRight1);
private extern(C) int  qtd_QItemSelectionRange_bottom_const(void* __this_nativeId);
private extern(C) void  qtd_QItemSelectionRange_bottomRight_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) bool  qtd_QItemSelectionRange_contains_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) index0);
private extern(C) bool  qtd_QItemSelectionRange_contains_int_int_QModelIndex_const(void* __this_nativeId,
 int row0,
 int column1,
 const(QModelIndexAccessor) parentIndex2);
private extern(C) int  qtd_QItemSelectionRange_height_const(void* __this_nativeId);
private extern(C) void  qtd_QItemSelectionRange_indexes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QItemSelectionRange_intersected_QItemSelectionRange_const(void* __this_nativeId,
 void* other0);
private extern(C) bool  qtd_QItemSelectionRange_intersects_QItemSelectionRange_const(void* __this_nativeId,
 void* other0);
private extern(C) bool  qtd_QItemSelectionRange_isEmpty_const(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelectionRange_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QItemSelectionRange_left_const(void* __this_nativeId);
private extern(C) void*  qtd_QItemSelectionRange_model_const(void* __this_nativeId);
private extern(C) bool  qtd_QItemSelectionRange_operator_equal_QItemSelectionRange_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QItemSelectionRange_parent_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) int  qtd_QItemSelectionRange_right_const(void* __this_nativeId);
private extern(C) int  qtd_QItemSelectionRange_top_const(void* __this_nativeId);
private extern(C) void  qtd_QItemSelectionRange_topLeft_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) int  qtd_QItemSelectionRange_width_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QItemSelectionRange() {
    QItemSelectionRange.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QItemSelectionRange_QTypeInfo_isComplex();
private extern (C) bool qtd_QItemSelectionRange_QTypeInfo_isStatic();
private extern (C) bool qtd_QItemSelectionRange_QTypeInfo_isLarge();
private extern (C) bool qtd_QItemSelectionRange_QTypeInfo_isPointer();
private extern (C) bool qtd_QItemSelectionRange_QTypeInfo_isDummy();
