module qt.gui.QTextTableFormat;

public import qt.gui.QTextTableFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextLength;
public import qt.gui.QTextFrameFormat;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextTableFormat : QTextFrameFormat
{

// Functions

    public this() {
        void* ret = qtd_QTextTableFormat_QTextTableFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(const(QTextFormat) fmt) {
        void* ret = qtd_QTextTableFormat_QTextTableFormat_QTextFormat(fmt is null ? null : (cast(QTextFormat)fmt).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QTextTableFormat_alignment_const(qtdNativeId);
    }

    public final double cellPadding() const {
        return qtd_QTextTableFormat_cellPadding_const(qtdNativeId);
    }

    public final double cellSpacing() const {
        return qtd_QTextTableFormat_cellSpacing_const(qtdNativeId);
    }

    public final void clearColumnWidthConstraints() {
        qtd_QTextTableFormat_clearColumnWidthConstraints(qtdNativeId);
    }

    public final QTextLength[] columnWidthConstraints() const {
        QTextLength[] res;
        qtd_QTextTableFormat_columnWidthConstraints_const(qtdNativeId, &res);
        return res;
    }

    public final int columns() const {
        return qtd_QTextTableFormat_columns_const(qtdNativeId);
    }

    public final int headerRowCount() const {
        return qtd_QTextTableFormat_headerRowCount_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextTableFormat_isValid_const(qtdNativeId);
    }

    public final void setAlignment(int alignment) {
        qtd_QTextTableFormat_setAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setCellPadding(double padding) {
        qtd_QTextTableFormat_setCellPadding_double(qtdNativeId, padding);
    }

    public final void setCellSpacing(double spacing) {
        qtd_QTextTableFormat_setCellSpacing_double(qtdNativeId, spacing);
    }

    public final void setColumnWidthConstraints(QTextLength[] constraints) {
        qtd_QTextTableFormat_setColumnWidthConstraints_QVector(qtdNativeId, &constraints);
    }

    public final void setColumns(int columns) {
        qtd_QTextTableFormat_setColumns_int(qtdNativeId, columns);
    }

    public final void setHeaderRowCount(int count) {
        qtd_QTextTableFormat_setHeaderRowCount_int(qtdNativeId, count);
    }
// Field accessors
    public alias void __isQtType_QTextTableFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextTableFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextTableFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextTableFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextTableFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextTableFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextTableFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextTableFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextTableFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextTableFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextTableFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextTableFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextTableFormat_native_copy(const void* orig);
extern (C) void qtd_QTextTableFormat_delete(void *ptr);
extern (C) void qtd_QTextTableFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextTableFormat_QTextTableFormat();
private extern(C) void* qtd_QTextTableFormat_QTextTableFormat_QTextFormat(void* fmt0);
private extern(C) int  qtd_QTextTableFormat_alignment_const(void* __this_nativeId);
private extern(C) double  qtd_QTextTableFormat_cellPadding_const(void* __this_nativeId);
private extern(C) double  qtd_QTextTableFormat_cellSpacing_const(void* __this_nativeId);
private extern(C) void  qtd_QTextTableFormat_clearColumnWidthConstraints(void* __this_nativeId);
private extern(C) void  qtd_QTextTableFormat_columnWidthConstraints_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QTextTableFormat_columns_const(void* __this_nativeId);
private extern(C) int  qtd_QTextTableFormat_headerRowCount_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextTableFormat_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QTextTableFormat_setAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QTextTableFormat_setCellPadding_double(void* __this_nativeId,
 double padding0);
private extern(C) void  qtd_QTextTableFormat_setCellSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) void  qtd_QTextTableFormat_setColumnWidthConstraints_QVector(void* __this_nativeId,
 DArray* constraints0);
private extern(C) void  qtd_QTextTableFormat_setColumns_int(void* __this_nativeId,
 int columns0);
private extern(C) void  qtd_QTextTableFormat_setHeaderRowCount_int(void* __this_nativeId,
 int count0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextTableFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QTextTableFormat() {
    QTextTableFormat.QTypeInfo.init();
    qtd_QTextTableFormat_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextTableFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextTableFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextTableFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextTableFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextTableFormat_QTypeInfo_isDummy();
