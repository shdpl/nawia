module qt.gui.QMatrix;

public import qt.gui.QMatrix_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QLineF;
public import qt.gui.QPolygon;
public import qt.gui.QPolygonF;
public import qt.core.QLine;
public import qt.core.QRectF;
public import qt.core.QPointF;
public import qt.gui.QPainterPath;
public import qt.core.QRect;
public import qt.core.QVariant;
public import qt.core.QDataStream;
public import qt.gui.QRegion;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QMatrix : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QMatrix_QMatrix();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QMatrix) matrix) {
        void* ret = qtd_QMatrix_QMatrix_QMatrix(matrix is null ? null : (cast(QMatrix)matrix).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double m11, double m12, double m21, double m22, double dx, double dy) {
        void* ret = qtd_QMatrix_QMatrix_double_double_double_double_double_double(m11, m12, m21, m22, dx, dy);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double det() const {
        return qtd_QMatrix_det_const(qtdNativeId);
    }

    public final double determinant() const {
        return qtd_QMatrix_determinant_const(qtdNativeId);
    }

    public final double dx() const {
        return qtd_QMatrix_dx_const(qtdNativeId);
    }

    public final double dy() const {
        return qtd_QMatrix_dy_const(qtdNativeId);
    }

    private final QMatrix inverted(bool* invertible) const {
        void* ret = qtd_QMatrix_inverted_nativepointerbool_const(qtdNativeId, invertible);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final bool isIdentity() const {
        return qtd_QMatrix_isIdentity_const(qtdNativeId);
    }

    public final bool isInvertible() const {
        return qtd_QMatrix_isInvertible_const(qtdNativeId);
    }

    public final double m11() const {
        return qtd_QMatrix_m11_const(qtdNativeId);
    }

    public final double m12() const {
        return qtd_QMatrix_m12_const(qtdNativeId);
    }

    public final double m21() const {
        return qtd_QMatrix_m21_const(qtdNativeId);
    }

    public final double m22() const {
        return qtd_QMatrix_m22_const(qtdNativeId);
    }

    public final QLine map(const(QLine) l) const {
        QLine res;
        qtd_QMatrix_map_QLine_const(qtdNativeId, &res, l);
        return res;
    }

    public final QLineF map(const(QLineF) l) const {
        QLineF res;
        qtd_QMatrix_map_QLineF_const(qtdNativeId, &res, l);
        return res;
    }

    public final QPainterPath map(const(QPainterPath) p) const {
        void* ret = qtd_QMatrix_map_QPainterPath_const(qtdNativeId, p is null ? null : (cast(QPainterPath)p).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPoint map(const(QPoint) p) const {
        QPoint res;
        qtd_QMatrix_map_QPoint_const(qtdNativeId, &res, p);
        return res;
    }

    public final QPointF map(const(QPointF) p) const {
        QPointF res;
        qtd_QMatrix_map_QPointF_const(qtdNativeId, &res, p);
        return res;
    }

    public final QPolygon map(const(QPolygon) a) const {
        void* ret = qtd_QMatrix_map_QPolygon_const(qtdNativeId, a is null ? null : (cast(QPolygon)a).qtdNativeId);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPolygonF map(const(QPolygonF) a) const {
        void* ret = qtd_QMatrix_map_QPolygonF_const(qtdNativeId, a is null ? null : (cast(QPolygonF)a).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QRegion map(const(QRegion) r) const {
        void* ret = qtd_QMatrix_map_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRect mapRect(const(QRect) arg__1) const {
        QRect res;
        qtd_QMatrix_mapRect_QRect_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QRectF mapRect(const(QRectF) arg__1) const {
        QRectF res;
        qtd_QMatrix_mapRect_QRectF_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QPolygon mapToPolygon(const(QRect) r) const {
        void* ret = qtd_QMatrix_mapToPolygon_QRect_const(qtdNativeId, r);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QMatrix_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    private final QMatrix operator_multiply(const(QMatrix) o) const {
        void* ret = qtd_QMatrix_operator_multiply_QMatrix_const(qtdNativeId, o is null ? null : (cast(QMatrix)o).qtdNativeId);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    private final QMatrix operator_multiply_assign(const(QMatrix) arg__1) {
        void* ret = qtd_QMatrix_operator_multiply_assign_QMatrix(qtdNativeId, arg__1 is null ? null : (cast(QMatrix)arg__1).qtdNativeId);
        QMatrix __d_return_value = new QMatrix(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QMatrix_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QMatrix) arg__1) const {
        return qtd_QMatrix_operator_equal_QMatrix_const(qtdNativeId, arg__1 is null ? null : (cast(QMatrix)arg__1).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QMatrix_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void reset() {
        qtd_QMatrix_reset(qtdNativeId);
    }

    private final QMatrix rotate_private(double a) {
        void* ret = qtd_QMatrix_rotate_private_double(qtdNativeId, a);
        QMatrix __d_return_value = new QMatrix(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QMatrix scale_private(double sx, double sy) {
        void* ret = qtd_QMatrix_scale_private_double_double(qtdNativeId, sx, sy);
        QMatrix __d_return_value = new QMatrix(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final void setMatrix(double m11, double m12, double m21, double m22, double dx, double dy) {
        qtd_QMatrix_setMatrix_double_double_double_double_double_double(qtdNativeId, m11, m12, m21, m22, dx, dy);
    }

    private final QMatrix shear_private(double sh, double sv) {
        void* ret = qtd_QMatrix_shear_private_double_double(qtdNativeId, sh, sv);
        QMatrix __d_return_value = new QMatrix(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QMatrix translate_private(double dx, double dy) {
        void* ret = qtd_QMatrix_translate_private_double_double(qtdNativeId, dx, dy);
        QMatrix __d_return_value = new QMatrix(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QMatrix;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QMatrix_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QMatrix_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QMatrix_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QMatrix_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QMatrix_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QMatrix_QTypeInfo_isComplex();
        isStatic = qtd_QMatrix_QTypeInfo_isStatic();
        isLarge = qtd_QMatrix_QTypeInfo_isLarge();
        isPointer = qtd_QMatrix_QTypeInfo_isPointer();
        isDummy = qtd_QMatrix_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    // TEMPLATE - core.unary_other_type - START
    // TEMPLATE - core.private_function_return_self - START
    public final QMatrix rotate(double other) {
        rotate_private(other);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END
    // TEMPLATE - core.unary_other_type - END

    // TEMPLATE - core.private_function_return_self - START
    public final QMatrix scale(double sx, double sy) {
        scale_private(sx, sy);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END

    // TEMPLATE - core.private_function_return_self - START
    public final QMatrix shear(double sh, double sv) {
        shear_private(sh, sv);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END

    // TEMPLATE - core.private_function_return_self - START
    public final QMatrix translate(double dx, double dy) {
        translate_private(dx, dy);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END


    /**
     * Returns an inverted copy of this matrix.
     *
     * @return The inverse of the matrix.
     * @throws IllegalArgumentException
     *             If this matrix is not invertible.
     */
    /*    public final QMatrix inverted() {
    QNativePointer ok = new QNativePointer(QNativePointer.Type.Boolean);
    QMatrix returned = inverted(ok);
    if (!ok.booleanValue())
    throw new IllegalArgumentException("Matrix is not invertible");
    return returned;
    }

    @QtBlockedSlot
    public final QMatrix multiply(QMatrix other) {
    operator_multiply_assign(other);
    return this;
    }

    @QtBlockedSlot
    public final QMatrix multiplied(QMatrix other) {
    return operator_multiply(other);
    }
     */

}
private extern(C) void qtd_QMatrix_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QMatrix_native_copy(const void* orig);
extern (C) void qtd_QMatrix_delete(void *ptr);
extern (C) void qtd_QMatrix_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QMatrix_QMatrix();
private extern(C) void* qtd_QMatrix_QMatrix_QMatrix(void* matrix0);
private extern(C) void* qtd_QMatrix_QMatrix_double_double_double_double_double_double(double m110,
 double m121,
 double m212,
 double m223,
 double dx4,
 double dy5);
private extern(C) double  qtd_QMatrix_det_const(void* __this_nativeId);
private extern(C) double  qtd_QMatrix_determinant_const(void* __this_nativeId);
private extern(C) double  qtd_QMatrix_dx_const(void* __this_nativeId);
private extern(C) double  qtd_QMatrix_dy_const(void* __this_nativeId);
private extern(C) void*  qtd_QMatrix_inverted_nativepointerbool_const(void* __this_nativeId,
 bool* invertible0);
private extern(C) bool  qtd_QMatrix_isIdentity_const(void* __this_nativeId);
private extern(C) bool  qtd_QMatrix_isInvertible_const(void* __this_nativeId);
private extern(C) double  qtd_QMatrix_m11_const(void* __this_nativeId);
private extern(C) double  qtd_QMatrix_m12_const(void* __this_nativeId);
private extern(C) double  qtd_QMatrix_m21_const(void* __this_nativeId);
private extern(C) double  qtd_QMatrix_m22_const(void* __this_nativeId);
private extern(C) void  qtd_QMatrix_map_QLine_const(void* __this_nativeId,
 QLine * __d_return_value,
 QLine l0);
private extern(C) void  qtd_QMatrix_map_QLineF_const(void* __this_nativeId,
 QLineF * __d_return_value,
 QLineF l0);
private extern(C) void*  qtd_QMatrix_map_QPainterPath_const(void* __this_nativeId,
 void* p0);
private extern(C) void  qtd_QMatrix_map_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint p0);
private extern(C) void  qtd_QMatrix_map_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF p0);
private extern(C) void*  qtd_QMatrix_map_QPolygon_const(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QMatrix_map_QPolygonF_const(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QMatrix_map_QRegion_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QMatrix_mapRect_QRect_const(void* __this_nativeId,
 QRect * __d_return_value,
 QRect arg__1);
private extern(C) void  qtd_QMatrix_mapRect_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF arg__1);
private extern(C) void*  qtd_QMatrix_mapToPolygon_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QMatrix_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void*  qtd_QMatrix_operator_multiply_QMatrix_const(void* __this_nativeId,
 void* o0);
private extern(C) void*  qtd_QMatrix_operator_multiply_assign_QMatrix(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMatrix_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QMatrix_operator_equal_QMatrix_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMatrix_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QMatrix_reset(void* __this_nativeId);
private extern(C) void*  qtd_QMatrix_rotate_private_double(void* __this_nativeId,
 double a0);
private extern(C) void*  qtd_QMatrix_scale_private_double_double(void* __this_nativeId,
 double sx0,
 double sy1);
private extern(C) void  qtd_QMatrix_setMatrix_double_double_double_double_double_double(void* __this_nativeId,
 double m110,
 double m121,
 double m212,
 double m223,
 double dx4,
 double dy5);
private extern(C) void*  qtd_QMatrix_shear_private_double_double(void* __this_nativeId,
 double sh0,
 double sv1);
private extern(C) void*  qtd_QMatrix_translate_private_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QMatrix() {
    QMatrix.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QMatrix_QTypeInfo_isComplex();
private extern (C) bool qtd_QMatrix_QTypeInfo_isStatic();
private extern (C) bool qtd_QMatrix_QTypeInfo_isLarge();
private extern (C) bool qtd_QMatrix_QTypeInfo_isPointer();
private extern (C) bool qtd_QMatrix_QTypeInfo_isDummy();
