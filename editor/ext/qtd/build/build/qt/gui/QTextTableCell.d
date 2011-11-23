module qt.gui.QTextTableCell;

public import qt.gui.QTextTableCell_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextCursor;
public import qt.gui.QTextFrame_iterator;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextTableCell : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextTableCell_QTextTableCell();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextTableCell) o) {
        void* ret = qtd_QTextTableCell_QTextTableCell_QTextTableCell(o is null ? null : (cast(QTextTableCell)o).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTextFrame_iterator begin() const {
        void* ret = qtd_QTextTableCell_begin_const(qtdNativeId);
        QTextFrame_iterator __d_return_value = new QTextFrame_iterator(ret);
        return __d_return_value;
    }

    public final int column() const {
        return qtd_QTextTableCell_column_const(qtdNativeId);
    }

    public final int columnSpan() const {
        return qtd_QTextTableCell_columnSpan_const(qtdNativeId);
    }

    public final QTextFrame_iterator end() const {
        void* ret = qtd_QTextTableCell_end_const(qtdNativeId);
        QTextFrame_iterator __d_return_value = new QTextFrame_iterator(ret);
        return __d_return_value;
    }

    public final QTextCursor firstCursorPosition() const {
        void* ret = qtd_QTextTableCell_firstCursorPosition_const(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int firstPosition() const {
        return qtd_QTextTableCell_firstPosition_const(qtdNativeId);
    }

    public final QTextCharFormat format() const {
        void* ret = qtd_QTextTableCell_format_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final bool isValid() const {
        return qtd_QTextTableCell_isValid_const(qtdNativeId);
    }

    public final QTextCursor lastCursorPosition() const {
        void* ret = qtd_QTextTableCell_lastCursorPosition_const(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final int lastPosition() const {
        return qtd_QTextTableCell_lastPosition_const(qtdNativeId);
    }

    private final bool operator_equal(const(QTextTableCell) other) const {
        return qtd_QTextTableCell_operator_equal_QTextTableCell_const(qtdNativeId, other is null ? null : (cast(QTextTableCell)other).qtdNativeId);
    }

    public final int row() const {
        return qtd_QTextTableCell_row_const(qtdNativeId);
    }

    public final int rowSpan() const {
        return qtd_QTextTableCell_rowSpan_const(qtdNativeId);
    }

    public final void setFormat(const(QTextCharFormat) format) {
        qtd_QTextTableCell_setFormat_QTextCharFormat(qtdNativeId, format is null ? null : (cast(QTextCharFormat)format).qtdNativeId);
    }

    public final int tableCellFormatIndex() const {
        return qtd_QTextTableCell_tableCellFormatIndex_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextTableCell;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextTableCell_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextTableCell_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextTableCell_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextTableCell_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextTableCell_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextTableCell_QTypeInfo_isComplex();
        isStatic = qtd_QTextTableCell_QTypeInfo_isStatic();
        isLarge = qtd_QTextTableCell_QTypeInfo_isLarge();
        isPointer = qtd_QTextTableCell_QTypeInfo_isPointer();
        isDummy = qtd_QTextTableCell_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextTableCell_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextTableCell_native_copy(const void* orig);
extern (C) void qtd_QTextTableCell_delete(void *ptr);
extern (C) void qtd_QTextTableCell_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextTableCell_QTextTableCell();
private extern(C) void* qtd_QTextTableCell_QTextTableCell_QTextTableCell(void* o0);
private extern(C) void*  qtd_QTextTableCell_begin_const(void* __this_nativeId);
private extern(C) int  qtd_QTextTableCell_column_const(void* __this_nativeId);
private extern(C) int  qtd_QTextTableCell_columnSpan_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextTableCell_end_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextTableCell_firstCursorPosition_const(void* __this_nativeId);
private extern(C) int  qtd_QTextTableCell_firstPosition_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextTableCell_format_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextTableCell_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextTableCell_lastCursorPosition_const(void* __this_nativeId);
private extern(C) int  qtd_QTextTableCell_lastPosition_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextTableCell_operator_equal_QTextTableCell_const(void* __this_nativeId,
 void* other0);
private extern(C) int  qtd_QTextTableCell_row_const(void* __this_nativeId);
private extern(C) int  qtd_QTextTableCell_rowSpan_const(void* __this_nativeId);
private extern(C) void  qtd_QTextTableCell_setFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) int  qtd_QTextTableCell_tableCellFormatIndex_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextTableCell() {
    QTextTableCell.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextTableCell_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextTableCell_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextTableCell_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextTableCell_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextTableCell_QTypeInfo_isDummy();
