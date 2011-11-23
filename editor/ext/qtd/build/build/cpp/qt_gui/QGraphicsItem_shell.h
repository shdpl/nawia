#ifndef QGRAPHICSITEM_SHELL_H
#define QGRAPHICSITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicsitem.h>

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

class QGraphicsItem_QtDShell : public QGraphicsItem, public QtdObjectLink
{
public:
    QGraphicsItem_QtDShell(void *d_ptr, QGraphicsItem*  parent0, QGraphicsScene*  scene1);
    ~QGraphicsItem_QtDShell();

    void advance(int  phase0);
    QRectF  boundingRect() const;
    bool  collidesWithItem(const QGraphicsItem*  other0, Qt::ItemSelectionMode  mode1) const;
    bool  collidesWithPath(const QPainterPath&  path0, Qt::ItemSelectionMode  mode1) const;
    bool  contains(const QPointF&  point0) const;
    void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0);
    void dragEnterEvent(QGraphicsSceneDragDropEvent*  event0);
    void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0);
    void dragMoveEvent(QGraphicsSceneDragDropEvent*  event0);
    void dropEvent(QGraphicsSceneDragDropEvent*  event0);
    QVariant  extension(const QVariant&  variant0) const;
    void focusInEvent(QFocusEvent*  event0);
    void focusOutEvent(QFocusEvent*  event0);
    void hoverEnterEvent(QGraphicsSceneHoverEvent*  event0);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0);
    void hoverMoveEvent(QGraphicsSceneHoverEvent*  event0);
    void inputMethodEvent(QInputMethodEvent*  event0);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  query0) const;
    bool  isObscuredBy(const QGraphicsItem*  item0) const;
    QVariant  itemChange(QGraphicsItem::GraphicsItemChange  change0, const QVariant&  value1);
    void keyPressEvent(QKeyEvent*  event0);
    void keyReleaseEvent(QKeyEvent*  event0);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0);
    void mouseMoveEvent(QGraphicsSceneMouseEvent*  event0);
    void mousePressEvent(QGraphicsSceneMouseEvent*  event0);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0);
    QPainterPath  opaqueArea() const;
    void paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2);
    bool  sceneEvent(QEvent*  event0);
    bool  sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1);
    QPainterPath  shape() const;
    int  type() const;
    void wheelEvent(QGraphicsSceneWheelEvent*  event0);
    void __public_addToIndex();
    void __public_prepareGeometryChange();
    void __public_removeFromIndex();
    void __public_updateMicroFocus();
    void __override_advance(int  phase0, bool static_call);
    QRectF  __override_boundingRect(bool static_call) const;
    bool  __override_collidesWithItem(const QGraphicsItem*  other0, int  mode1, bool static_call) const;
    bool  __override_collidesWithPath(const QPainterPath&  path0, int  mode1, bool static_call) const;
    bool  __override_contains(const QPointF&  point0, bool static_call) const;
    void __override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call);
    void __override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    void __override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    void __override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    void __override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    QVariant  __override_extension(const QVariant&  variant0, bool static_call) const;
    void __override_focusInEvent(QFocusEvent*  event0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  event0, bool static_call);
    void __override_hoverEnterEvent(QGraphicsSceneHoverEvent*  event0, bool static_call);
    void __override_hoverLeaveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call);
    void __override_hoverMoveEvent(QGraphicsSceneHoverEvent*  event0, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call);
    QVariant  __override_inputMethodQuery(int  query0, bool static_call) const;
    bool  __override_isObscuredBy(const QGraphicsItem*  item0, bool static_call) const;
    QVariant  __override_itemChange(int  change0, const QVariant&  value1, bool static_call);
    void __override_keyPressEvent(QKeyEvent*  event0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  event0, bool static_call);
    void __override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    void __override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    void __override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    void __override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    QPainterPath  __override_opaqueArea(bool static_call) const;
    void __override_paint(QPainter*  painter0, const QStyleOptionGraphicsItem*  option1, QWidget*  widget2, bool static_call);
    bool  __override_sceneEvent(QEvent*  event0, bool static_call);
    bool  __override_sceneEventFilter(QGraphicsItem*  watched0, QEvent*  event1, bool static_call);
    QPainterPath  __override_shape(bool static_call) const;
    int  __override_type(bool static_call) const;
    void __override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call);
};

#endif // QGRAPHICSITEM_SHELL_H
