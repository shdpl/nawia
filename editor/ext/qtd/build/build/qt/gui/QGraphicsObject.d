module qt.gui.QGraphicsObject;

public import qt.gui.QGraphicsObject_aux;
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
public import qt.gui.QGraphicsItem;
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
public import qt.gui.QRegion;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.gui.QGraphicsSceneHoverEvent;
public import qt.core.QPointF;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QGraphicsWidget;
public import qt.core.QTimerEvent;
public import qt.gui.QStyleOptionGraphicsItem;
public import qt.gui.QGraphicsItem;
public import qt.gui.QCursor;
public import qt.gui.QGraphicsScene;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QGraphicsObject : QObject, IQGraphicsItem
{

    private static const string[] __signalSignatures = [
            "childrenChanged()", 
            "enabledChanged()", 
            "heightChanged()", 
            "opacityChanged()", 
            "parentChanged()", 
            "rotationChanged()", 
            "scaleChanged()", 
            "visibleChanged()", 
            "widthChanged()", 
            "xChanged()", 
            "yChanged()", 
            "zChanged()"    ];

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

    protected final void childrenChanged() {
        qtd_QGraphicsObject_childrenChanged(qtdNativeId);
    }

    protected final void enabledChanged() {
        qtd_QGraphicsObject_enabledChanged(qtdNativeId);
    }

    protected final void heightChanged() {
        qtd_QGraphicsObject_heightChanged(qtdNativeId);
    }

    protected final void opacityChanged() {
        qtd_QGraphicsObject_opacityChanged(qtdNativeId);
    }

    protected final void parentChanged() {
        qtd_QGraphicsObject_parentChanged(qtdNativeId);
    }

    protected final void rotationChanged() {
        qtd_QGraphicsObject_rotationChanged(qtdNativeId);
    }

    protected final void scaleChanged() {
        qtd_QGraphicsObject_scaleChanged(qtdNativeId);
    }

    protected final void visibleChanged() {
        qtd_QGraphicsObject_visibleChanged(qtdNativeId);
    }

    protected final void widthChanged() {
        qtd_QGraphicsObject_widthChanged(qtdNativeId);
    }

    protected final void xChanged() {
        qtd_QGraphicsObject_xChanged(qtdNativeId);
    }

    protected final void yChanged() {
        qtd_QGraphicsObject_yChanged(qtdNativeId);
    }

    protected final void zChanged() {
        qtd_QGraphicsObject_zChanged(qtdNativeId);
    }
// Functions

    public this(IQGraphicsItem parent_ = null) {
        void* ret = qtd_QGraphicsObject_QGraphicsObject_QGraphicsItem(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsItem);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool acceptDrops() const {
        return qtd_QGraphicsObject_acceptDrops_const(qtdNativeId);
    }

    public final bool acceptHoverEvents() const {
        return qtd_QGraphicsObject_acceptHoverEvents_const(qtdNativeId);
    }

    public final bool acceptTouchEvents() const {
        return qtd_QGraphicsObject_acceptTouchEvents_const(qtdNativeId);
    }

    public final int acceptedMouseButtons() const {
        return qtd_QGraphicsObject_acceptedMouseButtons_const(qtdNativeId);
    }

    public final bool acceptsHoverEvents() const {
        return qtd_QGraphicsObject_acceptsHoverEvents_const(qtdNativeId);
    }

    public final void addToIndex() {
        qtd_QGraphicsObject_addToIndex(qtdNativeId);
    }

    public final QRegion boundingRegion(const(QTransform) itemToDeviceTransform) const {
        void* ret = qtd_QGraphicsObject_boundingRegion_QTransform_const(qtdNativeId, itemToDeviceTransform is null ? null : (cast(QTransform)itemToDeviceTransform).qtdNativeId);
        QRegion __d_return_value = new QRegion(ret);
        return __d_return_value;
    }

    public final double boundingRegionGranularity() const {
        return qtd_QGraphicsObject_boundingRegionGranularity_const(qtdNativeId);
    }

    public final QGraphicsItem.CacheMode cacheMode() const {
        return cast(QGraphicsItem.CacheMode) qtd_QGraphicsObject_cacheMode_const(qtdNativeId);
    }

    public final QList!(IQGraphicsItem) childItems() const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsObject_childItems_const(qtdNativeId, &res);
        return res;
    }

    public final QRectF childrenBoundingRect() const {
        QRectF res;
        qtd_QGraphicsObject_childrenBoundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final void clearFocus() {
        qtd_QGraphicsObject_clearFocus(qtdNativeId);
    }

    public final QPainterPath clipPath() const {
        void* ret = qtd_QGraphicsObject_clipPath_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QList!(IQGraphicsItem) collidingItems(Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        auto res = QList!(IQGraphicsItem).opCall();
        qtd_QGraphicsObject_collidingItems_ItemSelectionMode_const(qtdNativeId, &res, mode);
        return res;
    }

    public final IQGraphicsItem commonAncestorItem(IQGraphicsItem other) const {
        void* ret = qtd_QGraphicsObject_commonAncestorItem_QGraphicsItem_const(qtdNativeId, other is null ? null : other.__ptr_IQGraphicsItem);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QCursor cursor() const {
        void* ret = qtd_QGraphicsObject_cursor_const(qtdNativeId);
        QCursor __d_return_value = new QCursor(ret);
        return __d_return_value;
    }

    public final QVariant data(int key) const {
        void* ret = qtd_QGraphicsObject_data_int_const(qtdNativeId, key);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QTransform deviceTransform(const(QTransform) viewportTransform) const {
        void* ret = qtd_QGraphicsObject_deviceTransform_QTransform_const(qtdNativeId, viewportTransform is null ? null : (cast(QTransform)viewportTransform).qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final double effectiveOpacity() const {
        return qtd_QGraphicsObject_effectiveOpacity_const(qtdNativeId);
    }

    public final void ensureVisible(const(QRectF) rect = QRectF(), int xmargin = 50, int ymargin = 50) {
        qtd_QGraphicsObject_ensureVisible_QRectF_int_int(qtdNativeId, rect, xmargin, ymargin);
    }

    public final void ensureVisible(double x, double y, double w, double h, int xmargin = 50, int ymargin = 50) {
        qtd_QGraphicsObject_ensureVisible_double_double_double_double_int_int(qtdNativeId, x, y, w, h, xmargin, ymargin);
    }

    public final bool filtersChildEvents() const {
        return qtd_QGraphicsObject_filtersChildEvents_const(qtdNativeId);
    }

    public final int flags() const {
        return qtd_QGraphicsObject_flags_const(qtdNativeId);
    }

    public final IQGraphicsItem focusItem() const {
        void* ret = qtd_QGraphicsObject_focusItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem focusProxy() const {
        void* ret = qtd_QGraphicsObject_focusProxy_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem focusScopeItem() const {
        void* ret = qtd_QGraphicsObject_focusScopeItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final void grabKeyboard() {
        qtd_QGraphicsObject_grabKeyboard(qtdNativeId);
    }

    public final void grabMouse() {
        qtd_QGraphicsObject_grabMouse(qtdNativeId);
    }

    public final QGraphicsItemGroup group() const {
        void* ret = qtd_QGraphicsObject_group_const(qtdNativeId);
        QGraphicsItemGroup __d_return_value = qtd_QGraphicsItemGroup_from_ptr(ret);

        return __d_return_value;
    }

    public final bool handlesChildEvents() const {
        return qtd_QGraphicsObject_handlesChildEvents_const(qtdNativeId);
    }

    public final bool hasCursor() const {
        return qtd_QGraphicsObject_hasCursor_const(qtdNativeId);
    }

    public final bool hasFocus() const {
        return qtd_QGraphicsObject_hasFocus_const(qtdNativeId);
    }

    public final void hide() {
        qtd_QGraphicsObject_hide(qtdNativeId);
    }

    public final void installSceneEventFilter(IQGraphicsItem filterItem) {
        qtd_QGraphicsObject_installSceneEventFilter_QGraphicsItem(qtdNativeId, filterItem is null ? null : filterItem.__ptr_IQGraphicsItem);
    }

    public final bool isActive() const {
        return qtd_QGraphicsObject_isActive_const(qtdNativeId);
    }

    public final bool isAncestorOf(IQGraphicsItem child) const {
        return qtd_QGraphicsObject_isAncestorOf_QGraphicsItem_const(qtdNativeId, child is null ? null : child.__ptr_IQGraphicsItem);
    }

    public final bool isClipped() const {
        return qtd_QGraphicsObject_isClipped_const(qtdNativeId);
    }

    public final bool isEnabled() const {
        return qtd_QGraphicsObject_isEnabled_const(qtdNativeId);
    }

    public final bool isObscured() const {
        return qtd_QGraphicsObject_isObscured_const(qtdNativeId);
    }

    public final bool isObscured(const(QRectF) rect) const {
        return qtd_QGraphicsObject_isObscured_QRectF_const(qtdNativeId, rect);
    }

    public final bool isObscured(double x, double y, double w, double h) const {
        return qtd_QGraphicsObject_isObscured_double_double_double_double_const(qtdNativeId, x, y, w, h);
    }

    public final bool isPanel() const {
        return qtd_QGraphicsObject_isPanel_const(qtdNativeId);
    }

    public final bool isSelected() const {
        return qtd_QGraphicsObject_isSelected_const(qtdNativeId);
    }

    public final bool isUnderMouse() const {
        return qtd_QGraphicsObject_isUnderMouse_const(qtdNativeId);
    }

    public final bool isVisible() const {
        return qtd_QGraphicsObject_isVisible_const(qtdNativeId);
    }

    public final bool isVisibleTo(IQGraphicsItem parent_) const {
        return qtd_QGraphicsObject_isVisibleTo_QGraphicsItem_const(qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsItem);
    }

    public final bool isWidget() const {
        return qtd_QGraphicsObject_isWidget_const(qtdNativeId);
    }

    public final bool isWindow() const {
        return qtd_QGraphicsObject_isWindow_const(qtdNativeId);
    }

    public final QTransform itemTransform(IQGraphicsItem other, bool* ok = null) const {
        void* ret = qtd_QGraphicsObject_itemTransform_QGraphicsItem_nativepointerbool_const(qtdNativeId, other is null ? null : other.__ptr_IQGraphicsItem, ok);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QPainterPath mapFromItem(IQGraphicsItem item, const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPainterPath_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapFromItem(IQGraphicsItem item, const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPointF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, point);
        return res;
    }

    public final QPolygonF mapFromItem(IQGraphicsItem item, const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPolygonF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapFromItem(IQGraphicsItem item, const(QRectF) rect) const {
        void* ret = qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QRectF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapFromItem(IQGraphicsItem item, double x, double y) const {
        QPointF res;
        qtd_QGraphicsObject_mapFromItem_QGraphicsItem_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y);
        return res;
    }

    public final QPolygonF mapFromItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsObject_mapFromItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapFromParent(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsObject_mapFromParent_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapFromParent(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsObject_mapFromParent_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapFromParent(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsObject_mapFromParent_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapFromParent(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsObject_mapFromParent_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapFromParent(double x, double y) const {
        QPointF res;
        qtd_QGraphicsObject_mapFromParent_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapFromParent(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsObject_mapFromParent_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapFromScene(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsObject_mapFromScene_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapFromScene(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsObject_mapFromScene_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapFromScene(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsObject_mapFromScene_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapFromScene(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsObject_mapFromScene_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapFromScene(double x, double y) const {
        QPointF res;
        qtd_QGraphicsObject_mapFromScene_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapFromScene(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsObject_mapFromScene_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QRectF mapRectFromItem(IQGraphicsItem item, const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectFromItem_QGraphicsItem_QRectF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        return res;
    }

    public final QRectF mapRectFromItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectFromItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        return res;
    }

    public final QRectF mapRectFromParent(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectFromParent_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectFromParent(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectFromParent_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QRectF mapRectFromScene(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectFromScene_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectFromScene(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectFromScene_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QRectF mapRectToItem(IQGraphicsItem item, const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectToItem_QGraphicsItem_QRectF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        return res;
    }

    public final QRectF mapRectToItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectToItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        return res;
    }

    public final QRectF mapRectToParent(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectToParent_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectToParent(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectToParent_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QRectF mapRectToScene(const(QRectF) rect) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectToScene_QRectF_const(qtdNativeId, &res, rect);
        return res;
    }

    public final QRectF mapRectToScene(double x, double y, double w, double h) const {
        QRectF res;
        qtd_QGraphicsObject_mapRectToScene_double_double_double_double_const(qtdNativeId, &res, x, y, w, h);
        return res;
    }

    public final QPainterPath mapToItem(IQGraphicsItem item, const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPainterPath_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapToItem(IQGraphicsItem item, const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPointF_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, point);
        return res;
    }

    public final QPolygonF mapToItem(IQGraphicsItem item, const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPolygonF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapToItem(IQGraphicsItem item, const(QRectF) rect) const {
        void* ret = qtd_QGraphicsObject_mapToItem_QGraphicsItem_QRectF_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapToItem(IQGraphicsItem item, double x, double y) const {
        QPointF res;
        qtd_QGraphicsObject_mapToItem_QGraphicsItem_double_double_const(qtdNativeId, &res, item is null ? null : item.__ptr_IQGraphicsItem, x, y);
        return res;
    }

    public final QPolygonF mapToItem(IQGraphicsItem item, double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsObject_mapToItem_QGraphicsItem_double_double_double_double_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapToParent(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsObject_mapToParent_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapToParent(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsObject_mapToParent_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapToParent(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsObject_mapToParent_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapToParent(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsObject_mapToParent_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapToParent(double x, double y) const {
        QPointF res;
        qtd_QGraphicsObject_mapToParent_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapToParent(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsObject_mapToParent_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPainterPath mapToScene(const(QPainterPath) path) const {
        void* ret = qtd_QGraphicsObject_mapToScene_QPainterPath_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final QPointF mapToScene(const(QPointF) point) const {
        QPointF res;
        qtd_QGraphicsObject_mapToScene_QPointF_const(qtdNativeId, &res, point);
        return res;
    }

    public final QPolygonF mapToScene(const(QPolygonF) polygon) const {
        void* ret = qtd_QGraphicsObject_mapToScene_QPolygonF_const(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPolygonF mapToScene(const(QRectF) rect) const {
        void* ret = qtd_QGraphicsObject_mapToScene_QRectF_const(qtdNativeId, rect);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final QPointF mapToScene(double x, double y) const {
        QPointF res;
        qtd_QGraphicsObject_mapToScene_double_double_const(qtdNativeId, &res, x, y);
        return res;
    }

    public final QPolygonF mapToScene(double x, double y, double w, double h) const {
        void* ret = qtd_QGraphicsObject_mapToScene_double_double_double_double_const(qtdNativeId, x, y, w, h);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final void moveBy(double dx, double dy) {
        qtd_QGraphicsObject_moveBy_double_double(qtdNativeId, dx, dy);
    }

    public final double opacity() const {
        return qtd_QGraphicsObject_opacity_const(qtdNativeId);
    }

    public final IQGraphicsItem panel() const {
        void* ret = qtd_QGraphicsObject_panel_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final IQGraphicsItem parentItem() const {
        void* ret = qtd_QGraphicsObject_parentItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsObject parentObject() const {
        void *ret = qtd_QGraphicsObject_parentObject_const(qtdNativeId);
        QGraphicsObject __d_return_value = QGraphicsObject.__getObject(ret);
        return __d_return_value;
    }

    public final QGraphicsWidget parentWidget() const {
        void *ret = qtd_QGraphicsObject_parentWidget_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QPointF pos() const {
        QPointF res;
        qtd_QGraphicsObject_pos_const(qtdNativeId, &res);
        return res;
    }

    public final void prepareGeometryChange() {
        qtd_QGraphicsObject_prepareGeometryChange(qtdNativeId);
    }

    public final void removeFromIndex() {
        qtd_QGraphicsObject_removeFromIndex(qtdNativeId);
    }

    public final void removeSceneEventFilter(IQGraphicsItem filterItem) {
        qtd_QGraphicsObject_removeSceneEventFilter_QGraphicsItem(qtdNativeId, filterItem is null ? null : filterItem.__ptr_IQGraphicsItem);
    }

    public final void resetTransform() {
        qtd_QGraphicsObject_resetTransform(qtdNativeId);
    }

    public final void rotate(double angle) {
        qtd_QGraphicsObject_rotate_double(qtdNativeId, angle);
    }

    public final double rotation() const {
        return qtd_QGraphicsObject_rotation_const(qtdNativeId);
    }

    public final double scale() const {
        return qtd_QGraphicsObject_scale_const(qtdNativeId);
    }

    public final void scale(double sx, double sy) {
        qtd_QGraphicsObject_scale_double_double(qtdNativeId, sx, sy);
    }

    public final QGraphicsScene scene() const {
        void *ret = qtd_QGraphicsObject_scene_const(qtdNativeId);
        QGraphicsScene __d_return_value = QGraphicsScene.__getObject(ret);
        return __d_return_value;
    }

    public final QRectF sceneBoundingRect() const {
        QRectF res;
        qtd_QGraphicsObject_sceneBoundingRect_const(qtdNativeId, &res);
        return res;
    }

    public final QPointF scenePos() const {
        QPointF res;
        qtd_QGraphicsObject_scenePos_const(qtdNativeId, &res);
        return res;
    }

    public final QTransform sceneTransform() const {
        void* ret = qtd_QGraphicsObject_sceneTransform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final void scroll(double dx, double dy, const(QRectF) rect = QRectF()) {
        qtd_QGraphicsObject_scroll_double_double_QRectF(qtdNativeId, dx, dy, rect);
    }

    public final void setAcceptDrops(bool on) {
        qtd_QGraphicsObject_setAcceptDrops_bool(qtdNativeId, on);
    }

    public final void setAcceptHoverEvents(bool enabled) {
        qtd_QGraphicsObject_setAcceptHoverEvents_bool(qtdNativeId, enabled);
    }

    public final void setAcceptTouchEvents(bool enabled) {
        qtd_QGraphicsObject_setAcceptTouchEvents_bool(qtdNativeId, enabled);
    }

    public final void setAcceptedMouseButtons(int buttons) {
        qtd_QGraphicsObject_setAcceptedMouseButtons_MouseButtons(qtdNativeId, buttons);
    }

    public final void setAcceptsHoverEvents(bool enabled) {
        qtd_QGraphicsObject_setAcceptsHoverEvents_bool(qtdNativeId, enabled);
    }

    public final void setActive(bool active) {
        qtd_QGraphicsObject_setActive_bool(qtdNativeId, active);
    }

    public final void setBoundingRegionGranularity(double granularity) {
        qtd_QGraphicsObject_setBoundingRegionGranularity_double(qtdNativeId, granularity);
    }

    public final void setCacheMode(QGraphicsItem.CacheMode mode, const(QSize) cacheSize = QSize()) {
        qtd_QGraphicsObject_setCacheMode_CacheMode_QSize(qtdNativeId, mode, cacheSize);
    }

    public final void setCursor(const(QCursor) cursor) {
        qtd_QGraphicsObject_setCursor_QCursor(qtdNativeId, cursor is null ? null : (cast(QCursor)cursor).qtdNativeId);
    }

    public final void setData(int key, QVariant value) {
        qtd_QGraphicsObject_setData_int_QVariant(qtdNativeId, key, value is null ? null : value.qtdNativeId);
    }

    public final void setEnabled(bool enabled) {
        qtd_QGraphicsObject_setEnabled_bool(qtdNativeId, enabled);
    }

    public final void setFiltersChildEvents(bool enabled) {
        qtd_QGraphicsObject_setFiltersChildEvents_bool(qtdNativeId, enabled);
    }

    public final void setFlag(QGraphicsItem.GraphicsItemFlag flag, bool enabled = true) {
        qtd_QGraphicsObject_setFlag_GraphicsItemFlag_bool(qtdNativeId, flag, enabled);
    }

    public final void setFlags(int flags) {
        qtd_QGraphicsObject_setFlags_GraphicsItemFlags(qtdNativeId, flags);
    }

    public final void setFocus(Qt.FocusReason focusReason = Qt.FocusReason.OtherFocusReason) {
        qtd_QGraphicsObject_setFocus_FocusReason(qtdNativeId, focusReason);
    }

    public final void setFocusProxy(IQGraphicsItem item) {
        qtd_QGraphicsObject_setFocusProxy_QGraphicsItem(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public final void setGroup(QGraphicsItemGroup group) {
        qtd_QGraphicsObject_setGroup_QGraphicsItemGroup(qtdNativeId, group is null ? null : group.qtdNativeId);
    }

    public final void setHandlesChildEvents(bool enabled) {
        qtd_QGraphicsObject_setHandlesChildEvents_bool(qtdNativeId, enabled);
    }

    public final void setOpacity(double opacity) {
        qtd_QGraphicsObject_setOpacity_double(qtdNativeId, opacity);
    }

    public final void setParentItem(IQGraphicsItem parent_) {
        qtd_QGraphicsObject_setParentItem_QGraphicsItem(qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsItem);
    }

    public final void setPos(const(QPointF) pos) {
        qtd_QGraphicsObject_setPos_QPointF(qtdNativeId, pos);
    }

    public final void setPos(double x, double y) {
        qtd_QGraphicsObject_setPos_double_double(qtdNativeId, x, y);
    }

    public final void setRotation(double angle) {
        qtd_QGraphicsObject_setRotation_double(qtdNativeId, angle);
    }

    public final void setScale(double scale) {
        qtd_QGraphicsObject_setScale_double(qtdNativeId, scale);
    }

    public final void setSelected(bool selected) {
        qtd_QGraphicsObject_setSelected_bool(qtdNativeId, selected);
    }

    public final void setToolTip(string toolTip) {
        qtd_QGraphicsObject_setToolTip_string(qtdNativeId, toolTip);
    }

    public final void setTransform(const(QTransform) matrix, bool combine = false) {
        qtd_QGraphicsObject_setTransform_QTransform_bool(qtdNativeId, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId, combine);
    }

    public final void setTransformOriginPoint(const(QPointF) origin) {
        qtd_QGraphicsObject_setTransformOriginPoint_QPointF(qtdNativeId, origin);
    }

    public final void setTransformOriginPoint(double ax, double ay) {
        qtd_QGraphicsObject_setTransformOriginPoint_double_double(qtdNativeId, ax, ay);
    }

    public final void setVisible(bool visible) {
        qtd_QGraphicsObject_setVisible_bool(qtdNativeId, visible);
    }

    public final void setX(double x) {
        qtd_QGraphicsObject_setX_double(qtdNativeId, x);
    }

    public final void setY(double y) {
        qtd_QGraphicsObject_setY_double(qtdNativeId, y);
    }

    public final void setZValue(double z) {
        qtd_QGraphicsObject_setZValue_double(qtdNativeId, z);
    }

    public final void shear(double sh, double sv) {
        qtd_QGraphicsObject_shear_double_double(qtdNativeId, sh, sv);
    }

    public final void show() {
        qtd_QGraphicsObject_show(qtdNativeId);
    }

    public final void stackBefore(IQGraphicsItem sibling) {
        qtd_QGraphicsObject_stackBefore_QGraphicsItem(qtdNativeId, sibling is null ? null : sibling.__ptr_IQGraphicsItem);
    }

    public final QGraphicsObject toGraphicsObject() {
        void *ret = qtd_QGraphicsObject_toGraphicsObject(qtdNativeId);
        QGraphicsObject __d_return_value = QGraphicsObject.__getObject(ret);
        return __d_return_value;
    }

    public final QGraphicsObject toGraphicsObject() const {
        void *ret = qtd_QGraphicsObject_toGraphicsObject_const(qtdNativeId);
        QGraphicsObject __d_return_value = QGraphicsObject.__getObject(ret);
        return __d_return_value;
    }

    public final string toolTip() const {
        string res;
        qtd_QGraphicsObject_toolTip_const(qtdNativeId, &res);
        return res;
    }

    public final IQGraphicsItem topLevelItem() const {
        void* ret = qtd_QGraphicsObject_topLevelItem_const(qtdNativeId);
        IQGraphicsItem __d_return_value = qtd_QGraphicsItem_from_ptr(ret);

        return __d_return_value;
    }

    public final QGraphicsWidget topLevelWidget() const {
        void *ret = qtd_QGraphicsObject_topLevelWidget_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QTransform transform() const {
        void* ret = qtd_QGraphicsObject_transform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }

    public final QPointF transformOriginPoint() const {
        QPointF res;
        qtd_QGraphicsObject_transformOriginPoint_const(qtdNativeId, &res);
        return res;
    }

    public final void translate(double dx, double dy) {
        qtd_QGraphicsObject_translate_double_double(qtdNativeId, dx, dy);
    }

    public final void ungrabKeyboard() {
        qtd_QGraphicsObject_ungrabKeyboard(qtdNativeId);
    }

    public final void ungrabMouse() {
        qtd_QGraphicsObject_ungrabMouse(qtdNativeId);
    }

    public final void unsetCursor() {
        qtd_QGraphicsObject_unsetCursor(qtdNativeId);
    }

    public final void update(const(QRectF) rect = QRectF()) {
        qtd_QGraphicsObject_update_QRectF(qtdNativeId, rect);
    }

    public final void update(double x, double y, double width, double height) {
        qtd_QGraphicsObject_update_double_double_double_double(qtdNativeId, x, y, width, height);
    }

    public final void updateMicroFocus() {
        qtd_QGraphicsObject_updateMicroFocus(qtdNativeId);
    }

    public final QGraphicsWidget window() const {
        void *ret = qtd_QGraphicsObject_window_const(qtdNativeId);
        QGraphicsWidget __d_return_value = QGraphicsWidget.__getObject(ret);
        return __d_return_value;
    }

    public final double x() const {
        return qtd_QGraphicsObject_x_const(qtdNativeId);
    }

    public final double y() const {
        return qtd_QGraphicsObject_y_const(qtdNativeId);
    }

    public final double zValue() const {
        return qtd_QGraphicsObject_zValue_const(qtdNativeId);
    }

    public void advance(int phase) {
        qtd_QGraphicsObject_advance_int(qtdNativeId, phase);
    }

    public abstract QRectF boundingRect() const;

    public bool collidesWithItem(IQGraphicsItem other, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        return qtd_QGraphicsObject_collidesWithItem_QGraphicsItem_ItemSelectionMode_const(qtdNativeId, other is null ? null : other.__ptr_IQGraphicsItem, mode);
    }

    public bool collidesWithPath(const(QPainterPath) path, Qt.ItemSelectionMode mode = Qt.ItemSelectionMode.IntersectsItemShape) const {
        return qtd_QGraphicsObject_collidesWithPath_QPainterPath_ItemSelectionMode_const(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId, mode);
    }

    public bool contains(const(QPointF) point) const {
        return qtd_QGraphicsObject_contains_QPointF_const(qtdNativeId, point);
    }

    public void contextMenuEvent(QGraphicsSceneContextMenuEvent event) {
        qtd_QGraphicsObject_contextMenuEvent_QGraphicsSceneContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragEnterEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsObject_dragEnterEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragLeaveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsObject_dragLeaveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragMoveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsObject_dragMoveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dropEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsObject_dropEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant extension(QVariant variant) const {
        void* ret = qtd_QGraphicsObject_extension_QVariant_const(qtdNativeId, variant is null ? null : variant.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public void focusInEvent(QFocusEvent event) {
        qtd_QGraphicsObject_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void focusOutEvent(QFocusEvent event) {
        qtd_QGraphicsObject_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverEnterEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsObject_hoverEnterEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverLeaveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsObject_hoverLeaveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverMoveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsObject_hoverMoveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void inputMethodEvent(QInputMethodEvent event) {
        qtd_QGraphicsObject_inputMethodEvent_QInputMethodEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant inputMethodQuery(Qt.InputMethodQuery query) const {
        void* ret = qtd_QGraphicsObject_inputMethodQuery_InputMethodQuery_const(qtdNativeId, query);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool isObscuredBy(IQGraphicsItem item) const {
        return qtd_QGraphicsObject_isObscuredBy_QGraphicsItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public QVariant itemChange(QGraphicsItem.GraphicsItemChange change, QVariant value) {
        void* ret = qtd_QGraphicsObject_itemChange_GraphicsItemChange_QVariant(qtdNativeId, change, value is null ? null : value.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public void keyPressEvent(QKeyEvent event) {
        qtd_QGraphicsObject_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void keyReleaseEvent(QKeyEvent event) {
        qtd_QGraphicsObject_keyReleaseEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseDoubleClickEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsObject_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseMoveEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsObject_mouseMoveEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mousePressEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsObject_mousePressEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseReleaseEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsObject_mouseReleaseEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QPainterPath opaqueArea() const {
        void* ret = qtd_QGraphicsObject_opaqueArea_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public abstract void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null);

    public bool sceneEvent(QEvent event) {
        return qtd_QGraphicsObject_sceneEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool sceneEventFilter(IQGraphicsItem watched, QEvent event) {
        return qtd_QGraphicsObject_sceneEventFilter_QGraphicsItem_QEvent(qtdNativeId, watched is null ? null : watched.__ptr_IQGraphicsItem, event is null ? null : event.qtdNativeId);
    }

    public QPainterPath shape() const {
        void* ret = qtd_QGraphicsObject_shape_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public int type() const {
        return qtd_QGraphicsObject_type_const(qtdNativeId);
    }

    public void wheelEvent(QGraphicsSceneWheelEvent event) {
        qtd_QGraphicsObject_wheelEvent_QGraphicsSceneWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "updateMicroFocus()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsObject_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsObject);
    }

    static QGraphicsObject __getObject(void* nativeId) {
        return static_cast!(QGraphicsObject)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsObject_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsObject_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsObject_ConcreteWrapper(nativeId, initFlags);
        QGraphicsObject.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("childrenChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("enabledChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("heightChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("opacityChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!()("parentChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!()("rotationChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!()("scaleChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!()("visibleChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!()("widthChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!()("xChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[10]);
        mo.addMethod(new QMetaSignal(signature!()("yChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[11]);
        mo.addMethod(new QMetaSignal(signature!()("zChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("updateMicroFocus"), index));

    }

    public alias void __isQtType_QGraphicsObject;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQGraphicsItem = qtd_QGraphicsObject_cast_to_QGraphicsItem(nativeId);
    }

    private void* __m_ptr_IQGraphicsItem;
    public void* __ptr_IQGraphicsItem() { return __m_ptr_IQGraphicsItem; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QGraphicsObject_cast_to_QGraphicsItem(void* nativeId);

    public class QGraphicsObject_ConcreteWrapper : QGraphicsObject {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QRectF boundingRect() const {
            QRectF res;
            qtd_QGraphicsObject_boundingRect_const(qtdNativeId, &res);
            return res;
        }

        override         public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null) {
            qtd_QGraphicsObject_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QGraphicsObject_childrenChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_enabledChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_heightChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_opacityChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_parentChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_rotationChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_scaleChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_visibleChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_widthChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_xChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_yChanged(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_zChanged(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QGraphicsObject_QGraphicsObject_QGraphicsItem(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QGraphicsObject_acceptDrops_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_acceptHoverEvents_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_acceptTouchEvents_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsObject_acceptedMouseButtons_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_acceptsHoverEvents_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_addToIndex(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_boundingRegion_QTransform_const(void* __this_nativeId,
 void* itemToDeviceTransform0);
private extern(C) double  qtd_QGraphicsObject_boundingRegionGranularity_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsObject_cacheMode_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_childItems_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGraphicsObject_childrenBoundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsObject_clearFocus(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_clipPath_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_collidingItems_ItemSelectionMode_const(void* __this_nativeId,
 void* __d_return_value,
 int mode0);
private extern(C) void*  qtd_QGraphicsObject_commonAncestorItem_QGraphicsItem_const(void* __this_nativeId,
 void* other0);
private extern(C) void*  qtd_QGraphicsObject_cursor_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_data_int_const(void* __this_nativeId,
 int key0);
private extern(C) void*  qtd_QGraphicsObject_deviceTransform_QTransform_const(void* __this_nativeId,
 void* viewportTransform0);
private extern(C) double  qtd_QGraphicsObject_effectiveOpacity_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_ensureVisible_QRectF_int_int(void* __this_nativeId,
 QRectF rect0,
 int xmargin1,
 int ymargin2);
private extern(C) void  qtd_QGraphicsObject_ensureVisible_double_double_double_double_int_int(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xmargin4,
 int ymargin5);
private extern(C) bool  qtd_QGraphicsObject_filtersChildEvents_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsObject_flags_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_focusItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_focusProxy_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_focusScopeItem_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_grabKeyboard(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_grabMouse(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_group_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_handlesChildEvents_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_hasCursor_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_hasFocus_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_hide(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_installSceneEventFilter_QGraphicsItem(void* __this_nativeId,
 void* filterItem0);
private extern(C) bool  qtd_QGraphicsObject_isActive_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isAncestorOf_QGraphicsItem_const(void* __this_nativeId,
 void* child0);
private extern(C) bool  qtd_QGraphicsObject_isClipped_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isEnabled_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isObscured_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isObscured_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) bool  qtd_QGraphicsObject_isObscured_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) bool  qtd_QGraphicsObject_isPanel_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isSelected_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isUnderMouse_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isVisible_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isVisibleTo_QGraphicsItem_const(void* __this_nativeId,
 void* parent0);
private extern(C) bool  qtd_QGraphicsObject_isWidget_const(void* __this_nativeId);
private extern(C) bool  qtd_QGraphicsObject_isWindow_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_itemTransform_QGraphicsItem_nativepointerbool_const(void* __this_nativeId,
 void* other0,
 bool* ok1);
private extern(C) void*  qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPainterPath_const(void* __this_nativeId,
 void* item0,
 void* path1);
private extern(C) void  qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1);
private extern(C) void*  qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPolygonF_const(void* __this_nativeId,
 void* item0,
 void* polygon1);
private extern(C) void*  qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsObject_mapFromItem_QGraphicsItem_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2);
private extern(C) void*  qtd_QGraphicsObject_mapFromItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void*  qtd_QGraphicsObject_mapFromParent_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsObject_mapFromParent_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsObject_mapFromParent_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsObject_mapFromParent_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapFromParent_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsObject_mapFromParent_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void*  qtd_QGraphicsObject_mapFromScene_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsObject_mapFromScene_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsObject_mapFromScene_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsObject_mapFromScene_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapFromScene_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsObject_mapFromScene_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsObject_mapRectFromItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsObject_mapRectFromItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void  qtd_QGraphicsObject_mapRectFromParent_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapRectFromParent_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsObject_mapRectFromScene_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapRectFromScene_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsObject_mapRectToItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsObject_mapRectToItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void  qtd_QGraphicsObject_mapRectToParent_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapRectToParent_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsObject_mapRectToScene_QRectF_const(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapRectToScene_double_double_double_double_const(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void*  qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPainterPath_const(void* __this_nativeId,
 void* item0,
 void* path1);
private extern(C) void  qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1);
private extern(C) void*  qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPolygonF_const(void* __this_nativeId,
 void* item0,
 void* polygon1);
private extern(C) void*  qtd_QGraphicsObject_mapToItem_QGraphicsItem_QRectF_const(void* __this_nativeId,
 void* item0,
 QRectF rect1);
private extern(C) void  qtd_QGraphicsObject_mapToItem_QGraphicsItem_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2);
private extern(C) void*  qtd_QGraphicsObject_mapToItem_QGraphicsItem_double_double_double_double_const(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4);
private extern(C) void*  qtd_QGraphicsObject_mapToParent_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsObject_mapToParent_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsObject_mapToParent_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsObject_mapToParent_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapToParent_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsObject_mapToParent_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void*  qtd_QGraphicsObject_mapToScene_QPainterPath_const(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsObject_mapToScene_QPointF_const(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsObject_mapToScene_QPolygonF_const(void* __this_nativeId,
 void* polygon0);
private extern(C) void*  qtd_QGraphicsObject_mapToScene_QRectF_const(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_mapToScene_double_double_const(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1);
private extern(C) void*  qtd_QGraphicsObject_mapToScene_double_double_double_double_const(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3);
private extern(C) void  qtd_QGraphicsObject_moveBy_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) double  qtd_QGraphicsObject_opacity_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_panel_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_parentItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_parentObject_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_parentWidget_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_pos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsObject_prepareGeometryChange(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_removeFromIndex(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_removeSceneEventFilter_QGraphicsItem(void* __this_nativeId,
 void* filterItem0);
private extern(C) void  qtd_QGraphicsObject_resetTransform(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_rotate_double(void* __this_nativeId,
 double angle0);
private extern(C) double  qtd_QGraphicsObject_rotation_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsObject_scale_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_scale_double_double(void* __this_nativeId,
 double sx0,
 double sy1);
private extern(C) void*  qtd_QGraphicsObject_scene_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_sceneBoundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsObject_scenePos_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void*  qtd_QGraphicsObject_sceneTransform_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_scroll_double_double_QRectF(void* __this_nativeId,
 double dx0,
 double dy1,
 QRectF rect2);
private extern(C) void  qtd_QGraphicsObject_setAcceptDrops_bool(void* __this_nativeId,
 bool on0);
private extern(C) void  qtd_QGraphicsObject_setAcceptHoverEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsObject_setAcceptTouchEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsObject_setAcceptedMouseButtons_MouseButtons(void* __this_nativeId,
 int buttons0);
private extern(C) void  qtd_QGraphicsObject_setAcceptsHoverEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsObject_setActive_bool(void* __this_nativeId,
 bool active0);
private extern(C) void  qtd_QGraphicsObject_setBoundingRegionGranularity_double(void* __this_nativeId,
 double granularity0);
private extern(C) void  qtd_QGraphicsObject_setCacheMode_CacheMode_QSize(void* __this_nativeId,
 int mode0,
 QSize cacheSize1);
private extern(C) void  qtd_QGraphicsObject_setCursor_QCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void  qtd_QGraphicsObject_setData_int_QVariant(void* __this_nativeId,
 int key0,
 void* value1);
private extern(C) void  qtd_QGraphicsObject_setEnabled_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsObject_setFiltersChildEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsObject_setFlag_GraphicsItemFlag_bool(void* __this_nativeId,
 int flag0,
 bool enabled1);
private extern(C) void  qtd_QGraphicsObject_setFlags_GraphicsItemFlags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QGraphicsObject_setFocus_FocusReason(void* __this_nativeId,
 int focusReason0);
private extern(C) void  qtd_QGraphicsObject_setFocusProxy_QGraphicsItem(void* __this_nativeId,
 void* item0);
private extern(C) void  qtd_QGraphicsObject_setGroup_QGraphicsItemGroup(void* __this_nativeId,
 void* group0);
private extern(C) void  qtd_QGraphicsObject_setHandlesChildEvents_bool(void* __this_nativeId,
 bool enabled0);
private extern(C) void  qtd_QGraphicsObject_setOpacity_double(void* __this_nativeId,
 double opacity0);
private extern(C) void  qtd_QGraphicsObject_setParentItem_QGraphicsItem(void* __this_nativeId,
 void* parent0);
private extern(C) void  qtd_QGraphicsObject_setPos_QPointF(void* __this_nativeId,
 QPointF pos0);
private extern(C) void  qtd_QGraphicsObject_setPos_double_double(void* __this_nativeId,
 double x0,
 double y1);
private extern(C) void  qtd_QGraphicsObject_setRotation_double(void* __this_nativeId,
 double angle0);
private extern(C) void  qtd_QGraphicsObject_setScale_double(void* __this_nativeId,
 double scale0);
private extern(C) void  qtd_QGraphicsObject_setSelected_bool(void* __this_nativeId,
 bool selected0);
private extern(C) void  qtd_QGraphicsObject_setToolTip_string(void* __this_nativeId,
 string toolTip0);
private extern(C) void  qtd_QGraphicsObject_setTransform_QTransform_bool(void* __this_nativeId,
 void* matrix0,
 bool combine1);
private extern(C) void  qtd_QGraphicsObject_setTransformOriginPoint_QPointF(void* __this_nativeId,
 QPointF origin0);
private extern(C) void  qtd_QGraphicsObject_setTransformOriginPoint_double_double(void* __this_nativeId,
 double ax0,
 double ay1);
private extern(C) void  qtd_QGraphicsObject_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QGraphicsObject_setX_double(void* __this_nativeId,
 double x0);
private extern(C) void  qtd_QGraphicsObject_setY_double(void* __this_nativeId,
 double y0);
private extern(C) void  qtd_QGraphicsObject_setZValue_double(void* __this_nativeId,
 double z0);
private extern(C) void  qtd_QGraphicsObject_shear_double_double(void* __this_nativeId,
 double sh0,
 double sv1);
private extern(C) void  qtd_QGraphicsObject_show(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_stackBefore_QGraphicsItem(void* __this_nativeId,
 void* sibling0);
private extern(C) void*  qtd_QGraphicsObject_toGraphicsObject(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_toGraphicsObject_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_toolTip_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QGraphicsObject_topLevelItem_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_topLevelWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_transform_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_transformOriginPoint_const(void* __this_nativeId,
 QPointF * __d_return_value);
private extern(C) void  qtd_QGraphicsObject_translate_double_double(void* __this_nativeId,
 double dx0,
 double dy1);
private extern(C) void  qtd_QGraphicsObject_ungrabKeyboard(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_ungrabMouse(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_unsetCursor(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_update_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsObject_update_double_double_double_double(void* __this_nativeId,
 double x0,
 double y1,
 double width2,
 double height3);
private extern(C) void  qtd_QGraphicsObject_updateMicroFocus(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsObject_window_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsObject_x_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsObject_y_const(void* __this_nativeId);
private extern(C) double  qtd_QGraphicsObject_zValue_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_advance_int(void* __this_nativeId,
 int phase0);
private extern(C) void  qtd_QGraphicsObject_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) bool  qtd_QGraphicsObject_collidesWithItem_QGraphicsItem_ItemSelectionMode_const(void* __this_nativeId,
 void* other0,
 int mode1);
private extern(C) bool  qtd_QGraphicsObject_collidesWithPath_QPainterPath_ItemSelectionMode_const(void* __this_nativeId,
 void* path0,
 int mode1);
private extern(C) bool  qtd_QGraphicsObject_contains_QPointF_const(void* __this_nativeId,
 QPointF point0);
private extern(C) void  qtd_QGraphicsObject_contextMenuEvent_QGraphicsSceneContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_dragEnterEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_dragLeaveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_dragMoveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_dropEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsObject_extension_QVariant_const(void* __this_nativeId,
 void* variant0);
private extern(C) void  qtd_QGraphicsObject_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_hoverEnterEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_hoverLeaveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_hoverMoveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_inputMethodEvent_QInputMethodEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsObject_inputMethodQuery_InputMethodQuery_const(void* __this_nativeId,
 int query0);
private extern(C) bool  qtd_QGraphicsObject_isObscuredBy_QGraphicsItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QGraphicsObject_itemChange_GraphicsItemChange_QVariant(void* __this_nativeId,
 int change0,
 void* value1);
private extern(C) void  qtd_QGraphicsObject_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_mouseMoveEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_mousePressEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsObject_mouseReleaseEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsObject_opaqueArea_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) bool  qtd_QGraphicsObject_sceneEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsObject_sceneEventFilter_QGraphicsItem_QEvent(void* __this_nativeId,
 void* watched0,
 void* event1);
private extern(C) void*  qtd_QGraphicsObject_shape_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsObject_type_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsObject_wheelEvent_QGraphicsSceneWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsObject_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsObject() {
    qtd_QGraphicsObject_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QGraphicsObject_childrenChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.childrenChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_enabledChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.enabledChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_heightChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.heightChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_opacityChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.opacityChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_parentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.parentChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_rotationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.rotationChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_scaleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.scaleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_visibleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.visibleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_widthChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.widthChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_xChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.xChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_yChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.yChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsObject_zChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsObject) dId;
        //d_object.zChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QGraphicsObject_staticMetaObject();

extern(C) void qtd_QGraphicsObject_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsObject_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
