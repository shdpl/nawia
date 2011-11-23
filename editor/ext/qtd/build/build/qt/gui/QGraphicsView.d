module qt.gui.QGraphicsView;

public import qt.gui.QGraphicsView_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.gui.QPainter;
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QDropEvent;
public import qt.gui.QBrush;
public import qt.gui.QHideEvent;
public import qt.core.QPoint;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QPolygon;
public import qt.core.QRectF;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
public import qt.gui.QPainter;
public import qt.core.QPointF;
public import qt.gui.QMatrix;
public import qt.gui.QResizeEvent;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QActionEvent;
public import qt.gui.QPolygonF;
public import qt.gui.QWheelEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QRect;
public import qt.gui.QGraphicsItem;
public import qt.gui.QInputMethodEvent;
public import qt.core.QSize;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QAbstractScrollArea;
public import qt.gui.QGraphicsScene;
public import qt.gui.QPainterPath;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QMoveEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QWidget;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QTransform;
public import qt.gui.QDragLeaveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsView : QAbstractScrollArea
{
    public enum OptimizationFlag {
        DontClipPainter = 1,
        DontSavePainterState = 2,
        DontAdjustForAntialiasing = 4,
        IndirectPainting = 8
    }

    alias OptimizationFlag.DontClipPainter DontClipPainter;
    alias OptimizationFlag.DontSavePainterState DontSavePainterState;
    alias OptimizationFlag.DontAdjustForAntialiasing DontAdjustForAntialiasing;
    alias OptimizationFlag.IndirectPainting IndirectPainting;

    public enum ViewportAnchor {
        NoAnchor = 0,
        AnchorViewCenter = 1,
        AnchorUnderMouse = 2
    }

    alias ViewportAnchor.NoAnchor NoAnchor;
    alias ViewportAnchor.AnchorViewCenter AnchorViewCenter;
    alias ViewportAnchor.AnchorUnderMouse AnchorUnderMouse;

    public enum ViewportUpdateMode {
        FullViewportUpdate = 0,
        MinimalViewportUpdate = 1,
        SmartViewportUpdate = 2,
        NoViewportUpdate = 3,
        BoundingRectViewportUpdate = 4
    }

    alias ViewportUpdateMode.FullViewportUpdate FullViewportUpdate;
    alias ViewportUpdateMode.MinimalViewportUpdate MinimalViewportUpdate;
    alias ViewportUpdateMode.SmartViewportUpdate SmartViewportUpdate;
    alias ViewportUpdateMode.NoViewportUpdate NoViewportUpdate;
    alias ViewportUpdateMode.BoundingRectViewportUpdate BoundingRectViewportUpdate;

    public enum CacheModeFlag {
        CacheNone = 0,
        CacheBackground = 1
    }

    alias CacheModeFlag.CacheNone CacheNone;
    alias CacheModeFlag.CacheBackground CacheBackground;

    public enum DragMode {
        NoDrag = 0,
        ScrollHandDrag = 1,
        RubberBandDrag = 2
    }

    alias DragMode.NoDrag NoDrag;
    alias DragMode.ScrollHandDrag ScrollHandDrag;
    alias DragMode.RubberBandDrag RubberBandDrag;


Object __rcScene = null;

    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this(QGraphicsScene scene, QWidget parent_ = null) {
        void* ret = qtd_QGraphicsView_QGraphicsView_QGraphicsScene_QWidget(cast(void*) this, scene is null ? null : scene.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null) {
        void* ret = qtd_QGraphicsView_QGraphicsView_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QGraphicsView_alignment_const(qtdNativeId);
    }

    public final QBrush backgroundBrush() const {
        void* ret = qtd_QGraphicsView_backgroundBrush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final int cacheMode() const {
        return qtd_QGraphicsView_cacheMode_const(qtdNativeId);
    }

    public final void centerOn(IQGraphicsItem item) {
        qtd_QGraphicsView_centerOn_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void centerOn(const(QPointF) pos) {
        qtd_QGraphicsView_centerOn_QPointF(qtdNativeId, pos);
    }

    public final void centerOn(double x, double y) {
        qtd_QGraphicsView_centerOn_double_double(qtdNativeId, x, y);
    }

    public final QGraphicsView.DragMode dragMode() const {
        return cast(QGraphicsView.DragMode) qtd_QGraphicsView_dragMode_const(qtdNativeId);
    }

    public final void ensureVisible(IQGraphicsItem item, int xmargin = 50, int ymargin = 50) {
        qtd_QGraphicsView_ensureVisible_QGraphicsItem_int_int(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, xmargin, ymargin);
    }

    public final void ensureVisible(const(QRectF) rect, int xmargin = 50, int ymargin = 50) {
        qtd_QGraphicsView_ensureVisible_QRectF_int_int(qtdNativeId, rect, xmargin, ymargin);
    }

    public final void ensureVisible(double x, double y, double w, double h, int xmargin = 50, int ymargin = 50) {
        qtd_QGraphicsView_ensureVisible_double_double_double_double_int_int(qtdNativeId, x, y, w, h, xmargin, ymargin);
    }

    public final void fitInView(IQGraphicsItem item, Qt.AspectRatioMode aspectRadioMode = Qt.AspectRatioMode.IgnoreAspectRatio) {
        /*if (item is null)
            throw new NullPointerException("Argument 'item': null not expected."); */
        qtd_QGraphicsView_fitInView_QGraphicsItem_AspectRatioMode(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, aspectRadioMode);
    }

    public final void fitInView(const(QRectF) rect, Qt.AspectRatioMode aspectRadioMode = Qt.AspectRatioMode.IgnoreAspectRatio) {
        qtd_QGraphicsView_fitInView_QRectF_AspectRatioMode(qtdNativeId, rect, aspectRadioMode);
    }

    public final void fitInView(double x, double y, double w, double h, Qt.AspectRatioMode aspectRadioMode = Qt.AspectRatioMode.IgnoreAspectRatio) {
        qtd_QGraphicsView_fitInView_double_double_double_double_AspectRatioMode(qtdNativeId, x, y, w, h, aspectRadioMode);
    }

    public final QBrush foregroundBrush() const {
        void* ret = qtd_QGraphicsView_foregroundBrush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final void invalidateScene(const(QRectF) rect = QRectF(), int layers = 65535) {
        qtd_QGraphicsView_invalidateScene_QRectF_SceneLayers(qtdNativeId, rect, layers);
    }

    public final bool isInteractive() const {
        return qtd_QGraphicsView_isInteractive_const(qtdNativeId);
    }

    public final bool isTransformed() const {
        return qtd_QGraphicsView_isTransformed_const(qtdNativeId);
    }

    public final IQGraphicsItem itemAt(const(QPoint) pos) const {
        void* ret = qtd_QGraphicsView_itemAt_QPoint_const(qtdNativeId, pos);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem itemAt(int x, int y) const {
        void* ret = qtd_QGraphicsView_itemAt_int_int_const(qtdNativeId, x, y);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QList!(IQGraphicsItem) items() const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsView_items_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPainterPath) path, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsView_items_QPainterPath_ItemSelectionMode_const(qtdNativeId, &res, path is null ? null : (cast(QPainterPath)path).qtdNativeId, mode);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPoint) pos) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsView_items_QPoint_const(qtdNativeId, &res, pos);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPolygon) polygon, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsView_items_QPolygon_ItemSelectionMode_const(qtdNativeId, &res, polygon is null ? null : (cast(QPolygon)polygon).qtdNativeId, mode);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QRect) rect, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsView_items_QRect_ItemSelectionMode_const(qtdNativeId, &res, rect, mode);
        return res;
    }

    public final QList!(IQGraphicsItem) items(int x, int y) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsView_items_int_int_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QList!(IQGraphicsItem) items(int x, int y, int w, int h, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsView_items_int_int_int_int_ItemSelectionMode_const(qtdNativeId, &res, x, y, w, h, mode);
        return res;
    }

    public final QPainterPath mapFromScene(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsView_mapFromScene_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPoint mapFromScene(const(QPointF) point) const {
        QPoint res;
        qtd_QGraphicsView_mapFromScene_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygon mapFromScene(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsView_mapFromScene_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPolygon mapFromScene(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsView_mapFromScene_QRectF_const(qtdNativeId, rect);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPoint mapFromScene(double x, double y) const {
        QPoint res;
        qtd_QGraphicsView_mapFromScene_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygon mapFromScene(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsView_mapFromScene_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygon __d_return_value = new QPolygon(ret);
        return __d_return_value;
    }

    public final QPainterPath mapToScene(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsView_mapToScene_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapToScene(const(QPoint) point) const {
        QPointF res;
        qtd_QGraphicsView_mapToScene_QPoint_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapToScene(const(QPolygon) polygon) const {
        void* ret = qtd_QGraphicsView_mapToScene_QPolygon_const(qtdNativeId, polygon is null ? null : (cast(QPolygon)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapToScene(const(QRect) rect) const {
        void* ret = qtd_QGraphicsView_mapToScene_QRect_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapToScene(int x, int y) const {
        QPointF res;
        qtd_QGraphicsView_mapToScene_int_int_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapToScene(int x, int y, int w, int h) const {
        void* ret = qtd_QGraphicsView_mapToScene_int_int_int_int_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QMatrix matrix() const {
        void* ret = qtd_QGraphicsView_matrix_const(qtdNativeId);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final int optimizationFlags() const {
        return qtd_QGraphicsView_optimizationFlags_const(qtdNativeId);
    }

    public final void render(QPainter painter, const(QRectF) target = QRectF(), const(QRect) source = QRect(), Qt.AspectRatioMode aspectRatioMode = Qt.AspectRatioMode.KeepAspectRatio) {
        qtd_QGraphicsView_render_QPainter_QRectF_QRect_AspectRatioMode(qtdNativeId, painter is null ? null : painter.qtdNativeId, target, source, aspectRatioMode);
    }

    public final int renderHints() const {
        return qtd_QGraphicsView_renderHints_const(qtdNativeId);
    }

    public final void resetCachedContent() {
        qtd_QGraphicsView_resetCachedContent(qtdNativeId);
    }

    public final void resetMatrix() {
        qtd_QGraphicsView_resetMatrix(qtdNativeId);
    }

    public final void resetTransform() {
        qtd_QGraphicsView_resetTransform(qtdNativeId);
    }

    public final QGraphicsView.ViewportAnchor resizeAnchor() const {
        return cast(QGraphicsView.ViewportAnchor) qtd_QGraphicsView_resizeAnchor_const(qtdNativeId);
    }

    public final void rotate(double angle) {
        qtd_QGraphicsView_rotate_double(qtdNativeId, angle);
    }

    public final Qt.ItemSelectionMode rubberBandSelectionMode() const {
        return cast(Qt.ItemSelectionMode) qtd_QGraphicsView_rubberBandSelectionMode_const(qtdNativeId);
    }

    public final void scale(double sx, double sy) {
        qtd_QGraphicsView_scale_double_double(qtdNativeId, sx, sy);
    }

    public final QGraphicsScene scene() const {
        void *ret = qtd_QGraphicsView_scene_const(qtdNativeId);
        QGraphicsScene __d_return_value = QGraphicsScene.__getObject(ret);
        return __d_return_value;
    }

    public final QRectF sceneRect() const {
        QRectF res;
        qtd_QGraphicsView_sceneRect_const(qtdNativeId, &res);
        return res;
    }

    public final void setAlignment(int alignment) {
        qtd_QGraphicsView_setAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setBackgroundBrush(const(QBrush) brush) {
        qtd_QGraphicsView_setBackgroundBrush_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setCacheMode(int mode) {
        qtd_QGraphicsView_setCacheMode_CacheMode(qtdNativeId, mode);
    }

    public final void setDragMode(QGraphicsView.DragMode mode) {
        qtd_QGraphicsView_setDragMode_DragMode(qtdNativeId, mode);
    }

    public final void setForegroundBrush(const(QBrush) brush) {
        qtd_QGraphicsView_setForegroundBrush_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setInteractive(bool allowed) {
        qtd_QGraphicsView_setInteractive_bool(qtdNativeId, allowed);
    }

    public final void setMatrix(const(QMatrix) matrix, bool combine = false) {
        qtd_QGraphicsView_setMatrix_QMatrix_bool(qtdNativeId, matrix is null ? null : (cast(QMatrix)matrix).qtdNativeId, combine);
    }

    public final void setOptimizationFlag(QGraphicsView.OptimizationFlag flag, bool enabled = true) {
        qtd_QGraphicsView_setOptimizationFlag_OptimizationFlag_bool(qtdNativeId, flag, enabled);
    }

    public final void setOptimizationFlags(int flags) {
        qtd_QGraphicsView_setOptimizationFlags_OptimizationFlags(qtdNativeId, flags);
    }

    public final void setRenderHint(QPainter.RenderHint hint, bool enabled = true) {
        qtd_QGraphicsView_setRenderHint_RenderHint_bool(qtdNativeId, hint, enabled);
    }

    public final void setRenderHints(int hints) {
        qtd_QGraphicsView_setRenderHints_RenderHints(qtdNativeId, hints);
    }

    public final void setResizeAnchor(QGraphicsView.ViewportAnchor anchor) {
        qtd_QGraphicsView_setResizeAnchor_ViewportAnchor(qtdNativeId, anchor);
    }

    public final void setRubberBandSelectionMode(Qt.ItemSelectionMode mode) {
        qtd_QGraphicsView_setRubberBandSelectionMode_ItemSelectionMode(qtdNativeId, mode);
    }

    public final void setScene(QGraphicsScene scene) {
        {
            __rcScene = cast(Object) scene;
        }
        qtd_QGraphicsView_setScene_QGraphicsScene(qtdNativeId, scene is null ? null : scene.qtdNativeId);
    }

    public final void setSceneRect(const(QRectF) rect) {
        qtd_QGraphicsView_setSceneRect_QRectF(qtdNativeId, rect);
    }

    public final void setSceneRect(double x, double y, double w, double h) {
        qtd_QGraphicsView_setSceneRect_double_double_double_double(qtdNativeId, x, y, w, h);
    }

    public final void setTransform(const(QTransform) matrix, bool combine = false) {
        qtd_QGraphicsView_setTransform_QTransform_bool(qtdNativeId, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId, combine);
    }

    public final void setTransformationAnchor(QGraphicsView.ViewportAnchor anchor) {
        qtd_QGraphicsView_setTransformationAnchor_ViewportAnchor(qtdNativeId, anchor);
    }

    public final void setViewportUpdateMode(QGraphicsView.ViewportUpdateMode mode) {
        qtd_QGraphicsView_setViewportUpdateMode_ViewportUpdateMode(qtdNativeId, mode);
    }

    protected void setupViewport(QWidget widget) {
        qtd_QGraphicsView_setupViewport_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void shear(double sh, double sv) {
        qtd_QGraphicsView_shear_double_double(qtdNativeId, sh, sv);
    }

    public final QTransform transform() const {
        void* ret = qtd_QGraphicsView_transform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QGraphicsView.ViewportAnchor transformationAnchor() const {
        return cast(QGraphicsView.ViewportAnchor) qtd_QGraphicsView_transformationAnchor_const(qtdNativeId);
    }

    public final void translate(double dx, double dy) {
        qtd_QGraphicsView_translate_double_double(qtdNativeId, dx, dy);
    }

    public final void updateScene(QList!(QRectF) rects) {
        qtd_QGraphicsView_updateScene_QList(qtdNativeId, &rects);
    }

    public final void updateSceneRect(const(QRectF) rect) {
        qtd_QGraphicsView_updateSceneRect_QRectF(qtdNativeId, rect);
    }

    public final QTransform viewportTransform() const {
        void* ret = qtd_QGraphicsView_viewportTransform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QGraphicsView.ViewportUpdateMode viewportUpdateMode() const {
        return cast(QGraphicsView.ViewportUpdateMode) qtd_QGraphicsView_viewportUpdateMode_const(qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent event) {
        qtd_QGraphicsView_contextMenuEvent_QContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragEnterEvent(QDragEnterEvent event) {
        qtd_QGraphicsView_dragEnterEvent_QDragEnterEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent event) {
        qtd_QGraphicsView_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent event) {
        qtd_QGraphicsView_dragMoveEvent_QDragMoveEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void drawBackground(QPainter painter, const(QRectF) rect) {
        qtd_QGraphicsView_drawBackground_QPainter_QRectF(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect);
    }

    protected void drawForeground(QPainter painter, const(QRectF) rect) {
        qtd_QGraphicsView_drawForeground_QPainter_QRectF(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect);
    }

    protected void dropEvent(QDropEvent event) {
        qtd_QGraphicsView_dropEvent_QDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QGraphicsView_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent event) {
        qtd_QGraphicsView_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QGraphicsView_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void focusOutEvent(QFocusEvent event) {
        qtd_QGraphicsView_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent event) {
        qtd_QGraphicsView_inputMethodEvent_QInputMethodEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery query) const {
        void* ret = qtd_QGraphicsView_inputMethodQuery_InputMethodQuery_const(qtdNativeId, query);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QGraphicsView_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent event) {
        qtd_QGraphicsView_keyReleaseEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseDoubleClickEvent(QMouseEvent event) {
        qtd_QGraphicsView_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent event) {
        qtd_QGraphicsView_mouseMoveEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent event) {
        qtd_QGraphicsView_mousePressEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent event) {
        qtd_QGraphicsView_mouseReleaseEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QGraphicsView_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QGraphicsView_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QGraphicsView_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    protected void showEvent(QShowEvent event) {
        qtd_QGraphicsView_showEvent_QShowEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QGraphicsView_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected bool viewportEvent(QEvent event) {
        return qtd_QGraphicsView_viewportEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void wheelEvent(QWheelEvent event) {
        qtd_QGraphicsView_wheelEvent_QWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "invalidateScene(QRectF,QFlags<QGraphicsScene::SceneLayer>)", 
            "invalidateScene(QRectF)", 
            "invalidateScene()", 
            "setupViewport(QWidget*)", 
            "updateScene(QList<QRectF>)", 
            "updateSceneRect(QRectF)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsView_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsView);
    }

    static QGraphicsView __getObject(void* nativeId) {
        return static_cast!(QGraphicsView)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsView_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsView_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsView(nativeId, initFlags);
        QGraphicsView.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QRectF),int)("invalidateScene"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(const(QRectF))("invalidateScene"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("invalidateScene"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setupViewport"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(QList!(QRectF))("updateScene"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(const(QRectF))("updateSceneRect"), index));

    }

    public alias void __isQtType_QGraphicsView;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsView_QGraphicsView_QGraphicsScene_QWidget(void *d_ptr,
 void* scene0,
 void* parent1);
private extern(C) void* qtd_QGraphicsView_QGraphicsView_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QGraphicsView_alignment_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsView_backgroundBrush_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsView_cacheMode_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_centerOn_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsView_centerOn_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsView_centerOn_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) int  qtd_QGraphicsView_dragMode_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_ensureVisible_QGraphicsItem_int_int(void* __this_nativeId,
 void* item0,
 int xmargin1,
 int ymargin2);
private extern(C) void  qtd_QGraphicsView_ensureVisible_QRectF_int_int(void* __this_nativeId,
 QRectF rect0,
 int xmargin1,
 int ymargin2);
private extern(C) void  qtd_QGraphicsView_ensureVisible_double_double_double_double_int_int(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xmargin4,
 int ymargin5);
private extern(C) void  qtd_QGraphicsView_fitInView_QGraphicsItem_AspectRatioMode(void* __this_nativeId,
 void* item0,
 int aspectRadioMode1);
private extern(C) void  qtd_QGraphicsView_fitInView_QRectF_AspectRatioMode(void* __this_nativeId,
 QRectF rect0,
 int aspectRadioMode1);
private extern(C) void  qtd_QGraphicsView_fitInView_double_double_double_double_AspectRatioMode(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int aspectRadioMode4);
private extern(C) void*  qtd_QGraphicsView_foregroundBrush_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_invalidateScene_QRectF_SceneLayers(void* __this_nativeId,
 QRectF rect0,
 int layers1);
private extern(C) bool  qtd_QGraphicsView_isInteractive_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsView_isTransformed_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsView_itemAt_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void*  qtd_QGraphicsView_itemAt_int_int_const(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void  qtd_QGraphicsView_items_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGraphicsView_items_QPainterPath_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 void* path0,
 int mode1);
private extern(C) void  qtd_QGraphicsView_items_QPoint_const(void* __this_nativeId,
 void* __d_return_value,
 QPoint pos0);
private extern(C) void  qtd_QGraphicsView_items_QPolygon_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 void* polygon0,
 int mode1);
private extern(C) void  qtd_QGraphicsView_items_QRect_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 QRect rect0,
 int mode1);
private extern(C) void  qtd_QGraphicsView_items_int_int_const(void* __this_nativeId,
 void* __d_return_value,
 int x0,
 int y1);
private extern(C) void  qtd_QGraphicsView_items_int_int_int_int_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 int x0,
 int y1,
 int w2,
 int h3,
 int mode4);
private extern(C) void*  qtd_QGraphicsView_mapFromScene_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsView_mapFromScene_QPointF_const(void* __this_nativeId,
 QPoint * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsView_mapFromScene_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsView_mapFromScene_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsView_mapFromScene_double_double_const(void* __this_nativeId,
 QPoint * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsView_mapFromScene_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void*  qtd_QGraphicsView_mapToScene_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsView_mapToScene_QPoint_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPoint point0);
private extern(C) void*  qtd_QGraphicsView_mapToScene_QPolygon_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsView_mapToScene_QRect_const(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QGraphicsView_mapToScene_int_int_const(void* __this_nativeId,
 QPointF * __d_return_value,
 int x0,
 int y1);
private extern(C) void*  qtd_QGraphicsView_mapToScene_int_int_int_int_const(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) void*  qtd_QGraphicsView_matrix_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsView_optimizationFlags_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_render_QPainter_QRectF_QRect_AspectRatioMode(void* __this_nativeId,
 void* painter0,
 QRectF target1,
 QRect source2,
 int aspectRatioMode3);
private extern(C) int  qtd_QGraphicsView_renderHints_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_resetCachedContent(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_resetMatrix(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_resetTransform(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsView_resizeAnchor_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_rotate_double(void* __this_nativeId,
 double angle0);
private extern(C) int  qtd_QGraphicsView_rubberBandSelectionMode_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_scale_double_double(void* __this_nativeId,
 double sx0,
 double sy1);
private extern(C) void*  qtd_QGraphicsView_scene_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_sceneRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsView_setAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QGraphicsView_setBackgroundBrush_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QGraphicsView_setCacheMode_CacheMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QGraphicsView_setDragMode_DragMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QGraphicsView_setForegroundBrush_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QGraphicsView_setInteractive_bool(void* __this_nativeId,
 bool allowed0);
private extern(C) void  qtd_QGraphicsView_setMatrix_QMatrix_bool(void* __this_nativeId,
 void* matrix0,
 bool combine1);
private extern(C) void  qtd_QGraphicsView_setOptimizationFlag_OptimizationFlag_bool(void* __this_nativeId,
 int flag0,
 bool enabled1);
private extern(C) void  qtd_QGraphicsView_setOptimizationFlags_OptimizationFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QGraphicsView_setRenderHint_RenderHint_bool(void* __this_nativeId,
 int hint0,
 bool enabled1);
private extern(C) void  qtd_QGraphicsView_setRenderHints_RenderHints(void* __this_nativeId,
 int hints0);
private extern(C) void  qtd_QGraphicsView_setResizeAnchor_ViewportAnchor(void* __this_nativeId,
 int anchor0);
private extern(C) void  qtd_QGraphicsView_setRubberBandSelectionMode_ItemSelectionMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QGraphicsView_setScene_QGraphicsScene(void* __this_nativeId,
 void* scene0);
private extern(C) void  qtd_QGraphicsView_setSceneRect_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsView_setSceneRect_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsView_setTransform_QTransform_bool(void* __this_nativeId,
 void* matrix0,
 bool combine1);
private extern(C) void  qtd_QGraphicsView_setTransformationAnchor_ViewportAnchor(void* __this_nativeId,
 int anchor0);
private extern(C) void  qtd_QGraphicsView_setViewportUpdateMode_ViewportUpdateMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QGraphicsView_setupViewport_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QGraphicsView_shear_double_double(void* __this_nativeId,
 double sh0,
 double sv1);
private extern(C) void*  qtd_QGraphicsView_transform_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsView_transformationAnchor_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_translate_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void  qtd_QGraphicsView_updateScene_QList(void* __this_nativeId,
 void* rects0);
private extern(C) void  qtd_QGraphicsView_updateSceneRect_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void*  qtd_QGraphicsView_viewportTransform_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsView_viewportUpdateMode_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsView_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_drawBackground_QPainter_QRectF(void* __this_nativeId,
 void* painter0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsView_drawForeground_QPainter_QRectF(void* __this_nativeId,
 void* painter0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsView_dropEvent_QDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsView_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsView_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QGraphicsView_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsView_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int query0);
private extern(C) void  qtd_QGraphicsView_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QGraphicsView_showEvent_QShowEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) bool  qtd_QGraphicsView_viewportEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsView_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* painter0, QRectF* rect1) qtd_QGraphicsView_drawBackground_QPainter_QRectF_dispatch; }
extern(C) void qtd_export_QGraphicsView_drawBackground_QPainter_QRectF_dispatch(void *dId, void* painter0, QRectF* rect1){
    auto d_object = cast(QGraphicsView) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    d_object.drawBackground(painter0_d_ref, *rect1);
}

extern(C){ extern void function(void *dId, void* painter0, QRectF* rect1) qtd_QGraphicsView_drawForeground_QPainter_QRectF_dispatch; }
extern(C) void qtd_export_QGraphicsView_drawForeground_QPainter_QRectF_dispatch(void *dId, void* painter0, QRectF* rect1){
    auto d_object = cast(QGraphicsView) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    d_object.drawForeground(painter0_d_ref, *rect1);
}

private extern (C) void qtd_QGraphicsView_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsView() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QGraphicsView_drawBackground_QPainter_QRectF_dispatch;
    virt_arr[1] = &qtd_export_QGraphicsView_drawForeground_QPainter_QRectF_dispatch;
    qtd_QGraphicsView_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QGraphicsView_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsView) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QGraphicsView_staticMetaObject();

extern(C) void qtd_QGraphicsView_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsView_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
