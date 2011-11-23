module qt.gui.QGraphicsScene;

public import qt.gui.QGraphicsScene_aux;
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
public import qt.core.Qt;
public import qt.gui.QBrush;
public import qt.gui.QGraphicsEllipseItem;
public import qt.gui.QGraphicsSceneHelpEvent;
public import qt.core.QTimerEvent;
public import qt.core.QLineF;
public import qt.gui.QStyle;
public import qt.core.QChildEvent;
public import qt.gui.QGraphicsLineItem;
public import qt.core.QRectF;
public import qt.gui.QGraphicsView;
public import qt.gui.QKeyEvent;
public import qt.core.QObject;
public import qt.gui.QPainter;
public import qt.core.QPointF;
public import qt.gui.QGraphicsPixmapItem;
public import qt.gui.QGraphicsSceneMouseEvent;
public import qt.core.QList;
public import qt.core.QEvent;
public import qt.gui.QPalette;
public import qt.gui.QGraphicsTextItem;
public import qt.gui.QPolygonF;
public import qt.gui.QGraphicsPolygonItem;
public import qt.gui.QPen;
public import qt.gui.QGraphicsSimpleTextItem;
public import qt.gui.QGraphicsSceneContextMenuEvent;
public import qt.gui.QGraphicsItem;
public import qt.gui.QPixmap;
public import qt.gui.QFont;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QGraphicsProxyWidget;
public import qt.gui.QGraphicsItemGroup;
public import qt.gui.QPainterPath;
public import qt.core.QVariant;
public import qt.gui.QGraphicsWidget;
public import qt.gui.QFocusEvent;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.gui.QGraphicsRectItem;
public import qt.gui.QWidget;
public import qt.gui.QTransform;
public import qt.gui.QGraphicsPathItem;
public import qt.gui.QGraphicsSceneWheelEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsScene : QObject
{
    public enum SceneLayer {
        ItemLayer = 1,
        BackgroundLayer = 2,
        ForegroundLayer = 4,
        AllLayers = 65535
    }

    alias SceneLayer.ItemLayer ItemLayer;
    alias SceneLayer.BackgroundLayer BackgroundLayer;
    alias SceneLayer.ForegroundLayer ForegroundLayer;
    alias SceneLayer.AllLayers AllLayers;

    public enum ItemIndexMethod {
        BspTreeIndex = 0,
        NoIndex = -1
    }

    alias ItemIndexMethod.BspTreeIndex BspTreeIndex;
    alias ItemIndexMethod.NoIndex NoIndex;


    private static const string[] __signalSignatures = [
            "changed(QList<QRectF>)", 
            "sceneRectChanged(QRectF)", 
            "selectionChanged()"    ];

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

    protected final void changed(QList!(QRectF) region) {
        qtd_QGraphicsScene_changed_QList(qtdNativeId, &region);
    }

    protected final void sceneRectChanged(const(QRectF) rect) {
        qtd_QGraphicsScene_sceneRectChanged_QRectF(qtdNativeId, rect);
    }

    protected final void selectionChanged() {
        qtd_QGraphicsScene_selectionChanged(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QGraphicsScene_QGraphicsScene_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRectF) sceneRect, QObject parent_ = null) {
        void* ret = qtd_QGraphicsScene_QGraphicsScene_QRectF_QObject(cast(void*) this, sceneRect, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double x, double y, double width, double height, QObject parent_ = null) {
        void* ret = qtd_QGraphicsScene_QGraphicsScene_double_double_double_double_QObject(cast(void*) this, x, y, width, height, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final IQGraphicsItem activePanel() const {
        void* ret = qtd_QGraphicsScene_activePanel_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsWidget activeWindow() const {
        void *ret = qtd_QGraphicsScene_activeWindow_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QGraphicsEllipseItem addEllipse(const(QRectF) rect, const(QPen) pen = new QPen(), const(QBrush) brush = new QBrush()) {
        void* ret = qtd_QGraphicsScene_addEllipse_QRectF_QPen_QBrush(qtdNativeId, rect, pen is null ? null : (cast(QPen)pen).qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
        QGraphicsEllipseItem __d_return_value = qtd_QGraphicsEllipseItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsEllipseItem addEllipse(double x, double y, double w, double h, const(QPen) pen = new QPen(), const(QBrush) brush = new QBrush()) {
        void* ret = qtd_QGraphicsScene_addEllipse_double_double_double_double_QPen_QBrush(qtdNativeId, x, y, w, h, pen is null ? null : (cast(QPen)pen).qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
        QGraphicsEllipseItem __d_return_value = qtd_QGraphicsEllipseItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void addItem(IQGraphicsItem item) {
        qtd_QGraphicsScene_addItem_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final QGraphicsLineItem addLine(const(QLineF) line, const(QPen) pen = new QPen()) {
        void* ret = qtd_QGraphicsScene_addLine_QLineF_QPen(qtdNativeId, line, pen is null ? null : (cast(QPen)pen).qtdNativeId);
        QGraphicsLineItem __d_return_value = qtd_QGraphicsLineItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsLineItem addLine(double x1, double y1, double x2, double y2, const(QPen) pen = new QPen()) {
        void* ret = qtd_QGraphicsScene_addLine_double_double_double_double_QPen(qtdNativeId, x1, y1, x2, y2, pen is null ? null : (cast(QPen)pen).qtdNativeId);
        QGraphicsLineItem __d_return_value = qtd_QGraphicsLineItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsPathItem addPath(const(QPainterPath) path, const(QPen) pen = new QPen(), const(QBrush) brush = new QBrush()) {
        void* ret = qtd_QGraphicsScene_addPath_QPainterPath_QPen_QBrush(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, pen is null ? null : (cast(QPen)pen).qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
        QGraphicsPathItem __d_return_value = qtd_QGraphicsPathItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsPixmapItem addPixmap(const(QPixmap) pixmap) {
        void* ret = qtd_QGraphicsScene_addPixmap_QPixmap(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
        QGraphicsPixmapItem __d_return_value = qtd_QGraphicsPixmapItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsPolygonItem addPolygon(const(QPolygonF) polygon, const(QPen) pen = new QPen(), const(QBrush) brush = new QBrush()) {
        void* ret = qtd_QGraphicsScene_addPolygon_QPolygonF_QPen_QBrush(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId, pen is null ? null : (cast(QPen)pen).qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
        QGraphicsPolygonItem __d_return_value = qtd_QGraphicsPolygonItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsRectItem addRect(const(QRectF) rect, const(QPen) pen = new QPen(), const(QBrush) brush = new QBrush()) {
        void* ret = qtd_QGraphicsScene_addRect_QRectF_QPen_QBrush(qtdNativeId, rect, pen is null ? null : (cast(QPen)pen).qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
        QGraphicsRectItem __d_return_value = qtd_QGraphicsRectItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsRectItem addRect(double x, double y, double w, double h, const(QPen) pen = new QPen(), const(QBrush) brush = new QBrush()) {
        void* ret = qtd_QGraphicsScene_addRect_double_double_double_double_QPen_QBrush(qtdNativeId, x, y, w, h, pen is null ? null : (cast(QPen)pen).qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
        QGraphicsRectItem __d_return_value = qtd_QGraphicsRectItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsSimpleTextItem addSimpleText(string text, const(QFont) font = new QFont()) {
        void* ret = qtd_QGraphicsScene_addSimpleText_string_QFont(qtdNativeId, text, font is null ? null : (cast(QFont)font).qtdNativeId);
        QGraphicsSimpleTextItem __d_return_value = qtd_QGraphicsSimpleTextItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsTextItem addText(string text, const(QFont) font = new QFont()) {
        void *ret = qtd_QGraphicsScene_addText_string_QFont(qtdNativeId, text, font is null ? null : (cast(QFont)font).qtdNativeId);
        QGraphicsTextItem __d_return_value = QGraphicsTextItem.__getObject(ret);
        return __d_return_value;
    }

    public final QGraphicsProxyWidget addWidget(QWidget widget, int wFlags = 0) {
        void *ret = qtd_QGraphicsScene_addWidget_QWidget_WindowFlags(qtdNativeId, widget is null ? null : widget.qtdNativeId, wFlags);
        QGraphicsProxyWidget __d_return_value = QGraphicsProxyWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void advance() {
        qtd_QGraphicsScene_advance(qtdNativeId);
    }

    public final QBrush backgroundBrush() const {
        void* ret = qtd_QGraphicsScene_backgroundBrush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final int bspTreeDepth() const {
        return qtd_QGraphicsScene_bspTreeDepth_const(qtdNativeId);
    }

    public final void clear() {
        qtd_QGraphicsScene_clear(qtdNativeId);
    }

    public final void clearFocus() {
        qtd_QGraphicsScene_clearFocus(qtdNativeId);
    }

    public final void clearSelection() {
        qtd_QGraphicsScene_clearSelection(qtdNativeId);
    }

    public final QList!(IQGraphicsItem) collidingItems(IQGraphicsItem item, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_collidingItems_QGraphicsItem_ItemSelectionMode_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, mode);
        return res;
    }

    public final QGraphicsItemGroup createItemGroup(QList!(IQGraphicsItem) items) {
        void* ret = qtd_QGraphicsScene_createItemGroup_QList(qtdNativeId, &items);
        QGraphicsItemGroup __d_return_value = qtd_QGraphicsItemGroup_from_ptr(ret);

        return __d_return_value;
    }

    public final void destroyItemGroup(QGraphicsItemGroup group) {
        qtd_QGraphicsScene_destroyItemGroup_QGraphicsItemGroup(qtdNativeId, group is null ? null : group.qtdNativeId);
    }

    public final IQGraphicsItem focusItem() const {
        void* ret = qtd_QGraphicsScene_focusItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    protected final bool focusNextPrevChild(bool next) {
        return qtd_QGraphicsScene_focusNextPrevChild_bool(qtdNativeId, next);
    }

    public final QFont font() const {
        void* ret = qtd_QGraphicsScene_font_const(qtdNativeId);
        QFont __d_return_value = new QFont(ret);
        return __d_return_value;
    }

    public final QBrush foregroundBrush() const {
        void* ret = qtd_QGraphicsScene_foregroundBrush_const(qtdNativeId);
        QBrush __d_return_value = new QBrush(ret);
        return __d_return_value;
    }

    public final bool hasFocus() const {
        return qtd_QGraphicsScene_hasFocus_const(qtdNativeId);
    }

    public final double height() const {
        return qtd_QGraphicsScene_height_const(qtdNativeId);
    }

    public final void invalidate(const(QRectF) rect = QRectF(), int layers = 65535) {
        qtd_QGraphicsScene_invalidate_QRectF_SceneLayers(qtdNativeId, rect, layers);
    }

    public final void invalidate(double x, double y, double w, double h, int layers = 65535) {
        qtd_QGraphicsScene_invalidate_double_double_double_double_SceneLayers(qtdNativeId, x, y, w, h, layers);
    }

    public final bool isActive() const {
        return qtd_QGraphicsScene_isActive_const(qtdNativeId);
    }

    public final bool isSortCacheEnabled() const {
        return qtd_QGraphicsScene_isSortCacheEnabled_const(qtdNativeId);
    }

    public final IQGraphicsItem itemAt(const(QPointF) pos) const {
        void* ret = qtd_QGraphicsScene_itemAt_QPointF_const(qtdNativeId, pos);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem itemAt(const(QPointF) pos, const(QTransform) deviceTransform) const {
        void* ret = qtd_QGraphicsScene_itemAt_QPointF_QTransform_const(qtdNativeId, pos, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem itemAt(double x, double y) const {
        void* ret = qtd_QGraphicsScene_itemAt_double_double_const(qtdNativeId, x, y);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem itemAt(double x, double y, const(QTransform) deviceTransform) const {
        void* ret = qtd_QGraphicsScene_itemAt_double_double_QTransform_const(qtdNativeId, x, y, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsScene.ItemIndexMethod itemIndexMethod() const {
        return cast(QGraphicsScene.ItemIndexMethod) qtd_QGraphicsScene_itemIndexMethod_const(qtdNativeId);
    }

    public final QList!(IQGraphicsItem) items() const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(IQGraphicsItem) items(Qt.SortOrder order) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_SortOrder_const(qtdNativeId, &res, order);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPainterPath) path, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QPainterPath_ItemSelectionMode_const(qtdNativeId, &res, path is null ? null : (cast(QPainterPath)path).qtdNativeId, mode);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPainterPath) path, Qt.ItemSelectionMode mode, Qt.SortOrder order, const(QTransform) deviceTransform = new QTransform()) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QPainterPath_ItemSelectionMode_SortOrder_QTransform_const(qtdNativeId, &res, path is null ? null : (cast(QPainterPath)path).qtdNativeId, mode, order, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPointF) pos) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QPointF_const(qtdNativeId, &res, pos);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPointF) pos, Qt.ItemSelectionMode mode, Qt.SortOrder order, const(QTransform) deviceTransform = new QTransform()) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QPointF_ItemSelectionMode_SortOrder_QTransform_const(qtdNativeId, &res, pos, mode, order, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPolygonF) polygon, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QPolygonF_ItemSelectionMode_const(qtdNativeId, &res, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId, mode);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QPolygonF) polygon, Qt.ItemSelectionMode mode, Qt.SortOrder order, const(QTransform) deviceTransform = new QTransform()) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QPolygonF_ItemSelectionMode_SortOrder_QTransform_const(qtdNativeId, &res, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId, mode, order, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QRectF) rect, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QRectF_ItemSelectionMode_const(qtdNativeId, &res, rect, mode);
        return res;
    }

    public final QList!(IQGraphicsItem) items(const(QRectF) rect, Qt.ItemSelectionMode mode, Qt.SortOrder order, const(QTransform) deviceTransform = new QTransform()) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_QRectF_ItemSelectionMode_SortOrder_QTransform_const(qtdNativeId, &res, rect, mode, order, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
        return res;
    }

    public final QList!(IQGraphicsItem) items(double x, double y, double w, double h, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_double_double_double_double_ItemSelectionMode_const(qtdNativeId, &res, x, y, w, h, mode);
        return res;
    }

    public final QList!(IQGraphicsItem) items(double x, double y, double w, double h, Qt.ItemSelectionMode mode, Qt.SortOrder order, const(QTransform) deviceTransform = new QTransform()) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_items_double_double_double_double_ItemSelectionMode_SortOrder_QTransform_const(qtdNativeId, &res, x, y, w, h, mode, order, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
        return res;
    }

    public final QRectF itemsBoundingRect() const {
        QRectF res;
        qtd_QGraphicsScene_itemsBoundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final IQGraphicsItem mouseGrabberItem() const {
        void* ret = qtd_QGraphicsScene_mouseGrabberItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QPalette palette() const {
        void* ret = qtd_QGraphicsScene_palette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public final void removeItem(IQGraphicsItem item) {
        qtd_QGraphicsScene_removeItem_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void render(QPainter painter, const(QRectF) target = QRectF(), const(QRectF) source = QRectF(), Qt.AspectRatioMode aspectRatioMode = Qt.AspectRatioMode.KeepAspectRatio) {
        qtd_QGraphicsScene_render_QPainter_QRectF_QRectF_AspectRatioMode(qtdNativeId, painter is null ? null : painter.qtdNativeId, target, source, aspectRatioMode);
    }

    public final QRectF sceneRect() const {
        QRectF res;
        qtd_QGraphicsScene_sceneRect_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(IQGraphicsItem) selectedItems() const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsScene_selectedItems_const(qtdNativeId, &res);
        return res;
    }

    public final QPainterPath selectionArea() const {
        void* ret = qtd_QGraphicsScene_selectionArea_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final bool sendEvent(IQGraphicsItem item, QEvent event) {
        return qtd_QGraphicsScene_sendEvent_QGraphicsItem_QEvent(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, event is null ? null : event.qtdNativeId);
    }

    public final void setActivePanel(IQGraphicsItem item) {
        qtd_QGraphicsScene_setActivePanel_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void setActiveWindow(QGraphicsWidget widget) {
        qtd_QGraphicsScene_setActiveWindow_QGraphicsWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setBackgroundBrush(const(QBrush) brush) {
        qtd_QGraphicsScene_setBackgroundBrush_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setBspTreeDepth(int depth) {
        qtd_QGraphicsScene_setBspTreeDepth_int(qtdNativeId, depth);
    }

    public final void setFocus(Qt.FocusReason focusReason = Qt.FocusReason.OtherFocusReason) {
        qtd_QGraphicsScene_setFocus_FocusReason(qtdNativeId, focusReason);
    }

    public final void setFocusItem(IQGraphicsItem item, Qt.FocusReason focusReason = Qt.FocusReason.OtherFocusReason) {
        qtd_QGraphicsScene_setFocusItem_QGraphicsItem_FocusReason(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, focusReason);
    }

    public final void setFont(const(QFont) font) {
        qtd_QGraphicsScene_setFont_QFont(qtdNativeId, font is null ? null : (cast(QFont)font).qtdNativeId);
    }

    public final void setForegroundBrush(const(QBrush) brush) {
        qtd_QGraphicsScene_setForegroundBrush_QBrush(qtdNativeId, brush is null ? null : (cast(QBrush)brush).qtdNativeId);
    }

    public final void setItemIndexMethod(QGraphicsScene.ItemIndexMethod method) {
        qtd_QGraphicsScene_setItemIndexMethod_ItemIndexMethod(qtdNativeId, method);
    }

    public final void setPalette(const(QPalette) palette) {
        qtd_QGraphicsScene_setPalette_QPalette(qtdNativeId, palette is null ? null : (cast(QPalette)palette).qtdNativeId);
    }

    public final void setSceneRect(const(QRectF) rect) {
        qtd_QGraphicsScene_setSceneRect_QRectF(qtdNativeId, rect);
    }

    public final void setSceneRect(double x, double y, double w, double h) {
        qtd_QGraphicsScene_setSceneRect_double_double_double_double(qtdNativeId, x, y, w, h);
    }

    public final void setSelectionArea(const(QPainterPath) path) {
        qtd_QGraphicsScene_setSelectionArea_QPainterPath(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
    }

    public final void setSelectionArea(const(QPainterPath) path, Qt.ItemSelectionMode mode) {
        qtd_QGraphicsScene_setSelectionArea_QPainterPath_ItemSelectionMode(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, mode);
    }

    public final void setSelectionArea(const(QPainterPath) path, Qt.ItemSelectionMode mode, const(QTransform) deviceTransform) {
        qtd_QGraphicsScene_setSelectionArea_QPainterPath_ItemSelectionMode_QTransform(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, mode, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
    }

    public final void setSelectionArea(const(QPainterPath) path, const(QTransform) deviceTransform) {
        qtd_QGraphicsScene_setSelectionArea_QPainterPath_QTransform(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, deviceTransform is null ? null : (cast(QTransform)deviceTransform).qtdNativeId);
    }

    public final void setSortCacheEnabled(bool enabled) {
        qtd_QGraphicsScene_setSortCacheEnabled_bool(qtdNativeId, enabled);
    }

    public final void setStickyFocus(bool enabled) {
        qtd_QGraphicsScene_setStickyFocus_bool(qtdNativeId, enabled);
    }

    public final void setStyle(QStyle style) {
        qtd_QGraphicsScene_setStyle_QStyle(qtdNativeId, style is null ? null : style.qtdNativeId);
    }

    public final bool stickyFocus() const {
        return qtd_QGraphicsScene_stickyFocus_const(qtdNativeId);
    }

    public final QStyle style() const {
        void *ret = qtd_QGraphicsScene_style_const(qtdNativeId);
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }

    public final void update(const(QRectF) rect = QRectF()) {
        qtd_QGraphicsScene_update_QRectF(qtdNativeId, rect);
    }

    public final void update(double x, double y, double w, double h) {
        qtd_QGraphicsScene_update_double_double_double_double(qtdNativeId, x, y, w, h);
    }

    public final QList!(QGraphicsView) views() const {
        auto res = QList!(QGraphicsView).opCall();
        qtd_QGraphicsScene_views_const(qtdNativeId, &res);
        return res;
    }

    public final double width() const {
        return qtd_QGraphicsScene_width_const(qtdNativeId);
    }

    protected void contextMenuEvent(QGraphicsSceneContextMenuEvent event) {
        qtd_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragEnterEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragLeaveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void dragMoveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void drawBackground(QPainter painter, const(QRectF) rect) {
        qtd_QGraphicsScene_drawBackground_QPainter_QRectF(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect);
    }

    protected void drawForeground(QPainter painter, const(QRectF) rect) {
        qtd_QGraphicsScene_drawForeground_QPainter_QRectF(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect);
    }

    protected void dropEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QGraphicsScene_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool eventFilter(QObject watched, QEvent event) {
        return qtd_QGraphicsScene_eventFilter_QObject_QEvent(qtdNativeId, watched is null ? null : watched.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent event) {
        qtd_QGraphicsScene_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusOutEvent(QFocusEvent event) {
        qtd_QGraphicsScene_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void helpEvent(QGraphicsSceneHelpEvent event) {
        qtd_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void inputMethodEvent(QInputMethodEvent event) {
        qtd_QGraphicsScene_inputMethodEvent_QInputMethodEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery query) const {
        void* ret = qtd_QGraphicsScene_inputMethodQuery_InputMethodQuery_const(qtdNativeId, query);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    protected void keyPressEvent(QKeyEvent event) {
        qtd_QGraphicsScene_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void keyReleaseEvent(QKeyEvent event) {
        qtd_QGraphicsScene_keyReleaseEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseDoubleClickEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseMoveEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mousePressEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseReleaseEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void wheelEvent(QGraphicsSceneWheelEvent event) {
        qtd_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "advance()", 
            "clear()", 
            "clearSelection()", 
            "focusNextPrevChild(bool)", 
            "invalidate(QRectF,QFlags<QGraphicsScene::SceneLayer>)", 
            "invalidate(QRectF)", 
            "invalidate()", 
            "update(QRectF)", 
            "update()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsScene_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsScene);
    }

    static QGraphicsScene __getObject(void* nativeId) {
        return static_cast!(QGraphicsScene)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsScene_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsScene_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsScene(nativeId, initFlags);
        QGraphicsScene.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QList!(QRectF))("changed"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(const(QRectF))("sceneRectChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("selectionChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("advance"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("clearSelection"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(bool)("focusNextPrevChild"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(const(QRectF),int)("invalidate"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(const(QRectF))("invalidate"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("invalidate"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(const(QRectF))("update"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!()("update"), index));

    }

    public alias void __isQtType_QGraphicsScene;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QGraphicsScene_changed_QList(void* __this_nativeId,
 void* region0);
private extern(C) void  qtd_QGraphicsScene_sceneRectChanged_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsScene_selectionChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QGraphicsScene_QGraphicsScene_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QGraphicsScene_QGraphicsScene_QRectF_QObject(void *d_ptr,
 QRectF sceneRect0,
 void* parent1);
private extern(C) void* qtd_QGraphicsScene_QGraphicsScene_double_double_double_double_QObject(void *d_ptr,
 double x0,
 double y1,
 double width2,
 double height3,
 void* parent4);
private extern(C) void*  qtd_QGraphicsScene_activePanel_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsScene_activeWindow_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsScene_addEllipse_QRectF_QPen_QBrush(void* __this_nativeId,
 QRectF rect0,
 void* pen1,
 void* brush2);
private extern(C) void*  qtd_QGraphicsScene_addEllipse_double_double_double_double_QPen_QBrush(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 void* pen4,
 void* brush5);
private extern(C) void  qtd_QGraphicsScene_addItem_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QGraphicsScene_addLine_QLineF_QPen(void* __this_nativeId,
 QLineF line0,
 void* pen1);
private extern(C) void*  qtd_QGraphicsScene_addLine_double_double_double_double_QPen(void* __this_nativeId,
 double x10,
 double y11,
 double x22,
 double y23,
 void* pen4);
private extern(C) void*  qtd_QGraphicsScene_addPath_QPainterPath_QPen_QBrush(void* __this_nativeId,
 void* path0,
 void* pen1,
 void* brush2);
private extern(C) void*  qtd_QGraphicsScene_addPixmap_QPixmap(void* __this_nativeId,
 void* pixmap0);
private extern(C) void*  qtd_QGraphicsScene_addPolygon_QPolygonF_QPen_QBrush(void* __this_nativeId,
 void* polygon0,
 void* pen1,
 void* brush2);
private extern(C) void*  qtd_QGraphicsScene_addRect_QRectF_QPen_QBrush(void* __this_nativeId,
 QRectF rect0,
 void* pen1,
 void* brush2);
private extern(C) void*  qtd_QGraphicsScene_addRect_double_double_double_double_QPen_QBrush(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 void* pen4,
 void* brush5);
private extern(C) void*  qtd_QGraphicsScene_addSimpleText_string_QFont(void* __this_nativeId,
 string text0,
 void* font1);
private extern(C) void*  qtd_QGraphicsScene_addText_string_QFont(void* __this_nativeId,
 string text0,
 void* font1);
private extern(C) void*  qtd_QGraphicsScene_addWidget_QWidget_WindowFlags(void* __this_nativeId,
 void* widget0,
 int wFlags1);
private extern(C) void  qtd_QGraphicsScene_advance(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsScene_backgroundBrush_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsScene_bspTreeDepth_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_clear(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_clearFocus(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_clearSelection(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_collidingItems_QGraphicsItem_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 void* item0,
 int mode1);
private extern(C) void*  qtd_QGraphicsScene_createItemGroup_QList(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QGraphicsScene_destroyItemGroup_QGraphicsItemGroup(void* __this_nativeId,
 void* group0);
private extern(C) void*  qtd_QGraphicsScene_focusItem_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsScene_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void*  qtd_QGraphicsScene_font_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsScene_foregroundBrush_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsScene_hasFocus_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsScene_height_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_invalidate_QRectF_SceneLayers(void* __this_nativeId,
 QRectF rect0,
 int layers1);
private extern(C) void  qtd_QGraphicsScene_invalidate_double_double_double_double_SceneLayers(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int layers4);
private extern(C) bool  qtd_QGraphicsScene_isActive_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsScene_isSortCacheEnabled_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsScene_itemAt_QPointF_const(void* __this_nativeId,
 QPointF pos0);
private extern(C) void*  qtd_QGraphicsScene_itemAt_QPointF_QTransform_const(void* __this_nativeId,
 QPointF pos0,
 void* deviceTransform1);
private extern(C) void*  qtd_QGraphicsScene_itemAt_double_double_const(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsScene_itemAt_double_double_QTransform_const(void* __this_nativeId,
 double x0,
 double y1,
 void* deviceTransform2);
private extern(C) int  qtd_QGraphicsScene_itemIndexMethod_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_items_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGraphicsScene_items_SortOrder_const(void* __this_nativeId,
 void* __d_return_value,
 int order0);
private extern(C) void  qtd_QGraphicsScene_items_QPainterPath_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 void* path0,
 int mode1);
private extern(C) void  qtd_QGraphicsScene_items_QPainterPath_ItemSelectionMode_SortOrder_QTransform_const(void* __this_nativeId,
 void* __d_return_value,
 void* path0,
 int mode1,
 int order2,
 void* deviceTransform3);
private extern(C) void  qtd_QGraphicsScene_items_QPointF_const(void* __this_nativeId,
 void* __d_return_value,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsScene_items_QPointF_ItemSelectionMode_SortOrder_QTransform_const(void* __this_nativeId,
 void* __d_return_value,
 QPointF pos0,
 int mode1,
 int order2,
 void* deviceTransform3);
private extern(C) void  qtd_QGraphicsScene_items_QPolygonF_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 void* polygon0,
 int mode1);
private extern(C) void  qtd_QGraphicsScene_items_QPolygonF_ItemSelectionMode_SortOrder_QTransform_const(void* __this_nativeId,
 void* __d_return_value,
 void* polygon0,
 int mode1,
 int order2,
 void* deviceTransform3);
private extern(C) void  qtd_QGraphicsScene_items_QRectF_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 QRectF rect0,
 int mode1);
private extern(C) void  qtd_QGraphicsScene_items_QRectF_ItemSelectionMode_SortOrder_QTransform_const(void* __this_nativeId,
 void* __d_return_value,
 QRectF rect0,
 int mode1,
 int order2,
 void* deviceTransform3);
private extern(C) void  qtd_QGraphicsScene_items_double_double_double_double_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3,
 int mode4);
private extern(C) void  qtd_QGraphicsScene_items_double_double_double_double_ItemSelectionMode_SortOrder_QTransform_const(void* __this_nativeId,
 void* __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3,
 int mode4,
 int order5,
 void* deviceTransform6);
private extern(C) void  qtd_QGraphicsScene_itemsBoundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void*  qtd_QGraphicsScene_mouseGrabberItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsScene_palette_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_removeItem_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsScene_render_QPainter_QRectF_QRectF_AspectRatioMode(void* __this_nativeId,
 void* painter0,
 QRectF target1,
 QRectF source2,
 int aspectRatioMode3);
private extern(C) void  qtd_QGraphicsScene_sceneRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsScene_selectedItems_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QGraphicsScene_selectionArea_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsScene_sendEvent_QGraphicsItem_QEvent(void* __this_nativeId,
 void* item0,
 void* event1);
private extern(C) void  qtd_QGraphicsScene_setActivePanel_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsScene_setActiveWindow_QGraphicsWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QGraphicsScene_setBackgroundBrush_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QGraphicsScene_setBspTreeDepth_int(void* __this_nativeId,
 int depth0);
private extern(C) void  qtd_QGraphicsScene_setFocus_FocusReason(void* __this_nativeId,
 int focusReason0);
private extern(C) void  qtd_QGraphicsScene_setFocusItem_QGraphicsItem_FocusReason(void* __this_nativeId,
 void* item0,
 int focusReason1);
private extern(C) void  qtd_QGraphicsScene_setFont_QFont(void* __this_nativeId,
 void* font0);
private extern(C) void  qtd_QGraphicsScene_setForegroundBrush_QBrush(void* __this_nativeId,
 void* brush0);
private extern(C) void  qtd_QGraphicsScene_setItemIndexMethod_ItemIndexMethod(void* __this_nativeId,
 int method0);
private extern(C) void  qtd_QGraphicsScene_setPalette_QPalette(void* __this_nativeId,
 void* palette0);
private extern(C) void  qtd_QGraphicsScene_setSceneRect_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsScene_setSceneRect_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsScene_setSelectionArea_QPainterPath(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsScene_setSelectionArea_QPainterPath_ItemSelectionMode(void* __this_nativeId,
 void* path0,
 int mode1);
private extern(C) void  qtd_QGraphicsScene_setSelectionArea_QPainterPath_ItemSelectionMode_QTransform(void* __this_nativeId,
 void* path0,
 int mode1,
 void* deviceTransform2);
private extern(C) void  qtd_QGraphicsScene_setSelectionArea_QPainterPath_QTransform(void* __this_nativeId,
 void* path0,
 void* deviceTransform1);
private extern(C) void  qtd_QGraphicsScene_setSortCacheEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsScene_setStickyFocus_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsScene_setStyle_QStyle(void* __this_nativeId,
 void* style0);
private extern(C) bool  qtd_QGraphicsScene_stickyFocus_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsScene_style_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_update_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsScene_update_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsScene_views_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) double  qtd_QGraphicsScene_width_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_drawBackground_QPainter_QRectF(void* __this_nativeId,
 void* painter0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsScene_drawForeground_QPainter_QRectF(void* __this_nativeId,
 void* painter0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsScene_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsScene_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* watched0,
 void* event1);
private extern(C) void  qtd_QGraphicsScene_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsScene_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int query0);
private extern(C) void  qtd_QGraphicsScene_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneContextMenuEvent(event0, QtdObjectInitFlags.onStack);
    d_object.contextMenuEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dragEnterEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dragLeaveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dragMoveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* painter0, QRectF* rect1) qtd_QGraphicsScene_drawBackground_QPainter_QRectF_dispatch; }
extern(C) void qtd_export_QGraphicsScene_drawBackground_QPainter_QRectF_dispatch(void *dId, void* painter0, QRectF* rect1){
    auto d_object = cast(QGraphicsScene) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    d_object.drawBackground(painter0_d_ref, *rect1);
}

extern(C){ extern void function(void *dId, void* painter0, QRectF* rect1) qtd_QGraphicsScene_drawForeground_QPainter_QRectF_dispatch; }
extern(C) void qtd_export_QGraphicsScene_drawForeground_QPainter_QRectF_dispatch(void *dId, void* painter0, QRectF* rect1){
    auto d_object = cast(QGraphicsScene) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    d_object.drawForeground(painter0_d_ref, *rect1);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dropEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_focusInEvent_QFocusEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_focusInEvent_QFocusEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QFocusEvent(event0, QtdObjectInitFlags.onStack);
    d_object.focusInEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_focusOutEvent_QFocusEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_focusOutEvent_QFocusEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QFocusEvent(event0, QtdObjectInitFlags.onStack);
    d_object.focusOutEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneHelpEvent(event0, QtdObjectInitFlags.onStack);
    d_object.helpEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QInputMethodEvent(event0, QtdObjectInitFlags.onStack);
    d_object.inputMethodEvent(event0_d_ref);
}

extern(C){ extern void* function(void *dId, int query0) qtd_QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch; }
extern(C) void* qtd_export_QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch(void *dId, int query0){
    auto d_object = cast(QGraphicsScene) dId;
    auto query0_enum = cast(Qt.InputMethodQuery) query0;
    QVariant ret_value = d_object.inputMethodQuery(query0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_keyPressEvent_QKeyEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_keyPressEvent_QKeyEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QKeyEvent(event0, QtdObjectInitFlags.onStack);
    d_object.keyPressEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QKeyEvent(event0, QtdObjectInitFlags.onStack);
    d_object.keyReleaseEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mouseDoubleClickEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mouseMoveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mousePressEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mouseReleaseEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch; }
extern(C) void qtd_export_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(QGraphicsScene) dId;
    scope event0_d_ref = new QGraphicsSceneWheelEvent(event0, QtdObjectInitFlags.onStack);
    d_object.wheelEvent(event0_d_ref);
}

private extern (C) void qtd_QGraphicsScene_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsScene() {
    void*[19] virt_arr;
    virt_arr[0] = &qtd_export_QGraphicsScene_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch;
    virt_arr[1] = &qtd_export_QGraphicsScene_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[2] = &qtd_export_QGraphicsScene_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[3] = &qtd_export_QGraphicsScene_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[4] = &qtd_export_QGraphicsScene_drawBackground_QPainter_QRectF_dispatch;
    virt_arr[5] = &qtd_export_QGraphicsScene_drawForeground_QPainter_QRectF_dispatch;
    virt_arr[6] = &qtd_export_QGraphicsScene_dropEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[7] = &qtd_export_QGraphicsScene_focusInEvent_QFocusEvent_dispatch;
    virt_arr[8] = &qtd_export_QGraphicsScene_focusOutEvent_QFocusEvent_dispatch;
    virt_arr[9] = &qtd_export_QGraphicsScene_helpEvent_QGraphicsSceneHelpEvent_dispatch;
    virt_arr[10] = &qtd_export_QGraphicsScene_inputMethodEvent_QInputMethodEvent_dispatch;
    virt_arr[11] = &qtd_export_QGraphicsScene_inputMethodQuery_InputMethodQuery_const_dispatch;
    virt_arr[12] = &qtd_export_QGraphicsScene_keyPressEvent_QKeyEvent_dispatch;
    virt_arr[13] = &qtd_export_QGraphicsScene_keyReleaseEvent_QKeyEvent_dispatch;
    virt_arr[14] = &qtd_export_QGraphicsScene_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[15] = &qtd_export_QGraphicsScene_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[16] = &qtd_export_QGraphicsScene_mousePressEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[17] = &qtd_export_QGraphicsScene_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[18] = &qtd_export_QGraphicsScene_wheelEvent_QGraphicsSceneWheelEvent_dispatch;
    qtd_QGraphicsScene_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QGraphicsScene_changed_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsScene) dId;
        QList!(QRectF) region0;
        qtd_qt_gui_QRectF_fromcpp_QList(args[1], &region0);

        //d_object.changed_emit(region0);
}*/
/*private extern(C) void qtd_QGraphicsScene_sceneRectChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsScene) dId;
        auto rect0 = *(cast(QRectF*)args[1]);
        //d_object.sceneRectChanged_emit(rect0);
}*/
/*private extern(C) void qtd_QGraphicsScene_selectionChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsScene) dId;
        //d_object.selectionChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QGraphicsScene_staticMetaObject();

extern(C) void qtd_QGraphicsScene_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsScene_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
