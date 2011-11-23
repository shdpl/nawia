module qt.gui.QTableWidgetSelectionRange;

public import qt.gui.QTableWidgetSelectionRange_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTableWidgetSelectionRange : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTableWidgetSelectionRange) other) {
        void* ret = qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange_QTableWidgetSelectionRange(other is null ? null : (cast(QTableWidgetSelectionRange)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int top, int left, int bottom, int right) {
        void* ret = qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange_int_int_int_int(top, left, bottom, right);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int bottomRow() const {
        return qtd_QTableWidgetSelectionRange_bottomRow_const(qtdNativeId);
    }

    public final int columnCount() const {
        return qtd_QTableWidgetSelectionRange_columnCount_const(qtdNativeId);
    }

    public final int leftColumn() const {
        return qtd_QTableWidgetSelectionRange_leftColumn_const(qtdNativeId);
    }

    public final int rightColumn() const {
        return qtd_QTableWidgetSelectionRange_rightColumn_const(qtdNativeId);
    }

    public final int rowCount() const {
        return qtd_QTableWidgetSelectionRange_rowCount_const(qtdNativeId);
    }

    public final int topRow() const {
        return qtd_QTableWidgetSelectionRange_topRow_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTableWidgetSelectionRange;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTableWidgetSelectionRange_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTableWidgetSelectionRange_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTableWidgetSelectionRange_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTableWidgetSelectionRange_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTableWidgetSelectionRange_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTableWidgetSelectionRange_QTypeInfo_isComplex();
        isStatic = qtd_QTableWidgetSelectionRange_QTypeInfo_isStatic();
        isLarge = qtd_QTableWidgetSelectionRange_QTypeInfo_isLarge();
        isPointer = qtd_QTableWidgetSelectionRange_QTypeInfo_isPointer();
        isDummy = qtd_QTableWidgetSelectionRange_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTableWidgetSelectionRange_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTableWidgetSelectionRange_native_copy(const void* orig);
extern (C) void qtd_QTableWidgetSelectionRange_delete(void *ptr);
extern (C) void qtd_QTableWidgetSelectionRange_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange();
private extern(C) void* qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange_QTableWidgetSelectionRange(void* other0);
private extern(C) void* qtd_QTableWidgetSelectionRange_QTableWidgetSelectionRange_int_int_int_int(int top0,
 int left1,
 int bottom2,
 int right3);
private extern(C) int  qtd_QTableWidgetSelectionRange_bottomRow_const(void* __this_nativeId);
private extern(C) int  qtd_QTableWidgetSelectionRange_columnCount_const(void* __this_nativeId);
private extern(C) int  qtd_QTableWidgetSelectionRange_leftColumn_const(void* __this_nativeId);
private extern(C) int  qtd_QTableWidgetSelectionRange_rightColumn_const(void* __this_nativeId);
private extern(C) int  qtd_QTableWidgetSelectionRange_rowCount_const(void* __this_nativeId);
private extern(C) int  qtd_QTableWidgetSelectionRange_topRow_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTableWidgetSelectionRange() {
    QTableWidgetSelectionRange.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTableWidgetSelectionRange_QTypeInfo_isComplex();
private extern (C) bool qtd_QTableWidgetSelectionRange_QTypeInfo_isStatic();
private extern (C) bool qtd_QTableWidgetSelectionRange_QTypeInfo_isLarge();
private extern (C) bool qtd_QTableWidgetSelectionRange_QTypeInfo_isPointer();
private extern (C) bool qtd_QTableWidgetSelectionRange_QTypeInfo_isDummy();
