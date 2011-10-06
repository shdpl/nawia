#ifndef QDOUBLESPINBOX_SHELL_H
#define QDOUBLESPINBOX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qspinbox.h>

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
#include <qspinbox.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

class QDoubleSpinBox_QtDShell : public QDoubleSpinBox, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QDoubleSpinBox_QtDShell(void *d_ptr, QWidget*  parent0);
    ~QDoubleSpinBox_QtDShell();

    void actionEvent(QActionEvent*  arg__1);
    void changeEvent(QEvent*  event0);
    void childEvent(QChildEvent*  arg__1);
    void clear();
    void closeEvent(QCloseEvent*  event0);
    void contextMenuEvent(QContextMenuEvent*  event0);
    void customEvent(QEvent*  arg__1);
    int  devType() const;
    void dragEnterEvent(QDragEnterEvent*  arg__1);
    void dragLeaveEvent(QDragLeaveEvent*  arg__1);
    void dragMoveEvent(QDragMoveEvent*  arg__1);
    void dropEvent(QDropEvent*  arg__1);
    void enterEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void fixup(QString&  str0) const;
    void focusInEvent(QFocusEvent*  event0);
    bool  focusNextPrevChild(bool  next0);
    void focusOutEvent(QFocusEvent*  event0);
    int  heightForWidth(int  arg__1) const;
    void hideEvent(QHideEvent*  event0);
    void inputMethodEvent(QInputMethodEvent*  arg__1);
    QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
    void keyPressEvent(QKeyEvent*  event0);
    void keyReleaseEvent(QKeyEvent*  event0);
    void languageChange();
    void leaveEvent(QEvent*  arg__1);
    int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
    QSize  minimumSizeHint() const;
    void mouseDoubleClickEvent(QMouseEvent*  arg__1);
    void mouseMoveEvent(QMouseEvent*  event0);
    void mousePressEvent(QMouseEvent*  event0);
    void mouseReleaseEvent(QMouseEvent*  event0);
    void moveEvent(QMoveEvent*  arg__1);
    QPaintEngine*  paintEngine() const;
    void paintEvent(QPaintEvent*  event0);
    void resizeEvent(QResizeEvent*  event0);
    void setVisible(bool  visible0);
    void showEvent(QShowEvent*  event0);
    QSize  sizeHint() const;
    void stepBy(int  steps0);
    QAbstractSpinBox::StepEnabled  stepEnabled() const;
    void tabletEvent(QTabletEvent*  arg__1);
    QString  textFromValue(double  val0) const;
    void timerEvent(QTimerEvent*  event0);
    QValidator::State  validate(QString&  input0, int&  pos1) const;
    double  valueFromText(const QString&  text0) const;
    void wheelEvent(QWheelEvent*  event0);
    void __public_destroy(bool  destroyWindow0, bool  destroySubWindows1);
    bool  __public_focusNextChild();
    bool  __public_focusPreviousChild();
    void __public_initStyleOption(QStyleOptionSpinBox*  option0) const;
    QLineEdit*  __public_lineEdit() const;
    void __public_resetInputContext();
    QObject*  __public_sender() const;
    void __public_setLineEdit(QLineEdit*  edit0);
    void __public_updateMicroFocus();
    void __public_customContextMenuRequested(const QPoint&  pos0);
    void __public_editingFinished();
    void __public_valueChanged(const QString&  arg__1);
    void __public_valueChanged(double  arg__1);
    void __override_actionEvent(QActionEvent*  arg__1, bool static_call);
    void __override_changeEvent(QEvent*  event0, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_clear(bool static_call);
    void __override_closeEvent(QCloseEvent*  event0, bool static_call);
    void __override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    int  __override_devType(bool static_call) const;
    void __override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call);
    void __override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call);
    void __override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call);
    void __override_dropEvent(QDropEvent*  arg__1, bool static_call);
    void __override_enterEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_fixup(QString&  str0, bool static_call) const;
    void __override_focusInEvent(QFocusEvent*  event0, bool static_call);
    bool  __override_focusNextPrevChild(bool  next0, bool static_call);
    void __override_focusOutEvent(QFocusEvent*  event0, bool static_call);
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    void __override_hideEvent(QHideEvent*  event0, bool static_call);
    void __override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call);
    QVariant  __override_inputMethodQuery(int  arg__1, bool static_call) const;
    void __override_keyPressEvent(QKeyEvent*  event0, bool static_call);
    void __override_keyReleaseEvent(QKeyEvent*  event0, bool static_call);
    void __override_languageChange(bool static_call);
    void __override_leaveEvent(QEvent*  arg__1, bool static_call);
    int  __override_metric(int  arg__1, bool static_call) const;
    QSize  __override_minimumSizeHint(bool static_call) const;
    void __override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call);
    void __override_mouseMoveEvent(QMouseEvent*  event0, bool static_call);
    void __override_mousePressEvent(QMouseEvent*  event0, bool static_call);
    void __override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call);
    void __override_moveEvent(QMoveEvent*  arg__1, bool static_call);
    QPaintEngine*  __override_paintEngine(bool static_call) const;
    void __override_paintEvent(QPaintEvent*  event0, bool static_call);
    void __override_resizeEvent(QResizeEvent*  event0, bool static_call);
    void __override_setVisible(bool  visible0, bool static_call);
    void __override_showEvent(QShowEvent*  event0, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    void __override_stepBy(int  steps0, bool static_call);
    int  __override_stepEnabled(bool static_call) const;
    void __override_tabletEvent(QTabletEvent*  arg__1, bool static_call);
    QString  __override_textFromValue(double  val0, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  event0, bool static_call);
    int  __override_validate(QString&  input0, int&  pos1, bool static_call) const;
    double  __override_valueFromText(const QString&  text0, bool static_call) const;
    void __override_wheelEvent(QWheelEvent*  event0, bool static_call);
};

#endif // QDOUBLESPINBOX_SHELL_H
