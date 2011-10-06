module qt.gui.QPainter;

import qt.gui.QGradient;
public import qt.gui.QPainter_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QMatrix;
public import qt.gui.QPaintEngine;
public import qt.gui.QPolygonF;
public import qt.core.QRectF;
public import qt.gui.QPen;
public import qt.gui.QFontMetrics;
public import qt.gui.QTextOption;
public import qt.gui.QTransform;
public import qt.core.QLine;
public import qt.gui.QPainterPath;
public import qt.gui.QPaintDevice;
public import qt.core.QRect;
public import qt.gui.QBrush;
public import qt.gui.QRegion;
public import qt.gui.QFontInfo;
public import qt.core.QPoint;
public import qt.gui.QWidget;
public import qt.gui.QPicture;
public import qt.core.QLineF;
public import qt.gui.QTextItem;
public import qt.gui.QColor;
public import qt.core.QPointF;
public import qt.gui.QImage;
public import qt.gui.QPolygon;
public import qt.gui.QPixmap;
public import qt.gui.QFont;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPainter : QtdObject
{
    public enum CompositionMode {
        CompositionMode_SourceOver = 0,
        CompositionMode_DestinationOver = 1,
        CompositionMode_Clear = 2,
        CompositionMode_Source = 3,
        CompositionMode_Destination = 4,
        CompositionMode_SourceIn = 5,
        CompositionMode_DestinationIn = 6,
        CompositionMode_SourceOut = 7,
        CompositionMode_DestinationOut = 8,
        CompositionMode_SourceAtop = 9,
        CompositionMode_DestinationAtop = 10,
        CompositionMode_Xor = 11,
        CompositionMode_Plus = 12,
        CompositionMode_Multiply = 13,
        CompositionMode_Screen = 14,
        CompositionMode_Overlay = 15,
        CompositionMode_Darken = 16,
        CompositionMode_Lighten = 17,
        CompositionMode_ColorDodge = 18,
        CompositionMode_ColorBurn = 19,
        CompositionMode_HardLight = 20,
        CompositionMode_SoftLight = 21,
        CompositionMode_Difference = 22,
        CompositionMode_Exclusion = 23,
        RasterOp_SourceOrDestination = 24,
        RasterOp_SourceAndDestination = 25,
        RasterOp_SourceXorDestination = 26,
        RasterOp_NotSourceAndNotDestination = 27,
        RasterOp_NotSourceOrNotDestination = 28,
        RasterOp_NotSourceXorDestination = 29,
        RasterOp_NotSource = 30,
        RasterOp_NotSourceAndDestination = 31,
        RasterOp_SourceAndNotDestination = 32
    }

    alias CompositionMode.CompositionMode_SourceOver CompositionMode_SourceOver;
    alias CompositionMode.CompositionMode_DestinationOver CompositionMode_DestinationOver;
    alias CompositionMode.CompositionMode_Clear CompositionMode_Clear;
    alias CompositionMode.CompositionMode_Source CompositionMode_Source;
    alias CompositionMode.CompositionMode_Destination CompositionMode_Destination;
    alias CompositionMode.CompositionMode_SourceIn CompositionMode_SourceIn;
    alias CompositionMode.CompositionMode_DestinationIn CompositionMode_DestinationIn;
    alias CompositionMode.CompositionMode_SourceOut CompositionMode_SourceOut;
    alias CompositionMode.CompositionMode_DestinationOut CompositionMode_DestinationOut;
    alias CompositionMode.CompositionMode_SourceAtop CompositionMode_SourceAtop;
    alias CompositionMode.CompositionMode_DestinationAtop CompositionMode_DestinationAtop;
    alias CompositionMode.CompositionMode_Xor CompositionMode_Xor;
    alias CompositionMode.CompositionMode_Plus CompositionMode_Plus;
    alias CompositionMode.CompositionMode_Multiply CompositionMode_Multiply;
    alias CompositionMode.CompositionMode_Screen CompositionMode_Screen;
    alias CompositionMode.CompositionMode_Overlay CompositionMode_Overlay;
    alias CompositionMode.CompositionMode_Darken CompositionMode_Darken;
    alias CompositionMode.CompositionMode_Lighten CompositionMode_Lighten;
    alias CompositionMode.CompositionMode_ColorDodge CompositionMode_ColorDodge;
    alias CompositionMode.CompositionMode_ColorBurn CompositionMode_ColorBurn;
    alias CompositionMode.CompositionMode_HardLight CompositionMode_HardLight;
    alias CompositionMode.CompositionMode_SoftLight CompositionMode_SoftLight;
    alias CompositionMode.CompositionMode_Difference CompositionMode_Difference;
    alias CompositionMode.CompositionMode_Exclusion CompositionMode_Exclusion;
    alias CompositionMode.RasterOp_SourceOrDestination RasterOp_SourceOrDestination;
    alias CompositionMode.RasterOp_SourceAndDestination RasterOp_SourceAndDestination;
    alias CompositionMode.RasterOp_SourceXorDestination RasterOp_SourceXorDestination;
    alias CompositionMode.RasterOp_NotSourceAndNotDestination RasterOp_NotSourceAndNotDestination;
    alias CompositionMode.RasterOp_NotSourceOrNotDestination RasterOp_NotSourceOrNotDestination;
    alias CompositionMode.RasterOp_NotSourceXorDestination RasterOp_NotSourceXorDestination;
    alias CompositionMode.RasterOp_NotSource RasterOp_NotSource;
    alias CompositionMode.RasterOp_NotSourceAndDestination RasterOp_NotSourceAndDestination;
    alias CompositionMode.RasterOp_SourceAndNotDestination RasterOp_SourceAndNotDestination;

    public enum RenderHint {
        Antialiasing = 1,
        TextAntialiasing = 2,
        SmoothPixmapTransform = 4,
        HighQualityAntialiasing = 8,
        NonCosmeticDefaultPen = 16
    }

    alias RenderHint.Antialiasing Antialiasing;
    alias RenderHint.TextAntialiasing TextAntialiasing;
    alias RenderHint.SmoothPixmapTransform SmoothPixmapTransform;
    alias RenderHint.HighQualityAntialiasing HighQualityAntialiasing;
    alias RenderHint.NonCosmeticDefaultPen NonCosmeticDefaultPen;


// Functions

    public this() {
        void* ret = qtd_QPainter_QPainter(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(IQPaintDevice arg__1) {
        /*if (arg__1 is null)
            throw new NullPointerException("Argument 'arg__1': null not expected."); */
        void* ret = qtd_QPainter_QPainter_QPaintDevice(cast(void*) this, arg__1 is null ? null : arg__1.__ptr_IQPaintDevice);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QBrush) background() const {
        void* ret = qtd_QPainter_background_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final Qt.BGMode backgroundMode() const {
        return cast(Qt.BGMode) qtd_QPainter_backgroundMode_const(qtdNativeId);
    }

    public final bool begin(IQPaintDevice arg__1) {
        /*if (arg__1 is null)
            throw new NullPointerException("Argument 'arg__1': null not expected."); */
        return qtd_QPainter_begin_QPaintDevice(qtdNativeId, arg__1 is null ? null : arg__1.__ptr_IQPaintDevice);
    }

    public final void beginNativePainting() {
        qtd_QPainter_beginNativePainting(qtdNativeId);
    }

    public final QRect boundingRect(const(QRect) rect, int flags, string text) {
        QRect res;
        qtd_QPainter_boundingRect_QRect_int_string(qtdNativeId, &res, rect, flags, text);
        return res;
    }

    public final QRectF boundingRect(const(QRectF) rect, string text, const(QTextOption) o = new QTextOption()) {
        QRectF res;
        qtd_QPainter_boundingRect_QRectF_string_QTextOption(qtdNativeId, &res, rect, text, o is null ? null : (cast(QTextOption)o).qtdNativeId);
        return res;
    }

    public final QRectF boundingRect(const(QRectF) rect, int flags, string text) {
        QRectF res;
        qtd_QPainter_boundingRect_QRectF_int_string(qtdNativeId, &res, rect, flags, text);
        return res;
    }

    public final QRect boundingRect(int x, int y, int w, int h, int flags, string text) {
        QRect res;
        qtd_QPainter_boundingRect_int_int_int_int_int_string(qtdNativeId, &res, x, y, w, h, flags, text);
        return res;
    }

    public final const(QBrush) brush() const {
        void* ret = qtd_QPainter_brush_const(qtdNativeId);
        const(QBrush) __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final QPoint brushOrigin() const {
        QPoint res;
        qtd_QPainter_brushOrigin_const(qtdNativeId, &res);
        return res;
    }

    public final QPainterPath clipPath() const {
        void* ret = qtd_QPainter_clipPath_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QRegion clipRegion() const {
        void* ret = qtd_QPainter_clipRegion_const(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QMatrix combinedMatrix() const {
        void* ret = qtd_QPainter_combinedMatrix_const(qtdNativeId);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final QTransform combinedTransform() const {
        void* ret = qtd_QPainter_combinedTransform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QPainter.CompositionMode compositionMode() const {
        return cast(QPainter.CompositionMode) qtd_QPainter_compositionMode_const(qtdNativeId);
    }

    public final IQPaintDevice device() const {
        void* ret = qtd_QPainter_device_const(qtdNativeId);
        IQPaintDevice __d_return_value = qtd_QPaintDevice_from_ptr(ret);

        return __d_return_value;
    }

    public final const(QMatrix) deviceMatrix() const {
        void* ret = qtd_QPainter_deviceMatrix_const(qtdNativeId);
        const(QMatrix) __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final const(QTransform) deviceTransform() const {
        void* ret = qtd_QPainter_deviceTransform_const(qtdNativeId);
        const(QTransform) __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final void drawArc(const(QRect) arg__1, int a, int alen) {
        qtd_QPainter_drawArc_QRect_int_int(qtdNativeId, arg__1, a, alen);
    }

    public final void drawArc(const(QRectF) rect, int a, int alen) {
        qtd_QPainter_drawArc_QRectF_int_int(qtdNativeId, rect, a, alen);
    }

    public final void drawArc(int x, int y, int w, int h, int a, int alen) {
        qtd_QPainter_drawArc_int_int_int_int_int_int(qtdNativeId, x, y, w, h, a, alen);
    }

    public final void drawChord(const(QRect) arg__1, int a, int alen) {
        qtd_QPainter_drawChord_QRect_int_int(qtdNativeId, arg__1, a, alen);
    }

    public final void drawChord(const(QRectF) rect, int a, int alen) {
        qtd_QPainter_drawChord_QRectF_int_int(qtdNativeId, rect, a, alen);
    }

    public final void drawChord(int x, int y, int w, int h, int a, int alen) {
        qtd_QPainter_drawChord_int_int_int_int_int_int(qtdNativeId, x, y, w, h, a, alen);
    }

    private final void drawConvexPolygon(const(QPoint*) points, int pointCount) {
        qtd_QPainter_drawConvexPolygon_nativepointerQPoint_int(qtdNativeId, points, pointCount);
    }

    private final void drawConvexPolygon(const(QPointF*) points, int pointCount) {
        qtd_QPainter_drawConvexPolygon_nativepointerQPointF_int(qtdNativeId, points, pointCount);
    }

    public final void drawConvexPolygon(const(QPolygon) polygon) {
        qtd_QPainter_drawConvexPolygon_QPolygon(qtdNativeId, polygon is null ? null : (cast(QPolygon)polygon).qtdNativeId);
    }

    public final void drawConvexPolygon(const(QPolygonF) polygon) {
        qtd_QPainter_drawConvexPolygon_QPolygonF(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
    }

    public final void drawEllipse(const(QPoint) center, int rx, int ry) {
        qtd_QPainter_drawEllipse_QPoint_int_int(qtdNativeId, center, rx, ry);
    }

    public final void drawEllipse(const(QPointF) center, double rx, double ry) {
        qtd_QPainter_drawEllipse_QPointF_double_double(qtdNativeId, center, rx, ry);
    }

    public final void drawEllipse(const(QRect) r) {
        qtd_QPainter_drawEllipse_QRect(qtdNativeId, r);
    }

    public final void drawEllipse(const(QRectF) r) {
        qtd_QPainter_drawEllipse_QRectF(qtdNativeId, r);
    }

    public final void drawEllipse(int x, int y, int w, int h) {
        qtd_QPainter_drawEllipse_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    public final void drawImage(const(QPoint) p, const(QImage) image) {
        qtd_QPainter_drawImage_QPoint_QImage(qtdNativeId, p, image is null ? null : (cast(QImage)image).qtdNativeId);
    }

    public final void drawImage(const(QPoint) p, const(QImage) image, const(QRect) sr, int flags = 0) {
        qtd_QPainter_drawImage_QPoint_QImage_QRect_ImageConversionFlags(qtdNativeId, p, image is null ? null : (cast(QImage)image).qtdNativeId, sr, flags);
    }

    public final void drawImage(const(QPointF) p, const(QImage) image) {
        qtd_QPainter_drawImage_QPointF_QImage(qtdNativeId, p, image is null ? null : (cast(QImage)image).qtdNativeId);
    }

    public final void drawImage(const(QPointF) p, const(QImage) image, const(QRectF) sr, int flags = 0) {
        qtd_QPainter_drawImage_QPointF_QImage_QRectF_ImageConversionFlags(qtdNativeId, p, image is null ? null : (cast(QImage)image).qtdNativeId, sr, flags);
    }

    public final void drawImage(const(QRect) r, const(QImage) image) {
        qtd_QPainter_drawImage_QRect_QImage(qtdNativeId, r, image is null ? null : (cast(QImage)image).qtdNativeId);
    }

    public final void drawImage(const(QRect) targetRect, const(QImage) image, const(QRect) sourceRect, int flags = 0) {
        qtd_QPainter_drawImage_QRect_QImage_QRect_ImageConversionFlags(qtdNativeId, targetRect, image is null ? null : (cast(QImage)image).qtdNativeId, sourceRect, flags);
    }

    public final void drawImage(const(QRectF) r, const(QImage) image) {
        qtd_QPainter_drawImage_QRectF_QImage(qtdNativeId, r, image is null ? null : (cast(QImage)image).qtdNativeId);
    }

    public final void drawImage(const(QRectF) targetRect, const(QImage) image, const(QRectF) sourceRect, int flags = 0) {
        qtd_QPainter_drawImage_QRectF_QImage_QRectF_ImageConversionFlags(qtdNativeId, targetRect, image is null ? null : (cast(QImage)image).qtdNativeId, sourceRect, flags);
    }

    public final void drawImage(int x, int y, const(QImage) image, int sx = 0, int sy = 0, int sw = -1, int sh = -1, int flags = 0) {
        qtd_QPainter_drawImage_int_int_QImage_int_int_int_int_ImageConversionFlags(qtdNativeId, x, y, image is null ? null : (cast(QImage)image).qtdNativeId, sx, sy, sw, sh, flags);
    }

    public final void drawLine(const(QLine) line) {
        qtd_QPainter_drawLine_QLine(qtdNativeId, line);
    }

    public final void drawLine(const(QLineF) line) {
        qtd_QPainter_drawLine_QLineF(qtdNativeId, line);
    }

    public final void drawLine(const(QPoint) p1, const(QPoint) p2) {
        qtd_QPainter_drawLine_QPoint_QPoint(qtdNativeId, p1, p2);
    }

    public final void drawLine(const(QPointF) p1, const(QPointF) p2) {
        qtd_QPainter_drawLine_QPointF_QPointF(qtdNativeId, p1, p2);
    }

    public final void drawLine(int x1, int y1, int x2, int y2) {
        qtd_QPainter_drawLine_int_int_int_int(qtdNativeId, x1, y1, x2, y2);
    }

    private final void drawLines(const(QLine*) lines, int lineCount) {
        qtd_QPainter_drawLines_nativepointerQLine_int(qtdNativeId, lines, lineCount);
    }

    private final void drawLines(const(QLineF*) lines, int lineCount) {
        qtd_QPainter_drawLines_nativepointerQLineF_int(qtdNativeId, lines, lineCount);
    }

    public final void drawPath(const(QPainterPath) path) {
        qtd_QPainter_drawPath_QPainterPath(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
    }

    public final void drawPicture(const(QPoint) p, const(QPicture) picture) {
        qtd_QPainter_drawPicture_QPoint_QPicture(qtdNativeId, p, picture is null ? null : (cast(QPicture)picture).qtdNativeId);
    }

    public final void drawPicture(const(QPointF) p, const(QPicture) picture) {
        qtd_QPainter_drawPicture_QPointF_QPicture(qtdNativeId, p, picture is null ? null : (cast(QPicture)picture).qtdNativeId);
    }

    public final void drawPicture(int x, int y, const(QPicture) picture) {
        qtd_QPainter_drawPicture_int_int_QPicture(qtdNativeId, x, y, picture is null ? null : (cast(QPicture)picture).qtdNativeId);
    }

    public final void drawPie(const(QRect) arg__1, int a, int alen) {
        qtd_QPainter_drawPie_QRect_int_int(qtdNativeId, arg__1, a, alen);
    }

    public final void drawPie(const(QRectF) rect, int a, int alen) {
        qtd_QPainter_drawPie_QRectF_int_int(qtdNativeId, rect, a, alen);
    }

    public final void drawPie(int x, int y, int w, int h, int a, int alen) {
        qtd_QPainter_drawPie_int_int_int_int_int_int(qtdNativeId, x, y, w, h, a, alen);
    }

    public final void drawPixmap(const(QPoint) p, const(QPixmap) pm) {
        qtd_QPainter_drawPixmap_QPoint_QPixmap(qtdNativeId, p, pm is null ? null : (cast(QPixmap)pm).qtdNativeId);
    }

    public final void drawPixmap(const(QPoint) p, const(QPixmap) pm, const(QRect) sr) {
        qtd_QPainter_drawPixmap_QPoint_QPixmap_QRect(qtdNativeId, p, pm is null ? null : (cast(QPixmap)pm).qtdNativeId, sr);
    }

    public final void drawPixmap(const(QPointF) p, const(QPixmap) pm) {
        qtd_QPainter_drawPixmap_QPointF_QPixmap(qtdNativeId, p, pm is null ? null : (cast(QPixmap)pm).qtdNativeId);
    }

    public final void drawPixmap(const(QPointF) p, const(QPixmap) pm, const(QRectF) sr) {
        qtd_QPainter_drawPixmap_QPointF_QPixmap_QRectF(qtdNativeId, p, pm is null ? null : (cast(QPixmap)pm).qtdNativeId, sr);
    }

    public final void drawPixmap(const(QRect) r, const(QPixmap) pm) {
        qtd_QPainter_drawPixmap_QRect_QPixmap(qtdNativeId, r, pm is null ? null : (cast(QPixmap)pm).qtdNativeId);
    }

    public final void drawPixmap(const(QRect) targetRect, const(QPixmap) pixmap, const(QRect) sourceRect) {
        qtd_QPainter_drawPixmap_QRect_QPixmap_QRect(qtdNativeId, targetRect, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, sourceRect);
    }

    public final void drawPixmap(const(QRectF) targetRect, const(QPixmap) pixmap, const(QRectF) sourceRect) {
        qtd_QPainter_drawPixmap_QRectF_QPixmap_QRectF(qtdNativeId, targetRect, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, sourceRect);
    }

    public final void drawPixmap(int x, int y, const(QPixmap) pm) {
        qtd_QPainter_drawPixmap_int_int_QPixmap(qtdNativeId, x, y, pm is null ? null : (cast(QPixmap)pm).qtdNativeId);
    }

    public final void drawPixmap(int x, int y, const(QPixmap) pm, int sx, int sy, int sw, int sh) {
        qtd_QPainter_drawPixmap_int_int_QPixmap_int_int_int_int(qtdNativeId, x, y, pm is null ? null : (cast(QPixmap)pm).qtdNativeId, sx, sy, sw, sh);
    }

    public final void drawPixmap(int x, int y, int w, int h, const(QPixmap) pm) {
        qtd_QPainter_drawPixmap_int_int_int_int_QPixmap(qtdNativeId, x, y, w, h, pm is null ? null : (cast(QPixmap)pm).qtdNativeId);
    }

    public final void drawPixmap(int x, int y, int w, int h, const(QPixmap) pm, int sx, int sy, int sw, int sh) {
        qtd_QPainter_drawPixmap_int_int_int_int_QPixmap_int_int_int_int(qtdNativeId, x, y, w, h, pm is null ? null : (cast(QPixmap)pm).qtdNativeId, sx, sy, sw, sh);
    }

    public final void drawPoint(const(QPoint) p) {
        qtd_QPainter_drawPoint_QPoint(qtdNativeId, p);
    }

    public final void drawPoint(const(QPointF) pt) {
        qtd_QPainter_drawPoint_QPointF(qtdNativeId, pt);
    }

    public final void drawPoint(int x, int y) {
        qtd_QPainter_drawPoint_int_int(qtdNativeId, x, y);
    }

    private final void drawPoints(const(QPoint*) points, int pointCount) {
        qtd_QPainter_drawPoints_nativepointerQPoint_int(qtdNativeId, points, pointCount);
    }

    private final void drawPoints(const(QPointF*) points, int pointCount) {
        qtd_QPainter_drawPoints_nativepointerQPointF_int(qtdNativeId, points, pointCount);
    }

    public final void drawPoints(const(QPolygon) points) {
        qtd_QPainter_drawPoints_QPolygon(qtdNativeId, points is null ? null : (cast(QPolygon)points).qtdNativeId);
    }

    public final void drawPoints(const(QPolygonF) points) {
        qtd_QPainter_drawPoints_QPolygonF(qtdNativeId, points is null ? null : (cast(QPolygonF)points).qtdNativeId);
    }

    private final void drawPolygon(const(QPoint*) points, int pointCount, Qt.FillRule fillRule = Qt.FillRule.OddEvenFill) {
        qtd_QPainter_drawPolygon_nativepointerQPoint_int_FillRule(qtdNativeId, points, pointCount, fillRule);
    }

    private final void drawPolygon(const(QPointF*) points, int pointCount, Qt.FillRule fillRule = Qt.FillRule.OddEvenFill) {
        qtd_QPainter_drawPolygon_nativepointerQPointF_int_FillRule(qtdNativeId, points, pointCount, fillRule);
    }

    public final void drawPolygon(const(QPolygon) polygon, Qt.FillRule fillRule = Qt.FillRule.OddEvenFill) {
        qtd_QPainter_drawPolygon_QPolygon_FillRule(qtdNativeId, polygon is null ? null : (cast(QPolygon)polygon).qtdNativeId, fillRule);
    }

    public final void drawPolygon(const(QPolygonF) polygon, Qt.FillRule fillRule = Qt.FillRule.OddEvenFill) {
        qtd_QPainter_drawPolygon_QPolygonF_FillRule(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId, fillRule);
    }

    private final void drawPolyline(const(QPoint*) points, int pointCount) {
        qtd_QPainter_drawPolyline_nativepointerQPoint_int(qtdNativeId, points, pointCount);
    }

    private final void drawPolyline(const(QPointF*) points, int pointCount) {
        qtd_QPainter_drawPolyline_nativepointerQPointF_int(qtdNativeId, points, pointCount);
    }

    public final void drawPolyline(const(QPolygon) polygon) {
        qtd_QPainter_drawPolyline_QPolygon(qtdNativeId, polygon is null ? null : (cast(QPolygon)polygon).qtdNativeId);
    }

    public final void drawPolyline(const(QPolygonF) polyline) {
        qtd_QPainter_drawPolyline_QPolygonF(qtdNativeId, polyline is null ? null : (cast(QPolygonF)polyline).qtdNativeId);
    }

    public final void drawRect(const(QRect) rect) {
        qtd_QPainter_drawRect_QRect(qtdNativeId, rect);
    }

    public final void drawRect(const(QRectF) rect) {
        qtd_QPainter_drawRect_QRectF(qtdNativeId, rect);
    }

    public final void drawRect(int x1, int y1, int w, int h) {
        qtd_QPainter_drawRect_int_int_int_int(qtdNativeId, x1, y1, w, h);
    }

    private final void drawRects(const(QRect*) rects, int rectCount) {
        qtd_QPainter_drawRects_nativepointerQRect_int(qtdNativeId, rects, rectCount);
    }

    private final void drawRects(const(QRectF*) rects, int rectCount) {
        qtd_QPainter_drawRects_nativepointerQRectF_int(qtdNativeId, rects, rectCount);
    }

    public final void drawRoundRect(const(QRect) r, int xround = 25, int yround = 25) {
        qtd_QPainter_drawRoundRect_QRect_int_int(qtdNativeId, r, xround, yround);
    }

    public final void drawRoundRect(const(QRectF) r, int xround = 25, int yround = 25) {
        qtd_QPainter_drawRoundRect_QRectF_int_int(qtdNativeId, r, xround, yround);
    }

    public final void drawRoundRect(int x, int y, int w, int h, int arg__5 = 25, int arg__6 = 25) {
        qtd_QPainter_drawRoundRect_int_int_int_int_int_int(qtdNativeId, x, y, w, h, arg__5, arg__6);
    }

    public final void drawRoundedRect(const(QRect) rect, double xRadius, double yRadius, Qt.SizeMode mode = Qt.SizeMode.AbsoluteSize) {
        qtd_QPainter_drawRoundedRect_QRect_double_double_SizeMode(qtdNativeId, rect, xRadius, yRadius, mode);
    }

    public final void drawRoundedRect(const(QRectF) rect, double xRadius, double yRadius, Qt.SizeMode mode = Qt.SizeMode.AbsoluteSize) {
        qtd_QPainter_drawRoundedRect_QRectF_double_double_SizeMode(qtdNativeId, rect, xRadius, yRadius, mode);
    }

    public final void drawRoundedRect(int x, int y, int w, int h, double xRadius, double yRadius, Qt.SizeMode mode = Qt.SizeMode.AbsoluteSize) {
        qtd_QPainter_drawRoundedRect_int_int_int_int_double_double_SizeMode(qtdNativeId, x, y, w, h, xRadius, yRadius, mode);
    }

    public final void drawText(const(QPoint) p, string s) {
        qtd_QPainter_drawText_QPoint_string(qtdNativeId, p, s);
    }

    public final void drawText(const(QPointF) p, string s) {
        qtd_QPainter_drawText_QPointF_string(qtdNativeId, p, s);
    }

    public final void drawText(const(QRect) r, int flags, string text, QRect* br = null) {
        qtd_QPainter_drawText_QRect_int_string_nativepointerQRect(qtdNativeId, r, flags, text, br);
    }

    public final void drawText(const(QRectF) r, string text, const(QTextOption) o = new QTextOption()) {
        qtd_QPainter_drawText_QRectF_string_QTextOption(qtdNativeId, r, text, o is null ? null : (cast(QTextOption)o).qtdNativeId);
    }

    public final void drawText(const(QRectF) r, int flags, string text, QRectF* br = null) {
        qtd_QPainter_drawText_QRectF_int_string_nativepointerQRectF(qtdNativeId, r, flags, text, br);
    }

    public final void drawText(int x, int y, string s) {
        qtd_QPainter_drawText_int_int_string(qtdNativeId, x, y, s);
    }

    public final void drawText(int x, int y, int w, int h, int flags, string text, QRect* br = null) {
        qtd_QPainter_drawText_int_int_int_int_int_string_nativepointerQRect(qtdNativeId, x, y, w, h, flags, text, br);
    }

    public final void drawTextItem(const(QPoint) p, QTextItem ti) {
        qtd_QPainter_drawTextItem_QPoint_QTextItem(qtdNativeId, p, ti is null ? null : (cast(QTextItem)ti).qtdNativeId);
    }

    public final void drawTextItem(const(QPointF) p, QTextItem ti) {
        qtd_QPainter_drawTextItem_QPointF_QTextItem(qtdNativeId, p, ti is null ? null : (cast(QTextItem)ti).qtdNativeId);
    }

    public final void drawTextItem(int x, int y, QTextItem ti) {
        qtd_QPainter_drawTextItem_int_int_QTextItem(qtdNativeId, x, y, ti is null ? null : (cast(QTextItem)ti).qtdNativeId);
    }

    public final void drawTiledPixmap(const(QRect) arg__1, const(QPixmap) arg__2, const(QPoint) arg__3 = QPoint()) {
        qtd_QPainter_drawTiledPixmap_QRect_QPixmap_QPoint(qtdNativeId, arg__1, arg__2 is null ? null : (cast(QPixmap)arg__2).qtdNativeId, arg__3);
    }

    public final void drawTiledPixmap(const(QRectF) rect, const(QPixmap) pm, const(QPointF) offset = QPointF()) {
        qtd_QPainter_drawTiledPixmap_QRectF_QPixmap_QPointF(qtdNativeId, rect, pm is null ? null : (cast(QPixmap)pm).qtdNativeId, offset);
    }

    public final void drawTiledPixmap(int x, int y, int w, int h, const(QPixmap) arg__5, int sx = 0, int sy = 0) {
        qtd_QPainter_drawTiledPixmap_int_int_int_int_QPixmap_int_int(qtdNativeId, x, y, w, h, arg__5 is null ? null : (cast(QPixmap)arg__5).qtdNativeId, sx, sy);
    }

    public final bool end() {
        return qtd_QPainter_end(qtdNativeId);
    }

    public final void endNativePainting() {
        qtd_QPainter_endNativePainting(qtdNativeId);
    }

    public final void eraseRect(const(QRect) arg__1) {
        qtd_QPainter_eraseRect_QRect(qtdNativeId, arg__1);
    }

    public final void eraseRect(const(QRectF) arg__1) {
        qtd_QPainter_eraseRect_QRectF(qtdNativeId, arg__1);
    }

    public final void eraseRect(int x, int y, int w, int h) {
        qtd_QPainter_eraseRect_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    public final void fillPath(const(QPainterPath) path, const(QBrush) brush) {
        qtd_QPainter_fillPath_QPainterPath_QBrush(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void fillRect(const(QRect) arg__1, const(QBrush) arg__2) {
        qtd_QPainter_fillRect_QRect_QBrush(qtdNativeId, arg__1, arg__2 is null ? null : (cast(QBrush)arg__2).qtdNativeId);
    }

    public final void fillRect(const(QRect) arg__1, const(QColor) color) {
        qtd_QPainter_fillRect_QRect_QColor(qtdNativeId, arg__1, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void fillRect(const(QRect) r, Qt.BrushStyle style) {
        qtd_QPainter_fillRect_QRect_BrushStyle(qtdNativeId, r, style);
    }

    public final void fillRect(const(QRect) r, Qt.GlobalColor c) {
        qtd_QPainter_fillRect_QRect_GlobalColor(qtdNativeId, r, c);
    }

    public final void fillRect(const(QRectF) arg__1, const(QBrush) arg__2) {
        qtd_QPainter_fillRect_QRectF_QBrush(qtdNativeId, arg__1, arg__2 is null ? null : (cast(QBrush)arg__2).qtdNativeId);
    }

    public final void fillRect(const(QRectF) arg__1, const(QColor) color) {
        qtd_QPainter_fillRect_QRectF_QColor(qtdNativeId, arg__1, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void fillRect(const(QRectF) r, Qt.BrushStyle style) {
        qtd_QPainter_fillRect_QRectF_BrushStyle(qtdNativeId, r, style);
    }

    public final void fillRect(const(QRectF) r, Qt.GlobalColor c) {
        qtd_QPainter_fillRect_QRectF_GlobalColor(qtdNativeId, r, c);
    }

    public final void fillRect(int x, int y, int w, int h, Qt.BrushStyle style) {
        qtd_QPainter_fillRect_int_int_int_int_BrushStyle(qtdNativeId, x, y, w, h, style);
    }

    public final void fillRect(int x, int y, int w, int h, Qt.GlobalColor c) {
        qtd_QPainter_fillRect_int_int_int_int_GlobalColor(qtdNativeId, x, y, w, h, c);
    }

    public final void fillRect(int x, int y, int w, int h, const(QBrush) arg__5) {
        qtd_QPainter_fillRect_int_int_int_int_QBrush(qtdNativeId, x, y, w, h, arg__5 is null ? null : (cast(QBrush)arg__5).qtdNativeId);
    }

    public final void fillRect(int x, int y, int w, int h, const(QColor) color) {
        qtd_QPainter_fillRect_int_int_int_int_QColor(qtdNativeId, x, y, w, h, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final const(QFont) font() const {
        void* ret = qtd_QPainter_font_const(qtdNativeId);
        const(QFont) __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QFontInfo fontInfo() const {
        void* ret = qtd_QPainter_fontInfo_const(qtdNativeId);
        QFontInfo __d_return_value = new QFontInfo(ret);
        return __d_return_value;
    }

    public final QFontMetrics fontMetrics() const {
        void* ret = qtd_QPainter_fontMetrics_const(qtdNativeId);
        QFontMetrics __d_return_value = new QFontMetrics(ret);
        return __d_return_value;
    }

    public final bool hasClipping() const {
        return qtd_QPainter_hasClipping_const(qtdNativeId);
    }

    public final void initFrom(QWidget widget) {
        /*if (widget is null)
            throw new NullPointerException("Argument 'widget': null not expected."); */
        qtd_QPainter_initFrom_QWidget(qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public final bool isActive() const {
        return qtd_QPainter_isActive_const(qtdNativeId);
    }

    public final Qt.LayoutDirection layoutDirection() const {
        return cast(Qt.LayoutDirection) qtd_QPainter_layoutDirection_const(qtdNativeId);
    }

    public final double opacity() const {
        return qtd_QPainter_opacity_const(qtdNativeId);
    }

    public final QPaintEngine paintEngine() const {
        void* ret = qtd_QPainter_paintEngine_const(qtdNativeId);
        QPaintEngine __d_return_value = qtd_QPaintEngine_from_ptr(ret);

        return __d_return_value;
    }

    public final const(QPen) pen() const {
        void* ret = qtd_QPainter_pen_const(qtdNativeId);
        const(QPen) __d_return_value = new QPen(ret);
        return __d_return_value;
    }

    public final int renderHints() const {
        return qtd_QPainter_renderHints_const(qtdNativeId);
    }

    public final void resetMatrix() {
        qtd_QPainter_resetMatrix(qtdNativeId);
    }

    public final void resetTransform() {
        qtd_QPainter_resetTransform(qtdNativeId);
    }

    public final void restore() {
        qtd_QPainter_restore(qtdNativeId);
    }

    public final void rotate(double a) {
        qtd_QPainter_rotate_double(qtdNativeId, a);
    }

    public final void save() {
        qtd_QPainter_save(qtdNativeId);
    }

    public final void scale(double sx, double sy) {
        qtd_QPainter_scale_double_double(qtdNativeId, sx, sy);
    }

    public final void setBackground(const(QBrush) bg) {
        qtd_QPainter_setBackground_QBrush(qtdNativeId, bg is null ? null : (cast(QBrush)bg).qtdNativeId);
    }

    public final void setBackgroundMode(Qt.BGMode mode) {
        qtd_QPainter_setBackgroundMode_BGMode(qtdNativeId, mode);
    }

    public final void setBrush(Qt.BrushStyle style) {
        qtd_QPainter_setBrush_BrushStyle(qtdNativeId, style);
    }

    public final void setBrush(const(QBrush) brush) {
        qtd_QPainter_setBrush_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setBrushOrigin(const(QPoint) arg__1) {
        qtd_QPainter_setBrushOrigin_QPoint(qtdNativeId, arg__1);
    }

    public final void setBrushOrigin(const(QPointF) arg__1) {
        qtd_QPainter_setBrushOrigin_QPointF(qtdNativeId, arg__1);
    }

    public final void setBrushOrigin(int x, int y) {
        qtd_QPainter_setBrushOrigin_int_int(qtdNativeId, x, y);
    }

    public final void setClipPath(const(QPainterPath) path, Qt.ClipOperation op = Qt.ClipOperation.ReplaceClip) {
        qtd_QPainter_setClipPath_QPainterPath_ClipOperation(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, op);
    }

    public final void setClipRect(const(QRect) arg__1, Qt.ClipOperation op = Qt.ClipOperation.ReplaceClip) {
        qtd_QPainter_setClipRect_QRect_ClipOperation(qtdNativeId, arg__1, op);
    }

    public final void setClipRect(const(QRectF) arg__1, Qt.ClipOperation op = Qt.ClipOperation.ReplaceClip) {
        qtd_QPainter_setClipRect_QRectF_ClipOperation(qtdNativeId, arg__1, op);
    }

    public final void setClipRect(int x, int y, int w, int h, Qt.ClipOperation op = Qt.ClipOperation.ReplaceClip) {
        qtd_QPainter_setClipRect_int_int_int_int_ClipOperation(qtdNativeId, x, y, w, h, op);
    }

    public final void setClipRegion(const(QRegion) arg__1, Qt.ClipOperation op = Qt.ClipOperation.ReplaceClip) {
        qtd_QPainter_setClipRegion_QRegion_ClipOperation(qtdNativeId, arg__1 is null ? null : (cast(QRegion)arg__1).qtdNativeId, op);
    }

    public final void setClipping(bool enable) {
        qtd_QPainter_setClipping_bool(qtdNativeId, enable);
    }

    public final void setCompositionMode(QPainter.CompositionMode mode) {
        qtd_QPainter_setCompositionMode_CompositionMode(qtdNativeId, mode);
    }

    public final void setFont(const(QFont) f) {
        qtd_QPainter_setFont_QFont(qtdNativeId, f is null ? null : (cast(QFont)f).qtdNativeId);
    }

    public final void setLayoutDirection(Qt.LayoutDirection direction) {
        qtd_QPainter_setLayoutDirection_LayoutDirection(qtdNativeId, direction);
    }

    public final void setOpacity(double opacity) {
        qtd_QPainter_setOpacity_double(qtdNativeId, opacity);
    }

    public final void setPen(Qt.PenStyle style) {
        qtd_QPainter_setPen_PenStyle(qtdNativeId, style);
    }

    public final void setPen(const(QColor) color) {
        qtd_QPainter_setPen_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setPen(const(QPen) pen) {
        qtd_QPainter_setPen_QPen(qtdNativeId, pen is null ? null : (cast(QPen)pen).qtdNativeId);
    }

    public final void setRenderHint(QPainter.RenderHint hint, bool on = true) {
        qtd_QPainter_setRenderHint_RenderHint_bool(qtdNativeId, hint, on);
    }

    public final void setRenderHints(int hints, bool on = true) {
        qtd_QPainter_setRenderHints_RenderHints_bool(qtdNativeId, hints, on);
    }

    public final void setTransform(const(QTransform) transform, bool combine = false) {
        qtd_QPainter_setTransform_QTransform_bool(qtdNativeId, transform is null ? null : (cast(QTransform)transform).qtdNativeId, combine);
    }

    public final void setViewTransformEnabled(bool enable) {
        qtd_QPainter_setViewTransformEnabled_bool(qtdNativeId, enable);
    }

    public final void setViewport(const(QRect) viewport) {
        qtd_QPainter_setViewport_QRect(qtdNativeId, viewport);
    }

    public final void setViewport(int x, int y, int w, int h) {
        qtd_QPainter_setViewport_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    public final void setWindow(const(QRect) window) {
        qtd_QPainter_setWindow_QRect(qtdNativeId, window);
    }

    public final void setWindow(int x, int y, int w, int h) {
        qtd_QPainter_setWindow_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    public final void setWorldMatrix(const(QMatrix) matrix, bool combine = false) {
        qtd_QPainter_setWorldMatrix_QMatrix_bool(qtdNativeId, matrix is null ? null : (cast(QMatrix)matrix).qtdNativeId, combine);
    }

    public final void setWorldMatrixEnabled(bool enabled) {
        qtd_QPainter_setWorldMatrixEnabled_bool(qtdNativeId, enabled);
    }

    public final void setWorldTransform(const(QTransform) matrix, bool combine = false) {
        qtd_QPainter_setWorldTransform_QTransform_bool(qtdNativeId, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId, combine);
    }

    public final void shear(double sh, double sv) {
        qtd_QPainter_shear_double_double(qtdNativeId, sh, sv);
    }

    public final void strokePath(const(QPainterPath) path, const(QPen) pen) {
        qtd_QPainter_strokePath_QPainterPath_QPen(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, pen is null ? null : (cast(QPen)pen).qtdNativeId);
    }

    public final bool testRenderHint(QPainter.RenderHint hint) const {
        return qtd_QPainter_testRenderHint_RenderHint_const(qtdNativeId, hint);
    }

    public final const(QTransform) transform() const {
        void* ret = qtd_QPainter_transform_const(qtdNativeId);
        const(QTransform) __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final void translate(const(QPoint) offset) {
        qtd_QPainter_translate_QPoint(qtdNativeId, offset);
    }

    public final void translate(const(QPointF) offset) {
        qtd_QPainter_translate_QPointF(qtdNativeId, offset);
    }

    public final void translate(double dx, double dy) {
        qtd_QPainter_translate_double_double(qtdNativeId, dx, dy);
    }

    public final bool viewTransformEnabled() const {
        return qtd_QPainter_viewTransformEnabled_const(qtdNativeId);
    }

    public final QRect viewport() const {
        QRect res;
        qtd_QPainter_viewport_const(qtdNativeId, &res);
        return res;
    }

    public final QRect window() const {
        QRect res;
        qtd_QPainter_window_const(qtdNativeId, &res);
        return res;
    }

    public final const(QMatrix) worldMatrix() const {
        void* ret = qtd_QPainter_worldMatrix_const(qtdNativeId);
        const(QMatrix) __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final bool worldMatrixEnabled() const {
        return qtd_QPainter_worldMatrixEnabled_const(qtdNativeId);
    }

    public final const(QTransform) worldTransform() const {
        void* ret = qtd_QPainter_worldTransform_const(qtdNativeId);
        const(QTransform) __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    private static IQPaintDevice redirected(IQPaintDevice device, QPoint* offset) {
        void* ret = qtd_QPainter_redirected_QPaintDevice_nativepointerQPoint(device is null ? null : device.__ptr_IQPaintDevice, offset);
        IQPaintDevice __d_return_value = qtd_QPaintDevice_from_ptr(ret);

        return __d_return_value;
    }

    public static void restoreRedirected(IQPaintDevice device) {
        /*if (device is null)
            throw new NullPointerException("Argument 'device': null not expected."); */
        qtd_QPainter_restoreRedirected_QPaintDevice(device is null ? null : device.__ptr_IQPaintDevice);
    }

    public static void setRedirected(IQPaintDevice device, IQPaintDevice replacement, const(QPoint) offset = QPoint()) {
        /*if (device is null)
            throw new NullPointerException("Argument 'device': null not expected."); */
        qtd_QPainter_setRedirected_QPaintDevice_QPaintDevice_QPoint(device is null ? null : device.__ptr_IQPaintDevice, replacement is null ? null : replacement.__ptr_IQPaintDevice, offset);
    }
// Field accessors
    static QPainter __getObject(void* nativeId) {
        return qtd_QPainter_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPainter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPainter_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPainter_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPainter_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final void setBrush(QColor color) {
        setBrush(new QBrush(color));
    }

    public final void setBrush(QGradient gradient) {
        setBrush(new QBrush(gradient));
    }

    public final void setBrush(QPixmap pm) {
        setBrush(new QBrush(pm));
    }

    public final void drawConvexPolygon(in QPoint[] points) {
        qtd_QPainter_drawConvexPolygon_nativepointerQPoint_int(qtdNativeId, points.ptr, cast(int)points.length);
    }

    public final void drawConvexPolygon(in QPointF[] points) {
        qtd_QPainter_drawConvexPolygon_nativepointerQPointF_int(qtdNativeId, points.ptr, cast(int)points.length);
    }

    public final void drawLines(in QLine[] lines) {
        qtd_QPainter_drawLines_nativepointerQLine_int(qtdNativeId, lines.ptr, cast(int)lines.length);
    }

    public final void drawLines(in QLineF[] lines) {
        qtd_QPainter_drawLines_nativepointerQLineF_int(qtdNativeId, lines.ptr, cast(int)lines.length);
    }

    public final void drawPolygon(in QPoint[] points, Qt.FillRule fillRule = Qt.FillRule.OddEvenFill) {
        qtd_QPainter_drawPolygon_nativepointerQPoint_int_FillRule(qtdNativeId, points.ptr, cast(int)points.length, fillRule);
    }

    public final void drawPolygon(in QPointF[] points, Qt.FillRule fillRule = Qt.FillRule.OddEvenFill) {
        qtd_QPainter_drawPolygon_nativepointerQPointF_int_FillRule(qtdNativeId, points.ptr, cast(int)points.length, fillRule);
    }

    public final void drawPolyline(in QPoint[] points) {
        qtd_QPainter_drawPolyline_nativepointerQPoint_int(qtdNativeId, points.ptr, cast(int)points.length);
    }

    public final void drawPolyline(in QPointF[] points) {
        qtd_QPainter_drawPolyline_nativepointerQPointF_int(qtdNativeId, points.ptr, cast(int)points.length);
    }

    public final void drawPoints(in QPoint[] points) {
        qtd_QPainter_drawPoints_nativepointerQPoint_int(qtdNativeId, points.ptr, cast(int)points.length);
    }

    public final void drawPoints(in QPointF[] points) {
        qtd_QPainter_drawPoints_nativepointerQPointF_int(qtdNativeId, points.ptr, cast(int)points.length);
    }

    public final void drawRects(in QRect[] rects) {
        qtd_QPainter_drawRects_nativepointerQRect_int(qtdNativeId, rects.ptr, cast(int)rects.length);
    }

    public final void drawRects(in QRectF[] rects) {
        qtd_QPainter_drawRects_nativepointerQRectF_int(qtdNativeId, rects.ptr, cast(int)rects.length);
    }
    /*
    public static QPaintDeviceInterface redirected(QPaintDeviceInterface device, qt.core.QPoint offset) {
    return redirected(device, offset == null ? null : offset.nativePointer());
    }

    public QPainter(QWidget widget) {
    this();
    begin(widget);
    }

    public boolean begin(QWidget widget) { // can't be final because of QStylePainter
    return qt.QtJambiGuiInternal.beginPaint(widget, this);
    }

    private static java.util.Stack<QPaintDeviceInterface> __rcRedirections = new java.util.Stack<QPaintDeviceInterface>();
     */

}
QPainter qtd_QPainter_from_ptr(void* ret) {
    auto return_value = new QPainter(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QPainter_delete(void *ptr);
extern (C) void qtd_QPainter_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPainter_QPainter(void *d_ptr);
private extern(C) void* qtd_QPainter_QPainter_QPaintDevice(void *d_ptr,
 void* arg__1);
private extern(C) void*  qtd_QPainter_background_const(void* __this_nativeId);
private extern(C) int  qtd_QPainter_backgroundMode_const(void* __this_nativeId);
private extern(C) bool  qtd_QPainter_begin_QPaintDevice(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QPainter_beginNativePainting(void* __this_nativeId);
private extern(C) void  qtd_QPainter_boundingRect_QRect_int_string(void* __this_nativeId,
 QRect * __d_return_value,
 QRect rect0,
 int flags1,
 string text2);
private extern(C) void  qtd_QPainter_boundingRect_QRectF_string_QTextOption(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0,
 string text1,
 void* o2);
private extern(C) void  qtd_QPainter_boundingRect_QRectF_int_string(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0,
 int flags1,
 string text2);
private extern(C) void  qtd_QPainter_boundingRect_int_int_int_int_int_string(void* __this_nativeId,
 QRect * __d_return_value,
 int x0,
 int y1,
 int w2,
 int h3,
 int flags4,
 string text5);
private extern(C) void*  qtd_QPainter_brush_const(void* __this_nativeId);
private extern(C) void  qtd_QPainter_brushOrigin_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void*  qtd_QPainter_clipPath_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_clipRegion_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_combinedMatrix_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_combinedTransform_const(void* __this_nativeId);
private extern(C) int  qtd_QPainter_compositionMode_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_device_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_deviceMatrix_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_deviceTransform_const(void* __this_nativeId);
private extern(C) void  qtd_QPainter_drawArc_QRect_int_int(void* __this_nativeId,
 QRect arg__1,
 int a1,
 int alen2);
private extern(C) void  qtd_QPainter_drawArc_QRectF_int_int(void* __this_nativeId,
 QRectF rect0,
 int a1,
 int alen2);
private extern(C) void  qtd_QPainter_drawArc_int_int_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int a4,
 int alen5);
private extern(C) void  qtd_QPainter_drawChord_QRect_int_int(void* __this_nativeId,
 QRect arg__1,
 int a1,
 int alen2);
private extern(C) void  qtd_QPainter_drawChord_QRectF_int_int(void* __this_nativeId,
 QRectF rect0,
 int a1,
 int alen2);
private extern(C) void  qtd_QPainter_drawChord_int_int_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int a4,
 int alen5);
private extern(C) void  qtd_QPainter_drawConvexPolygon_nativepointerQPoint_int(void* __this_nativeId,
 const(QPoint)* points0,
 int pointCount1);
private extern(C) void  qtd_QPainter_drawConvexPolygon_nativepointerQPointF_int(void* __this_nativeId,
 const(QPointF)* points0,
 int pointCount1);
private extern(C) void  qtd_QPainter_drawConvexPolygon_QPolygon(void* __this_nativeId,
 void* polygon0);
private extern(C) void  qtd_QPainter_drawConvexPolygon_QPolygonF(void* __this_nativeId,
 void* polygon0);
private extern(C) void  qtd_QPainter_drawEllipse_QPoint_int_int(void* __this_nativeId,
 QPoint center0,
 int rx1,
 int ry2);
private extern(C) void  qtd_QPainter_drawEllipse_QPointF_double_double(void* __this_nativeId,
 QPointF center0,
 double rx1,
 double ry2);
private extern(C) void  qtd_QPainter_drawEllipse_QRect(void* __this_nativeId,
 QRect r0);
private extern(C) void  qtd_QPainter_drawEllipse_QRectF(void* __this_nativeId,
 QRectF r0);
private extern(C) void  qtd_QPainter_drawEllipse_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void  qtd_QPainter_drawImage_QPoint_QImage(void* __this_nativeId,
 QPoint p0,
 void* image1);
private extern(C) void  qtd_QPainter_drawImage_QPoint_QImage_QRect_ImageConversionFlags(void* __this_nativeId,
 QPoint p0,
 void* image1,
 QRect sr2,
 int flags3);
private extern(C) void  qtd_QPainter_drawImage_QPointF_QImage(void* __this_nativeId,
 QPointF p0,
 void* image1);
private extern(C) void  qtd_QPainter_drawImage_QPointF_QImage_QRectF_ImageConversionFlags(void* __this_nativeId,
 QPointF p0,
 void* image1,
 QRectF sr2,
 int flags3);
private extern(C) void  qtd_QPainter_drawImage_QRect_QImage(void* __this_nativeId,
 QRect r0,
 void* image1);
private extern(C) void  qtd_QPainter_drawImage_QRect_QImage_QRect_ImageConversionFlags(void* __this_nativeId,
 QRect targetRect0,
 void* image1,
 QRect sourceRect2,
 int flags3);
private extern(C) void  qtd_QPainter_drawImage_QRectF_QImage(void* __this_nativeId,
 QRectF r0,
 void* image1);
private extern(C) void  qtd_QPainter_drawImage_QRectF_QImage_QRectF_ImageConversionFlags(void* __this_nativeId,
 QRectF targetRect0,
 void* image1,
 QRectF sourceRect2,
 int flags3);
private extern(C) void  qtd_QPainter_drawImage_int_int_QImage_int_int_int_int_ImageConversionFlags(void* __this_nativeId,
 int x0,
 int y1,
 void* image2,
 int sx3,
 int sy4,
 int sw5,
 int sh6,
 int flags7);
private extern(C) void  qtd_QPainter_drawLine_QLine(void* __this_nativeId,
 QLine line0);
private extern(C) void  qtd_QPainter_drawLine_QLineF(void* __this_nativeId,
 QLineF line0);
private extern(C) void  qtd_QPainter_drawLine_QPoint_QPoint(void* __this_nativeId,
 QPoint p10,
 QPoint p21);
private extern(C) void  qtd_QPainter_drawLine_QPointF_QPointF(void* __this_nativeId,
 QPointF p10,
 QPointF p21);
private extern(C) void  qtd_QPainter_drawLine_int_int_int_int(void* __this_nativeId,
 int x10,
 int y11,
 int x22,
 int y23);
private extern(C) void  qtd_QPainter_drawLines_nativepointerQLine_int(void* __this_nativeId,
 const(QLine)* lines0,
 int lineCount1);
private extern(C) void  qtd_QPainter_drawLines_nativepointerQLineF_int(void* __this_nativeId,
 const(QLineF)* lines0,
 int lineCount1);
private extern(C) void  qtd_QPainter_drawPath_QPainterPath(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QPainter_drawPicture_QPoint_QPicture(void* __this_nativeId,
 QPoint p0,
 void* picture1);
private extern(C) void  qtd_QPainter_drawPicture_QPointF_QPicture(void* __this_nativeId,
 QPointF p0,
 void* picture1);
private extern(C) void  qtd_QPainter_drawPicture_int_int_QPicture(void* __this_nativeId,
 int x0,
 int y1,
 void* picture2);
private extern(C) void  qtd_QPainter_drawPie_QRect_int_int(void* __this_nativeId,
 QRect arg__1,
 int a1,
 int alen2);
private extern(C) void  qtd_QPainter_drawPie_QRectF_int_int(void* __this_nativeId,
 QRectF rect0,
 int a1,
 int alen2);
private extern(C) void  qtd_QPainter_drawPie_int_int_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int a4,
 int alen5);
private extern(C) void  qtd_QPainter_drawPixmap_QPoint_QPixmap(void* __this_nativeId,
 QPoint p0,
 void* pm1);
private extern(C) void  qtd_QPainter_drawPixmap_QPoint_QPixmap_QRect(void* __this_nativeId,
 QPoint p0,
 void* pm1,
 QRect sr2);
private extern(C) void  qtd_QPainter_drawPixmap_QPointF_QPixmap(void* __this_nativeId,
 QPointF p0,
 void* pm1);
private extern(C) void  qtd_QPainter_drawPixmap_QPointF_QPixmap_QRectF(void* __this_nativeId,
 QPointF p0,
 void* pm1,
 QRectF sr2);
private extern(C) void  qtd_QPainter_drawPixmap_QRect_QPixmap(void* __this_nativeId,
 QRect r0,
 void* pm1);
private extern(C) void  qtd_QPainter_drawPixmap_QRect_QPixmap_QRect(void* __this_nativeId,
 QRect targetRect0,
 void* pixmap1,
 QRect sourceRect2);
private extern(C) void  qtd_QPainter_drawPixmap_QRectF_QPixmap_QRectF(void* __this_nativeId,
 QRectF targetRect0,
 void* pixmap1,
 QRectF sourceRect2);
private extern(C) void  qtd_QPainter_drawPixmap_int_int_QPixmap(void* __this_nativeId,
 int x0,
 int y1,
 void* pm2);
private extern(C) void  qtd_QPainter_drawPixmap_int_int_QPixmap_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 void* pm2,
 int sx3,
 int sy4,
 int sw5,
 int sh6);
private extern(C) void  qtd_QPainter_drawPixmap_int_int_int_int_QPixmap(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* pm4);
private extern(C) void  qtd_QPainter_drawPixmap_int_int_int_int_QPixmap_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* pm4,
 int sx5,
 int sy6,
 int sw7,
 int sh8);
private extern(C) void  qtd_QPainter_drawPoint_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QPainter_drawPoint_QPointF(void* __this_nativeId,
 QPointF pt0);
private extern(C) void  qtd_QPainter_drawPoint_int_int(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void  qtd_QPainter_drawPoints_nativepointerQPoint_int(void* __this_nativeId,
 const(QPoint)* points0,
 int pointCount1);
private extern(C) void  qtd_QPainter_drawPoints_nativepointerQPointF_int(void* __this_nativeId,
 const(QPointF)* points0,
 int pointCount1);
private extern(C) void  qtd_QPainter_drawPoints_QPolygon(void* __this_nativeId,
 void* points0);
private extern(C) void  qtd_QPainter_drawPoints_QPolygonF(void* __this_nativeId,
 void* points0);
private extern(C) void  qtd_QPainter_drawPolygon_nativepointerQPoint_int_FillRule(void* __this_nativeId,
 const(QPoint)* points0,
 int pointCount1,
 int fillRule2);
private extern(C) void  qtd_QPainter_drawPolygon_nativepointerQPointF_int_FillRule(void* __this_nativeId,
 const(QPointF)* points0,
 int pointCount1,
 int fillRule2);
private extern(C) void  qtd_QPainter_drawPolygon_QPolygon_FillRule(void* __this_nativeId,
 void* polygon0,
 int fillRule1);
private extern(C) void  qtd_QPainter_drawPolygon_QPolygonF_FillRule(void* __this_nativeId,
 void* polygon0,
 int fillRule1);
private extern(C) void  qtd_QPainter_drawPolyline_nativepointerQPoint_int(void* __this_nativeId,
 const(QPoint)* points0,
 int pointCount1);
private extern(C) void  qtd_QPainter_drawPolyline_nativepointerQPointF_int(void* __this_nativeId,
 const(QPointF)* points0,
 int pointCount1);
private extern(C) void  qtd_QPainter_drawPolyline_QPolygon(void* __this_nativeId,
 void* polygon0);
private extern(C) void  qtd_QPainter_drawPolyline_QPolygonF(void* __this_nativeId,
 void* polyline0);
private extern(C) void  qtd_QPainter_drawRect_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QPainter_drawRect_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QPainter_drawRect_int_int_int_int(void* __this_nativeId,
 int x10,
 int y11,
 int w2,
 int h3);
private extern(C) void  qtd_QPainter_drawRects_nativepointerQRect_int(void* __this_nativeId,
 const(QRect)* rects0,
 int rectCount1);
private extern(C) void  qtd_QPainter_drawRects_nativepointerQRectF_int(void* __this_nativeId,
 const(QRectF)* rects0,
 int rectCount1);
private extern(C) void  qtd_QPainter_drawRoundRect_QRect_int_int(void* __this_nativeId,
 QRect r0,
 int xround1,
 int yround2);
private extern(C) void  qtd_QPainter_drawRoundRect_QRectF_int_int(void* __this_nativeId,
 QRectF r0,
 int xround1,
 int yround2);
private extern(C) void  qtd_QPainter_drawRoundRect_int_int_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int arg__5,
 int arg__6);
private extern(C) void  qtd_QPainter_drawRoundedRect_QRect_double_double_SizeMode(void* __this_nativeId,
 QRect rect0,
 double xRadius1,
 double yRadius2,
 int mode3);
private extern(C) void  qtd_QPainter_drawRoundedRect_QRectF_double_double_SizeMode(void* __this_nativeId,
 QRectF rect0,
 double xRadius1,
 double yRadius2,
 int mode3);
private extern(C) void  qtd_QPainter_drawRoundedRect_int_int_int_int_double_double_SizeMode(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 double xRadius4,
 double yRadius5,
 int mode6);
private extern(C) void  qtd_QPainter_drawText_QPoint_string(void* __this_nativeId,
 QPoint p0,
 string s1);
private extern(C) void  qtd_QPainter_drawText_QPointF_string(void* __this_nativeId,
 QPointF p0,
 string s1);
private extern(C) void  qtd_QPainter_drawText_QRect_int_string_nativepointerQRect(void* __this_nativeId,
 QRect r0,
 int flags1,
 string text2,
 void* br3);
private extern(C) void  qtd_QPainter_drawText_QRectF_string_QTextOption(void* __this_nativeId,
 QRectF r0,
 string text1,
 void* o2);
private extern(C) void  qtd_QPainter_drawText_QRectF_int_string_nativepointerQRectF(void* __this_nativeId,
 QRectF r0,
 int flags1,
 string text2,
 void* br3);
private extern(C) void  qtd_QPainter_drawText_int_int_string(void* __this_nativeId,
 int x0,
 int y1,
 string s2);
private extern(C) void  qtd_QPainter_drawText_int_int_int_int_int_string_nativepointerQRect(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int flags4,
 string text5,
 void* br6);
private extern(C) void  qtd_QPainter_drawTextItem_QPoint_QTextItem(void* __this_nativeId,
 QPoint p0,
 void* ti1);
private extern(C) void  qtd_QPainter_drawTextItem_QPointF_QTextItem(void* __this_nativeId,
 QPointF p0,
 void* ti1);
private extern(C) void  qtd_QPainter_drawTextItem_int_int_QTextItem(void* __this_nativeId,
 int x0,
 int y1,
 void* ti2);
private extern(C) void  qtd_QPainter_drawTiledPixmap_QRect_QPixmap_QPoint(void* __this_nativeId,
 QRect arg__1,
 void* arg__2,
 QPoint arg__3);
private extern(C) void  qtd_QPainter_drawTiledPixmap_QRectF_QPixmap_QPointF(void* __this_nativeId,
 QRectF rect0,
 void* pm1,
 QPointF offset2);
private extern(C) void  qtd_QPainter_drawTiledPixmap_int_int_int_int_QPixmap_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* arg__5,
 int sx5,
 int sy6);
private extern(C) bool  qtd_QPainter_end(void* __this_nativeId);
private extern(C) void  qtd_QPainter_endNativePainting(void* __this_nativeId);
private extern(C) void  qtd_QPainter_eraseRect_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QPainter_eraseRect_QRectF(void* __this_nativeId,
 QRectF arg__1);
private extern(C) void  qtd_QPainter_eraseRect_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void  qtd_QPainter_fillPath_QPainterPath_QBrush(void* __this_nativeId,
 void* path0,
 void* brush1);
private extern(C) void  qtd_QPainter_fillRect_QRect_QBrush(void* __this_nativeId,
 QRect arg__1,
 void* arg__2);
private extern(C) void  qtd_QPainter_fillRect_QRect_QColor(void* __this_nativeId,
 QRect arg__1,
 void* color1);
private extern(C) void  qtd_QPainter_fillRect_QRect_BrushStyle(void* __this_nativeId,
 QRect r0,
 int style1);
private extern(C) void  qtd_QPainter_fillRect_QRect_GlobalColor(void* __this_nativeId,
 QRect r0,
 int c1);
private extern(C) void  qtd_QPainter_fillRect_QRectF_QBrush(void* __this_nativeId,
 QRectF arg__1,
 void* arg__2);
private extern(C) void  qtd_QPainter_fillRect_QRectF_QColor(void* __this_nativeId,
 QRectF arg__1,
 void* color1);
private extern(C) void  qtd_QPainter_fillRect_QRectF_BrushStyle(void* __this_nativeId,
 QRectF r0,
 int style1);
private extern(C) void  qtd_QPainter_fillRect_QRectF_GlobalColor(void* __this_nativeId,
 QRectF r0,
 int c1);
private extern(C) void  qtd_QPainter_fillRect_int_int_int_int_BrushStyle(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int style4);
private extern(C) void  qtd_QPainter_fillRect_int_int_int_int_GlobalColor(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int c4);
private extern(C) void  qtd_QPainter_fillRect_int_int_int_int_QBrush(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* arg__5);
private extern(C) void  qtd_QPainter_fillRect_int_int_int_int_QColor(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 void* color4);
private extern(C) void*  qtd_QPainter_font_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_fontInfo_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_fontMetrics_const(void* __this_nativeId);
private extern(C) bool  qtd_QPainter_hasClipping_const(void* __this_nativeId);
private extern(C) void  qtd_QPainter_initFrom_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) bool  qtd_QPainter_isActive_const(void* __this_nativeId);
private extern(C) int  qtd_QPainter_layoutDirection_const(void* __this_nativeId);
private extern(C) double  qtd_QPainter_opacity_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_paintEngine_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_pen_const(void* __this_nativeId);
private extern(C) int  qtd_QPainter_renderHints_const(void* __this_nativeId);
private extern(C) void  qtd_QPainter_resetMatrix(void* __this_nativeId);
private extern(C) void  qtd_QPainter_resetTransform(void* __this_nativeId);
private extern(C) void  qtd_QPainter_restore(void* __this_nativeId);
private extern(C) void  qtd_QPainter_rotate_double(void* __this_nativeId,
 double a0);
private extern(C) void  qtd_QPainter_save(void* __this_nativeId);
private extern(C) void  qtd_QPainter_scale_double_double(void* __this_nativeId,
 double sx0,
 double sy1);
private extern(C) void  qtd_QPainter_setBackground_QBrush(void* __this_nativeId,
 void* bg0);
private extern(C) void  qtd_QPainter_setBackgroundMode_BGMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QPainter_setBrush_BrushStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QPainter_setBrush_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QPainter_setBrushOrigin_QPoint(void* __this_nativeId,
 QPoint arg__1);
private extern(C) void  qtd_QPainter_setBrushOrigin_QPointF(void* __this_nativeId,
 QPointF arg__1);
private extern(C) void  qtd_QPainter_setBrushOrigin_int_int(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void  qtd_QPainter_setClipPath_QPainterPath_ClipOperation(void* __this_nativeId,
 void* path0,
 int op1);
private extern(C) void  qtd_QPainter_setClipRect_QRect_ClipOperation(void* __this_nativeId,
 QRect arg__1,
 int op1);
private extern(C) void  qtd_QPainter_setClipRect_QRectF_ClipOperation(void* __this_nativeId,
 QRectF arg__1,
 int op1);
private extern(C) void  qtd_QPainter_setClipRect_int_int_int_int_ClipOperation(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3,
 int op4);
private extern(C) void  qtd_QPainter_setClipRegion_QRegion_ClipOperation(void* __this_nativeId,
 void* arg__1,
 int op1);
private extern(C) void  qtd_QPainter_setClipping_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QPainter_setCompositionMode_CompositionMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QPainter_setFont_QFont(void* __this_nativeId,
 void* f0);
private extern(C) void  qtd_QPainter_setLayoutDirection_LayoutDirection(void* __this_nativeId,
 int direction0);
private extern(C) void  qtd_QPainter_setOpacity_double(void* __this_nativeId,
 double opacity0);
private extern(C) void  qtd_QPainter_setPen_PenStyle(void* __this_nativeId,
 int style0);
private extern(C) void  qtd_QPainter_setPen_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QPainter_setPen_QPen(void* __this_nativeId,
 void* pen0);
private extern(C) void  qtd_QPainter_setRenderHint_RenderHint_bool(void* __this_nativeId,
 int hint0,
 bool on1);
private extern(C) void  qtd_QPainter_setRenderHints_RenderHints_bool(void* __this_nativeId,
 int hints0,
 bool on1);
private extern(C) void  qtd_QPainter_setTransform_QTransform_bool(void* __this_nativeId,
 void* transform0,
 bool combine1);
private extern(C) void  qtd_QPainter_setViewTransformEnabled_bool(void* __this_nativeId,
 bool enable0);
private extern(C) void  qtd_QPainter_setViewport_QRect(void* __this_nativeId,
 QRect viewport0);
private extern(C) void  qtd_QPainter_setViewport_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void  qtd_QPainter_setWindow_QRect(void* __this_nativeId,
 QRect window0);
private extern(C) void  qtd_QPainter_setWindow_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void  qtd_QPainter_setWorldMatrix_QMatrix_bool(void* __this_nativeId,
 void* matrix0,
 bool combine1);
private extern(C) void  qtd_QPainter_setWorldMatrixEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QPainter_setWorldTransform_QTransform_bool(void* __this_nativeId,
 void* matrix0,
 bool combine1);
private extern(C) void  qtd_QPainter_shear_double_double(void* __this_nativeId,
 double sh0,
 double sv1);
private extern(C) void  qtd_QPainter_strokePath_QPainterPath_QPen(void* __this_nativeId,
 void* path0,
 void* pen1);
private extern(C) bool  qtd_QPainter_testRenderHint_RenderHint_const(void* __this_nativeId,
 int hint0);
private extern(C) void*  qtd_QPainter_transform_const(void* __this_nativeId);
private extern(C) void  qtd_QPainter_translate_QPoint(void* __this_nativeId,
 QPoint offset0);
private extern(C) void  qtd_QPainter_translate_QPointF(void* __this_nativeId,
 QPointF offset0);
private extern(C) void  qtd_QPainter_translate_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) bool  qtd_QPainter_viewTransformEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QPainter_viewport_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QPainter_window_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void*  qtd_QPainter_worldMatrix_const(void* __this_nativeId);
private extern(C) bool  qtd_QPainter_worldMatrixEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_worldTransform_const(void* __this_nativeId);
private extern(C) void*  qtd_QPainter_redirected_QPaintDevice_nativepointerQPoint(void* device0,
 void* offset1);
private extern(C) void  qtd_QPainter_restoreRedirected_QPaintDevice(void* device0);
private extern(C) void  qtd_QPainter_setRedirected_QPaintDevice_QPaintDevice_QPoint(void* device0,
 void* replacement1,
 QPoint offset2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPainter_initCallBacks(void* virtuals);

extern(C) void static_init_QPainter() {
    qtd_QPainter_initCallBacks(null);
}

// signal handlers

