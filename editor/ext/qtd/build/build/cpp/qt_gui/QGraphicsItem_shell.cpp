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
#include <qpolygon.h>
#include <qregion.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGraphicsItem_shell.h"
#include <iostream>
#include <qgraphicsitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QGraphicsItem* qtd_QGraphicsItem_cast_to_QGraphicsItem(QGraphicsItem *ptr)
{
    return dynamic_cast<QGraphicsItem*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_delete(void* nativeId)
{
    delete (QGraphicsItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_destroy(void* nativeId)
{
    call_destructor((QGraphicsItem_QtDShell*)nativeId);
}

QGraphicsItem_QtDShell::QGraphicsItem_QtDShell(void *d_ptr, QGraphicsItem*  parent0, QGraphicsScene*  scene1)
    : QGraphicsItem(parent0, scene1),
      QtdObjectLink(d_ptr)
{
}

QGraphicsItem_QtDShell::~QGraphicsItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGraphicsItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsItem_advance_int_dispatch, (void *dId, int phase0))
QTD_FUNC(GUI, QGraphicsItem_advance_int_dispatch)
void QGraphicsItem_QtDShell::advance(int  phase0)
{
    qtd_QGraphicsItem_advance_int_dispatch(this->dId, (int )phase0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_boundingRect_const_dispatch, (void *dId, QRectF *__d_return_value))
QTD_FUNC(GUI, QGraphicsItem_boundingRect_const_dispatch)
QRectF  QGraphicsItem_QtDShell::boundingRect() const
{
    QRectF __d_return_value;
    qtd_QGraphicsItem_boundingRect_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch, (void *dId, void* other0, int mode1))
QTD_FUNC(GUI, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch)
bool  QGraphicsItem_QtDShell::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(this->dId, (QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch, (void *dId, void* path0, int mode1))
QTD_FUNC(GUI, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch)
bool  QGraphicsItem_QtDShell::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(this->dId, &(QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_contains_QPointF_const_dispatch, (void *dId, QPointF* point0))
QTD_FUNC(GUI, QGraphicsItem_contains_QPointF_const_dispatch)
bool  QGraphicsItem_QtDShell::contains(const QPointF&  point0) const
{
    return qtd_QGraphicsItem_contains_QPointF_const_dispatch(this->dId, &(QPointF& )point0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch)
void QGraphicsItem_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(this->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsItem_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsItem_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsItem_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch)
void QGraphicsItem_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(this->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_extension_QVariant_const_dispatch, (void *dId, void* variant0))
QTD_FUNC(GUI, QGraphicsItem_extension_QVariant_const_dispatch)
QVariant  QGraphicsItem_QtDShell::extension(const QVariant&  variant0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_extension_QVariant_const_dispatch(this->dId, &(QVariant& )variant0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_focusInEvent_QFocusEvent_dispatch)
void QGraphicsItem_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(this->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch)
void QGraphicsItem_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(this->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch)
void QGraphicsItem_QtDShell::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch)
void QGraphicsItem_QtDShell::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch)
void QGraphicsItem_QtDShell::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(this->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch)
void QGraphicsItem_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(this->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QTD_FUNC(GUI, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch)
QVariant  QGraphicsItem_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(this->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch, (void *dId, void* item0))
QTD_FUNC(GUI, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch)
bool  QGraphicsItem_QtDShell::isObscuredBy(const QGraphicsItem*  item0) const
{
    return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(this->dId, (QGraphicsItem* )item0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch, (void *dId, int change0, void* value1))
QTD_FUNC(GUI, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch)
QVariant  QGraphicsItem_QtDShell::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(this->dId, (QGraphicsItem::GraphicsItemChange )change0, &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch)
void QGraphicsItem_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(this->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch)
void QGraphicsItem_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(this->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsItem_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsItem_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsItem_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch)
void QGraphicsItem_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(this->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_opaqueArea_const_dispatch, (void *dId))
QTD_FUNC(GUI, QGraphicsItem_opaqueArea_const_dispatch)
QPainterPath  QGraphicsItem_QtDShell::opaqueArea() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_opaqueArea_const_dispatch(this->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
QTD_FUNC(GUI, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch)
void QGraphicsItem_QtDShell::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(this->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEvent_QEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_sceneEvent_QEvent_dispatch)
bool  QGraphicsItem_QtDShell::sceneEvent(QEvent*  event0)
{
    return qtd_QGraphicsItem_sceneEvent_QEvent_dispatch(this->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch, (void *dId, void* watched0, void* event1))
QTD_FUNC(GUI, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch)
bool  QGraphicsItem_QtDShell::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
    return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(this->dId, (QGraphicsItem* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_shape_const_dispatch, (void *dId))
QTD_FUNC(GUI, QGraphicsItem_shape_const_dispatch)
QPainterPath  QGraphicsItem_QtDShell::shape() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_shape_const_dispatch(this->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QGraphicsItem_type_const_dispatch, (void *dId))
QTD_FUNC(GUI, QGraphicsItem_type_const_dispatch)
int  QGraphicsItem_QtDShell::type() const
{
    return qtd_QGraphicsItem_type_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch)
void QGraphicsItem_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(this->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_initCallBacks(VoidFunc *virts) {
    qtd_QGraphicsItem_advance_int_dispatch = (qtd_QGraphicsItem_advance_int_dispatch_t) virts[0];
    qtd_QGraphicsItem_boundingRect_const_dispatch = (qtd_QGraphicsItem_boundingRect_const_dispatch_t) virts[1];
    qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch = (qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch_t) virts[2];
    qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch = (qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch_t) virts[3];
    qtd_QGraphicsItem_contains_QPointF_const_dispatch = (qtd_QGraphicsItem_contains_QPointF_const_dispatch_t) virts[4];
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch = (qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch_t) virts[5];
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[6];
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[7];
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[8];
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch = (qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch_t) virts[9];
    qtd_QGraphicsItem_extension_QVariant_const_dispatch = (qtd_QGraphicsItem_extension_QVariant_const_dispatch_t) virts[10];
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch = (qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch_t) virts[11];
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch = (qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch_t) virts[12];
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch = (qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch_t) virts[13];
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch = (qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch_t) virts[14];
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch = (qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch_t) virts[15];
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch = (qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch_t) virts[16];
    qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch = (qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch_t) virts[17];
    qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch = (qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch_t) virts[18];
    qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch = (qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch_t) virts[19];
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch = (qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch_t) virts[20];
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch = (qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch_t) virts[21];
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[22];
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[23];
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[24];
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch = (qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch_t) virts[25];
    qtd_QGraphicsItem_opaqueArea_const_dispatch = (qtd_QGraphicsItem_opaqueArea_const_dispatch_t) virts[26];
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch = (qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch_t) virts[27];
    qtd_QGraphicsItem_sceneEvent_QEvent_dispatch = (qtd_QGraphicsItem_sceneEvent_QEvent_dispatch_t) virts[28];
    qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch = (qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch_t) virts[29];
    qtd_QGraphicsItem_shape_const_dispatch = (qtd_QGraphicsItem_shape_const_dispatch_t) virts[30];
    qtd_QGraphicsItem_type_const_dispatch = (qtd_QGraphicsItem_type_const_dispatch_t) virts[31];
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch = (qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch_t) virts[32];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsItem_QtDShell::__public_addToIndex()
{
    QGraphicsItem::addToIndex();
}

void QGraphicsItem_QtDShell::__public_prepareGeometryChange()
{
    QGraphicsItem::prepareGeometryChange();
}

void QGraphicsItem_QtDShell::__public_removeFromIndex()
{
    QGraphicsItem::removeFromIndex();
}

void QGraphicsItem_QtDShell::__public_updateMicroFocus()
{
    QGraphicsItem::updateMicroFocus();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsItem_QtDShell::__override_advance(int  phase0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::advance((int )phase0);
    } else {
        advance((int )phase0);
    }
}

QRectF  QGraphicsItem_QtDShell::__override_boundingRect(bool static_call) const
{
    if (static_call) {
        return QRectF();
    } else {
        return boundingRect();
    }
}

bool  QGraphicsItem_QtDShell::__override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsItem_QtDShell::__override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsItem_QtDShell::__override_contains(const QPointF&  point0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::contains((const QPointF& )point0);
    } else {
        return contains((const QPointF& )point0);
    }
}

void QGraphicsItem_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

QVariant  QGraphicsItem_QtDShell::__override_extension(const QVariant&  variant0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::extension((const QVariant& )variant0);
    } else {
        return extension((const QVariant& )variant0);
    }
}

void QGraphicsItem_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsItem_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QGraphicsItem_QtDShell::__override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::isObscuredBy((const QGraphicsItem* )item0);
    } else {
        return isObscuredBy((const QGraphicsItem* )item0);
    }
}

QVariant  QGraphicsItem_QtDShell::__override_itemChange(int  change0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    } else {
        return itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    }
}

void QGraphicsItem_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsItem_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

QPainterPath  QGraphicsItem_QtDShell::__override_opaqueArea(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::opaqueArea();
    } else {
        return opaqueArea();
    }
}

void QGraphicsItem_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        return;
    } else {
        paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

bool  QGraphicsItem_QtDShell::__override_sceneEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEvent((QEvent* )event0);
    } else {
        return sceneEvent((QEvent* )event0);
    }
}

bool  QGraphicsItem_QtDShell::__override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    } else {
        return sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    }
}

QPainterPath  QGraphicsItem_QtDShell::__override_shape(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::shape();
    } else {
        return shape();
    }
}

int  QGraphicsItem_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::type();
    } else {
        return type();
    }
}

void QGraphicsItem_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

// ---externC---
// QGraphicsItem::QGraphicsItem(QGraphicsItem * parent_, QGraphicsScene * scene)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_QGraphicsItem_QGraphicsItem_QGraphicsScene
(void *d_ptr,
 void* parent0,
 void* scene1)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QGraphicsScene*  __qt_scene1 = (QGraphicsScene* ) scene1;
    QGraphicsItem_QtDShell *__qt_this = new QGraphicsItem_QtDShell(d_ptr, (QGraphicsItem* )__qt_parent0, (QGraphicsScene* )__qt_scene1);
    return (void *) __qt_this;

}

// QGraphicsItem::acceptDrops() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_acceptDrops_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->acceptDrops();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::acceptHoverEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_acceptHoverEvents_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->acceptHoverEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::acceptTouchEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_acceptTouchEvents_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->acceptTouchEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::acceptedMouseButtons() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsItem_acceptedMouseButtons_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->acceptedMouseButtons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::acceptsHoverEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_acceptsHoverEvents_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->acceptsHoverEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::addToIndex()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_addToIndex
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->__public_addToIndex();

}

// QGraphicsItem::boundingRegion(const QTransform & itemToDeviceTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_boundingRegion_QTransform_const
(void* __this_nativeId,
 void* itemToDeviceTransform0)
{
    const QTransform&  __qt_itemToDeviceTransform0 = (const QTransform& ) *(QTransform *)itemToDeviceTransform0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->boundingRegion((const QTransform& )__qt_itemToDeviceTransform0);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::boundingRegionGranularity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_boundingRegionGranularity_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->boundingRegionGranularity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::cacheMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsItem_cacheMode_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cacheMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::childItems() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_childItems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->childItems();

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsItem::childrenBoundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_childrenBoundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->childrenBoundingRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::clearFocus()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_clearFocus
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->clearFocus();

}

// QGraphicsItem::clipPath() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_clipPath_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->clipPath();

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::collidingItems(Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_collidingItems_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 int mode0)
{
    Qt::ItemSelectionMode __qt_mode0 = (Qt::ItemSelectionMode) mode0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->collidingItems((Qt::ItemSelectionMode )__qt_mode0);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsItem::commonAncestorItem(const QGraphicsItem * other) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_commonAncestorItem_QGraphicsItem_const
(void* __this_nativeId,
 void* other0)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->commonAncestorItem((const QGraphicsItem* )__qt_other0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::cursor() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_cursor_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QCursor  __qt_return_value = __qt_this->cursor();

    void* __d_return_value = (void*) new QCursor(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::data(int key) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_data_int_const
(void* __this_nativeId,
 int key0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->data((int )key0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::deviceTransform(const QTransform & viewportTransform) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_deviceTransform_QTransform_const
(void* __this_nativeId,
 void* viewportTransform0)
{
    const QTransform&  __qt_viewportTransform0 = (const QTransform& ) *(QTransform *)viewportTransform0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->deviceTransform((const QTransform& )__qt_viewportTransform0);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::effectiveOpacity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_effectiveOpacity_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->effectiveOpacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::ensureVisible(const QRectF & rect, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_ensureVisible_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int xmargin1,
 int ymargin2)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->ensureVisible((const QRectF& )rect0, (int )xmargin1, (int )ymargin2);

}

// QGraphicsItem::ensureVisible(double x, double y, double w, double h, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_ensureVisible_double_double_double_double_int_int
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xmargin4,
 int ymargin5)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->ensureVisible((double )x0, (double )y1, (double )w2, (double )h3, (int )xmargin4, (int )ymargin5);

}

// QGraphicsItem::filtersChildEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_filtersChildEvents_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->filtersChildEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::flags() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsItem_flags_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->flags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::focusItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_focusItem_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->focusItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::focusProxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_focusProxy_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->focusProxy();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::focusScopeItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_focusScopeItem_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->focusScopeItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::grabKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_grabKeyboard
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->grabKeyboard();

}

// QGraphicsItem::grabMouse()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_grabMouse
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->grabMouse();

}

// QGraphicsItem::group() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_group_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItemGroup*  __qt_return_value = __qt_this->group();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::handlesChildEvents() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_handlesChildEvents_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->handlesChildEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::hasCursor() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_hasCursor_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasCursor();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::hasFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_hasFocus_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::hide()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_hide
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->hide();

}

// QGraphicsItem::installSceneEventFilter(QGraphicsItem * filterItem)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_installSceneEventFilter_QGraphicsItem
(void* __this_nativeId,
 void* filterItem0)
{
    QGraphicsItem*  __qt_filterItem0 = (QGraphicsItem* ) filterItem0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->installSceneEventFilter((QGraphicsItem* )__qt_filterItem0);

}

// QGraphicsItem::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isActive_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isAncestorOf(const QGraphicsItem * child) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isAncestorOf_QGraphicsItem_const
(void* __this_nativeId,
 void* child0)
{
    const QGraphicsItem*  __qt_child0 = (const QGraphicsItem* ) child0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAncestorOf((const QGraphicsItem* )__qt_child0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isClipped() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isClipped_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isClipped();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isEnabled_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isObscured() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isObscured_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isObscured();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isObscured(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isObscured_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isObscured((const QRectF& )rect0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isObscured(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isObscured_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isObscured((double )x0, (double )y1, (double )w2, (double )h3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isPanel() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isPanel_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isPanel();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isSelected() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isSelected_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSelected();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isUnderMouse() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isUnderMouse_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isUnderMouse();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isVisible_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isVisibleTo(const QGraphicsItem * parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isVisibleTo_QGraphicsItem_const
(void* __this_nativeId,
 void* parent0)
{
    const QGraphicsItem*  __qt_parent0 = (const QGraphicsItem* ) parent0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisibleTo((const QGraphicsItem* )__qt_parent0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isWidget() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isWidget_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWidget();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::isWindow() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isWindow_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWindow();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::itemTransform(const QGraphicsItem * other, bool * ok) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_itemTransform_QGraphicsItem_nativepointerbool_const
(void* __this_nativeId,
 void* other0,
 bool* ok1)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    bool*  __qt_ok1 = (bool* ) ok1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->itemTransform((const QGraphicsItem* )__qt_other0, (bool* )__qt_ok1);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPainterPath_const
(void* __this_nativeId,
 void* item0,
 void* path1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPainterPath&  __qt_path1 = (const QPainterPath& ) *(QPainterPath *)path1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapFromItem((const QGraphicsItem* )__qt_item0, (const QPainterPath& )__qt_path1);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapFromItem((const QGraphicsItem* )__qt_item0, (const QPointF& )point1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QPolygonF_const
(void* __this_nativeId,
 void* item0,
 void* polygon1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPolygonF&  __qt_polygon1 = (const QPolygonF& ) *(QPolygonF *)polygon1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromItem((const QGraphicsItem* )__qt_item0, (const QPolygonF& )__qt_polygon1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromItem(const QGraphicsItem * item, double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapFromItem_QGraphicsItem_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapFromItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromParent(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromParent_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapFromParent((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromParent(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapFromParent_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapFromParent((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapFromParent(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromParent_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromParent((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromParent_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromParent((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromParent(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapFromParent_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapFromParent((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapFromParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromParent_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromParent((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapFromScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromScene(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapFromScene_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapFromScene((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapFromScene(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromScene_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromScene((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromScene_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromScene((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapFromScene(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapFromScene_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapFromScene((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapFromScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapFromScene_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapFromScene((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectFromItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectFromItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectFromItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectFromItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectFromItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectFromParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectFromParent_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectFromParent((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectFromParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectFromParent_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectFromParent((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectFromScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectFromScene_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectFromScene((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectFromScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectFromScene_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectFromScene((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectToItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectToItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectToItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectToItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectToItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectToParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectToParent_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectToParent((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectToParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectToParent_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectToParent((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectToScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectToScene_QRectF_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectToScene((const QRectF& )rect0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapRectToScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapRectToScene_double_double_double_double_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->mapRectToScene((double )x0, (double )y1, (double )w2, (double )h3);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapToItem(const QGraphicsItem * item, const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPainterPath_const
(void* __this_nativeId,
 void* item0,
 void* path1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPainterPath&  __qt_path1 = (const QPainterPath& ) *(QPainterPath *)path1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapToItem((const QGraphicsItem* )__qt_item0, (const QPainterPath& )__qt_path1);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToItem(const QGraphicsItem * item, const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 QPointF point1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToItem((const QGraphicsItem* )__qt_item0, (const QPointF& )point1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapToItem(const QGraphicsItem * item, const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToItem_QGraphicsItem_QPolygonF_const
(void* __this_nativeId,
 void* item0,
 void* polygon1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    const QPolygonF&  __qt_polygon1 = (const QPolygonF& ) *(QPolygonF *)polygon1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToItem((const QGraphicsItem* )__qt_item0, (const QPolygonF& )__qt_polygon1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToItem(const QGraphicsItem * item, const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToItem_QGraphicsItem_QRectF_const
(void* __this_nativeId,
 void* item0,
 QRectF rect1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToItem((const QGraphicsItem* )__qt_item0, (const QRectF& )rect1);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToItem(const QGraphicsItem * item, double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapToItem_QGraphicsItem_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 void* item0,
 double x1,
 double y2)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapToItem(const QGraphicsItem * item, double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToItem_QGraphicsItem_double_double_double_double_const
(void* __this_nativeId,
 void* item0,
 double x1,
 double y2,
 double w3,
 double h4)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToItem((const QGraphicsItem* )__qt_item0, (double )x1, (double )y2, (double )w3, (double )h4);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToParent(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToParent_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapToParent((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToParent(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapToParent_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToParent((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapToParent(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToParent_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToParent((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToParent(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToParent_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToParent((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToParent(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapToParent_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToParent((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapToParent(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToParent_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToParent((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapToScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToScene(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapToScene_QPointF_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPointF point0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToScene((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapToScene(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToScene_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToScene((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToScene_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToScene((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::mapToScene(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mapToScene_double_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToScene((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::mapToScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_mapToScene_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToScene((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::moveBy(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_moveBy_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->moveBy((double )dx0, (double )dy1);

}

// QGraphicsItem::opacity() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_opacity_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->opacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::panel() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_panel_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->panel();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::parentItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_parentItem_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->parentItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::parentObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_parentObject_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsObject*  __qt_return_value = __qt_this->parentObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::parentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_parentWidget_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->parentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::prepareGeometryChange()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_prepareGeometryChange
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->__public_prepareGeometryChange();

}

// QGraphicsItem::removeFromIndex()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_removeFromIndex
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->__public_removeFromIndex();

}

// QGraphicsItem::removeSceneEventFilter(QGraphicsItem * filterItem)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_removeSceneEventFilter_QGraphicsItem
(void* __this_nativeId,
 void* filterItem0)
{
    QGraphicsItem*  __qt_filterItem0 = (QGraphicsItem* ) filterItem0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->removeSceneEventFilter((QGraphicsItem* )__qt_filterItem0);

}

// QGraphicsItem::resetTransform()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_resetTransform
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->resetTransform();

}

// QGraphicsItem::rotate(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_rotate_double
(void* __this_nativeId,
 double angle0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->rotate((double )angle0);

}

// QGraphicsItem::rotation() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_rotation_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rotation();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::scale() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_scale_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->scale();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::scale(double sx, double sy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_scale_double_double
(void* __this_nativeId,
 double sx0,
 double sy1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->scale((double )sx0, (double )sy1);

}

// QGraphicsItem::scene() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_scene_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsScene*  __qt_return_value = __qt_this->scene();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::sceneBoundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_sceneBoundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->sceneBoundingRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::sceneTransform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_sceneTransform_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->sceneTransform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::scroll(double dx, double dy, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_scroll_double_double_QRectF
(void* __this_nativeId,
 double dx0,
 double dy1,
 QRectF rect2)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->scroll((double )dx0, (double )dy1, (const QRectF& )rect2);

}

// QGraphicsItem::setAcceptDrops(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setAcceptDrops_bool
(void* __this_nativeId,
 bool on0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setAcceptDrops((bool )on0);

}

// QGraphicsItem::setAcceptHoverEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setAcceptHoverEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setAcceptHoverEvents((bool )enabled0);

}

// QGraphicsItem::setAcceptTouchEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setAcceptTouchEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setAcceptTouchEvents((bool )enabled0);

}

// QGraphicsItem::setAcceptedMouseButtons(QFlags<Qt::MouseButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setAcceptedMouseButtons_MouseButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<Qt::MouseButton> __qt_buttons0 = (QFlags<Qt::MouseButton>) buttons0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setAcceptedMouseButtons((Qt::MouseButtons )__qt_buttons0);

}

// QGraphicsItem::setAcceptsHoverEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setAcceptsHoverEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setAcceptsHoverEvents((bool )enabled0);

}

// QGraphicsItem::setActive(bool active)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setActive_bool
(void* __this_nativeId,
 bool active0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setActive((bool )active0);

}

// QGraphicsItem::setBoundingRegionGranularity(double granularity)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setBoundingRegionGranularity_double
(void* __this_nativeId,
 double granularity0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setBoundingRegionGranularity((double )granularity0);

}

// QGraphicsItem::setCacheMode(QGraphicsItem::CacheMode mode, const QSize & cacheSize)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setCacheMode_CacheMode_QSize
(void* __this_nativeId,
 int mode0,
 QSize cacheSize1)
{
    QGraphicsItem::CacheMode __qt_mode0 = (QGraphicsItem::CacheMode) mode0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setCacheMode((QGraphicsItem::CacheMode )__qt_mode0, (const QSize& )cacheSize1);

}

// QGraphicsItem::setCursor(const QCursor & cursor)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setCursor_QCursor
(void* __this_nativeId,
 void* cursor0)
{
    const QCursor&  __qt_cursor0 = (const QCursor& ) *(QCursor *)cursor0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setCursor((const QCursor& )__qt_cursor0);

}

// QGraphicsItem::setData(int key, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setData_int_QVariant
(void* __this_nativeId,
 int key0,
 QVariant* value1)
{
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setData((int )key0, (const QVariant& )__qt_value1);

}

// QGraphicsItem::setEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )enabled0);

}

// QGraphicsItem::setFiltersChildEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setFiltersChildEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setFiltersChildEvents((bool )enabled0);

}

// QGraphicsItem::setFlag(QGraphicsItem::GraphicsItemFlag flag, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setFlag_GraphicsItemFlag_bool
(void* __this_nativeId,
 int flag0,
 bool enabled1)
{
    QGraphicsItem::GraphicsItemFlag __qt_flag0 = (QGraphicsItem::GraphicsItemFlag) flag0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setFlag((QGraphicsItem::GraphicsItemFlag )__qt_flag0, (bool )enabled1);

}

// QGraphicsItem::setFlags(QFlags<QGraphicsItem::GraphicsItemFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setFlags_GraphicsItemFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QGraphicsItem::GraphicsItemFlag> __qt_flags0 = (QFlags<QGraphicsItem::GraphicsItemFlag>) flags0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setFlags((QGraphicsItem::GraphicsItemFlags )__qt_flags0);

}

// QGraphicsItem::setFocus(Qt::FocusReason focusReason)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setFocus_FocusReason
(void* __this_nativeId,
 int focusReason0)
{
    Qt::FocusReason __qt_focusReason0 = (Qt::FocusReason) focusReason0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setFocus((Qt::FocusReason )__qt_focusReason0);

}

// QGraphicsItem::setFocusProxy(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setFocusProxy_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setFocusProxy((QGraphicsItem* )__qt_item0);

}

// QGraphicsItem::setGroup(QGraphicsItemGroup * group)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setGroup_QGraphicsItemGroup
(void* __this_nativeId,
 void* group0)
{
    QGraphicsItemGroup*  __qt_group0 = (QGraphicsItemGroup* ) group0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setGroup((QGraphicsItemGroup* )__qt_group0);

}

// QGraphicsItem::setHandlesChildEvents(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setHandlesChildEvents_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setHandlesChildEvents((bool )enabled0);

}

// QGraphicsItem::setOpacity(double opacity)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setOpacity_double
(void* __this_nativeId,
 double opacity0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setOpacity((double )opacity0);

}

// QGraphicsItem::setParentItem(QGraphicsItem * parent_)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setParentItem_QGraphicsItem
(void* __this_nativeId,
 void* parent0)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setParentItem((QGraphicsItem* )__qt_parent0);

}

// QGraphicsItem::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setPos((const QPointF& )pos0);

}

// QGraphicsItem::setPos(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setPos_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setPos((double )x0, (double )y1);

}

// QGraphicsItem::setRotation(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setRotation_double
(void* __this_nativeId,
 double angle0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setRotation((double )angle0);

}

// QGraphicsItem::setScale(double scale)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setScale_double
(void* __this_nativeId,
 double scale0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setScale((double )scale0);

}

// QGraphicsItem::setSelected(bool selected)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setSelected_bool
(void* __this_nativeId,
 bool selected0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setSelected((bool )selected0);

}

// QGraphicsItem::setToolTip(const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setToolTip_string
(void* __this_nativeId,
 DArray toolTip0)
{
    QString __qt_toolTip0 = QString::fromUtf8((const char *)toolTip0.ptr, toolTip0.length);
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_toolTip0);

}

// QGraphicsItem::setTransform(const QTransform & matrix, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setTransform_QTransform_bool
(void* __this_nativeId,
 void* matrix0,
 bool combine1)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setTransform((const QTransform& )__qt_matrix0, (bool )combine1);

}

// QGraphicsItem::setTransformOriginPoint(const QPointF & origin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setTransformOriginPoint_QPointF
(void* __this_nativeId,
 QPointF origin0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setTransformOriginPoint((const QPointF& )origin0);

}

// QGraphicsItem::setTransformOriginPoint(double ax, double ay)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setTransformOriginPoint_double_double
(void* __this_nativeId,
 double ax0,
 double ay1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setTransformOriginPoint((double )ax0, (double )ay1);

}

// QGraphicsItem::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setVisible((bool )visible0);

}

// QGraphicsItem::setX(double x)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setX_double
(void* __this_nativeId,
 double x0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setX((double )x0);

}

// QGraphicsItem::setY(double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setY_double
(void* __this_nativeId,
 double y0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setY((double )y0);

}

// QGraphicsItem::setZValue(double z)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_setZValue_double
(void* __this_nativeId,
 double z0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->setZValue((double )z0);

}

// QGraphicsItem::shear(double sh, double sv)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_shear_double_double
(void* __this_nativeId,
 double sh0,
 double sv1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->shear((double )sh0, (double )sv1);

}

// QGraphicsItem::show()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_show
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->show();

}

// QGraphicsItem::stackBefore(const QGraphicsItem * sibling)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_stackBefore_QGraphicsItem
(void* __this_nativeId,
 void* sibling0)
{
    const QGraphicsItem*  __qt_sibling0 = (const QGraphicsItem* ) sibling0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->stackBefore((const QGraphicsItem* )__qt_sibling0);

}

// QGraphicsItem::toGraphicsObject()
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_toGraphicsObject
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsObject*  __qt_return_value = __qt_this->toGraphicsObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::toGraphicsObject() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_toGraphicsObject_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    const QGraphicsObject*  __qt_return_value = __qt_this->toGraphicsObject();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QGraphicsItem::topLevelItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_topLevelItem_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->topLevelItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::topLevelWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_topLevelWidget_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->topLevelWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::transform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_transform_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->transform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::transformOriginPoint() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_transformOriginPoint_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->transformOriginPoint();

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_translate_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->translate((double )dx0, (double )dy1);

}

// QGraphicsItem::ungrabKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_ungrabKeyboard
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->ungrabKeyboard();

}

// QGraphicsItem::ungrabMouse()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_ungrabMouse
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->ungrabMouse();

}

// QGraphicsItem::unsetCursor()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_unsetCursor
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->unsetCursor();

}

// QGraphicsItem::update(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_update_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->update((const QRectF& )rect0);

}

// QGraphicsItem::update(double x, double y, double width, double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_update_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double width2,
 double height3)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->update((double )x0, (double )y1, (double )width2, (double )height3);

}

// QGraphicsItem::updateMicroFocus()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_updateMicroFocus
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    __qt_this->__public_updateMicroFocus();

}

// QGraphicsItem::window() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_window_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->window();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::x() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_x_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->x();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::y() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_y_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->y();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::zValue() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItem_zValue_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->zValue();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::advance(int phase)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_advance_int
(void* __this_nativeId,
 int phase0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_advance((int )phase0, __do_static_call);

}

// QGraphicsItem::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_boundingRect(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItem::collidesWithItem(const QGraphicsItem * other, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const
(void* __this_nativeId,
 void* other0,
 int mode1)
{
    const QGraphicsItem*  __qt_other0 = (const QGraphicsItem* ) other0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_collidesWithItem((const QGraphicsItem* )__qt_other0, (Qt::ItemSelectionMode )__qt_mode1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::collidesWithPath(const QPainterPath & path, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const
(void* __this_nativeId,
 void* path0,
 int mode1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_collidesWithPath((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::contains(const QPointF & point) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_contains_QPointF_const
(void* __this_nativeId,
 QPointF point0)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_contains((const QPointF& )point0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneContextMenuEvent*  __qt_event0 = (QGraphicsSceneContextMenuEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QGraphicsSceneContextMenuEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::dragEnterEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::dragMoveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::dropEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::extension(const QVariant & variant) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_extension_QVariant_const
(void* __this_nativeId,
 QVariant* variant0)
{
    QVariant __qt_variant0 = variant0 == NULL ? QVariant() : QVariant(*variant0);
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_extension((const QVariant& )__qt_variant0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_hoverEnterEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_hoverLeaveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::hoverMoveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_hoverMoveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::inputMethodEvent(QInputMethodEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* event0)
{
    QInputMethodEvent*  __qt_event0 = (QInputMethodEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::inputMethodQuery(Qt::InputMethodQuery query) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int query0)
{
    Qt::InputMethodQuery __qt_query0 = (Qt::InputMethodQuery) query0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_query0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::isObscuredBy(const QGraphicsItem * item) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const
(void* __this_nativeId,
 void* item0)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isObscuredBy((const QGraphicsItem* )__qt_item0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant
(void* __this_nativeId,
 int change0,
 QVariant* value1)
{
    QGraphicsItem::GraphicsItemChange __qt_change0 = (QGraphicsItem::GraphicsItemChange) change0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_itemChange((QGraphicsItem::GraphicsItemChange )__qt_change0, (const QVariant& )__qt_value1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::keyReleaseEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsItem::opaqueArea() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_opaqueArea_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_opaqueArea(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsItem::sceneEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_sceneEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_sceneEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::sceneEventFilter(QGraphicsItem * watched, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent
(void* __this_nativeId,
 void* watched0,
 void* event1)
{
    QGraphicsItem*  __qt_watched0 = (QGraphicsItem* ) watched0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_sceneEventFilter((QGraphicsItem* )__qt_watched0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::shape() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItem_shape_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_shape(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItem::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsItem_type_const
(void* __this_nativeId)
{
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItem::wheelEvent(QGraphicsSceneWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneWheelEvent*  __qt_event0 = (QGraphicsSceneWheelEvent* ) event0;
    QGraphicsItem_QtDShell *__qt_this = (QGraphicsItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsItem*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QGraphicsSceneWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


