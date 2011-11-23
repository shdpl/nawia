module qt.gui.QRegion;

public import qt.gui.QRegion_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPolygon;
public import qt.gui.QBitmap;
public import qt.core.QRect;
public import qt.core.QVariant;
public import qt.core.QDataStream;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QRegion : QtdObject
{
    public enum RegionType {
        Rectangle = 0,
        Ellipse = 1
    }

    alias RegionType.Rectangle Rectangle;
    alias RegionType.Ellipse Ellipse;


// Functions

    public this() {
        void* ret = qtd_QRegion_QRegion();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QBitmap) bitmap) {
        void* ret = qtd_QRegion_QRegion_QBitmap(bitmap is null ? null : (cast(QBitmap)bitmap).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPolygon) pa, Qt.FillRule fillRule = Qt.FillRule.OddEvenFill) {
        void* ret = qtd_QRegion_QRegion_QPolygon_FillRule(pa is null ? null : (cast(QPolygon)pa).qtdNativeId, fillRule);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRect) r, QRegion.RegionType t = QRegion.RegionType.Rectangle) {
        void* ret = qtd_QRegion_QRegion_QRect_RegionType(r, t);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRegion) region) {
        void* ret = qtd_QRegion_QRegion_QRegion(region is null ? null : (cast(QRegion)region).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int x, int y, int w, int h, QRegion.RegionType t = QRegion.RegionType.Rectangle) {
        void* ret = qtd_QRegion_QRegion_int_int_int_int_RegionType(x, y, w, h, t);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QRect boundingRect() const {
        QRect res;
        qtd_QRegion_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final bool contains(const(QPoint) p) const {
        return qtd_QRegion_contains_QPoint_const(qtdNativeId, p);
    }

    public final bool contains(const(QRect) r) const {
        return qtd_QRegion_contains_QRect_const(qtdNativeId, r);
    }

    public final QRegion intersect(const(QRect) r) const {
        void* ret = qtd_QRegion_intersect_QRect_const(qtdNativeId, r);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRegion intersected(const(QRect) r) const {
        void* ret = qtd_QRegion_intersected_QRect_const(qtdNativeId, r);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRegion intersected(const(QRegion) r) const {
        void* ret = qtd_QRegion_intersected_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final bool intersects(const(QRect) r) const {
        return qtd_QRegion_intersects_QRect_const(qtdNativeId, r);
    }

    public final bool intersects(const(QRegion) r) const {
        return qtd_QRegion_intersects_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
    }

    public final bool isEmpty() const {
        return qtd_QRegion_isEmpty_const(qtdNativeId);
    }

    public final int numRects() const {
        return qtd_QRegion_numRects_const(qtdNativeId);
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QRegion_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final const(QRegion) operator_and(const(QRect) r) const {
        void* ret = qtd_QRegion_operator_and_QRect_const(qtdNativeId, r);
        const(QRegion) __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final const(QRegion) operator_add(const(QRect) r) const {
        void* ret = qtd_QRegion_operator_add_QRect_const(qtdNativeId, r);
        const(QRegion) __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QRegion_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QRegion) r) const {
        return qtd_QRegion_operator_equal_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QRegion_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final int rectCount() const {
        return qtd_QRegion_rectCount_const(qtdNativeId);
    }

    public final QRect[] rects() const {
        QRect[] res;
        qtd_QRegion_rects_const(qtdNativeId, &res);
        return res;
    }

    private final void setRects(const(QRect*) rect, int num) {
        qtd_QRegion_setRects_nativepointerQRect_int(qtdNativeId, rect, num);
    }

    public final QRegion subtracted(const(QRegion) r) const {
        void* ret = qtd_QRegion_subtracted_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final void translate(const(QPoint) p) {
        qtd_QRegion_translate_QPoint(qtdNativeId, p);
    }

    public final void translate(int dx, int dy) {
        qtd_QRegion_translate_int_int(qtdNativeId, dx, dy);
    }

    public final QRegion translated(const(QPoint) p) const {
        void* ret = qtd_QRegion_translated_QPoint_const(qtdNativeId, p);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRegion translated(int dx, int dy) const {
        void* ret = qtd_QRegion_translated_int_int_const(qtdNativeId, dx, dy);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRegion unite(const(QRect) r) const {
        void* ret = qtd_QRegion_unite_QRect_const(qtdNativeId, r);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRegion united(const(QRect) r) const {
        void* ret = qtd_QRegion_united_QRect_const(qtdNativeId, r);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRegion united(const(QRegion) r) const {
        void* ret = qtd_QRegion_united_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRegion xored(const(QRegion) r) const {
        void* ret = qtd_QRegion_xored_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QRegion;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QRegion_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QRegion_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QRegion_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QRegion_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QRegion_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QRegion_QTypeInfo_isComplex();
        isStatic = qtd_QRegion_QTypeInfo_isStatic();
        isLarge = qtd_QRegion_QTypeInfo_isLarge();
        isPointer = qtd_QRegion_QTypeInfo_isPointer();
        isDummy = qtd_QRegion_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public void setRects(qt.core.QRect[] rects) {
    setRects(qt.core.QRect.nativePointerArray(rects), rects.length);
    }
     */

}
private extern(C) void qtd_QRegion_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QRegion_native_copy(const void* orig);
extern (C) void qtd_QRegion_delete(void *ptr);
extern (C) void qtd_QRegion_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QRegion_QRegion();
private extern(C) void* qtd_QRegion_QRegion_QBitmap(void* bitmap0);
private extern(C) void* qtd_QRegion_QRegion_QPolygon_FillRule(void* pa0,
 int fillRule1);
private extern(C) void* qtd_QRegion_QRegion_QRect_RegionType(QRect r0,
 int t1);
private extern(C) void* qtd_QRegion_QRegion_QRegion(void* region0);
private extern(C) void* qtd_QRegion_QRegion_int_int_int_int_RegionType(int x0,
 int y1,
 int w2,
 int h3,
 int t4);
private extern(C) void  qtd_QRegion_boundingRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QRegion_contains_QPoint_const(void* __this_nativeId,
 QPoint p0);
private extern(C) bool  qtd_QRegion_contains_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QRegion_intersect_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QRegion_intersected_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QRegion_intersected_QRegion_const(void* __this_nativeId,
 void* r0);
private extern(C) bool  qtd_QRegion_intersects_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) bool  qtd_QRegion_intersects_QRegion_const(void* __this_nativeId,
 void* r0);
private extern(C) bool  qtd_QRegion_isEmpty_const(void* __this_nativeId);
private extern(C) int  qtd_QRegion_numRects_const(void* __this_nativeId);
private extern(C) void*  qtd_QRegion_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void*  qtd_QRegion_operator_and_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QRegion_operator_add_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void  qtd_QRegion_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QRegion_operator_equal_QRegion_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QRegion_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QRegion_rectCount_const(void* __this_nativeId);
private extern(C) void  qtd_QRegion_rects_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QRegion_setRects_nativepointerQRect_int(void* __this_nativeId,
 const(QRect)* rect0,
 int num1);
private extern(C) void*  qtd_QRegion_subtracted_QRegion_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QRegion_translate_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QRegion_translate_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void*  qtd_QRegion_translated_QPoint_const(void* __this_nativeId,
 QPoint p0);
private extern(C) void*  qtd_QRegion_translated_int_int_const(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void*  qtd_QRegion_unite_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QRegion_united_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QRegion_united_QRegion_const(void* __this_nativeId,
 void* r0);
private extern(C) void*  qtd_QRegion_xored_QRegion_const(void* __this_nativeId,
 void* r0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QRegion() {
    QRegion.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QRegion_QTypeInfo_isComplex();
private extern (C) bool qtd_QRegion_QTypeInfo_isStatic();
private extern (C) bool qtd_QRegion_QTypeInfo_isLarge();
private extern (C) bool qtd_QRegion_QTypeInfo_isPointer();
private extern (C) bool qtd_QRegion_QTypeInfo_isDummy();
