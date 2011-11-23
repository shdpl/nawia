module qt.gui.QFontInfo;

public import qt.gui.QFontInfo_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QFont;
public import qt.gui.QFont;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFontInfo : QtdObject
{

// Functions

    public this(const(QFont) arg__1) {
        void* ret = qtd_QFontInfo_QFontInfo_QFont(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFontInfo) arg__1) {
        void* ret = qtd_QFontInfo_QFontInfo_QFontInfo(arg__1 is null ? null : (cast(QFontInfo)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool bold() const {
        return qtd_QFontInfo_bold_const(qtdNativeId);
    }

    public final bool exactMatch() const {
        return qtd_QFontInfo_exactMatch_const(qtdNativeId);
    }

    public final string family() const {
        string res;
        qtd_QFontInfo_family_const(qtdNativeId, &res);
        return res;
    }

    public final bool fixedPitch() const {
        return qtd_QFontInfo_fixedPitch_const(qtdNativeId);
    }

    public final bool italic() const {
        return qtd_QFontInfo_italic_const(qtdNativeId);
    }

    public final bool overline() const {
        return qtd_QFontInfo_overline_const(qtdNativeId);
    }

    public final int pixelSize() const {
        return qtd_QFontInfo_pixelSize_const(qtdNativeId);
    }

    public final int pointSize() const {
        return qtd_QFontInfo_pointSize_const(qtdNativeId);
    }

    public final double pointSizeF() const {
        return qtd_QFontInfo_pointSizeF_const(qtdNativeId);
    }

    public final bool rawMode() const {
        return qtd_QFontInfo_rawMode_const(qtdNativeId);
    }

    public final bool strikeOut() const {
        return qtd_QFontInfo_strikeOut_const(qtdNativeId);
    }

    public final QFont.Style style() const {
        return cast(QFont.Style) qtd_QFontInfo_style_const(qtdNativeId);
    }

    public final QFont.StyleHint styleHint() const {
        return cast(QFont.StyleHint) qtd_QFontInfo_styleHint_const(qtdNativeId);
    }

    public final bool underline() const {
        return qtd_QFontInfo_underline_const(qtdNativeId);
    }

    public final int weight() const {
        return qtd_QFontInfo_weight_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QFontInfo;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QFontInfo_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QFontInfo_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QFontInfo_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QFontInfo_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QFontInfo_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QFontInfo_QTypeInfo_isComplex();
        isStatic = qtd_QFontInfo_QTypeInfo_isStatic();
        isLarge = qtd_QFontInfo_QTypeInfo_isLarge();
        isPointer = qtd_QFontInfo_QTypeInfo_isPointer();
        isDummy = qtd_QFontInfo_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QFontInfo_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QFontInfo_native_copy(const void* orig);
extern (C) void qtd_QFontInfo_delete(void *ptr);
extern (C) void qtd_QFontInfo_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFontInfo_QFontInfo_QFont(void* arg__1);
private extern(C) void* qtd_QFontInfo_QFontInfo_QFontInfo(void* arg__1);
private extern(C) bool  qtd_QFontInfo_bold_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontInfo_exactMatch_const(void* __this_nativeId);
private extern(C) void  qtd_QFontInfo_family_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QFontInfo_fixedPitch_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontInfo_italic_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontInfo_overline_const(void* __this_nativeId);
private extern(C) int  qtd_QFontInfo_pixelSize_const(void* __this_nativeId);
private extern(C) int  qtd_QFontInfo_pointSize_const(void* __this_nativeId);
private extern(C) double  qtd_QFontInfo_pointSizeF_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontInfo_rawMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontInfo_strikeOut_const(void* __this_nativeId);
private extern(C) int  qtd_QFontInfo_style_const(void* __this_nativeId);
private extern(C) int  qtd_QFontInfo_styleHint_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontInfo_underline_const(void* __this_nativeId);
private extern(C) int  qtd_QFontInfo_weight_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QFontInfo() {
    QFontInfo.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QFontInfo_QTypeInfo_isComplex();
private extern (C) bool qtd_QFontInfo_QTypeInfo_isStatic();
private extern (C) bool qtd_QFontInfo_QTypeInfo_isLarge();
private extern (C) bool qtd_QFontInfo_QTypeInfo_isPointer();
private extern (C) bool qtd_QFontInfo_QTypeInfo_isDummy();
