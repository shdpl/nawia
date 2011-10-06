module qt.gui.QTextTableCellFormat;

public import qt.gui.QTextTableCellFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextTableCellFormat : QTextCharFormat
{

// Functions

    public this() {
        void* ret = qtd_QTextTableCellFormat_QTextTableCellFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(const(QTextFormat) fmt) {
        void* ret = qtd_QTextTableCellFormat_QTextTableCellFormat_QTextFormat(fmt is null ? null : (cast(QTextFormat)fmt).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double bottomPadding() const {
        return qtd_QTextTableCellFormat_bottomPadding_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextTableCellFormat_isValid_const(qtdNativeId);
    }

    public final double leftPadding() const {
        return qtd_QTextTableCellFormat_leftPadding_const(qtdNativeId);
    }

    public final double rightPadding() const {
        return qtd_QTextTableCellFormat_rightPadding_const(qtdNativeId);
    }

    public final void setBottomPadding(double padding) {
        qtd_QTextTableCellFormat_setBottomPadding_double(qtdNativeId, padding);
    }

    public final void setLeftPadding(double padding) {
        qtd_QTextTableCellFormat_setLeftPadding_double(qtdNativeId, padding);
    }

    public final void setPadding(double padding) {
        qtd_QTextTableCellFormat_setPadding_double(qtdNativeId, padding);
    }

    public final void setRightPadding(double padding) {
        qtd_QTextTableCellFormat_setRightPadding_double(qtdNativeId, padding);
    }

    public final void setTopPadding(double padding) {
        qtd_QTextTableCellFormat_setTopPadding_double(qtdNativeId, padding);
    }

    public final double topPadding() const {
        return qtd_QTextTableCellFormat_topPadding_const(qtdNativeId);
    }
// Field accessors
    public alias void __isQtType_QTextTableCellFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextTableCellFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextTableCellFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextTableCellFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextTableCellFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextTableCellFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextTableCellFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextTableCellFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextTableCellFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextTableCellFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextTableCellFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextTableCellFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextTableCellFormat_native_copy(const void* orig);
extern (C) void qtd_QTextTableCellFormat_delete(void *ptr);
extern (C) void qtd_QTextTableCellFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextTableCellFormat_QTextTableCellFormat();
private extern(C) void* qtd_QTextTableCellFormat_QTextTableCellFormat_QTextFormat(void* fmt0);
private extern(C) double  qtd_QTextTableCellFormat_bottomPadding_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextTableCellFormat_isValid_const(void* __this_nativeId);
private extern(C) double  qtd_QTextTableCellFormat_leftPadding_const(void* __this_nativeId);
private extern(C) double  qtd_QTextTableCellFormat_rightPadding_const(void* __this_nativeId);
private extern(C) void  qtd_QTextTableCellFormat_setBottomPadding_double(void* __this_nativeId,
 double padding0);
private extern(C) void  qtd_QTextTableCellFormat_setLeftPadding_double(void* __this_nativeId,
 double padding0);
private extern(C) void  qtd_QTextTableCellFormat_setPadding_double(void* __this_nativeId,
 double padding0);
private extern(C) void  qtd_QTextTableCellFormat_setRightPadding_double(void* __this_nativeId,
 double padding0);
private extern(C) void  qtd_QTextTableCellFormat_setTopPadding_double(void* __this_nativeId,
 double padding0);
private extern(C) double  qtd_QTextTableCellFormat_topPadding_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextTableCellFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QTextTableCellFormat() {
    QTextTableCellFormat.QTypeInfo.init();
    qtd_QTextTableCellFormat_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextTableCellFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextTableCellFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextTableCellFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextTableCellFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextTableCellFormat_QTypeInfo_isDummy();
