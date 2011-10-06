#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGraphicsObject_shell.h"
#include <iostream>
#include <qgraphicsitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QGraphicsItem* qtd_QGraphicsObject_cast_to_QGraphicsItem(QGraphicsObject *ptr)
{
    return dynamic_cast<QGraphicsItem*>(ptr);
}

class QGraphicsObjectEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGraphicsObjectEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_createEntity(void *nativeId, void* dId)
{
    new QGraphicsObjectEntity((QObject*)nativeId, dId);
}

QGraphicsObject_QtDShell::QGraphicsObject_QtDShell(void *d_ptr, QGraphicsItem*  parent0)
    : QGraphicsObject(parent0),
      QObjectLink(this, d_ptr)
{
}

QGraphicsObject_QtDShell::~QGraphicsObject_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGraphicsObject_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGraphicsObject::metaObject();
}

int QGraphicsObject_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGraphicsObject::qt_metacall(_c, _id, _a);
}

int QGraphicsObject_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGraphicsObject::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGraphicsObject_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsItem_advance_int_dispatch, (void *dId, int phase0))
void QGraphicsObject_QtDShell::advance(int  phase0)
{
    qtd_QGraphicsItem_advance_int_dispatch(QObjectLink::getLink(this)->dId, (int )phase0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_boundingRect_const_dispatch, (void *dId, QRectF *__d_return_value))
QRectF  QGraphicsObject_QtDShell::boundingRect() const
{
    QRectF __d_return_value;
    qtd_QGraphicsItem_boundingRect_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsObject_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch, (void *dId, void* other0, int mode1))
bool  QGraphicsObject_QtDShell::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch, (void *dId, void* path0, int mode1))
bool  QGraphicsObject_QtDShell::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, &(QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_contains_QPointF_const_dispatch, (void *dId, QPointF* point0))
bool  QGraphicsObject_QtDShell::contains(const QPointF&  point0) const
{
    return qtd_QGraphicsItem_contains_QPointF_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )point0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsObject_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QGraphicsObject_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGraphicsObject_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_extension_QVariant_const_dispatch, (void *dId, void* variant0))
QVariant  QGraphicsObject_QtDShell::extension(const QVariant&  variant0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_extension_QVariant_const_dispatch(QObjectLink::getLink(this)->dId, &(QVariant& )variant0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QGraphicsObject_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch, (void *dId, void* item0))
bool  QGraphicsObject_QtDShell::isObscuredBy(const QGraphicsItem*  item0) const
{
    return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )item0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch, (void *dId, int change0, void* value1))
QVariant  QGraphicsObject_QtDShell::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem::GraphicsItemChange )change0, &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_opaqueArea_const_dispatch, (void *dId))
QPainterPath  QGraphicsObject_QtDShell::opaqueArea() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_opaqueArea_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
void QGraphicsObject_QtDShell::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsObject_QtDShell::sceneEvent(QEvent*  event0)
{
    return qtd_QGraphicsItem_sceneEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QGraphicsObject_QtDShell::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
    return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_shape_const_dispatch, (void *dId))
QPainterPath  QGraphicsObject_QtDShell::shape() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_shape_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsObject_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QGraphicsItem_type_const_dispatch, (void *dId))
int  QGraphicsObject_QtDShell::type() const
{
    return qtd_QGraphicsItem_type_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
void QGraphicsObject_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsObject_QtDShell::__public_addToIndex()
{
    QGraphicsItem::addToIndex();
}

void QGraphicsObject_QtDShell::__public_prepareGeometryChange()
{
    QGraphicsItem::prepareGeometryChange();
}

void QGraphicsObject_QtDShell::__public_removeFromIndex()
{
    QGraphicsItem::removeFromIndex();
}

QObject*  QGraphicsObject_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGraphicsObject_QtDShell::__public_updateMicroFocus()
{
    QGraphicsObject::updateMicroFocus();
}

void QGraphicsObject_QtDShell::__public_childrenChanged()
{
    QGraphicsObject::childrenChanged();
}

void QGraphicsObject_QtDShell::__public_enabledChanged()
{
    QGraphicsObject::enabledChanged();
}

void QGraphicsObject_QtDShell::__public_heightChanged()
{
    QGraphicsObject::heightChanged();
}

void QGraphicsObject_QtDShell::__public_opacityChanged()
{
    QGraphicsObject::opacityChanged();
}

void QGraphicsObject_QtDShell::__public_parentChanged()
{
    QGraphicsObject::parentChanged();
}

void QGraphicsObject_QtDShell::__public_rotationChanged()
{
    QGraphicsObject::rotationChanged();
}

void QGraphicsObject_QtDShell::__public_scaleChanged()
{
    QGraphicsObject::scaleChanged();
}

void QGraphicsObject_QtDShell::__public_visibleChanged()
{
    QGraphicsObject::visibleChanged();
}

void QGraphicsObject_QtDShell::__public_widthChanged()
{
    QGraphicsObject::widthChanged();
}

void QGraphicsObject_QtDShell::__public_xChanged()
{
    QGraphicsObject::xChanged();
}

void QGraphicsObject_QtDShell::__public_yChanged()
{
    QGraphicsObject::yChanged();
}

void QGraphicsObject_QtDShell::__public_zChanged()
{
    QGraphicsObject::zChanged();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsObject_QtDShell::__override_advance(int  phase0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::advance((int )phase0);
    } else {
        advance((int )phase0);
    }
}

QRectF  QGraphicsObject_QtDShell::__override_boundingRect(bool static_call) const
{
    if (static_call) {
        return QRectF();
    } else {
        return boundingRect();
    }
}

void QGraphicsObject_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

bool  QGraphicsObject_QtDShell::__override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsObject_QtDShell::__override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsObject_QtDShell::__override_contains(const QPointF&  point0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::contains((const QPointF& )point0);
    } else {
        return contains((const QPointF& )point0);
    }
}

void QGraphicsObject_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QGraphicsObject_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

bool  QGraphicsObject_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QGraphicsObject_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QVariant  QGraphicsObject_QtDShell::__override_extension(const QVariant&  variant0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::extension((const QVariant& )variant0);
    } else {
        return extension((const QVariant& )variant0);
    }
}

void QGraphicsObject_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsObject_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QGraphicsObject_QtDShell::__override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::isObscuredBy((const QGraphicsItem* )item0);
    } else {
        return isObscuredBy((const QGraphicsItem* )item0);
    }
}

QVariant  QGraphicsObject_QtDShell::__override_itemChange(int  change0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    } else {
        return itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    }
}

void QGraphicsObject_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsObject_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

QPainterPath  QGraphicsObject_QtDShell::__override_opaqueArea(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::opaqueArea();
    } else {
        return opaqueArea();
    }
}

void QGraphicsObject_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        return;
    } else {
        paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

bool  QGraphicsObject_QtDShell::__override_sceneEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEvent((QEvent* )event0);
    } else {
        return sceneEvent((QEvent* )event0);
    }
}

bool  QGraphicsObject_QtDShell::__override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    } else {
        return sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    }
}

QPainterPath  QGraphicsObject_QtDShell::__override_shape(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::shape();
    } else {
        return shape();
    }
}

void QGraphicsObject_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QGraphicsObject_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::type();
    } else {
        return type();
    }
}

void QGraphicsObject_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

// QGraphicsObject::childrenChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_childrenChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_childrenChanged();

}

// QGraphicsObject::enabledChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_enabledChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_enabledChanged();

}

// QGraphicsObject::heightChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_heightChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_heightChanged();

}

// QGraphicsObject::opacityChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_opacityChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_opacityChanged();

}

// QGraphicsObject::parentChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_parentChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_parentChanged();

}

// QGraphicsObject::rotationChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_rotationChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_rotationChanged();

}

// QGraphicsObject::scaleChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_scaleChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_scaleChanged();

}

// QGraphicsObject::visibleChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_visibleChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_visibleChanged();

}

// QGraphicsObject::widthChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_widthChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_widthChanged();

}

// QGraphicsObject::xChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_xChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_xChanged();

}

// QGraphicsObject::yChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_yChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_yChanged();

}

// QGraphicsObject::zChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_zChanged
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_zChanged();

}

// ---externC---
// QGraphicsObject::QGraphicsObject(QGraphicsItem * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_QGraphicsObject_QGraphicsItem
(void *d_ptr,
 void* parent0)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QGraphicsObject_QtDShell *__qt_this = new QGraphicsObject_QtDShell(d_ptr, (QGraphicsItem* )__qt_parent0);
    return (void *) __qt_this;

}

// QGraphicsObject::acceptDrops() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_acceptDrops_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptDrops();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::acceptHoverEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_acceptHoverEvents_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptHoverEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::acceptTouchEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_acceptTouchEvents_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptTouchEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::acceptedMouseButtons() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsObject_acceptedMouseButtons_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QGraphicsItem::acceptedMouseButtons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::acceptsHoverEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_acceptsHoverEvents_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptsHoverEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::addToIndex()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_addToIndex
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_addToIndex();

}

// QGraphicsObject::boundingRegion(const QTransform & itemToDeviceTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_boundingRegion_QTransform_const
(void* __this_nativeId,
 void* itemToDeviceTransform0)
{
    const QTransform&  __qt_itemToDeviceTransform0 = (const QTransform& ) *(QTransform *)itemToDeviceTransform0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->QGraphicsItem::boundingRegion((const QTransform& )__qt_itemToDeviceTransform0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::boundingRegionGranularity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_boundingRegionGranularity_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::boundingRegionGranularity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::cacheMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsObject_cacheMode_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QGraphicsItem::cacheMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::childItems() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_childItems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->QGraphicsItem::childItems();

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsObject::childrenBoundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_childrenBoundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::childrenBoundingRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::clearFocus()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_clearFocus
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::clearFocus();

}

// QGraphicsObject::clipPath() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_clipPath_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::clipPath();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::collidingItems(Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_collidingItems_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 int mode0)
{
    Qt::ItemSelectionMode __qt_mode0 = (Qt::ItemSelectionMode) mode0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->QGraphicsItem::collidingItems((Qt::ItemSelectionMode )__qt_mode0);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsObject::commonAncestorItem(const QGraphicsItem * other) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_commonAncestorItem_QGraphicsItem_const
(void* __this_nativeId,
 void* other0)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::commonAncestorItem((const QGraphicsItem* )__qt_other0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::cursor() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_cursor_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QCursor  __qt_return_value = __qt_this->QGraphicsItem::cursor();

    void* __d_return_value = (void*) new QCursor(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::data(int key) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_data_int_const
(void* __this_nativeId,
 int key0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->QGraphicsItem::data((int )key0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::deviceTransform(const QTransform & viewportTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_deviceTransform_QTransform_const
(void* __this_nativeId,
 void* viewportTransform0)
{
    const QTransform&  __qt_viewportTransform0 = (const QTransform& ) *(QTransform *)viewportTransform0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::deviceTransform((const QTransform& )__qt_viewportTransform0);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::effectiveOpacity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_effectiveOpacity_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::effectiveOpacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::ensureVisible(const QRectF & rect, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_ensureVisible_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int xmargin1,
 int ymargin2)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ensureVisible((const QRectF& )rect0, (int )xmargin1, (int )ymargin2);

}

// QGraphicsObject::ensureVisible(double x, double y, double w, double h, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_ensureVisible_double_double_double_double_int_int
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xmargin4,
 int ymargin5)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ensureVisible((double )x0, (double )y1, (double )w2, (double )h3, (int )xmargin4, (int )ymargin5);

}

// QGraphicsObject::filtersChildEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_filtersChildEvents_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::filtersChildEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsObject_flags_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QGraphicsItem::flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::focusItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_focusItem_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::focusItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::focusProxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_focusProxy_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::focusProxy();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::focusScopeItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_focusScopeItem_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::focusScopeItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::grabKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_grabKeyboard
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::grabKeyboard();

}

// QGraphicsObject::grabMouse()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_grabMouse
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::grabMouse();

}

// QGraphicsObject::group() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_group_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItemGroup*  __qt_return_value = __qt_this->QGraphicsItem::group();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::handlesChildEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_handlesChildEvents_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::handlesChildEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::hasCursor() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_hasCursor_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::hasCursor();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::hasFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_hasFocus_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::hasFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::hide()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_hide
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::hide();

}

// QGraphicsObject::installSceneEventFilter(QGraphicsItem * filterItem)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_installSceneEventFilter_QGraphicsItem
(void* __this_nativeId,
 void* filterItem0)
{
    QGraphicsItem*  __qt_filterItem0 = (QGraphicsItem* ) filterItem0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::installSceneEventFilter((QGraphicsItem* )__qt_filterItem0);

}

// QGraphicsObject::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isActive_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isAncestorOf(const QGraphicsItem * child) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isAncestorOf_QGraphicsItem_const
(void* __this_nativeId,
 void* child0)
{
    const QGraphicsItem*  __qt_child0 = (const QGraphicsItem* ) child0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isAncestorOf((const QGraphicsItem* )__qt_child0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isClipped() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isClipped_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isClipped();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isEnabled_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isObscured() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isObscured_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isObscured();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isObscured(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isObscured_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isObscured((const QRectF& )rect0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isObscured(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isObscured_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isObscured((double )x0, (double )y1, (double )w2, (double )h3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isPanel() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isPanel_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isPanel();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isSelected() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isSelected_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isSelected();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isUnderMouse() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isUnderMouse_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isUnderMouse();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isVisible_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isVisibleTo(const QGraphicsItem * parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isVisibleTo_QGraphicsItem_const
(void* __this_nativeId,
 void* parent0)
{
    const QGraphicsItem*  __qt_parent0 = (const QGraphicsItem* ) parent0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isVisibleTo((const QGraphicsItem* )__qt_parent0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isWidget() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isWidget_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isWidget();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::isWindow() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isWindow_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isWindow();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::itemTransform(const QGraphicsItem * other, bool * ok) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_itemTransform_QGraphicsItem_nativepointerbool_const
(void* __this_nativeId,
 void* other0,
 bool* ok1)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    bool*  __qt_ok1 = (bool* ) ok1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::itemTransform((const QGraphicsItem* )__qt_other0, (bool* )__qt_ok1);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromItem(const QGraphicsItem * item, const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPainterPath_const
(void* __this_nativeId,
 void* item0,
 void* path1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPainterPath&  __qt_path1 = (const QPainterPath& ) *(QPainterPath *)path1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QPainterPath& )__qt_path1);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromItem(const QGraphicsItem * item, const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QPointF& )point1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapFromItem(const QGraphicsItem * item, const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QPolygonF_const
(void* __this_nativeId,
 void* item0,
 void* polygon1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPolygonF&  __qt_polygon1 = (const QPolygonF& ) *(QPolygonF *)polygon1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QPolygonF& )__qt_polygon1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromItem(const QGraphicsItem * item, double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapFromItem_QGraphicsItem_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapFromItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromParent(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromParent_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromParent(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapFromParent_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapFromParent(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromParent_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromParent_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromParent(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapFromParent_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapFromParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromParent_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromScene(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapFromScene_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapFromScene(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromScene_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromScene_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapFromScene(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapFromScene_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapFromScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapFromScene_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapRectFromItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectFromItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectFromItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectFromItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectFromParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectFromParent_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromParent((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectFromParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectFromParent_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromParent((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectFromScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectFromScene_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromScene((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectFromScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectFromScene_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromScene((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectToItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectToItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectToItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectToItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectToParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectToParent_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToParent((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectToParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectToParent_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToParent((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectToScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectToScene_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToScene((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapRectToScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapRectToScene_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToScene((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapToItem(const QGraphicsItem * item, const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPainterPath_const
(void* __this_nativeId,
 void* item0,
 void* path1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPainterPath&  __qt_path1 = (const QPainterPath& ) *(QPainterPath *)path1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QPainterPath& )__qt_path1);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToItem(const QGraphicsItem * item, const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QPointF& )point1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapToItem(const QGraphicsItem * item, const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToItem_QGraphicsItem_QPolygonF_const
(void* __this_nativeId,
 void* item0,
 void* polygon1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPolygonF&  __qt_polygon1 = (const QPolygonF& ) *(QPolygonF *)polygon1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QPolygonF& )__qt_polygon1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToItem(const QGraphicsItem * item, double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapToItem_QGraphicsItem_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapToItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToParent(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToParent_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToParent(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapToParent_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapToParent(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToParent_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToParent_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToParent(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapToParent_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapToParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToParent_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToScene(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapToScene_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapToScene(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToScene_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToScene_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::mapToScene(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mapToScene_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::mapToScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_mapToScene_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::moveBy(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_moveBy_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::moveBy((double )dx0, (double )dy1);

}

// QGraphicsObject::opacity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_opacity_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::opacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::panel() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_panel_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::panel();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::parentItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_parentItem_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::parentItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::parentObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_parentObject_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsObject*  __qt_return_value = __qt_this->QGraphicsItem::parentObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::parentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_parentWidget_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->QGraphicsItem::parentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::prepareGeometryChange()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_prepareGeometryChange
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_prepareGeometryChange();

}

// QGraphicsObject::removeFromIndex()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_removeFromIndex
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_removeFromIndex();

}

// QGraphicsObject::removeSceneEventFilter(QGraphicsItem * filterItem)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_removeSceneEventFilter_QGraphicsItem
(void* __this_nativeId,
 void* filterItem0)
{
    QGraphicsItem*  __qt_filterItem0 = (QGraphicsItem* ) filterItem0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::removeSceneEventFilter((QGraphicsItem* )__qt_filterItem0);

}

// QGraphicsObject::resetTransform()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_resetTransform
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::resetTransform();

}

// QGraphicsObject::rotate(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_rotate_double
(void* __this_nativeId,
 double angle0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::rotate((double )angle0);

}

// QGraphicsObject::rotation() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_rotation_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::rotation();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::scale() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_scale_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::scale();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::scale(double sx, double sy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_scale_double_double
(void* __this_nativeId,
 double sx0,
 double sy1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::scale((double )sx0, (double )sy1);

}

// QGraphicsObject::scene() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_scene_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsScene*  __qt_return_value = __qt_this->QGraphicsItem::scene();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::sceneBoundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_sceneBoundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::sceneBoundingRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::sceneTransform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_sceneTransform_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::sceneTransform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::scroll(double dx, double dy, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_scroll_double_double_QRectF
(void* __this_nativeId,
 double dx0,
 double dy1,
 QRectF rect2)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::scroll((double )dx0, (double )dy1, (const QRectF& )rect2);

}

// QGraphicsObject::setAcceptDrops(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setAcceptDrops_bool
(void* __this_nativeId,
 bool on0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptDrops((bool )on0);

}

// QGraphicsObject::setAcceptHoverEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setAcceptHoverEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptHoverEvents((bool )enabled0);

}

// QGraphicsObject::setAcceptTouchEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setAcceptTouchEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptTouchEvents((bool )enabled0);

}

// QGraphicsObject::setAcceptedMouseButtons(QFlags<Qt::MouseButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setAcceptedMouseButtons_MouseButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<Qt::MouseButton> __qt_buttons0 = (QFlags<Qt::MouseButton>) buttons0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptedMouseButtons((Qt::MouseButtons )__qt_buttons0);

}

// QGraphicsObject::setAcceptsHoverEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setAcceptsHoverEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptsHoverEvents((bool )enabled0);

}

// QGraphicsObject::setActive(bool active)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setActive_bool
(void* __this_nativeId,
 bool active0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setActive((bool )active0);

}

// QGraphicsObject::setBoundingRegionGranularity(double granularity)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setBoundingRegionGranularity_double
(void* __this_nativeId,
 double granularity0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setBoundingRegionGranularity((double )granularity0);

}

// QGraphicsObject::setCacheMode(QGraphicsItem::CacheMode mode, const QSize & cacheSize)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setCacheMode_CacheMode_QSize
(void* __this_nativeId,
 int mode0,
 QSize cacheSize1)
{
    QGraphicsItem::CacheMode __qt_mode0 = (QGraphicsItem::CacheMode) mode0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setCacheMode((QGraphicsItem::CacheMode )__qt_mode0, (const QSize& )cacheSize1);

}

// QGraphicsObject::setCursor(const QCursor & cursor)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setCursor_QCursor
(void* __this_nativeId,
 void* cursor0)
{
    const QCursor&  __qt_cursor0 = (const QCursor& ) *(QCursor *)cursor0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setCursor((const QCursor& )__qt_cursor0);

}

// QGraphicsObject::setData(int key, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setData_int_QVariant
(void* __this_nativeId,
 int key0,
 QVariant* value1)
{
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setData((int )key0, (const QVariant& )__qt_value1);

}

// QGraphicsObject::setEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setEnabled((bool )enabled0);

}

// QGraphicsObject::setFiltersChildEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setFiltersChildEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFiltersChildEvents((bool )enabled0);

}

// QGraphicsObject::setFlag(QGraphicsItem::GraphicsItemFlag flag, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setFlag_GraphicsItemFlag_bool
(void* __this_nativeId,
 int flag0,
 bool enabled1)
{
    QGraphicsItem::GraphicsItemFlag __qt_flag0 = (QGraphicsItem::GraphicsItemFlag) flag0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFlag((QGraphicsItem::GraphicsItemFlag )__qt_flag0, (bool )enabled1);

}

// QGraphicsObject::setFlags(QFlags<QGraphicsItem::GraphicsItemFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setFlags_GraphicsItemFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QGraphicsItem::GraphicsItemFlag> __qt_flags0 = (QFlags<QGraphicsItem::GraphicsItemFlag>) flags0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFlags((QGraphicsItem::GraphicsItemFlags )__qt_flags0);

}

// QGraphicsObject::setFocus(Qt::FocusReason focusReason)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setFocus_FocusReason
(void* __this_nativeId,
 int focusReason0)
{
    Qt::FocusReason __qt_focusReason0 = (Qt::FocusReason) focusReason0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFocus((Qt::FocusReason )__qt_focusReason0);

}

// QGraphicsObject::setFocusProxy(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setFocusProxy_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFocusProxy((QGraphicsItem* )__qt_item0);

}

// QGraphicsObject::setGroup(QGraphicsItemGroup * group)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setGroup_QGraphicsItemGroup
(void* __this_nativeId,
 void* group0)
{
    QGraphicsItemGroup*  __qt_group0 = (QGraphicsItemGroup* ) group0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setGroup((QGraphicsItemGroup* )__qt_group0);

}

// QGraphicsObject::setHandlesChildEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setHandlesChildEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setHandlesChildEvents((bool )enabled0);

}

// QGraphicsObject::setOpacity(double opacity)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setOpacity_double
(void* __this_nativeId,
 double opacity0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setOpacity((double )opacity0);

}

// QGraphicsObject::setParentItem(QGraphicsItem * parent_)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setParentItem_QGraphicsItem
(void* __this_nativeId,
 void* parent0)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setParentItem((QGraphicsItem* )__qt_parent0);

}

// QGraphicsObject::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setPos((const QPointF& )pos0);

}

// QGraphicsObject::setPos(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setPos_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setPos((double )x0, (double )y1);

}

// QGraphicsObject::setRotation(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setRotation_double
(void* __this_nativeId,
 double angle0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setRotation((double )angle0);

}

// QGraphicsObject::setScale(double scale)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setScale_double
(void* __this_nativeId,
 double scale0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setScale((double )scale0);

}

// QGraphicsObject::setSelected(bool selected)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setSelected_bool
(void* __this_nativeId,
 bool selected0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setSelected((bool )selected0);

}

// QGraphicsObject::setToolTip(const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setToolTip_string
(void* __this_nativeId,
 DArray toolTip0)
{
    QString __qt_toolTip0 = QString::fromUtf8((const char *)toolTip0.ptr, toolTip0.length);
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setToolTip((const QString& )__qt_toolTip0);

}

// QGraphicsObject::setTransform(const QTransform & matrix, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setTransform_QTransform_bool
(void* __this_nativeId,
 void* matrix0,
 bool combine1)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setTransform((const QTransform& )__qt_matrix0, (bool )combine1);

}

// QGraphicsObject::setTransformOriginPoint(const QPointF & origin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setTransformOriginPoint_QPointF
(void* __this_nativeId,
 QPointF origin0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setTransformOriginPoint((const QPointF& )origin0);

}

// QGraphicsObject::setTransformOriginPoint(double ax, double ay)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setTransformOriginPoint_double_double
(void* __this_nativeId,
 double ax0,
 double ay1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setTransformOriginPoint((double )ax0, (double )ay1);

}

// QGraphicsObject::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setVisible((bool )visible0);

}

// QGraphicsObject::setX(double x)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setX_double
(void* __this_nativeId,
 double x0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setX((double )x0);

}

// QGraphicsObject::setY(double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setY_double
(void* __this_nativeId,
 double y0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setY((double )y0);

}

// QGraphicsObject::setZValue(double z)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_setZValue_double
(void* __this_nativeId,
 double z0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setZValue((double )z0);

}

// QGraphicsObject::shear(double sh, double sv)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_shear_double_double
(void* __this_nativeId,
 double sh0,
 double sv1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::shear((double )sh0, (double )sv1);

}

// QGraphicsObject::show()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_show
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::show();

}

// QGraphicsObject::stackBefore(const QGraphicsItem * sibling)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_stackBefore_QGraphicsItem
(void* __this_nativeId,
 void* sibling0)
{
    const QGraphicsItem*  __qt_sibling0 = (const QGraphicsItem* ) sibling0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::stackBefore((const QGraphicsItem* )__qt_sibling0);

}

// QGraphicsObject::toGraphicsObject()
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_toGraphicsObject
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsObject*  __qt_return_value = __qt_this->QGraphicsItem::toGraphicsObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::toGraphicsObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_toGraphicsObject_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    const QGraphicsObject*  __qt_return_value = __qt_this->QGraphicsItem::toGraphicsObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->QGraphicsItem::toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QGraphicsObject::topLevelItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_topLevelItem_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::topLevelItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::topLevelWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_topLevelWidget_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->QGraphicsItem::topLevelWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::transform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_transform_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::transform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::transformOriginPoint() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_transformOriginPoint_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::transformOriginPoint();

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_translate_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::translate((double )dx0, (double )dy1);

}

// QGraphicsObject::ungrabKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_ungrabKeyboard
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ungrabKeyboard();

}

// QGraphicsObject::ungrabMouse()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_ungrabMouse
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ungrabMouse();

}

// QGraphicsObject::unsetCursor()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_unsetCursor
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::unsetCursor();

}

// QGraphicsObject::update(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_update_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::update((const QRectF& )rect0);

}

// QGraphicsObject::update(double x, double y, double width, double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_update_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double width2,
 double height3)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::update((double )x0, (double )y1, (double )width2, (double )height3);

}

// QGraphicsObject::updateMicroFocus()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_updateMicroFocus
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    __qt_this->__public_updateMicroFocus();

}

// QGraphicsObject::window() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_window_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->QGraphicsItem::window();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::x() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_x_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::x();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::y() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_y_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::y();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::zValue() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsObject_zValue_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::zValue();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::advance(int phase)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_advance_int
(void* __this_nativeId,
 int phase0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_advance((int )phase0, __do_static_call);

}

// QGraphicsObject::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_boundingRect(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsObject::collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_collidesWithItem_QGraphicsItem_ItemSelectionMode_const
(void* __this_nativeId,
 void* other0,
 int mode1)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_collidesWithItem((const QGraphicsItem* )__qt_other0, (Qt::ItemSelectionMode )__qt_mode1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_collidesWithPath_QPainterPath_ItemSelectionMode_const
(void* __this_nativeId,
 void* path0,
 int mode1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_collidesWithPath((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::contains(const QPointF & point) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_contains_QPointF_const
(void* __this_nativeId,
 QPointF point0)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_contains((const QPointF& )point0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_contextMenuEvent_QGraphicsSceneContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneContextMenuEvent*  __qt_event0 = (QGraphicsSceneContextMenuEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QGraphicsSceneContextMenuEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::dragEnterEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_dragEnterEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_dragLeaveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::dragMoveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_dragMoveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::dropEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_dropEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::extension(const QVariant & variant) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_extension_QVariant_const
(void* __this_nativeId,
 QVariant* variant0)
{
    QVariant __qt_variant0 = variant0 == NULL ? QVariant() : QVariant(*variant0);
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_extension((const QVariant& )__qt_variant0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::hoverEnterEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_hoverEnterEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverEnterEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_hoverLeaveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverLeaveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::hoverMoveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_hoverMoveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverMoveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::inputMethodEvent(QInputMethodEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* event0)
{
    QInputMethodEvent*  __qt_event0 = (QInputMethodEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::inputMethodQuery(Qt::InputMethodQuery query) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int query0)
{
    Qt::InputMethodQuery __qt_query0 = (Qt::InputMethodQuery) query0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_query0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::isObscuredBy(const QGraphicsItem * item) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_isObscuredBy_QGraphicsItem_const
(void* __this_nativeId,
 void* item0)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isObscuredBy((const QGraphicsItem* )__qt_item0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_itemChange_GraphicsItemChange_QVariant
(void* __this_nativeId,
 int change0,
 QVariant* value1)
{
    QGraphicsItem::GraphicsItemChange __qt_change0 = (QGraphicsItem::GraphicsItemChange) change0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_itemChange((QGraphicsItem::GraphicsItemChange )__qt_change0, (const QVariant& )__qt_value1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::keyReleaseEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mouseDoubleClickEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mouseMoveEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::mousePressEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mousePressEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_mouseReleaseEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsObject::opaqueArea() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_opaqueArea_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_opaqueArea(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsObject::sceneEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_sceneEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_sceneEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::sceneEventFilter(QGraphicsItem * watched, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsObject_sceneEventFilter_QGraphicsItem_QEvent
(void* __this_nativeId,
 void* watched0,
 void* event1)
{
    QGraphicsItem*  __qt_watched0 = (QGraphicsItem* ) watched0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_sceneEventFilter((QGraphicsItem* )__qt_watched0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::shape() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_shape_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_shape(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsObject::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsObject_type_const
(void* __this_nativeId)
{
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsObject::wheelEvent(QGraphicsSceneWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsObject_wheelEvent_QGraphicsSceneWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneWheelEvent*  __qt_event0 = (QGraphicsSceneWheelEvent* ) event0;
    QGraphicsObject_QtDShell *__qt_this = (QGraphicsObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QGraphicsSceneWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsObject_staticMetaObject() {
    return (void*)&QGraphicsObject::staticMetaObject;
}


