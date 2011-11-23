module qt.gui.QTextBlockFormat;

public import qt.gui.QTextBlockFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.gui.QTextOption_Tab;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextBlockFormat : QTextFormat
{

// Functions

    public this() {
        void* ret = qtd_QTextBlockFormat_QTextBlockFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(const(QTextFormat) fmt) {
        void* ret = qtd_QTextBlockFormat_QTextBlockFormat_QTextFormat(fmt is null ? null : (cast(QTextFormat)fmt).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QTextBlockFormat_alignment_const(qtdNativeId);
    }

    public final double bottomMargin() const {
        return qtd_QTextBlockFormat_bottomMargin_const(qtdNativeId);
    }

    public final int indent() const {
        return qtd_QTextBlockFormat_indent_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextBlockFormat_isValid_const(qtdNativeId);
    }

    public final double leftMargin() const {
        return qtd_QTextBlockFormat_leftMargin_const(qtdNativeId);
    }

    public final bool nonBreakableLines() const {
        return qtd_QTextBlockFormat_nonBreakableLines_const(qtdNativeId);
    }

    public final int pageBreakPolicy() const {
        return qtd_QTextBlockFormat_pageBreakPolicy_const(qtdNativeId);
    }

    public final double rightMargin() const {
        return qtd_QTextBlockFormat_rightMargin_const(qtdNativeId);
    }

    public final void setAlignment(int alignment) {
        qtd_QTextBlockFormat_setAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setBottomMargin(double margin) {
        qtd_QTextBlockFormat_setBottomMargin_double(qtdNativeId, margin);
    }

    public final void setIndent(int indent) {
        qtd_QTextBlockFormat_setIndent_int(qtdNativeId, indent);
    }

    public final void setLeftMargin(double margin) {
        qtd_QTextBlockFormat_setLeftMargin_double(qtdNativeId, margin);
    }

    public final void setNonBreakableLines(bool b) {
        qtd_QTextBlockFormat_setNonBreakableLines_bool(qtdNativeId, b);
    }

    public final void setPageBreakPolicy(int flags) {
        qtd_QTextBlockFormat_setPageBreakPolicy_PageBreakFlags(qtdNativeId, flags);
    }

    public final void setRightMargin(double margin) {
        qtd_QTextBlockFormat_setRightMargin_double(qtdNativeId, margin);
    }

    public final void setTabPositions(QList!(QTextOption_Tab) tabs) {
        qtd_QTextBlockFormat_setTabPositions_QList(qtdNativeId, &tabs);
    }

    public final void setTextIndent(double aindent) {
        qtd_QTextBlockFormat_setTextIndent_double(qtdNativeId, aindent);
    }

    public final void setTopMargin(double margin) {
        qtd_QTextBlockFormat_setTopMargin_double(qtdNativeId, margin);
    }

    public final QList!(QTextOption_Tab) tabPositions() const {
        auto res = QList!(QTextOption_Tab).opCall();
        qtd_QTextBlockFormat_tabPositions_const(qtdNativeId, &res);
        return res;
    }

    public final double textIndent() const {
        return qtd_QTextBlockFormat_textIndent_const(qtdNativeId);
    }

    public final double topMargin() const {
        return qtd_QTextBlockFormat_topMargin_const(qtdNativeId);
    }
// Field accessors
    public alias void __isQtType_QTextBlockFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextBlockFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextBlockFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextBlockFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextBlockFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextBlockFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextBlockFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextBlockFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextBlockFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextBlockFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextBlockFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextBlockFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextBlockFormat_native_copy(const void* orig);
extern (C) void qtd_QTextBlockFormat_delete(void *ptr);
extern (C) void qtd_QTextBlockFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextBlockFormat_QTextBlockFormat();
private extern(C) void* qtd_QTextBlockFormat_QTextBlockFormat_QTextFormat(void* fmt0);
private extern(C) int  qtd_QTextBlockFormat_alignment_const(void* __this_nativeId);
private extern(C) double  qtd_QTextBlockFormat_bottomMargin_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlockFormat_indent_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBlockFormat_isValid_const(void* __this_nativeId);
private extern(C) double  qtd_QTextBlockFormat_leftMargin_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextBlockFormat_nonBreakableLines_const(void* __this_nativeId);
private extern(C) int  qtd_QTextBlockFormat_pageBreakPolicy_const(void* __this_nativeId);
private extern(C) double  qtd_QTextBlockFormat_rightMargin_const(void* __this_nativeId);
private extern(C) void  qtd_QTextBlockFormat_setAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QTextBlockFormat_setBottomMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextBlockFormat_setIndent_int(void* __this_nativeId,
 int indent0);
private extern(C) void  qtd_QTextBlockFormat_setLeftMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextBlockFormat_setNonBreakableLines_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextBlockFormat_setPageBreakPolicy_PageBreakFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTextBlockFormat_setRightMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextBlockFormat_setTabPositions_QList(void* __this_nativeId,
 void* tabs0);
private extern(C) void  qtd_QTextBlockFormat_setTextIndent_double(void* __this_nativeId,
 double aindent0);
private extern(C) void  qtd_QTextBlockFormat_setTopMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextBlockFormat_tabPositions_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) double  qtd_QTextBlockFormat_textIndent_const(void* __this_nativeId);
private extern(C) double  qtd_QTextBlockFormat_topMargin_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextBlockFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QTextBlockFormat() {
    QTextBlockFormat.QTypeInfo.init();
    qtd_QTextBlockFormat_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextBlockFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextBlockFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextBlockFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextBlockFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextBlockFormat_QTypeInfo_isDummy();
