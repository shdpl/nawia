#include <QVariant>
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
#include <qpixmap.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGraphicsPixmapItem_shell.h"
#include <iostream>
#include <qgraphicsitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QGraphicsItem* qtd_QGraphicsPixmapItem_cast_to_QGraphicsItem(QGraphicsPixmapItem *ptr)
{
    return dynamic_cast<QGraphicsItem*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_delete(void* nativeId)
{
    delete (QGraphicsPixmapItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_destroy(void* nativeId)
{
    call_destructor((QGraphicsPixmapItem_QtDShell*)nativeId);
}

QGraphicsPixmapItem_QtDShell::QGraphicsPixmapItem_QtDShell(void *d_ptr, QGraphicsItem*  parent0, QGraphicsScene*  scene1)
    : QGraphicsPixmapItem(parent0, scene1),
      QtdObjectLink(d_ptr)
{
}

QGraphicsPixmapItem_QtDShell::QGraphicsPixmapItem_QtDShell(void *d_ptr, const QPixmap&  pixmap0, QGraphicsItem*  parent1, QGraphicsScene*  scene2)
    : QGraphicsPixmapItem(pixmap0, parent1, scene2),
      QtdObjectLink(d_ptr)
{
}

QGraphicsPixmapItem_QtDShell::~QGraphicsPixmapItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGraphicsPixmapItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsItem_advance_int_dispatch, (void *dId, int phase0))
void QGraphicsPixmapItem_QtDShell::advance(int  phase0)
{
    qtd_QGraphicsItem_advance_int_dispatch(this->dId, (int )phase0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_boundingRect_const_dispatch, (void *dId, QRectF *__d_return_value))
QRectF  QGraphicsPixmapItem_QtDShell::boundingRect() const
{
    QRectF __d_return_value;
    qtd_QGraphicsItem_boundingRect_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch, (void *dId, void* other0, int mode1))
bool  QGraphicsPixmapItem_QtDShell::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(this->dId, (QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch, (void *dId, void* path0, int mode1))
bool  QGraphicsPixmapItem_QtDShell::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(this->dId, &(QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_contains_QPointF_const_dispatch, (void *dId, QPointF* point0))
bool  QGraphicsPixmapItem_QtDShell::contains(const QPointF&  point0) const
{
    return qtd_QGraphicsItem_contains_QPointF_const_dispatch(this->dId, &(QPointF& )point0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(this->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_extension_QVariant_const_dispatch, (void *dId, void* variant0))
QVariant  QGraphicsPixmapItem_QtDShell::extension(const QVariant&  variant0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_extension_QVariant_const_dispatch(this->dId, &(QVariant& )variant0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(this->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(this->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(this->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QGraphicsPixmapItem_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(this->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch, (void *dId, void* item0))
bool  QGraphicsPixmapItem_QtDShell::isObscuredBy(const QGraphicsItem*  item0) const
{
    return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(this->dId, (QGraphicsItem* )item0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch, (void *dId, int change0, void* value1))
QVariant  QGraphicsPixmapItem_QtDShell::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(this->dId, (QGraphicsItem::GraphicsItemChange )change0, &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(this->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(this->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_opaqueArea_const_dispatch, (void *dId))
QPainterPath  QGraphicsPixmapItem_QtDShell::opaqueArea() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_opaqueArea_const_dispatch(this->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
void QGraphicsPixmapItem_QtDShell::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(this->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsPixmapItem_QtDShell::sceneEvent(QEvent*  event0)
{
    return qtd_QGraphicsItem_sceneEvent_QEvent_dispatch(this->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QGraphicsPixmapItem_QtDShell::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
    return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(this->dId, (QGraphicsItem* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_shape_const_dispatch, (void *dId))
QPainterPath  QGraphicsPixmapItem_QtDShell::shape() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_shape_const_dispatch(this->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QGraphicsItem_type_const_dispatch, (void *dId))
int  QGraphicsPixmapItem_QtDShell::type() const
{
    return qtd_QGraphicsItem_type_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
void QGraphicsPixmapItem_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(this->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsPixmapItem_QtDShell::__public_addToIndex()
{
    QGraphicsItem::addToIndex();
}

void QGraphicsPixmapItem_QtDShell::__public_prepareGeometryChange()
{
    QGraphicsItem::prepareGeometryChange();
}

void QGraphicsPixmapItem_QtDShell::__public_removeFromIndex()
{
    QGraphicsItem::removeFromIndex();
}

void QGraphicsPixmapItem_QtDShell::__public_updateMicroFocus()
{
    QGraphicsItem::updateMicroFocus();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsPixmapItem_QtDShell::__override_advance(int  phase0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::advance((int )phase0);
    } else {
        advance((int )phase0);
    }
}

QRectF  QGraphicsPixmapItem_QtDShell::__override_boundingRect(bool static_call) const
{
    if (static_call) {
        return QGraphicsPixmapItem::boundingRect();
    } else {
        return boundingRect();
    }
}

bool  QGraphicsPixmapItem_QtDShell::__override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsPixmapItem_QtDShell::__override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsPixmapItem_QtDShell::__override_contains(const QPointF&  point0, bool static_call) const
{
    if (static_call) {
        return QGraphicsPixmapItem::contains((const QPointF& )point0);
    } else {
        return contains((const QPointF& )point0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

QVariant  QGraphicsPixmapItem_QtDShell::__override_extension(const QVariant&  variant0, bool static_call) const
{
    if (static_call) {
        return QGraphicsPixmapItem::extension((const QVariant& )variant0);
    } else {
        return extension((const QVariant& )variant0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsPixmapItem_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QGraphicsPixmapItem_QtDShell::__override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const
{
    if (static_call) {
        return QGraphicsPixmapItem::isObscuredBy((const QGraphicsItem* )item0);
    } else {
        return isObscuredBy((const QGraphicsItem* )item0);
    }
}

QVariant  QGraphicsPixmapItem_QtDShell::__override_itemChange(int  change0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    } else {
        return itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsPixmapItem_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

QPainterPath  QGraphicsPixmapItem_QtDShell::__override_opaqueArea(bool static_call) const
{
    if (static_call) {
        return QGraphicsPixmapItem::opaqueArea();
    } else {
        return opaqueArea();
    }
}

void QGraphicsPixmapItem_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        QGraphicsPixmapItem::paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    } else {
        paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

bool  QGraphicsPixmapItem_QtDShell::__override_sceneEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEvent((QEvent* )event0);
    } else {
        return sceneEvent((QEvent* )event0);
    }
}

bool  QGraphicsPixmapItem_QtDShell::__override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    } else {
        return sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    }
}

QPainterPath  QGraphicsPixmapItem_QtDShell::__override_shape(bool static_call) const
{
    if (static_call) {
        return QGraphicsPixmapItem::shape();
    } else {
        return shape();
    }
}

int  QGraphicsPixmapItem_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QGraphicsPixmapItem::type();
    } else {
        return type();
    }
}

void QGraphicsPixmapItem_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

// ---externC---
// QGraphicsPixmapItem::QGraphicsPixmapItem(QGraphicsItem * parent_, QGraphicsScene * scene)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_QGraphicsPixmapItem_QGraphicsItem_QGraphicsScene
(void *d_ptr,
 void* parent0,
 void* scene1)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QGraphicsScene*  __qt_scene1 = (QGraphicsScene* ) scene1;
    QGraphicsPixmapItem_QtDShell *__qt_this = new QGraphicsPixmapItem_QtDShell(d_ptr, (QGraphicsItem* )__qt_parent0, (QGraphicsScene* )__qt_scene1);
    return (void *) __qt_this;

}

// QGraphicsPixmapItem::QGraphicsPixmapItem(const QPixmap & pixmap, QGraphicsItem * parent_, QGraphicsScene * scene)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_QGraphicsPixmapItem_QPixmap_QGraphicsItem_QGraphicsScene
(void *d_ptr,
 void* pixmap0,
 void* parent1,
 void* scene2)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QGraphicsItem*  __qt_parent1 = (QGraphicsItem* ) parent1;
    QGraphicsScene*  __qt_scene2 = (QGraphicsScene* ) scene2;
    QGraphicsPixmapItem_QtDShell *__qt_this = new QGraphicsPixmapItem_QtDShell(d_ptr, (const QPixmap& )__qt_pixmap0, (QGraphicsItem* )__qt_parent1, (QGraphicsScene* )__qt_scene2);
    return (void *) __qt_this;

}

// QGraphicsPixmapItem::acceptDrops() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_acceptDrops_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptDrops();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::acceptHoverEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_acceptHoverEvents_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptHoverEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::acceptTouchEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_acceptTouchEvents_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptTouchEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::acceptedMouseButtons() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsPixmapItem_acceptedMouseButtons_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QGraphicsItem::acceptedMouseButtons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::acceptsHoverEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_acceptsHoverEvents_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::acceptsHoverEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::addToIndex()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_addToIndex
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->__public_addToIndex();

}

// QGraphicsPixmapItem::boundingRegion(const QTransform & itemToDeviceTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_boundingRegion_QTransform_const
(void* __this_nativeId,
 void* itemToDeviceTransform0)
{
    const QTransform&  __qt_itemToDeviceTransform0 = (const QTransform& ) *(QTransform *)itemToDeviceTransform0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->QGraphicsItem::boundingRegion((const QTransform& )__qt_itemToDeviceTransform0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::boundingRegionGranularity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_boundingRegionGranularity_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::boundingRegionGranularity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::cacheMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsPixmapItem_cacheMode_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QGraphicsItem::cacheMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::childItems() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_childItems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->QGraphicsItem::childItems();

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsPixmapItem::childrenBoundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_childrenBoundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::childrenBoundingRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::clearFocus()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_clearFocus
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::clearFocus();

}

// QGraphicsPixmapItem::clipPath() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_clipPath_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::clipPath();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::collidingItems(Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_collidingItems_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 int mode0)
{
    Qt::ItemSelectionMode __qt_mode0 = (Qt::ItemSelectionMode) mode0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->QGraphicsItem::collidingItems((Qt::ItemSelectionMode )__qt_mode0);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsPixmapItem::commonAncestorItem(const QGraphicsItem * other) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_commonAncestorItem_QGraphicsItem_const
(void* __this_nativeId,
 void* other0)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::commonAncestorItem((const QGraphicsItem* )__qt_other0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::cursor() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_cursor_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QCursor  __qt_return_value = __qt_this->QGraphicsItem::cursor();

    void* __d_return_value = (void*) new QCursor(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::data(int key) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_data_int_const
(void* __this_nativeId,
 int key0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->QGraphicsItem::data((int )key0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::deviceTransform(const QTransform & viewportTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_deviceTransform_QTransform_const
(void* __this_nativeId,
 void* viewportTransform0)
{
    const QTransform&  __qt_viewportTransform0 = (const QTransform& ) *(QTransform *)viewportTransform0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::deviceTransform((const QTransform& )__qt_viewportTransform0);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::effectiveOpacity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_effectiveOpacity_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::effectiveOpacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::ensureVisible(const QRectF & rect, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_ensureVisible_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int xmargin1,
 int ymargin2)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ensureVisible((const QRectF& )rect0, (int )xmargin1, (int )ymargin2);

}

// QGraphicsPixmapItem::ensureVisible(double x, double y, double w, double h, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_ensureVisible_double_double_double_double_int_int
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xmargin4,
 int ymargin5)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ensureVisible((double )x0, (double )y1, (double )w2, (double )h3, (int )xmargin4, (int )ymargin5);

}

// QGraphicsPixmapItem::filtersChildEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_filtersChildEvents_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::filtersChildEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsPixmapItem_flags_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QGraphicsItem::flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::focusItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_focusItem_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::focusItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::focusProxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_focusProxy_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::focusProxy();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::focusScopeItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_focusScopeItem_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::focusScopeItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::grabKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_grabKeyboard
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::grabKeyboard();

}

// QGraphicsPixmapItem::grabMouse()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_grabMouse
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::grabMouse();

}

// QGraphicsPixmapItem::group() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_group_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItemGroup*  __qt_return_value = __qt_this->QGraphicsItem::group();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::handlesChildEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_handlesChildEvents_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::handlesChildEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::hasCursor() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_hasCursor_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::hasCursor();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::hasFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_hasFocus_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::hasFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::hide()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_hide
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::hide();

}

// QGraphicsPixmapItem::installSceneEventFilter(QGraphicsItem * filterItem)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_installSceneEventFilter_QGraphicsItem
(void* __this_nativeId,
 void* filterItem0)
{
    QGraphicsItem*  __qt_filterItem0 = (QGraphicsItem* ) filterItem0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::installSceneEventFilter((QGraphicsItem* )__qt_filterItem0);

}

// QGraphicsPixmapItem::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isActive_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isAncestorOf(const QGraphicsItem * child) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isAncestorOf_QGraphicsItem_const
(void* __this_nativeId,
 void* child0)
{
    const QGraphicsItem*  __qt_child0 = (const QGraphicsItem* ) child0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isAncestorOf((const QGraphicsItem* )__qt_child0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isClipped() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isClipped_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isClipped();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isEnabled_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isObscured() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isObscured_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isObscured();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isObscured(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isObscured_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isObscured((const QRectF& )rect0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isObscured(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isObscured_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isObscured((double )x0, (double )y1, (double )w2, (double )h3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isPanel() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isPanel_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isPanel();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isSelected() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isSelected_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isSelected();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isUnderMouse() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isUnderMouse_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isUnderMouse();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isVisible_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isVisibleTo(const QGraphicsItem * parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isVisibleTo_QGraphicsItem_const
(void* __this_nativeId,
 void* parent0)
{
    const QGraphicsItem*  __qt_parent0 = (const QGraphicsItem* ) parent0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isVisibleTo((const QGraphicsItem* )__qt_parent0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isWidget() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isWidget_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isWidget();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::isWindow() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isWindow_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsItem::isWindow();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::itemTransform(const QGraphicsItem * other, bool * ok) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_itemTransform_QGraphicsItem_nativepointerbool_const
(void* __this_nativeId,
 void* other0,
 bool* ok1)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    bool*  __qt_ok1 = (bool* ) ok1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::itemTransform((const QGraphicsItem* )__qt_other0, (bool* )__qt_ok1);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromItem(const QGraphicsItem * item, const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromItem_QGraphicsItem_QPainterPath_const
(void* __this_nativeId,
 void* item0,
 void* path1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPainterPath&  __qt_path1 = (const QPainterPath& ) *(QPainterPath *)path1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QPainterPath& )__qt_path1);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromItem(const QGraphicsItem * item, const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapFromItem_QGraphicsItem_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QPointF& )point1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapFromItem(const QGraphicsItem * item, const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromItem_QGraphicsItem_QPolygonF_const
(void* __this_nativeId,
 void* item0,
 void* polygon1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPolygonF&  __qt_polygon1 = (const QPolygonF& ) *(QPolygonF *)polygon1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QPolygonF& )__qt_polygon1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromItem(const QGraphicsItem * item, double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapFromItem_QGraphicsItem_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapFromItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromParent(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromParent_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromParent(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapFromParent_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapFromParent(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromParent_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromParent_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromParent(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapFromParent_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapFromParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromParent_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromParent((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromScene(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapFromScene_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapFromScene(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromScene_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromScene_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapFromScene(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapFromScene_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapFromScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapFromScene_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapFromScene((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapRectFromItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectFromItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectFromItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectFromItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectFromParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectFromParent_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromParent((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectFromParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectFromParent_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromParent((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectFromScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectFromScene_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromScene((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectFromScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectFromScene_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectFromScene((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectToItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectToItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectToItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectToItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectToParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectToParent_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToParent((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectToParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectToParent_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToParent((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectToScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectToScene_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToScene((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapRectToScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapRectToScene_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::mapRectToScene((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapToItem(const QGraphicsItem * item, const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToItem_QGraphicsItem_QPainterPath_const
(void* __this_nativeId,
 void* item0,
 void* path1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPainterPath&  __qt_path1 = (const QPainterPath& ) *(QPainterPath *)path1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QPainterPath& )__qt_path1);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToItem(const QGraphicsItem * item, const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapToItem_QGraphicsItem_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QPointF& )point1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapToItem(const QGraphicsItem * item, const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToItem_QGraphicsItem_QPolygonF_const
(void* __this_nativeId,
 void* item0,
 void* polygon1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPolygonF&  __qt_polygon1 = (const QPolygonF& ) *(QPolygonF *)polygon1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QPolygonF& )__qt_polygon1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToItem(const QGraphicsItem * item, double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapToItem_QGraphicsItem_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapToItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToParent(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToParent_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToParent(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapToParent_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapToParent(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToParent_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToParent_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToParent(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapToParent_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapToParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToParent_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToParent((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToScene(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapToScene_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapToScene(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToScene_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToScene_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::mapToScene(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mapToScene_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::mapToScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_mapToScene_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->QGraphicsItem::mapToScene((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::moveBy(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_moveBy_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::moveBy((double )dx0, (double )dy1);

}

// QGraphicsPixmapItem::offset() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_offset_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->offset();

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::opacity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_opacity_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::opacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::panel() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_panel_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::panel();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::parentItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_parentItem_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::parentItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::parentObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_parentObject_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsObject*  __qt_return_value = __qt_this->QGraphicsItem::parentObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::parentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_parentWidget_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->QGraphicsItem::parentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::pixmap() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_pixmap_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::prepareGeometryChange()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_prepareGeometryChange
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->__public_prepareGeometryChange();

}

// QGraphicsPixmapItem::removeFromIndex()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_removeFromIndex
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->__public_removeFromIndex();

}

// QGraphicsPixmapItem::removeSceneEventFilter(QGraphicsItem * filterItem)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_removeSceneEventFilter_QGraphicsItem
(void* __this_nativeId,
 void* filterItem0)
{
    QGraphicsItem*  __qt_filterItem0 = (QGraphicsItem* ) filterItem0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::removeSceneEventFilter((QGraphicsItem* )__qt_filterItem0);

}

// QGraphicsPixmapItem::resetTransform()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_resetTransform
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::resetTransform();

}

// QGraphicsPixmapItem::rotate(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_rotate_double
(void* __this_nativeId,
 double angle0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::rotate((double )angle0);

}

// QGraphicsPixmapItem::rotation() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_rotation_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::rotation();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::scale() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_scale_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::scale();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::scale(double sx, double sy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_scale_double_double
(void* __this_nativeId,
 double sx0,
 double sy1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::scale((double )sx0, (double )sy1);

}

// QGraphicsPixmapItem::scene() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_scene_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsScene*  __qt_return_value = __qt_this->QGraphicsItem::scene();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::sceneBoundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_sceneBoundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsItem::sceneBoundingRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::sceneTransform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_sceneTransform_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::sceneTransform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::scroll(double dx, double dy, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_scroll_double_double_QRectF
(void* __this_nativeId,
 double dx0,
 double dy1,
 QRectF rect2)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::scroll((double )dx0, (double )dy1, (const QRectF& )rect2);

}

// QGraphicsPixmapItem::setAcceptDrops(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setAcceptDrops_bool
(void* __this_nativeId,
 bool on0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptDrops((bool )on0);

}

// QGraphicsPixmapItem::setAcceptHoverEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setAcceptHoverEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptHoverEvents((bool )enabled0);

}

// QGraphicsPixmapItem::setAcceptTouchEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setAcceptTouchEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptTouchEvents((bool )enabled0);

}

// QGraphicsPixmapItem::setAcceptedMouseButtons(QFlags<Qt::MouseButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setAcceptedMouseButtons_MouseButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<Qt::MouseButton> __qt_buttons0 = (QFlags<Qt::MouseButton>) buttons0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptedMouseButtons((Qt::MouseButtons )__qt_buttons0);

}

// QGraphicsPixmapItem::setAcceptsHoverEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setAcceptsHoverEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setAcceptsHoverEvents((bool )enabled0);

}

// QGraphicsPixmapItem::setActive(bool active)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setActive_bool
(void* __this_nativeId,
 bool active0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setActive((bool )active0);

}

// QGraphicsPixmapItem::setBoundingRegionGranularity(double granularity)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setBoundingRegionGranularity_double
(void* __this_nativeId,
 double granularity0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setBoundingRegionGranularity((double )granularity0);

}

// QGraphicsPixmapItem::setCacheMode(QGraphicsItem::CacheMode mode, const QSize & cacheSize)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setCacheMode_CacheMode_QSize
(void* __this_nativeId,
 int mode0,
 QSize cacheSize1)
{
    QGraphicsItem::CacheMode __qt_mode0 = (QGraphicsItem::CacheMode) mode0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setCacheMode((QGraphicsItem::CacheMode )__qt_mode0, (const QSize& )cacheSize1);

}

// QGraphicsPixmapItem::setCursor(const QCursor & cursor)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setCursor_QCursor
(void* __this_nativeId,
 void* cursor0)
{
    const QCursor&  __qt_cursor0 = (const QCursor& ) *(QCursor *)cursor0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setCursor((const QCursor& )__qt_cursor0);

}

// QGraphicsPixmapItem::setData(int key, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setData_int_QVariant
(void* __this_nativeId,
 int key0,
 QVariant* value1)
{
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setData((int )key0, (const QVariant& )__qt_value1);

}

// QGraphicsPixmapItem::setEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setEnabled((bool )enabled0);

}

// QGraphicsPixmapItem::setFiltersChildEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setFiltersChildEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFiltersChildEvents((bool )enabled0);

}

// QGraphicsPixmapItem::setFlag(QGraphicsItem::GraphicsItemFlag flag, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setFlag_GraphicsItemFlag_bool
(void* __this_nativeId,
 int flag0,
 bool enabled1)
{
    QGraphicsItem::GraphicsItemFlag __qt_flag0 = (QGraphicsItem::GraphicsItemFlag) flag0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFlag((QGraphicsItem::GraphicsItemFlag )__qt_flag0, (bool )enabled1);

}

// QGraphicsPixmapItem::setFlags(QFlags<QGraphicsItem::GraphicsItemFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setFlags_GraphicsItemFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QGraphicsItem::GraphicsItemFlag> __qt_flags0 = (QFlags<QGraphicsItem::GraphicsItemFlag>) flags0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFlags((QGraphicsItem::GraphicsItemFlags )__qt_flags0);

}

// QGraphicsPixmapItem::setFocus(Qt::FocusReason focusReason)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setFocus_FocusReason
(void* __this_nativeId,
 int focusReason0)
{
    Qt::FocusReason __qt_focusReason0 = (Qt::FocusReason) focusReason0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFocus((Qt::FocusReason )__qt_focusReason0);

}

// QGraphicsPixmapItem::setFocusProxy(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setFocusProxy_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setFocusProxy((QGraphicsItem* )__qt_item0);

}

// QGraphicsPixmapItem::setGroup(QGraphicsItemGroup * group)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setGroup_QGraphicsItemGroup
(void* __this_nativeId,
 void* group0)
{
    QGraphicsItemGroup*  __qt_group0 = (QGraphicsItemGroup* ) group0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setGroup((QGraphicsItemGroup* )__qt_group0);

}

// QGraphicsPixmapItem::setHandlesChildEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setHandlesChildEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setHandlesChildEvents((bool )enabled0);

}

// QGraphicsPixmapItem::setOffset(const QPointF & offset)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setOffset_QPointF
(void* __this_nativeId,
 QPointF offset0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->setOffset((const QPointF& )offset0);

}

// QGraphicsPixmapItem::setOffset(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setOffset_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->setOffset((double )x0, (double )y1);

}

// QGraphicsPixmapItem::setOpacity(double opacity)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setOpacity_double
(void* __this_nativeId,
 double opacity0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setOpacity((double )opacity0);

}

// QGraphicsPixmapItem::setParentItem(QGraphicsItem * parent_)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setParentItem_QGraphicsItem
(void* __this_nativeId,
 void* parent0)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setParentItem((QGraphicsItem* )__qt_parent0);

}

// QGraphicsPixmapItem::setPixmap(const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setPixmap_QPixmap
(void* __this_nativeId,
 void* pixmap0)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->setPixmap((const QPixmap& )__qt_pixmap0);

}

// QGraphicsPixmapItem::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setPos((const QPointF& )pos0);

}

// QGraphicsPixmapItem::setPos(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setPos_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setPos((double )x0, (double )y1);

}

// QGraphicsPixmapItem::setRotation(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setRotation_double
(void* __this_nativeId,
 double angle0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setRotation((double )angle0);

}

// QGraphicsPixmapItem::setScale(double scale)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setScale_double
(void* __this_nativeId,
 double scale0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setScale((double )scale0);

}

// QGraphicsPixmapItem::setSelected(bool selected)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setSelected_bool
(void* __this_nativeId,
 bool selected0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setSelected((bool )selected0);

}

// QGraphicsPixmapItem::setShapeMode(QGraphicsPixmapItem::ShapeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setShapeMode_ShapeMode
(void* __this_nativeId,
 int mode0)
{
    QGraphicsPixmapItem::ShapeMode __qt_mode0 = (QGraphicsPixmapItem::ShapeMode) mode0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->setShapeMode((QGraphicsPixmapItem::ShapeMode )__qt_mode0);

}

// QGraphicsPixmapItem::setToolTip(const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setToolTip_string
(void* __this_nativeId,
 DArray toolTip0)
{
    QString __qt_toolTip0 = QString::fromUtf8((const char *)toolTip0.ptr, toolTip0.length);
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setToolTip((const QString& )__qt_toolTip0);

}

// QGraphicsPixmapItem::setTransform(const QTransform & matrix, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setTransform_QTransform_bool
(void* __this_nativeId,
 void* matrix0,
 bool combine1)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setTransform((const QTransform& )__qt_matrix0, (bool )combine1);

}

// QGraphicsPixmapItem::setTransformOriginPoint(const QPointF & origin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setTransformOriginPoint_QPointF
(void* __this_nativeId,
 QPointF origin0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setTransformOriginPoint((const QPointF& )origin0);

}

// QGraphicsPixmapItem::setTransformOriginPoint(double ax, double ay)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setTransformOriginPoint_double_double
(void* __this_nativeId,
 double ax0,
 double ay1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setTransformOriginPoint((double )ax0, (double )ay1);

}

// QGraphicsPixmapItem::setTransformationMode(Qt::TransformationMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setTransformationMode_TransformationMode
(void* __this_nativeId,
 int mode0)
{
    Qt::TransformationMode __qt_mode0 = (Qt::TransformationMode) mode0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->setTransformationMode((Qt::TransformationMode )__qt_mode0);

}

// QGraphicsPixmapItem::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setVisible((bool )visible0);

}

// QGraphicsPixmapItem::setX(double x)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setX_double
(void* __this_nativeId,
 double x0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setX((double )x0);

}

// QGraphicsPixmapItem::setY(double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setY_double
(void* __this_nativeId,
 double y0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setY((double )y0);

}

// QGraphicsPixmapItem::setZValue(double z)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_setZValue_double
(void* __this_nativeId,
 double z0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::setZValue((double )z0);

}

// QGraphicsPixmapItem::shapeMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsPixmapItem_shapeMode_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->shapeMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::shear(double sh, double sv)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_shear_double_double
(void* __this_nativeId,
 double sh0,
 double sv1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::shear((double )sh0, (double )sv1);

}

// QGraphicsPixmapItem::show()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_show
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::show();

}

// QGraphicsPixmapItem::stackBefore(const QGraphicsItem * sibling)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_stackBefore_QGraphicsItem
(void* __this_nativeId,
 void* sibling0)
{
    const QGraphicsItem*  __qt_sibling0 = (const QGraphicsItem* ) sibling0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::stackBefore((const QGraphicsItem* )__qt_sibling0);

}

// QGraphicsPixmapItem::toGraphicsObject()
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_toGraphicsObject
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsObject*  __qt_return_value = __qt_this->QGraphicsItem::toGraphicsObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::toGraphicsObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_toGraphicsObject_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    const QGraphicsObject*  __qt_return_value = __qt_this->QGraphicsItem::toGraphicsObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->QGraphicsItem::toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QGraphicsPixmapItem::topLevelItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_topLevelItem_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsItem::topLevelItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::topLevelWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_topLevelWidget_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->QGraphicsItem::topLevelWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::transform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_transform_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->QGraphicsItem::transform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::transformOriginPoint() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_transformOriginPoint_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->QGraphicsItem::transformOriginPoint();

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::transformationMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsPixmapItem_transformationMode_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->transformationMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_translate_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::translate((double )dx0, (double )dy1);

}

// QGraphicsPixmapItem::ungrabKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_ungrabKeyboard
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ungrabKeyboard();

}

// QGraphicsPixmapItem::ungrabMouse()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_ungrabMouse
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::ungrabMouse();

}

// QGraphicsPixmapItem::unsetCursor()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_unsetCursor
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::unsetCursor();

}

// QGraphicsPixmapItem::update(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_update_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::update((const QRectF& )rect0);

}

// QGraphicsPixmapItem::update(double x, double y, double width, double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_update_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double width2,
 double height3)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsItem::update((double )x0, (double )y1, (double )width2, (double )height3);

}

// QGraphicsPixmapItem::updateMicroFocus()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_updateMicroFocus
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    __qt_this->__public_updateMicroFocus();

}

// QGraphicsPixmapItem::window() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_window_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->QGraphicsItem::window();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::x() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_x_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::x();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::y() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_y_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::y();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::zValue() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsPixmapItem_zValue_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsItem::zValue();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::advance(int phase)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_advance_int
(void* __this_nativeId,
 int phase0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_advance((int )phase0, __do_static_call);

}

// QGraphicsPixmapItem::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_boundingRect(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsPixmapItem::collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const
(void* __this_nativeId,
 void* other0,
 int mode1)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_collidesWithItem((const QGraphicsItem* )__qt_other0, (Qt::ItemSelectionMode )__qt_mode1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_collidesWithPath_QPainterPath_ItemSelectionMode_const
(void* __this_nativeId,
 void* path0,
 int mode1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_collidesWithPath((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::contains(const QPointF & point) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_contains_QPointF_const
(void* __this_nativeId,
 QPointF point0)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_contains((const QPointF& )point0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_contextMenuEvent_QGraphicsSceneContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneContextMenuEvent*  __qt_event0 = (QGraphicsSceneContextMenuEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QGraphicsSceneContextMenuEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::dragEnterEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_dragEnterEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_dragLeaveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::dragMoveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_dragMoveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::dropEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_dropEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::extension(const QVariant & variant) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_extension_QVariant_const
(void* __this_nativeId,
 QVariant* variant0)
{
    QVariant __qt_variant0 = variant0 == NULL ? QVariant() : QVariant(*variant0);
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_extension((const QVariant& )__qt_variant0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::hoverEnterEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_hoverEnterEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_hoverEnterEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_hoverLeaveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_hoverLeaveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::hoverMoveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_hoverMoveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_hoverMoveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::inputMethodEvent(QInputMethodEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* event0)
{
    QInputMethodEvent*  __qt_event0 = (QInputMethodEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::inputMethodQuery(Qt::InputMethodQuery query) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int query0)
{
    Qt::InputMethodQuery __qt_query0 = (Qt::InputMethodQuery) query0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_query0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::isObscuredBy(const QGraphicsItem * item) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_isObscuredBy_QGraphicsItem_const
(void* __this_nativeId,
 void* item0)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isObscuredBy((const QGraphicsItem* )__qt_item0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_itemChange_GraphicsItemChange_QVariant
(void* __this_nativeId,
 int change0,
 QVariant* value1)
{
    QGraphicsItem::GraphicsItemChange __qt_change0 = (QGraphicsItem::GraphicsItemChange) change0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_itemChange((QGraphicsItem::GraphicsItemChange )__qt_change0, (const QVariant& )__qt_value1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::keyReleaseEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mouseMoveEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::mousePressEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mousePressEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_mouseReleaseEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsPixmapItem::opaqueArea() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_opaqueArea_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_opaqueArea(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsPixmapItem::sceneEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_sceneEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_sceneEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::sceneEventFilter(QGraphicsItem * watched, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsPixmapItem_sceneEventFilter_QGraphicsItem_QEvent
(void* __this_nativeId,
 void* watched0,
 void* event1)
{
    QGraphicsItem*  __qt_watched0 = (QGraphicsItem* ) watched0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_sceneEventFilter((QGraphicsItem* )__qt_watched0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::shape() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsPixmapItem_shape_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_shape(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsPixmapItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsPixmapItem_type_const
(void* __this_nativeId)
{
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsPixmapItem::wheelEvent(QGraphicsSceneWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsPixmapItem_wheelEvent_QGraphicsSceneWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneWheelEvent*  __qt_event0 = (QGraphicsSceneWheelEvent* ) event0;
    QGraphicsPixmapItem_QtDShell *__qt_this = (QGraphicsPixmapItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsPixmapItem*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QGraphicsSceneWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


