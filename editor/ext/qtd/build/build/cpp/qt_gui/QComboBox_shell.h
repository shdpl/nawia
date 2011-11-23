#ifndef QCOMBOBOX_SHELL_H
#define QCOMBOBOX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qcombobox.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcombobox.h>
#include <qcompleter.h>
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
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qvariant.h>
#include <qwidget.h>

class QComboBox_QtDShell : public QComboBox, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QComboBox_QtDShell(void *d_ptr, QWidget*  parent0);
    ~QComboBox_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  e0);
    void childEvent(QChildEvent*  arg__1);
    void closeEvent(QCloseEvent*  arg__1);
    void contextMenuEvent(QContextMenuEvent*  e0);
    void customEvent(QEvent*  arg__1);
    int  devType() const;
    void dragEnterEvent(QDragEnterEvent*  arg__1);
    void dragLeaveEvent(QDragLeaveEvent*  arg__1);
    void dragMoveEvent(QDragMoveEvent*  arg__1);
    void dropEvent(QDropEvent*  arg__1);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void focusInEvent(QFocusEvent*  e0);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  e0);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  e0);
    void hidePopup();
    void inputMethodEvent(QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
    void keyPressEvent(QKeyEvent*  e0);
    void keyReleaseEvent(QKeyEvent*  e0);
    void languageChange();
    void leaveEvent(QEvent*  arg__1);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  arg__1);
    void mouseMoveEvent(QMouseEvent*  arg__1);
    void mousePressEvent(QMouseEvent*  e0);
    void mouseReleaseEvent(QMouseEvent*  e0);
    void moveEvent(QMoveEvent*  arg__1);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  e0);
    void resizeEvent(QResizeEvent*  e0);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  e0);
    void showPopup();
    QSize  sizeHint() const;
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  arg__1);
    void wheelEvent(QWheelEvent*  e0);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_initStyleOption(QStyleOptionComboBox*  option0) const;
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_updateMicroFocus();
    void __public_activated(const QString&  arg__1);
    void __public_activated(int  index0);
    void __public_currentIndexChanged(const QString&  arg__1);
    void __public_currentIndexChanged(int  index0);
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __public_editTextChanged(const QString&  arg__1);
    void __public_highlighted(const QString&  arg__1);
    void __public_highlighted(int  index0);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  e0, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_closeEvent(QCloseEvent*  arg__1, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  e0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call);
    void __override_dropEvent(QDropEvent*  arg__1, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_focusInEvent(QFocusEvent*  e0, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  e0, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  e0, bool static_call);
    void __override_hidePopup(bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call);
    QVariant  __override_inputMethodQuery(int  arg__1, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  e0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  e0, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  arg__1, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  e0, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call);
    void __override_moveEvent(QMoveEvent*  arg__1, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  e0, bool static_call);
    void __override_resizeEvent(QResizeEvent*  e0, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  e0, bool static_call);
    void __override_showPopup(bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_wheelEvent(QWheelEvent*  e0, bool static_call);
};

#endif // QCOMBOBOX_SHELL_H
