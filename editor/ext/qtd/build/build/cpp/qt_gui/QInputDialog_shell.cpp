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
#include <qinputdialog.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QInputDialog_shell.h"
#include <iostream>
#include <qinputdialog.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QInputDialogEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QInputDialogEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_createEntity(void *nativeId, void* dId)
{
    new QInputDialogEntity((QObject*)nativeId, dId);
}

QInputDialog_QtDShell::QInputDialog_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1)
    : QInputDialog(parent0, flags1),
      QObjectLink(this, d_ptr)
{
}

QInputDialog_QtDShell::~QInputDialog_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QInputDialog_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QInputDialog::metaObject();
}

int QInputDialog_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QInputDialog::qt_metacall(_c, _id, _a);
}

int QInputDialog_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QInputDialog::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QDialog_accept_dispatch, (void *dId))
void QInputDialog_QtDShell::accept()
{
    qtd_QDialog_accept_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QInputDialog_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QDialog_done_int_dispatch, (void *dId, int result0))
void QInputDialog_QtDShell::done(int  result0)
{
    qtd_QDialog_done_int_dispatch(QObjectLink::getLink(this)->dId, (int )result0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QInputDialog_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QInputDialog_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QInputDialog_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QInputDialog_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QInputDialog_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QInputDialog_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QInputDialog_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QInputDialog_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QInputDialog_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_reject_dispatch, (void *dId))
void QInputDialog_QtDShell::reject()
{
    qtd_QDialog_reject_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QInputDialog_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QInputDialog_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QInputDialog_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_open_dispatch, (void *dId))
void QInputDialog_QtDShell::open()
{
    qtd_QDialog_open_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QInputDialog_QtDShell::__public_adjustPosition(QWidget*  arg__1)
{
    QDialog::adjustPosition((QWidget* )arg__1);
}

void QInputDialog_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QInputDialog_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QInputDialog_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QInputDialog_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QInputDialog_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QInputDialog_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QInputDialog_QtDShell::__public_accepted()
{
    QDialog::accepted();
}

void QInputDialog_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QInputDialog_QtDShell::__public_doubleValueChanged(double  value0)
{
    QInputDialog::doubleValueChanged((double )value0);
}

void QInputDialog_QtDShell::__public_doubleValueSelected(double  value0)
{
    QInputDialog::doubleValueSelected((double )value0);
}

void QInputDialog_QtDShell::__public_finished(int  result0)
{
    QDialog::finished((int )result0);
}

void QInputDialog_QtDShell::__public_intValueChanged(int  value0)
{
    QInputDialog::intValueChanged((int )value0);
}

void QInputDialog_QtDShell::__public_intValueSelected(int  value0)
{
    QInputDialog::intValueSelected((int )value0);
}

void QInputDialog_QtDShell::__public_rejected()
{
    QDialog::rejected();
}

void QInputDialog_QtDShell::__public_textValueChanged(const QString&  text0)
{
    QInputDialog::textValueChanged((const QString& )text0);
}

void QInputDialog_QtDShell::__public_textValueSelected(const QString&  text0)
{
    QInputDialog::textValueSelected((const QString& )text0);
}

// Write virtual function overries used to decide on static/virtual calls
void QInputDialog_QtDShell::__override_accept(bool static_call)
{
    if (static_call) {
        QDialog::accept();
    } else {
        accept();
    }
}

void QInputDialog_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QInputDialog_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QInputDialog_QtDShell::__override_done(int  result0, bool static_call)
{
    if (static_call) {
        QInputDialog::done((int )result0);
    } else {
        done((int )result0);
    }
}

void QInputDialog_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QInputDialog_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QInputDialog_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QDialog::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QInputDialog_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QInputDialog_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QInputDialog_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QInputDialog_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QInputDialog_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QInputDialog_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QInputDialog_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QInputDialog_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QInputDialog_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QInputDialog_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QInputDialog::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QInputDialog_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QInputDialog_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QInputDialog_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_reject(bool static_call)
{
    if (static_call) {
        QDialog::reject();
    } else {
        reject();
    }
}

void QInputDialog_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QInputDialog::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QInputDialog_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QInputDialog_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QInputDialog::sizeHint();
    } else {
        return sizeHint();
    }
}

void QInputDialog_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QInputDialog_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QInputDialog::doubleValueChanged(double value)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_doubleValueChanged_double
(void* __this_nativeId,
 double value0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_doubleValueChanged((double )value0);

}

// QInputDialog::doubleValueSelected(double value)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_doubleValueSelected_double
(void* __this_nativeId,
 double value0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_doubleValueSelected((double )value0);

}

// QInputDialog::intValueChanged(int value)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_intValueChanged_int
(void* __this_nativeId,
 int value0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_intValueChanged((int )value0);

}

// QInputDialog::intValueSelected(int value)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_intValueSelected_int
(void* __this_nativeId,
 int value0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_intValueSelected((int )value0);

}

// QInputDialog::textValueChanged(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_textValueChanged_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_textValueChanged((const QString& )__qt_text0);

}

// QInputDialog::textValueSelected(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_textValueSelected_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_textValueSelected((const QString& )__qt_text0);

}

// ---externC---
// QInputDialog::QInputDialog(QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QInputDialog_QInputDialog_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int flags1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QInputDialog_QtDShell *__qt_this = new QInputDialog_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QInputDialog::cancelButtonText() const
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_cancelButtonText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->cancelButtonText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputDialog::comboBoxItems() const
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_comboBoxItems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->comboBoxItems();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QInputDialog::doubleDecimals() const
QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_doubleDecimals_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->doubleDecimals();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::doubleMaximum() const
QTD_EXTERN QTD_EXPORT double qtd_QInputDialog_doubleMaximum_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->doubleMaximum();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::doubleMinimum() const
QTD_EXTERN QTD_EXPORT double qtd_QInputDialog_doubleMinimum_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->doubleMinimum();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::doubleValue() const
QTD_EXTERN QTD_EXPORT double qtd_QInputDialog_doubleValue_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->doubleValue();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::intMaximum() const
QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_intMaximum_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->intMaximum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::intMinimum() const
QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_intMinimum_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->intMinimum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::intStep() const
QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_intStep_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->intStep();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::intValue() const
QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_intValue_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->intValue();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::isComboBoxEditable() const
QTD_EXTERN QTD_EXPORT bool qtd_QInputDialog_isComboBoxEditable_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isComboBoxEditable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::labelText() const
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_labelText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->labelText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputDialog::okButtonText() const
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_okButtonText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->okButtonText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputDialog::open()
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_open
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->open();

}

// QInputDialog::setCancelButtonText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setCancelButtonText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setCancelButtonText((const QString& )__qt_text0);

}

// QInputDialog::setComboBoxEditable(bool editable)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setComboBoxEditable_bool
(void* __this_nativeId,
 bool editable0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setComboBoxEditable((bool )editable0);

}

// QInputDialog::setComboBoxItems(const QStringList & items)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setComboBoxItems_QList
(void* __this_nativeId,
 void* items0)
{
QStringList __qt_items0 = (*(QStringList *)items0);
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setComboBoxItems((const QStringList& )__qt_items0);

}

// QInputDialog::setDoubleDecimals(int decimals)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setDoubleDecimals_int
(void* __this_nativeId,
 int decimals0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setDoubleDecimals((int )decimals0);

}

// QInputDialog::setDoubleMaximum(double max)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setDoubleMaximum_double
(void* __this_nativeId,
 double max0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setDoubleMaximum((double )max0);

}

// QInputDialog::setDoubleMinimum(double min)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setDoubleMinimum_double
(void* __this_nativeId,
 double min0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setDoubleMinimum((double )min0);

}

// QInputDialog::setDoubleRange(double min, double max)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setDoubleRange_double_double
(void* __this_nativeId,
 double min0,
 double max1)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setDoubleRange((double )min0, (double )max1);

}

// QInputDialog::setDoubleValue(double value)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setDoubleValue_double
(void* __this_nativeId,
 double value0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setDoubleValue((double )value0);

}

// QInputDialog::setIntMaximum(int max)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setIntMaximum_int
(void* __this_nativeId,
 int max0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setIntMaximum((int )max0);

}

// QInputDialog::setIntMinimum(int min)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setIntMinimum_int
(void* __this_nativeId,
 int min0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setIntMinimum((int )min0);

}

// QInputDialog::setIntRange(int min, int max)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setIntRange_int_int
(void* __this_nativeId,
 int min0,
 int max1)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setIntRange((int )min0, (int )max1);

}

// QInputDialog::setIntStep(int step)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setIntStep_int
(void* __this_nativeId,
 int step0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setIntStep((int )step0);

}

// QInputDialog::setIntValue(int value)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setIntValue_int
(void* __this_nativeId,
 int value0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setIntValue((int )value0);

}

// QInputDialog::setLabelText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setLabelText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setLabelText((const QString& )__qt_text0);

}

// QInputDialog::setOkButtonText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setOkButtonText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setOkButtonText((const QString& )__qt_text0);

}

// QInputDialog::setTextEchoMode(QLineEdit::EchoMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setTextEchoMode_EchoMode
(void* __this_nativeId,
 int mode0)
{
    QLineEdit::EchoMode __qt_mode0 = (QLineEdit::EchoMode) mode0;
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setTextEchoMode((QLineEdit::EchoMode )__qt_mode0);

}

// QInputDialog::setTextValue(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setTextValue_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    __qt_this->setTextValue((const QString& )__qt_text0);

}

// QInputDialog::textEchoMode() const
QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_textEchoMode_const
(void* __this_nativeId)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textEchoMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::textValue() const
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_textValue_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->textValue();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputDialog::done(int result)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_done_int
(void* __this_nativeId,
 int result0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_done((int )result0, __do_static_call);

}

// QInputDialog::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QInputDialog::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setVisible((bool )visible0, __do_static_call);

}

// QInputDialog::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QInputDialog_QtDShell *__qt_this = (QInputDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QInputDialog::getDouble(QWidget * parent_, const QString & title, const QString & label, double value, double minValue, double maxValue, int decimals, bool * ok, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT double qtd_QInputDialog_getDouble_private_QWidget_string_string_double_double_double_int_nativepointerbool_WindowFlags
(void* parent0,
 DArray title1,
 DArray label2,
 double value3,
 double minValue4,
 double maxValue5,
 int decimals6,
 bool* ok7,
 int flags8)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_label2 = QString::fromUtf8((const char *)label2.ptr, label2.length);
    bool*  __qt_ok7 = (bool* ) ok7;
    QFlags<Qt::WindowType> __qt_flags8 = (QFlags<Qt::WindowType>) flags8;
    double  __qt_return_value = QInputDialog_QtDShell::getDouble((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_label2, (double )value3, (double )minValue4, (double )maxValue5, (int )decimals6, (bool* )__qt_ok7, (Qt::WindowFlags )__qt_flags8);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::getInt(QWidget * parent_, const QString & title, const QString & label, int value, int minValue, int maxValue, int step, bool * ok, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT int qtd_QInputDialog_getInt_private_QWidget_string_string_int_int_int_int_nativepointerbool_WindowFlags
(void* parent0,
 DArray title1,
 DArray label2,
 int value3,
 int minValue4,
 int maxValue5,
 int step6,
 bool* ok7,
 int flags8)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_label2 = QString::fromUtf8((const char *)label2.ptr, label2.length);
    bool*  __qt_ok7 = (bool* ) ok7;
    QFlags<Qt::WindowType> __qt_flags8 = (QFlags<Qt::WindowType>) flags8;
    int  __qt_return_value = QInputDialog_QtDShell::getInt((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_label2, (int )value3, (int )minValue4, (int )maxValue5, (int )step6, (bool* )__qt_ok7, (Qt::WindowFlags )__qt_flags8);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QInputDialog::getItem(QWidget * parent_, const QString & title, const QString & label, const QStringList & items, int current, bool editable, bool * ok, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_getItem_private_QWidget_string_string_QList_int_bool_nativepointerbool_WindowFlags
(void* __d_return_value,
 void* parent0,
 DArray title1,
 DArray label2,
 void* items3,
 int current4,
 bool editable5,
 bool* ok6,
 int flags7)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_label2 = QString::fromUtf8((const char *)label2.ptr, label2.length);
QStringList __qt_items3 = (*(QStringList *)items3);
    bool*  __qt_ok6 = (bool* ) ok6;
    QFlags<Qt::WindowType> __qt_flags7 = (QFlags<Qt::WindowType>) flags7;
    QString  __qt_return_value = QInputDialog_QtDShell::getItem((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_label2, (const QStringList& )__qt_items3, (int )current4, (bool )editable5, (bool* )__qt_ok6, (Qt::WindowFlags )__qt_flags7);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputDialog::getText(QWidget * parent_, const QString & title, const QString & label, QLineEdit::EchoMode echo, const QString & text, bool * ok, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void qtd_QInputDialog_getText_private_QWidget_string_string_EchoMode_string_nativepointerbool_WindowFlags
(void* __d_return_value,
 void* parent0,
 DArray title1,
 DArray label2,
 int echo3,
 DArray text4,
 bool* ok5,
 int flags6)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QString __qt_label2 = QString::fromUtf8((const char *)label2.ptr, label2.length);
    QLineEdit::EchoMode __qt_echo3 = (QLineEdit::EchoMode) echo3;
    QString __qt_text4 = QString::fromUtf8((const char *)text4.ptr, text4.length);
    bool*  __qt_ok5 = (bool* ) ok5;
    QFlags<Qt::WindowType> __qt_flags6 = (QFlags<Qt::WindowType>) flags6;
    QString  __qt_return_value = QInputDialog_QtDShell::getText((QWidget* )__qt_parent0, (const QString& )__qt_title1, (const QString& )__qt_label2, (QLineEdit::EchoMode )__qt_echo3, (const QString& )__qt_text4, (bool* )__qt_ok5, (Qt::WindowFlags )__qt_flags6);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QInputDialog_staticMetaObject() {
    return (void*)&QInputDialog::staticMetaObject;
}


