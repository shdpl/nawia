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
#include <qlabel.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qprogressbar.h>
#include <qprogressdialog.h>
#include <qpushbutton.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QProgressDialog_shell.h"
#include <iostream>
#include <qprogressdialog.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QProgressDialogEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QProgressDialogEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_createEntity(void *nativeId, void* dId)
{
    new QProgressDialogEntity((QObject*)nativeId, dId);
}

QProgressDialog_QtDShell::QProgressDialog_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1)
    : QProgressDialog(parent0, flags1),
      QObjectLink(this, d_ptr)
{
}

QProgressDialog_QtDShell::QProgressDialog_QtDShell(void *d_ptr, const QString&  labelText0, const QString&  cancelButtonText1, int  minimum2, int  maximum3, QWidget*  parent4, Qt::WindowFlags  flags5)
    : QProgressDialog(labelText0, cancelButtonText1, minimum2, maximum3, parent4, flags5),
      QObjectLink(this, d_ptr)
{
}

QProgressDialog_QtDShell::~QProgressDialog_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QProgressDialog_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QProgressDialog::metaObject();
}

int QProgressDialog_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QProgressDialog::qt_metacall(_c, _id, _a);
}

int QProgressDialog_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QProgressDialog::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QProgressDialog_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QDialog_accept_dispatch, (void *dId))
void QProgressDialog_QtDShell::accept()
{
    qtd_QDialog_accept_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QProgressDialog_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QProgressDialog_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QProgressDialog_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QDialog_done_int_dispatch, (void *dId, int arg__1))
void QProgressDialog_QtDShell::done(int  arg__1)
{
    qtd_QDialog_done_int_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QProgressDialog_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QProgressDialog_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QProgressDialog_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QProgressDialog_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QProgressDialog_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QProgressDialog_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QProgressDialog_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QProgressDialog_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QProgressDialog_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_reject_dispatch, (void *dId))
void QProgressDialog_QtDShell::reject()
{
    qtd_QDialog_reject_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QProgressDialog_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QProgressDialog_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QProgressDialog_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QProgressDialog_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QProgressDialog_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_open_dispatch, (void *dId))
void QProgressDialog_QtDShell::open()
{
    qtd_QDialog_open_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QProgressDialog_QtDShell::__public_adjustPosition(QWidget*  arg__1)
{
    QDialog::adjustPosition((QWidget* )arg__1);
}

void QProgressDialog_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QProgressDialog_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QProgressDialog_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QProgressDialog_QtDShell::__public_forceShow()
{
    QProgressDialog::forceShow();
}

void QProgressDialog_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QProgressDialog_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QProgressDialog_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QProgressDialog_QtDShell::__public_accepted()
{
    QDialog::accepted();
}

void QProgressDialog_QtDShell::__public_canceled()
{
    QProgressDialog::canceled();
}

void QProgressDialog_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QProgressDialog_QtDShell::__public_finished(int  result0)
{
    QDialog::finished((int )result0);
}

void QProgressDialog_QtDShell::__public_rejected()
{
    QDialog::rejected();
}

// Write virtual function overries used to decide on static/virtual calls
void QProgressDialog_QtDShell::__override_accept(bool static_call)
{
    if (static_call) {
        QDialog::accept();
    } else {
        accept();
    }
}

void QProgressDialog_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QProgressDialog::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QProgressDialog_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QProgressDialog::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

void QProgressDialog_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QProgressDialog_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QProgressDialog_QtDShell::__override_done(int  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::done((int )arg__1);
    } else {
        done((int )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QProgressDialog_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QProgressDialog_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QDialog::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QProgressDialog_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QProgressDialog_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QProgressDialog_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QProgressDialog_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QProgressDialog_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QProgressDialog_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QProgressDialog_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QProgressDialog_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QDialog::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QProgressDialog_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QProgressDialog_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QProgressDialog_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_reject(bool static_call)
{
    if (static_call) {
        QDialog::reject();
    } else {
        reject();
    }
}

void QProgressDialog_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QProgressDialog::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QProgressDialog_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QDialog::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QProgressDialog_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QProgressDialog::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSize  QProgressDialog_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QProgressDialog::sizeHint();
    } else {
        return sizeHint();
    }
}

void QProgressDialog_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QProgressDialog_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QProgressDialog::canceled()
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_canceled
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_canceled();

}

// ---externC---
// QProgressDialog::QProgressDialog(QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QProgressDialog_QProgressDialog_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int flags1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QProgressDialog_QtDShell *__qt_this = new QProgressDialog_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QProgressDialog::QProgressDialog(const QString & labelText, const QString & cancelButtonText, int minimum, int maximum, QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QProgressDialog_QProgressDialog_string_string_int_int_QWidget_WindowFlags
(void *d_ptr,
 DArray labelText0,
 DArray cancelButtonText1,
 int minimum2,
 int maximum3,
 void* parent4,
 int flags5)
{
    QString __qt_labelText0 = QString::fromUtf8((const char *)labelText0.ptr, labelText0.length);
    QString __qt_cancelButtonText1 = QString::fromUtf8((const char *)cancelButtonText1.ptr, cancelButtonText1.length);
    QWidget*  __qt_parent4 = (QWidget* ) parent4;
    QFlags<Qt::WindowType> __qt_flags5 = (QFlags<Qt::WindowType>) flags5;
    QProgressDialog_QtDShell *__qt_this = new QProgressDialog_QtDShell(d_ptr, (const QString& )__qt_labelText0, (const QString& )__qt_cancelButtonText1, (int )minimum2, (int )maximum3, (QWidget* )__qt_parent4, (Qt::WindowFlags )__qt_flags5);
    return (void *) __qt_this;

}

// QProgressDialog::autoClose() const
QTD_EXTERN QTD_EXPORT bool qtd_QProgressDialog_autoClose_const
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoClose();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressDialog::autoReset() const
QTD_EXTERN QTD_EXPORT bool qtd_QProgressDialog_autoReset_const
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoReset();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressDialog::cancel()
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_cancel
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->cancel();

}

// QProgressDialog::forceShow()
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_forceShow
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_forceShow();

}

// QProgressDialog::labelText() const
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_labelText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->labelText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QProgressDialog::maximum() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressDialog_maximum_const
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressDialog::minimum() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressDialog_minimum_const
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressDialog::minimumDuration() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressDialog_minimumDuration_const
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimumDuration();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressDialog::open()
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_open
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->open();

}

// QProgressDialog::reset()
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_reset
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->reset();

}

// QProgressDialog::setAutoClose(bool close)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setAutoClose_bool
(void* __this_nativeId,
 bool close0)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setAutoClose((bool )close0);

}

// QProgressDialog::setAutoReset(bool reset)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setAutoReset_bool
(void* __this_nativeId,
 bool reset0)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setAutoReset((bool )reset0);

}

// QProgressDialog::setBar(QProgressBar * bar)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setBar_QProgressBar
(void* __this_nativeId,
 void* bar0)
{
    QProgressBar*  __qt_bar0 = (QProgressBar* ) bar0;
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setBar((QProgressBar* )__qt_bar0);

}

// QProgressDialog::setCancelButton(QPushButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setCancelButton_QPushButton
(void* __this_nativeId,
 void* button0)
{
    QPushButton*  __qt_button0 = (QPushButton* ) button0;
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setCancelButton((QPushButton* )__qt_button0);

}

// QProgressDialog::setCancelButtonText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setCancelButtonText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setCancelButtonText((const QString& )__qt_text0);

}

// QProgressDialog::setLabel(QLabel * label)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setLabel_QLabel
(void* __this_nativeId,
 void* label0)
{
    QLabel*  __qt_label0 = (QLabel* ) label0;
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setLabel((QLabel* )__qt_label0);

}

// QProgressDialog::setLabelText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setLabelText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setLabelText((const QString& )__qt_text0);

}

// QProgressDialog::setMaximum(int maximum)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setMaximum_int
(void* __this_nativeId,
 int maximum0)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setMaximum((int )maximum0);

}

// QProgressDialog::setMinimum(int minimum)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setMinimum_int
(void* __this_nativeId,
 int minimum0)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setMinimum((int )minimum0);

}

// QProgressDialog::setMinimumDuration(int ms)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setMinimumDuration_int
(void* __this_nativeId,
 int ms0)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setMinimumDuration((int )ms0);

}

// QProgressDialog::setRange(int minimum, int maximum)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setRange_int_int
(void* __this_nativeId,
 int minimum0,
 int maximum1)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setRange((int )minimum0, (int )maximum1);

}

// QProgressDialog::setValue(int progress)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_setValue_int
(void* __this_nativeId,
 int progress0)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    __qt_this->setValue((int )progress0);

}

// QProgressDialog::value() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressDialog_value_const
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->value();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressDialog::wasCanceled() const
QTD_EXTERN QTD_EXPORT bool qtd_QProgressDialog_wasCanceled_const
(void* __this_nativeId)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wasCanceled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressDialog::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QProgressDialog::closeEvent(QCloseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_closeEvent_QCloseEvent
(void* __this_nativeId,
 void* event0)
{
    QCloseEvent*  __qt_event0 = (QCloseEvent* ) event0;
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEvent((QCloseEvent* )__qt_event0, __do_static_call);

}

// QProgressDialog::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QProgressDialog::showEvent(QShowEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_showEvent_QShowEvent
(void* __this_nativeId,
 void* event0)
{
    QShowEvent*  __qt_event0 = (QShowEvent* ) event0;
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_event0, __do_static_call);

}

// QProgressDialog::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QProgressDialog_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QProgressDialog_QtDShell *__qt_this = (QProgressDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QProgressDialog_staticMetaObject() {
    return (void*)&QProgressDialog::staticMetaObject;
}


