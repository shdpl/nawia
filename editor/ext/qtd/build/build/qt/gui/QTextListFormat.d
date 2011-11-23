module qt.gui.QTextListFormat;

public import qt.gui.QTextListFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextListFormat : QTextFormat
{
    public enum Style {
        ListDisc = -1,
        ListCircle = -2,
        ListSquare = -3,
        ListDecimal = -4,
        ListLowerAlpha = -5,
        ListUpperAlpha = -6,
        ListLowerRoman = -7,
        ListUpperRoman = -8,
        ListStyleUndefined = 0
    }

    alias Style.ListDisc ListDisc;
    alias Style.ListCircle ListCircle;
    alias Style.ListSquare ListSquare;
    alias Style.ListDecimal ListDecimal;
    alias Style.ListLowerAlpha ListLowerAlpha;
    alias Style.ListUpperAlpha ListUpperAlpha;
    alias Style.ListLowerRoman ListLowerRoman;
    alias Style.ListUpperRoman ListUpperRoman;
    alias Style.ListStyleUndefined ListStyleUndefined;


// Functions

    public this() {
        void* ret = qtd_QTextListFormat_QTextListFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(const(QTextFormat) fmt) {
        void* ret = qtd_QTextListFormat_QTextListFormat_QTextFormat(fmt is null ? null : (cast(QTextFormat)fmt).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int indent() const {
        return qtd_QTextListFormat_indent_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextListFormat_isValid_const(qtdNativeId);
    }

    public final void setIndent(int indent) {
        qtd_QTextListFormat_setIndent_int(qtdNativeId, indent);
    }

    public final void setStyle(QTextListFormat.Style style) {
        qtd_QTextListFormat_setStyle_Style(qtdNativeId, style);
    }

    public final QTextListFormat.Style style() const {
        return cast(QTextListFormat.Style) qtd_QTextListFormat_style_const(qtdNativeId);
    }
// Field accessors
    public alias void __isQtType_QTextListFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextListFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextListFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextListFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextListFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextListFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextListFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextListFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextListFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextListFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextListFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextListFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextListFormat_native_copy(const void* orig);
extern (C) void qtd_QTextListFormat_delete(void *ptr);
extern (C) void qtd_QTextListFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextListFormat_QTextListFormat();
private extern(C) void* qtd_QTextListFormat_QTextListFormat_QTextFormat(void* fmt0);
private extern(C) int  qtd_QTextListFormat_indent_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextListFormat_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QTextListFormat_setIndent_int(void* __this_nativeId,
 int indent0);
private extern(C) void  qtd_QTextListFormat_setStyle_Style(void* __this_nativeId,
 int style0);
private extern(C) int  qtd_QTextListFormat_style_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextListFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QTextListFormat() {
    QTextListFormat.QTypeInfo.init();
    qtd_QTextListFormat_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextListFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextListFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextListFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextListFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextListFormat_QTypeInfo_isDummy();
