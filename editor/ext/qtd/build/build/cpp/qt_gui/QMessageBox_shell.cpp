#include <QPixmap>
#include <QVariant>
#include <qabstractbutton.h>
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
#include <qmessagebox.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpushbutton.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QMessageBox_shell.h"
#include <iostream>
#include <qmessagebox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMessageBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMessageBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_createEntity(void *nativeId, void* dId)
{
    new QMessageBoxEntity((QObject*)nativeId, dId);
}

QMessageBox_QtDShell::QMessageBox_QtDShell(void *d_ptr, QMessageBox::Icon  icon0, const QString&  title1, const QString&  text2, QMessageBox::StandardButtons  buttons3, QWidget*  parent4, Qt::WindowFlags  flags5)
    : QMessageBox(icon0, title1, text2, buttons3, parent4, flags5),
      QObjectLink(this, d_ptr)
{
}

QMessageBox_QtDShell::QMessageBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QMessageBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QMessageBox_QtDShell::~QMessageBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMessageBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMessageBox::metaObject();
}

int QMessageBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMessageBox::qt_metacall(_c, _id, _a);
}

int QMessageBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMessageBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QDialog_accept_dispatch, (void *dId))
void QMessageBox_QtDShell::accept()
{
    qtd_QDialog_accept_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QMessageBox_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QMessageBox_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QMessageBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QDialog_done_int_dispatch, (void *dId, int arg__1))
void QMessageBox_QtDShell::done(int  arg__1)
{
    qtd_QDialog_done_int_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QMessageBox_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QMessageBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QMessageBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QMessageBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QMessageBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QMessageBox_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QMessageBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QMessageBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMessageBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QMessageBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_reject_dispatch, (void *dId))
void QMessageBox_QtDShell::reject()
{
    qtd_QDialog_reject_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QMessageBox_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QMessageBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QMessageBox_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMessageBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QMessageBox_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QMessageBox_QtDShell::__public_adjustPosition(QWidget*  arg__1)
{
    QDialog::adjustPosition((QWidget* )arg__1);
}

void QMessageBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QMessageBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QMessageBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QMessageBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QMessageBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QMessageBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QMessageBox_QtDShell::__public_accepted()
{
    QDialog::accepted();
}

void QMessageBox_QtDShell::__public_buttonClicked(QAbstractButton*  button0)
{
    QMessageBox::buttonClicked((QAbstractButton* )button0);
}

void QMessageBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QMessageBox_QtDShell::__public_finished(int  result0)
{
    QDialog::finished((int )result0);
}

void QMessageBox_QtDShell::__public_rejected()
{
    QDialog::rejected();
}

// Write virtual function overries used to decide on static/virtual calls
void QMessageBox_QtDShell::__override_accept(bool static_call)
{
    if (static_call) {
        QDialog::accept();
    } else {
        accept();
    }
}

void QMessageBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QMessageBox::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QMessageBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QMessageBox::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

void QMessageBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QMessageBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QMessageBox_QtDShell::__override_done(int  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::done((int )arg__1);
    } else {
        done((int )arg__1);
    }
}

void QMessageBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QMessageBox_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QMessageBox::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QMessageBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QDialog::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QMessageBox_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QMessageBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QMessageBox_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QMessageBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QMessageBox_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QMessageBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QMessageBox_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QMessageBox::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QMessageBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QMessageBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QMessageBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QMessageBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QDialog::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QMessageBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QMessageBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QMessageBox_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_reject(bool static_call)
{
    if (static_call) {
        QDialog::reject();
    } else {
        reject();
    }
}

void QMessageBox_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QMessageBox::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QMessageBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QDialog::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QMessageBox_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QMessageBox::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSize  QMessageBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QMessageBox::sizeHint();
    } else {
        return sizeHint();
    }
}

void QMessageBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QMessageBox_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QMessageBox::buttonClicked(QAbstractButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_buttonClicked_QAbstractButton
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->__public_buttonClicked((QAbstractButton* )__qt_button0);

}

// ---externC---
// QMessageBox::QMessageBox(QMessageBox::Icon icon, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_QMessageBox_Icon_string_string_StandardButtons_QWidget_WindowFlags
(void *d_ptr,
 int icon0,
 DArray title1,
 DArray text2,
 int buttons3,
 void* parent4,
 int flags5)
{
    QMessageBox::Icon __qt_icon0 = (QMessageBox::Icon) icon0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QFlags<QMessageBox::StandardButton> __qt_buttons3 = (QFlags<QMessageBox::StandardButton>) buttons3;
    QWidget*  __qt_parent4 = (QWidget* ) parent4;
    QFlags<Qt::WindowType> __qt_flags5 = (QFlags<Qt::WindowType>) flags5;
    QMessageBox_QtDShell *__qt_this = new QMessageBox_QtDShell(d_ptr, (QMessageBox::Icon )__qt_icon0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButtons )__qt_buttons3, (QWidget* )__qt_parent4, (Qt::WindowFlags )__qt_flags5);
    return (void *) __qt_this;

}

// QMessageBox::QMessageBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_QMessageBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QMessageBox_QtDShell *__qt_this = new QMessageBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QMessageBox::addButton(QAbstractButton * button, QMessageBox::ButtonRole role)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_addButton_QAbstractButton_ButtonRole
(void* __this_nativeId,
 void* button0,
 int role1)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QMessageBox::ButtonRole __qt_role1 = (QMessageBox::ButtonRole) role1;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->addButton((QAbstractButton* )__qt_button0, (QMessageBox::ButtonRole )__qt_role1);

}

// QMessageBox::addButton(QMessageBox::StandardButton button)
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_addButton_StandardButton
(void* __this_nativeId,
 int button0)
{
    QMessageBox::StandardButton __qt_button0 = (QMessageBox::StandardButton) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QPushButton*  __qt_return_value = __qt_this->addButton((QMessageBox::StandardButton )__qt_button0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMessageBox::addButton(const QString & text, QMessageBox::ButtonRole role)
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_addButton_string_ButtonRole
(void* __this_nativeId,
 DArray text0,
 int role1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QMessageBox::ButtonRole __qt_role1 = (QMessageBox::ButtonRole) role1;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QPushButton*  __qt_return_value = __qt_this->addButton((const QString& )__qt_text0, (QMessageBox::ButtonRole )__qt_role1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMessageBox::button(QMessageBox::StandardButton which) const
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_button_StandardButton_const
(void* __this_nativeId,
 int which0)
{
    QMessageBox::StandardButton __qt_which0 = (QMessageBox::StandardButton) which0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QAbstractButton*  __qt_return_value = __qt_this->button((QMessageBox::StandardButton )__qt_which0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMessageBox::buttonRole(QAbstractButton * button) const
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_buttonRole_QAbstractButton_const
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttonRole((QAbstractButton* )__qt_button0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::buttons() const
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_buttons_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QList<QAbstractButton* >  __qt_return_value = __qt_this->buttons();

QList<QAbstractButton* > &__d_return_value_tmp = (*(QList<QAbstractButton* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QMessageBox::clickedButton() const
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_clickedButton_const
(void* __this_nativeId)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QAbstractButton*  __qt_return_value = __qt_this->clickedButton();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMessageBox::defaultButton() const
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_defaultButton_const
(void* __this_nativeId)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QPushButton*  __qt_return_value = __qt_this->defaultButton();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMessageBox::detailedText() const
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_detailedText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->detailedText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QMessageBox::escapeButton() const
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_escapeButton_const
(void* __this_nativeId)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QAbstractButton*  __qt_return_value = __qt_this->escapeButton();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMessageBox::icon() const
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_icon_const
(void* __this_nativeId)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->icon();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::iconPixmap() const
QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_iconPixmap_const
(void* __this_nativeId)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->iconPixmap();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QMessageBox::informativeText() const
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_informativeText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->informativeText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QMessageBox::open(QObject * receiver, const char * member)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_open_QObject_nativepointerchar
(void* __this_nativeId,
 void* receiver0,
 char* member1)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    const char*  __qt_member1 = (const char* ) member1;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->open((QObject* )__qt_receiver0, (const char* )__qt_member1);

}

// QMessageBox::removeButton(QAbstractButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_removeButton_QAbstractButton
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->removeButton((QAbstractButton* )__qt_button0);

}

// QMessageBox::setDefaultButton(QMessageBox::StandardButton button)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setDefaultButton_StandardButton
(void* __this_nativeId,
 int button0)
{
    QMessageBox::StandardButton __qt_button0 = (QMessageBox::StandardButton) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setDefaultButton((QMessageBox::StandardButton )__qt_button0);

}

// QMessageBox::setDefaultButton(QPushButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setDefaultButton_QPushButton
(void* __this_nativeId,
 void* button0)
{
    QPushButton*  __qt_button0 = (QPushButton* ) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setDefaultButton((QPushButton* )__qt_button0);

}

// QMessageBox::setDetailedText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setDetailedText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setDetailedText((const QString& )__qt_text0);

}

// QMessageBox::setEscapeButton(QAbstractButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setEscapeButton_QAbstractButton
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setEscapeButton((QAbstractButton* )__qt_button0);

}

// QMessageBox::setEscapeButton(QMessageBox::StandardButton button)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setEscapeButton_StandardButton
(void* __this_nativeId,
 int button0)
{
    QMessageBox::StandardButton __qt_button0 = (QMessageBox::StandardButton) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setEscapeButton((QMessageBox::StandardButton )__qt_button0);

}

// QMessageBox::setIcon(QMessageBox::Icon arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setIcon_Icon
(void* __this_nativeId,
 int arg__1)
{
    QMessageBox::Icon __qt_arg__1 = (QMessageBox::Icon) arg__1;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setIcon((QMessageBox::Icon )__qt_arg__1);

}

// QMessageBox::setIconPixmap(const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setIconPixmap_QPixmap
(void* __this_nativeId,
 void* pixmap0)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setIconPixmap((const QPixmap& )__qt_pixmap0);

}

// QMessageBox::setInformativeText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setInformativeText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setInformativeText((const QString& )__qt_text0);

}

// QMessageBox::setStandardButtons(QFlags<QMessageBox::StandardButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setStandardButtons_StandardButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<QMessageBox::StandardButton> __qt_buttons0 = (QFlags<QMessageBox::StandardButton>) buttons0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setStandardButtons((QMessageBox::StandardButtons )__qt_buttons0);

}

// QMessageBox::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QMessageBox::setTextFormat(Qt::TextFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_setTextFormat_TextFormat
(void* __this_nativeId,
 int format0)
{
    Qt::TextFormat __qt_format0 = (Qt::TextFormat) format0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    __qt_this->setTextFormat((Qt::TextFormat )__qt_format0);

}

// QMessageBox::standardButton(QAbstractButton * button) const
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_standardButton_QAbstractButton_const
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->standardButton((QAbstractButton* )__qt_button0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::standardButtons() const
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_standardButtons_const
(void* __this_nativeId)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->standardButtons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::text() const
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QMessageBox::textFormat() const
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_textFormat_const
(void* __this_nativeId)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QMessageBox::closeEvent(QCloseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_closeEvent_QCloseEvent
(void* __this_nativeId,
 void* event0)
{
    QCloseEvent*  __qt_event0 = (QCloseEvent* ) event0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEvent((QCloseEvent* )__qt_event0, __do_static_call);

}

// QMessageBox::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QMessageBox_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QMessageBox::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QMessageBox::showEvent(QShowEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_showEvent_QShowEvent
(void* __this_nativeId,
 void* event0)
{
    QShowEvent*  __qt_event0 = (QShowEvent* ) event0;
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_event0, __do_static_call);

}

// QMessageBox::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMessageBox_QtDShell *__qt_this = (QMessageBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMessageBox::about(QWidget * parent_, const QString & title, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_about_QWidget_string_string
(void* parent0,
 DArray title1,
 DArray text2)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QMessageBox_QtDShell::about((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2);

}

// QMessageBox::aboutQt(QWidget * parent_, const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QMessageBox_aboutQt_QWidget_string
(void* parent0,
 DArray title1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QMessageBox_QtDShell::aboutQt((QWidget* )__qt_parent0, (const QString& )__qt_title1);

}

// QMessageBox::critical(QWidget * parent_, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_critical_QWidget_string_string_StandardButtons_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int buttons3,
 int defaultButton4)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QFlags<QMessageBox::StandardButton> __qt_buttons3 = (QFlags<QMessageBox::StandardButton>) buttons3;
    QMessageBox::StandardButton __qt_defaultButton4 = (QMessageBox::StandardButton) defaultButton4;
    int  __qt_return_value = QMessageBox_QtDShell::critical((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButtons )__qt_buttons3, (QMessageBox::StandardButton )__qt_defaultButton4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::critical(QWidget * parent_, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_critical_QWidget_string_string_StandardButton_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int button03,
 int button14)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QMessageBox::StandardButton __qt_button03 = (QMessageBox::StandardButton) button03;
    QMessageBox::StandardButton __qt_button14 = (QMessageBox::StandardButton) button14;
    int  __qt_return_value = QMessageBox_QtDShell::critical((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButton )__qt_button03, (QMessageBox::StandardButton )__qt_button14);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::information(QWidget * parent_, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_information_QWidget_string_string_StandardButtons_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int buttons3,
 int defaultButton4)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QFlags<QMessageBox::StandardButton> __qt_buttons3 = (QFlags<QMessageBox::StandardButton>) buttons3;
    QMessageBox::StandardButton __qt_defaultButton4 = (QMessageBox::StandardButton) defaultButton4;
    int  __qt_return_value = QMessageBox_QtDShell::information((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButtons )__qt_buttons3, (QMessageBox::StandardButton )__qt_defaultButton4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::information(QWidget * parent_, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_information_QWidget_string_string_StandardButton_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int button03,
 int button14)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QMessageBox::StandardButton __qt_button03 = (QMessageBox::StandardButton) button03;
    QMessageBox::StandardButton __qt_button14 = (QMessageBox::StandardButton) button14;
    int  __qt_return_value = QMessageBox_QtDShell::information((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButton )__qt_button03, (QMessageBox::StandardButton )__qt_button14);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::question(QWidget * parent_, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_question_QWidget_string_string_StandardButtons_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int buttons3,
 int defaultButton4)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QFlags<QMessageBox::StandardButton> __qt_buttons3 = (QFlags<QMessageBox::StandardButton>) buttons3;
    QMessageBox::StandardButton __qt_defaultButton4 = (QMessageBox::StandardButton) defaultButton4;
    int  __qt_return_value = QMessageBox_QtDShell::question((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButtons )__qt_buttons3, (QMessageBox::StandardButton )__qt_defaultButton4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::question(QWidget * parent_, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_question_QWidget_string_string_StandardButton_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int button03,
 int button14)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QMessageBox::StandardButton __qt_button03 = (QMessageBox::StandardButton) button03;
    QMessageBox::StandardButton __qt_button14 = (QMessageBox::StandardButton) button14;
    int  __qt_return_value = QMessageBox_QtDShell::question((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButton )__qt_button03, (QMessageBox::StandardButton )__qt_button14);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::warning(QWidget * parent_, const QString & title, const QString & text, QFlags<QMessageBox::StandardButton> buttons, QMessageBox::StandardButton defaultButton)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_warning_QWidget_string_string_StandardButtons_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int buttons3,
 int defaultButton4)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QFlags<QMessageBox::StandardButton> __qt_buttons3 = (QFlags<QMessageBox::StandardButton>) buttons3;
    QMessageBox::StandardButton __qt_defaultButton4 = (QMessageBox::StandardButton) defaultButton4;
    int  __qt_return_value = QMessageBox_QtDShell::warning((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButtons )__qt_buttons3, (QMessageBox::StandardButton )__qt_defaultButton4);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMessageBox::warning(QWidget * parent_, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1)
QTD_EXTERN QTD_EXPORT int qtd_QMessageBox_warning_QWidget_string_string_StandardButton_StandardButton
(void* parent0,
 DArray title1,
 DArray text2,
 int button03,
 int button14)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QMessageBox::StandardButton __qt_button03 = (QMessageBox::StandardButton) button03;
    QMessageBox::StandardButton __qt_button14 = (QMessageBox::StandardButton) button14;
    int  __qt_return_value = QMessageBox_QtDShell::warning((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_text2, (QMessageBox::StandardButton )__qt_button03, (QMessageBox::StandardButton )__qt_button14);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMessageBox_staticMetaObject() {
    return (void*)&QMessageBox::staticMetaObject;
}


