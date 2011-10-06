module qt.gui.QTextCharFormat;

public import qt.gui.QTextCharFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QFont;
public import qt.gui.QColor;
public import qt.gui.QPen;
public import qt.gui.QFont;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextCharFormat : QTextFormat
{
    public enum VerticalAlignment {
        AlignNormal = 0,
        AlignSuperScript = 1,
        AlignSubScript = 2,
        AlignMiddle = 3,
        AlignTop = 4,
        AlignBottom = 5
    }

    alias VerticalAlignment.AlignNormal AlignNormal;
    alias VerticalAlignment.AlignSuperScript AlignSuperScript;
    alias VerticalAlignment.AlignSubScript AlignSubScript;
    alias VerticalAlignment.AlignMiddle AlignMiddle;
    alias VerticalAlignment.AlignTop AlignTop;
    alias VerticalAlignment.AlignBottom AlignBottom;

    public enum UnderlineStyle {
        NoUnderline = 0,
        SingleUnderline = 1,
        DashUnderline = 2,
        DotLine = 3,
        DashDotLine = 4,
        DashDotDotLine = 5,
        WaveUnderline = 6,
        SpellCheckUnderline = 7
    }

    alias UnderlineStyle.NoUnderline NoUnderline;
    alias UnderlineStyle.SingleUnderline SingleUnderline;
    alias UnderlineStyle.DashUnderline DashUnderline;
    alias UnderlineStyle.DotLine DotLine;
    alias UnderlineStyle.DashDotLine DashDotLine;
    alias UnderlineStyle.DashDotDotLine DashDotDotLine;
    alias UnderlineStyle.WaveUnderline WaveUnderline;
    alias UnderlineStyle.SpellCheckUnderline SpellCheckUnderline;


// Functions

    public this() {
        void* ret = qtd_QTextCharFormat_QTextCharFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(const(QTextFormat) fmt) {
        void* ret = qtd_QTextCharFormat_QTextCharFormat_QTextFormat(fmt is null ? null : (cast(QTextFormat)fmt).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string anchorHref() const {
        string res;
        qtd_QTextCharFormat_anchorHref_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(string) anchorNames() const {
        auto res = QList!(string).opCall();
        qtd_QTextCharFormat_anchorNames_const(qtdNativeId, &res);
        return res;
    }

    public final QFont font() const {
        void* ret = qtd_QTextCharFormat_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QFont.Capitalization fontCapitalization() const {
        return cast(QFont.Capitalization) qtd_QTextCharFormat_fontCapitalization_const(qtdNativeId);
    }

    public final string fontFamily() const {
        string res;
        qtd_QTextCharFormat_fontFamily_const(qtdNativeId, &res);
        return res;
    }

    public final bool fontFixedPitch() const {
        return qtd_QTextCharFormat_fontFixedPitch_const(qtdNativeId);
    }

    public final bool fontItalic() const {
        return qtd_QTextCharFormat_fontItalic_const(qtdNativeId);
    }

    public final bool fontKerning() const {
        return qtd_QTextCharFormat_fontKerning_const(qtdNativeId);
    }

    public final double fontLetterSpacing() const {
        return qtd_QTextCharFormat_fontLetterSpacing_const(qtdNativeId);
    }

    public final bool fontOverline() const {
        return qtd_QTextCharFormat_fontOverline_const(qtdNativeId);
    }

    public final double fontPointSize() const {
        return qtd_QTextCharFormat_fontPointSize_const(qtdNativeId);
    }

    public final bool fontStrikeOut() const {
        return qtd_QTextCharFormat_fontStrikeOut_const(qtdNativeId);
    }

    public final QFont.StyleHint fontStyleHint() const {
        return cast(QFont.StyleHint) qtd_QTextCharFormat_fontStyleHint_const(qtdNativeId);
    }

    public final QFont.StyleStrategy fontStyleStrategy() const {
        return cast(QFont.StyleStrategy) qtd_QTextCharFormat_fontStyleStrategy_const(qtdNativeId);
    }

    public final bool fontUnderline() const {
        return qtd_QTextCharFormat_fontUnderline_const(qtdNativeId);
    }

    public final int fontWeight() const {
        return qtd_QTextCharFormat_fontWeight_const(qtdNativeId);
    }

    public final double fontWordSpacing() const {
        return qtd_QTextCharFormat_fontWordSpacing_const(qtdNativeId);
    }

    public final bool isAnchor() const {
        return qtd_QTextCharFormat_isAnchor_const(qtdNativeId);
    }

    public bool isValid() const {
        return qtd_QTextCharFormat_isValid_const(qtdNativeId);
    }

    public final void setAnchor(bool anchor) {
        qtd_QTextCharFormat_setAnchor_bool(qtdNativeId, anchor);
    }

    public final void setAnchorHref(string value) {
        qtd_QTextCharFormat_setAnchorHref_string(qtdNativeId, value);
    }

    public final void setAnchorNames(QList!(string) names) {
        qtd_QTextCharFormat_setAnchorNames_QList(qtdNativeId, &names);
    }

    public final void setFont(const(QFont) font) {
        qtd_QTextCharFormat_setFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setFontCapitalization(QFont.Capitalization capitalization) {
        qtd_QTextCharFormat_setFontCapitalization_Capitalization(qtdNativeId, capitalization);
    }

    public final void setFontFamily(string family) {
        qtd_QTextCharFormat_setFontFamily_string(qtdNativeId, family);
    }

    public final void setFontFixedPitch(bool fixedPitch) {
        qtd_QTextCharFormat_setFontFixedPitch_bool(qtdNativeId, fixedPitch);
    }

    public final void setFontItalic(bool italic) {
        qtd_QTextCharFormat_setFontItalic_bool(qtdNativeId, italic);
    }

    public final void setFontKerning(bool enable) {
        qtd_QTextCharFormat_setFontKerning_bool(qtdNativeId, enable);
    }

    public final void setFontLetterSpacing(double spacing) {
        qtd_QTextCharFormat_setFontLetterSpacing_double(qtdNativeId, spacing);
    }

    public final void setFontOverline(bool overline) {
        qtd_QTextCharFormat_setFontOverline_bool(qtdNativeId, overline);
    }

    public final void setFontPointSize(double size) {
        qtd_QTextCharFormat_setFontPointSize_double(qtdNativeId, size);
    }

    public final void setFontStrikeOut(bool strikeOut) {
        qtd_QTextCharFormat_setFontStrikeOut_bool(qtdNativeId, strikeOut);
    }

    public final void setFontStyleHint(QFont.StyleHint hint, QFont.StyleStrategy strategy = QFont.StyleStrategy.PreferDefault) {
        qtd_QTextCharFormat_setFontStyleHint_StyleHint_StyleStrategy(qtdNativeId, hint, strategy);
    }

    public final void setFontStyleStrategy(QFont.StyleStrategy strategy) {
        qtd_QTextCharFormat_setFontStyleStrategy_StyleStrategy(qtdNativeId, strategy);
    }

    public final void setFontUnderline(bool underline) {
        qtd_QTextCharFormat_setFontUnderline_bool(qtdNativeId, underline);
    }

    public final void setFontWeight(int weight) {
        qtd_QTextCharFormat_setFontWeight_int(qtdNativeId, weight);
    }

    public final void setFontWordSpacing(double spacing) {
        qtd_QTextCharFormat_setFontWordSpacing_double(qtdNativeId, spacing);
    }

    public final void setTableCellColumnSpan(int tableCellColumnSpan) {
        qtd_QTextCharFormat_setTableCellColumnSpan_int(qtdNativeId, tableCellColumnSpan);
    }

    public final void setTableCellRowSpan(int tableCellRowSpan) {
        qtd_QTextCharFormat_setTableCellRowSpan_int(qtdNativeId, tableCellRowSpan);
    }

    public final void setTextOutline(const(QPen) pen) {
        qtd_QTextCharFormat_setTextOutline_QPen(qtdNativeId, pen is null ? null : (cast(QPen)pen).qtdNativeId);
    }

    public final void setToolTip(string tip) {
        qtd_QTextCharFormat_setToolTip_string(qtdNativeId, tip);
    }

    public final void setUnderlineColor(const(QColor) color) {
        qtd_QTextCharFormat_setUnderlineColor_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setUnderlineStyle(QTextCharFormat.UnderlineStyle style) {
        qtd_QTextCharFormat_setUnderlineStyle_UnderlineStyle(qtdNativeId, style);
    }

    public final void setVerticalAlignment(QTextCharFormat.VerticalAlignment alignment) {
        qtd_QTextCharFormat_setVerticalAlignment_VerticalAlignment(qtdNativeId, alignment);
    }

    public final int tableCellColumnSpan() const {
        return qtd_QTextCharFormat_tableCellColumnSpan_const(qtdNativeId);
    }

    public final int tableCellRowSpan() const {
        return qtd_QTextCharFormat_tableCellRowSpan_const(qtdNativeId);
    }

    public final QPen textOutline() const {
        void* ret = qtd_QTextCharFormat_textOutline_const(qtdNativeId);
        QPen __d_return_value = new QPen(ret);
        return __d_return_value;
    }

    public final string toolTip() const {
        string res;
        qtd_QTextCharFormat_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public final QColor underlineColor() const {
        void* ret = qtd_QTextCharFormat_underlineColor_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QTextCharFormat.UnderlineStyle underlineStyle() const {
        return cast(QTextCharFormat.UnderlineStyle) qtd_QTextCharFormat_underlineStyle_const(qtdNativeId);
    }

    public final QTextCharFormat.VerticalAlignment verticalAlignment() const {
        return cast(QTextCharFormat.VerticalAlignment) qtd_QTextCharFormat_verticalAlignment_const(qtdNativeId);
    }
// Field accessors
    public alias void __isQtType_QTextCharFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextCharFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextCharFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextCharFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextCharFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextCharFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextCharFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextCharFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextCharFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextCharFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextCharFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextCharFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextCharFormat_native_copy(const void* orig);
extern (C) void qtd_QTextCharFormat_delete(void *ptr);
extern (C) void qtd_QTextCharFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextCharFormat_QTextCharFormat();
private extern(C) void* qtd_QTextCharFormat_QTextCharFormat_QTextFormat(void* fmt0);
private extern(C) void  qtd_QTextCharFormat_anchorHref_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextCharFormat_anchorNames_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextCharFormat_font_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCharFormat_fontCapitalization_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCharFormat_fontFamily_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QTextCharFormat_fontFixedPitch_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCharFormat_fontItalic_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCharFormat_fontKerning_const(void* __this_nativeId);
private extern(C) double  qtd_QTextCharFormat_fontLetterSpacing_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCharFormat_fontOverline_const(void* __this_nativeId);
private extern(C) double  qtd_QTextCharFormat_fontPointSize_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCharFormat_fontStrikeOut_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCharFormat_fontStyleHint_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCharFormat_fontStyleStrategy_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCharFormat_fontUnderline_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCharFormat_fontWeight_const(void* __this_nativeId);
private extern(C) double  qtd_QTextCharFormat_fontWordSpacing_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCharFormat_isAnchor_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextCharFormat_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCharFormat_setAnchor_bool(void* __this_nativeId,
 bool anchor0);
private extern(C) void  qtd_QTextCharFormat_setAnchorHref_string(void* __this_nativeId,
 string value0);
private extern(C) void  qtd_QTextCharFormat_setAnchorNames_QList(void* __this_nativeId,
 void* names0);
private extern(C) void  qtd_QTextCharFormat_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QTextCharFormat_setFontCapitalization_Capitalization(void* __this_nativeId,
 int capitalization0);
private extern(C) void  qtd_QTextCharFormat_setFontFamily_string(void* __this_nativeId,
 string family0);
private extern(C) void  qtd_QTextCharFormat_setFontFixedPitch_bool(void* __this_nativeId,
 bool fixedPitch0);
private extern(C) void  qtd_QTextCharFormat_setFontItalic_bool(void* __this_nativeId,
 bool italic0);
private extern(C) void  qtd_QTextCharFormat_setFontKerning_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QTextCharFormat_setFontLetterSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) void  qtd_QTextCharFormat_setFontOverline_bool(void* __this_nativeId,
 bool overline0);
private extern(C) void  qtd_QTextCharFormat_setFontPointSize_double(void* __this_nativeId,
 double size0);
private extern(C) void  qtd_QTextCharFormat_setFontStrikeOut_bool(void* __this_nativeId,
 bool strikeOut0);
private extern(C) void  qtd_QTextCharFormat_setFontStyleHint_StyleHint_StyleStrategy(void* __this_nativeId,
 int hint0,
 int strategy1);
private extern(C) void  qtd_QTextCharFormat_setFontStyleStrategy_StyleStrategy(void* __this_nativeId,
 int strategy0);
private extern(C) void  qtd_QTextCharFormat_setFontUnderline_bool(void* __this_nativeId,
 bool underline0);
private extern(C) void  qtd_QTextCharFormat_setFontWeight_int(void* __this_nativeId,
 int weight0);
private extern(C) void  qtd_QTextCharFormat_setFontWordSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) void  qtd_QTextCharFormat_setTableCellColumnSpan_int(void* __this_nativeId,
 int tableCellColumnSpan0);
private extern(C) void  qtd_QTextCharFormat_setTableCellRowSpan_int(void* __this_nativeId,
 int tableCellRowSpan0);
private extern(C) void  qtd_QTextCharFormat_setTextOutline_QPen(void* __this_nativeId,
 void* pen0);
private extern(C) void  qtd_QTextCharFormat_setToolTip_string(void* __this_nativeId,
 string tip0);
private extern(C) void  qtd_QTextCharFormat_setUnderlineColor_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QTextCharFormat_setUnderlineStyle_UnderlineStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QTextCharFormat_setVerticalAlignment_VerticalAlignment(void* __this_nativeId,
 int alignment0);
private extern(C) int  qtd_QTextCharFormat_tableCellColumnSpan_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCharFormat_tableCellRowSpan_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextCharFormat_textOutline_const(void* __this_nativeId);
private extern(C) void  qtd_QTextCharFormat_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QTextCharFormat_underlineColor_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCharFormat_underlineStyle_const(void* __this_nativeId);
private extern(C) int  qtd_QTextCharFormat_verticalAlignment_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextCharFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QTextCharFormat() {
    QTextCharFormat.QTypeInfo.init();
    qtd_QTextCharFormat_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextCharFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextCharFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextCharFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextCharFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextCharFormat_QTypeInfo_isDummy();
