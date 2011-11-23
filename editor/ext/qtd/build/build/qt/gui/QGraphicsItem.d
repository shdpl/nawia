module qt.gui.QGraphicsItem;

public import qt.gui.QGraphicsItem_aux;
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
public import qt.gui.QGraphicsItemGroup;
public import qt.gui.QGraphicsSceneContextMenuEvent;
public import qt.gui.QTransform;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPainterPath;
public import qt.gui.QPainter;
public import qt.gui.QGraphicsSceneWheelEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QGraphicsSceneMouseEvent;
public import qt.gui.QGraphicsObject;
public import qt.gui.QRegion;
public import qt.gui.QKeyEvent;
public import qt.gui.QWidget;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.gui.QGraphicsSceneHoverEvent;
public import qt.core.QPointF;
public import qt.core.QVariant;
public import qt.gui.QGraphicsWidget;
public import qt.gui.QStyleOptionGraphicsItem;
public import qt.gui.QGraphicsScene;
public import qt.gui.QCursor;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QGraphicsItem : QtdObject, IQGraphicsItem
{

// Functions

    public this(IQGraphicsItem parent_ = null, QGraphicsScene scene = null) {
        void* ret = qtd_QGraphicsItem_QGraphicsItem_QGraphicsItem_QGraphicsScene(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, scene is null ? null : scene.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool acceptDrops() const {
        return qtd_QGraphicsItem_acceptDrops_const(qtdNativeId);
    }

    public final bool acceptHoverEvents() const {
        return qtd_QGraphicsItem_acceptHoverEvents_const(qtdNativeId);
    }

    public final bool acceptTouchEvents() const {
        return qtd_QGraphicsItem_acceptTouchEvents_const(qtdNativeId);
    }

    public final int acceptedMouseButtons() const {
        return qtd_QGraphicsItem_acceptedMouseButtons_const(qtdNativeId);
    }

    public final bool acceptsHoverEvents() const {
        return qtd_QGraphicsItem_acceptsHoverEvents_const(qtdNativeId);
    }

    public final void addToIndex() {
        qtd_QGraphicsItem_addToIndex(qtdNativeId);
    }

    public final QRegion boundingRegion(const(QTransform) itemToDeviceTransform) const {
        void* ret = qtd_QGraphicsItem_boundingRegion_QTransform_const(qtdNativeId, itemToDeviceTransform is null ? null : (cast(QTransform)itemToDeviceTransform).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final double boundingRegionGranularity() const {
        return qtd_QGraphicsItem_boundingRegionGranularity_const(qtdNativeId);
    }

    public final CacheMode cacheMode() const {
        return cast(QGraphicsItem.CacheMode) qtd_QGraphicsItem_cacheMode_const(qtdNativeId);
    }

    public final QList!(IQGraphicsItem) childItems() const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsItem_childItems_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF childrenBoundingRect() const {
        QRectF res;
        qtd_QGraphicsItem_childrenBoundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final void clearFocus() {
        qtd_QGraphicsItem_clearFocus(qtdNativeId);
    }

    public final QPainterPath clipPath() const {
        void* ret = qtd_QGraphicsItem_clipPath_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QList!(IQGraphicsItem) collidingItems(Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsItem_collidingItems_ItemSelectionMode_const(qtdNativeId, &res, mode);
        return res;
    }

    public final IQGraphicsItem commonAncestorItem(IQGraphicsItem other) const {
        void* ret = qtd_QGraphicsItem_commonAncestorItem_QGraphicsItem_const(qtdNativeId, other is null ? null : other.__ptr_IQGraphicsItem);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QCursor cursor() const {
        void* ret = qtd_QGraphicsItem_cursor_const(qtdNativeId);
        QCursor __d_return_value = new QCursor(ret);
        return __d_return_value;
    }

    public final QVariant data(int key) const {
        void* ret = qtd_QGraphicsItem_data_int_const(qtdNativeId, key);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QTransform deviceTransform(const(QTransform) viewportTransform) const {
        void* ret = qtd_QGraphicsItem_deviceTransform_QTransform_const(qtdNativeId, viewportTransform is null ? null : (cast(QTransform)viewportTransform).qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final double effectiveOpacity() const {
        return qtd_QGraphicsItem_effectiveOpacity_const(qtdNativeId);
    }

    public final void ensureVisible(const(QRectF) rect = QRectF(), int xmargin = 50, int ymargin = 50) {
        qtd_QGraphicsItem_ensureVisible_QRectF_int_int(qtdNativeId, rect, xmargin, ymargin);
    }

    public final void ensureVisible(double x, double y, double w, double h, int xmargin = 50, int ymargin = 50) {
        qtd_QGraphicsItem_ensureVisible_double_double_double_double_int_int(qtdNativeId, x, y, w, h, xmargin, ymargin);
    }

    public final bool filtersChildEvents() const {
        return qtd_QGraphicsItem_filtersChildEvents_const(qtdNativeId);
    }

    public final int flags() const {
        return qtd_QGraphicsItem_flags_const(qtdNativeId);
    }

    public final IQGraphicsItem focusItem() const {
        void* ret = qtd_QGraphicsItem_focusItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem focusProxy() const {
        void* ret = qtd_QGraphicsItem_focusProxy_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem focusScopeItem() const {
        void* ret = qtd_QGraphicsItem_focusScopeItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void grabKeyboard() {
        qtd_QGraphicsItem_grabKeyboard(qtdNativeId);
    }

    public final void grabMouse() {
        qtd_QGraphicsItem_grabMouse(qtdNativeId);
    }

    public final QGraphicsItemGroup group() const {
        void* ret = qtd_QGraphicsItem_group_const(qtdNativeId);
        QGraphicsItemGroup __d_return_value = qtd_QGraphicsItemGroup_from_ptr(ret);

        return __d_return_value;
    }

    public final bool handlesChildEvents() const {
        return qtd_QGraphicsItem_handlesChildEvents_const(qtdNativeId);
    }

    public final bool hasCursor() const {
        return qtd_QGraphicsItem_hasCursor_const(qtdNativeId);
    }

    public final bool hasFocus() const {
        return qtd_QGraphicsItem_hasFocus_const(qtdNativeId);
    }

    public final void hide() {
        qtd_QGraphicsItem_hide(qtdNativeId);
    }

    public final void installSceneEventFilter(IQGraphicsItem filterItem) {
        qtd_QGraphicsItem_installSceneEventFilter_QGraphicsItem(qtdNativeId, filterItem is null ? null : filterItem.__ptr_IQGraphicsItem);
    }

    public final bool isActive() const {
        return qtd_QGraphicsItem_isActive_const(qtdNativeId);
    }

    public final bool isAncestorOf(IQGraphicsItem child) const {
        return qtd_QGraphicsItem_isAncestorOf_QGraphicsItem_const(qtdNativeId, child is null ? null : child.__ptr_IQGraphicsItem);
    }

    public final bool isClipped() const {
        return qtd_QGraphicsItem_isClipped_const(qtdNativeId);
    }

    public final bool isEnabled() const {
        return qtd_QGraphicsItem_isEnabled_const(qtdNativeId);
    }

    public final bool isObscured() const {
        return qtd_QGraphicsItem_isObscured_const(qtdNativeId);
    }

    public final bool isObscured(const(QRectF) rect) const {
        return qtd_QGraphicsItem_isObscured_QRectF_const(qtdNativeId, rect);
    }

    public final bool isObscured(double x, double y, double w, double h) const {
        return qtd_QGraphicsItem_isObscured_double_double_double_double_const(qtdNativeId, x, y, w, h);
    }

    public final bool isPanel() const {
        return qtd_QGraphicsItem_isPanel_const(qtdNativeId);
    }

    public final bool isSelected() const {
        return qtd_QGraphicsItem_isSelected_const(qtdNativeId);
    }

    public final bool isUnderMouse() const {
        return qtd_QGraphicsItem_isUnderMouse_const(qtdNativeId);
    }

    public final bool isVisible() const {
        return qtd_QGraphicsItem_isVisible_const(qtdNativeId);
    }

    public final bool isVisibleTo(IQGraphicsItem parent_) const {
        return qtd_QGraphicsItem_isVisibleTo_QGraphicsItem_const(qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsItem);
    }

    public final bool isWidget() const {
        return qtd_QGraphicsItem_isWidget_const(qtdNativeId);
    }

    public final bool isWindow() const {
        return qtd_QGraphicsItem_isWindow_const(qtdNativeId);
    }

    public final QTransform itemTransform(IQGraphicsItem other, bool* ok = null) const {
        void* ret = qtd_QGraphicsItem_itemTransform_QGraphicsItem_nativepointerbool_const(qtdNativeId, other is null ? null : other.__ptr_IQGraphicsItem, ok);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QPainterPath mapFromItem(IQGraphicsItem item, const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPainterPath_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapFromItem(IQGraphicsItem item, const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPointF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, point);
        return res;
    }

    public final QPolygonF mapFromItem(IQGraphicsItem item, const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPolygonF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapFromItem(IQGraphicsItem item, const(QRectF) rect) const {
        void* ret = qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QRectF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapFromItem(IQGraphicsItem item, double x, double y) const {
        QPointF res;
        qtd_QGraphicsItem_mapFromItem_QGraphicsItem_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y);
        return res;
    }

    public final QPolygonF mapFromItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsItem_mapFromItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapFromParent(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsItem_mapFromParent_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapFromParent(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsItem_mapFromParent_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapFromParent(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsItem_mapFromParent_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapFromParent(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsItem_mapFromParent_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapFromParent(double x, double y) const {
        QPointF res;
        qtd_QGraphicsItem_mapFromParent_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapFromParent(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsItem_mapFromParent_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapFromScene(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsItem_mapFromScene_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapFromScene(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsItem_mapFromScene_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapFromScene(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsItem_mapFromScene_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapFromScene(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsItem_mapFromScene_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapFromScene(double x, double y) const {
        QPointF res;
        qtd_QGraphicsItem_mapFromScene_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapFromScene(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsItem_mapFromScene_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QRectF mapRectFromItem(IQGraphicsItem item, const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectFromItem_QGraphicsItem_QRectF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        return res;
    }

    public final QRectF mapRectFromItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectFromItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        return res;
    }

    public final QRectF mapRectFromParent(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectFromParent_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectFromParent(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectFromParent_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QRectF mapRectFromScene(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectFromScene_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectFromScene(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectFromScene_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QRectF mapRectToItem(IQGraphicsItem item, const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectToItem_QGraphicsItem_QRectF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        return res;
    }

    public final QRectF mapRectToItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectToItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        return res;
    }

    public final QRectF mapRectToParent(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectToParent_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectToParent(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectToParent_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QRectF mapRectToScene(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectToScene_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectToScene(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsItem_mapRectToScene_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QPainterPath mapToItem(IQGraphicsItem item, const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPainterPath_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapToItem(IQGraphicsItem item, const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPointF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, point);
        return res;
    }

    public final QPolygonF mapToItem(IQGraphicsItem item, const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPolygonF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapToItem(IQGraphicsItem item, const(QRectF) rect) const {
        void* ret = qtd_QGraphicsItem_mapToItem_QGraphicsItem_QRectF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapToItem(IQGraphicsItem item, double x, double y) const {
        QPointF res;
        qtd_QGraphicsItem_mapToItem_QGraphicsItem_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y);
        return res;
    }

    public final QPolygonF mapToItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsItem_mapToItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapToParent(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsItem_mapToParent_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapToParent(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsItem_mapToParent_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapToParent(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsItem_mapToParent_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapToParent(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsItem_mapToParent_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapToParent(double x, double y) const {
        QPointF res;
        qtd_QGraphicsItem_mapToParent_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapToParent(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsItem_mapToParent_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapToScene(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsItem_mapToScene_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapToScene(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsItem_mapToScene_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapToScene(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsItem_mapToScene_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapToScene(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsItem_mapToScene_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapToScene(double x, double y) const {
        QPointF res;
        qtd_QGraphicsItem_mapToScene_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapToScene(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsItem_mapToScene_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final void moveBy(double dx, double dy) {
        qtd_QGraphicsItem_moveBy_double_double(qtdNativeId, dx, dy);
    }

    public final double opacity() const {
        return qtd_QGraphicsItem_opacity_const(qtdNativeId);
    }

    public final IQGraphicsItem panel() const {
        void* ret = qtd_QGraphicsItem_panel_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem parentItem() const {
        void* ret = qtd_QGraphicsItem_parentItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsObject parentObject() const {
        void *ret = qtd_QGraphicsItem_parentObject_const(qtdNativeId);
        QGraphicsObject __d_return_value = QGraphicsObject.__getObject(ret);
        return __d_return_value;
    }

    public final QGraphicsWidget parentWidget() const {
        void *ret = qtd_QGraphicsItem_parentWidget_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QPointF pos() const {
        QPointF res;
        qtd_QGraphicsItem_pos_const(qtdNativeId, &res);
        return res;
    }

    public final void prepareGeometryChange() {
        qtd_QGraphicsItem_prepareGeometryChange(qtdNativeId);
    }

    public final void removeFromIndex() {
        qtd_QGraphicsItem_removeFromIndex(qtdNativeId);
    }

    public final void removeSceneEventFilter(IQGraphicsItem filterItem) {
        qtd_QGraphicsItem_removeSceneEventFilter_QGraphicsItem(qtdNativeId, filterItem is null ? null : filterItem.__ptr_IQGraphicsItem);
    }

    public final void resetTransform() {
        qtd_QGraphicsItem_resetTransform(qtdNativeId);
    }

    public final void rotate(double angle) {
        qtd_QGraphicsItem_rotate_double(qtdNativeId, angle);
    }

    public final double rotation() const {
        return qtd_QGraphicsItem_rotation_const(qtdNativeId);
    }

    public final double scale() const {
        return qtd_QGraphicsItem_scale_const(qtdNativeId);
    }

    public final void scale(double sx, double sy) {
        qtd_QGraphicsItem_scale_double_double(qtdNativeId, sx, sy);
    }

    public final QGraphicsScene scene() const {
        void *ret = qtd_QGraphicsItem_scene_const(qtdNativeId);
        QGraphicsScene __d_return_value = QGraphicsScene.__getObject(ret);
        return __d_return_value;
    }

    public final QRectF sceneBoundingRect() const {
        QRectF res;
        qtd_QGraphicsItem_sceneBoundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsItem_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QTransform sceneTransform() const {
        void* ret = qtd_QGraphicsItem_sceneTransform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final void scroll(double dx, double dy, const(QRectF) rect = QRectF()) {
        qtd_QGraphicsItem_scroll_double_double_QRectF(qtdNativeId, dx, dy, rect);
    }

    public final void setAcceptDrops(bool on) {
        qtd_QGraphicsItem_setAcceptDrops_bool(qtdNativeId, on);
    }

    public final void setAcceptHoverEvents(bool enabled) {
        qtd_QGraphicsItem_setAcceptHoverEvents_bool(qtdNativeId, enabled);
    }

    public final void setAcceptTouchEvents(bool enabled) {
        qtd_QGraphicsItem_setAcceptTouchEvents_bool(qtdNativeId, enabled);
    }

    public final void setAcceptedMouseButtons(int buttons) {
        qtd_QGraphicsItem_setAcceptedMouseButtons_MouseButtons(qtdNativeId, buttons);
    }

    public final void setAcceptsHoverEvents(bool enabled) {
        qtd_QGraphicsItem_setAcceptsHoverEvents_bool(qtdNativeId, enabled);
    }

    public final void setActive(bool active) {
        qtd_QGraphicsItem_setActive_bool(qtdNativeId, active);
    }

    public final void setBoundingRegionGranularity(double granularity) {
        qtd_QGraphicsItem_setBoundingRegionGranularity_double(qtdNativeId, granularity);
    }

    public final void setCacheMode(CacheMode mode, const(QSize) cacheSize = QSize()) {
        qtd_QGraphicsItem_setCacheMode_CacheMode_QSize(qtdNativeId, mode, cacheSize);
    }

    public final void setCursor(const(QCursor) cursor) {
        qtd_QGraphicsItem_setCursor_QCursor(qtdNativeId, cursor is null ? null : (cast(QCursor)cursor).qtdNativeId);
    }

    public final void setData(int key, QVariant value) {
        qtd_QGraphicsItem_setData_int_QVariant(qtdNativeId, key, value is null ? null : value.qtdNativeId);
    }

    public final void setEnabled(bool enabled) {
        qtd_QGraphicsItem_setEnabled_bool(qtdNativeId, enabled);
    }

    public final void setFiltersChildEvents(bool enabled) {
        qtd_QGraphicsItem_setFiltersChildEvents_bool(qtdNativeId, enabled);
    }

    public final void setFlag(GraphicsItemFlag flag, bool enabled = true) {
        qtd_QGraphicsItem_setFlag_GraphicsItemFlag_bool(qtdNativeId, flag, enabled);
    }

    public final void setFlags(int flags) {
        qtd_QGraphicsItem_setFlags_GraphicsItemFlags(qtdNativeId, flags);
    }

    public final void setFocus(Qt.FocusReason focusReason = Qt.FocusReason.OtherFocusReason) {
        qtd_QGraphicsItem_setFocus_FocusReason(qtdNativeId, focusReason);
    }

    public final void setFocusProxy(IQGraphicsItem item) {
        qtd_QGraphicsItem_setFocusProxy_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void setGroup(QGraphicsItemGroup group) {
        qtd_QGraphicsItem_setGroup_QGraphicsItemGroup(qtdNativeId, group is null ? null : group.qtdNativeId);
    }

    public final void setHandlesChildEvents(bool enabled) {
        qtd_QGraphicsItem_setHandlesChildEvents_bool(qtdNativeId, enabled);
    }

    public final void setOpacity(double opacity) {
        qtd_QGraphicsItem_setOpacity_double(qtdNativeId, opacity);
    }

    public final void setParentItem(IQGraphicsItem parent_) {
        qtd_QGraphicsItem_setParentItem_QGraphicsItem(qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsItem);
    }

    public final void setPos(const(QPointF) pos) {
        qtd_QGraphicsItem_setPos_QPointF(qtdNativeId, pos);
    }

    public final void setPos(double x, double y) {
        qtd_QGraphicsItem_setPos_double_double(qtdNativeId, x, y);
    }

    public final void setRotation(double angle) {
        qtd_QGraphicsItem_setRotation_double(qtdNativeId, angle);
    }

    public final void setScale(double scale) {
        qtd_QGraphicsItem_setScale_double(qtdNativeId, scale);
    }

    public final void setSelected(bool selected) {
        qtd_QGraphicsItem_setSelected_bool(qtdNativeId, selected);
    }

    public final void setToolTip(string toolTip) {
        qtd_QGraphicsItem_setToolTip_string(qtdNativeId, toolTip);
    }

    public final void setTransform(const(QTransform) matrix, bool combine = false) {
        qtd_QGraphicsItem_setTransform_QTransform_bool(qtdNativeId, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId, combine);
    }

    public final void setTransformOriginPoint(const(QPointF) origin) {
        qtd_QGraphicsItem_setTransformOriginPoint_QPointF(qtdNativeId, origin);
    }

    public final void setTransformOriginPoint(double ax, double ay) {
        qtd_QGraphicsItem_setTransformOriginPoint_double_double(qtdNativeId, ax, ay);
    }

    public final void setVisible(bool visible) {
        qtd_QGraphicsItem_setVisible_bool(qtdNativeId, visible);
    }

    public final void setX(double x) {
        qtd_QGraphicsItem_setX_double(qtdNativeId, x);
    }

    public final void setY(double y) {
        qtd_QGraphicsItem_setY_double(qtdNativeId, y);
    }

    public final void setZValue(double z) {
        qtd_QGraphicsItem_setZValue_double(qtdNativeId, z);
    }

    public final void shear(double sh, double sv) {
        qtd_QGraphicsItem_shear_double_double(qtdNativeId, sh, sv);
    }

    public final void show() {
        qtd_QGraphicsItem_show(qtdNativeId);
    }

    public final void stackBefore(IQGraphicsItem sibling) {
        qtd_QGraphicsItem_stackBefore_QGraphicsItem(qtdNativeId, sibling is null ? null : sibling.__ptr_IQGraphicsItem);
    }

    public final QGraphicsObject toGraphicsObject() {
        void *ret = qtd_QGraphicsItem_toGraphicsObject(qtdNativeId);
        QGraphicsObject __d_return_value = QGraphicsObject.__getObject(ret);
        return __d_return_value;
    }

    public final QGraphicsObject toGraphicsObject() const {
        void *ret = qtd_QGraphicsItem_toGraphicsObject_const(qtdNativeId);
        QGraphicsObject __d_return_value = QGraphicsObject.__getObject(ret);
        return __d_return_value;
    }

    public final string toolTip() const {
        string res;
        qtd_QGraphicsItem_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public final IQGraphicsItem topLevelItem() const {
        void* ret = qtd_QGraphicsItem_topLevelItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsWidget topLevelWidget() const {
        void *ret = qtd_QGraphicsItem_topLevelWidget_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QTransform transform() const {
        void* ret = qtd_QGraphicsItem_transform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QPointF transformOriginPoint() const {
        QPointF res;
        qtd_QGraphicsItem_transformOriginPoint_const(qtdNativeId, &res);
        return res;
    }

    public final void translate(double dx, double dy) {
        qtd_QGraphicsItem_translate_double_double(qtdNativeId, dx, dy);
    }

    public final void ungrabKeyboard() {
        qtd_QGraphicsItem_ungrabKeyboard(qtdNativeId);
    }

    public final void ungrabMouse() {
        qtd_QGraphicsItem_ungrabMouse(qtdNativeId);
    }

    public final void unsetCursor() {
        qtd_QGraphicsItem_unsetCursor(qtdNativeId);
    }

    public final void update(const(QRectF) rect = QRectF()) {
        qtd_QGraphicsItem_update_QRectF(qtdNativeId, rect);
    }

    public final void update(double x, double y, double width, double height) {
        qtd_QGraphicsItem_update_double_double_double_double(qtdNativeId, x, y, width, height);
    }

    public final void updateMicroFocus() {
        qtd_QGraphicsItem_updateMicroFocus(qtdNativeId);
    }

    public final QGraphicsWidget window() const {
        void *ret = qtd_QGraphicsItem_window_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final double x() const {
        return qtd_QGraphicsItem_x_const(qtdNativeId);
    }

    public final double y() const {
        return qtd_QGraphicsItem_y_const(qtdNativeId);
    }

    public final double zValue() const {
        return qtd_QGraphicsItem_zValue_const(qtdNativeId);
    }

    public void advance(int phase) {
        qtd_QGraphicsItem_advance_int(qtdNativeId, phase);
    }

    public abstract QRectF boundingRect() const;

    public bool collidesWithItem(IQGraphicsItem other, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const(qtdNativeId, other is null ? null : other.__ptr_IQGraphicsItem, mode);
    }

    public bool collidesWithPath(const(QPainterPath) path, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, mode);
    }

    public bool contains(const(QPointF) point) const {
        return qtd_QGraphicsItem_contains_QPointF_const(qtdNativeId, point);
    }

    public void contextMenuEvent(QGraphicsSceneContextMenuEvent event) {
        qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragEnterEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragLeaveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragMoveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dropEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant extension(QVariant variant) const {
        void* ret = qtd_QGraphicsItem_extension_QVariant_const(qtdNativeId, variant is null ? null : variant.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public void focusInEvent(QFocusEvent event) {
        qtd_QGraphicsItem_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void focusOutEvent(QFocusEvent event) {
        qtd_QGraphicsItem_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverEnterEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverLeaveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverMoveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void inputMethodEvent(QInputMethodEvent event) {
        qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery query) const {
        void* ret = qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const(qtdNativeId, query);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool isObscuredBy(IQGraphicsItem item) const {
        return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public QVariant itemChange(GraphicsItemChange change, QVariant value) {
        void* ret = qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant(qtdNativeId, change, value is null ? null : value.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public void keyPressEvent(QKeyEvent event) {
        qtd_QGraphicsItem_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void keyReleaseEvent(QKeyEvent event) {
        qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseDoubleClickEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseMoveEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mousePressEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseReleaseEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QPainterPath opaqueArea() const {
        void* ret = qtd_QGraphicsItem_opaqueArea_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public abstract void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null);

    public bool sceneEvent(QEvent event) {
        return qtd_QGraphicsItem_sceneEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool sceneEventFilter(IQGraphicsItem watched, QEvent event) {
        return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent(qtdNativeId, watched is null ? null : watched.__ptr_IQGraphicsItem, event is null ? null : event.qtdNativeId);
    }

    public QPainterPath shape() const {
        void* ret = qtd_QGraphicsItem_shape_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public int type() const {
        return qtd_QGraphicsItem_type_const(qtdNativeId);
    }

    public void wheelEvent(QGraphicsSceneWheelEvent event) {
        qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    static IQGraphicsItem __getObject(void* nativeId) {
        return qtd_QGraphicsItem_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QGraphicsItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQGraphicsItem = qtd_QGraphicsItem_cast_to_QGraphicsItem(nativeId);
    }

    private void* __m_ptr_IQGraphicsItem;
    public void* __ptr_IQGraphicsItem() { return __m_ptr_IQGraphicsItem; }

    protected override void qtdDeleteNative() {
        qtd_QGraphicsItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGraphicsItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGraphicsItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QGraphicsItem_cast_to_QGraphicsItem(void* nativeId);

    public class QGraphicsItem_ConcreteWrapper : QGraphicsItem {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QRectF boundingRect() const {
            QRectF res;
            qtd_QGraphicsItem_boundingRect_const(qtdNativeId, &res);
            return res;
        }

        override         public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null) {
            qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
        }
    }


extern (C) void *__QGraphicsItem_entity(void *q_ptr);

IQGraphicsItem qtd_QGraphicsItem_from_ptr(void* ret) {
    void* d_obj = __QGraphicsItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(IQGraphicsItem) d_obj_ref;
    } else {
        auto return_value = new QGraphicsItem_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGraphicsItem_delete(void *ptr);
extern (C) void qtd_QGraphicsItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsItem_QGraphicsItem_QGraphicsItem_QGraphicsScene(void *d_ptr,
 void* parent0,
 void* scene1);
private extern(C) bool  qtd_QGraphicsItem_acceptDrops_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_acceptHoverEvents_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_acceptTouchEvents_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsItem_acceptedMouseButtons_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_acceptsHoverEvents_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_addToIndex(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_boundingRegion_QTransform_const(void* __this_nativeId,
 void* itemToDeviceTransform0);
private extern(C) double  qtd_QGraphicsItem_boundingRegionGranularity_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsItem_cacheMode_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_childItems_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGraphicsItem_childrenBoundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsItem_clearFocus(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_clipPath_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_collidingItems_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 int mode0);
private extern(C) void*  qtd_QGraphicsItem_commonAncestorItem_QGraphicsItem_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QGraphicsItem_cursor_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_data_int_const(void* __this_nativeId,
 int key0);
private extern(C) void*  qtd_QGraphicsItem_deviceTransform_QTransform_const(void* __this_nativeId,
 void* viewportTransform0);
private extern(C) double  qtd_QGraphicsItem_effectiveOpacity_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_ensureVisible_QRectF_int_int(void* __this_nativeId,
 QRectF rect0,
 int xmargin1,
 int ymargin2);
private extern(C) void  qtd_QGraphicsItem_ensureVisible_double_double_double_double_int_int(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xmargin4,
 int ymargin5);
private extern(C) bool  qtd_QGraphicsItem_filtersChildEvents_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsItem_flags_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_focusItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_focusProxy_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_focusScopeItem_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_grabKeyboard(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_grabMouse(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_group_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_handlesChildEvents_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_hasCursor_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_hasFocus_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_hide(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_installSceneEventFilter_QGraphicsItem(void* __this_nativeId,
 void* filterItem0);
private extern(C) bool  qtd_QGraphicsItem_isActive_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isAncestorOf_QGraphicsItem_const(void* __this_nativeId,
 void* child0);
private extern(C) bool  qtd_QGraphicsItem_isClipped_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isObscured_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isObscured_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) bool  qtd_QGraphicsItem_isObscured_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) bool  qtd_QGraphicsItem_isPanel_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isSelected_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isUnderMouse_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isVisible_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isVisibleTo_QGraphicsItem_const(void* __this_nativeId,
 void* parent0);
private extern(C) bool  qtd_QGraphicsItem_isWidget_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsItem_isWindow_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_itemTransform_QGraphicsItem_nativepointerbool_const(void* __this_nativeId,
 void* other0,
 bool* ok1);
private extern(C) void*  qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPainterPath_const(void* __this_nativeId,
 void* item0,
 void* path1);
private extern(C) void  qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1);
private extern(C) void*  qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPolygonF_const(void* __this_nativeId,
 void* item0,
 void* polygon1);
private extern(C) void*  qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsItem_mapFromItem_QGraphicsItem_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2);
private extern(C) void*  qtd_QGraphicsItem_mapFromItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void*  qtd_QGraphicsItem_mapFromParent_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsItem_mapFromParent_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsItem_mapFromParent_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsItem_mapFromParent_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapFromParent_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsItem_mapFromParent_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void*  qtd_QGraphicsItem_mapFromScene_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsItem_mapFromScene_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsItem_mapFromScene_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsItem_mapFromScene_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapFromScene_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsItem_mapFromScene_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsItem_mapRectFromItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsItem_mapRectFromItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void  qtd_QGraphicsItem_mapRectFromParent_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapRectFromParent_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsItem_mapRectFromScene_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapRectFromScene_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsItem_mapRectToItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsItem_mapRectToItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void  qtd_QGraphicsItem_mapRectToParent_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapRectToParent_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsItem_mapRectToScene_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapRectToScene_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void*  qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPainterPath_const(void* __this_nativeId,
 void* item0,
 void* path1);
private extern(C) void  qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1);
private extern(C) void*  qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPolygonF_const(void* __this_nativeId,
 void* item0,
 void* polygon1);
private extern(C) void*  qtd_QGraphicsItem_mapToItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsItem_mapToItem_QGraphicsItem_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2);
private extern(C) void*  qtd_QGraphicsItem_mapToItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void*  qtd_QGraphicsItem_mapToParent_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsItem_mapToParent_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsItem_mapToParent_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsItem_mapToParent_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapToParent_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsItem_mapToParent_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void*  qtd_QGraphicsItem_mapToScene_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsItem_mapToScene_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsItem_mapToScene_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsItem_mapToScene_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_mapToScene_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsItem_mapToScene_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsItem_moveBy_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) double  qtd_QGraphicsItem_opacity_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_panel_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_parentItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_parentObject_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_parentWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_pos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsItem_prepareGeometryChange(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_removeFromIndex(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_removeSceneEventFilter_QGraphicsItem(void* __this_nativeId,
 void* filterItem0);
private extern(C) void  qtd_QGraphicsItem_resetTransform(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_rotate_double(void* __this_nativeId,
 double angle0);
private extern(C) double  qtd_QGraphicsItem_rotation_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsItem_scale_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_scale_double_double(void* __this_nativeId,
 double sx0,
 double sy1);
private extern(C) void*  qtd_QGraphicsItem_scene_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_sceneBoundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsItem_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void*  qtd_QGraphicsItem_sceneTransform_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_scroll_double_double_QRectF(void* __this_nativeId,
 double dx0,
 double dy1,
 QRectF rect2);
private extern(C) void  qtd_QGraphicsItem_setAcceptDrops_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QGraphicsItem_setAcceptHoverEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsItem_setAcceptTouchEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsItem_setAcceptedMouseButtons_MouseButtons(void* __this_nativeId,
 int buttons0);
private extern(C) void  qtd_QGraphicsItem_setAcceptsHoverEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsItem_setActive_bool(void* __this_nativeId,
 bool active0);
private extern(C) void  qtd_QGraphicsItem_setBoundingRegionGranularity_double(void* __this_nativeId,
 double granularity0);
private extern(C) void  qtd_QGraphicsItem_setCacheMode_CacheMode_QSize(void* __this_nativeId,
 int mode0,
 QSize cacheSize1);
private extern(C) void  qtd_QGraphicsItem_setCursor_QCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void  qtd_QGraphicsItem_setData_int_QVariant(void* __this_nativeId,
 int key0,
 void* value1);
private extern(C) void  qtd_QGraphicsItem_setEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsItem_setFiltersChildEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsItem_setFlag_GraphicsItemFlag_bool(void* __this_nativeId,
 int flag0,
 bool enabled1);
private extern(C) void  qtd_QGraphicsItem_setFlags_GraphicsItemFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QGraphicsItem_setFocus_FocusReason(void* __this_nativeId,
 int focusReason0);
private extern(C) void  qtd_QGraphicsItem_setFocusProxy_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsItem_setGroup_QGraphicsItemGroup(void* __this_nativeId,
 void* group0);
private extern(C) void  qtd_QGraphicsItem_setHandlesChildEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsItem_setOpacity_double(void* __this_nativeId,
 double opacity0);
private extern(C) void  qtd_QGraphicsItem_setParentItem_QGraphicsItem(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QGraphicsItem_setPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsItem_setPos_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void  qtd_QGraphicsItem_setRotation_double(void* __this_nativeId,
 double angle0);
private extern(C) void  qtd_QGraphicsItem_setScale_double(void* __this_nativeId,
 double scale0);
private extern(C) void  qtd_QGraphicsItem_setSelected_bool(void* __this_nativeId,
 bool selected0);
private extern(C) void  qtd_QGraphicsItem_setToolTip_string(void* __this_nativeId,
 string toolTip0);
private extern(C) void  qtd_QGraphicsItem_setTransform_QTransform_bool(void* __this_nativeId,
 void* matrix0,
 bool combine1);
private extern(C) void  qtd_QGraphicsItem_setTransformOriginPoint_QPointF(void* __this_nativeId,
 QPointF origin0);
private extern(C) void  qtd_QGraphicsItem_setTransformOriginPoint_double_double(void* __this_nativeId,
 double ax0,
 double ay1);
private extern(C) void  qtd_QGraphicsItem_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QGraphicsItem_setX_double(void* __this_nativeId,
 double x0);
private extern(C) void  qtd_QGraphicsItem_setY_double(void* __this_nativeId,
 double y0);
private extern(C) void  qtd_QGraphicsItem_setZValue_double(void* __this_nativeId,
 double z0);
private extern(C) void  qtd_QGraphicsItem_shear_double_double(void* __this_nativeId,
 double sh0,
 double sv1);
private extern(C) void  qtd_QGraphicsItem_show(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_stackBefore_QGraphicsItem(void* __this_nativeId,
 void* sibling0);
private extern(C) void*  qtd_QGraphicsItem_toGraphicsObject(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_toGraphicsObject_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QGraphicsItem_topLevelItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_topLevelWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_transform_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_transformOriginPoint_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsItem_translate_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void  qtd_QGraphicsItem_ungrabKeyboard(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_ungrabMouse(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_unsetCursor(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_update_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsItem_update_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double width2,
 double height3);
private extern(C) void  qtd_QGraphicsItem_updateMicroFocus(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsItem_window_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsItem_x_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsItem_y_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsItem_zValue_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_advance_int(void* __this_nativeId,
 int phase0);
private extern(C) void  qtd_QGraphicsItem_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) bool  qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const(void* __this_nativeId,
 void* other0,
 int mode1);
private extern(C) bool  qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const(void* __this_nativeId,
 void* path0,
 int mode1);
private extern(C) bool  qtd_QGraphicsItem_contains_QPointF_const(void* __this_nativeId,
 QPointF point0);
private extern(C) void  qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsItem_extension_QVariant_const(void* __this_nativeId,
 void* variant0);
private extern(C) void  qtd_QGraphicsItem_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int query0);
private extern(C) bool  qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant(void* __this_nativeId,
 int change0,
 void* value1);
private extern(C) void  qtd_QGraphicsItem_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsItem_opaqueArea_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) bool  qtd_QGraphicsItem_sceneEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent(void* __this_nativeId,
 void* watched0,
 void* event1);
private extern(C) void*  qtd_QGraphicsItem_shape_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsItem_type_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int phase0) qtd_QGraphicsItem_advance_int_dispatch; }
extern(C) void qtd_export_QGraphicsItem_advance_int_dispatch(void *dId, int phase0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    d_object.advance(phase0);
}

extern(C){ extern void function(void *dId, QRectF *__d_return_value) qtd_QGraphicsItem_boundingRect_const_dispatch; }
extern(C) void qtd_export_QGraphicsItem_boundingRect_const_dispatch(void *dId, QRectF *__d_return_value){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    *__d_return_value = d_object.boundingRect();
}

extern(C){ extern bool function(void *dId, void* other0, int mode1) qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch; }
extern(C) bool qtd_export_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(void *dId, void* other0, int mode1){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope other0_d_ref = new QGraphicsItem_ConcreteWrapper(other0, QtdObjectInitFlags.onStack);
    auto mode1_enum = cast(Qt.ItemSelectionMode) mode1;
    auto return_value = d_object.collidesWithItem(other0_d_ref, mode1_enum);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* path0, int mode1) qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch; }
extern(C) bool qtd_export_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(void *dId, void* path0, int mode1){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope path0_d_ref = new QPainterPath(path0, QtdObjectInitFlags.onStack);
    auto mode1_enum = cast(Qt.ItemSelectionMode) mode1;
    auto return_value = d_object.collidesWithPath(path0_d_ref, mode1_enum);
    return return_value;
}

extern(C){ extern bool function(void *dId, QPointF* point0) qtd_QGraphicsItem_contains_QPointF_const_dispatch; }
extern(C) bool qtd_export_QGraphicsItem_contains_QPointF_const_dispatch(void *dId, QPointF* point0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    auto return_value = d_object.contains(*point0);
    return return_value;
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneContextMenuEvent(event0, QtdObjectInitFlags.onStack);
    d_object.contextMenuEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dragEnterEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dragLeaveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dragMoveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneDragDropEvent(event0, QtdObjectInitFlags.onStack);
    d_object.dropEvent(event0_d_ref);
}

extern(C){ extern void* function(void *dId, void* variant0) qtd_QGraphicsItem_extension_QVariant_const_dispatch; }
extern(C) void* qtd_export_QGraphicsItem_extension_QVariant_const_dispatch(void *dId, void* variant0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope variant0_d_ref = new QVariant(variant0, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.extension(variant0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QFocusEvent(event0, QtdObjectInitFlags.onStack);
    d_object.focusInEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QFocusEvent(event0, QtdObjectInitFlags.onStack);
    d_object.focusOutEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneHoverEvent(event0, QtdObjectInitFlags.onStack);
    d_object.hoverEnterEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneHoverEvent(event0, QtdObjectInitFlags.onStack);
    d_object.hoverLeaveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneHoverEvent(event0, QtdObjectInitFlags.onStack);
    d_object.hoverMoveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QInputMethodEvent(event0, QtdObjectInitFlags.onStack);
    d_object.inputMethodEvent(event0_d_ref);
}

extern(C){ extern void* function(void *dId, int query0) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch; }
extern(C) void* qtd_export_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(void *dId, int query0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    auto query0_enum = cast(Qt.InputMethodQuery) query0;
    QVariant ret_value = d_object.inputMethodQuery(query0_enum);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* item0) qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch; }
extern(C) bool qtd_export_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(void *dId, void* item0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope item0_d_ref = new QGraphicsItem_ConcreteWrapper(item0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.isObscuredBy(item0_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId, int change0, void* value1) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch; }
extern(C) void* qtd_export_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(void *dId, int change0, void* value1){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    auto change0_enum = cast(QGraphicsItem.GraphicsItemChange) change0;
    scope value1_d_ref = new QVariant(value1, QtdObjectInitFlags.onStack);
    QVariant ret_value = d_object.itemChange(change0_enum, value1_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QKeyEvent(event0, QtdObjectInitFlags.onStack);
    d_object.keyPressEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QKeyEvent(event0, QtdObjectInitFlags.onStack);
    d_object.keyReleaseEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mouseDoubleClickEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mouseMoveEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mousePressEvent(event0_d_ref);
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneMouseEvent(event0, QtdObjectInitFlags.onStack);
    d_object.mouseReleaseEvent(event0_d_ref);
}

extern(C){ extern void* function(void *dId) qtd_QGraphicsItem_opaqueArea_const_dispatch; }
extern(C) void* qtd_export_QGraphicsItem_opaqueArea_const_dispatch(void *dId){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    QPainterPath ret_value = d_object.opaqueArea();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* painter0, void* option1, void* widget2) qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch; }
extern(C) void qtd_export_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(void *dId, void* painter0, void* option1, void* widget2){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope option1_d_ref = new QStyleOptionGraphicsItem(option1, QtdObjectInitFlags.onStack);
    scope widget2_d_ref = new QWidget(widget2, QtdObjectInitFlags.onStack);

    d_object.paint(painter0_d_ref, option1_d_ref, widget2_d_ref);
}

extern(C){ extern bool function(void *dId, void* event0) qtd_QGraphicsItem_sceneEvent_QEvent_dispatch; }
extern(C) bool qtd_export_QGraphicsItem_sceneEvent_QEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QEvent(event0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.sceneEvent(event0_d_ref);
    return return_value;
}

extern(C){ extern bool function(void *dId, void* watched0, void* event1) qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch; }
extern(C) bool qtd_export_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(void *dId, void* watched0, void* event1){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope watched0_d_ref = new QGraphicsItem_ConcreteWrapper(watched0, QtdObjectInitFlags.onStack);
    scope event1_d_ref = new QEvent(event1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.sceneEventFilter(watched0_d_ref, event1_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId) qtd_QGraphicsItem_shape_const_dispatch; }
extern(C) void* qtd_export_QGraphicsItem_shape_const_dispatch(void *dId){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    QPainterPath ret_value = d_object.shape();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern int function(void *dId) qtd_QGraphicsItem_type_const_dispatch; }
extern(C) int qtd_export_QGraphicsItem_type_const_dispatch(void *dId){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    auto return_value = d_object.type();
    return return_value;
}

extern(C){ extern void function(void *dId, void* event0) qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch; }
extern(C) void qtd_export_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(void *dId, void* event0){
    auto d_object = cast(IQGraphicsItem)cast(Object) dId;
    scope event0_d_ref = new QGraphicsSceneWheelEvent(event0, QtdObjectInitFlags.onStack);
    d_object.wheelEvent(event0_d_ref);
}

private extern (C) void qtd_QGraphicsItem_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsItem() {
    void*[33] virt_arr;
    virt_arr[0] = &qtd_export_QGraphicsItem_advance_int_dispatch;
    virt_arr[1] = &qtd_export_QGraphicsItem_boundingRect_const_dispatch;
    virt_arr[2] = &qtd_export_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch;
    virt_arr[3] = &qtd_export_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch;
    virt_arr[4] = &qtd_export_QGraphicsItem_contains_QPointF_const_dispatch;
    virt_arr[5] = &qtd_export_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch;
    virt_arr[6] = &qtd_export_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[7] = &qtd_export_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[8] = &qtd_export_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[9] = &qtd_export_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch;
    virt_arr[10] = &qtd_export_QGraphicsItem_extension_QVariant_const_dispatch;
    virt_arr[11] = &qtd_export_QGraphicsItem_focusInEvent_QFocusEvent_dispatch;
    virt_arr[12] = &qtd_export_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch;
    virt_arr[13] = &qtd_export_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch;
    virt_arr[14] = &qtd_export_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch;
    virt_arr[15] = &qtd_export_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch;
    virt_arr[16] = &qtd_export_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch;
    virt_arr[17] = &qtd_export_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch;
    virt_arr[18] = &qtd_export_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch;
    virt_arr[19] = &qtd_export_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch;
    virt_arr[20] = &qtd_export_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch;
    virt_arr[21] = &qtd_export_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch;
    virt_arr[22] = &qtd_export_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[23] = &qtd_export_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[24] = &qtd_export_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[25] = &qtd_export_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch;
    virt_arr[26] = &qtd_export_QGraphicsItem_opaqueArea_const_dispatch;
    virt_arr[27] = &qtd_export_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch;
    virt_arr[28] = &qtd_export_QGraphicsItem_sceneEvent_QEvent_dispatch;
    virt_arr[29] = &qtd_export_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch;
    virt_arr[30] = &qtd_export_QGraphicsItem_shape_const_dispatch;
    virt_arr[31] = &qtd_export_QGraphicsItem_type_const_dispatch;
    virt_arr[32] = &qtd_export_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch;
    qtd_QGraphicsItem_initCallBacks(virt_arr.ptr);
}

// signal handlers

public interface IQGraphicsItem
{
        public enum CacheMode {
            NoCache = 0,
            ItemCoordinateCache = 1,
            DeviceCoordinateCache = 2
        }

        alias CacheMode.NoCache NoCache;
        alias CacheMode.ItemCoordinateCache ItemCoordinateCache;
        alias CacheMode.DeviceCoordinateCache DeviceCoordinateCache;

        public enum enum_1 {
            Type = 1,
            UserType = 65536
        }

        alias enum_1.Type Type;
        alias enum_1.UserType UserType;

        public enum GraphicsItemFlag {
            ItemIsMovable = 1,
            ItemIsSelectable = 2,
            ItemIsFocusable = 4,
            ItemClipsToShape = 8,
            ItemClipsChildrenToShape = 16,
            ItemIgnoresTransformations = 32,
            ItemIgnoresParentOpacity = 64,
            ItemDoesntPropagateOpacityToChildren = 128,
            ItemStacksBehindParent = 256,
            ItemUsesExtendedStyleOption = 512,
            ItemHasNoContents = 1024,
            ItemSendsGeometryChanges = 2048,
            ItemAcceptsInputMethod = 4096,
            ItemNegativeZStacksBehindParent = 8192,
            ItemIsPanel = 16384,
            ItemIsFocusScope = 32768,
            ItemSendsScenePositionChanges = 65536,
            ItemStopsClickFocusPropagation = 131072
        }

        alias GraphicsItemFlag.ItemIsMovable ItemIsMovable;
        alias GraphicsItemFlag.ItemIsSelectable ItemIsSelectable;
        alias GraphicsItemFlag.ItemIsFocusable ItemIsFocusable;
        alias GraphicsItemFlag.ItemClipsToShape ItemClipsToShape;
        alias GraphicsItemFlag.ItemClipsChildrenToShape ItemClipsChildrenToShape;
        alias GraphicsItemFlag.ItemIgnoresTransformations ItemIgnoresTransformations;
        alias GraphicsItemFlag.ItemIgnoresParentOpacity ItemIgnoresParentOpacity;
        alias GraphicsItemFlag.ItemDoesntPropagateOpacityToChildren ItemDoesntPropagateOpacityToChildren;
        alias GraphicsItemFlag.ItemStacksBehindParent ItemStacksBehindParent;
        alias GraphicsItemFlag.ItemUsesExtendedStyleOption ItemUsesExtendedStyleOption;
        alias GraphicsItemFlag.ItemHasNoContents ItemHasNoContents;
        alias GraphicsItemFlag.ItemSendsGeometryChanges ItemSendsGeometryChanges;
        alias GraphicsItemFlag.ItemAcceptsInputMethod ItemAcceptsInputMethod;
        alias GraphicsItemFlag.ItemNegativeZStacksBehindParent ItemNegativeZStacksBehindParent;
        alias GraphicsItemFlag.ItemIsPanel ItemIsPanel;
        alias GraphicsItemFlag.ItemIsFocusScope ItemIsFocusScope;
        alias GraphicsItemFlag.ItemSendsScenePositionChanges ItemSendsScenePositionChanges;
        alias GraphicsItemFlag.ItemStopsClickFocusPropagation ItemStopsClickFocusPropagation;

        public enum GraphicsItemChange {
            ItemPositionChange = 0,
            ItemMatrixChange = 1,
            ItemVisibleChange = 2,
            ItemEnabledChange = 3,
            ItemSelectedChange = 4,
            ItemParentChange = 5,
            ItemChildAddedChange = 6,
            ItemChildRemovedChange = 7,
            ItemTransformChange = 8,
            ItemPositionHasChanged = 9,
            ItemTransformHasChanged = 10,
            ItemSceneChange = 11,
            ItemVisibleHasChanged = 12,
            ItemEnabledHasChanged = 13,
            ItemSelectedHasChanged = 14,
            ItemParentHasChanged = 15,
            ItemSceneHasChanged = 16,
            ItemCursorChange = 17,
            ItemCursorHasChanged = 18,
            ItemToolTipChange = 19,
            ItemToolTipHasChanged = 20,
            ItemFlagsChange = 21,
            ItemFlagsHaveChanged = 22,
            ItemZValueChange = 23,
            ItemZValueHasChanged = 24,
            ItemOpacityChange = 25,
            ItemOpacityHasChanged = 26,
            ItemScenePositionHasChanged = 27,
            ItemRotationChange = 28,
            ItemRotationHasChanged = 29,
            ItemScaleChange = 30,
            ItemScaleHasChanged = 31,
            ItemTransformOriginPointChange = 32,
            ItemTransformOriginPointHasChanged = 33
        }

        alias GraphicsItemChange.ItemPositionChange ItemPositionChange;
        alias GraphicsItemChange.ItemMatrixChange ItemMatrixChange;
        alias GraphicsItemChange.ItemVisibleChange ItemVisibleChange;
        alias GraphicsItemChange.ItemEnabledChange ItemEnabledChange;
        alias GraphicsItemChange.ItemSelectedChange ItemSelectedChange;
        alias GraphicsItemChange.ItemParentChange ItemParentChange;
        alias GraphicsItemChange.ItemChildAddedChange ItemChildAddedChange;
        alias GraphicsItemChange.ItemChildRemovedChange ItemChildRemovedChange;
        alias GraphicsItemChange.ItemTransformChange ItemTransformChange;
        alias GraphicsItemChange.ItemPositionHasChanged ItemPositionHasChanged;
        alias GraphicsItemChange.ItemTransformHasChanged ItemTransformHasChanged;
        alias GraphicsItemChange.ItemSceneChange ItemSceneChange;
        alias GraphicsItemChange.ItemVisibleHasChanged ItemVisibleHasChanged;
        alias GraphicsItemChange.ItemEnabledHasChanged ItemEnabledHasChanged;
        alias GraphicsItemChange.ItemSelectedHasChanged ItemSelectedHasChanged;
        alias GraphicsItemChange.ItemParentHasChanged ItemParentHasChanged;
        alias GraphicsItemChange.ItemSceneHasChanged ItemSceneHasChanged;
        alias GraphicsItemChange.ItemCursorChange ItemCursorChange;
        alias GraphicsItemChange.ItemCursorHasChanged ItemCursorHasChanged;
        alias GraphicsItemChange.ItemToolTipChange ItemToolTipChange;
        alias GraphicsItemChange.ItemToolTipHasChanged ItemToolTipHasChanged;
        alias GraphicsItemChange.ItemFlagsChange ItemFlagsChange;
        alias GraphicsItemChange.ItemFlagsHaveChanged ItemFlagsHaveChanged;
        alias GraphicsItemChange.ItemZValueChange ItemZValueChange;
        alias GraphicsItemChange.ItemZValueHasChanged ItemZValueHasChanged;
        alias GraphicsItemChange.ItemOpacityChange ItemOpacityChange;
        alias GraphicsItemChange.ItemOpacityHasChanged ItemOpacityHasChanged;
        alias GraphicsItemChange.ItemScenePositionHasChanged ItemScenePositionHasChanged;
        alias GraphicsItemChange.ItemRotationChange ItemRotationChange;
        alias GraphicsItemChange.ItemRotationHasChanged ItemRotationHasChanged;
        alias GraphicsItemChange.ItemScaleChange ItemScaleChange;
        alias GraphicsItemChange.ItemScaleHasChanged ItemScaleHasChanged;
        alias GraphicsItemChange.ItemTransformOriginPointChange ItemTransformOriginPointChange;
        alias GraphicsItemChange.ItemTransformOriginPointHasChanged ItemTransformOriginPointHasChanged;

        public enum Extension {
            UserExtension = -2147483648
        }

        alias Extension.UserExtension UserExtension;

// Functions

        public bool acceptDrops() const;

        public bool acceptHoverEvents() const;

        public bool acceptTouchEvents() const;

        public int acceptedMouseButtons() const;

        public bool acceptsHoverEvents() const;

        public void addToIndex();

        public QRegion boundingRegion(const(QTransform) itemToDeviceTransform) const;

        public double boundingRegionGranularity() const;

        public CacheMode cacheMode() const;

        public QList!(IQGraphicsItem) childItems() const;

        public QRectF childrenBoundingRect() const;

        public void clearFocus();

        public QPainterPath clipPath() const;

        public QList!(IQGraphicsItem) collidingItems(Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const;

        public IQGraphicsItem commonAncestorItem(IQGraphicsItem other) const;

        public QCursor cursor() const;

        public QVariant data(int key) const;

        public QTransform deviceTransform(const(QTransform) viewportTransform) const;

        public double effectiveOpacity() const;

        public void ensureVisible(const(QRectF) rect = QRectF(), int xmargin = 50, int ymargin = 50);

        public void ensureVisible(double x, double y, double w, double h, int xmargin = 50, int ymargin = 50);

        public bool filtersChildEvents() const;

        public int flags() const;

        public IQGraphicsItem focusItem() const;

        public IQGraphicsItem focusProxy() const;

        public IQGraphicsItem focusScopeItem() const;

        public void grabKeyboard();

        public void grabMouse();

        public QGraphicsItemGroup group() const;

        public bool handlesChildEvents() const;

        public bool hasCursor() const;

        public bool hasFocus() const;

        public void hide();

        public void installSceneEventFilter(IQGraphicsItem filterItem);

        public bool isActive() const;

        public bool isAncestorOf(IQGraphicsItem child) const;

        public bool isClipped() const;

        public bool isEnabled() const;

        public bool isObscured() const;

        public bool isObscured(const(QRectF) rect) const;

        public bool isObscured(double x, double y, double w, double h) const;

        public bool isPanel() const;

        public bool isSelected() const;

        public bool isUnderMouse() const;

        public bool isVisible() const;

        public bool isVisibleTo(IQGraphicsItem parent_) const;

        public bool isWidget() const;

        public bool isWindow() const;

        public QTransform itemTransform(IQGraphicsItem other, bool* ok = null) const;

        public QPainterPath mapFromItem(IQGraphicsItem item, const(QPainterPath) path) const;

        public QPointF mapFromItem(IQGraphicsItem item, const(QPointF) point) const;

        public QPolygonF mapFromItem(IQGraphicsItem item, const(QPolygonF) polygon) const;

        public QPolygonF mapFromItem(IQGraphicsItem item, const(QRectF) rect) const;

        public QPointF mapFromItem(IQGraphicsItem item, double x, double y) const;

        public QPolygonF mapFromItem(IQGraphicsItem item, double x, double y, double w, double h) const;

        public QPainterPath mapFromParent(const(QPainterPath) path) const;

        public QPointF mapFromParent(const(QPointF) point) const;

        public QPolygonF mapFromParent(const(QPolygonF) polygon) const;

        public QPolygonF mapFromParent(const(QRectF) rect) const;

        public QPointF mapFromParent(double x, double y) const;

        public QPolygonF mapFromParent(double x, double y, double w, double h) const;

        public QPainterPath mapFromScene(const(QPainterPath) path) const;

        public QPointF mapFromScene(const(QPointF) point) const;

        public QPolygonF mapFromScene(const(QPolygonF) polygon) const;

        public QPolygonF mapFromScene(const(QRectF) rect) const;

        public QPointF mapFromScene(double x, double y) const;

        public QPolygonF mapFromScene(double x, double y, double w, double h) const;

        public QRectF mapRectFromItem(IQGraphicsItem item, const(QRectF) rect) const;

        public QRectF mapRectFromItem(IQGraphicsItem item, double x, double y, double w, double h) const;

        public QRectF mapRectFromParent(const(QRectF) rect) const;

        public QRectF mapRectFromParent(double x, double y, double w, double h) const;

        public QRectF mapRectFromScene(const(QRectF) rect) const;

        public QRectF mapRectFromScene(double x, double y, double w, double h) const;

        public QRectF mapRectToItem(IQGraphicsItem item, const(QRectF) rect) const;

        public QRectF mapRectToItem(IQGraphicsItem item, double x, double y, double w, double h) const;

        public QRectF mapRectToParent(const(QRectF) rect) const;

        public QRectF mapRectToParent(double x, double y, double w, double h) const;

        public QRectF mapRectToScene(const(QRectF) rect) const;

        public QRectF mapRectToScene(double x, double y, double w, double h) const;

        public QPainterPath mapToItem(IQGraphicsItem item, const(QPainterPath) path) const;

        public QPointF mapToItem(IQGraphicsItem item, const(QPointF) point) const;

        public QPolygonF mapToItem(IQGraphicsItem item, const(QPolygonF) polygon) const;

        public QPolygonF mapToItem(IQGraphicsItem item, const(QRectF) rect) const;

        public QPointF mapToItem(IQGraphicsItem item, double x, double y) const;

        public QPolygonF mapToItem(IQGraphicsItem item, double x, double y, double w, double h) const;

        public QPainterPath mapToParent(const(QPainterPath) path) const;

        public QPointF mapToParent(const(QPointF) point) const;

        public QPolygonF mapToParent(const(QPolygonF) polygon) const;

        public QPolygonF mapToParent(const(QRectF) rect) const;

        public QPointF mapToParent(double x, double y) const;

        public QPolygonF mapToParent(double x, double y, double w, double h) const;

        public QPainterPath mapToScene(const(QPainterPath) path) const;

        public QPointF mapToScene(const(QPointF) point) const;

        public QPolygonF mapToScene(const(QPolygonF) polygon) const;

        public QPolygonF mapToScene(const(QRectF) rect) const;

        public QPointF mapToScene(double x, double y) const;

        public QPolygonF mapToScene(double x, double y, double w, double h) const;

        public void moveBy(double dx, double dy);

        public double opacity() const;

        public IQGraphicsItem panel() const;

        public IQGraphicsItem parentItem() const;

        public QGraphicsObject parentObject() const;

        public QGraphicsWidget parentWidget() const;

        public QPointF pos() const;

        public void prepareGeometryChange();

        public void removeFromIndex();

        public void removeSceneEventFilter(IQGraphicsItem filterItem);

        public void resetTransform();

        public void rotate(double angle);

        public double rotation() const;

        public double scale() const;

        public void scale(double sx, double sy);

        public QGraphicsScene scene() const;

        public QRectF sceneBoundingRect() const;

        public QPointF scenePos() const;

        public QTransform sceneTransform() const;

        public void scroll(double dx, double dy, const(QRectF) rect = QRectF());

        public void setAcceptDrops(bool on);

        public void setAcceptHoverEvents(bool enabled);

        public void setAcceptTouchEvents(bool enabled);

        public void setAcceptedMouseButtons(int buttons);

        public void setAcceptsHoverEvents(bool enabled);

        public void setActive(bool active);

        public void setBoundingRegionGranularity(double granularity);

        public void setCacheMode(CacheMode mode, const(QSize) cacheSize = QSize());

        public void setCursor(const(QCursor) cursor);

        public void setData(int key, QVariant value);

        public void setEnabled(bool enabled);

        public void setFiltersChildEvents(bool enabled);

        public void setFlag(GraphicsItemFlag flag, bool enabled = true);

        public void setFlags(int flags);

        public void setFocus(Qt.FocusReason focusReason = Qt.FocusReason.OtherFocusReason);

        public void setFocusProxy(IQGraphicsItem item);

        public void setGroup(QGraphicsItemGroup group);

        public void setHandlesChildEvents(bool enabled);

        public void setOpacity(double opacity);

        public void setParentItem(IQGraphicsItem parent_);

        public void setPos(const(QPointF) pos);

        public void setPos(double x, double y);

        public void setRotation(double angle);

        public void setScale(double scale);

        public void setSelected(bool selected);

        public void setToolTip(string toolTip);

        public void setTransform(const(QTransform) matrix, bool combine = false);

        public void setTransformOriginPoint(const(QPointF) origin);

        public void setTransformOriginPoint(double ax, double ay);

        public void setVisible(bool visible);

        public void setX(double x);

        public void setY(double y);

        public void setZValue(double z);

        public void shear(double sh, double sv);

        public void show();

        public void stackBefore(IQGraphicsItem sibling);

        public QGraphicsObject toGraphicsObject();

        public QGraphicsObject toGraphicsObject() const;

        public string toolTip() const;

        public IQGraphicsItem topLevelItem() const;

        public QGraphicsWidget topLevelWidget() const;

        public QTransform transform() const;

        public QPointF transformOriginPoint() const;

        public void translate(double dx, double dy);

        public void ungrabKeyboard();

        public void ungrabMouse();

        public void unsetCursor();

        public void update(const(QRectF) rect = QRectF());

        public void update(double x, double y, double width, double height);

        public void updateMicroFocus();

        public QGraphicsWidget window() const;

        public double x() const;

        public double y() const;

        public double zValue() const;

        public void advance(int phase);

        public QRectF boundingRect() const;

        public bool collidesWithItem(IQGraphicsItem other, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const;

        public bool collidesWithPath(const(QPainterPath) path, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const;

        public bool contains(const(QPointF) point) const;

        public void contextMenuEvent(QGraphicsSceneContextMenuEvent event);

        public void dragEnterEvent(QGraphicsSceneDragDropEvent event);

        public void dragLeaveEvent(QGraphicsSceneDragDropEvent event);

        public void dragMoveEvent(QGraphicsSceneDragDropEvent event);

        public void dropEvent(QGraphicsSceneDragDropEvent event);

        public QVariant extension(QVariant variant) const;

        public void focusInEvent(QFocusEvent event);

        public void focusOutEvent(QFocusEvent event);

        public void hoverEnterEvent(QGraphicsSceneHoverEvent event);

        public void hoverLeaveEvent(QGraphicsSceneHoverEvent event);

        public void hoverMoveEvent(QGraphicsSceneHoverEvent event);

        public void inputMethodEvent(QInputMethodEvent event);

        public QVariant inputMethodQuery(Qt.InputMethodQuery query) const;

        public bool isObscuredBy(IQGraphicsItem item) const;

        public QVariant itemChange(GraphicsItemChange change, QVariant value);

        public void keyPressEvent(QKeyEvent event);

        public void keyReleaseEvent(QKeyEvent event);

        public void mouseDoubleClickEvent(QGraphicsSceneMouseEvent event);

        public void mouseMoveEvent(QGraphicsSceneMouseEvent event);

        public void mousePressEvent(QGraphicsSceneMouseEvent event);

        public void mouseReleaseEvent(QGraphicsSceneMouseEvent event);

        public QPainterPath opaqueArea() const;

        public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null);

        public bool sceneEvent(QEvent event);

        public bool sceneEventFilter(IQGraphicsItem watched, QEvent event);

        public QPainterPath shape() const;

        public int type() const;

        public void wheelEvent(QGraphicsSceneWheelEvent event);

        public void* __ptr_IQGraphicsItem();

// Field accessors
        public alias void __isQtType_IQGraphicsItem;

        void qtdSetOwnership(QtdObjectOwnership own) const;// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

