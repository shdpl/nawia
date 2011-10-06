#ifndef QMDIAREA_SHELL_H
#define QMDIAREA_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qmdiarea.h>

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
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmdiarea.h>
#include <qmdisubwindow.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

class QMdiArea_QtDShell : public QMdiArea, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QMdiArea_QtDShell(void *d_ptr, QWidget*  parent0);
    ~QMdiArea_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  arg__1);
    void childEvent(QChildEvent*  childEvent0);
    void closeEvent(QCloseEvent*  arg__1);
    void contextMenuEvent(QContextMenuEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    int  devType() const;
    void dragEnterEvent(QDragEnterEvent*  arg__1);
    void dragLeaveEvent(QDragLeaveEvent*  arg__1);
    void dragMoveEvent(QDragMoveEvent*  arg__1);
    void dropEvent(QDropEvent*  arg__1);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  object0, QEvent*  event1);
    void focusInEvent(QFocusEvent*  arg__1);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  arg__1);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  arg__1);
    void inputMethodEvent(QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
    void keyPressEvent(QKeyEvent*  arg__1);
    void keyReleaseEvent(QKeyEvent*  arg__1);
    void languageChange();
    void leaveEvent(QEvent*  arg__1);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  arg__1);
    void mouseMoveEvent(QMouseEvent*  arg__1);
    void mousePressEvent(QMouseEvent*  arg__1);
    void mouseReleaseEvent(QMouseEvent*  arg__1);
    void moveEvent(QMoveEvent*  arg__1);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  paintEvent0);
    void resizeEvent(QResizeEvent*  resizeEvent0);
    void scrollContentsBy(int  dx0, int  dy1);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  showEvent0);
    QSize  sizeHint() const;
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  timerEvent0);
    bool  viewportEvent(QEvent*  event0);
    void wheelEvent(QWheelEvent*  arg__1);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    void __public_drawFrame(QPainter*  arg__1);
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3);
    void __public_setupViewport(QWidget*  viewport0);
    void __public_updateMicroFocus();
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __public_subWindowActivated(QMdiSubWindow*  arg__1);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  arg__1, bool static_call);
    void __override_childEvent(QChildEvent*  childEvent0, bool static_call);
    void __override_closeEvent(QCloseEvent*  arg__1, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call);
    void __override_dropEvent(QDropEvent*  arg__1, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call);
    void __override_focusInEvent(QFocusEvent*  arg__1, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  arg__1, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  arg__1, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call);
    QVariant  __override_inputMethodQuery(int  arg__1, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  arg__1, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  arg__1, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_moveEvent(QMoveEvent*  arg__1, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  paintEvent0, bool static_call);
    void __override_resizeEvent(QResizeEvent*  resizeEvent0, bool static_call);
    void __override_scrollContentsBy(int  dx0, int  dy1, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  showEvent0, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  timerEvent0, bool static_call);
    bool  __override_viewportEvent(QEvent*  event0, bool static_call);
    void __override_wheelEvent(QWheelEvent*  arg__1, bool static_call);
};

#endif // QMDIAREA_SHELL_H
