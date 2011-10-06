module qt.gui.QPen;

public import qt.gui.QPen_aux;
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


public class QPen : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPen_QPen();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.PenStyle arg__1) {
        void* ret = qtd_QPen_QPen_PenStyle(arg__1);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QBrush) brush, double width, Qt.PenStyle s = Qt.PenStyle.SolidLine, Qt.PenCapStyle c = Qt.PenCapStyle.SquareCap, Qt.PenJoinStyle j = Qt.PenJoinStyle.BevelJoin) {
        void* ret = qtd_QPen_QPen_QBrush_double_PenStyle_PenCapStyle_PenJoinStyle(brush is null ? null : (cast(QBrush)brush).qtdNativeId, width, s, c, j);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QColor) color) {
        void* ret = qtd_QPen_QPen_QColor(color is null ? null : (cast(QColor)color).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPen) pen) {
        void* ret = qtd_QPen_QPen_QPen(pen is null ? null : (cast(QPen)pen).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QBrush brush() const {
        void* ret = qtd_QPen_brush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final Qt.PenCapStyle capStyle() const {
        return cast(Qt.PenCapStyle) qtd_QPen_capStyle_const(qtdNativeId);
    }

    public final QColor color() const {
        void* ret = qtd_QPen_color_const(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final double dashOffset() const {
        return qtd_QPen_dashOffset_const(qtdNativeId);
    }

    public final double[] dashPattern() const {
        double[] res;
        qtd_QPen_dashPattern_const(qtdNativeId, &res);
        return res;
    }

    public final bool isCosmetic() const {
        return qtd_QPen_isCosmetic_const(qtdNativeId);
    }

    public final bool isSolid() const {
        return qtd_QPen_isSolid_const(qtdNativeId);
    }

    public final Qt.PenJoinStyle joinStyle() const {
        return cast(Qt.PenJoinStyle) qtd_QPen_joinStyle_const(qtdNativeId);
    }

    public final double miterLimit() const {
        return qtd_QPen_miterLimit_const(qtdNativeId);
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QPen_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QPen_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QPen) p) const {
        return qtd_QPen_operator_equal_QPen_const(qtdNativeId, p is null ? null : (cast(QPen)p).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QPen_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setBrush(const(QBrush) brush) {
        qtd_QPen_setBrush_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setCapStyle(Qt.PenCapStyle pcs) {
        qtd_QPen_setCapStyle_PenCapStyle(qtdNativeId, pcs);
    }

    public final void setColor(const(QColor) color) {
        qtd_QPen_setColor_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setCosmetic(bool cosmetic) {
        qtd_QPen_setCosmetic_bool(qtdNativeId, cosmetic);
    }

    public final void setDashOffset(double doffset) {
        qtd_QPen_setDashOffset_double(qtdNativeId, doffset);
    }

    public final void setDashPattern(double[] pattern) {
        qtd_QPen_setDashPattern_QVector(qtdNativeId, &pattern);
    }

    public final void setJoinStyle(Qt.PenJoinStyle pcs) {
        qtd_QPen_setJoinStyle_PenJoinStyle(qtdNativeId, pcs);
    }

    public final void setMiterLimit(double limit) {
        qtd_QPen_setMiterLimit_double(qtdNativeId, limit);
    }

    public final void setStyle(Qt.PenStyle arg__1) {
        qtd_QPen_setStyle_PenStyle(qtdNativeId, arg__1);
    }

    public final void setWidth(int width) {
        qtd_QPen_setWidth_int(qtdNativeId, width);
    }

    public final void setWidthF(double width) {
        qtd_QPen_setWidthF_double(qtdNativeId, width);
    }

    public final Qt.PenStyle style() const {
        return cast(Qt.PenStyle) qtd_QPen_style_const(qtdNativeId);
    }

    public final int width() const {
        return qtd_QPen_width_const(qtdNativeId);
    }

    public final double widthF() const {
        return qtd_QPen_widthF_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPen;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPen_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPen_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPen_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPen_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPen_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPen_QTypeInfo_isComplex();
        isStatic = qtd_QPen_QTypeInfo_isStatic();
        isLarge = qtd_QPen_QTypeInfo_isLarge();
        isPointer = qtd_QPen_QTypeInfo_isPointer();
        isDummy = qtd_QPen_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public QPen(QColor color, double width, qt.core.Qt.PenStyle s, qt.core.Qt.PenCapStyle c, qt.core.Qt.PenJoinStyle j) {
    this(new QBrush(color), width, s, c, j);
    }

    public QPen(QColor color, double width, qt.core.Qt.PenStyle s, qt.core.Qt.PenCapStyle c) {
    this(new QBrush(color), width, s, c);
    }

    public QPen(QColor color, double width, qt.core.Qt.PenStyle s) {
    this(new QBrush(color), width, s);
    }

    public QPen(QColor color, double width) {
    this(new QBrush(color), width);
    }

    public static final QPen NoPen = new QPen(qt.core.Qt.PenStyle.NoPen);
     */

}
private extern(C) void qtd_QPen_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPen_native_copy(const void* orig);
extern (C) void qtd_QPen_delete(void *ptr);
extern (C) void qtd_QPen_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPen_QPen();
private extern(C) void* qtd_QPen_QPen_PenStyle(int arg__1);
private extern(C) void* qtd_QPen_QPen_QBrush_double_PenStyle_PenCapStyle_PenJoinStyle(void* brush0,
 double width1,
 int s2,
 int c3,
 int j4);
private extern(C) void* qtd_QPen_QPen_QColor(void* color0);
private extern(C) void* qtd_QPen_QPen_QPen(void* pen0);
private extern(C) void*  qtd_QPen_brush_const(void* __this_nativeId);
private extern(C) int  qtd_QPen_capStyle_const(void* __this_nativeId);
private extern(C) void*  qtd_QPen_color_const(void* __this_nativeId);
private extern(C) double  qtd_QPen_dashOffset_const(void* __this_nativeId);
private extern(C) void  qtd_QPen_dashPattern_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QPen_isCosmetic_const(void* __this_nativeId);
private extern(C) bool  qtd_QPen_isSolid_const(void* __this_nativeId);
private extern(C) int  qtd_QPen_joinStyle_const(void* __this_nativeId);
private extern(C) double  qtd_QPen_miterLimit_const(void* __this_nativeId);
private extern(C) void*  qtd_QPen_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QPen_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QPen_operator_equal_QPen_const(void* __this_nativeId,
 void* p0);
private extern(C) void  qtd_QPen_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPen_setBrush_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QPen_setCapStyle_PenCapStyle(void* __this_nativeId,
 int pcs0);
private extern(C) void  qtd_QPen_setColor_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QPen_setCosmetic_bool(void* __this_nativeId,
 bool cosmetic0);
private extern(C) void  qtd_QPen_setDashOffset_double(void* __this_nativeId,
 double doffset0);
private extern(C) void  qtd_QPen_setDashPattern_QVector(void* __this_nativeId,
 DArray* pattern0);
private extern(C) void  qtd_QPen_setJoinStyle_PenJoinStyle(void* __this_nativeId,
 int pcs0);
private extern(C) void  qtd_QPen_setMiterLimit_double(void* __this_nativeId,
 double limit0);
private extern(C) void  qtd_QPen_setStyle_PenStyle(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QPen_setWidth_int(void* __this_nativeId,
 int width0);
private extern(C) void  qtd_QPen_setWidthF_double(void* __this_nativeId,
 double width0);
private extern(C) int  qtd_QPen_style_const(void* __this_nativeId);
private extern(C) int  qtd_QPen_width_const(void* __this_nativeId);
private extern(C) double  qtd_QPen_widthF_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QPen() {
    QPen.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QPen_QTypeInfo_isComplex();
private extern (C) bool qtd_QPen_QTypeInfo_isStatic();
private extern (C) bool qtd_QPen_QTypeInfo_isLarge();
private extern (C) bool qtd_QPen_QTypeInfo_isPointer();
private extern (C) bool qtd_QPen_QTypeInfo_isDummy();
