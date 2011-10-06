module qt.gui.QFont;

public import qt.gui.QFont_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QVariant;
public import qt.core.QDataStream;
public import qt.gui.QPaintDevice;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFont : QtdObject
{
    public enum StyleStrategy {
        PreferDefault = 1,
        PreferBitmap = 2,
        PreferDevice = 4,
        PreferOutline = 8,
        ForceOutline = 16,
        PreferMatch = 32,
        PreferQuality = 64,
        PreferAntialias = 128,
        NoAntialias = 256,
        OpenGLCompatible = 512,
        ForceIntegerMetrics = 1024,
        NoFontMerging = 32768
    }

    alias StyleStrategy.PreferDefault PreferDefault;
    alias StyleStrategy.PreferBitmap PreferBitmap;
    alias StyleStrategy.PreferDevice PreferDevice;
    alias StyleStrategy.PreferOutline PreferOutline;
    alias StyleStrategy.ForceOutline ForceOutline;
    alias StyleStrategy.PreferMatch PreferMatch;
    alias StyleStrategy.PreferQuality PreferQuality;
    alias StyleStrategy.PreferAntialias PreferAntialias;
    alias StyleStrategy.NoAntialias NoAntialias;
    alias StyleStrategy.OpenGLCompatible OpenGLCompatible;
    alias StyleStrategy.ForceIntegerMetrics ForceIntegerMetrics;
    alias StyleStrategy.NoFontMerging NoFontMerging;

    public enum SpacingType {
        PercentageSpacing = 0,
        AbsoluteSpacing = 1
    }

    alias SpacingType.PercentageSpacing PercentageSpacing;
    alias SpacingType.AbsoluteSpacing AbsoluteSpacing;

    public enum StyleHint {
        Helvetica = 0,
        Times = 1,
        Courier = 2,
        OldEnglish = 3,
        System = 4,
        AnyStyle = 5,
        Cursive = 6,
        Monospace = 7,
        Fantasy = 8
    }

    alias StyleHint.Helvetica Helvetica;
    alias StyleHint.Times Times;
    alias StyleHint.Courier Courier;
    alias StyleHint.OldEnglish OldEnglish;
    alias StyleHint.System System;
    alias StyleHint.AnyStyle AnyStyle;
    alias StyleHint.Cursive Cursive;
    alias StyleHint.Monospace Monospace;
    alias StyleHint.Fantasy Fantasy;

    public enum Weight {
        Light = 25,
        Normal = 50,
        DemiBold = 63,
        Bold = 75,
        Black = 87
    }

    alias Weight.Light Light;
    alias Weight.Normal Normal;
    alias Weight.DemiBold DemiBold;
    alias Weight.Bold Bold;
    alias Weight.Black Black;

    public enum Capitalization {
        MixedCase = 0,
        AllUppercase = 1,
        AllLowercase = 2,
        SmallCaps = 3,
        Capitalize = 4
    }

    alias Capitalization.MixedCase MixedCase;
    alias Capitalization.AllUppercase AllUppercase;
    alias Capitalization.AllLowercase AllLowercase;
    alias Capitalization.SmallCaps SmallCaps;
    alias Capitalization.Capitalize Capitalize;

    public enum Stretch {
        UltraCondensed = 50,
        ExtraCondensed = 62,
        Condensed = 75,
        SemiCondensed = 87,
        Unstretched = 100,
        SemiExpanded = 112,
        Expanded = 125,
        ExtraExpanded = 150,
        UltraExpanded = 200
    }

    alias Stretch.UltraCondensed UltraCondensed;
    alias Stretch.ExtraCondensed ExtraCondensed;
    alias Stretch.Condensed Condensed;
    alias Stretch.SemiCondensed SemiCondensed;
    alias Stretch.Unstretched Unstretched;
    alias Stretch.SemiExpanded SemiExpanded;
    alias Stretch.Expanded Expanded;
    alias Stretch.ExtraExpanded ExtraExpanded;
    alias Stretch.UltraExpanded UltraExpanded;

    public enum Style {
        StyleNormal = 0,
        StyleItalic = 1,
        StyleOblique = 2
    }

    alias Style.StyleNormal StyleNormal;
    alias Style.StyleItalic StyleItalic;
    alias Style.StyleOblique StyleOblique;


// Functions

    public this() {
        void* ret = qtd_QFont_QFont();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFont) arg__1) {
        void* ret = qtd_QFont_QFont_QFont(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFont) arg__1, IQPaintDevice pd) {
        void* ret = qtd_QFont_QFont_QFont_QPaintDevice(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId, pd is null ? null : pd.__ptr_IQPaintDevice);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string family, int pointSize = -1, int weight = -1, bool italic = false) {
        void* ret = qtd_QFont_QFont_string_int_int_bool(family, pointSize, weight, italic);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool bold() const {
        return qtd_QFont_bold_const(qtdNativeId);
    }

    public final QFont.Capitalization capitalization() const {
        return cast(QFont.Capitalization) qtd_QFont_capitalization_const(qtdNativeId);
    }

    public final string defaultFamily() const {
        string res;
        qtd_QFont_defaultFamily_const(qtdNativeId, &res);
        return res;
    }

    public final bool exactMatch() const {
        return qtd_QFont_exactMatch_const(qtdNativeId);
    }

    public final string family() const {
        string res;
        qtd_QFont_family_const(qtdNativeId, &res);
        return res;
    }

    public final bool fixedPitch() const {
        return qtd_QFont_fixedPitch_const(qtdNativeId);
    }

    public final bool fromString(string arg__1) {
        return qtd_QFont_fromString_string(qtdNativeId, arg__1);
    }

    public final long handle() const {
        return qtd_QFont_handle_const(qtdNativeId);
    }

    public final bool isCopyOf(const(QFont) arg__1) const {
        return qtd_QFont_isCopyOf_QFont_const(qtdNativeId, arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
    }

    public final bool italic() const {
        return qtd_QFont_italic_const(qtdNativeId);
    }

    public final bool kerning() const {
        return qtd_QFont_kerning_const(qtdNativeId);
    }

    public final string key() const {
        string res;
        qtd_QFont_key_const(qtdNativeId, &res);
        return res;
    }

    public final string lastResortFamily() const {
        string res;
        qtd_QFont_lastResortFamily_const(qtdNativeId, &res);
        return res;
    }

    public final string lastResortFont() const {
        string res;
        qtd_QFont_lastResortFont_const(qtdNativeId, &res);
        return res;
    }

    public final double letterSpacing() const {
        return qtd_QFont_letterSpacing_const(qtdNativeId);
    }

    public final QFont.SpacingType letterSpacingType() const {
        return cast(QFont.SpacingType) qtd_QFont_letterSpacingType_const(qtdNativeId);
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QFont_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    private final bool operator_less(const(QFont) arg__1) const {
        return qtd_QFont_operator_less_QFont_const(qtdNativeId, arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QFont_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QFont) arg__1) const {
        return qtd_QFont_operator_equal_QFont_const(qtdNativeId, arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QFont_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final bool overline() const {
        return qtd_QFont_overline_const(qtdNativeId);
    }

    public final int pixelSize() const {
        return qtd_QFont_pixelSize_const(qtdNativeId);
    }

    public final int pointSize() const {
        return qtd_QFont_pointSize_const(qtdNativeId);
    }

    public final double pointSizeF() const {
        return qtd_QFont_pointSizeF_const(qtdNativeId);
    }

    public final bool rawMode() const {
        return qtd_QFont_rawMode_const(qtdNativeId);
    }

    public final string rawName() const {
        string res;
        qtd_QFont_rawName_const(qtdNativeId, &res);
        return res;
    }

    public final uint resolve() const {
        return qtd_QFont_resolve_const(qtdNativeId);
    }

    public final QFont resolve(const(QFont) arg__1) const {
        void* ret = qtd_QFont_resolve_QFont_const(qtdNativeId, arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final void resolve(uint mask) {
        qtd_QFont_resolve_uint(qtdNativeId, mask);
    }

    public final void setBold(bool arg__1) {
        qtd_QFont_setBold_bool(qtdNativeId, arg__1);
    }

    public final void setCapitalization(QFont.Capitalization arg__1) {
        qtd_QFont_setCapitalization_Capitalization(qtdNativeId, arg__1);
    }

    public final void setFamily(string arg__1) {
        qtd_QFont_setFamily_string(qtdNativeId, arg__1);
    }

    public final void setFixedPitch(bool arg__1) {
        qtd_QFont_setFixedPitch_bool(qtdNativeId, arg__1);
    }

    public final void setItalic(bool b) {
        qtd_QFont_setItalic_bool(qtdNativeId, b);
    }

    public final void setKerning(bool arg__1) {
        qtd_QFont_setKerning_bool(qtdNativeId, arg__1);
    }

    public final void setLetterSpacing(QFont.SpacingType type, double spacing) {
        qtd_QFont_setLetterSpacing_SpacingType_double(qtdNativeId, type, spacing);
    }

    public final void setOverline(bool arg__1) {
        qtd_QFont_setOverline_bool(qtdNativeId, arg__1);
    }

    public final void setPixelSize(int arg__1) {
        qtd_QFont_setPixelSize_int(qtdNativeId, arg__1);
    }

    public final void setPointSize(int arg__1) {
        qtd_QFont_setPointSize_int(qtdNativeId, arg__1);
    }

    public final void setPointSizeF(double arg__1) {
        qtd_QFont_setPointSizeF_double(qtdNativeId, arg__1);
    }

    public final void setRawMode(bool arg__1) {
        qtd_QFont_setRawMode_bool(qtdNativeId, arg__1);
    }

    public final void setRawName(string arg__1) {
        qtd_QFont_setRawName_string(qtdNativeId, arg__1);
    }

    public final void setStretch(int arg__1) {
        qtd_QFont_setStretch_int(qtdNativeId, arg__1);
    }

    public final void setStrikeOut(bool arg__1) {
        qtd_QFont_setStrikeOut_bool(qtdNativeId, arg__1);
    }

    public final void setStyle(QFont.Style style) {
        qtd_QFont_setStyle_Style(qtdNativeId, style);
    }

    public final void setStyleHint(QFont.StyleHint arg__1, QFont.StyleStrategy arg__2 = QFont.StyleStrategy.PreferDefault) {
        qtd_QFont_setStyleHint_StyleHint_StyleStrategy(qtdNativeId, arg__1, arg__2);
    }

    public final void setStyleStrategy(QFont.StyleStrategy s) {
        qtd_QFont_setStyleStrategy_StyleStrategy(qtdNativeId, s);
    }

    public final void setUnderline(bool arg__1) {
        qtd_QFont_setUnderline_bool(qtdNativeId, arg__1);
    }

    public final void setWeight(int arg__1) {
        qtd_QFont_setWeight_int(qtdNativeId, arg__1);
    }

    public final void setWordSpacing(double spacing) {
        qtd_QFont_setWordSpacing_double(qtdNativeId, spacing);
    }

    public final int stretch() const {
        return qtd_QFont_stretch_const(qtdNativeId);
    }

    public final bool strikeOut() const {
        return qtd_QFont_strikeOut_const(qtdNativeId);
    }

    public final QFont.Style style() const {
        return cast(QFont.Style) qtd_QFont_style_const(qtdNativeId);
    }

    public final QFont.StyleHint styleHint() const {
        return cast(QFont.StyleHint) qtd_QFont_styleHint_const(qtdNativeId);
    }

    public final QFont.StyleStrategy styleStrategy() const {
        return cast(QFont.StyleStrategy) qtd_QFont_styleStrategy_const(qtdNativeId);
    }

    public final string toString() const {
        string res;
        qtd_QFont_toString_const(qtdNativeId, &res);
        return res;
    }

    public final bool underline() const {
        return qtd_QFont_underline_const(qtdNativeId);
    }

    public final int weight() const {
        return qtd_QFont_weight_const(qtdNativeId);
    }

    public final double wordSpacing() const {
        return qtd_QFont_wordSpacing_const(qtdNativeId);
    }

    public static void cacheStatistics() {
        qtd_QFont_cacheStatistics();
    }

    public static void cleanup() {
        qtd_QFont_cleanup();
    }

    public static void initialize() {
        qtd_QFont_initialize();
    }

    public static void insertSubstitution(string arg__1, string arg__2) {
        qtd_QFont_insertSubstitution_string_string(arg__1, arg__2);
    }

    public static void insertSubstitutions(string arg__1, QList!(string) arg__2) {
        qtd_QFont_insertSubstitutions_string_QList(arg__1, &arg__2);
    }

    public static void removeSubstitution(string arg__1) {
        qtd_QFont_removeSubstitution_string(arg__1);
    }

    public static string substitute(string arg__1) {
        string res;
        qtd_QFont_substitute_string(&res, arg__1);
        return res;
    }

    public static QList!(string) substitutes(string arg__1) {
        auto res = QList!(string).opCall();
        qtd_QFont_substitutes_string(&res, arg__1);
        return res;
    }

    public static QList!(string) substitutions() {
        auto res = QList!(string).opCall();
        qtd_QFont_substitutions(&res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QFont;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QFont_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QFont_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QFont_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QFont_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QFont_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QFont_QTypeInfo_isComplex();
        isStatic = qtd_QFont_QTypeInfo_isStatic();
        isLarge = qtd_QFont_QTypeInfo_isLarge();
        isPointer = qtd_QFont_QTypeInfo_isPointer();
        isDummy = qtd_QFont_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    version(D_Version2)
    {
        void opAssign(in QFont arg__1)  {
            this.qtdNativeId = qtd_QFont_QFont_QFont(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
        }
    }

}
private extern(C) void qtd_QFont_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QFont_native_copy(const void* orig);
extern (C) void qtd_QFont_delete(void *ptr);
extern (C) void qtd_QFont_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFont_QFont();
private extern(C) void* qtd_QFont_QFont_QFont(void* arg__1);
private extern(C) void* qtd_QFont_QFont_QFont_QPaintDevice(void* arg__1,
 void* pd1);
private extern(C) void* qtd_QFont_QFont_string_int_int_bool(string family0,
 int pointSize1,
 int weight2,
 bool italic3);
private extern(C) bool  qtd_QFont_bold_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_capitalization_const(void* __this_nativeId);
private extern(C) void  qtd_QFont_defaultFamily_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFont_exactMatch_const(void* __this_nativeId);
private extern(C) void  qtd_QFont_family_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFont_fixedPitch_const(void* __this_nativeId);
private extern(C) bool  qtd_QFont_fromString_string(void* __this_nativeId,
 string arg__1);
private extern(C) long  qtd_QFont_handle_const(void* __this_nativeId);
private extern(C) bool  qtd_QFont_isCopyOf_QFont_const(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QFont_italic_const(void* __this_nativeId);
private extern(C) bool  qtd_QFont_kerning_const(void* __this_nativeId);
private extern(C) void  qtd_QFont_key_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFont_lastResortFamily_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QFont_lastResortFont_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) double  qtd_QFont_letterSpacing_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_letterSpacingType_const(void* __this_nativeId);
private extern(C) void*  qtd_QFont_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) bool  qtd_QFont_operator_less_QFont_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QFont_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QFont_operator_equal_QFont_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QFont_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QFont_overline_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_pixelSize_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_pointSize_const(void* __this_nativeId);
private extern(C) double  qtd_QFont_pointSizeF_const(void* __this_nativeId);
private extern(C) bool  qtd_QFont_rawMode_const(void* __this_nativeId);
private extern(C) void  qtd_QFont_rawName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) uint  qtd_QFont_resolve_const(void* __this_nativeId);
private extern(C) void*  qtd_QFont_resolve_QFont_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QFont_resolve_uint(void* __this_nativeId,
 uint mask0);
private extern(C) void  qtd_QFont_setBold_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFont_setCapitalization_Capitalization(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFont_setFamily_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QFont_setFixedPitch_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFont_setItalic_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QFont_setKerning_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFont_setLetterSpacing_SpacingType_double(void* __this_nativeId,
 int type0,
 double spacing1);
private extern(C) void  qtd_QFont_setOverline_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFont_setPixelSize_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFont_setPointSize_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFont_setPointSizeF_double(void* __this_nativeId,
 double arg__1);
private extern(C) void  qtd_QFont_setRawMode_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFont_setRawName_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QFont_setStretch_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFont_setStrikeOut_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFont_setStyle_Style(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QFont_setStyleHint_StyleHint_StyleStrategy(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QFont_setStyleStrategy_StyleStrategy(void* __this_nativeId,
 int s0);
private extern(C) void  qtd_QFont_setUnderline_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QFont_setWeight_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFont_setWordSpacing_double(void* __this_nativeId,
 double spacing0);
private extern(C) int  qtd_QFont_stretch_const(void* __this_nativeId);
private extern(C) bool  qtd_QFont_strikeOut_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_style_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_styleHint_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_styleStrategy_const(void* __this_nativeId);
private extern(C) void  qtd_QFont_toString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFont_underline_const(void* __this_nativeId);
private extern(C) int  qtd_QFont_weight_const(void* __this_nativeId);
private extern(C) double  qtd_QFont_wordSpacing_const(void* __this_nativeId);
private extern(C) void  qtd_QFont_cacheStatistics();
private extern(C) void  qtd_QFont_cleanup();
private extern(C) void  qtd_QFont_initialize();
private extern(C) void  qtd_QFont_insertSubstitution_string_string(string arg__1,
 string arg__2);
private extern(C) void  qtd_QFont_insertSubstitutions_string_QList(string arg__1,
 void* arg__2);
private extern(C) void  qtd_QFont_removeSubstitution_string(string arg__1);
private extern(C) void  qtd_QFont_substitute_string(void* __d_return_value,
 string arg__1);
private extern(C) void  qtd_QFont_substitutes_string(void* __d_return_value,
 string arg__1);
private extern(C) void  qtd_QFont_substitutions(void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QFont() {
    QFont.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QFont_QTypeInfo_isComplex();
private extern (C) bool qtd_QFont_QTypeInfo_isStatic();
private extern (C) bool qtd_QFont_QTypeInfo_isLarge();
private extern (C) bool qtd_QFont_QTypeInfo_isPointer();
private extern (C) bool qtd_QFont_QTypeInfo_isDummy();
