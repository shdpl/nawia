module qt.gui.QTextFrameFormat;

public import qt.gui.QTextFrameFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QBrush;
public import qt.gui.QTextLength;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextFrameFormat : QTextFormat
{
    public enum Position {
        InFlow = 0,
        FloatLeft = 1,
        FloatRight = 2
    }

    alias Position.InFlow InFlow;
    alias Position.FloatLeft FloatLeft;
    alias Position.FloatRight FloatRight;

    public enum BorderStyle {
        BorderStyle_None = 0,
        BorderStyle_Dotted = 1,
        BorderStyle_Dashed = 2,
        BorderStyle_Solid = 3,
        BorderStyle_Double = 4,
        BorderStyle_DotDash = 5,
        BorderStyle_DotDotDash = 6,
        BorderStyle_Groove = 7,
        BorderStyle_Ridge = 8,
        BorderStyle_Inset = 9,
        BorderStyle_Outset = 10
    }

    alias BorderStyle.BorderStyle_None BorderStyle_None;
    alias BorderStyle.BorderStyle_Dotted BorderStyle_Dotted;
    alias BorderStyle.BorderStyle_Dashed BorderStyle_Dashed;
    alias BorderStyle.BorderStyle_Solid BorderStyle_Solid;
    alias BorderStyle.BorderStyle_Double BorderStyle_Double;
    alias BorderStyle.BorderStyle_DotDash BorderStyle_DotDash;
    alias BorderStyle.BorderStyle_DotDotDash BorderStyle_DotDotDash;
    alias BorderStyle.BorderStyle_Groove BorderStyle_Groove;
    alias BorderStyle.BorderStyle_Ridge BorderStyle_Ridge;
    alias BorderStyle.BorderStyle_Inset BorderStyle_Inset;
    alias BorderStyle.BorderStyle_Outset BorderStyle_Outset;


// Functions

    public this() {
        void* ret = qtd_QTextFrameFormat_QTextFrameFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(const(QTextFormat) fmt) {
        void* ret = qtd_QTextFrameFormat_QTextFrameFormat_QTextFormat(fmt is null ? null : (cast(QTextFormat)fmt).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double border() const {
        return qtd_QTextFrameFormat_border_const(qtdNativeId);
    }

    public final QBrush borderBrush() const {
        void* ret = qtd_QTextFrameFormat_borderBrush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final QTextFrameFormat.BorderStyle borderStyle() const {
        return cast(QTextFrameFormat.BorderStyle) qtd_QTextFrameFormat_borderStyle_const(qtdNativeId);
    }

    public final double bottomMargin() const {
        return qtd_QTextFrameFormat_bottomMargin_const(qtdNativeId);
    }

    public final QTextLength height() const {
        void* ret = qtd_QTextFrameFormat_height_const(qtdNativeId);
        QTextLength __d_return_value = new QTextLength(ret);
        return __d_return_value;
    }

    public bool isValid() const {
        return qtd_QTextFrameFormat_isValid_const(qtdNativeId);
    }

    public final double leftMargin() const {
        return qtd_QTextFrameFormat_leftMargin_const(qtdNativeId);
    }

    public final double margin() const {
        return qtd_QTextFrameFormat_margin_const(qtdNativeId);
    }

    public final double padding() const {
        return qtd_QTextFrameFormat_padding_const(qtdNativeId);
    }

    public final int pageBreakPolicy() const {
        return qtd_QTextFrameFormat_pageBreakPolicy_const(qtdNativeId);
    }

    public final QTextFrameFormat.Position position() const {
        return cast(QTextFrameFormat.Position) qtd_QTextFrameFormat_position_const(qtdNativeId);
    }

    public final double rightMargin() const {
        return qtd_QTextFrameFormat_rightMargin_const(qtdNativeId);
    }

    public final void setBorder(double border) {
        qtd_QTextFrameFormat_setBorder_double(qtdNativeId, border);
    }

    public final void setBorderBrush(const(QBrush) brush) {
        qtd_QTextFrameFormat_setBorderBrush_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setBorderStyle(QTextFrameFormat.BorderStyle style) {
        qtd_QTextFrameFormat_setBorderStyle_BorderStyle(qtdNativeId, style);
    }

    public final void setBottomMargin(double margin) {
        qtd_QTextFrameFormat_setBottomMargin_double(qtdNativeId, margin);
    }

    public final void setHeight(const(QTextLength) height) {
        qtd_QTextFrameFormat_setHeight_QTextLength(qtdNativeId, height is null ? null : (cast(QTextLength)height).qtdNativeId);
    }

    public final void setHeight(double height) {
        qtd_QTextFrameFormat_setHeight_double(qtdNativeId, height);
    }

    public final void setLeftMargin(double margin) {
        qtd_QTextFrameFormat_setLeftMargin_double(qtdNativeId, margin);
    }

    public final void setMargin(double margin) {
        qtd_QTextFrameFormat_setMargin_double(qtdNativeId, margin);
    }

    public final void setPadding(double padding) {
        qtd_QTextFrameFormat_setPadding_double(qtdNativeId, padding);
    }

    public final void setPageBreakPolicy(int flags) {
        qtd_QTextFrameFormat_setPageBreakPolicy_PageBreakFlags(qtdNativeId, flags);
    }

    public final void setPosition(QTextFrameFormat.Position f) {
        qtd_QTextFrameFormat_setPosition_Position(qtdNativeId, f);
    }

    public final void setRightMargin(double margin) {
        qtd_QTextFrameFormat_setRightMargin_double(qtdNativeId, margin);
    }

    public final void setTopMargin(double margin) {
        qtd_QTextFrameFormat_setTopMargin_double(qtdNativeId, margin);
    }

    public final void setWidth(const(QTextLength) length) {
        qtd_QTextFrameFormat_setWidth_QTextLength(qtdNativeId, length is null ? null : (cast(QTextLength)length).qtdNativeId);
    }

    public final void setWidth(double width) {
        qtd_QTextFrameFormat_setWidth_double(qtdNativeId, width);
    }

    public final double topMargin() const {
        return qtd_QTextFrameFormat_topMargin_const(qtdNativeId);
    }

    public final QTextLength width() const {
        void* ret = qtd_QTextFrameFormat_width_const(qtdNativeId);
        QTextLength __d_return_value = new QTextLength(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isQtType_QTextFrameFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextFrameFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextFrameFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextFrameFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextFrameFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextFrameFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextFrameFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextFrameFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextFrameFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextFrameFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextFrameFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextFrameFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextFrameFormat_native_copy(const void* orig);
extern (C) void qtd_QTextFrameFormat_delete(void *ptr);
extern (C) void qtd_QTextFrameFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextFrameFormat_QTextFrameFormat();
private extern(C) void* qtd_QTextFrameFormat_QTextFrameFormat_QTextFormat(void* fmt0);
private extern(C) double  qtd_QTextFrameFormat_border_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrameFormat_borderBrush_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFrameFormat_borderStyle_const(void* __this_nativeId);
private extern(C) double  qtd_QTextFrameFormat_bottomMargin_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrameFormat_height_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFrameFormat_isValid_const(void* __this_nativeId);
private extern(C) double  qtd_QTextFrameFormat_leftMargin_const(void* __this_nativeId);
private extern(C) double  qtd_QTextFrameFormat_margin_const(void* __this_nativeId);
private extern(C) double  qtd_QTextFrameFormat_padding_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFrameFormat_pageBreakPolicy_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFrameFormat_position_const(void* __this_nativeId);
private extern(C) double  qtd_QTextFrameFormat_rightMargin_const(void* __this_nativeId);
private extern(C) void  qtd_QTextFrameFormat_setBorder_double(void* __this_nativeId,
 double border0);
private extern(C) void  qtd_QTextFrameFormat_setBorderBrush_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QTextFrameFormat_setBorderStyle_BorderStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QTextFrameFormat_setBottomMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextFrameFormat_setHeight_QTextLength(void* __this_nativeId,
 void* height0);
private extern(C) void  qtd_QTextFrameFormat_setHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QTextFrameFormat_setLeftMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextFrameFormat_setMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextFrameFormat_setPadding_double(void* __this_nativeId,
 double padding0);
private extern(C) void  qtd_QTextFrameFormat_setPageBreakPolicy_PageBreakFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTextFrameFormat_setPosition_Position(void* __this_nativeId,
 int f0);
private extern(C) void  qtd_QTextFrameFormat_setRightMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextFrameFormat_setTopMargin_double(void* __this_nativeId,
 double margin0);
private extern(C) void  qtd_QTextFrameFormat_setWidth_QTextLength(void* __this_nativeId,
 void* length0);
private extern(C) void  qtd_QTextFrameFormat_setWidth_double(void* __this_nativeId,
 double width0);
private extern(C) double  qtd_QTextFrameFormat_topMargin_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrameFormat_width_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextFrameFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QTextFrameFormat() {
    QTextFrameFormat.QTypeInfo.init();
    qtd_QTextFrameFormat_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextFrameFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextFrameFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextFrameFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextFrameFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextFrameFormat_QTypeInfo_isDummy();
