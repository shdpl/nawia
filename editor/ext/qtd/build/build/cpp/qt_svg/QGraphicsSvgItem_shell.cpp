#include <QGraphicsItem>
#include <QSize>
#include <QSvgRenderer>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicssvgitem.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qstyleoption.h>
#include <qsvgrenderer.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGraphicsSvgItem_shell.h"
#include <iostream>
#include <qgraphicssvgitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"
#include "ArrayOps_qt_svg.h"

class QGraphicsSvgItemEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGraphicsSvgItemEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_createEntity(void *nativeId, void* dId)
{
    new QGraphicsSvgItemEntity((QObject*)nativeId, dId);
}

QGraphicsSvgItem_QtDShell::QGraphicsSvgItem_QtDShell(void *d_ptr, QGraphicsItem*  parentItem0)
    : QGraphicsSvgItem(parentItem0),
      QObjectLink(this, d_ptr)
{
}

QGraphicsSvgItem_QtDShell::QGraphicsSvgItem_QtDShell(void *d_ptr, const QString&  fileName0, QGraphicsItem*  parentItem1)
    : QGraphicsSvgItem(fileName0, parentItem1),
      QObjectLink(this, d_ptr)
{
}

QGraphicsSvgItem_QtDShell::~QGraphicsSvgItem_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(SVG, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(SVG, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGraphicsSvgItem_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGraphicsSvgItem::metaObject();
}

int QGraphicsSvgItem_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGraphicsSvgItem::qt_metacall(_c, _id, _a);
}

int QGraphicsSvgItem_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGraphicsSvgItem::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSvgItem_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(SVG, void, QGraphicsItem_advance_int_dispatch, (void *dId, int phase0))
void QGraphicsSvgItem_QtDShell::advance(int  phase0)
{
    qtd_QGraphicsItem_advance_int_dispatch(QObjectLink::getLink(this)->dId, (int )phase0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_boundingRect_const_dispatch, (void *dId, QRectF *__d_return_value))
QRectF  QGraphicsSvgItem_QtDShell::boundingRect() const
{
    QRectF __d_return_value;
    qtd_QGraphicsItem_boundingRect_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(SVG, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsSvgItem_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(SVG, bool, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch, (void *dId, void* other0, int mode1))
bool  QGraphicsSvgItem_QtDShell::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(SVG, bool, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch, (void *dId, void* path0, int mode1))
bool  QGraphicsSvgItem_QtDShell::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, &(QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(SVG, bool, QGraphicsItem_contains_QPointF_const_dispatch, (void *dId, QPointF* point0))
bool  QGraphicsSvgItem_QtDShell::contains(const QPointF&  point0) const
{
    return qtd_QGraphicsItem_contains_QPointF_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )point0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsSvgItem_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(SVG, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QGraphicsSvgItem_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(SVG, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGraphicsSvgItem_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(SVG, void*, QGraphicsItem_extension_QVariant_const_dispatch, (void *dId, void* variant0))
QVariant  QGraphicsSvgItem_QtDShell::extension(const QVariant&  variant0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_extension_QVariant_const_dispatch(QObjectLink::getLink(this)->dId, &(QVariant& )variant0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(SVG, void*, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QGraphicsSvgItem_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(SVG, bool, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch, (void *dId, void* item0))
bool  QGraphicsSvgItem_QtDShell::isObscuredBy(const QGraphicsItem*  item0) const
{
    return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )item0);
}

QTD_FUNC_DECL(SVG, void*, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch, (void *dId, int change0, void* value1))
QVariant  QGraphicsSvgItem_QtDShell::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem::GraphicsItemChange )change0, &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(SVG, void*, QGraphicsItem_opaqueArea_const_dispatch, (void *dId))
QPainterPath  QGraphicsSvgItem_QtDShell::opaqueArea() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_opaqueArea_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
void QGraphicsSvgItem_QtDShell::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(SVG, bool, QGraphicsItem_sceneEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsSvgItem_QtDShell::sceneEvent(QEvent*  event0)
{
    return qtd_QGraphicsItem_sceneEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(SVG, bool, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QGraphicsSvgItem_QtDShell::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
    return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(SVG, void*, QGraphicsItem_shape_const_dispatch, (void *dId))
QPainterPath  QGraphicsSvgItem_QtDShell::shape() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_shape_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(SVG, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsSvgItem_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(SVG, int, QGraphicsItem_type_const_dispatch, (void *dId))
int  QGraphicsSvgItem_QtDShell::type() const
{
    return qtd_QGraphicsItem_type_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(SVG, void, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
void QGraphicsSvgItem_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsSvgItem_QtDShell::__public_addToIndex()
{
    QGraphicsItem::addToIndex();
}

void QGraphicsSvgItem_QtDShell::__public_prepareGeometryChange()
{
    QGraphicsItem::prepareGeometryChange();
}

void QGraphicsSvgItem_QtDShell::__public_removeFromIndex()
{
    QGraphicsItem::removeFromIndex();
}

QObject*  QGraphicsSvgItem_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGraphicsSvgItem_QtDShell::__public_updateMicroFocus()
{
    QGraphicsObject::updateMicroFocus();
}

void QGraphicsSvgItem_QtDShell::__public_childrenChanged()
{
    QGraphicsObject::childrenChanged();
}

void QGraphicsSvgItem_QtDShell::__public_enabledChanged()
{
    QGraphicsObject::enabledChanged();
}

void QGraphicsSvgItem_QtDShell::__public_heightChanged()
{
    QGraphicsObject::heightChanged();
}

void QGraphicsSvgItem_QtDShell::__public_opacityChanged()
{
    QGraphicsObject::opacityChanged();
}

void QGraphicsSvgItem_QtDShell::__public_parentChanged()
{
    QGraphicsObject::parentChanged();
}

void QGraphicsSvgItem_QtDShell::__public_rotationChanged()
{
    QGraphicsObject::rotationChanged();
}

void QGraphicsSvgItem_QtDShell::__public_scaleChanged()
{
    QGraphicsObject::scaleChanged();
}

void QGraphicsSvgItem_QtDShell::__public_visibleChanged()
{
    QGraphicsObject::visibleChanged();
}

void QGraphicsSvgItem_QtDShell::__public_widthChanged()
{
    QGraphicsObject::widthChanged();
}

void QGraphicsSvgItem_QtDShell::__public_xChanged()
{
    QGraphicsObject::xChanged();
}

void QGraphicsSvgItem_QtDShell::__public_yChanged()
{
    QGraphicsObject::yChanged();
}

void QGraphicsSvgItem_QtDShell::__public_zChanged()
{
    QGraphicsObject::zChanged();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsSvgItem_QtDShell::__override_advance(int  phase0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::advance((int )phase0);
    } else {
        advance((int )phase0);
    }
}

QRectF  QGraphicsSvgItem_QtDShell::__override_boundingRect(bool static_call) const
{
    if (static_call) {
        return QGraphicsSvgItem::boundingRect();
    } else {
        return boundingRect();
    }
}

void QGraphicsSvgItem_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_contains(const QPointF&  point0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::contains((const QPointF& )point0);
    } else {
        return contains((const QPointF& )point0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QGraphicsSvgItem_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QVariant  QGraphicsSvgItem_QtDShell::__override_extension(const QVariant&  variant0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::extension((const QVariant& )variant0);
    } else {
        return extension((const QVariant& )variant0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsSvgItem_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::isObscuredBy((const QGraphicsItem* )item0);
    } else {
        return isObscuredBy((const QGraphicsItem* )item0);
    }
}

QVariant  QGraphicsSvgItem_QtDShell::__override_itemChange(int  change0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    } else {
        return itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    }
}

void QGraphicsSvgItem_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsSvgItem_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

QPainterPath  QGraphicsSvgItem_QtDShell::__override_opaqueArea(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::opaqueArea();
    } else {
        return opaqueArea();
    }
}

void QGraphicsSvgItem_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        QGraphicsSvgItem::paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    } else {
        paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_sceneEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEvent((QEvent* )event0);
    } else {
        return sceneEvent((QEvent* )event0);
    }
}

bool  QGraphicsSvgItem_QtDShell::__override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    } else {
        return sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    }
}

QPainterPath  QGraphicsSvgItem_QtDShell::__override_shape(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::shape();
    } else {
        return shape();
    }
}

void QGraphicsSvgItem_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QGraphicsSvgItem_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QGraphicsSvgItem::type();
    } else {
        return type();
    }
}

void QGraphicsSvgItem_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

// ---externC---
// QGraphicsSvgItem::QGraphicsSvgItem(QGraphicsItem * parentItem)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSvgItem_QGraphicsSvgItem_QGraphicsItem
(void *d_ptr,
 void* parentItem0)
{
    QGraphicsItem*  __qt_parentItem0 = (QGraphicsItem* ) parentItem0;
    QGraphicsSvgItem_QtDShell *__qt_this = new QGraphicsSvgItem_QtDShell(d_ptr, (QGraphicsItem* )__qt_parentItem0);
    return (void *) __qt_this;

}

// QGraphicsSvgItem::QGraphicsSvgItem(const QString & fileName, QGraphicsItem * parentItem)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSvgItem_QGraphicsSvgItem_string_QGraphicsItem
(void *d_ptr,
 DArray fileName0,
 void* parentItem1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QGraphicsItem*  __qt_parentItem1 = (QGraphicsItem* ) parentItem1;
    QGraphicsSvgItem_QtDShell *__qt_this = new QGraphicsSvgItem_QtDShell(d_ptr, (const QString& )__qt_fileName0, (QGraphicsItem* )__qt_parentItem1);
    return (void *) __qt_this;

}

// QGraphicsSvgItem::elementId() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_elementId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->elementId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QGraphicsSvgItem::isCachingEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsSvgItem_isCachingEnabled_const
(void* __this_nativeId)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCachingEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSvgItem::maximumCacheSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_maximumCacheSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->maximumCacheSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSvgItem::renderer() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSvgItem_renderer_const
(void* __this_nativeId)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    QSvgRenderer*  __qt_return_value = __qt_this->renderer();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsSvgItem::setCachingEnabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_setCachingEnabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    __qt_this->setCachingEnabled((bool )arg__1);

}

// QGraphicsSvgItem::setElementId(const QString & id)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_setElementId_string
(void* __this_nativeId,
 DArray id0)
{
    QString __qt_id0 = QString::fromUtf8((const char *)id0.ptr, id0.length);
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    __qt_this->setElementId((const QString& )__qt_id0);

}

// QGraphicsSvgItem::setMaximumCacheSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_setMaximumCacheSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    __qt_this->setMaximumCacheSize((const QSize& )size0);

}

// QGraphicsSvgItem::setSharedRenderer(QSvgRenderer * renderer)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_setSharedRenderer_QSvgRenderer
(void* __this_nativeId,
 void* renderer0)
{
    QSvgRenderer*  __qt_renderer0 = (QSvgRenderer* ) renderer0;
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    __qt_this->setSharedRenderer((QSvgRenderer* )__qt_renderer0);

}

// QGraphicsSvgItem::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_boundingRect(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsSvgItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSvgItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsSvgItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSvgItem_type_const
(void* __this_nativeId)
{
    QGraphicsSvgItem_QtDShell *__qt_this = (QGraphicsSvgItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSvgItem_staticMetaObject() {
    return (void*)&QGraphicsSvgItem::staticMetaObject;
}


