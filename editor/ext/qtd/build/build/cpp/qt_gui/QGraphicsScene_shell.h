#ifndef QGRAPHICSSCENE_SHELL_H
#define QGRAPHICSSCENE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicsscene.h>

#include <QVarLengthArray>
#include <QVariant>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicssceneevent.h>
#include <qgraphicsview.h>
#include <qgraphicswidget.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpolygon.h>
#include <qstyle.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

class QGraphicsScene_QtDShell : public QGraphicsScene, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QGraphicsScene_QtDShell(void *d_ptr, QObject*  parent0);
    QGraphicsScene_QtDShell(void *d_ptr, const QRectF&  sceneRect0, QObject*  parent1);
    QGraphicsScene_QtDShell(void *d_ptr, double  x0, double  y1, double  width2, double  height3, QObject*  parent4);
    ~QGraphicsScene_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0);
    void customEvent(QEvent*  arg__1);
    void dragEnterEvent(QGraphicsSceneDragDropEvent*  event0);
    void dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0);
    void dragMoveEvent(QGraphicsSceneDragDropEvent*  event0);
    void drawBackground(QPainter*  painter0, const QRectF&  rect1);
    void drawForeground(QPainter*  painter0, const QRectF&  rect1);
    void dropEvent(QGraphicsSceneDragDropEvent*  event0);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  watched0, QEvent*  event1);
    void focusInEvent(QFocusEvent*  event0);
    void focusOutEvent(QFocusEvent*  event0);
    void helpEvent(QGraphicsSceneHelpEvent*  event0);
    void inputMethodEvent(QInputMethodEvent*  event0);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  query0) const;
    void keyPressEvent(QKeyEvent*  event0);
    void keyReleaseEvent(QKeyEvent*  event0);
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0);
    void mouseMoveEvent(QGraphicsSceneMouseEvent*  event0);
    void mousePressEvent(QGraphicsSceneMouseEvent*  event0);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0);
    void timerEvent(QTimerEvent*  arg__1);
    void wheelEvent(QGraphicsSceneWheelEvent*  event0);
    bool  __public_focusNextPrevChild(bool  next0);
    QObject*  __public_sender() const;
    void __public_changed(const QList<QRectF >&  region0);
    void __public_sceneRectChanged(const QRectF&  rect0);
    void __public_selectionChanged();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_contextMenuEvent(QGraphicsSceneContextMenuEvent*  event0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    void __override_dragEnterEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    void __override_dragLeaveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    void __override_dragMoveEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    void __override_drawBackground(QPainter*  painter0, const QRectF&  rect1, bool static_call);
    void __override_drawForeground(QPainter*  painter0, const QRectF&  rect1, bool static_call);
    void __override_dropEvent(QGraphicsSceneDragDropEvent*  event0, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  watched0, QEvent*  event1, bool static_call);
    void __override_focusInEvent(QFocusEvent*  event0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  event0, bool static_call);
    void __override_helpEvent(QGraphicsSceneHelpEvent*  event0, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call);
    QVariant  __override_inputMethodQuery(int  query0, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  event0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  event0, bool static_call);
    void __override_mouseDoubleClickEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    void __override_mouseMoveEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    void __override_mousePressEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    void __override_mouseReleaseEvent(QGraphicsSceneMouseEvent*  event0, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_wheelEvent(QGraphicsSceneWheelEvent*  event0, bool static_call);
};

#endif // QGRAPHICSSCENE_SHELL_H
