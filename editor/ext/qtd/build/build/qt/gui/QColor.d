module qt.gui.QColor;

public import qt.gui.QColor_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QVariant;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QColor : QtdObject
{
    public enum Spec {
        Invalid = 0,
        Rgb = 1,
        Hsv = 2,
        Cmyk = 3,
        Hsl = 4
    }

    alias Spec.Invalid Invalid;
    alias Spec.Rgb Rgb;
    alias Spec.Hsv Hsv;
    alias Spec.Cmyk Cmyk;
    alias Spec.Hsl Hsl;


// Functions

    public this() {
        void* ret = qtd_QColor_QColor();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.GlobalColor color) {
        void* ret = qtd_QColor_QColor_GlobalColor(color);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QColor) color) {
        void* ret = qtd_QColor_QColor_QColor(color is null ? null : (cast(QColor)color).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string name) {
        void* ret = qtd_QColor_QColor_string(name);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int r, int g, int b, int a = 255) {
        void* ret = qtd_QColor_QColor_int_int_int_int(r, g, b, a);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(uint rgb) {
        void* ret = qtd_QColor_QColor_uint(rgb);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alpha() const {
        return qtd_QColor_alpha_const(qtdNativeId);
    }

    public final double alphaF() const {
        return qtd_QColor_alphaF_const(qtdNativeId);
    }

    public final int black() const {
        return qtd_QColor_black_const(qtdNativeId);
    }

    public final double blackF() const {
        return qtd_QColor_blackF_const(qtdNativeId);
    }

    public final int blue() const {
        return qtd_QColor_blue_const(qtdNativeId);
    }

    public final double blueF() const {
        return qtd_QColor_blueF_const(qtdNativeId);
    }

    public final QColor convertTo(QColor.Spec colorSpec) const {
        void* ret = qtd_QColor_convertTo_Spec_const(qtdNativeId, colorSpec);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final int cyan() const {
        return qtd_QColor_cyan_const(qtdNativeId);
    }

    public final double cyanF() const {
        return qtd_QColor_cyanF_const(qtdNativeId);
    }

    public final QColor darker(int f = 200) const {
        void* ret = qtd_QColor_darker_int_const(qtdNativeId, f);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final void getHsl(int* h, int* s, int* l, int* a = null) const {
        qtd_QColor_getHsl_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(qtdNativeId, h, s, l, a);
    }

    public final void getHslF(double* h, double* s, double* l, double* a = null) const {
        qtd_QColor_getHslF_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const(qtdNativeId, h, s, l, a);
    }

    public final int green() const {
        return qtd_QColor_green_const(qtdNativeId);
    }

    public final double greenF() const {
        return qtd_QColor_greenF_const(qtdNativeId);
    }

    public final int hslHue() const {
        return qtd_QColor_hslHue_const(qtdNativeId);
    }

    public final double hslHueF() const {
        return qtd_QColor_hslHueF_const(qtdNativeId);
    }

    public final int hslSaturation() const {
        return qtd_QColor_hslSaturation_const(qtdNativeId);
    }

    public final double hslSaturationF() const {
        return qtd_QColor_hslSaturationF_const(qtdNativeId);
    }

    public final int hsvHue() const {
        return qtd_QColor_hsvHue_const(qtdNativeId);
    }

    public final double hsvHueF() const {
        return qtd_QColor_hsvHueF_const(qtdNativeId);
    }

    public final int hsvSaturation() const {
        return qtd_QColor_hsvSaturation_const(qtdNativeId);
    }

    public final double hsvSaturationF() const {
        return qtd_QColor_hsvSaturationF_const(qtdNativeId);
    }

    public final int hue() const {
        return qtd_QColor_hue_const(qtdNativeId);
    }

    public final double hueF() const {
        return qtd_QColor_hueF_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QColor_isValid_const(qtdNativeId);
    }

    public final QColor lighter(int f = 150) const {
        void* ret = qtd_QColor_lighter_int_const(qtdNativeId, f);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final int lightness() const {
        return qtd_QColor_lightness_const(qtdNativeId);
    }

    public final double lightnessF() const {
        return qtd_QColor_lightnessF_const(qtdNativeId);
    }

    public final int magenta() const {
        return qtd_QColor_magenta_const(qtdNativeId);
    }

    public final double magentaF() const {
        return qtd_QColor_magentaF_const(qtdNativeId);
    }

    public final string name() const {
        string res;
        qtd_QColor_name_const(qtdNativeId, &res);
        return res;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QColor_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QColor_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QColor) c) const {
        return qtd_QColor_operator_equal_QColor_const(qtdNativeId, c is null ? null : (cast(QColor)c).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QColor_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final int red() const {
        return qtd_QColor_red_const(qtdNativeId);
    }

    public final double redF() const {
        return qtd_QColor_redF_const(qtdNativeId);
    }

    public final uint rgb() const {
        return qtd_QColor_rgb_const(qtdNativeId);
    }

    public final uint rgba() const {
        return qtd_QColor_rgba_const(qtdNativeId);
    }

    public final int saturation() const {
        return qtd_QColor_saturation_const(qtdNativeId);
    }

    public final double saturationF() const {
        return qtd_QColor_saturationF_const(qtdNativeId);
    }

    public final void setAlpha(int alpha) {
        qtd_QColor_setAlpha_int(qtdNativeId, alpha);
    }

    public final void setAlphaF(double alpha) {
        qtd_QColor_setAlphaF_double(qtdNativeId, alpha);
    }

    public final void setBlue(int blue) {
        qtd_QColor_setBlue_int(qtdNativeId, blue);
    }

    public final void setBlueF(double blue) {
        qtd_QColor_setBlueF_double(qtdNativeId, blue);
    }

    public final void setCmyk(int c, int m, int y, int k, int a = 255) {
        qtd_QColor_setCmyk_int_int_int_int_int(qtdNativeId, c, m, y, k, a);
    }

    public final void setCmykF(double c, double m, double y, double k, double a = 1.0) {
        qtd_QColor_setCmykF_double_double_double_double_double(qtdNativeId, c, m, y, k, a);
    }

    public final void setGreen(int green) {
        qtd_QColor_setGreen_int(qtdNativeId, green);
    }

    public final void setGreenF(double green) {
        qtd_QColor_setGreenF_double(qtdNativeId, green);
    }

    public final void setHsl(int h, int s, int l, int a = 255) {
        qtd_QColor_setHsl_int_int_int_int(qtdNativeId, h, s, l, a);
    }

    public final void setHslF(double h, double s, double l, double a = 1.0) {
        qtd_QColor_setHslF_double_double_double_double(qtdNativeId, h, s, l, a);
    }

    public final void setHsv(int h, int s, int v, int a = 255) {
        qtd_QColor_setHsv_int_int_int_int(qtdNativeId, h, s, v, a);
    }

    public final void setHsvF(double h, double s, double v, double a = 1.0) {
        qtd_QColor_setHsvF_double_double_double_double(qtdNativeId, h, s, v, a);
    }

    public final void setNamedColor(string name) {
        qtd_QColor_setNamedColor_string(qtdNativeId, name);
    }

    public final void setRed(int red) {
        qtd_QColor_setRed_int(qtdNativeId, red);
    }

    public final void setRedF(double red) {
        qtd_QColor_setRedF_double(qtdNativeId, red);
    }

    public final void setRgb(int r, int g, int b, int a = 255) {
        qtd_QColor_setRgb_int_int_int_int(qtdNativeId, r, g, b, a);
    }

    public final void setRgb(uint rgb) {
        qtd_QColor_setRgb_uint(qtdNativeId, rgb);
    }

    public final void setRgbF(double r, double g, double b, double a = 1.0) {
        qtd_QColor_setRgbF_double_double_double_double(qtdNativeId, r, g, b, a);
    }

    public final void setRgba(uint rgba) {
        qtd_QColor_setRgba_uint(qtdNativeId, rgba);
    }

    public final QColor.Spec spec() const {
        return cast(QColor.Spec) qtd_QColor_spec_const(qtdNativeId);
    }

    public final QColor toCmyk() const {
        void* ret = qtd_QColor_toCmyk_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QColor toHsl() const {
        void* ret = qtd_QColor_toHsl_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QColor toHsv() const {
        void* ret = qtd_QColor_toHsv_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final QColor toRgb() const {
        void* ret = qtd_QColor_toRgb_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final int value() const {
        return qtd_QColor_value_const(qtdNativeId);
    }

    public final double valueF() const {
        return qtd_QColor_valueF_const(qtdNativeId);
    }

    public final int yellow() const {
        return qtd_QColor_yellow_const(qtdNativeId);
    }

    public final double yellowF() const {
        return qtd_QColor_yellowF_const(qtdNativeId);
    }

    public static QList!(string) colorNames() {
        auto res = QList!(string).opCall();
        qtd_QColor_colorNames(&res);
        return res;
    }

    public static QColor fromCmyk(int c, int m, int y, int k, int a = 255) {
        void* ret = qtd_QColor_fromCmyk_int_int_int_int_int(c, m, y, k, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromCmykF(double c, double m, double y, double k, double a = 1.0) {
        void* ret = qtd_QColor_fromCmykF_double_double_double_double_double(c, m, y, k, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromHsl(int h, int s, int l, int a = 255) {
        void* ret = qtd_QColor_fromHsl_int_int_int_int(h, s, l, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromHslF(double h, double s, double l, double a = 1.0) {
        void* ret = qtd_QColor_fromHslF_double_double_double_double(h, s, l, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromHsv(int h, int s, int v, int a = 255) {
        void* ret = qtd_QColor_fromHsv_int_int_int_int(h, s, v, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromHsvF(double h, double s, double v, double a = 1.0) {
        void* ret = qtd_QColor_fromHsvF_double_double_double_double(h, s, v, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromRgb(int r, int g, int b, int a = 255) {
        void* ret = qtd_QColor_fromRgb_int_int_int_int(r, g, b, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromRgb(uint rgb) {
        void* ret = qtd_QColor_fromRgb_uint(rgb);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromRgbF(double r, double g, double b, double a = 1.0) {
        void* ret = qtd_QColor_fromRgbF_double_double_double_double(r, g, b, a);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static QColor fromRgba(uint rgba) {
        void* ret = qtd_QColor_fromRgba_uint(rgba);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public static bool isValidColor(string name) {
        return qtd_QColor_isValidColor_string(name);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QColor;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QColor_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QColor_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QColor_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QColor_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QColor_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QColor_QTypeInfo_isComplex();
        isStatic = qtd_QColor_QTypeInfo_isStatic();
        isLarge = qtd_QColor_QTypeInfo_isLarge();
        isPointer = qtd_QColor_QTypeInfo_isPointer();
        isDummy = qtd_QColor_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    static this() {
        White = new QColor(Qt.GlobalColor.white);
        Black = new QColor(Qt.GlobalColor.black);
        Red = new QColor(Qt.GlobalColor.red);
        DarkRed = new QColor(Qt.GlobalColor.darkRed);
        Green = new QColor(Qt.GlobalColor.green);
        DarkGreen = new QColor(Qt.GlobalColor.darkGreen);
        Blue = new QColor(Qt.GlobalColor.blue);
        DarkBlue = new QColor(Qt.GlobalColor.darkBlue);
        Cyan = new QColor(Qt.GlobalColor.cyan);
        DarkCyan = new QColor(Qt.GlobalColor.darkCyan);
        Magenta = new QColor(Qt.GlobalColor.magenta);
        DarkMagenta = new QColor(Qt.GlobalColor.darkMagenta);
        Yellow = new QColor(Qt.GlobalColor.yellow);
        DarkYellow = new QColor(Qt.GlobalColor.darkYellow);
        Gray = new QColor(Qt.GlobalColor.gray);
        DarkGray = new QColor(Qt.GlobalColor.darkGray);
        LightGray = new QColor(Qt.GlobalColor.lightGray);
        Transparent = new QColor(Qt.GlobalColor.transparent);
        Color0 = new QColor(Qt.GlobalColor.color0);
        Color1 = new QColor(Qt.GlobalColor.color1);
    }

    public static const QColor White;
    public static const QColor Black;
    public static const QColor Red;
    public static const QColor DarkRed;
    public static const QColor Green;
    public static const QColor DarkGreen;
    public static const QColor Blue;
    public static const QColor DarkBlue;
    public static const QColor Cyan;
    public static const QColor DarkCyan;
    public static const QColor Magenta;
    public static const QColor DarkMagenta;
    public static const QColor Yellow;
    public static const QColor DarkYellow;
    public static const QColor Gray;
    public static const QColor DarkGray;
    public static const QColor LightGray;
    public static const QColor Transparent;
    public static const QColor Color0;
    public static const QColor Color1;

}
private extern(C) void qtd_QColor_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QColor_native_copy(const void* orig);
extern (C) void qtd_QColor_delete(void *ptr);
extern (C) void qtd_QColor_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QColor_QColor();
private extern(C) void* qtd_QColor_QColor_GlobalColor(int color0);
private extern(C) void* qtd_QColor_QColor_QColor(void* color0);
private extern(C) void* qtd_QColor_QColor_string(string name0);
private extern(C) void* qtd_QColor_QColor_int_int_int_int(int r0,
 int g1,
 int b2,
 int a3);
private extern(C) void* qtd_QColor_QColor_uint(uint rgb0);
private extern(C) int  qtd_QColor_alpha_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_alphaF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_black_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_blackF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_blue_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_blueF_const(void* __this_nativeId);
private extern(C) void*  qtd_QColor_convertTo_Spec_const(void* __this_nativeId,
 int colorSpec0);
private extern(C) int  qtd_QColor_cyan_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_cyanF_const(void* __this_nativeId);
private extern(C) void*  qtd_QColor_darker_int_const(void* __this_nativeId,
 int f0);
private extern(C) void  qtd_QColor_getHsl_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const(void* __this_nativeId,
 int* h0,
 int* s1,
 int* l2,
 int* a3);
private extern(C) void  qtd_QColor_getHslF_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const(void* __this_nativeId,
 double* h0,
 double* s1,
 double* l2,
 double* a3);
private extern(C) int  qtd_QColor_green_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_greenF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_hslHue_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_hslHueF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_hslSaturation_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_hslSaturationF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_hsvHue_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_hsvHueF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_hsvSaturation_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_hsvSaturationF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_hue_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_hueF_const(void* __this_nativeId);
private extern(C) bool  qtd_QColor_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QColor_lighter_int_const(void* __this_nativeId,
 int f0);
private extern(C) int  qtd_QColor_lightness_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_lightnessF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_magenta_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_magentaF_const(void* __this_nativeId);
private extern(C) void  qtd_QColor_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QColor_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QColor_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QColor_operator_equal_QColor_const(void* __this_nativeId,
 void* c0);
private extern(C) void  qtd_QColor_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QColor_red_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_redF_const(void* __this_nativeId);
private extern(C) uint  qtd_QColor_rgb_const(void* __this_nativeId);
private extern(C) uint  qtd_QColor_rgba_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_saturation_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_saturationF_const(void* __this_nativeId);
private extern(C) void  qtd_QColor_setAlpha_int(void* __this_nativeId,
 int alpha0);
private extern(C) void  qtd_QColor_setAlphaF_double(void* __this_nativeId,
 double alpha0);
private extern(C) void  qtd_QColor_setBlue_int(void* __this_nativeId,
 int blue0);
private extern(C) void  qtd_QColor_setBlueF_double(void* __this_nativeId,
 double blue0);
private extern(C) void  qtd_QColor_setCmyk_int_int_int_int_int(void* __this_nativeId,
 int c0,
 int m1,
 int y2,
 int k3,
 int a4);
private extern(C) void  qtd_QColor_setCmykF_double_double_double_double_double(void* __this_nativeId,
 double c0,
 double m1,
 double y2,
 double k3,
 double a4);
private extern(C) void  qtd_QColor_setGreen_int(void* __this_nativeId,
 int green0);
private extern(C) void  qtd_QColor_setGreenF_double(void* __this_nativeId,
 double green0);
private extern(C) void  qtd_QColor_setHsl_int_int_int_int(void* __this_nativeId,
 int h0,
 int s1,
 int l2,
 int a3);
private extern(C) void  qtd_QColor_setHslF_double_double_double_double(void* __this_nativeId,
 double h0,
 double s1,
 double l2,
 double a3);
private extern(C) void  qtd_QColor_setHsv_int_int_int_int(void* __this_nativeId,
 int h0,
 int s1,
 int v2,
 int a3);
private extern(C) void  qtd_QColor_setHsvF_double_double_double_double(void* __this_nativeId,
 double h0,
 double s1,
 double v2,
 double a3);
private extern(C) void  qtd_QColor_setNamedColor_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QColor_setRed_int(void* __this_nativeId,
 int red0);
private extern(C) void  qtd_QColor_setRedF_double(void* __this_nativeId,
 double red0);
private extern(C) void  qtd_QColor_setRgb_int_int_int_int(void* __this_nativeId,
 int r0,
 int g1,
 int b2,
 int a3);
private extern(C) void  qtd_QColor_setRgb_uint(void* __this_nativeId,
 uint rgb0);
private extern(C) void  qtd_QColor_setRgbF_double_double_double_double(void* __this_nativeId,
 double r0,
 double g1,
 double b2,
 double a3);
private extern(C) void  qtd_QColor_setRgba_uint(void* __this_nativeId,
 uint rgba0);
private extern(C) int  qtd_QColor_spec_const(void* __this_nativeId);
private extern(C) void*  qtd_QColor_toCmyk_const(void* __this_nativeId);
private extern(C) void*  qtd_QColor_toHsl_const(void* __this_nativeId);
private extern(C) void*  qtd_QColor_toHsv_const(void* __this_nativeId);
private extern(C) void*  qtd_QColor_toRgb_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_value_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_valueF_const(void* __this_nativeId);
private extern(C) int  qtd_QColor_yellow_const(void* __this_nativeId);
private extern(C) double  qtd_QColor_yellowF_const(void* __this_nativeId);
private extern(C) void  qtd_QColor_colorNames(void* __d_return_value);
private extern(C) void*  qtd_QColor_fromCmyk_int_int_int_int_int(int c0,
 int m1,
 int y2,
 int k3,
 int a4);
private extern(C) void*  qtd_QColor_fromCmykF_double_double_double_double_double(double c0,
 double m1,
 double y2,
 double k3,
 double a4);
private extern(C) void*  qtd_QColor_fromHsl_int_int_int_int(int h0,
 int s1,
 int l2,
 int a3);
private extern(C) void*  qtd_QColor_fromHslF_double_double_double_double(double h0,
 double s1,
 double l2,
 double a3);
private extern(C) void*  qtd_QColor_fromHsv_int_int_int_int(int h0,
 int s1,
 int v2,
 int a3);
private extern(C) void*  qtd_QColor_fromHsvF_double_double_double_double(double h0,
 double s1,
 double v2,
 double a3);
private extern(C) void*  qtd_QColor_fromRgb_int_int_int_int(int r0,
 int g1,
 int b2,
 int a3);
private extern(C) void*  qtd_QColor_fromRgb_uint(uint rgb0);
private extern(C) void*  qtd_QColor_fromRgbF_double_double_double_double(double r0,
 double g1,
 double b2,
 double a3);
private extern(C) void*  qtd_QColor_fromRgba_uint(uint rgba0);
private extern(C) bool  qtd_QColor_isValidColor_string(string name0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QColor() {
    QColor.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QColor_QTypeInfo_isComplex();
private extern (C) bool qtd_QColor_QTypeInfo_isStatic();
private extern (C) bool qtd_QColor_QTypeInfo_isLarge();
private extern (C) bool qtd_QColor_QTypeInfo_isPointer();
private extern (C) bool qtd_QColor_QTypeInfo_isDummy();
