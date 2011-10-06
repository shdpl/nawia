module qt.gui.QTextFormat;

public import qt.gui.QTextFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QTextBlockFormat;
public import qt.gui.QTextImageFormat;
public import qt.gui.QPen;
public import qt.gui.QTextLength;
public import qt.gui.QBrush;
public import qt.gui.QTextTableFormat;
public import qt.gui.QTextListFormat;
public import qt.gui.QTextTableCellFormat;
public import qt.gui.QColor;
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextFrameFormat;
public import qt.core.QVariant;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextFormat : QtdObject
{
    public enum Property {
        ObjectIndex = 0,
        CssFloat = 2048,
        LayoutDirection = 2049,
        OutlinePen = 2064,
        BackgroundBrush = 2080,
        ForegroundBrush = 2081,
        BackgroundImageUrl = 2083,
        BlockAlignment = 4112,
        BlockTopMargin = 4144,
        BlockBottomMargin = 4145,
        BlockLeftMargin = 4146,
        BlockRightMargin = 4147,
        TextIndent = 4148,
        TabPositions = 4149,
        BlockIndent = 4160,
        BlockNonBreakableLines = 4176,
        BlockTrailingHorizontalRulerWidth = 4192,
        FontCapitalization = 8160,
        FontLetterSpacing = 8161,
        FontWordSpacing = 8162,
        FontStyleHint = 8163,
        FontStyleStrategy = 8164,
        FontKerning = 8165,
        FontFamily = 8192,
        FontPointSize = 8193,
        FontSizeAdjustment = 8194,
        FontWeight = 8195,
        FontItalic = 8196,
        FontUnderline = 8197,
        FontOverline = 8198,
        FontStrikeOut = 8199,
        FontFixedPitch = 8200,
        FontPixelSize = 8201,
        TextUnderlineColor = 8208,
        TextVerticalAlignment = 8225,
        TextOutline = 8226,
        TextUnderlineStyle = 8227,
        TextToolTip = 8228,
        IsAnchor = 8240,
        AnchorHref = 8241,
        AnchorName = 8242,
        ObjectType = 12032,
        ListStyle = 12288,
        ListIndent = 12289,
        FrameBorder = 16384,
        FrameMargin = 16385,
        FramePadding = 16386,
        FrameWidth = 16387,
        FrameHeight = 16388,
        FrameTopMargin = 16389,
        FrameBottomMargin = 16390,
        FrameLeftMargin = 16391,
        FrameRightMargin = 16392,
        FrameBorderBrush = 16393,
        FrameBorderStyle = 16400,
        TableColumns = 16640,
        TableColumnWidthConstraints = 16641,
        TableCellSpacing = 16642,
        TableCellPadding = 16643,
        TableHeaderRowCount = 16644,
        TableCellRowSpan = 18448,
        TableCellColumnSpan = 18449,
        TableCellTopPadding = 18450,
        TableCellBottomPadding = 18451,
        TableCellLeftPadding = 18452,
        TableCellRightPadding = 18453,
        ImageName = 20480,
        ImageWidth = 20496,
        ImageHeight = 20497,
        FullWidthSelection = 24576,
        PageBreakPolicy = 28672,
        UserProperty = 1048576
    }

    alias Property.ObjectIndex ObjectIndex;
    alias Property.CssFloat CssFloat;
    alias Property.LayoutDirection LayoutDirection;
    alias Property.OutlinePen OutlinePen;
    alias Property.BackgroundBrush BackgroundBrush;
    alias Property.ForegroundBrush ForegroundBrush;
    alias Property.BackgroundImageUrl BackgroundImageUrl;
    alias Property.BlockAlignment BlockAlignment;
    alias Property.BlockTopMargin BlockTopMargin;
    alias Property.BlockBottomMargin BlockBottomMargin;
    alias Property.BlockLeftMargin BlockLeftMargin;
    alias Property.BlockRightMargin BlockRightMargin;
    alias Property.TextIndent TextIndent;
    alias Property.TabPositions TabPositions;
    alias Property.BlockIndent BlockIndent;
    alias Property.BlockNonBreakableLines BlockNonBreakableLines;
    alias Property.BlockTrailingHorizontalRulerWidth BlockTrailingHorizontalRulerWidth;
    alias Property.FontCapitalization FontCapitalization;
    alias Property.FontLetterSpacing FontLetterSpacing;
    alias Property.FontWordSpacing FontWordSpacing;
    alias Property.FontStyleHint FontStyleHint;
    alias Property.FontStyleStrategy FontStyleStrategy;
    alias Property.FontKerning FontKerning;
    alias Property.FontFamily FontFamily;
    alias Property.FontPointSize FontPointSize;
    alias Property.FontSizeAdjustment FontSizeAdjustment;
    alias Property.FontWeight FontWeight;
    alias Property.FontItalic FontItalic;
    alias Property.FontUnderline FontUnderline;
    alias Property.FontOverline FontOverline;
    alias Property.FontStrikeOut FontStrikeOut;
    alias Property.FontFixedPitch FontFixedPitch;
    alias Property.FontPixelSize FontPixelSize;
    alias Property.TextUnderlineColor TextUnderlineColor;
    alias Property.TextVerticalAlignment TextVerticalAlignment;
    alias Property.TextOutline TextOutline;
    alias Property.TextUnderlineStyle TextUnderlineStyle;
    alias Property.TextToolTip TextToolTip;
    alias Property.IsAnchor IsAnchor;
    alias Property.AnchorHref AnchorHref;
    alias Property.AnchorName AnchorName;
    alias Property.ObjectType ObjectType;
    alias Property.ListStyle ListStyle;
    alias Property.ListIndent ListIndent;
    alias Property.FrameBorder FrameBorder;
    alias Property.FrameMargin FrameMargin;
    alias Property.FramePadding FramePadding;
    alias Property.FrameWidth FrameWidth;
    alias Property.FrameHeight FrameHeight;
    alias Property.FrameTopMargin FrameTopMargin;
    alias Property.FrameBottomMargin FrameBottomMargin;
    alias Property.FrameLeftMargin FrameLeftMargin;
    alias Property.FrameRightMargin FrameRightMargin;
    alias Property.FrameBorderBrush FrameBorderBrush;
    alias Property.FrameBorderStyle FrameBorderStyle;
    alias Property.TableColumns TableColumns;
    alias Property.TableColumnWidthConstraints TableColumnWidthConstraints;
    alias Property.TableCellSpacing TableCellSpacing;
    alias Property.TableCellPadding TableCellPadding;
    alias Property.TableHeaderRowCount TableHeaderRowCount;
    alias Property.TableCellRowSpan TableCellRowSpan;
    alias Property.TableCellColumnSpan TableCellColumnSpan;
    alias Property.TableCellTopPadding TableCellTopPadding;
    alias Property.TableCellBottomPadding TableCellBottomPadding;
    alias Property.TableCellLeftPadding TableCellLeftPadding;
    alias Property.TableCellRightPadding TableCellRightPadding;
    alias Property.ImageName ImageName;
    alias Property.ImageWidth ImageWidth;
    alias Property.ImageHeight ImageHeight;
    alias Property.FullWidthSelection FullWidthSelection;
    alias Property.PageBreakPolicy PageBreakPolicy;
    alias Property.UserProperty UserProperty;

    public enum FormatType {
        InvalidFormat = -1,
        BlockFormat = 1,
        CharFormat = 2,
        ListFormat = 3,
        TableFormat = 4,
        FrameFormat = 5,
        UserFormat = 100
    }

    alias FormatType.InvalidFormat InvalidFormat;
    alias FormatType.BlockFormat BlockFormat;
    alias FormatType.CharFormat CharFormat;
    alias FormatType.ListFormat ListFormat;
    alias FormatType.TableFormat TableFormat;
    alias FormatType.FrameFormat FrameFormat;
    alias FormatType.UserFormat UserFormat;

    public enum ObjectTypes {
        NoObject = 0,
        ImageObject = 1,
        TableObject = 2,
        TableCellObject = 3,
        UserObject = 4096
    }

    alias ObjectTypes.NoObject NoObject;
    alias ObjectTypes.ImageObject ImageObject;
    alias ObjectTypes.TableObject TableObject;
    alias ObjectTypes.TableCellObject TableCellObject;
    alias ObjectTypes.UserObject UserObject;

    public enum PageBreakFlag {
        PageBreak_Auto = 0,
        PageBreak_AlwaysBefore = 1,
        PageBreak_AlwaysAfter = 16
    }

    alias PageBreakFlag.PageBreak_Auto PageBreak_Auto;
    alias PageBreakFlag.PageBreak_AlwaysBefore PageBreak_AlwaysBefore;
    alias PageBreakFlag.PageBreak_AlwaysAfter PageBreak_AlwaysAfter;


// Functions

    public this() {
        void* ret = qtd_QTextFormat_QTextFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextFormat) rhs) {
        void* ret = qtd_QTextFormat_QTextFormat_QTextFormat(rhs is null ? null : (cast(QTextFormat)rhs).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int type) {
        void* ret = qtd_QTextFormat_QTextFormat_int(type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QBrush background() const {
        void* ret = qtd_QTextFormat_background_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final bool boolProperty(int propertyId) const {
        return qtd_QTextFormat_boolProperty_int_const(qtdNativeId, propertyId);
    }

    public final QBrush brushProperty(int propertyId) const {
        void* ret = qtd_QTextFormat_brushProperty_int_const(qtdNativeId, propertyId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final void clearBackground() {
        qtd_QTextFormat_clearBackground(qtdNativeId);
    }

    public final void clearForeground() {
        qtd_QTextFormat_clearForeground(qtdNativeId);
    }

    public final void clearProperty(int propertyId) {
        qtd_QTextFormat_clearProperty_int(qtdNativeId, propertyId);
    }

    public final QColor colorProperty(int propertyId) const {
        void* ret = qtd_QTextFormat_colorProperty_int_const(qtdNativeId, propertyId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final double doubleProperty(int propertyId) const {
        return qtd_QTextFormat_doubleProperty_int_const(qtdNativeId, propertyId);
    }

    public final QBrush foreground() const {
        void* ret = qtd_QTextFormat_foreground_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final bool hasProperty(int propertyId) const {
        return qtd_QTextFormat_hasProperty_int_const(qtdNativeId, propertyId);
    }

    public final int intProperty(int propertyId) const {
        return qtd_QTextFormat_intProperty_int_const(qtdNativeId, propertyId);
    }

    public final bool isBlockFormat() const {
        return qtd_QTextFormat_isBlockFormat_const(qtdNativeId);
    }

    public final bool isCharFormat() const {
        return qtd_QTextFormat_isCharFormat_const(qtdNativeId);
    }

    public final bool isFrameFormat() const {
        return qtd_QTextFormat_isFrameFormat_const(qtdNativeId);
    }

    public final bool isImageFormat() const {
        return qtd_QTextFormat_isImageFormat_const(qtdNativeId);
    }

    public final bool isListFormat() const {
        return qtd_QTextFormat_isListFormat_const(qtdNativeId);
    }

    public final bool isTableCellFormat() const {
        return qtd_QTextFormat_isTableCellFormat_const(qtdNativeId);
    }

    public final bool isTableFormat() const {
        return qtd_QTextFormat_isTableFormat_const(qtdNativeId);
    }

    public bool isValid() const {
        return qtd_QTextFormat_isValid_const(qtdNativeId);
    }

    public final Qt.LayoutDirection layoutDirection() const {
        return cast(Qt.LayoutDirection) qtd_QTextFormat_layoutDirection_const(qtdNativeId);
    }

    public final QTextLength lengthProperty(int propertyId) const {
        void* ret = qtd_QTextFormat_lengthProperty_int_const(qtdNativeId, propertyId);
        QTextLength __d_return_value = new QTextLength(ret);
        return __d_return_value;
    }

    public final QTextLength[] lengthVectorProperty(int propertyId) const {
        QTextLength[] res;
        qtd_QTextFormat_lengthVectorProperty_int_const(qtdNativeId, &res, propertyId);
        return res;
    }

    public final void merge(const(QTextFormat) other) {
        qtd_QTextFormat_merge_QTextFormat(qtdNativeId, other is null ? null : (cast(QTextFormat)other).qtdNativeId);
    }

    public final int objectIndex() const {
        return qtd_QTextFormat_objectIndex_const(qtdNativeId);
    }

    public final int objectType() const {
        return qtd_QTextFormat_objectType_const(qtdNativeId);
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QTextFormat_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QTextFormat_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QTextFormat) rhs) const {
        return qtd_QTextFormat_operator_equal_QTextFormat_const(qtdNativeId, rhs is null ? null : (cast(QTextFormat)rhs).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QTextFormat_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final QPen penProperty(int propertyId) const {
        void* ret = qtd_QTextFormat_penProperty_int_const(qtdNativeId, propertyId);
        QPen __d_return_value = new QPen(ret);
        return __d_return_value;
    }

    public final QVariant property(int propertyId) const {
        void* ret = qtd_QTextFormat_property_int_const(qtdNativeId, propertyId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final int propertyCount() const {
        return qtd_QTextFormat_propertyCount_const(qtdNativeId);
    }

    public final void setBackground(const(QBrush) brush) {
        qtd_QTextFormat_setBackground_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setForeground(const(QBrush) brush) {
        qtd_QTextFormat_setForeground_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setLayoutDirection(Qt.LayoutDirection direction) {
        qtd_QTextFormat_setLayoutDirection_LayoutDirection(qtdNativeId, direction);
    }

    public final void setObjectIndex(int object) {
        qtd_QTextFormat_setObjectIndex_int(qtdNativeId, object);
    }

    public final void setObjectType(int type) {
        qtd_QTextFormat_setObjectType_int(qtdNativeId, type);
    }

    public final void setProperty(int propertyId, QVariant value) {
        qtd_QTextFormat_setProperty_int_QVariant(qtdNativeId, propertyId, value is null ? null : value.qtdNativeId);
    }

    public final void setProperty(int propertyId, QTextLength[] lengths) {
        qtd_QTextFormat_setProperty_int_QVector(qtdNativeId, propertyId, &lengths);
    }

    public final string stringProperty(int propertyId) const {
        string res;
        qtd_QTextFormat_stringProperty_int_const(qtdNativeId, &res, propertyId);
        return res;
    }

    public final QTextBlockFormat toBlockFormat() const {
        void* ret = qtd_QTextFormat_toBlockFormat_const(qtdNativeId);
        QTextBlockFormat __d_return_value = new QTextBlockFormat(ret);
        return __d_return_value;
    }

    public final QTextCharFormat toCharFormat() const {
        void* ret = qtd_QTextFormat_toCharFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final QTextFrameFormat toFrameFormat() const {
        void* ret = qtd_QTextFormat_toFrameFormat_const(qtdNativeId);
        QTextFrameFormat __d_return_value = new QTextFrameFormat(ret);
        return __d_return_value;
    }

    public final QTextImageFormat toImageFormat() const {
        void* ret = qtd_QTextFormat_toImageFormat_const(qtdNativeId);
        QTextImageFormat __d_return_value = new QTextImageFormat(ret);
        return __d_return_value;
    }

    public final QTextListFormat toListFormat() const {
        void* ret = qtd_QTextFormat_toListFormat_const(qtdNativeId);
        QTextListFormat __d_return_value = new QTextListFormat(ret);
        return __d_return_value;
    }

    public final QTextTableCellFormat toTableCellFormat() const {
        void* ret = qtd_QTextFormat_toTableCellFormat_const(qtdNativeId);
        QTextTableCellFormat __d_return_value = new QTextTableCellFormat(ret);
        return __d_return_value;
    }

    public final QTextTableFormat toTableFormat() const {
        void* ret = qtd_QTextFormat_toTableFormat_const(qtdNativeId);
        QTextTableFormat __d_return_value = new QTextTableFormat(ret);
        return __d_return_value;
    }

    public final int type() const {
        return qtd_QTextFormat_type_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextFormat_native_copy(const void* orig);
extern (C) void qtd_QTextFormat_delete(void *ptr);
extern (C) void qtd_QTextFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextFormat_QTextFormat();
private extern(C) void* qtd_QTextFormat_QTextFormat_QTextFormat(void* rhs0);
private extern(C) void* qtd_QTextFormat_QTextFormat_int(int type0);
private extern(C) void*  qtd_QTextFormat_background_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_boolProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) void*  qtd_QTextFormat_brushProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) void  qtd_QTextFormat_clearBackground(void* __this_nativeId);
private extern(C) void  qtd_QTextFormat_clearForeground(void* __this_nativeId);
private extern(C) void  qtd_QTextFormat_clearProperty_int(void* __this_nativeId,
 int propertyId0);
private extern(C) void*  qtd_QTextFormat_colorProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) double  qtd_QTextFormat_doubleProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) void*  qtd_QTextFormat_foreground_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_hasProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) int  qtd_QTextFormat_intProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) bool  qtd_QTextFormat_isBlockFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_isCharFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_isFrameFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_isImageFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_isListFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_isTableCellFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_isTableFormat_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFormat_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFormat_layoutDirection_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_lengthProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) void  qtd_QTextFormat_lengthVectorProperty_int_const(void* __this_nativeId,
 void* __d_return_value,
 int propertyId0);
private extern(C) void  qtd_QTextFormat_merge_QTextFormat(void* __this_nativeId,
 void* other0);
private extern(C) int  qtd_QTextFormat_objectIndex_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFormat_objectType_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QTextFormat_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTextFormat_operator_equal_QTextFormat_const(void* __this_nativeId,
 void* rhs0);
private extern(C) void  qtd_QTextFormat_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QTextFormat_penProperty_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) void*  qtd_QTextFormat_property_int_const(void* __this_nativeId,
 int propertyId0);
private extern(C) int  qtd_QTextFormat_propertyCount_const(void* __this_nativeId);
private extern(C) void  qtd_QTextFormat_setBackground_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QTextFormat_setForeground_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QTextFormat_setLayoutDirection_LayoutDirection(void* __this_nativeId,
 int direction0);
private extern(C) void  qtd_QTextFormat_setObjectIndex_int(void* __this_nativeId,
 int object0);
private extern(C) void  qtd_QTextFormat_setObjectType_int(void* __this_nativeId,
 int type0);
private extern(C) void  qtd_QTextFormat_setProperty_int_QVariant(void* __this_nativeId,
 int propertyId0,
 void* value1);
private extern(C) void  qtd_QTextFormat_setProperty_int_QVector(void* __this_nativeId,
 int propertyId0,
 DArray* lengths1);
private extern(C) void  qtd_QTextFormat_stringProperty_int_const(void* __this_nativeId,
 void* __d_return_value,
 int propertyId0);
private extern(C) void*  qtd_QTextFormat_toBlockFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_toCharFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_toFrameFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_toImageFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_toListFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_toTableCellFormat_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFormat_toTableFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFormat_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextFormat() {
    QTextFormat.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextFormat_QTypeInfo_isDummy();
