module qt.core.QPersistentModelIndex;

public import qt.core.QPersistentModelIndex_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QVariant;
public import qt.core.QModelIndex;
public import qt.core.QAbstractItemModel;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPersistentModelIndex : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPersistentModelIndex_QPersistentModelIndex();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QModelIndex) index) {
        void* ret = qtd_QPersistentModelIndex_QPersistentModelIndex_QModelIndex(index);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPersistentModelIndex) other) {
        void* ret = qtd_QPersistentModelIndex_QPersistentModelIndex_QPersistentModelIndex(other is null ? null : (cast(QPersistentModelIndex)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QModelIndex child(int row, int column) const {
        QModelIndex res;
        qtd_QPersistentModelIndex_child_int_int_const(qtdNativeId, &res, row, column);
        return res;
    }

    public final int column() const {
        return qtd_QPersistentModelIndex_column_const(qtdNativeId);
    }

    public final QVariant data(int role = 0) const {
        void* ret = qtd_QPersistentModelIndex_data_int_const(qtdNativeId, role);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final int flags() const {
        return qtd_QPersistentModelIndex_flags_const(qtdNativeId);
    }

    public final long internalId() const {
        return qtd_QPersistentModelIndex_internalId_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QPersistentModelIndex_isValid_const(qtdNativeId);
    }

    public final QAbstractItemModel model() const {
        void *ret = qtd_QPersistentModelIndex_model_const(qtdNativeId);
        QAbstractItemModel __d_return_value = QAbstractItemModel.__getObject(ret);
        return __d_return_value;
    }

    private final bool operator_less(const(QPersistentModelIndex) other) const {
        return qtd_QPersistentModelIndex_operator_less_QPersistentModelIndex_const(qtdNativeId, other is null ? null : (cast(QPersistentModelIndex)other).qtdNativeId);
    }

    private final bool operator_equal(const(QModelIndex) other) const {
        return qtd_QPersistentModelIndex_operator_equal_QModelIndex_const(qtdNativeId, other);
    }

    private final bool operator_equal(const(QPersistentModelIndex) other) const {
        return qtd_QPersistentModelIndex_operator_equal_QPersistentModelIndex_const(qtdNativeId, other is null ? null : (cast(QPersistentModelIndex)other).qtdNativeId);
    }

    public final QModelIndex parent() const {
        QModelIndex res;
        qtd_QPersistentModelIndex_parent_const(qtdNativeId, &res);
        return res;
    }

    public final int row() const {
        return qtd_QPersistentModelIndex_row_const(qtdNativeId);
    }

    public final QModelIndex sibling(int row, int column) const {
        QModelIndex res;
        qtd_QPersistentModelIndex_sibling_int_int_const(qtdNativeId, &res, row, column);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPersistentModelIndex;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPersistentModelIndex_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPersistentModelIndex_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPersistentModelIndex_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPersistentModelIndex_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPersistentModelIndex_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPersistentModelIndex_QTypeInfo_isComplex();
        isStatic = qtd_QPersistentModelIndex_QTypeInfo_isStatic();
        isLarge = qtd_QPersistentModelIndex_QTypeInfo_isLarge();
        isPointer = qtd_QPersistentModelIndex_QTypeInfo_isPointer();
        isDummy = qtd_QPersistentModelIndex_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QPersistentModelIndex_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPersistentModelIndex_native_copy(const void* orig);
extern (C) void qtd_QPersistentModelIndex_delete(void *ptr);
extern (C) void qtd_QPersistentModelIndex_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPersistentModelIndex_QPersistentModelIndex();
private extern(C) void* qtd_QPersistentModelIndex_QPersistentModelIndex_QModelIndex(const(QModelIndexAccessor) index0);
private extern(C) void* qtd_QPersistentModelIndex_QPersistentModelIndex_QPersistentModelIndex(void* other0);
private extern(C) void  qtd_QPersistentModelIndex_child_int_int_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1);
private extern(C) int  qtd_QPersistentModelIndex_column_const(void* __this_nativeId);
private extern(C) void*  qtd_QPersistentModelIndex_data_int_const(void* __this_nativeId,
 int role0);
private extern(C) int  qtd_QPersistentModelIndex_flags_const(void* __this_nativeId);
private extern(C) long  qtd_QPersistentModelIndex_internalId_const(void* __this_nativeId);
private extern(C) bool  qtd_QPersistentModelIndex_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QPersistentModelIndex_model_const(void* __this_nativeId);
private extern(C) bool  qtd_QPersistentModelIndex_operator_less_QPersistentModelIndex_const(void* __this_nativeId,
 void* other0);
private extern(C) bool  qtd_QPersistentModelIndex_operator_equal_QModelIndex_const(void* __this_nativeId,
 const(QModelIndexAccessor) other0);
private extern(C) bool  qtd_QPersistentModelIndex_operator_equal_QPersistentModelIndex_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QPersistentModelIndex_parent_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value);
private extern(C) int  qtd_QPersistentModelIndex_row_const(void* __this_nativeId);
private extern(C) void  qtd_QPersistentModelIndex_sibling_int_int_const(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QPersistentModelIndex() {
    QPersistentModelIndex.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QPersistentModelIndex_QTypeInfo_isComplex();
private extern (C) bool qtd_QPersistentModelIndex_QTypeInfo_isStatic();
private extern (C) bool qtd_QPersistentModelIndex_QTypeInfo_isLarge();
private extern (C) bool qtd_QPersistentModelIndex_QTypeInfo_isPointer();
private extern (C) bool qtd_QPersistentModelIndex_QTypeInfo_isDummy();
