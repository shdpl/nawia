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
#include <qgraphicsproxywidget.h>
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

#include "QGraphicsProxyWidget_shell.h"
#include <iostream>
#include <qgraphicsproxywidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QGraphicsProxyWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGraphicsProxyWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_createEntity(void *nativeId, void* dId)
{
    new QGraphicsProxyWidgetEntity((QObject*)nativeId, dId);
}

QGraphicsProxyWidget_QtDShell::QGraphicsProxyWidget_QtDShell(void *d_ptr, QGraphicsItem*  parent0, Qt::WindowFlags  wFlags1)
    : QGraphicsProxyWidget(parent0, wFlags1),
      QObjectLink(this, d_ptr)
{
}

QGraphicsProxyWidget_QtDShell::~QGraphicsProxyWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGraphicsProxyWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGraphicsProxyWidget::metaObject();
}

int QGraphicsProxyWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGraphicsProxyWidget::qt_metacall(_c, _id, _a);
}

int QGraphicsProxyWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGraphicsProxyWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGraphicsProxyWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsItem_advance_int_dispatch, (void *dId, int phase0))
void QGraphicsProxyWidget_QtDShell::advance(int  phase0)
{
    qtd_QGraphicsItem_advance_int_dispatch(QObjectLink::getLink(this)->dId, (int )phase0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_boundingRect_const_dispatch, (void *dId, QRectF *__d_return_value))
QRectF  QGraphicsProxyWidget_QtDShell::boundingRect() const
{
    QRectF __d_return_value;
    qtd_QGraphicsItem_boundingRect_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsProxyWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QGraphicsWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch, (void *dId, void* other0, int mode1))
bool  QGraphicsProxyWidget_QtDShell::collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithItem_QGraphicsItem_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch, (void *dId, void* path0, int mode1))
bool  QGraphicsProxyWidget_QtDShell::collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const
{
    return qtd_QGraphicsItem_collidesWithPath_QPainterPath_ItemSelectionMode_const_dispatch(QObjectLink::getLink(this)->dId, &(QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_contains_QPointF_const_dispatch, (void *dId, QPointF* point0))
bool  QGraphicsProxyWidget_QtDShell::contains(const QPointF&  point0) const
{
    return qtd_QGraphicsItem_contains_QPointF_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )point0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0)
{
    qtd_QGraphicsItem_contextMenuEvent_QGraphicsSceneContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsProxyWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::dragEnterEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragEnterEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragLeaveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::dragMoveEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dragMoveEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::dropEvent(QGraphicsSceneDragDropEvent*  event0)
{
    qtd_QGraphicsItem_dropEvent_QGraphicsSceneDragDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneDragDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsProxyWidget_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* object0, void* event1))
bool  QGraphicsProxyWidget_QtDShell::eventFilter(QObject*  object0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )object0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_extension_QVariant_const_dispatch, (void *dId, void* variant0))
QVariant  QGraphicsProxyWidget_QtDShell::extension(const QVariant&  variant0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_extension_QVariant_const_dispatch(QObjectLink::getLink(this)->dId, &(QVariant& )variant0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QGraphicsProxyWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QGraphicsWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QGraphicsItem_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::grabKeyboardEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_grabKeyboardEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_grabMouseEvent_QEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::grabMouseEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_grabMouseEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::hideEvent(QHideEvent*  event0)
{
    qtd_QGraphicsWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::hoverEnterEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverEnterEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverLeaveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::hoverMoveEvent(QGraphicsSceneHoverEvent*  event0)
{
    qtd_QGraphicsItem_hoverMoveEvent_QGraphicsSceneHoverEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneHoverEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch, (void *dId, void* option0))
void QGraphicsProxyWidget_QtDShell::initStyleOption(QStyleOption*  option0) const
{
    qtd_QGraphicsWidget_initStyleOption_nativepointerQStyleOption_const_dispatch(QObjectLink::getLink(this)->dId, (QStyleOption* )option0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QGraphicsItem_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QGraphicsProxyWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch, (void *dId, void* item0))
bool  QGraphicsProxyWidget_QtDShell::isObscuredBy(const QGraphicsItem*  item0) const
{
    return qtd_QGraphicsItem_isObscuredBy_QGraphicsItem_const_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )item0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch, (void *dId, int change0, void* value1))
QVariant  QGraphicsProxyWidget_QtDShell::itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsItem_itemChange_GraphicsItemChange_QVariant_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem::GraphicsItemChange )change0, &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QGraphicsItem_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseDoubleClickEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::mouseMoveEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseMoveEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::mousePressEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mousePressEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0)
{
    qtd_QGraphicsItem_mouseReleaseEvent_QGraphicsSceneMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::moveEvent(QGraphicsSceneMoveEvent*  event0)
{
    qtd_QGraphicsWidget_moveEvent_QGraphicsSceneMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_opaqueArea_const_dispatch, (void *dId))
QPainterPath  QGraphicsProxyWidget_QtDShell::opaqueArea() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_opaqueArea_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
void QGraphicsProxyWidget_QtDShell::paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch, (void *dId, void* painter0, void* option1, void* widget2))
void QGraphicsProxyWidget_QtDShell::paintWindowFrame(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2)
{
    qtd_QGraphicsWidget_paintWindowFrame_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, (QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_polishEvent_dispatch, (void *dId))
void QGraphicsProxyWidget_QtDShell::polishEvent()
{
    qtd_QGraphicsWidget_polishEvent_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsWidget_propertyChange_string_QVariant_dispatch, (void *dId, const unsigned short* propertyName0, int propertyName0_size, void* value1))
QVariant  QGraphicsProxyWidget_QtDShell::propertyChange(const QString&  propertyName0, const QVariant&  value1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QGraphicsWidget_propertyChange_string_QVariant_dispatch(QObjectLink::getLink(this)->dId, propertyName0.utf16(), propertyName0.size(), &(QVariant& )value1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::resizeEvent(QGraphicsSceneResizeEvent*  event0)
{
    qtd_QGraphicsWidget_resizeEvent_QGraphicsSceneResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsProxyWidget_QtDShell::sceneEvent(QEvent*  event0)
{
    return qtd_QGraphicsItem_sceneEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QGraphicsProxyWidget_QtDShell::sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1)
{
    return qtd_QGraphicsItem_sceneEventFilter_QGraphicsItem_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsItem* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_setGeometry_QRectF_dispatch, (void *dId, QRectF* rect0))
void QGraphicsProxyWidget_QtDShell::setGeometry(const QRectF&  rect0)
{
    qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch(QObjectLink::getLink(this)->dId, &(QRectF& )rect0);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsItem_shape_const_dispatch, (void *dId))
QPainterPath  QGraphicsProxyWidget_QtDShell::shape() const
{
    QPainterPath *__qt_return_value = (QPainterPath*) qtd_QGraphicsItem_shape_const_dispatch(QObjectLink::getLink(this)->dId);
    return QPainterPath(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QGraphicsWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch, (void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1))
QSizeF  QGraphicsProxyWidget_QtDShell::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
    QSizeF __d_return_value;
    qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (Qt::SizeHint )which0, &(QSizeF& )constraint1);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsProxyWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QGraphicsItem_type_const_dispatch, (void *dId))
int  QGraphicsProxyWidget_QtDShell::type() const
{
    return qtd_QGraphicsItem_type_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::ungrabKeyboardEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_ungrabKeyboardEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::ungrabMouseEvent(QEvent*  event0)
{
    qtd_QGraphicsWidget_ungrabMouseEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_updateGeometry_dispatch, (void *dId))
void QGraphicsProxyWidget_QtDShell::updateGeometry()
{
    qtd_QGraphicsLayoutItem_updateGeometry_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch, (void *dId, void* event0))
void QGraphicsProxyWidget_QtDShell::wheelEvent(QGraphicsSceneWheelEvent*  event0)
{
    qtd_QGraphicsItem_wheelEvent_QGraphicsSceneWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QGraphicsSceneWheelEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QGraphicsWidget_windowFrameEvent_QEvent_dispatch, (void *dId, void* e0))
bool  QGraphicsProxyWidget_QtDShell::windowFrameEvent(QEvent*  e0)
{
    return qtd_QGraphicsWidget_windowFrameEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch, (void *dId, QPointF* pos0))
Qt::WindowFrameSection  QGraphicsProxyWidget_QtDShell::windowFrameSectionAt(const QPointF&  pos0) const
{
    return (Qt::WindowFrameSection) qtd_QGraphicsWidget_windowFrameSectionAt_QPointF_const_dispatch(QObjectLink::getLink(this)->dId, &(QPointF& )pos0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsProxyWidget_QtDShell::__public_addToIndex()
{
    QGraphicsItem::addToIndex();
}

QGraphicsProxyWidget*  QGraphicsProxyWidget_QtDShell::__public_newProxyWidget(const QWidget*  arg__1)
{
    return QGraphicsProxyWidget::newProxyWidget((const QWidget* )arg__1);
}

void QGraphicsProxyWidget_QtDShell::__public_prepareGeometryChange()
{
    QGraphicsItem::prepareGeometryChange();
}

void QGraphicsProxyWidget_QtDShell::__public_removeFromIndex()
{
    QGraphicsItem::removeFromIndex();
}

QObject*  QGraphicsProxyWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGraphicsProxyWidget_QtDShell::__public_setGraphicsItem(QGraphicsItem*  item0)
{
    QGraphicsLayoutItem::setGraphicsItem((QGraphicsItem* )item0);
}

void QGraphicsProxyWidget_QtDShell::__public_setOwnedByLayout(bool  ownedByLayout0)
{
    QGraphicsLayoutItem::setOwnedByLayout((bool )ownedByLayout0);
}

void QGraphicsProxyWidget_QtDShell::__public_updateMicroFocus()
{
    QGraphicsObject::updateMicroFocus();
}

void QGraphicsProxyWidget_QtDShell::__public_childrenChanged()
{
    QGraphicsObject::childrenChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_enabledChanged()
{
    QGraphicsObject::enabledChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_geometryChanged()
{
    QGraphicsWidget::geometryChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_heightChanged()
{
    QGraphicsObject::heightChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_layoutChanged()
{
    QGraphicsWidget::layoutChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_opacityChanged()
{
    QGraphicsObject::opacityChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_parentChanged()
{
    QGraphicsObject::parentChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_rotationChanged()
{
    QGraphicsObject::rotationChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_scaleChanged()
{
    QGraphicsObject::scaleChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_visibleChanged()
{
    QGraphicsObject::visibleChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_widthChanged()
{
    QGraphicsObject::widthChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_xChanged()
{
    QGraphicsObject::xChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_yChanged()
{
    QGraphicsObject::yChanged();
}

void QGraphicsProxyWidget_QtDShell::__public_zChanged()
{
    QGraphicsObject::zChanged();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsProxyWidget_QtDShell::__override_advance(int  phase0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::advance((int )phase0);
    } else {
        advance((int )phase0);
    }
}

QRectF  QGraphicsProxyWidget_QtDShell::__override_boundingRect(bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::boundingRect();
    } else {
        return boundingRect();
    }
}

void QGraphicsProxyWidget_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithItem((const QGraphicsItem* )other0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    } else {
        return collidesWithPath((const QPainterPath& )path0, (Qt::ItemSelectionMode )mode1);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_contains(const QPointF&  point0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::contains((const QPointF& )point0);
    } else {
        return contains((const QPointF& )point0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QGraphicsSceneContextMenuEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragEnterEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragLeaveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dragMoveEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::dropEvent((QGraphicsSceneDragDropEvent* )event0);
    } else {
        dropEvent((QGraphicsSceneDragDropEvent* )event0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsProxyWidget::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsProxyWidget::eventFilter((QObject* )object0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )object0, (QEvent* )event1);
    }
}

QVariant  QGraphicsProxyWidget_QtDShell::__override_extension(const QVariant&  variant0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::extension((const QVariant& )variant0);
    } else {
        return extension((const QVariant& )variant0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QGraphicsProxyWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_grabKeyboardEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::grabKeyboardEvent((QEvent* )event0);
    } else {
        grabKeyboardEvent((QEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_grabMouseEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::grabMouseEvent((QEvent* )event0);
    } else {
        grabMouseEvent((QEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_hideEvent(QHideEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::hideEvent((QHideEvent* )event0);
    } else {
        hideEvent((QHideEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverEnterEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverLeaveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    } else {
        hoverMoveEvent((QGraphicsSceneHoverEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_initStyleOption(QStyleOption*  option0, bool static_call) const
{
    if (static_call) {
        QGraphicsWidget::initStyleOption((QStyleOption* )option0);
    } else {
        initStyleOption((QStyleOption* )option0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsItem::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsProxyWidget_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::isObscuredBy((const QGraphicsItem* )item0);
    } else {
        return isObscuredBy((const QGraphicsItem* )item0);
    }
}

QVariant  QGraphicsProxyWidget_QtDShell::__override_itemChange(int  change0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsProxyWidget::itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    } else {
        return itemChange((QGraphicsItem::GraphicsItemChange )change0, (const QVariant& )value1);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseMoveEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mousePressEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QGraphicsSceneMouseEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_moveEvent(QGraphicsSceneMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::moveEvent((QGraphicsSceneMoveEvent* )event0);
    } else {
        moveEvent((QGraphicsSceneMoveEvent* )event0);
    }
}

QPainterPath  QGraphicsProxyWidget_QtDShell::__override_opaqueArea(bool static_call) const
{
    if (static_call) {
        return QGraphicsItem::opaqueArea();
    } else {
        return opaqueArea();
    }
}

void QGraphicsProxyWidget_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    } else {
        paint((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_paintWindowFrame(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::paintWindowFrame((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    } else {
        paintWindowFrame((QPainter* )painter0, (const QStyleOptionGraphicsItem* )option1, (QWidget* )widget2);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_polishEvent(bool static_call)
{
    if (static_call) {
        QGraphicsWidget::polishEvent();
    } else {
        polishEvent();
    }
}

QVariant  QGraphicsProxyWidget_QtDShell::__override_propertyChange(const QString&  propertyName0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::propertyChange((const QString& )propertyName0, (const QVariant& )value1);
    } else {
        return propertyChange((const QString& )propertyName0, (const QVariant& )value1);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_resizeEvent(QGraphicsSceneResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::resizeEvent((QGraphicsSceneResizeEvent* )event0);
    } else {
        resizeEvent((QGraphicsSceneResizeEvent* )event0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_sceneEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::sceneEvent((QEvent* )event0);
    } else {
        return sceneEvent((QEvent* )event0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QGraphicsItem::sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    } else {
        return sceneEventFilter((QGraphicsItem* )watched0, (QEvent* )event1);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_setGeometry(const QRectF&  rect0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::setGeometry((const QRectF& )rect0);
    } else {
        setGeometry((const QRectF& )rect0);
    }
}

QPainterPath  QGraphicsProxyWidget_QtDShell::__override_shape(bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::shape();
    } else {
        return shape();
    }
}

void QGraphicsProxyWidget_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSizeF  QGraphicsProxyWidget_QtDShell::__override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const
{
    if (static_call) {
        return QGraphicsProxyWidget::sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    } else {
        return sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

int  QGraphicsProxyWidget_QtDShell::__override_type(bool static_call) const
{
    if (static_call) {
        return QGraphicsProxyWidget::type();
    } else {
        return type();
    }
}

void QGraphicsProxyWidget_QtDShell::__override_ungrabKeyboardEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsWidget::ungrabKeyboardEvent((QEvent* )event0);
    } else {
        ungrabKeyboardEvent((QEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_ungrabMouseEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::ungrabMouseEvent((QEvent* )event0);
    } else {
        ungrabMouseEvent((QEvent* )event0);
    }
}

void QGraphicsProxyWidget_QtDShell::__override_updateGeometry(bool static_call)
{
    if (static_call) {
        QGraphicsWidget::updateGeometry();
    } else {
        updateGeometry();
    }
}

void QGraphicsProxyWidget_QtDShell::__override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsProxyWidget::wheelEvent((QGraphicsSceneWheelEvent* )event0);
    } else {
        wheelEvent((QGraphicsSceneWheelEvent* )event0);
    }
}

bool  QGraphicsProxyWidget_QtDShell::__override_windowFrameEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QGraphicsWidget::windowFrameEvent((QEvent* )e0);
    } else {
        return windowFrameEvent((QEvent* )e0);
    }
}

int  QGraphicsProxyWidget_QtDShell::__override_windowFrameSectionAt(const QPointF&  pos0, bool static_call) const
{
    if (static_call) {
        return QGraphicsWidget::windowFrameSectionAt((const QPointF& )pos0);
    } else {
        return windowFrameSectionAt((const QPointF& )pos0);
    }
}

// ---externC---
// QGraphicsProxyWidget::QGraphicsProxyWidget(QGraphicsItem * parent_, QFlags<Qt::WindowType> wFlags)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsProxyWidget_QGraphicsProxyWidget_QGraphicsItem_WindowFlags
(void *d_ptr,
 void* parent0,
 int wFlags1)
{
    QGraphicsItem*  __qt_parent0 = (QGraphicsItem* ) parent0;
    QFlags<Qt::WindowType> __qt_wFlags1 = (QFlags<Qt::WindowType>) wFlags1;
    QGraphicsProxyWidget_QtDShell *__qt_this = new QGraphicsProxyWidget_QtDShell(d_ptr, (QGraphicsItem* )__qt_parent0, (Qt::WindowFlags )__qt_wFlags1);
    return (void *) __qt_this;

}

// QGraphicsProxyWidget::createProxyForChildWidget(QWidget * child)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsProxyWidget_createProxyForChildWidget_QWidget
(void* __this_nativeId,
 void* child0)
{
    QWidget*  __qt_child0 = (QWidget* ) child0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    QGraphicsProxyWidget*  __qt_return_value = __qt_this->createProxyForChildWidget((QWidget* )__qt_child0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsProxyWidget::newProxyWidget(const QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsProxyWidget_newProxyWidget_QWidget
(void* __this_nativeId,
 void* arg__1)
{
    const QWidget*  __qt_arg__1 = (const QWidget* ) arg__1;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    QGraphicsProxyWidget*  __qt_return_value = __qt_this->__public_newProxyWidget((const QWidget* )__qt_arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsProxyWidget::setWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_setWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    __qt_this->setWidget((QWidget* )__qt_widget0);

}

// QGraphicsProxyWidget::subWidgetRect(const QWidget * widget) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_subWidgetRect_QWidget_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* widget0)
{
    const QWidget*  __qt_widget0 = (const QWidget* ) widget0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->subWidgetRect((const QWidget* )__qt_widget0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsProxyWidget::widget() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsProxyWidget_widget_const
(void* __this_nativeId)
{
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsProxyWidget::contextMenuEvent(QGraphicsSceneContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_contextMenuEvent_QGraphicsSceneContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneContextMenuEvent*  __qt_event0 = (QGraphicsSceneContextMenuEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QGraphicsSceneContextMenuEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::dragEnterEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_dragEnterEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::dragLeaveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_dragLeaveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::dragMoveEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_dragMoveEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::dropEvent(QGraphicsSceneDragDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_dropEvent_QGraphicsSceneDragDropEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneDragDropEvent*  __qt_event0 = (QGraphicsSceneDragDropEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QGraphicsSceneDragDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsProxyWidget_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsProxyWidget::eventFilter(QObject * object, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsProxyWidget_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* object0,
 void* event1)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_object0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsProxyWidget::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsProxyWidget_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsProxyWidget::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::grabMouseEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_grabMouseEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_grabMouseEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::hideEvent(QHideEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_hideEvent_QHideEvent
(void* __this_nativeId,
 void* event0)
{
    QHideEvent*  __qt_event0 = (QHideEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::hoverEnterEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_hoverEnterEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverEnterEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_hoverLeaveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverLeaveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::hoverMoveEvent(QGraphicsSceneHoverEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_hoverMoveEvent_QGraphicsSceneHoverEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneHoverEvent*  __qt_event0 = (QGraphicsSceneHoverEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hoverMoveEvent((QGraphicsSceneHoverEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant & value)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsProxyWidget_itemChange_GraphicsItemChange_QVariant
(void* __this_nativeId,
 int change0,
 QVariant* value1)
{
    QGraphicsItem::GraphicsItemChange __qt_change0 = (QGraphicsItem::GraphicsItemChange) change0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_itemChange((QGraphicsItem::GraphicsItemChange )__qt_change0, (const QVariant& )__qt_value1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsProxyWidget::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::keyReleaseEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::mouseDoubleClickEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_mouseDoubleClickEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::mouseMoveEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_mouseMoveEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::mousePressEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_mousePressEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::mouseReleaseEvent(QGraphicsSceneMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_mouseReleaseEvent_QGraphicsSceneMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneMouseEvent*  __qt_event0 = (QGraphicsSceneMouseEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QGraphicsSceneMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget
(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionGraphicsItem*  __qt_option1 = (const QStyleOptionGraphicsItem* ) option1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionGraphicsItem* )__qt_option1, (QWidget* )__qt_widget2, __do_static_call);

}

// QGraphicsProxyWidget::resizeEvent(QGraphicsSceneResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_resizeEvent_QGraphicsSceneResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneResizeEvent*  __qt_event0 = (QGraphicsSceneResizeEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QGraphicsSceneResizeEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::setGeometry(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_setGeometry_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRectF& )rect0, __do_static_call);

}

// QGraphicsProxyWidget::showEvent(QShowEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_showEvent_QShowEvent
(void* __this_nativeId,
 void* event0)
{
    QShowEvent*  __qt_event0 = (QShowEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::sizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_sizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_sizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsProxyWidget::type() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsProxyWidget_type_const
(void* __this_nativeId)
{
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_type(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsProxyWidget::ungrabMouseEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_ungrabMouseEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_ungrabMouseEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGraphicsProxyWidget::wheelEvent(QGraphicsSceneWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsProxyWidget_wheelEvent_QGraphicsSceneWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QGraphicsSceneWheelEvent*  __qt_event0 = (QGraphicsSceneWheelEvent* ) event0;
    QGraphicsProxyWidget_QtDShell *__qt_this = (QGraphicsProxyWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QGraphicsSceneWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsProxyWidget_staticMetaObject() {
    return (void*)&QGraphicsProxyWidget::staticMetaObject;
}


