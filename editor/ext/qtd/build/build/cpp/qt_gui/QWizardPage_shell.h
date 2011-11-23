#ifndef QWIZARDPAGE_SHELL_H
#define QWIZARDPAGE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qwizard.h>

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
#include <qpixmap.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>
#include <qwizard.h>

class QWizardPage_QtDShell : public QWizardPage, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QWizardPage_QtDShell(void *d_ptr, QWidget*  parent0);
    ~QWizardPage_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  arg__1);
    void childEvent(QChildEvent*  arg__1);
    void cleanupPage();
    void closeEvent(QCloseEvent*  arg__1);
    void contextMenuEvent(QContextMenuEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    int  devType() const;
    void dragEnterEvent(QDragEnterEvent*  arg__1);
    void dragLeaveEvent(QDragLeaveEvent*  arg__1);
    void dragMoveEvent(QDragMoveEvent*  arg__1);
    void dropEvent(QDropEvent*  arg__1);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void focusInEvent(QFocusEvent*  arg__1);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  arg__1);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  arg__1);
    void initializePage();
    void inputMethodEvent(QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
    bool  isComplete() const;
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
    int  nextId() const;
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  arg__1);
    void resizeEvent(QResizeEvent*  arg__1);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  arg__1);
    QSize  sizeHint() const;
    void tabletEvent(QTabletEvent*  arg__1);
    void timerEvent(QTimerEvent*  arg__1);
    bool  validatePage();
    void wheelEvent(QWheelEvent*  arg__1);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    QVariant  __public_field(const QString&  name0) const;
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_registerField(const QString&  name0, QWidget*  widget1, const char*  property2, const char*  changedSignal3);
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_setField(const QString&  name0, const QVariant&  value1);
    void __public_updateMicroFocus();
    QWizard*  __public_wizard() const;
    void __public_completeChanged();
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  arg__1, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_cleanupPage(bool static_call);
    void __override_closeEvent(QCloseEvent*  arg__1, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call);
    void __override_dropEvent(QDropEvent*  arg__1, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_focusInEvent(QFocusEvent*  arg__1, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  arg__1, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  arg__1, bool static_call);
    void __override_initializePage(bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call);
    QVariant  __override_inputMethodQuery(int  arg__1, bool static_call) const;
    bool  __override_isComplete(bool static_call) const;
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
    int  __override_nextId(bool static_call) const;
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  arg__1, bool static_call);
    void __override_resizeEvent(QResizeEvent*  arg__1, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  arg__1, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    bool  __override_validatePage(bool static_call);
    void __override_wheelEvent(QWheelEvent*  arg__1, bool static_call);
};

#endif // QWIZARDPAGE_SHELL_H
