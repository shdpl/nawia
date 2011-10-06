module qt.gui.QTransform;

public import qt.gui.QTransform_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QLineF;
public import qt.gui.QPolygon;
public import qt.gui.QPolygonF;
public import qt.core.QLine;
public import qt.core.QRectF;
public import qt.gui.QMatrix;
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


public class QTransform : QtdObject
{
    public enum TransformationType {
        TxNone = 0,
        TxTranslate = 1,
        TxScale = 2,
        TxRotate = 4,
        TxShear = 8,
        TxProject = 16
    }

    alias TransformationType.TxNone TxNone;
    alias TransformationType.TxTranslate TxTranslate;
    alias TransformationType.TxScale TxScale;
    alias TransformationType.TxRotate TxRotate;
    alias TransformationType.TxShear TxShear;
    alias TransformationType.TxProject TxProject;


// Functions

    public this() {
        void* ret = qtd_QTransform_QTransform();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QMatrix) mtx) {
        void* ret = qtd_QTransform_QTransform_QMatrix(mtx is null ? null : (cast(QMatrix)mtx).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double h11, double h12, double h13, double h21, double h22, double h23, double h31, double h32, double h33 = 1.0) {
        void* ret = qtd_QTransform_QTransform_double_double_double_double_double_double_double_double_double(h11, h12, h13, h21, h22, h23, h31, h32, h33);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double h11, double h12, double h21, double h22, double dx, double dy) {
        void* ret = qtd_QTransform_QTransform_double_double_double_double_double_double(h11, h12, h21, h22, dx, dy);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTransform adjoint() const {
        void* ret = qtd_QTransform_adjoint_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final double det() const {
        return qtd_QTransform_det_const(qtdNativeId);
    }

    public final double determinant() const {
        return qtd_QTransform_determinant_const(qtdNativeId);
    }

    public final double dx() const {
        return qtd_QTransform_dx_const(qtdNativeId);
    }

    public final double dy() const {
        return qtd_QTransform_dy_const(qtdNativeId);
    }

    private final QTransform inverted(bool* invertible) const {
        void* ret = qtd_QTransform_inverted_nativepointerbool_const(qtdNativeId, invertible);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final bool isAffine() const {
        return qtd_QTransform_isAffine_const(qtdNativeId);
    }

    public final bool isIdentity() const {
        return qtd_QTransform_isIdentity_const(qtdNativeId);
    }

    public final bool isInvertible() const {
        return qtd_QTransform_isInvertible_const(qtdNativeId);
    }

    public final bool isRotating() const {
        return qtd_QTransform_isRotating_const(qtdNativeId);
    }

    public final bool isScaling() const {
        return qtd_QTransform_isScaling_const(qtdNativeId);
    }

    public final bool isTranslating() const {
        return qtd_QTransform_isTranslating_const(qtdNativeId);
    }

    public final double m11() const {
        return qtd_QTransform_m11_const(qtdNativeId);
    }

    public final double m12() const {
        return qtd_QTransform_m12_const(qtdNativeId);
    }

    public final double m13() const {
        return qtd_QTransform_m13_const(qtdNativeId);
    }

    public final double m21() const {
        return qtd_QTransform_m21_const(qtdNativeId);
    }

    public final double m22() const {
        return qtd_QTransform_m22_const(qtdNativeId);
    }

    public final double m23() const {
        return qtd_QTransform_m23_const(qtdNativeId);
    }

    public final double m31() const {
        return qtd_QTransform_m31_const(qtdNativeId);
    }

    public final double m32() const {
        return qtd_QTransform_m32_const(qtdNativeId);
    }

    public final double m33() const {
        return qtd_QTransform_m33_const(qtdNativeId);
    }

    public final QLine map(const(QLine) l) const {
        QLine res;
        qtd_QTransform_map_QLine_const(qtdNativeId, &res, l);
        return res;
    }

    public final QLineF map(const(QLineF) l) const {
        QLineF res;
        qtd_QTransform_map_QLineF_const(qtdNativeId, &res, l);
        return res;
    }

    public final QPainterPath map(const(QPainterPath) p) const {
        void* ret = qtd_QTransform_map_QPainterPath_const(qtdNativeId, p is null ? null : (cast(QPainterPath)p).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPoint map(const(QPoint) p) const {
        QPoint res;
        qtd_QTransform_map_QPoint_const(qtdNativeId, &res, p);
        return res;
    }

    public final QPointF map(const(QPointF) p) const {
        QPointF res;
        qtd_QTransform_map_QPointF_const(qtdNativeId, &res, p);
        return res;
    }

    public final QPolygon map(const(QPolygon) a) const {
        void* ret = qtd_QTransform_map_QPolygon_const(qtdNativeId, a is null ? null : (cast(QPolygon)a).qtdNativeId);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPolygonF map(const(QPolygonF) a) const {
        void* ret = qtd_QTransform_map_QPolygonF_const(qtdNativeId, a is null ? null : (cast(QPolygonF)a).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QRegion map(const(QRegion) r) const {
        void* ret = qtd_QTransform_map_QRegion_const(qtdNativeId, r is null ? null : (cast(QRegion)r).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRect mapRect(const(QRect) arg__1) const {
        QRect res;
        qtd_QTransform_mapRect_QRect_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QRectF mapRect(const(QRectF) arg__1) const {
        QRectF res;
        qtd_QTransform_mapRect_QRectF_const(qtdNativeId, &res, arg__1);
        return res;
    }

    public final QPolygon mapToPolygon(const(QRect) r) const {
        void* ret = qtd_QTransform_mapToPolygon_QRect_const(qtdNativeId, r);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QTransform_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QTransform multiplied(const(QTransform) o) const {
        void* ret = qtd_QTransform_multiplied_QTransform_const(qtdNativeId, o is null ? null : (cast(QTransform)o).qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    private final QTransform operator_multiply_assign(const(QTransform) arg__1) {
        void* ret = qtd_QTransform_operator_multiply_assign_QTransform(qtdNativeId, arg__1 is null ? null : (cast(QTransform)arg__1).qtdNativeId);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTransform operator_multiply_assign(double div) {
        void* ret = qtd_QTransform_operator_multiply_assign_double(qtdNativeId, div);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTransform operator_add_assign(double div) {
        void* ret = qtd_QTransform_operator_add_assign_double(qtdNativeId, div);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTransform operator_subtract_assign(double div) {
        void* ret = qtd_QTransform_operator_subtract_assign_double(qtdNativeId, div);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTransform operator_divide_assign(double div) {
        void* ret = qtd_QTransform_operator_divide_assign_double(qtdNativeId, div);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QTransform_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QTransform) arg__1) const {
        return qtd_QTransform_operator_equal_QTransform_const(qtdNativeId, arg__1 is null ? null : (cast(QTransform)arg__1).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QTransform_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void reset() {
        qtd_QTransform_reset(qtdNativeId);
    }

    private final QTransform rotate_private(double a, Qt.Axis axis = Qt.Axis.ZAxis) {
        void* ret = qtd_QTransform_rotate_private_double_Axis(qtdNativeId, a, axis);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTransform rotateRadians_private(double a, Qt.Axis axis = Qt.Axis.ZAxis) {
        void* ret = qtd_QTransform_rotateRadians_private_double_Axis(qtdNativeId, a, axis);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTransform scale_private(double sx, double sy) {
        void* ret = qtd_QTransform_scale_private_double_double(qtdNativeId, sx, sy);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final void setMatrix(double m11, double m12, double m13, double m21, double m22, double m23, double m31, double m32, double m33) {
        qtd_QTransform_setMatrix_double_double_double_double_double_double_double_double_double(qtdNativeId, m11, m12, m13, m21, m22, m23, m31, m32, m33);
    }

    private final QTransform shear_private(double sh, double sv) {
        void* ret = qtd_QTransform_shear_private_double_double(qtdNativeId, sh, sv);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final const(QMatrix) toAffine() const {
        void* ret = qtd_QTransform_toAffine_const(qtdNativeId);
        const(QMatrix) __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    private final QTransform translate_private(double dx, double dy) {
        void* ret = qtd_QTransform_translate_private_double_double(qtdNativeId, dx, dy);
        QTransform __d_return_value = new QTransform(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QTransform transposed() const {
        void* ret = qtd_QTransform_transposed_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QTransform.TransformationType type() const {
        return cast(QTransform.TransformationType) qtd_QTransform_type_const(qtdNativeId);
    }

    public static QTransform fromScale(double dx, double dy) {
        void* ret = qtd_QTransform_fromScale_double_double(dx, dy);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public static QTransform fromTranslate(double dx, double dy) {
        void* ret = qtd_QTransform_fromTranslate_double_double(dx, dy);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    private static bool quadToQuadPrivate(const(QPolygonF) one, const(QPolygonF) two, QTransform result) {
        return qtd_QTransform_quadToQuadPrivate_QPolygonF_QPolygonF_nativepointerQTransform(one is null ? null : (cast(QPolygonF)one).qtdNativeId, two is null ? null : (cast(QPolygonF)two).qtdNativeId, result is null ? null : result.qtdNativeId);
    }

    private static bool quadToSquarePrivate(const(QPolygonF) quad, QTransform result) {
        return qtd_QTransform_quadToSquarePrivate_QPolygonF_nativepointerQTransform(quad is null ? null : (cast(QPolygonF)quad).qtdNativeId, result is null ? null : result.qtdNativeId);
    }

    private static bool squareToQuadPrivate(const(QPolygonF) square, QTransform result) {
        return qtd_QTransform_squareToQuadPrivate_QPolygonF_nativepointerQTransform(square is null ? null : (cast(QPolygonF)square).qtdNativeId, result is null ? null : result.qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTransform;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTransform_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTransform_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTransform_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTransform_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTransform_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTransform_QTypeInfo_isComplex();
        isStatic = qtd_QTransform_QTypeInfo_isStatic();
        isLarge = qtd_QTransform_QTypeInfo_isLarge();
        isPointer = qtd_QTransform_QTypeInfo_isPointer();
        isDummy = qtd_QTransform_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final QTransform multiply(double d) {
        operator_multiply_assign(d);
        return this;
    }

    public final QTransform multiply(QTransform matrix) {
        operator_multiply_assign(matrix);
        return this;
    }

    public final QTransform add(double d) {
        operator_add_assign(d);
        return this;
    }

    public final QTransform divide(double d) {
        operator_divide_assign(d);
        return this;
    }

    public final QTransform subtract(double d) {
        operator_subtract_assign(d);
        return this;
    }

    /**
     * Returns an inverted copy of this transformation.
     *
     * @return The inverse of the transformation.
     * @throws IllegalArgumentException
     *             If this transformation is not invertible.
     */
    /*    public final QTransform inverted() {
    QNativePointer ok = new QNativePointer(QNativePointer.Type.Boolean);
    QTransform returned = inverted(ok);
    if (!ok.booleanValue())
    throw new IllegalArgumentException("Transformation is not invertible");
    return returned;
    }
     */
    /**
     * Creates a transformation mapping one arbitrary quad into another.
     *
     * @return The transformation.
     * @throws IllegalArgumentException
     *             If this transformation is not possible.
     */
    /*  public static final QTransform quadToQuad(QPolygonF from, QPolygonF to) {
    QTransform res = new QTransform();
    QNativePointer resPointer = res.nativePointer();
    if (quadToQuadPrivate(from, to, resPointer)) {
    return res;
    } else
    throw new IllegalArgumentException("Transformation is not possible");
    }
     */
    /**
     * Creates a transformation that maps a quad to a unit square.
     *
     * @return The transformation.
     * @throws IllegalArgumentException If this transformation is not possible.
     */
    /*    public static final QTransform quadToSquare(QPolygonF quad) {
    QTransform res = new QTransform();
    QNativePointer resPointer = res.nativePointer();
    if (quadToSquarePrivate(quad, resPointer)) {
    return res;
    } else
    throw new IllegalArgumentException("Transformation is not possible");
    }
     */
    /**
     * Creates a transformation that maps a unit square to a the given quad.
     *
     * @return The transformation.
     * @throws IllegalArgumentException
     *             If this transformation is not possible.
     */
    /*    public static final QTransform squareToQuad(QPolygonF quad) {
    QTransform res = new QTransform();
    QNativePointer resPointer = res.nativePointer();
    if (squareToQuadPrivate(quad, resPointer)) {
    return res;
    } else
    throw new IllegalArgumentException("Transformation is not possible");
    }
     */


    /**
     * Rotates the transformation around the given axis.
     *
     * @return The rotated transformation.
     */
    // TEMPLATE - core.private_function_return_self - START
    public final QTransform rotate(double angle, Qt.Axis axis) {
        rotate_private(angle, axis);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END

    /**
     * Rotates the transformation around the z-axis.
     *
     * @return The rotated transformation.
     */
    // TEMPLATE - core.private_function_return_self - START
    public final QTransform rotate(double angle) {
        rotate_private(angle);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END


    /**
     * Rotates the transformation around the given axis.
     *
     * @return The rotated transformation.
     */
    // TEMPLATE - core.private_function_return_self - START
    public final QTransform rotateRadians(double angle, Qt.Axis axis) {
        rotateRadians_private(angle, axis);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END

    /**
     * Rotates the transformation around the z-axis.
     *
     * @return The rotated transformation.
     */
    // TEMPLATE - core.private_function_return_self - START
    public final QTransform rotateRadians(double angle) {
        rotateRadians_private(angle);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END


    /**
     * Scales the transformation using x and y.
     *
     * @return The scaled transformation.
     */
    // TEMPLATE - core.private_function_return_self - START
    public final QTransform scale(double x, double y) {
        scale_private(x, y);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END


    /**
     * Shears the transformation using x and y.
     *
     * @return The sheared transformation.
     */
    // TEMPLATE - core.private_function_return_self - START
    public final QTransform shear(double x, double y) {
        shear_private(x, y);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END


    /**
     * Translates the transformation using x and y.
     *
     * @return The translated transformation.
     */
    // TEMPLATE - core.private_function_return_self - START
    public final QTransform translate(double x, double y) {
        translate_private(x, y);
        return this;
    }
    // TEMPLATE - core.private_function_return_self - END

}
private extern(C) void qtd_QTransform_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTransform_native_copy(const void* orig);
extern (C) void qtd_QTransform_delete(void *ptr);
extern (C) void qtd_QTransform_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTransform_QTransform();
private extern(C) void* qtd_QTransform_QTransform_QMatrix(void* mtx0);
private extern(C) void* qtd_QTransform_QTransform_double_double_double_double_double_double_double_double_double(double h110,
 double h121,
 double h132,
 double h213,
 double h224,
 double h235,
 double h316,
 double h327,
 double h338);
private extern(C) void* qtd_QTransform_QTransform_double_double_double_double_double_double(double h110,
 double h121,
 double h212,
 double h223,
 double dx4,
 double dy5);
private extern(C) void*  qtd_QTransform_adjoint_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_det_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_determinant_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_dx_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_dy_const(void* __this_nativeId);
private extern(C) void*  qtd_QTransform_inverted_nativepointerbool_const(void* __this_nativeId,
 bool* invertible0);
private extern(C) bool  qtd_QTransform_isAffine_const(void* __this_nativeId);
private extern(C) bool  qtd_QTransform_isIdentity_const(void* __this_nativeId);
private extern(C) bool  qtd_QTransform_isInvertible_const(void* __this_nativeId);
private extern(C) bool  qtd_QTransform_isRotating_const(void* __this_nativeId);
private extern(C) bool  qtd_QTransform_isScaling_const(void* __this_nativeId);
private extern(C) bool  qtd_QTransform_isTranslating_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m11_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m12_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m13_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m21_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m22_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m23_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m31_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m32_const(void* __this_nativeId);
private extern(C) double  qtd_QTransform_m33_const(void* __this_nativeId);
private extern(C) void  qtd_QTransform_map_QLine_const(void* __this_nativeId,
 QLine * __d_return_value,
 QLine l0);
private extern(C) void  qtd_QTransform_map_QLineF_const(void* __this_nativeId,
 QLineF * __d_return_value,
 QLineF l0);
private extern(C) void*  qtd_QTransform_map_QPainterPath_const(void* __this_nativeId,
 void* p0);
private extern(C) void  qtd_QTransform_map_QPoint_const(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint p0);
private extern(C) void  qtd_QTransform_map_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF p0);
private extern(C) void*  qtd_QTransform_map_QPolygon_const(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QTransform_map_QPolygonF_const(void* __this_nativeId,
 void* a0);
private extern(C) void*  qtd_QTransform_map_QRegion_const(void* __this_nativeId,
 void* r0);
private extern(C) void  qtd_QTransform_mapRect_QRect_const(void* __this_nativeId,
 QRect * __d_return_value,
 QRect arg__1);
private extern(C) void  qtd_QTransform_mapRect_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF arg__1);
private extern(C) void*  qtd_QTransform_mapToPolygon_QRect_const(void* __this_nativeId,
 QRect r0);
private extern(C) void*  qtd_QTransform_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void*  qtd_QTransform_multiplied_QTransform_const(void* __this_nativeId,
 void* o0);
private extern(C) void*  qtd_QTransform_operator_multiply_assign_QTransform(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QTransform_operator_multiply_assign_double(void* __this_nativeId,
 double div0);
private extern(C) void*  qtd_QTransform_operator_add_assign_double(void* __this_nativeId,
 double div0);
private extern(C) void*  qtd_QTransform_operator_subtract_assign_double(void* __this_nativeId,
 double div0);
private extern(C) void*  qtd_QTransform_operator_divide_assign_double(void* __this_nativeId,
 double div0);
private extern(C) void  qtd_QTransform_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTransform_operator_equal_QTransform_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTransform_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QTransform_reset(void* __this_nativeId);
private extern(C) void*  qtd_QTransform_rotate_private_double_Axis(void* __this_nativeId,
 double a0,
 int axis1);
private extern(C) void*  qtd_QTransform_rotateRadians_private_double_Axis(void* __this_nativeId,
 double a0,
 int axis1);
private extern(C) void*  qtd_QTransform_scale_private_double_double(void* __this_nativeId,
 double sx0,
 double sy1);
private extern(C) void  qtd_QTransform_setMatrix_double_double_double_double_double_double_double_double_double(void* __this_nativeId,
 double m110,
 double m121,
 double m132,
 double m213,
 double m224,
 double m235,
 double m316,
 double m327,
 double m338);
private extern(C) void*  qtd_QTransform_shear_private_double_double(void* __this_nativeId,
 double sh0,
 double sv1);
private extern(C) void*  qtd_QTransform_toAffine_const(void* __this_nativeId);
private extern(C) void*  qtd_QTransform_translate_private_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void*  qtd_QTransform_transposed_const(void* __this_nativeId);
private extern(C) int  qtd_QTransform_type_const(void* __this_nativeId);
private extern(C) void*  qtd_QTransform_fromScale_double_double(double dx0,
 double dy1);
private extern(C) void*  qtd_QTransform_fromTranslate_double_double(double dx0,
 double dy1);
private extern(C) bool  qtd_QTransform_quadToQuadPrivate_QPolygonF_QPolygonF_nativepointerQTransform(void* one0,
 void* two1,
 void* result2);
private extern(C) bool  qtd_QTransform_quadToSquarePrivate_QPolygonF_nativepointerQTransform(void* quad0,
 void* result1);
private extern(C) bool  qtd_QTransform_squareToQuadPrivate_QPolygonF_nativepointerQTransform(void* square0,
 void* result1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTransform() {
    QTransform.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTransform_QTypeInfo_isComplex();
private extern (C) bool qtd_QTransform_QTypeInfo_isStatic();
private extern (C) bool qtd_QTransform_QTypeInfo_isLarge();
private extern (C) bool qtd_QTransform_QTypeInfo_isPointer();
private extern (C) bool qtd_QTransform_QTypeInfo_isDummy();
