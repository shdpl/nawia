#include <QVariant>
#include <qbrush.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpen.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGraphicsEllipseItem_shell.h"
#include <iostream>
#include <qgraphicsitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_delete(void* nativeId)
{
    delete (QGraphicsEllipseItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_destroy(void* nativeId)
{
    call_destructor((QGraphicsEllipseItem_QtDShell*)nativeId);
}

QGraphicsEllipseItem_QtDShell::QGraphicsEllipseItem_QtDShell(void *d_ptr, QGraphicsItem*  parent0, QGraphicsScene*  scene1)
    : QGraphicsEllipseItem(parent0, scene1),
      QtdObjectLink(d_ptr)
{
}

QGraphicsEllipseItem_QtDShell::QGraphicsEllipseItem_QtDShell(void *d_ptr, const QRectF&  rect0, QGraphicsItem*  parent1, QGraphicsScene*  scene2)
    : QGraphicsEllipseItem(rect0, parent1, scene2),
      QtdObjectLink(d_ptr)
{
}

QGraphicsEllipseItem_QtDShell::QGraphicsEllipseItem_QtDShell(void *d_ptr, double  x0, double  y1, double  w2, double  h3, QGraphicsItem*  parent4, QGraphicsScene*  scene5)
    : QGraphicsEllipseItem(x0, y1, w2, h3, parent4, scene5),
      QtdObjectLink(d_ptr)
{
}

QGraphicsEllipseItem_QtDShell::~QGraphicsEllipseItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGraphicsEllipseItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGraphicsEllipseItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsItem_advance_int_dispatch, (void *dId, int phase0))
void QGraphicsEllipseItem_QtDShell::advance(int  phase0)
{
    qtd_QGraphicsItem_advance_int_dispatch(this->dId, (int )phase0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_boundingRect_const_dispatch, (void *dId, QRectF *__d_return_value))
QRectF  QGraphicsEllipseItem_QtDShell::boundingRect() const
{
    QRectF __d_return_value;
    qtd_QGraphicsItem_boundingRect_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch, (void *dId, void* other0, int mode1))
bool  QGraphicsEllipseItem_QtDShell::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(this->dId, (QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch, (void *dId, void* path0, int mode1))
bool  QGraphicsEllipseItem_QtDShell::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(this->dId, &(QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_contains_QPointF_const_dispatch, (void *dId, QPointF* point0))
bool  QGraphicsEllipseItem_QtDShell::contains(const QPointF&  point0) const
{
    return qtd_QGraphicsItem_contains_QPointF_const_dispatch(this->dId, &(QPointF& )point0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(this->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_extension_QVariant_const_dispatch, (void *dId, void* variant0))
QVariant  QGraphicsEllipseItem_QtDShell::extension(const QVariant&  variant0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_extension_QVariant_const_dispatch(this->dId, &(QVariant& )variant0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(this->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(this->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(this->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QGraphicsEllipseItem_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(this->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch, (void *dId, void* item0))
bool  QGraphicsEllipseItem_QtDShell::isObscuredBy(const QGraphicsItem*  item0) const
{
    return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(this->dId, (QGraphicsItem* )item0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch, (void *dId, int change0, void* value1))
QVariant  QGraphicsEllipseItem_QtDShell::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(this->dId, (QGraphicsItem::GraphicsItemChange )change0, &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(this->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(this->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_opaqueArea_const_dispatch, (void *dId))
QPainterPath  QGraphicsEllipseItem_QtDShell::opaqueArea() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_opaqueArea_const_dispatch(this->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
void QGraphicsEllipseItem_QtDShell::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(this->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsEllipseItem_QtDShell::sceneEvent(QEvent*  event0)
{
    return qtd_QGraphicsItem_sceneEvent_QEvent_dispatch(this->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QGraphicsEllipseItem_QtDShell::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
    return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(this->dId, (QGraphicsItem* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_shape_const_dispatch, (void *dId))
QPainterPath  QGraphicsEllipseItem_QtDShell::shape() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_shape_const_dispatch(this->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QGraphicsItem_type_const_dispatch, (void *dId))
int  QGraphicsEllipseItem_QtDShell::type() const
{
    return qtd_QGraphicsItem_type_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
void QGraphicsEllipseItem_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(this->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsEllipseItem_QtDShell::__public_addToIndex()
{
    QGraphicsItem::addToIndex();
}

void QGraphicsEllipseItem_QtDShell::__public_prepareGeometryChange()
{
    QGraphicsItem::prepareGeometryChange();
}

void QGraphicsEllipseItem_QtDShell::__public_removeFromIndex()
{
    QGraphicsItem::removeFromIndex();
}

void QGraphicsEllipseItem_QtDShell::__public_updateMicroFocus()
{
    QGraphicsItem::updateMicroFocus();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsEllipseItem_QtDShell::__override_advance(int  phase0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::advance((int )phase0);
    } else {
        advance((int )phase0);
    }
}

QRectF  QGraphicsEllipseItem_QtDShell::__override_boundingRect(bool static_call) const
{
    if (static_call) {
        return QGraphicsEllipseItem::boundingRect();
    } else {
        return boundingRect();
    }
}

bool  QGraphicsEllipseItem_QtDShell::__override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsEllipseItem_QtDShell::__override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsEllipseItem_QtDShell::__override_contains(const QPointF&  point0, bool static_call) const
{
    if (static_call) {
        return QGraphicsEllipseItem::contains((const QPointF& )point0);
    } else {
        return contains((const QPointF& )point0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

QVariant  QGraphicsEllipseItem_QtDShell::__override_extension(const QVariant&  variant0, bool static_call) const
{
    if (static_call) {
        return QGraphicsEllipseItem::extension((const QVariant& )variant0);
    } else {
        return extension((const QVariant& )variant0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsEllipseItem_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QGraphicsEllipseItem_QtDShell::__override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const
{
    if (static_call) {
        return QGraphicsEllipseItem::isObscuredBy((const QGraphicsItem* )item0);
    } else {
        return isObscuredBy((const QGraphicsItem* )item0);
    }
}

QVariant  QGraphicsEllipseItem_QtDShell::__override_itemChange(int  change0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    } else {
        return itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsEllipseItem_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

QPainterPath  QGraphicsEllipseItem_QtDShell::__override_opaqueArea(bool static_call) const
{
    if (static_call) {
        return QGraphicsEllipseItem::opaqueArea();
    } else {
        return opaqueArea();
    }
}

void QGraphicsEllipseItem_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        QGraphicsEllipseItem::paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    } else {
        paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

bool  QGraphicsEllipseItem_QtDShell::__override_sceneEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEvent((QEvent* )event0);
    } else {
        return sceneEvent((QEvent* )event0);
    }
}

bool  QGraphicsEllipseItem_QtDShell::__override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    } else {
        return sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    }
}

QPainterPath  QGraphicsEllipseItem_QtDShell::__override_shape(bool static_call) const
{
    if (static_call) {
        return QGraphicsEllipseItem::shape();
    } else {
        return shape();
    }
}

int  QGraphicsEllipseItem_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QGraphicsEllipseItem::type();
    } else {
        return type();
    }
}

void QGraphicsEllipseItem_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

// ---externC---
// QGraphicsEllipseItem::QGraphicsEllipseItem(QGraphicsItem * parent_, QGraphicsScene * scene)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsEllipseItem_QGraphicsEllipseItem_QGraphicsItem_QGraphicsScene
(void *d_ptr,
 void* parent0,
 void* scene1)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QGraphicsScene*  __qt_scene1 = (QGraphicsScene* ) scene1;
    QGraphicsEllipseItem_QtDShell *__qt_this = new QGraphicsEllipseItem_QtDShell(d_ptr, (QGraphicsItem* )__qt_parent0, (QGraphicsScene* )__qt_scene1);
    return (void *) __qt_this;

}

// QGraphicsEllipseItem::QGraphicsEllipseItem(const QRectF & rect, QGraphicsItem * parent_, QGraphicsScene * scene)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsEllipseItem_QGraphicsEllipseItem_QRectF_QGraphicsItem_QGraphicsScene
(void *d_ptr,
 QRectF rect0,
 void* parent1,
 void* scene2)
{
    QGraphicsItem*  __qt_parent1 = (QGraphicsItem* ) parent1;
    QGraphicsScene*  __qt_scene2 = (QGraphicsScene* ) scene2;
    QGraphicsEllipseItem_QtDShell *__qt_this = new QGraphicsEllipseItem_QtDShell(d_ptr, (const QRectF& )rect0, (QGraphicsItem* )__qt_parent1, (QGraphicsScene* )__qt_scene2);
    return (void *) __qt_this;

}

// QGraphicsEllipseItem::QGraphicsEllipseItem(double x, double y, double w, double h, QGraphicsItem * parent_, QGraphicsScene * scene)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsEllipseItem_QGraphicsEllipseItem_double_double_double_double_QGraphicsItem_QGraphicsScene
(void *d_ptr,
 double x0,
 double y1,
 double w2,
 double h3,
 void* parent4,
 void* scene5)
{
    QGraphicsItem*  __qt_parent4 = (QGraphicsItem* ) parent4;
    QGraphicsScene*  __qt_scene5 = (QGraphicsScene* ) scene5;
    QGraphicsEllipseItem_QtDShell *__qt_this = new QGraphicsEllipseItem_QtDShell(d_ptr, (double )x0, (double )y1, (double )w2, (double )h3, (QGraphicsItem* )__qt_parent4, (QGraphicsScene* )__qt_scene5);
    return (void *) __qt_this;

}

// QGraphicsEllipseItem::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_rect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsEllipseItem::setRect(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_setRect_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    __qt_this->setRect((const QRectF& )rect0);

}

// QGraphicsEllipseItem::setRect(double x, double y, double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_setRect_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    __qt_this->setRect((double )x0, (double )y1, (double )w2, (double )h3);

}

// QGraphicsEllipseItem::setSpanAngle(int angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_setSpanAngle_int
(void* __this_nativeId,
 int angle0)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    __qt_this->setSpanAngle((int )angle0);

}

// QGraphicsEllipseItem::setStartAngle(int angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_setStartAngle_int
(void* __this_nativeId,
 int angle0)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    __qt_this->setStartAngle((int )angle0);

}

// QGraphicsEllipseItem::spanAngle() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsEllipseItem_spanAngle_const
(void* __this_nativeId)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->spanAngle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsEllipseItem::startAngle() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsEllipseItem_startAngle_const
(void* __this_nativeId)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->startAngle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsEllipseItem::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_boundingRect(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsEllipseItem::contains(const QPointF & point) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsEllipseItem_contains_QPointF_const
(void* __this_nativeId,
 QPointF point0)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_contains((const QPointF& )point0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsEllipseItem::extension(const QVariant & variant) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsEllipseItem_extension_QVariant_const
(void* __this_nativeId,
 QVariant* variant0)
{
    QVariant __qt_variant0 = variant0 == NULL ? QVariant() : QVariant(*variant0);
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_extension((const QVariant& )__qt_variant0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsEllipseItem::isObscuredBy(const QGraphicsItem * item) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsEllipseItem_isObscuredBy_QGraphicsItem_const
(void* __this_nativeId,
 void* item0)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isObscuredBy((const QGraphicsItem* )__qt_item0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsEllipseItem::opaqueArea() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsEllipseItem_opaqueArea_const
(void* __this_nativeId)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_opaqueArea(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsEllipseItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsEllipseItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsEllipseItem::shape() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsEllipseItem_shape_const
(void* __this_nativeId)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_shape(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsEllipseItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsEllipseItem_type_const
(void* __this_nativeId)
{
    QGraphicsEllipseItem_QtDShell *__qt_this = (QGraphicsEllipseItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractGraphicsShapeItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


