#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicswidget.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGraphicsWidget_shell.h"
#include <iostream>
#include <qgraphicswidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QGraphicsLayoutItem* qtd_QGraphicsWidget_cast_to_QGraphicsLayoutItem(QGraphicsWidget *ptr)
{
    return dynamic_cast<QGraphicsLayoutItem*>(ptr);
}

class QGraphicsWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGraphicsWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_createEntity(void *nativeId, void* dId)
{
    new QGraphicsWidgetEntity((QObject*)nativeId, dId);
}

QGraphicsWidget_QtDShell::QGraphicsWidget_QtDShell(void *d_ptr, QGraphicsItem*  parent0, Qt::WindowFlags  wFlags1)
    : QGraphicsWidget(parent0, wFlags1),
      QObjectLink(this, d_ptr)
{
}

QGraphicsWidget_QtDShell::~QGraphicsWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGraphicsWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGraphicsWidget::metaObject();
}

int QGraphicsWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGraphicsWidget::qt_metacall(_c, _id, _a);
}

int QGraphicsWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGraphicsWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsItem_advance_int_dispatch, (void *dId, int phase0))
void QGraphicsWidget_QtDShell::advance(int  phase0)
{
    qtd_QGraphicsItem_advance_int_dispatch(QObjectLink::getLink(this)->dId, (int )phase0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_boundingRect_const_dispatch, (void *dId, QRectF *__d_return_value))
QRectF  QGraphicsWidget_QtDShell::boundingRect() const
{
    QRectF __d_return_value;
    qtd_QGraphicsItem_boundingRect_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_changeEvent_QEvent_dispatch)
void QGraphicsWidget_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_closeEvent_QCloseEvent_dispatch)
void QGraphicsWidget_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QGraphicsWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch, (void *dId, void* other0, int mode1))
bool  QGraphicsWidget_QtDShell::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch, (void *dId, void* path0, int mode1))
bool  QGraphicsWidget_QtDShell::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, &(QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_contains_QPointF_const_dispatch, (void *dId, QPointF* point0))
bool  QGraphicsWidget_QtDShell::contains(const QPointF&  point0) const
{
    return qtd_QGraphicsItem_contains_QPointF_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )point0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsWidget_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGraphicsWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_extension_QVariant_const_dispatch, (void *dId, void* variant0))
QVariant  QGraphicsWidget_QtDShell::extension(const QVariant&  variant0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_extension_QVariant_const_dispatch(QObjectLink::getLink(this)->dId, &(QVariant& )variant0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
QTD_FUNC(GUI, QGraphicsWidget_focusNextPrevChild_bool_dispatch)
bool  QGraphicsWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QGraphicsWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch)
void QGraphicsWidget_QtDShell::grabKeyboardEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_grabMouseEvent_QEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_grabMouseEvent_QEvent_dispatch)
void QGraphicsWidget_QtDShell::grabMouseEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_grabMouseEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_hideEvent_QHideEvent_dispatch)
void QGraphicsWidget_QtDShell::hideEvent(QHideEvent*  event0)
{
    qtd_QGraphicsWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch, (void *dId, void* option0))
QTD_FUNC(GUI, QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch)
void QGraphicsWidget_QtDShell::initStyleOption(QStyleOption*  option0) const
{
    qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch(QObjectLink::getLink(this)->dId, (QStyleOption* )option0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QGraphicsWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch, (void *dId, void* item0))
bool  QGraphicsWidget_QtDShell::isObscuredBy(const QGraphicsItem*  item0) const
{
    return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )item0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch, (void *dId, int change0, void* value1))
QVariant  QGraphicsWidget_QtDShell::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem::GraphicsItemChange )change0, &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch)
void QGraphicsWidget_QtDShell::moveEvent(QGraphicsSceneMoveEvent*  event0)
{
    qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_opaqueArea_const_dispatch, (void *dId))
QPainterPath  QGraphicsWidget_QtDShell::opaqueArea() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_opaqueArea_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
void QGraphicsWidget_QtDShell::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
QTD_FUNC(GUI, QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch)
void QGraphicsWidget_QtDShell::paintWindowFrame(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_polishEvent_dispatch, (void *dId))
QTD_FUNC(GUI, QGraphicsWidget_polishEvent_dispatch)
void QGraphicsWidget_QtDShell::polishEvent()
{
    qtd_QGraphicsWidget_polishEvent_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsWidget_propertyChange_string_QVariant_dispatch, (void *dId, const unsigned short* propertyName0, int propertyName0_size, void* value1))
QTD_FUNC(GUI, QGraphicsWidget_propertyChange_string_QVariant_dispatch)
QVariant  QGraphicsWidget_QtDShell::propertyChange(const QString&  propertyName0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsWidget_propertyChange_string_QVariant_dispatch(QObjectLink::getLink(this)->dId, propertyName0.utf16(), propertyName0.size(), &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch)
void QGraphicsWidget_QtDShell::resizeEvent(QGraphicsSceneResizeEvent*  event0)
{
    qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsWidget_QtDShell::sceneEvent(QEvent*  event0)
{
    return qtd_QGraphicsItem_sceneEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QGraphicsWidget_QtDShell::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
    return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_setGeometry_QRectF_dispatch, (void *dId, QRectF* rect0))
void QGraphicsWidget_QtDShell::setGeometry(const QRectF&  rect0)
{
    qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch(QObjectLink::getLink(this)->dId, &(QRectF& )rect0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_shape_const_dispatch, (void *dId))
QPainterPath  QGraphicsWidget_QtDShell::shape() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_shape_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_showEvent_QShowEvent_dispatch)
void QGraphicsWidget_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QGraphicsWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch, (void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1))
QSizeF  QGraphicsWidget_QtDShell::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
    QSizeF __d_return_value;
    qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (Qt::SizeHint )which0, &(QSizeF& )constraint1);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QGraphicsItem_type_const_dispatch, (void *dId))
int  QGraphicsWidget_QtDShell::type() const
{
    return qtd_QGraphicsItem_type_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch)
void QGraphicsWidget_QtDShell::ungrabKeyboardEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch, (void *dId, void* event0))
QTD_FUNC(GUI, QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch)
void QGraphicsWidget_QtDShell::ungrabMouseEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_updateGeometry_dispatch, (void *dId))
void QGraphicsWidget_QtDShell::updateGeometry()
{
    qtd_QGraphicsLayoutItem_updateGeometry_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
void QGraphicsWidget_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsWidget_windowFrameEvent_QEvent_dispatch, (void *dId, void* e0))
QTD_FUNC(GUI, QGraphicsWidget_windowFrameEvent_QEvent_dispatch)
bool  QGraphicsWidget_QtDShell::windowFrameEvent(QEvent*  e0)
{
    return qtd_QGraphicsWidget_windowFrameEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch, (void *dId, QPointF* pos0))
QTD_FUNC(GUI, QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch)
Qt::WindowFrameSection  QGraphicsWidget_QtDShell::windowFrameSectionAt(const QPointF&  pos0) const
{
    return (Qt::WindowFrameSection) qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )pos0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_initCallBacks(VoidFunc *virts) {
    qtd_QGraphicsWidget_changeEvent_QEvent_dispatch = (qtd_QGraphicsWidget_changeEvent_QEvent_dispatch_t) virts[0];
    qtd_QGraphicsWidget_closeEvent_QCloseEvent_dispatch = (qtd_QGraphicsWidget_closeEvent_QCloseEvent_dispatch_t) virts[1];
    qtd_QGraphicsWidget_focusNextPrevChild_bool_dispatch = (qtd_QGraphicsWidget_focusNextPrevChild_bool_dispatch_t) virts[2];
    qtd_QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch = (qtd_QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch_t) virts[3];
    qtd_QGraphicsWidget_grabMouseEvent_QEvent_dispatch = (qtd_QGraphicsWidget_grabMouseEvent_QEvent_dispatch_t) virts[4];
    qtd_QGraphicsWidget_hideEvent_QHideEvent_dispatch = (qtd_QGraphicsWidget_hideEvent_QHideEvent_dispatch_t) virts[5];
    qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch = (qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch_t) virts[6];
    qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch = (qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch_t) virts[7];
    qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch = (qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch_t) virts[8];
    qtd_QGraphicsWidget_polishEvent_dispatch = (qtd_QGraphicsWidget_polishEvent_dispatch_t) virts[9];
    qtd_QGraphicsWidget_propertyChange_string_QVariant_dispatch = (qtd_QGraphicsWidget_propertyChange_string_QVariant_dispatch_t) virts[10];
    qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch = (qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch_t) virts[11];
    qtd_QGraphicsWidget_showEvent_QShowEvent_dispatch = (qtd_QGraphicsWidget_showEvent_QShowEvent_dispatch_t) virts[12];
    qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch = (qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch_t) virts[13];
    qtd_QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch = (qtd_QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch_t) virts[14];
    qtd_QGraphicsWidget_windowFrameEvent_QEvent_dispatch = (qtd_QGraphicsWidget_windowFrameEvent_QEvent_dispatch_t) virts[15];
    qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch = (qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch_t) virts[16];
}
// Functions in shell class
void QGraphicsWidget_QtDShell::setGeometry(double  x0, double  y1, double  w2, double  h3)
{
    QGraphicsWidget::setGeometry((double )x0, (double )y1, (double )w2, (double )h3);
}

// public overrides for functions that are protected in the base class
void QGraphicsWidget_QtDShell::__public_addToIndex()
{
    QGraphicsItem::addToIndex();
}

void QGraphicsWidget_QtDShell::__public_prepareGeometryChange()
{
    QGraphicsItem::prepareGeometryChange();
}

void QGraphicsWidget_QtDShell::__public_removeFromIndex()
{
    QGraphicsItem::removeFromIndex();
}

QObject*  QGraphicsWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGraphicsWidget_QtDShell::__public_setGraphicsItem(QGraphicsItem*  item0)
{
    QGraphicsLayoutItem::setGraphicsItem((QGraphicsItem* )item0);
}

void QGraphicsWidget_QtDShell::__public_setOwnedByLayout(bool  ownedByLayout0)
{
    QGraphicsLayoutItem::setOwnedByLayout((bool )ownedByLayout0);
}

void QGraphicsWidget_QtDShell::__public_updateMicroFocus()
{
    QGraphicsObject::updateMicroFocus();
}

void QGraphicsWidget_QtDShell::__public_childrenChanged()
{
    QGraphicsObject::childrenChanged();
}

void QGraphicsWidget_QtDShell::__public_enabledChanged()
{
    QGraphicsObject::enabledChanged();
}

void QGraphicsWidget_QtDShell::__public_geometryChanged()
{
    QGraphicsWidget::geometryChanged();
}

void QGraphicsWidget_QtDShell::__public_heightChanged()
{
    QGraphicsObject::heightChanged();
}

void QGraphicsWidget_QtDShell::__public_layoutChanged()
{
    QGraphicsWidget::layoutChanged();
}

void QGraphicsWidget_QtDShell::__public_opacityChanged()
{
    QGraphicsObject::opacityChanged();
}

void QGraphicsWidget_QtDShell::__public_parentChanged()
{
    QGraphicsObject::parentChanged();
}

void QGraphicsWidget_QtDShell::__public_rotationChanged()
{
    QGraphicsObject::rotationChanged();
}

void QGraphicsWidget_QtDShell::__public_scaleChanged()
{
    QGraphicsObject::scaleChanged();
}

void QGraphicsWidget_QtDShell::__public_visibleChanged()
{
    QGraphicsObject::visibleChanged();
}

void QGraphicsWidget_QtDShell::__public_widthChanged()
{
    QGraphicsObject::widthChanged();
}

void QGraphicsWidget_QtDShell::__public_xChanged()
{
    QGraphicsObject::xChanged();
}

void QGraphicsWidget_QtDShell::__public_yChanged()
{
    QGraphicsObject::yChanged();
}

void QGraphicsWidget_QtDShell::__public_zChanged()
{
    QGraphicsObject::zChanged();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsWidget_QtDShell::__override_advance(int  phase0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::advance((int )phase0);
    } else {
        advance((int )phase0);
    }
}

QRectF  QGraphicsWidget_QtDShell::__override_boundingRect(bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::boundingRect();
    } else {
        return boundingRect();
    }
}

void QGraphicsWidget_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QGraphicsWidget_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsWidget_QtDShell::__override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsWidget_QtDShell::__override_contains(const QPointF&  point0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::contains((const QPointF& )point0);
    } else {
        return contains((const QPointF& )point0);
    }
}

void QGraphicsWidget_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QGraphicsWidget_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

QVariant  QGraphicsWidget_QtDShell::__override_extension(const QVariant&  variant0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::extension((const QVariant& )variant0);
    } else {
        return extension((const QVariant& )variant0);
    }
}

void QGraphicsWidget_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QGraphicsWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_grabKeyboardEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::grabKeyboardEvent((QEvent* )event0);
    } else {
        grabKeyboardEvent((QEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_grabMouseEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::grabMouseEvent((QEvent* )event0);
    } else {
        grabMouseEvent((QEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_hideEvent(QHideEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::hideEvent((QHideEvent* )event0);
    } else {
        hideEvent((QHideEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_initStyleOption(QStyleOption*  option0, bool static_call) const
{
    if (static_call) {
        QGraphicsWidget::initStyleOption((QStyleOption* )option0);
    } else {
        initStyleOption((QStyleOption* )option0);
    }
}

void QGraphicsWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsWidget_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::isObscuredBy((const QGraphicsItem* )item0);
    } else {
        return isObscuredBy((const QGraphicsItem* )item0);
    }
}

QVariant  QGraphicsWidget_QtDShell::__override_itemChange(int  change0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    } else {
        return itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    }
}

void QGraphicsWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_moveEvent(QGraphicsSceneMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::moveEvent((QGraphicsSceneMoveEvent* )event0);
    } else {
        moveEvent((QGraphicsSceneMoveEvent* )event0);
    }
}

QPainterPath  QGraphicsWidget_QtDShell::__override_opaqueArea(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::opaqueArea();
    } else {
        return opaqueArea();
    }
}

void QGraphicsWidget_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    } else {
        paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

void QGraphicsWidget_QtDShell::__override_paintWindowFrame(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::paintWindowFrame((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    } else {
        paintWindowFrame((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

void QGraphicsWidget_QtDShell::__override_polishEvent(bool static_call)
{
    if (static_call) {
        QGraphicsWidget::polishEvent();
    } else {
        polishEvent();
    }
}

QVariant  QGraphicsWidget_QtDShell::__override_propertyChange(const QString&  propertyName0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::propertyChange((const QString& )propertyName0, (const QVariant& )value1);
    } else {
        return propertyChange((const QString& )propertyName0, (const QVariant& )value1);
    }
}

void QGraphicsWidget_QtDShell::__override_resizeEvent(QGraphicsSceneResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::resizeEvent((QGraphicsSceneResizeEvent* )event0);
    } else {
        resizeEvent((QGraphicsSceneResizeEvent* )event0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_sceneEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::sceneEvent((QEvent* )event0);
    } else {
        return sceneEvent((QEvent* )event0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    } else {
        return sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    }
}

void QGraphicsWidget_QtDShell::__override_setGeometry(const QRectF&  rect0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::setGeometry((const QRectF& )rect0);
    } else {
        setGeometry((const QRectF& )rect0);
    }
}

QPainterPath  QGraphicsWidget_QtDShell::__override_shape(bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::shape();
    } else {
        return shape();
    }
}

void QGraphicsWidget_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSizeF  QGraphicsWidget_QtDShell::__override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    } else {
        return sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    }
}

void QGraphicsWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QGraphicsWidget_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::type();
    } else {
        return type();
    }
}

void QGraphicsWidget_QtDShell::__override_ungrabKeyboardEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::ungrabKeyboardEvent((QEvent* )event0);
    } else {
        ungrabKeyboardEvent((QEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_ungrabMouseEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::ungrabMouseEvent((QEvent* )event0);
    } else {
        ungrabMouseEvent((QEvent* )event0);
    }
}

void QGraphicsWidget_QtDShell::__override_updateGeometry(bool static_call)
{
    if (static_call) {
        QGraphicsWidget::updateGeometry();
    } else {
        updateGeometry();
    }
}

void QGraphicsWidget_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

bool  QGraphicsWidget_QtDShell::__override_windowFrameEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::windowFrameEvent((QEvent* )e0);
    } else {
        return windowFrameEvent((QEvent* )e0);
    }
}

int  QGraphicsWidget_QtDShell::__override_windowFrameSectionAt(const QPointF&  pos0, bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::windowFrameSectionAt((const QPointF& )pos0);
    } else {
        return windowFrameSectionAt((const QPointF& )pos0);
    }
}

// QGraphicsWidget::geometryChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_geometryChanged
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_geometryChanged();

}

// QGraphicsWidget::layoutChanged()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_layoutChanged
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_layoutChanged();

}

// ---externC---
// QGraphicsWidget::QGraphicsWidget(QGraphicsItem * parent_, QFlags<Qt::WindowType> wFlags)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_QGraphicsWidget_QGraphicsItem_WindowFlags
(void *d_ptr,
 void* parent0,
 int wFlags1)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QFlags<Qt::WindowType> __qt_wFlags1 = (QFlags<Qt::WindowType>) wFlags1;
    QGraphicsWidget_QtDShell *__qt_this = new QGraphicsWidget_QtDShell(d_ptr, (QGraphicsItem* )__qt_parent0, (Qt::WindowFlags )__qt_wFlags1);
    return (void *) __qt_this;

}

// QGraphicsWidget::actions() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_actions_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QList<QAction* >  __qt_return_value = __qt_this->actions();

QList<QAction* > &__d_return_value_tmp = (*(QList<QAction* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsWidget::addAction(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_addAction_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->addAction((QAction* )__qt_action0);

}

// QGraphicsWidget::addActions(QList<QAction * > actions)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_addActions_QList
(void* __this_nativeId,
 void* actions0)
{
QList<QAction* > __qt_actions0 = (*(QList<QAction* > *)actions0);
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->addActions((QList<QAction* > )__qt_actions0);

}

// QGraphicsWidget::adjustSize()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_adjustSize
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->adjustSize();

}

// QGraphicsWidget::autoFillBackground() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_autoFillBackground_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoFillBackground();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::close()
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_close
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->close();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::contentsRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_contentsRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsLayoutItem::contentsRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::effectiveSizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_effectiveSizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::effectiveSizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::focusPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_focusPolicy_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->focusPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::focusWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_focusWidget_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QGraphicsWidget*  __qt_return_value = __qt_this->focusWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_font_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QGraphicsWidget::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_geometry_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsLayoutItem::geometry();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::getContentsMargins(double * left, double * top, double * right, double * bottom) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_getContentsMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const
(void* __this_nativeId,
 double* left0,
 double* top1,
 double* right2,
 double* bottom3)
{
    double*  __qt_left0 = (double* ) left0;
    double*  __qt_top1 = (double* ) top1;
    double*  __qt_right2 = (double* ) right2;
    double*  __qt_bottom3 = (double* ) bottom3;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->getContentsMargins((double* )__qt_left0, (double* )__qt_top1, (double* )__qt_right2, (double* )__qt_bottom3);

}

// QGraphicsWidget::getWindowFrameMargins(double * left, double * top, double * right, double * bottom) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_getWindowFrameMargins_nativepointerdouble_nativepointerdouble_nativepointerdouble_nativepointerdouble_const
(void* __this_nativeId,
 double* left0,
 double* top1,
 double* right2,
 double* bottom3)
{
    double*  __qt_left0 = (double* ) left0;
    double*  __qt_top1 = (double* ) top1;
    double*  __qt_right2 = (double* ) right2;
    double*  __qt_bottom3 = (double* ) bottom3;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->getWindowFrameMargins((double* )__qt_left0, (double* )__qt_top1, (double* )__qt_right2, (double* )__qt_bottom3);

}

// QGraphicsWidget::grabShortcut(const QKeySequence & sequence, Qt::ShortcutContext context)
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_grabShortcut_QKeySequence_ShortcutContext
(void* __this_nativeId,
 void* sequence0,
 int context1)
{
    const QKeySequence&  __qt_sequence0 = (const QKeySequence& ) *(QKeySequence *)sequence0;
    Qt::ShortcutContext __qt_context1 = (Qt::ShortcutContext) context1;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->grabShortcut((const QKeySequence& )__qt_sequence0, (Qt::ShortcutContext )__qt_context1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::graphicsItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_graphicsItem_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsLayoutItem::graphicsItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::insertAction(QAction * before, QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_insertAction_QAction_QAction
(void* __this_nativeId,
 void* before0,
 void* action1)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QAction*  __qt_action1 = (QAction* ) action1;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->insertAction((QAction* )__qt_before0, (QAction* )__qt_action1);

}

// QGraphicsWidget::insertActions(QAction * before, QList<QAction * > actions)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_insertActions_QAction_QList
(void* __this_nativeId,
 void* before0,
 void* actions1)
{
    QAction*  __qt_before0 = (QAction* ) before0;
QList<QAction* > __qt_actions1 = (*(QList<QAction* > *)actions1);
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->insertActions((QAction* )__qt_before0, (QList<QAction* > )__qt_actions1);

}

// QGraphicsWidget::isActiveWindow() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_isActiveWindow_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActiveWindow();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::isLayout() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_isLayout_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsLayoutItem::isLayout();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::layout() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_layout_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QGraphicsLayout*  __qt_return_value = __qt_this->layout();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::layoutDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_layoutDirection_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->layoutDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::maximumHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsWidget_maximumHeight_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::maximumHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_maximumSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::maximumSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::maximumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsWidget_maximumWidth_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::maximumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::minimumHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsWidget_minimumHeight_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::minimumHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_minimumSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::minimumSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::minimumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsWidget_minimumWidth_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::minimumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::ownedByLayout() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_ownedByLayout_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsLayoutItem::ownedByLayout();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::palette() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_palette_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QPalette  __qt_return_value = __qt_this->palette();

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QGraphicsWidget::parentLayoutItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_parentLayoutItem_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QGraphicsLayoutItem*  __qt_return_value = __qt_this->QGraphicsLayoutItem::parentLayoutItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::preferredHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsWidget_preferredHeight_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::preferredHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::preferredSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_preferredSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::preferredSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::preferredWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsWidget_preferredWidth_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::preferredWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_rect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::releaseShortcut(int id)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_releaseShortcut_int
(void* __this_nativeId,
 int id0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->releaseShortcut((int )id0);

}

// QGraphicsWidget::removeAction(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_removeAction_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->removeAction((QAction* )__qt_action0);

}

// QGraphicsWidget::resize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_resize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->resize((const QSizeF& )size0);

}

// QGraphicsWidget::resize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_resize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->resize((double )w0, (double )h1);

}

// QGraphicsWidget::setAttribute(Qt::WidgetAttribute attribute, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setAttribute_WidgetAttribute_bool
(void* __this_nativeId,
 int attribute0,
 bool on1)
{
    Qt::WidgetAttribute __qt_attribute0 = (Qt::WidgetAttribute) attribute0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setAttribute((Qt::WidgetAttribute )__qt_attribute0, (bool )on1);

}

// QGraphicsWidget::setAutoFillBackground(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setAutoFillBackground_bool
(void* __this_nativeId,
 bool enabled0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setAutoFillBackground((bool )enabled0);

}

// QGraphicsWidget::setContentsMargins(double left, double top, double right, double bottom)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setContentsMargins_double_double_double_double
(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setContentsMargins((double )left0, (double )top1, (double )right2, (double )bottom3);

}

// QGraphicsWidget::setFocusPolicy(Qt::FocusPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setFocusPolicy_FocusPolicy
(void* __this_nativeId,
 int policy0)
{
    Qt::FocusPolicy __qt_policy0 = (Qt::FocusPolicy) policy0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setFocusPolicy((Qt::FocusPolicy )__qt_policy0);

}

// QGraphicsWidget::setFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_font0);

}

// QGraphicsWidget::setGeometry(double x, double y, double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setGeometry_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsWidget *__qt_this = (QGraphicsWidget *) __this_nativeId;
    __qt_this->setGeometry((double )x0, (double )y1, (double )w2, (double )h3);

}

// QGraphicsWidget::setGraphicsItem(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setGraphicsItem_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_setGraphicsItem((QGraphicsItem* )__qt_item0);

}

// QGraphicsWidget::setLayout(QGraphicsLayout * layout)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setLayout_QGraphicsLayout
(void* __this_nativeId,
 void* layout0)
{
    QGraphicsLayout*  __qt_layout0 = (QGraphicsLayout* ) layout0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setLayout((QGraphicsLayout* )__qt_layout0);

}

// QGraphicsWidget::setLayoutDirection(Qt::LayoutDirection direction)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setLayoutDirection_LayoutDirection
(void* __this_nativeId,
 int direction0)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setLayoutDirection((Qt::LayoutDirection )__qt_direction0);

}

// QGraphicsWidget::setMaximumHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMaximumHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumHeight((double )height0);

}

// QGraphicsWidget::setMaximumSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMaximumSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumSize((const QSizeF& )size0);

}

// QGraphicsWidget::setMaximumSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMaximumSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumSize((double )w0, (double )h1);

}

// QGraphicsWidget::setMaximumWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMaximumWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumWidth((double )width0);

}

// QGraphicsWidget::setMinimumHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMinimumHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumHeight((double )height0);

}

// QGraphicsWidget::setMinimumSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMinimumSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumSize((const QSizeF& )size0);

}

// QGraphicsWidget::setMinimumSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMinimumSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumSize((double )w0, (double )h1);

}

// QGraphicsWidget::setMinimumWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setMinimumWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumWidth((double )width0);

}

// QGraphicsWidget::setOwnedByLayout(bool ownedByLayout)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setOwnedByLayout_bool
(void* __this_nativeId,
 bool ownedByLayout0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_setOwnedByLayout((bool )ownedByLayout0);

}

// QGraphicsWidget::setPalette(const QPalette & palette)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setPalette_QPalette
(void* __this_nativeId,
 void* palette0)
{
    const QPalette&  __qt_palette0 = (const QPalette& ) *(QPalette *)palette0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setPalette((const QPalette& )__qt_palette0);

}

// QGraphicsWidget::setParentLayoutItem(QGraphicsLayoutItem * parent_)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setParentLayoutItem_QGraphicsLayoutItem
(void* __this_nativeId,
 void* parent0)
{
    QGraphicsLayoutItem*  __qt_parent0 = (QGraphicsLayoutItem* ) parent0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setParentLayoutItem((QGraphicsLayoutItem* )__qt_parent0);

}

// QGraphicsWidget::setPreferredHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setPreferredHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredHeight((double )height0);

}

// QGraphicsWidget::setPreferredSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setPreferredSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredSize((const QSizeF& )size0);

}

// QGraphicsWidget::setPreferredSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setPreferredSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredSize((double )w0, (double )h1);

}

// QGraphicsWidget::setPreferredWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setPreferredWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredWidth((double )width0);

}

// QGraphicsWidget::setShortcutAutoRepeat(int id, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setShortcutAutoRepeat_int_bool
(void* __this_nativeId,
 int id0,
 bool enabled1)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setShortcutAutoRepeat((int )id0, (bool )enabled1);

}

// QGraphicsWidget::setShortcutEnabled(int id, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setShortcutEnabled_int_bool
(void* __this_nativeId,
 int id0,
 bool enabled1)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setShortcutEnabled((int )id0, (bool )enabled1);

}

// QGraphicsWidget::setSizePolicy(QSizePolicy::Policy hPolicy, QSizePolicy::Policy vPolicy, QSizePolicy::ControlType controlType)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setSizePolicy_Policy_Policy_ControlType
(void* __this_nativeId,
 int hPolicy0,
 int vPolicy1,
 int controlType2)
{
    QSizePolicy::Policy __qt_hPolicy0 = (QSizePolicy::Policy) hPolicy0;
    QSizePolicy::Policy __qt_vPolicy1 = (QSizePolicy::Policy) vPolicy1;
    QSizePolicy::ControlType __qt_controlType2 = (QSizePolicy::ControlType) controlType2;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setSizePolicy((QSizePolicy::Policy )__qt_hPolicy0, (QSizePolicy::Policy )__qt_vPolicy1, (QSizePolicy::ControlType )__qt_controlType2);

}

// QGraphicsWidget::setSizePolicy(const QSizePolicy & policy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setSizePolicy_QSizePolicy
(void* __this_nativeId,
 void* policy0)
{
    const QSizePolicy&  __qt_policy0 = (const QSizePolicy& ) *(QSizePolicy *)policy0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setSizePolicy((const QSizePolicy& )__qt_policy0);

}

// QGraphicsWidget::setStyle(QStyle * style)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setStyle_QStyle
(void* __this_nativeId,
 void* style0)
{
    QStyle*  __qt_style0 = (QStyle* ) style0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setStyle((QStyle* )__qt_style0);

}

// QGraphicsWidget::setWindowFlags(QFlags<Qt::WindowType> wFlags)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setWindowFlags_WindowFlags
(void* __this_nativeId,
 int wFlags0)
{
    QFlags<Qt::WindowType> __qt_wFlags0 = (QFlags<Qt::WindowType>) wFlags0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowFlags((Qt::WindowFlags )__qt_wFlags0);

}

// QGraphicsWidget::setWindowFrameMargins(double left, double top, double right, double bottom)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setWindowFrameMargins_double_double_double_double
(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowFrameMargins((double )left0, (double )top1, (double )right2, (double )bottom3);

}

// QGraphicsWidget::setWindowTitle(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setWindowTitle_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowTitle((const QString& )__qt_title0);

}

// QGraphicsWidget::size() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_size_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::sizePolicy() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_sizePolicy_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QSizePolicy  __qt_return_value = __qt_this->QGraphicsLayoutItem::sizePolicy();

    void* __d_return_value = (void*) new QSizePolicy(__qt_return_value);

    return __d_return_value;
}

// QGraphicsWidget::style() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_style_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QStyle*  __qt_return_value = __qt_this->style();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::testAttribute(Qt::WidgetAttribute attribute) const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_testAttribute_WidgetAttribute_const
(void* __this_nativeId,
 int attribute0)
{
    Qt::WidgetAttribute __qt_attribute0 = (Qt::WidgetAttribute) attribute0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testAttribute((Qt::WidgetAttribute )__qt_attribute0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::unsetLayoutDirection()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_unsetLayoutDirection
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->unsetLayoutDirection();

}

// QGraphicsWidget::unsetWindowFrameMargins()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_unsetWindowFrameMargins
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    __qt_this->unsetWindowFrameMargins();

}

// QGraphicsWidget::windowFlags() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_windowFlags_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->windowFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::windowFrameGeometry() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_windowFrameGeometry_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->windowFrameGeometry();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::windowFrameRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_windowFrameRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->windowFrameRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::windowTitle() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_windowTitle_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->windowTitle();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QGraphicsWidget::windowType() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_windowType_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->windowType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::boundingRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_boundingRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRectF  __qt_return_value = __qt_this->__override_boundingRect(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::closeEvent(QCloseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_closeEvent_QCloseEvent
(void* __this_nativeId,
 void* event0)
{
    QCloseEvent*  __qt_event0 = (QCloseEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEvent((QCloseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::grabKeyboardEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_grabKeyboardEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_grabKeyboardEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::grabMouseEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_grabMouseEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_grabMouseEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::hideEvent(QHideEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_hideEvent_QHideEvent
(void* __this_nativeId,
 void* event0)
{
    QHideEvent*  __qt_event0 = (QHideEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_hoverLeaveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverLeaveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::hoverMoveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_hoverMoveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverMoveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::initStyleOption(QStyleOption * option) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOption*  __qt_option0 = (QStyleOption* ) option0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_initStyleOption((QStyleOption* )__qt_option0, __do_static_call);

}

// QGraphicsWidget::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_itemChange_GraphicsItemChange_QVariant
(void* __this_nativeId,
 int change0,
 QVariant* value1)
{
    QGraphicsItem::GraphicsItemChange __qt_change0 = (QGraphicsItem::GraphicsItemChange) change0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_itemChange((QGraphicsItem::GraphicsItemChange )__qt_change0, (const QVariant& )__qt_value1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsWidget::moveEvent(QGraphicsSceneMoveEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMoveEvent*  __qt_event0 = (QGraphicsSceneMoveEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_moveEvent((QGraphicsSceneMoveEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsWidget::paintWindowFrame(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintWindowFrame((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsWidget::polishEvent()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_polishEvent
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_polishEvent(__do_static_call);

}

// QGraphicsWidget::propertyChange(const QString & propertyName, const QVariant & value)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_propertyChange_string_QVariant
(void* __this_nativeId,
 DArray propertyName0,
 QVariant* value1)
{
    QString __qt_propertyName0 = QString::fromUtf8((const char *)propertyName0.ptr, propertyName0.length);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_propertyChange((const QString& )__qt_propertyName0, (const QVariant& )__qt_value1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsWidget::resizeEvent(QGraphicsSceneResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneResizeEvent*  __qt_event0 = (QGraphicsSceneResizeEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QGraphicsSceneResizeEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::sceneEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_sceneEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_sceneEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::setGeometry(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setGeometry_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRectF& )rect0, __do_static_call);

}

// QGraphicsWidget::shape() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_shape_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPainterPath  __qt_return_value = __qt_this->__override_shape(__do_static_call);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsWidget::showEvent(QShowEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_showEvent_QShowEvent
(void* __this_nativeId,
 void* event0)
{
    QShowEvent*  __qt_event0 = (QShowEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::sizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_sizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_sizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsWidget::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_type_const
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::ungrabKeyboardEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_ungrabKeyboardEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::ungrabMouseEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_ungrabMouseEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_ungrabMouseEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGraphicsWidget::updateGeometry()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_updateGeometry
(void* __this_nativeId)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateGeometry(__do_static_call);

}

// QGraphicsWidget::windowFrameEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsWidget_windowFrameEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_windowFrameEvent((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::windowFrameSectionAt(const QPointF & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsWidget_QtDShell *__qt_this = (QGraphicsWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_windowFrameSectionAt((const QPointF& )pos0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsWidget::setTabOrder(QGraphicsWidget * first, QGraphicsWidget * second)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsWidget_setTabOrder_QGraphicsWidget_QGraphicsWidget
(void* first0,
 void* second1)
{
    QGraphicsWidget*  __qt_first0 = (QGraphicsWidget* ) first0;
    QGraphicsWidget*  __qt_second1 = (QGraphicsWidget* ) second1;
    QGraphicsWidget_QtDShell::setTabOrder((QGraphicsWidget* )__qt_first0, (QGraphicsWidget* )__qt_second1);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsWidget_staticMetaObject() {
    return (void*)&QGraphicsWidget::staticMetaObject;
}


