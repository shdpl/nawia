#ifndef QMDISUBWINDOW_SHELL_H
#define QMDISUBWINDOW_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qmdisubwindow.h>

#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
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
#include <qmenu.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

class QMdiSubWindow_QtDShell : public QMdiSubWindow, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QMdiSubWindow_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1);
    ~QMdiSubWindow_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  changeEvent0);
    void childEvent(QChildEvent*  childEvent0);
    void closeEvent(QCloseEvent*  closeEvent0);
    void contextMenuEvent(QContextMenuEvent*  contextMenuEvent0);
    void customEvent(QEvent*  arg__1);
    int  devType() const;
    void dragEnterEvent(QDragEnterEvent*  arg__1);
    void dragLeaveEvent(QDragLeaveEvent*  arg__1);
    void dragMoveEvent(QDragMoveEvent*  arg__1);
    void dropEvent(QDropEvent*  arg__1);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  object0, QEvent*  event1);
    void focusInEvent(QFocusEvent*  focusInEvent0);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  focusOutEvent0);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  hideEvent0);
    void inputMethodEvent(QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
    void keyPressEvent(QKeyEvent*  keyEvent0);
    void keyReleaseEvent(QKeyEvent*  arg__1);
    void languageChange();
    void leaveEvent(QEvent*  leaveEvent0);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  mouseEvent0);
    void mouseMoveEvent(QMouseEvent*  mouseEvent0);
    void mousePressEvent(QMouseEvent*  mouseEvent0);
    void mouseReleaseEvent(QMouseEvent*  mouseEvent0);
    void moveEvent(QMoveEvent*  moveEvent0);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  paintEvent0);
    void resizeEvent(QResizeEvent*  resizeEvent0);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  showEvent0);
    QSize  sizeHint() const;
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  timerEvent0);
    void wheelEvent(QWheelEvent*  arg__1);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_updateMicroFocus();
    void __public_aboutToActivate();
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __public_windowStateChanged(int  oldState0, int  newState1);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  changeEvent0, bool static_call);
    void __override_childEvent(QChildEvent*  childEvent0, bool static_call);
    void __override_closeEvent(QCloseEvent*  closeEvent0, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  contextMenuEvent0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call);
    void __override_dropEvent(QDropEvent*  arg__1, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call);
    void __override_focusInEvent(QFocusEvent*  focusInEvent0, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  focusOutEvent0, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  hideEvent0, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call);
    QVariant  __override_inputMethodQuery(int  arg__1, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  keyEvent0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  leaveEvent0, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  mouseEvent0, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  mouseEvent0, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  mouseEvent0, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  mouseEvent0, bool static_call);
    void __override_moveEvent(QMoveEvent*  moveEvent0, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  paintEvent0, bool static_call);
    void __override_resizeEvent(QResizeEvent*  resizeEvent0, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  showEvent0, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  timerEvent0, bool static_call);
    void __override_wheelEvent(QWheelEvent*  arg__1, bool static_call);
};

#endif // QMDISUBWINDOW_SHELL_H
