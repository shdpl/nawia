#ifndef QSLIDER_SHELL_H
#define QSLIDER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qslider.h>

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
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qslider.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

class QSlider_QtDShell : public QSlider, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QSlider_QtDShell(void *d_ptr, QWidget*  parent0);
    QSlider_QtDShell(void *d_ptr, Qt::Orientation  orientation0, QWidget*  parent1);
    ~QSlider_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  e0);
    void childEvent(QChildEvent*  arg__1);
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
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void focusInEvent(QFocusEvent*  arg__1);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  arg__1);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  arg__1);
    void inputMethodEvent(QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
    void keyPressEvent(QKeyEvent*  ev0);
    void keyReleaseEvent(QKeyEvent*  arg__1);
    void languageChange();
    void leaveEvent(QEvent*  arg__1);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  arg__1);
    void mouseMoveEvent(QMouseEvent*  ev0);
    void mousePressEvent(QMouseEvent*  ev0);
    void mouseReleaseEvent(QMouseEvent*  ev0);
    void moveEvent(QMoveEvent*  arg__1);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  ev0);
    void resizeEvent(QResizeEvent*  arg__1);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  arg__1);
    QSize  sizeHint() const;
    void sliderChange(QAbstractSlider::SliderChange  change0);
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  arg__1);
    void wheelEvent(QWheelEvent*  e0);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_initStyleOption(QStyleOptionSlider*  option0) const;
    int  __public_repeatAction() const;
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_setRepeatAction(int  action0, int  thresholdTime1, int  repeatTime2);
    void __public_updateMicroFocus();
    void __public_actionTriggered(int  action0);
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __public_rangeChanged(int  min0, int  max1);
    void __public_sliderMoved(int  position0);
    void __public_sliderPressed();
    void __public_sliderReleased();
    void __public_valueChanged(int  value0);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  e0, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
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
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_focusInEvent(QFocusEvent*  arg__1, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  arg__1, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  arg__1, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call);
    QVariant  __override_inputMethodQuery(int  arg__1, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  ev0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  arg__1, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  ev0, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  ev0, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  ev0, bool static_call);
    void __override_moveEvent(QMoveEvent*  arg__1, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  ev0, bool static_call);
    void __override_resizeEvent(QResizeEvent*  arg__1, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  arg__1, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_sliderChange(int  change0, bool static_call);
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_wheelEvent(QWheelEvent*  e0, bool static_call);
};

#endif // QSLIDER_SHELL_H
