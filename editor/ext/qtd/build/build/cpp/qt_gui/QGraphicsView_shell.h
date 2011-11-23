#ifndef QGRAPHICSVIEW_SHELL_H
#define QGRAPHICSVIEW_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicsview.h>

#include <QPainterPath>
#include <QVarLengthArray>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

class QGraphicsView_QtDShell : public QGraphicsView, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QGraphicsView_QtDShell(void *d_ptr, QGraphicsScene*  scene0, QWidget*  parent1);
    QGraphicsView_QtDShell(void *d_ptr, QWidget*  parent0);
    ~QGraphicsView_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  arg__1);
    void childEvent(QChildEvent*  arg__1);
    void closeEvent(QCloseEvent*  arg__1);
    void contextMenuEvent(QContextMenuEvent*  event0);
    void customEvent(QEvent*  arg__1);
    int  devType() const;
    void dragEnterEvent(QDragEnterEvent*  event0);
    void dragLeaveEvent(QDragLeaveEvent*  event0);
    void dragMoveEvent(QDragMoveEvent*  event0);
    void drawBackground(QPainter*  painter0, const QRectF&  rect1);
    void drawForeground(QPainter*  painter0, const QRectF&  rect1);
    void dropEvent(QDropEvent*  event0);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void focusInEvent(QFocusEvent*  event0);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  event0);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  arg__1);
    void inputMethodEvent(QInputMethodEvent*  event0);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  query0) const;
    void keyPressEvent(QKeyEvent*  event0);
    void keyReleaseEvent(QKeyEvent*  event0);
    void languageChange();
    void leaveEvent(QEvent*  arg__1);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  event0);
    void mouseMoveEvent(QMouseEvent*  event0);
    void mousePressEvent(QMouseEvent*  event0);
    void mouseReleaseEvent(QMouseEvent*  event0);
    void moveEvent(QMoveEvent*  arg__1);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  event0);
    void resizeEvent(QResizeEvent*  event0);
    void scrollContentsBy(int  dx0, int  dy1);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  event0);
    QSize  sizeHint() const;
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  arg__1);
    bool  viewportEvent(QEvent*  event0);
    void wheelEvent(QWheelEvent*  event0);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    void __public_drawFrame(QPainter*  arg__1);
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3);
    void __public_setupViewport(QWidget*  widget0);
    void __public_updateMicroFocus();
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  arg__1, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_closeEvent(QCloseEvent*  arg__1, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call);
    void __override_drawBackground(QPainter*  painter0, const QRectF&  rect1, bool static_call);
    void __override_drawForeground(QPainter*  painter0, const QRectF&  rect1, bool static_call);
    void __override_dropEvent(QDropEvent*  event0, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_focusInEvent(QFocusEvent*  event0, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  event0, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  arg__1, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call);
    QVariant  __override_inputMethodQuery(int  query0, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  event0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  event0, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  arg__1, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  event0, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  event0, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call);
    void __override_moveEvent(QMoveEvent*  arg__1, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  event0, bool static_call);
    void __override_resizeEvent(QResizeEvent*  event0, bool static_call);
    void __override_scrollContentsBy(int  dx0, int  dy1, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  event0, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    bool  __override_viewportEvent(QEvent*  event0, bool static_call);
    void __override_wheelEvent(QWheelEvent*  event0, bool static_call);
};

#endif // QGRAPHICSVIEW_SHELL_H
