module qt.gui.QPalette;

public import qt.gui.QPalette_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QColor;
public import qt.gui.QBrush;
public import qt.core.QVariant;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPalette : QtdObject
{
    public enum ColorGroup {
        Active = 0,
        Disabled = 1,
        Inactive = 2,
        NColorGroups = 3,
        Current = 4,
        All = 5
    }

    alias ColorGroup.Active Active;
    alias ColorGroup.Disabled Disabled;
    alias ColorGroup.Inactive Inactive;
    alias ColorGroup.NColorGroups NColorGroups;
    alias ColorGroup.Current Current;
    alias ColorGroup.All All;

    public enum ColorRole {
        WindowText = 0,
        Button = 1,
        Light = 2,
        Midlight = 3,
        Dark = 4,
        Mid = 5,
        Text = 6,
        BrightText = 7,
        ButtonText = 8,
        Base = 9,
        Window = 10,
        Shadow = 11,
        Highlight = 12,
        HighlightedText = 13,
        Link = 14,
        LinkVisited = 15,
        AlternateBase = 16,
        NoRole = 17,
        ToolTipBase = 18,
        ToolTipText = 19,

    }

    alias ColorRole.WindowText WindowText;
    alias ColorRole.Button Button;
    alias ColorRole.Light Light;
    alias ColorRole.Midlight Midlight;
    alias ColorRole.Dark Dark;
    alias ColorRole.Mid Mid;
    alias ColorRole.Text Text;
    alias ColorRole.BrightText BrightText;
    alias ColorRole.ButtonText ButtonText;
    alias ColorRole.Base Base;
    alias ColorRole.Window Window;
    alias ColorRole.Shadow Shadow;
    alias ColorRole.Highlight Highlight;
    alias ColorRole.HighlightedText HighlightedText;
    alias ColorRole.Link Link;
    alias ColorRole.LinkVisited LinkVisited;
    alias ColorRole.AlternateBase AlternateBase;
    alias ColorRole.NoRole NoRole;
    alias ColorRole.ToolTipBase ToolTipBase;
    alias ColorRole.ToolTipText ToolTipText;


// Functions

    public this() {
        void* ret = qtd_QPalette_QPalette();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.GlobalColor button) {
        void* ret = qtd_QPalette_QPalette_GlobalColor(button);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QBrush) windowText, const(QBrush) button, const(QBrush) light, const(QBrush) dark, const(QBrush) mid, const(QBrush) text, const(QBrush) bright_text, const(QBrush) base, const(QBrush) window) {
        void* ret = qtd_QPalette_QPalette_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(windowText is null ? null : (cast(QBrush)windowText).qtdNativeId, button is null ? null : (cast(QBrush)button).qtdNativeId, light is null ? null : (cast(QBrush)light).qtdNativeId, dark is null ? null : (cast(QBrush)dark).qtdNativeId, mid is null ? null : (cast(QBrush)mid).qtdNativeId, text is null ? null : (cast(QBrush)text).qtdNativeId, bright_text is null ? null : (cast(QBrush)bright_text).qtdNativeId, base is null ? null : (cast(QBrush)base).qtdNativeId, window is null ? null : (cast(QBrush)window).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QColor) button) {
        void* ret = qtd_QPalette_QPalette_QColor(button is null ? null : (cast(QColor)button).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QColor) button, const(QColor) window) {
        void* ret = qtd_QPalette_QPalette_QColor_QColor(button is null ? null : (cast(QColor)button).qtdNativeId, window is null ? null : (cast(QColor)window).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPalette) palette) {
        void* ret = qtd_QPalette_QPalette_QPalette(palette is null ? null : (cast(QPalette)palette).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QBrush) alternateBase() const {
        void* ret = qtd_QPalette_alternateBase_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) base() const {
        void* ret = qtd_QPalette_base_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) brightText() const {
        void* ret = qtd_QPalette_brightText_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) brush(QPalette.ColorGroup cg, QPalette.ColorRole cr) const {
        void* ret = qtd_QPalette_brush_ColorGroup_ColorRole_const(qtdNativeId, cg, cr);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) brush(QPalette.ColorRole cr) const {
        void* ret = qtd_QPalette_brush_ColorRole_const(qtdNativeId, cr);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) button() const {
        void* ret = qtd_QPalette_button_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) buttonText() const {
        void* ret = qtd_QPalette_buttonText_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final long cacheKey() const {
        return qtd_QPalette_cacheKey_const(qtdNativeId);
    }

    public final const(QColor) color(QPalette.ColorGroup cg, QPalette.ColorRole cr) const {
        void* ret = qtd_QPalette_color_ColorGroup_ColorRole_const(qtdNativeId, cg, cr);
        const(QColor) __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final const(QColor) color(QPalette.ColorRole cr) const {
        void* ret = qtd_QPalette_color_ColorRole_const(qtdNativeId, cr);
        const(QColor) __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QPalette.ColorGroup currentColorGroup() const {
        return cast(QPalette.ColorGroup) qtd_QPalette_currentColorGroup_const(qtdNativeId);
    }

    public final const(QBrush) dark() const {
        void* ret = qtd_QPalette_dark_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) highlight() const {
        void* ret = qtd_QPalette_highlight_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) highlightedText() const {
        void* ret = qtd_QPalette_highlightedText_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final bool isBrushSet(QPalette.ColorGroup cg, QPalette.ColorRole cr) const {
        return qtd_QPalette_isBrushSet_ColorGroup_ColorRole_const(qtdNativeId, cg, cr);
    }

    public final bool isCopyOf(const(QPalette) p) const {
        return qtd_QPalette_isCopyOf_QPalette_const(qtdNativeId, p is null ? null : (cast(QPalette)p).qtdNativeId);
    }

    public final bool isEqual(QPalette.ColorGroup cr1, QPalette.ColorGroup cr2) const {
        return qtd_QPalette_isEqual_ColorGroup_ColorGroup_const(qtdNativeId, cr1, cr2);
    }

    public final const(QBrush) light() const {
        void* ret = qtd_QPalette_light_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) link() const {
        void* ret = qtd_QPalette_link_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) linkVisited() const {
        void* ret = qtd_QPalette_linkVisited_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) mid() const {
        void* ret = qtd_QPalette_mid_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) midlight() const {
        void* ret = qtd_QPalette_midlight_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QPalette_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream ds) {
        qtd_QPalette_writeTo_QDataStream(qtdNativeId, ds is null ? null : ds.qtdNativeId);
    }

    private final bool operator_equal(const(QPalette) p) const {
        return qtd_QPalette_operator_equal_QPalette_const(qtdNativeId, p is null ? null : (cast(QPalette)p).qtdNativeId);
    }

    public final void readFrom(QDataStream ds) {
        qtd_QPalette_readFrom_QDataStream(qtdNativeId, ds is null ? null : ds.qtdNativeId);
    }

    public final uint resolve() const {
        return qtd_QPalette_resolve_const(qtdNativeId);
    }

    public final QPalette resolve(const(QPalette) arg__1) const {
        void* ret = qtd_QPalette_resolve_QPalette_const(qtdNativeId, arg__1 is null ? null : (cast(QPalette)arg__1).qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public final void resolve(uint mask) {
        qtd_QPalette_resolve_uint(qtdNativeId, mask);
    }

    public final void setBrush(QPalette.ColorGroup cg, QPalette.ColorRole cr, const(QBrush) brush) {
        qtd_QPalette_setBrush_ColorGroup_ColorRole_QBrush(qtdNativeId, cg, cr, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setBrush(QPalette.ColorRole cr, const(QBrush) brush) {
        qtd_QPalette_setBrush_ColorRole_QBrush(qtdNativeId, cr, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setColor(QPalette.ColorGroup cg, QPalette.ColorRole cr, const(QColor) color) {
        qtd_QPalette_setColor_ColorGroup_ColorRole_QColor(qtdNativeId, cg, cr, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setColor(QPalette.ColorRole cr, const(QColor) color) {
        qtd_QPalette_setColor_ColorRole_QColor(qtdNativeId, cr, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setColorGroup(QPalette.ColorGroup cr, const(QBrush) windowText, const(QBrush) button, const(QBrush) light, const(QBrush) dark, const(QBrush) mid, const(QBrush) text, const(QBrush) bright_text, const(QBrush) base, const(QBrush) window) {
        qtd_QPalette_setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(qtdNativeId, cr, windowText is null ? null : (cast(QBrush)windowText).qtdNativeId, button is null ? null : (cast(QBrush)button).qtdNativeId, light is null ? null : (cast(QBrush)light).qtdNativeId, dark is null ? null : (cast(QBrush)dark).qtdNativeId, mid is null ? null : (cast(QBrush)mid).qtdNativeId, text is null ? null : (cast(QBrush)text).qtdNativeId, bright_text is null ? null : (cast(QBrush)bright_text).qtdNativeId, base is null ? null : (cast(QBrush)base).qtdNativeId, window is null ? null : (cast(QBrush)window).qtdNativeId);
    }

    public final void setCurrentColorGroup(QPalette.ColorGroup cg) {
        qtd_QPalette_setCurrentColorGroup_ColorGroup(qtdNativeId, cg);
    }

    public final const(QBrush) shadow() const {
        void* ret = qtd_QPalette_shadow_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) text() const {
        void* ret = qtd_QPalette_text_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) toolTipBase() const {
        void* ret = qtd_QPalette_toolTipBase_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) toolTipText() const {
        void* ret = qtd_QPalette_toolTipText_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) window() const {
        void* ret = qtd_QPalette_window_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final const(QBrush) windowText() const {
        void* ret = qtd_QPalette_windowText_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPalette;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPalette_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPalette_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPalette_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPalette_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPalette_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPalette_QTypeInfo_isComplex();
        isStatic = qtd_QPalette_QTypeInfo_isStatic();
        isLarge = qtd_QPalette_QTypeInfo_isLarge();
        isPointer = qtd_QPalette_QTypeInfo_isPointer();
        isDummy = qtd_QPalette_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QPalette_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPalette_native_copy(const void* orig);
extern (C) void qtd_QPalette_delete(void *ptr);
extern (C) void qtd_QPalette_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPalette_QPalette();
private extern(C) void* qtd_QPalette_QPalette_GlobalColor(int button0);
private extern(C) void* qtd_QPalette_QPalette_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(void* windowText0,
 void* button1,
 void* light2,
 void* dark3,
 void* mid4,
 void* text5,
 void* bright_text6,
 void* base7,
 void* window8);
private extern(C) void* qtd_QPalette_QPalette_QColor(void* button0);
private extern(C) void* qtd_QPalette_QPalette_QColor_QColor(void* button0,
 void* window1);
private extern(C) void* qtd_QPalette_QPalette_QPalette(void* palette0);
private extern(C) void*  qtd_QPalette_alternateBase_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_base_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_brightText_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_brush_ColorGroup_ColorRole_const(void* __this_nativeId,
 int cg0,
 int cr1);
private extern(C) void*  qtd_QPalette_brush_ColorRole_const(void* __this_nativeId,
 int cr0);
private extern(C) void*  qtd_QPalette_button_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_buttonText_const(void* __this_nativeId);
private extern(C) long  qtd_QPalette_cacheKey_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_color_ColorGroup_ColorRole_const(void* __this_nativeId,
 int cg0,
 int cr1);
private extern(C) void*  qtd_QPalette_color_ColorRole_const(void* __this_nativeId,
 int cr0);
private extern(C) int  qtd_QPalette_currentColorGroup_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_dark_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_highlight_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_highlightedText_const(void* __this_nativeId);
private extern(C) bool  qtd_QPalette_isBrushSet_ColorGroup_ColorRole_const(void* __this_nativeId,
 int cg0,
 int cr1);
private extern(C) bool  qtd_QPalette_isCopyOf_QPalette_const(void* __this_nativeId,
 void* p0);
private extern(C) bool  qtd_QPalette_isEqual_ColorGroup_ColorGroup_const(void* __this_nativeId,
 int cr10,
 int cr21);
private extern(C) void*  qtd_QPalette_light_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_link_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_linkVisited_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_mid_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_midlight_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QPalette_writeTo_QDataStream(void* __this_nativeId,
 void* ds0);
private extern(C) bool  qtd_QPalette_operator_equal_QPalette_const(void* __this_nativeId,
 void* p0);
private extern(C) void  qtd_QPalette_readFrom_QDataStream(void* __this_nativeId,
 void* ds0);
private extern(C) uint  qtd_QPalette_resolve_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_resolve_QPalette_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPalette_resolve_uint(void* __this_nativeId,
 uint mask0);
private extern(C) void  qtd_QPalette_setBrush_ColorGroup_ColorRole_QBrush(void* __this_nativeId,
 int cg0,
 int cr1,
 void* brush2);
private extern(C) void  qtd_QPalette_setBrush_ColorRole_QBrush(void* __this_nativeId,
 int cr0,
 void* brush1);
private extern(C) void  qtd_QPalette_setColor_ColorGroup_ColorRole_QColor(void* __this_nativeId,
 int cg0,
 int cr1,
 void* color2);
private extern(C) void  qtd_QPalette_setColor_ColorRole_QColor(void* __this_nativeId,
 int cr0,
 void* color1);
private extern(C) void  qtd_QPalette_setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(void* __this_nativeId,
 int cr0,
 void* windowText1,
 void* button2,
 void* light3,
 void* dark4,
 void* mid5,
 void* text6,
 void* bright_text7,
 void* base8,
 void* window9);
private extern(C) void  qtd_QPalette_setCurrentColorGroup_ColorGroup(void* __this_nativeId,
 int cg0);
private extern(C) void*  qtd_QPalette_shadow_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_text_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_toolTipBase_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_toolTipText_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_window_const(void* __this_nativeId);
private extern(C) void*  qtd_QPalette_windowText_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QPalette() {
    QPalette.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QPalette_QTypeInfo_isComplex();
private extern (C) bool qtd_QPalette_QTypeInfo_isStatic();
private extern (C) bool qtd_QPalette_QTypeInfo_isLarge();
private extern (C) bool qtd_QPalette_QTypeInfo_isPointer();
private extern (C) bool qtd_QPalette_QTypeInfo_isDummy();
