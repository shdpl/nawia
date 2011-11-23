module qt.gui.QPaintEngine;

public import qt.gui.QPaintEngine_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPainter;
public import qt.core.QLineF;
public import qt.gui.QTextItem;
public import qt.core.QLine;
public import qt.core.QRectF;
public import qt.gui.QPaintEngineState;
public import qt.gui.QPixmap;
public import qt.core.QPointF;
public import qt.gui.QPainterPath;
public import qt.core.QRect;
public import qt.gui.QImage;
public import qt.gui.QRegion;
public import qt.gui.QPaintDevice;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QPaintEngine : QtdObject
{
    public enum PolygonDrawMode {
        OddEvenMode = 0,
        WindingMode = 1,
        ConvexMode = 2,
        PolylineMode = 3
    }

    alias PolygonDrawMode.OddEvenMode OddEvenMode;
    alias PolygonDrawMode.WindingMode WindingMode;
    alias PolygonDrawMode.ConvexMode ConvexMode;
    alias PolygonDrawMode.PolylineMode PolylineMode;

    public enum Type {
        X11 = 0,
        Windows = 1,
        QuickDraw = 2,
        CoreGraphics = 3,
        MacPrinter = 4,
        QWindowSystem = 5,
        PostScript = 6,
        OpenGL = 7,
        Picture = 8,
        SVG = 9,
        Raster = 10,
        Direct3D = 11,
        Pdf = 12,
        OpenVG = 13,
        OpenGL2 = 14,
        PaintBuffer = 15,
        User = 50,
        MaxUser = 100
    }

    alias Type.X11 X11;
    alias Type.Windows Windows;
    alias Type.QuickDraw QuickDraw;
    alias Type.CoreGraphics CoreGraphics;
    alias Type.MacPrinter MacPrinter;
    alias Type.QWindowSystem QWindowSystem;
    alias Type.PostScript PostScript;
    alias Type.OpenGL OpenGL;
    alias Type.Picture Picture;
    alias Type.SVG SVG;
    alias Type.Raster Raster;
    alias Type.Direct3D Direct3D;
    alias Type.Pdf Pdf;
    alias Type.OpenVG OpenVG;
    alias Type.OpenGL2 OpenGL2;
    alias Type.PaintBuffer PaintBuffer;
    alias Type.User User;
    alias Type.MaxUser MaxUser;

    public enum PaintEngineFeature {
        PrimitiveTransform = 1,
        PatternTransform = 2,
        PixmapTransform = 4,
        PatternBrush = 8,
        LinearGradientFill = 16,
        RadialGradientFill = 32,
        ConicalGradientFill = 64,
        AlphaBlend = 128,
        PorterDuff = 256,
        PainterPaths = 512,
        Antialiasing = 1024,
        BrushStroke = 2048,
        ConstantOpacity = 4096,
        MaskedBrush = 8192,
        PerspectiveTransform = 16384,
        BlendModes = 32768,
        ObjectBoundingModeGradients = 65536,
        RasterOpModes = 131072,
        PaintOutsidePaintEvent = 536870912,
        AllFeatures = -1
    }

    alias PaintEngineFeature.PrimitiveTransform PrimitiveTransform;
    alias PaintEngineFeature.PatternTransform PatternTransform;
    alias PaintEngineFeature.PixmapTransform PixmapTransform;
    alias PaintEngineFeature.PatternBrush PatternBrush;
    alias PaintEngineFeature.LinearGradientFill LinearGradientFill;
    alias PaintEngineFeature.RadialGradientFill RadialGradientFill;
    alias PaintEngineFeature.ConicalGradientFill ConicalGradientFill;
    alias PaintEngineFeature.AlphaBlend AlphaBlend;
    alias PaintEngineFeature.PorterDuff PorterDuff;
    alias PaintEngineFeature.PainterPaths PainterPaths;
    alias PaintEngineFeature.Antialiasing Antialiasing;
    alias PaintEngineFeature.BrushStroke BrushStroke;
    alias PaintEngineFeature.ConstantOpacity ConstantOpacity;
    alias PaintEngineFeature.MaskedBrush MaskedBrush;
    alias PaintEngineFeature.PerspectiveTransform PerspectiveTransform;
    alias PaintEngineFeature.BlendModes BlendModes;
    alias PaintEngineFeature.ObjectBoundingModeGradients ObjectBoundingModeGradients;
    alias PaintEngineFeature.RasterOpModes RasterOpModes;
    alias PaintEngineFeature.PaintOutsidePaintEvent PaintOutsidePaintEvent;
    alias PaintEngineFeature.AllFeatures AllFeatures;

    public enum DirtyFlag {
        DirtyPen = 1,
        DirtyBrush = 2,
        DirtyBrushOrigin = 4,
        DirtyFont = 8,
        DirtyBackground = 16,
        DirtyBackgroundMode = 32,
        DirtyTransform = 64,
        DirtyClipRegion = 128,
        DirtyClipPath = 256,
        DirtyHints = 512,
        DirtyCompositionMode = 1024,
        DirtyClipEnabled = 2048,
        DirtyOpacity = 4096,
        AllDirty = 65535
    }

    alias DirtyFlag.DirtyPen DirtyPen;
    alias DirtyFlag.DirtyBrush DirtyBrush;
    alias DirtyFlag.DirtyBrushOrigin DirtyBrushOrigin;
    alias DirtyFlag.DirtyFont DirtyFont;
    alias DirtyFlag.DirtyBackground DirtyBackground;
    alias DirtyFlag.DirtyBackgroundMode DirtyBackgroundMode;
    alias DirtyFlag.DirtyTransform DirtyTransform;
    alias DirtyFlag.DirtyClipRegion DirtyClipRegion;
    alias DirtyFlag.DirtyClipPath DirtyClipPath;
    alias DirtyFlag.DirtyHints DirtyHints;
    alias DirtyFlag.DirtyCompositionMode DirtyCompositionMode;
    alias DirtyFlag.DirtyClipEnabled DirtyClipEnabled;
    alias DirtyFlag.DirtyOpacity DirtyOpacity;
    alias DirtyFlag.AllDirty AllDirty;


// Functions

    public this(int features = 0) {
        void* ret = qtd_QPaintEngine_QPaintEngine_PaintEngineFeatures(cast(void*) this, features);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clearDirty(int df) {
        qtd_QPaintEngine_clearDirty_DirtyFlags(qtdNativeId, df);
    }

    public final bool hasFeature(int feature) const {
        return qtd_QPaintEngine_hasFeature_PaintEngineFeatures_const(qtdNativeId, feature);
    }

    public final bool isActive() const {
        return qtd_QPaintEngine_isActive_const(qtdNativeId);
    }

    public final bool isExtended() const {
        return qtd_QPaintEngine_isExtended_const(qtdNativeId);
    }

    public final IQPaintDevice paintDevice() const {
        void* ret = qtd_QPaintEngine_paintDevice_const(qtdNativeId);
        IQPaintDevice __d_return_value = qtd_QPaintDevice_from_ptr(ret);

        return __d_return_value;
    }

    public final QPainter painter() const {
        void* ret = qtd_QPaintEngine_painter_const(qtdNativeId);
        QPainter __d_return_value = qtd_QPainter_from_ptr(ret);

        return __d_return_value;
    }

    public final void setActive(bool newState) {
        qtd_QPaintEngine_setActive_bool(qtdNativeId, newState);
    }

    public final void setDirty(int df) {
        qtd_QPaintEngine_setDirty_DirtyFlags(qtdNativeId, df);
    }

    public final void setSystemClip(const(QRegion) baseClip) {
        qtd_QPaintEngine_setSystemClip_QRegion(qtdNativeId, baseClip is null ? null : (cast(QRegion)baseClip).qtdNativeId);
    }

    public final void setSystemRect(const(QRect) rect) {
        qtd_QPaintEngine_setSystemRect_QRect(qtdNativeId, rect);
    }

    public final void syncState() {
        qtd_QPaintEngine_syncState(qtdNativeId);
    }

    public final QRegion systemClip() const {
        void* ret = qtd_QPaintEngine_systemClip_const(qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final QRect systemRect() const {
        QRect res;
        qtd_QPaintEngine_systemRect_const(qtdNativeId, &res);
        return res;
    }

    public final bool testDirty(int df) {
        return qtd_QPaintEngine_testDirty_DirtyFlags(qtdNativeId, df);
    }

    public abstract bool begin(IQPaintDevice pdev);

    public QPoint coordinateOffset() const {
        QPoint res;
        qtd_QPaintEngine_coordinateOffset_const(qtdNativeId, &res);
        return res;
    }

    public void drawEllipse(const(QRect) r) {
        qtd_QPaintEngine_drawEllipse_QRect(qtdNativeId, r);
    }

    public void drawEllipse(const(QRectF) r) {
        qtd_QPaintEngine_drawEllipse_QRectF(qtdNativeId, r);
    }

    public void drawImage(const(QRectF) r, const(QImage) pm, const(QRectF) sr, int flags = 0) {
        qtd_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags(qtdNativeId, r, pm is null ? null : (cast(QImage)pm).qtdNativeId, sr, flags);
    }

    public void drawLines(const(QLine*) lines, int lineCount) {
        qtd_QPaintEngine_drawLines_nativepointerQLine_int(qtdNativeId, lines, lineCount);
    }

    public void drawLines(const(QLineF*) lines, int lineCount) {
        qtd_QPaintEngine_drawLines_nativepointerQLineF_int(qtdNativeId, lines, lineCount);
    }

    public void drawPath(const(QPainterPath) path) {
        qtd_QPaintEngine_drawPath_QPainterPath(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
    }

    public abstract void drawPixmap(const(QRectF) r, const(QPixmap) pm, const(QRectF) sr);

    public void drawPoints(const(QPoint*) points, int pointCount) {
        qtd_QPaintEngine_drawPoints_nativepointerQPoint_int(qtdNativeId, points, pointCount);
    }

    public void drawPoints(const(QPointF*) points, int pointCount) {
        qtd_QPaintEngine_drawPoints_nativepointerQPointF_int(qtdNativeId, points, pointCount);
    }

    public void drawPolygon(const(QPoint*) points, int pointCount, QPaintEngine.PolygonDrawMode mode) {
        qtd_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode(qtdNativeId, points, pointCount, mode);
    }

    public void drawPolygon(const(QPointF*) points, int pointCount, QPaintEngine.PolygonDrawMode mode) {
        qtd_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode(qtdNativeId, points, pointCount, mode);
    }

    public void drawRects(const(QRect*) rects, int rectCount) {
        qtd_QPaintEngine_drawRects_nativepointerQRect_int(qtdNativeId, rects, rectCount);
    }

    public void drawRects(const(QRectF*) rects, int rectCount) {
        qtd_QPaintEngine_drawRects_nativepointerQRectF_int(qtdNativeId, rects, rectCount);
    }

    public void drawTextItem(const(QPointF) p, QTextItem textItem) {
        qtd_QPaintEngine_drawTextItem_QPointF_QTextItem(qtdNativeId, p, textItem is null ? null : (cast(QTextItem)textItem).qtdNativeId);
    }

    public void drawTiledPixmap(const(QRectF) r, const(QPixmap) pixmap, const(QPointF) s) {
        qtd_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF(qtdNativeId, r, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, s);
    }

    public abstract bool end();

    public abstract QPaintEngine.Type type() const;

    public abstract void updateState(QPaintEngineState state);
// Field accessors

    protected final void setExtended(uint extended) {
        qtd_QPaintEngine_setExtended_uint(qtdNativeId, extended);
    }

    protected final uint extended() {
        return qtd_QPaintEngine_extended(qtdNativeId);
    }

    protected final void setSelfDestruct(uint selfDestruct) {
        qtd_QPaintEngine_setSelfDestruct_uint(qtdNativeId, selfDestruct);
    }

    protected final uint selfDestruct() {
        return qtd_QPaintEngine_selfDestruct(qtdNativeId);
    }

    protected final void setActive(uint active) {
        qtd_QPaintEngine_setActive_uint(qtdNativeId, active);
    }

    protected final uint active() {
        return qtd_QPaintEngine_active(qtdNativeId);
    }

    protected final void setGccaps(int gccaps) {
        qtd_QPaintEngine_setGccaps_PaintEngineFeatures(qtdNativeId, gccaps);
    }

    protected final int gccaps() {
        return qtd_QPaintEngine_gccaps(qtdNativeId);
    }
    static QPaintEngine __getObject(void* nativeId) {
        return qtd_QPaintEngine_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QPaintEngine;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPaintEngine_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPaintEngine_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPaintEngine_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QPaintEngine_ConcreteWrapper : QPaintEngine {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public bool begin(IQPaintDevice pdev) {
            return qtd_QPaintEngine_begin_QPaintDevice(qtdNativeId, pdev is null ? null : pdev.__ptr_IQPaintDevice);
        }

        override         public void drawPixmap(const(QRectF) r, const(QPixmap) pm, const(QRectF) sr) {
            qtd_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF(qtdNativeId, r, pm is null ? null : (cast(QPixmap)pm).qtdNativeId, sr);
        }

        override         public bool end() {
            return qtd_QPaintEngine_end(qtdNativeId);
        }

        override         public QPaintEngine.Type type() const {
            return cast(QPaintEngine.Type) qtd_QPaintEngine_type_const(qtdNativeId);
        }

        override         public void updateState(QPaintEngineState state) {
            qtd_QPaintEngine_updateState_QPaintEngineState(qtdNativeId, state is null ? null : (cast(QPaintEngineState)state).qtdNativeId);
        }
    }


extern (C) void *__QPaintEngine_entity(void *q_ptr);

QPaintEngine qtd_QPaintEngine_from_ptr(void* ret) {
    void* d_obj = __QPaintEngine_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QPaintEngine) d_obj_ref;
    } else {
        auto return_value = new QPaintEngine_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QPaintEngine_delete(void *ptr);
extern (C) void qtd_QPaintEngine_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPaintEngine_QPaintEngine_PaintEngineFeatures(void *d_ptr,
 int features0);
private extern(C) void  qtd_QPaintEngine_clearDirty_DirtyFlags(void* __this_nativeId,
 int df0);
private extern(C) bool  qtd_QPaintEngine_hasFeature_PaintEngineFeatures_const(void* __this_nativeId,
 int feature0);
private extern(C) bool  qtd_QPaintEngine_isActive_const(void* __this_nativeId);
private extern(C) bool  qtd_QPaintEngine_isExtended_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngine_paintDevice_const(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngine_painter_const(void* __this_nativeId);
private extern(C) void  qtd_QPaintEngine_setActive_bool(void* __this_nativeId,
 bool newState0);
private extern(C) void  qtd_QPaintEngine_setDirty_DirtyFlags(void* __this_nativeId,
 int df0);
private extern(C) void  qtd_QPaintEngine_setSystemClip_QRegion(void* __this_nativeId,
 void* baseClip0);
private extern(C) void  qtd_QPaintEngine_setSystemRect_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QPaintEngine_syncState(void* __this_nativeId);
private extern(C) void*  qtd_QPaintEngine_systemClip_const(void* __this_nativeId);
private extern(C) void  qtd_QPaintEngine_systemRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) bool  qtd_QPaintEngine_testDirty_DirtyFlags(void* __this_nativeId,
 int df0);
private extern(C) bool  qtd_QPaintEngine_begin_QPaintDevice(void* __this_nativeId,
 void* pdev0);
private extern(C) void  qtd_QPaintEngine_coordinateOffset_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void  qtd_QPaintEngine_drawEllipse_QRect(void* __this_nativeId,
 QRect r0);
private extern(C) void  qtd_QPaintEngine_drawEllipse_QRectF(void* __this_nativeId,
 QRectF r0);
private extern(C) void  qtd_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags(void* __this_nativeId,
 QRectF r0,
 void* pm1,
 QRectF sr2,
 int flags3);
private extern(C) void  qtd_QPaintEngine_drawLines_nativepointerQLine_int(void* __this_nativeId,
 const(QLine)* lines0,
 int lineCount1);
private extern(C) void  qtd_QPaintEngine_drawLines_nativepointerQLineF_int(void* __this_nativeId,
 const(QLineF)* lines0,
 int lineCount1);
private extern(C) void  qtd_QPaintEngine_drawPath_QPainterPath(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF(void* __this_nativeId,
 QRectF r0,
 void* pm1,
 QRectF sr2);
private extern(C) void  qtd_QPaintEngine_drawPoints_nativepointerQPoint_int(void* __this_nativeId,
 const(QPoint)* points0,
 int pointCount1);
private extern(C) void  qtd_QPaintEngine_drawPoints_nativepointerQPointF_int(void* __this_nativeId,
 const(QPointF)* points0,
 int pointCount1);
private extern(C) void  qtd_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode(void* __this_nativeId,
 const(QPoint)* points0,
 int pointCount1,
 int mode2);
private extern(C) void  qtd_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode(void* __this_nativeId,
 const(QPointF)* points0,
 int pointCount1,
 int mode2);
private extern(C) void  qtd_QPaintEngine_drawRects_nativepointerQRect_int(void* __this_nativeId,
 const(QRect)* rects0,
 int rectCount1);
private extern(C) void  qtd_QPaintEngine_drawRects_nativepointerQRectF_int(void* __this_nativeId,
 const(QRectF)* rects0,
 int rectCount1);
private extern(C) void  qtd_QPaintEngine_drawTextItem_QPointF_QTextItem(void* __this_nativeId,
 QPointF p0,
 void* textItem1);
private extern(C) void  qtd_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF(void* __this_nativeId,
 QRectF r0,
 void* pixmap1,
 QPointF s2);
private extern(C) bool  qtd_QPaintEngine_end(void* __this_nativeId);
private extern(C) int  qtd_QPaintEngine_type_const(void* __this_nativeId);
private extern(C) void  qtd_QPaintEngine_updateState_QPaintEngineState(void* __this_nativeId,
 void* state0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QPaintEngine_setExtended_uint(void* __this_nativeId,
 uint extended0);
private extern(C) uint  qtd_QPaintEngine_extended(void* __this_nativeId);
private extern(C) void  qtd_QPaintEngine_setSelfDestruct_uint(void* __this_nativeId,
 uint selfDestruct0);
private extern(C) uint  qtd_QPaintEngine_selfDestruct(void* __this_nativeId);
private extern(C) void  qtd_QPaintEngine_setActive_uint(void* __this_nativeId,
 uint active0);
private extern(C) uint  qtd_QPaintEngine_active(void* __this_nativeId);
private extern(C) void  qtd_QPaintEngine_setGccaps_PaintEngineFeatures(void* __this_nativeId,
 int gccaps0);
private extern(C) int  qtd_QPaintEngine_gccaps(void* __this_nativeId);



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId, void* pdev0) qtd_QPaintEngine_begin_QPaintDevice_dispatch; }
extern(C) bool qtd_export_QPaintEngine_begin_QPaintDevice_dispatch(void *dId, void* pdev0){
    auto d_object = cast(QPaintEngine) dId;
    scope pdev0_d_ref = new QPaintDevice_ConcreteWrapper(pdev0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.begin(pdev0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, QPoint *__d_return_value) qtd_QPaintEngine_coordinateOffset_const_dispatch; }
extern(C) void qtd_export_QPaintEngine_coordinateOffset_const_dispatch(void *dId, QPoint *__d_return_value){
    auto d_object = cast(QPaintEngine) dId;
    *__d_return_value = d_object.coordinateOffset();
}

extern(C){ extern void function(void *dId, QRect* r0) qtd_QPaintEngine_drawEllipse_QRect_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawEllipse_QRect_dispatch(void *dId, QRect* r0){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawEllipse(*r0);
}

extern(C){ extern void function(void *dId, QRectF* r0) qtd_QPaintEngine_drawEllipse_QRectF_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawEllipse_QRectF_dispatch(void *dId, QRectF* r0){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawEllipse(*r0);
}

extern(C){ extern void function(void *dId, QRectF* r0, void* pm1, QRectF* sr2, int flags3) qtd_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch(void *dId, QRectF* r0, void* pm1, QRectF* sr2, int flags3){
    auto d_object = cast(QPaintEngine) dId;
    scope pm1_d_ref = new QImage(pm1, QtdObjectInitFlags.onStack);
    d_object.drawImage(*r0, pm1_d_ref, *sr2, flags3);
}

extern(C){ extern void function(void *dId, QLine* lines0, int lineCount1) qtd_QPaintEngine_drawLines_nativepointerQLine_int_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawLines_nativepointerQLine_int_dispatch(void *dId, QLine* lines0, int lineCount1){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawLines(lines0, lineCount1);
}

extern(C){ extern void function(void *dId, QLineF* lines0, int lineCount1) qtd_QPaintEngine_drawLines_nativepointerQLineF_int_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawLines_nativepointerQLineF_int_dispatch(void *dId, QLineF* lines0, int lineCount1){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawLines(lines0, lineCount1);
}

extern(C){ extern void function(void *dId, void* path0) qtd_QPaintEngine_drawPath_QPainterPath_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawPath_QPainterPath_dispatch(void *dId, void* path0){
    auto d_object = cast(QPaintEngine) dId;
    scope path0_d_ref = new QPainterPath(path0, QtdObjectInitFlags.onStack);
    d_object.drawPath(path0_d_ref);
}

extern(C){ extern void function(void *dId, QRectF* r0, void* pm1, QRectF* sr2) qtd_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch(void *dId, QRectF* r0, void* pm1, QRectF* sr2){
    auto d_object = cast(QPaintEngine) dId;
    scope pm1_d_ref = new QPixmap(pm1, QtdObjectInitFlags.onStack);
    d_object.drawPixmap(*r0, pm1_d_ref, *sr2);
}

extern(C){ extern void function(void *dId, QPoint* points0, int pointCount1) qtd_QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch(void *dId, QPoint* points0, int pointCount1){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawPoints(points0, pointCount1);
}

extern(C){ extern void function(void *dId, QPointF* points0, int pointCount1) qtd_QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch(void *dId, QPointF* points0, int pointCount1){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawPoints(points0, pointCount1);
}

extern(C){ extern void function(void *dId, QPoint* points0, int pointCount1, int mode2) qtd_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch(void *dId, QPoint* points0, int pointCount1, int mode2){
    auto d_object = cast(QPaintEngine) dId;
    auto mode2_enum = cast(QPaintEngine.PolygonDrawMode) mode2;
    d_object.drawPolygon(points0, pointCount1, mode2_enum);
}

extern(C){ extern void function(void *dId, QPointF* points0, int pointCount1, int mode2) qtd_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch(void *dId, QPointF* points0, int pointCount1, int mode2){
    auto d_object = cast(QPaintEngine) dId;
    auto mode2_enum = cast(QPaintEngine.PolygonDrawMode) mode2;
    d_object.drawPolygon(points0, pointCount1, mode2_enum);
}

extern(C){ extern void function(void *dId, QRect* rects0, int rectCount1) qtd_QPaintEngine_drawRects_nativepointerQRect_int_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawRects_nativepointerQRect_int_dispatch(void *dId, QRect* rects0, int rectCount1){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawRects(rects0, rectCount1);
}

extern(C){ extern void function(void *dId, QRectF* rects0, int rectCount1) qtd_QPaintEngine_drawRects_nativepointerQRectF_int_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawRects_nativepointerQRectF_int_dispatch(void *dId, QRectF* rects0, int rectCount1){
    auto d_object = cast(QPaintEngine) dId;
    d_object.drawRects(rects0, rectCount1);
}

extern(C){ extern void function(void *dId, QPointF* p0, void* textItem1) qtd_QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch(void *dId, QPointF* p0, void* textItem1){
    auto d_object = cast(QPaintEngine) dId;
    scope textItem1_d_ref = new QTextItem(textItem1, QtdObjectInitFlags.onStack);
    d_object.drawTextItem(*p0, textItem1_d_ref);
}

extern(C){ extern void function(void *dId, QRectF* r0, void* pixmap1, QPointF* s2) qtd_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch; }
extern(C) void qtd_export_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch(void *dId, QRectF* r0, void* pixmap1, QPointF* s2){
    auto d_object = cast(QPaintEngine) dId;
    scope pixmap1_d_ref = new QPixmap(pixmap1, QtdObjectInitFlags.onStack);
    d_object.drawTiledPixmap(*r0, pixmap1_d_ref, *s2);
}

extern(C){ extern bool function(void *dId) qtd_QPaintEngine_end_dispatch; }
extern(C) bool qtd_export_QPaintEngine_end_dispatch(void *dId){
    auto d_object = cast(QPaintEngine) dId;
    auto return_value = d_object.end();
    return return_value;
}

extern(C){ extern int function(void *dId) qtd_QPaintEngine_type_const_dispatch; }
extern(C) int qtd_export_QPaintEngine_type_const_dispatch(void *dId){
    auto d_object = cast(QPaintEngine) dId;
    auto return_value = d_object.type();
    return return_value;
}

extern(C){ extern void function(void *dId, void* state0) qtd_QPaintEngine_updateState_QPaintEngineState_dispatch; }
extern(C) void qtd_export_QPaintEngine_updateState_QPaintEngineState_dispatch(void *dId, void* state0){
    auto d_object = cast(QPaintEngine) dId;
    scope state0_d_ref = new QPaintEngineState(state0, QtdObjectInitFlags.onStack);
    d_object.updateState(state0_d_ref);
}

private extern (C) void qtd_QPaintEngine_initCallBacks(void* virtuals);

extern(C) void static_init_QPaintEngine() {
    void*[20] virt_arr;
    virt_arr[0] = &qtd_export_QPaintEngine_begin_QPaintDevice_dispatch;
    virt_arr[1] = &qtd_export_QPaintEngine_coordinateOffset_const_dispatch;
    virt_arr[2] = &qtd_export_QPaintEngine_drawEllipse_QRect_dispatch;
    virt_arr[3] = &qtd_export_QPaintEngine_drawEllipse_QRectF_dispatch;
    virt_arr[4] = &qtd_export_QPaintEngine_drawImage_QRectF_QImage_QRectF_ImageConversionFlags_dispatch;
    virt_arr[5] = &qtd_export_QPaintEngine_drawLines_nativepointerQLine_int_dispatch;
    virt_arr[6] = &qtd_export_QPaintEngine_drawLines_nativepointerQLineF_int_dispatch;
    virt_arr[7] = &qtd_export_QPaintEngine_drawPath_QPainterPath_dispatch;
    virt_arr[8] = &qtd_export_QPaintEngine_drawPixmap_QRectF_QPixmap_QRectF_dispatch;
    virt_arr[9] = &qtd_export_QPaintEngine_drawPoints_nativepointerQPoint_int_dispatch;
    virt_arr[10] = &qtd_export_QPaintEngine_drawPoints_nativepointerQPointF_int_dispatch;
    virt_arr[11] = &qtd_export_QPaintEngine_drawPolygon_nativepointerQPoint_int_PolygonDrawMode_dispatch;
    virt_arr[12] = &qtd_export_QPaintEngine_drawPolygon_nativepointerQPointF_int_PolygonDrawMode_dispatch;
    virt_arr[13] = &qtd_export_QPaintEngine_drawRects_nativepointerQRect_int_dispatch;
    virt_arr[14] = &qtd_export_QPaintEngine_drawRects_nativepointerQRectF_int_dispatch;
    virt_arr[15] = &qtd_export_QPaintEngine_drawTextItem_QPointF_QTextItem_dispatch;
    virt_arr[16] = &qtd_export_QPaintEngine_drawTiledPixmap_QRectF_QPixmap_QPointF_dispatch;
    virt_arr[17] = &qtd_export_QPaintEngine_end_dispatch;
    virt_arr[18] = &qtd_export_QPaintEngine_type_const_dispatch;
    virt_arr[19] = &qtd_export_QPaintEngine_updateState_QPaintEngineState_dispatch;
    qtd_QPaintEngine_initCallBacks(virt_arr.ptr);
}

// signal handlers

