module qt.gui.QPainterPath;

public import qt.gui.QPainterPath_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPolygonF;
public import qt.core.QList;
public import qt.core.QRectF;
public import qt.gui.QPainterPath_Element;
public import qt.gui.QTransform;
public import qt.gui.QFont;
public import qt.gui.QMatrix;
public import qt.core.QPointF;
public import qt.core.QDataStream;
public import qt.gui.QRegion;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPainterPath : QtdObject
{
    public enum ElementType {
        MoveToElement = 0,
        LineToElement = 1,
        CurveToElement = 2,
        CurveToDataElement = 3
    }

    alias ElementType.MoveToElement MoveToElement;
    alias ElementType.LineToElement LineToElement;
    alias ElementType.CurveToElement CurveToElement;
    alias ElementType.CurveToDataElement CurveToDataElement;


// Functions

    public this() {
        void* ret = qtd_QPainterPath_QPainterPath();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPainterPath) other) {
        void* ret = qtd_QPainterPath_QPainterPath_QPainterPath(other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPointF) startPoint) {
        void* ret = qtd_QPainterPath_QPainterPath_QPointF(startPoint);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addEllipse(const(QPointF) center, double rx, double ry) {
        qtd_QPainterPath_addEllipse_QPointF_double_double(qtdNativeId, center, rx, ry);
    }

    public final void addEllipse(const(QRectF) rect) {
        qtd_QPainterPath_addEllipse_QRectF(qtdNativeId, rect);
    }

    public final void addEllipse(double x, double y, double w, double h) {
        qtd_QPainterPath_addEllipse_double_double_double_double(qtdNativeId, x, y, w, h);
    }

    public final void addPath(const(QPainterPath) path) {
        qtd_QPainterPath_addPath_QPainterPath(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
    }

    public final void addPolygon(const(QPolygonF) polygon) {
        qtd_QPainterPath_addPolygon_QPolygonF(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
    }

    public final void addRect(const(QRectF) rect) {
        qtd_QPainterPath_addRect_QRectF(qtdNativeId, rect);
    }

    public final void addRect(double x, double y, double w, double h) {
        qtd_QPainterPath_addRect_double_double_double_double(qtdNativeId, x, y, w, h);
    }

    public final void addRegion(const(QRegion) region) {
        qtd_QPainterPath_addRegion_QRegion(qtdNativeId, region is null ? null : (cast(QRegion)region).qtdNativeId);
    }

    public final void addRoundRect(const(QRectF) rect, int roundness) {
        qtd_QPainterPath_addRoundRect_QRectF_int(qtdNativeId, rect, roundness);
    }

    public final void addRoundRect(const(QRectF) rect, int xRnd, int yRnd) {
        qtd_QPainterPath_addRoundRect_QRectF_int_int(qtdNativeId, rect, xRnd, yRnd);
    }

    public final void addRoundRect(double x, double y, double w, double h, int roundness) {
        qtd_QPainterPath_addRoundRect_double_double_double_double_int(qtdNativeId, x, y, w, h, roundness);
    }

    public final void addRoundRect(double x, double y, double w, double h, int xRnd, int yRnd) {
        qtd_QPainterPath_addRoundRect_double_double_double_double_int_int(qtdNativeId, x, y, w, h, xRnd, yRnd);
    }

    public final void addRoundedRect(const(QRectF) rect, double xRadius, double yRadius, Qt.SizeMode mode = Qt.SizeMode.AbsoluteSize) {
        qtd_QPainterPath_addRoundedRect_QRectF_double_double_SizeMode(qtdNativeId, rect, xRadius, yRadius, mode);
    }

    public final void addRoundedRect(double x, double y, double w, double h, double xRadius, double yRadius, Qt.SizeMode mode = Qt.SizeMode.AbsoluteSize) {
        qtd_QPainterPath_addRoundedRect_double_double_double_double_double_double_SizeMode(qtdNativeId, x, y, w, h, xRadius, yRadius, mode);
    }

    public final void addText(const(QPointF) point, const(QFont) f, string text) {
        qtd_QPainterPath_addText_QPointF_QFont_string(qtdNativeId, point, f is null ? null : (cast(QFont)f).qtdNativeId, text);
    }

    public final void addText(double x, double y, const(QFont) f, string text) {
        qtd_QPainterPath_addText_double_double_QFont_string(qtdNativeId, x, y, f is null ? null : (cast(QFont)f).qtdNativeId, text);
    }

    public final double angleAtPercent(double t) const {
        return qtd_QPainterPath_angleAtPercent_double_const(qtdNativeId, t);
    }

    public final void arcMoveTo(const(QRectF) rect, double angle) {
        qtd_QPainterPath_arcMoveTo_QRectF_double(qtdNativeId, rect, angle);
    }

    public final void arcMoveTo(double x, double y, double w, double h, double angle) {
        qtd_QPainterPath_arcMoveTo_double_double_double_double_double(qtdNativeId, x, y, w, h, angle);
    }

    public final void arcTo(const(QRectF) rect, double startAngle, double arcLength) {
        qtd_QPainterPath_arcTo_QRectF_double_double(qtdNativeId, rect, startAngle, arcLength);
    }

    public final void arcTo(double x, double y, double w, double h, double startAngle, double arcLength) {
        qtd_QPainterPath_arcTo_double_double_double_double_double_double(qtdNativeId, x, y, w, h, startAngle, arcLength);
    }

    public final QRectF boundingRect() const {
        QRectF res;
        qtd_QPainterPath_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final void closeSubpath() {
        qtd_QPainterPath_closeSubpath(qtdNativeId);
    }

    public final void connectPath(const(QPainterPath) path) {
        qtd_QPainterPath_connectPath_QPainterPath(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
    }

    public final bool contains(const(QPainterPath) p) const {
        return qtd_QPainterPath_contains_QPainterPath_const(qtdNativeId, p is null ? null : (cast(QPainterPath)p).qtdNativeId);
    }

    public final bool contains(const(QPointF) pt) const {
        return qtd_QPainterPath_contains_QPointF_const(qtdNativeId, pt);
    }

    public final bool contains(const(QRectF) rect) const {
        return qtd_QPainterPath_contains_QRectF_const(qtdNativeId, rect);
    }

    public final QRectF controlPointRect() const {
        QRectF res;
        qtd_QPainterPath_controlPointRect_const(qtdNativeId, &res);
        return res;
    }

    public final void cubicTo(const(QPointF) ctrlPt1, const(QPointF) ctrlPt2, const(QPointF) endPt) {
        qtd_QPainterPath_cubicTo_QPointF_QPointF_QPointF(qtdNativeId, ctrlPt1, ctrlPt2, endPt);
    }

    public final void cubicTo(double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
        qtd_QPainterPath_cubicTo_double_double_double_double_double_double(qtdNativeId, ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
    }

    public final QPointF currentPosition() const {
        QPointF res;
        qtd_QPainterPath_currentPosition_const(qtdNativeId, &res);
        return res;
    }

    public final const(QPainterPath_Element) elementAt(int i) const {
        void* ret = qtd_QPainterPath_elementAt_int_const(qtdNativeId, i);
        const(QPainterPath_Element) __d_return_value = new QPainterPath_Element(ret);
        return __d_return_value;
    }

    public final int elementCount() const {
        return qtd_QPainterPath_elementCount_const(qtdNativeId);
    }

    public final Qt.FillRule fillRule() const {
        return cast(Qt.FillRule) qtd_QPainterPath_fillRule_const(qtdNativeId);
    }

    public final QPainterPath intersected(const(QPainterPath) r) const {
        void* ret = qtd_QPainterPath_intersected_QPainterPath_const(qtdNativeId, r is null ? null : (cast(QPainterPath)r).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final bool intersects(const(QPainterPath) p) const {
        return qtd_QPainterPath_intersects_QPainterPath_const(qtdNativeId, p is null ? null : (cast(QPainterPath)p).qtdNativeId);
    }

    public final bool intersects(const(QRectF) rect) const {
        return qtd_QPainterPath_intersects_QRectF_const(qtdNativeId, rect);
    }

    public final bool isEmpty() const {
        return qtd_QPainterPath_isEmpty_const(qtdNativeId);
    }

    public final double length() const {
        return qtd_QPainterPath_length_const(qtdNativeId);
    }

    public final void lineTo(const(QPointF) p) {
        qtd_QPainterPath_lineTo_QPointF(qtdNativeId, p);
    }

    public final void lineTo(double x, double y) {
        qtd_QPainterPath_lineTo_double_double(qtdNativeId, x, y);
    }

    public final void moveTo(const(QPointF) p) {
        qtd_QPainterPath_moveTo_QPointF(qtdNativeId, p);
    }

    public final void moveTo(double x, double y) {
        qtd_QPainterPath_moveTo_double_double(qtdNativeId, x, y);
    }

    public final QPainterPath operator_and(const(QPainterPath) other) const {
        void* ret = qtd_QPainterPath_operator_and_QPainterPath_const(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPainterPath operator_and_assign(const(QPainterPath) other) {
        void* ret = qtd_QPainterPath_operator_and_assign_QPainterPath(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QPainterPath operator_add(const(QPainterPath) other) const {
        void* ret = qtd_QPainterPath_operator_add_QPainterPath_const(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPainterPath operator_add_assign(const(QPainterPath) other) {
        void* ret = qtd_QPainterPath_operator_add_assign_QPainterPath(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QPainterPath operator_subtract(const(QPainterPath) other) const {
        void* ret = qtd_QPainterPath_operator_subtract_QPainterPath_const(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPainterPath operator_subtract_assign(const(QPainterPath) other) {
        void* ret = qtd_QPainterPath_operator_subtract_assign_QPainterPath(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QPainterPath_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QPainterPath) other) const {
        return qtd_QPainterPath_operator_equal_QPainterPath_const(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QPainterPath_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final QPainterPath operator_or(const(QPainterPath) other) const {
        void* ret = qtd_QPainterPath_operator_or_QPainterPath_const(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPainterPath operator_or_assign(const(QPainterPath) other) {
        void* ret = qtd_QPainterPath_operator_or_assign_QPainterPath(qtdNativeId, other is null ? null : (cast(QPainterPath)other).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final double percentAtLength(double t) const {
        return qtd_QPainterPath_percentAtLength_double_const(qtdNativeId, t);
    }

    public final QPointF pointAtPercent(double t) const {
        QPointF res;
        qtd_QPainterPath_pointAtPercent_double_const(qtdNativeId, &res, t);
        return res;
    }

    public final void quadTo(const(QPointF) ctrlPt, const(QPointF) endPt) {
        qtd_QPainterPath_quadTo_QPointF_QPointF(qtdNativeId, ctrlPt, endPt);
    }

    public final void quadTo(double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
        qtd_QPainterPath_quadTo_double_double_double_double(qtdNativeId, ctrlPtx, ctrlPty, endPtx, endPty);
    }

    public final void setElementPositionAt(int i, double x, double y) {
        qtd_QPainterPath_setElementPositionAt_int_double_double(qtdNativeId, i, x, y);
    }

    public final void setFillRule(Qt.FillRule fillRule) {
        qtd_QPainterPath_setFillRule_FillRule(qtdNativeId, fillRule);
    }

    public final QPainterPath simplified() const {
        void* ret = qtd_QPainterPath_simplified_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final double slopeAtPercent(double t) const {
        return qtd_QPainterPath_slopeAtPercent_double_const(qtdNativeId, t);
    }

    public final QPainterPath subtracted(const(QPainterPath) r) const {
        void* ret = qtd_QPainterPath_subtracted_QPainterPath_const(qtdNativeId, r is null ? null : (cast(QPainterPath)r).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPainterPath subtractedInverted(const(QPainterPath) r) const {
        void* ret = qtd_QPainterPath_subtractedInverted_QPainterPath_const(qtdNativeId, r is null ? null : (cast(QPainterPath)r).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPolygonF toFillPolygon(const(QMatrix) matrix = new QMatrix()) const {
        void* ret = qtd_QPainterPath_toFillPolygon_QMatrix_const(qtdNativeId, matrix is null ? null : (cast(QMatrix)matrix).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF toFillPolygon(const(QTransform) matrix) const {
        void* ret = qtd_QPainterPath_toFillPolygon_QTransform_const(qtdNativeId, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QList!(QPolygonF) toFillPolygons(const(QMatrix) matrix = new QMatrix()) const {
        auto res = QList!(QPolygonF).opCall();
        qtd_QPainterPath_toFillPolygons_QMatrix_const(qtdNativeId, &res, matrix is null ? null : (cast(QMatrix)matrix).qtdNativeId);
        return res;
    }

    public final QList!(QPolygonF) toFillPolygons(const(QTransform) matrix) const {
        auto res = QList!(QPolygonF).opCall();
        qtd_QPainterPath_toFillPolygons_QTransform_const(qtdNativeId, &res, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId);
        return res;
    }

    public final QPainterPath toReversed() const {
        void* ret = qtd_QPainterPath_toReversed_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QList!(QPolygonF) toSubpathPolygons(const(QMatrix) matrix = new QMatrix()) const {
        auto res = QList!(QPolygonF).opCall();
        qtd_QPainterPath_toSubpathPolygons_QMatrix_const(qtdNativeId, &res, matrix is null ? null : (cast(QMatrix)matrix).qtdNativeId);
        return res;
    }

    public final QList!(QPolygonF) toSubpathPolygons(const(QTransform) matrix) const {
        auto res = QList!(QPolygonF).opCall();
        qtd_QPainterPath_toSubpathPolygons_QTransform_const(qtdNativeId, &res, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId);
        return res;
    }

    public final void translate(const(QPointF) offset) {
        qtd_QPainterPath_translate_QPointF(qtdNativeId, offset);
    }

    public final void translate(double dx, double dy) {
        qtd_QPainterPath_translate_double_double(qtdNativeId, dx, dy);
    }

    public final QPainterPath translated(const(QPointF) offset) const {
        void* ret = qtd_QPainterPath_translated_QPointF_const(qtdNativeId, offset);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPainterPath translated(double dx, double dy) const {
        void* ret = qtd_QPainterPath_translated_double_double_const(qtdNativeId, dx, dy);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPainterPath united(const(QPainterPath) r) const {
        void* ret = qtd_QPainterPath_united_QPainterPath_const(qtdNativeId, r is null ? null : (cast(QPainterPath)r).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPainterPath;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPainterPath_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPainterPath_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPainterPath_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPainterPath_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPainterPath_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPainterPath_QTypeInfo_isComplex();
        isStatic = qtd_QPainterPath_QTypeInfo_isStatic();
        isLarge = qtd_QPainterPath_QTypeInfo_isLarge();
        isPointer = qtd_QPainterPath_QTypeInfo_isPointer();
        isDummy = qtd_QPainterPath_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QPainterPath_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPainterPath_native_copy(const void* orig);
extern (C) void qtd_QPainterPath_delete(void *ptr);
extern (C) void qtd_QPainterPath_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPainterPath_QPainterPath();
private extern(C) void* qtd_QPainterPath_QPainterPath_QPainterPath(void* other0);
private extern(C) void* qtd_QPainterPath_QPainterPath_QPointF(QPointF startPoint0);
private extern(C) void  qtd_QPainterPath_addEllipse_QPointF_double_double(void* __this_nativeId,
 QPointF center0,
 double rx1,
 double ry2);
private extern(C) void  qtd_QPainterPath_addEllipse_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QPainterPath_addEllipse_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QPainterPath_addPath_QPainterPath(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QPainterPath_addPolygon_QPolygonF(void* __this_nativeId,
 void* polygon0);
private extern(C) void  qtd_QPainterPath_addRect_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QPainterPath_addRect_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QPainterPath_addRegion_QRegion(void* __this_nativeId,
 void* region0);
private extern(C) void  qtd_QPainterPath_addRoundRect_QRectF_int(void* __this_nativeId,
 QRectF rect0,
 int roundness1);
private extern(C) void  qtd_QPainterPath_addRoundRect_QRectF_int_int(void* __this_nativeId,
 QRectF rect0,
 int xRnd1,
 int yRnd2);
private extern(C) void  qtd_QPainterPath_addRoundRect_double_double_double_double_int(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int roundness4);
private extern(C) void  qtd_QPainterPath_addRoundRect_double_double_double_double_int_int(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xRnd4,
 int yRnd5);
private extern(C) void  qtd_QPainterPath_addRoundedRect_QRectF_double_double_SizeMode(void* __this_nativeId,
 QRectF rect0,
 double xRadius1,
 double yRadius2,
 int mode3);
private extern(C) void  qtd_QPainterPath_addRoundedRect_double_double_double_double_double_double_SizeMode(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 double xRadius4,
 double yRadius5,
 int mode6);
private extern(C) void  qtd_QPainterPath_addText_QPointF_QFont_string(void* __this_nativeId,
 QPointF point0,
 void* f1,
 string text2);
private extern(C) void  qtd_QPainterPath_addText_double_double_QFont_string(void* __this_nativeId,
 double x0,
 double y1,
 void* f2,
 string text3);
private extern(C) double  qtd_QPainterPath_angleAtPercent_double_const(void* __this_nativeId,
 double t0);
private extern(C) void  qtd_QPainterPath_arcMoveTo_QRectF_double(void* __this_nativeId,
 QRectF rect0,
 double angle1);
private extern(C) void  qtd_QPainterPath_arcMoveTo_double_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 double angle4);
private extern(C) void  qtd_QPainterPath_arcTo_QRectF_double_double(void* __this_nativeId,
 QRectF rect0,
 double startAngle1,
 double arcLength2);
private extern(C) void  qtd_QPainterPath_arcTo_double_double_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 double startAngle4,
 double arcLength5);
private extern(C) void  qtd_QPainterPath_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QPainterPath_closeSubpath(void* __this_nativeId);
private extern(C) void  qtd_QPainterPath_connectPath_QPainterPath(void* __this_nativeId,
 void* path0);
private extern(C) bool  qtd_QPainterPath_contains_QPainterPath_const(void* __this_nativeId,
 void* p0);
private extern(C) bool  qtd_QPainterPath_contains_QPointF_const(void* __this_nativeId,
 QPointF pt0);
private extern(C) bool  qtd_QPainterPath_contains_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QPainterPath_controlPointRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QPainterPath_cubicTo_QPointF_QPointF_QPointF(void* __this_nativeId,
 QPointF ctrlPt10,
 QPointF ctrlPt21,
 QPointF endPt2);
private extern(C) void  qtd_QPainterPath_cubicTo_double_double_double_double_double_double(void* __this_nativeId,
 double ctrlPt1x0,
 double ctrlPt1y1,
 double ctrlPt2x2,
 double ctrlPt2y3,
 double endPtx4,
 double endPty5);
private extern(C) void  qtd_QPainterPath_currentPosition_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void*  qtd_QPainterPath_elementAt_int_const(void* __this_nativeId,
 int i0);
private extern(C) int  qtd_QPainterPath_elementCount_const(void* __this_nativeId);
private extern(C) int  qtd_QPainterPath_fillRule_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainterPath_intersected_QPainterPath_const(void* __this_nativeId,
 void* r0);
private extern(C) bool  qtd_QPainterPath_intersects_QPainterPath_const(void* __this_nativeId,
 void* p0);
private extern(C) bool  qtd_QPainterPath_intersects_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) bool  qtd_QPainterPath_isEmpty_const(void* __this_nativeId);
private extern(C) double  qtd_QPainterPath_length_const(void* __this_nativeId);
private extern(C) void  qtd_QPainterPath_lineTo_QPointF(void* __this_nativeId,
 QPointF p0);
private extern(C) void  qtd_QPainterPath_lineTo_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void  qtd_QPainterPath_moveTo_QPointF(void* __this_nativeId,
 QPointF p0);
private extern(C) void  qtd_QPainterPath_moveTo_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void*  qtd_QPainterPath_operator_and_QPainterPath_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QPainterPath_operator_and_assign_QPainterPath(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QPainterPath_operator_add_QPainterPath_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QPainterPath_operator_add_assign_QPainterPath(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QPainterPath_operator_subtract_QPainterPath_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QPainterPath_operator_subtract_assign_QPainterPath(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QPainterPath_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QPainterPath_operator_equal_QPainterPath_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QPainterPath_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QPainterPath_operator_or_QPainterPath_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QPainterPath_operator_or_assign_QPainterPath(void* __this_nativeId,
 void* other0);
private extern(C) double  qtd_QPainterPath_percentAtLength_double_const(void* __this_nativeId,
 double t0);
private extern(C) void  qtd_QPainterPath_pointAtPercent_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double t0);
private extern(C) void  qtd_QPainterPath_quadTo_QPointF_QPointF(void* __this_nativeId,
 QPointF ctrlPt0,
 QPointF endPt1);
private extern(C) void  qtd_QPainterPath_quadTo_double_double_double_double(void* __this_nativeId,
 double ctrlPtx0,
 double ctrlPty1,
 double endPtx2,
 double endPty3);
private extern(C) void  qtd_QPainterPath_setElementPositionAt_int_double_double(void* __this_nativeId,
 int i0,
 double x1,
 double y2);
private extern(C) void  qtd_QPainterPath_setFillRule_FillRule(void* __this_nativeId,
 int fillRule0);
private extern(C) void*  qtd_QPainterPath_simplified_const(void* __this_nativeId);
private extern(C) double  qtd_QPainterPath_slopeAtPercent_double_const(void* __this_nativeId,
 double t0);
private extern(C) void*  qtd_QPainterPath_subtracted_QPainterPath_const(void* __this_nativeId,
 void* r0);
private extern(C) void*  qtd_QPainterPath_subtractedInverted_QPainterPath_const(void* __this_nativeId,
 void* r0);
private extern(C) void*  qtd_QPainterPath_toFillPolygon_QMatrix_const(void* __this_nativeId,
 void* matrix0);
private extern(C) void*  qtd_QPainterPath_toFillPolygon_QTransform_const(void* __this_nativeId,
 void* matrix0);
private extern(C) void  qtd_QPainterPath_toFillPolygons_QMatrix_const(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0);
private extern(C) void  qtd_QPainterPath_toFillPolygons_QTransform_const(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0);
private extern(C) void*  qtd_QPainterPath_toReversed_const(void* __this_nativeId);
private extern(C) void  qtd_QPainterPath_toSubpathPolygons_QMatrix_const(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0);
private extern(C) void  qtd_QPainterPath_toSubpathPolygons_QTransform_const(void* __this_nativeId,
 void* __d_return_value,
 void* matrix0);
private extern(C) void  qtd_QPainterPath_translate_QPointF(void* __this_nativeId,
 QPointF offset0);
private extern(C) void  qtd_QPainterPath_translate_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void*  qtd_QPainterPath_translated_QPointF_const(void* __this_nativeId,
 QPointF offset0);
private extern(C) void*  qtd_QPainterPath_translated_double_double_const(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void*  qtd_QPainterPath_united_QPainterPath_const(void* __this_nativeId,
 void* r0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QPainterPath() {
    QPainterPath.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QPainterPath_QTypeInfo_isComplex();
private extern (C) bool qtd_QPainterPath_QTypeInfo_isStatic();
private extern (C) bool qtd_QPainterPath_QTypeInfo_isLarge();
private extern (C) bool qtd_QPainterPath_QTypeInfo_isPointer();
private extern (C) bool qtd_QPainterPath_QTypeInfo_isDummy();
