module qt.gui.QFontMetricsF;

public import qt.gui.QFontMetricsF_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QRectF;
public import qt.gui.QFont;
public import qt.core.QSizeF;
public import qt.gui.QFontMetrics;
public import qt.gui.QPaintDevice;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QFontMetricsF : QtdObject
{

// Functions

    public this(const(QFont) arg__1) {
        void* ret = qtd_QFontMetricsF_QFontMetricsF_QFont(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFont) arg__1, IQPaintDevice pd) {
        void* ret = qtd_QFontMetricsF_QFontMetricsF_QFont_QPaintDevice(arg__1 is null ? null : (cast(QFont)arg__1).qtdNativeId, pd is null ? null : pd.__ptr_IQPaintDevice);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFontMetrics) arg__1) {
        void* ret = qtd_QFontMetricsF_QFontMetricsF_QFontMetrics(arg__1 is null ? null : (cast(QFontMetrics)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QFontMetricsF) arg__1) {
        void* ret = qtd_QFontMetricsF_QFontMetricsF_QFontMetricsF(arg__1 is null ? null : (cast(QFontMetricsF)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double ascent() const {
        return qtd_QFontMetricsF_ascent_const(qtdNativeId);
    }

    public final double averageCharWidth() const {
        return qtd_QFontMetricsF_averageCharWidth_const(qtdNativeId);
    }

    private final QRectF boundingRect(const(QRectF) r, int flags, string string, int tabstops, int* tabarray) const {
        QRectF res;
        qtd_QFontMetricsF_boundingRect_QRectF_int_string_int_nativepointerint_const(qtdNativeId, &res, r, flags, string, tabstops, tabarray);
        return res;
    }

    public final QRectF boundingRect(string string) const {
        QRectF res;
        qtd_QFontMetricsF_boundingRect_string_const(qtdNativeId, &res, string);
        return res;
    }

    public final double descent() const {
        return qtd_QFontMetricsF_descent_const(qtdNativeId);
    }

    public final string elidedText(string text, Qt.TextElideMode mode, double width, int flags = 0) const {
        string res;
        qtd_QFontMetricsF_elidedText_string_TextElideMode_double_int_const(qtdNativeId, &res, text, mode, width, flags);
        return res;
    }

    public final double height() const {
        return qtd_QFontMetricsF_height_const(qtdNativeId);
    }

    public final double leading() const {
        return qtd_QFontMetricsF_leading_const(qtdNativeId);
    }

    public final double lineSpacing() const {
        return qtd_QFontMetricsF_lineSpacing_const(qtdNativeId);
    }

    public final double lineWidth() const {
        return qtd_QFontMetricsF_lineWidth_const(qtdNativeId);
    }

    public final double maxWidth() const {
        return qtd_QFontMetricsF_maxWidth_const(qtdNativeId);
    }

    public final double minLeftBearing() const {
        return qtd_QFontMetricsF_minLeftBearing_const(qtdNativeId);
    }

    public final double minRightBearing() const {
        return qtd_QFontMetricsF_minRightBearing_const(qtdNativeId);
    }

    private final bool operator_equal(const(QFontMetricsF) other) const {
        return qtd_QFontMetricsF_operator_equal_QFontMetricsF_const(qtdNativeId, other is null ? null : (cast(QFontMetricsF)other).qtdNativeId);
    }

    public final double overlinePos() const {
        return qtd_QFontMetricsF_overlinePos_const(qtdNativeId);
    }

    private final QSizeF size(int flags, string str, int tabstops, int* tabarray) const {
        QSizeF res;
        qtd_QFontMetricsF_size_int_string_int_nativepointerint_const(qtdNativeId, &res, flags, str, tabstops, tabarray);
        return res;
    }

    public final double strikeOutPos() const {
        return qtd_QFontMetricsF_strikeOutPos_const(qtdNativeId);
    }

    public final QRectF tightBoundingRect(string text) const {
        QRectF res;
        qtd_QFontMetricsF_tightBoundingRect_string_const(qtdNativeId, &res, text);
        return res;
    }

    public final double underlinePos() const {
        return qtd_QFontMetricsF_underlinePos_const(qtdNativeId);
    }

    public final double width(string string) const {
        return qtd_QFontMetricsF_width_string_const(qtdNativeId, string);
    }

    public final double xHeight() const {
        return qtd_QFontMetricsF_xHeight_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QFontMetricsF;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QFontMetricsF_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QFontMetricsF_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QFontMetricsF_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QFontMetricsF_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QFontMetricsF_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QFontMetricsF_QTypeInfo_isComplex();
        isStatic = qtd_QFontMetricsF_QTypeInfo_isStatic();
        isLarge = qtd_QFontMetricsF_QTypeInfo_isLarge();
        isPointer = qtd_QFontMetricsF_QTypeInfo_isPointer();
        isDummy = qtd_QFontMetricsF_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    // TEMPLATE - gui.fontmetricsf_boundingrect - START
    // TEMPLATE - gui.fontmetrics_tabarray_function - START
    public final QRectF boundingRect(QRectF rect, int flags, string text, int tabStops = 0, in int[] tabArray = null) {
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
    // TEMPLATE - gui.fontmetricsf_boundingrect - END


    // TEMPLATE - gui.fontmetrics_tabarray_function - START
    public final QSizeF size(int flags, string text, int tabStops = 0, in int[] tabArray = null) {
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
private extern(C) void qtd_QFontMetricsF_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QFontMetricsF_native_copy(const void* orig);
extern (C) void qtd_QFontMetricsF_delete(void *ptr);
extern (C) void qtd_QFontMetricsF_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFontMetricsF_QFontMetricsF_QFont(void* arg__1);
private extern(C) void* qtd_QFontMetricsF_QFontMetricsF_QFont_QPaintDevice(void* arg__1,
 void* pd1);
private extern(C) void* qtd_QFontMetricsF_QFontMetricsF_QFontMetrics(void* arg__1);
private extern(C) void* qtd_QFontMetricsF_QFontMetricsF_QFontMetricsF(void* arg__1);
private extern(C) double  qtd_QFontMetricsF_ascent_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_averageCharWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetricsF_boundingRect_QRectF_int_string_int_nativepointerint_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF r0,
 int flags1,
 string string2,
 int tabstops3,
 int* tabarray4);
private extern(C) void  qtd_QFontMetricsF_boundingRect_string_const(void* __this_nativeId,
 QRectF * __d_return_value,
 string string0);
private extern(C) double  qtd_QFontMetricsF_descent_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetricsF_elidedText_string_TextElideMode_double_int_const(void* __this_nativeId,
 void* __d_return_value,
 string text0,
 int mode1,
 double width2,
 int flags3);
private extern(C) double  qtd_QFontMetricsF_height_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_leading_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_lineSpacing_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_lineWidth_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_maxWidth_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_minLeftBearing_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_minRightBearing_const(void* __this_nativeId);
private extern(C) bool  qtd_QFontMetricsF_operator_equal_QFontMetricsF_const(void* __this_nativeId,
 void* other0);
private extern(C) double  qtd_QFontMetricsF_overlinePos_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetricsF_size_int_string_int_nativepointerint_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int flags0,
 string str1,
 int tabstops2,
 int* tabarray3);
private extern(C) double  qtd_QFontMetricsF_strikeOutPos_const(void* __this_nativeId);
private extern(C) void  qtd_QFontMetricsF_tightBoundingRect_string_const(void* __this_nativeId,
 QRectF * __d_return_value,
 string text0);
private extern(C) double  qtd_QFontMetricsF_underlinePos_const(void* __this_nativeId);
private extern(C) double  qtd_QFontMetricsF_width_string_const(void* __this_nativeId,
 string string0);
private extern(C) double  qtd_QFontMetricsF_xHeight_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QFontMetricsF() {
    QFontMetricsF.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QFontMetricsF_QTypeInfo_isComplex();
private extern (C) bool qtd_QFontMetricsF_QTypeInfo_isStatic();
private extern (C) bool qtd_QFontMetricsF_QTypeInfo_isLarge();
private extern (C) bool qtd_QFontMetricsF_QTypeInfo_isPointer();
private extern (C) bool qtd_QFontMetricsF_QTypeInfo_isDummy();
