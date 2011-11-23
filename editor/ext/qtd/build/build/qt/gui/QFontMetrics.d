module qt.gui.QFontMetrics;

public import qt.gui.QFontMetrics_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QFont;
public import qt.core.QRect;
public import qt.gui.QPaintDevice;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFontMetrics : QtdObject
{

// Functions

    public this(const(QFont) arg__1) {
        void* ret = qtd_QFontMetrics_QFontMetrics_QFont(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFont) arg__1, IQPaintDevice pd) {
        void* ret = qtd_QFontMetrics_QFontMetrics_QFont_QPaintDevice(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId, pd is null ? null : pd.__ptr_IQPaintDevice);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFontMetrics) arg__1) {
        void* ret = qtd_QFontMetrics_QFontMetrics_QFontMetrics(arg__1 is null ? null : (cast(QFontMetrics)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int ascent() const {
        return qtd_QFontMetrics_ascent_const(qtdNativeId);
    }

    public final int averageCharWidth() const {
        return qtd_QFontMetrics_averageCharWidth_const(qtdNativeId);
    }

    private final QRect boundingRect(const(QRect) r, int flags, string text, int tabstops, int* tabarray) const {
        QRect res;
        qtd_QFontMetrics_boundingRect_QRect_int_string_int_nativepointerint_const(qtdNativeId, &res, r, flags, text, tabstops, tabarray);
        return res;
    }

    public final QRect boundingRect(string text) const {
        QRect res;
        qtd_QFontMetrics_boundingRect_string_const(qtdNativeId, &res, text);
        return res;
    }

    private final QRect boundingRect(int x, int y, int w, int h, int flags, string text, int tabstops, int* tabarray) const {
        QRect res;
        qtd_QFontMetrics_boundingRect_int_int_int_int_int_string_int_nativepointerint_const(qtdNativeId, &res, x, y, w, h, flags, text, tabstops, tabarray);
        return res;
    }

    public final int charWidth(string str, int pos) const {
        return qtd_QFontMetrics_charWidth_string_int_const(qtdNativeId, str, pos);
    }

    public final int descent() const {
        return qtd_QFontMetrics_descent_const(qtdNativeId);
    }

    public final string elidedText(string text, Qt.TextElideMode mode, int width, int flags = 0) const {
        string res;
        qtd_QFontMetrics_elidedText_string_TextElideMode_int_int_const(qtdNativeId, &res, text, mode, width, flags);
        return res;
    }

    public final int height() const {
        return qtd_QFontMetrics_height_const(qtdNativeId);
    }

    public final int leading() const {
        return qtd_QFontMetrics_leading_const(qtdNativeId);
    }

    public final int lineSpacing() const {
        return qtd_QFontMetrics_lineSpacing_const(qtdNativeId);
    }

    public final int lineWidth() const {
        return qtd_QFontMetrics_lineWidth_const(qtdNativeId);
    }

    public final int maxWidth() const {
        return qtd_QFontMetrics_maxWidth_const(qtdNativeId);
    }

    public final int minLeftBearing() const {
        return qtd_QFontMetrics_minLeftBearing_const(qtdNativeId);
    }

    public final int minRightBearing() const {
        return qtd_QFontMetrics_minRightBearing_const(qtdNativeId);
    }

    private final bool operator_equal(const(QFontMetrics) other) const {
        return qtd_QFontMetrics_operator_equal_QFontMetrics_const(qtdNativeId, other is null ? null : (cast(QFontMetrics)other).qtdNativeId);
    }

    public final int overlinePos() const {
        return qtd_QFontMetrics_overlinePos_const(qtdNativeId);
    }

    private final QSize size(int flags, string str, int tabstops, int* tabarray) const {
        QSize res;
        qtd_QFontMetrics_size_int_string_int_nativepointerint_const(qtdNativeId, &res, flags, str, tabstops, tabarray);
        return res;
    }

    public final int strikeOutPos() const {
        return qtd_QFontMetrics_strikeOutPos_const(qtdNativeId);
    }

    public final QRect tightBoundingRect(string text) const {
        QRect res;
        qtd_QFontMetrics_tightBoundingRect_string_const(qtdNativeId, &res, text);
        return res;
    }

    public final int underlinePos() const {
        return qtd_QFontMetrics_underlinePos_const(qtdNativeId);
    }

    public final int width(string arg__1, int len = -1) const {
        return qtd_QFontMetrics_width_string_int_const(qtdNativeId, arg__1, len);
    }

    public final int width(string arg__1, int len, int flags) const {
        return qtd_QFontMetrics_width_string_int_int_const(qtdNativeId, arg__1, len, flags);
    }

    public final int xHeight() const {
        return qtd_QFontMetrics_xHeight_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QFontMetrics;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QFontMetrics_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QFontMetrics_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QFontMetrics_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QFontMetrics_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QFontMetrics_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QFontMetrics_QTypeInfo_isComplex();
        isStatic = qtd_QFontMetrics_QTypeInfo_isStatic();
        isLarge = qtd_QFontMetrics_QTypeInfo_isLarge();
        isPointer = qtd_QFontMetrics_QTypeInfo_isPointer();
        isDummy = qtd_QFontMetrics_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    // TEMPLATE - gui.fontmetrics_boundingrect - START
    // TEMPLATE - gui.fontmetrics_tabarray_function - START
    public final QRect boundingRect(int x, int y, int width, int height, int flags, string text, int tabStops = 0, in int[] tabArray = null) {
        int* ptr;
        if (tabArray != null) {
            auto copy = new int[tabArray.length + 1];
            copy[0..tabArray.length] = tabArray;
            copy[tabArray.length] = 0;
            ptr = copy.ptr;
        }
        return boundingRect(x, y, width, height, flags, text, tabStops, ptr);
    }
    // TEMPLATE - gui.fontmetrics_tabarray_function - END
    // TEMPLATE - gui.fontmetrics_boundingrect - END


    // TEMPLATE - gui.fontmetrics_boundingrect - START
    // TEMPLATE - gui.fontmetrics_tabarray_function - START
    public final QRect boundingRect(QRect rect, int flags, string text, int tabStops = 0, in int[] tabArray = null) {
        int* ptr;
        if (tabArray != null) {
            auto copy = new int[tabArray.length + 1];
            copy[0..tabArray.length] = tabArray;
            copy[tabArray.length] = 0;
            ptr = copy.ptr;
        }
        return boundingRect(rect, flags, text, tabStops, ptr);
    }
    // TEMPLATE - gui.fontmetrics_tabarray_function - END
    // TEMPLATE - gui.fontmetrics_boundingrect - END


    // TEMPLATE - gui.fontmetrics_tabarray_function - START
    public final QSize size(int flags, string text, int tabStops = 0, in int[] tabArray = null) {
        int* ptr;
        if (tabArray != null) {
            auto copy = new int[tabArray.length + 1];
            copy[0..tabArray.length] = tabArray;
            copy[tabArray.length] = 0;
            ptr = copy.ptr;
        }
        return size(flags, text, tabStops, ptr);
    }
    // TEMPLATE - gui.fontmetrics_tabarray_function - END

}
private extern(C) void qtd_QFontMetrics_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QFontMetrics_native_copy(const void* orig);
extern (C) void qtd_QFontMetrics_delete(void *ptr);
extern (C) void qtd_QFontMetrics_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFontMetrics_QFontMetrics_QFont(void* arg__1);
private extern(C) void* qtd_QFontMetrics_QFontMetrics_QFont_QPaintDevice(void* arg__1,
 void* pd1);
private extern(C) void* qtd_QFontMetrics_QFontMetrics_QFontMetrics(void* arg__1);
private extern(C) int  qtd_QFontMetrics_ascent_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_averageCharWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetrics_boundingRect_QRect_int_string_int_nativepointerint_const(void* __this_nativeId,
 QRect * __d_return_value,
 QRect r0,
 int flags1,
 string text2,
 int tabstops3,
 int* tabarray4);
private extern(C) void  qtd_QFontMetrics_boundingRect_string_const(void* __this_nativeId,
 QRect * __d_return_value,
 string text0);
private extern(C) void  qtd_QFontMetrics_boundingRect_int_int_int_int_int_string_int_nativepointerint_const(void* __this_nativeId,
 QRect * __d_return_value,
 int x0,
 int y1,
 int w2,
 int h3,
 int flags4,
 string text5,
 int tabstops6,
 int* tabarray7);
private extern(C) int  qtd_QFontMetrics_charWidth_string_int_const(void* __this_nativeId,
 string str0,
 int pos1);
private extern(C) int  qtd_QFontMetrics_descent_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetrics_elidedText_string_TextElideMode_int_int_const(void* __this_nativeId,
 void* __d_return_value,
 string text0,
 int mode1,
 int width2,
 int flags3);
private extern(C) int  qtd_QFontMetrics_height_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_leading_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_lineSpacing_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_lineWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_maxWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_minLeftBearing_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_minRightBearing_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontMetrics_operator_equal_QFontMetrics_const(void* __this_nativeId,
 void* other0);
private extern(C) int  qtd_QFontMetrics_overlinePos_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetrics_size_int_string_int_nativepointerint_const(void* __this_nativeId,
 QSize * __d_return_value,
 int flags0,
 string str1,
 int tabstops2,
 int* tabarray3);
private extern(C) int  qtd_QFontMetrics_strikeOutPos_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetrics_tightBoundingRect_string_const(void* __this_nativeId,
 QRect * __d_return_value,
 string text0);
private extern(C) int  qtd_QFontMetrics_underlinePos_const(void* __this_nativeId);
private extern(C) int  qtd_QFontMetrics_width_string_int_const(void* __this_nativeId,
 string arg__1,
 int len1);
private extern(C) int  qtd_QFontMetrics_width_string_int_int_const(void* __this_nativeId,
 string arg__1,
 int len1,
 int flags2);
private extern(C) int  qtd_QFontMetrics_xHeight_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QFontMetrics() {
    QFontMetrics.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QFontMetrics_QTypeInfo_isComplex();
private extern (C) bool qtd_QFontMetrics_QTypeInfo_isStatic();
private extern (C) bool qtd_QFontMetrics_QTypeInfo_isLarge();
private extern (C) bool qtd_QFontMetrics_QTypeInfo_isPointer();
private extern (C) bool qtd_QFontMetrics_QTypeInfo_isDummy();
