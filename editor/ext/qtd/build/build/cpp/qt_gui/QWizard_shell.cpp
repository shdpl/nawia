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

#include <QPainter>

#include "QWizard_shell.h"
#include <iostream>
#include <qwizard.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QWizardEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWizardEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWizard_createEntity(void *nativeId, void* dId)
{
    new QWizardEntity((QObject*)nativeId, dId);
}

QWizard_QtDShell::QWizard_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1)
    : QWizard(parent0, flags1),
      QObjectLink(this, d_ptr)
{
}

QWizard_QtDShell::~QWizard_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QWizard_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QWizard::metaObject();
}

int QWizard_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QWizard::qt_metacall(_c, _id, _a);
}

int QWizard_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QWizard::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QWizard_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QDialog_accept_dispatch, (void *dId))
void QWizard_QtDShell::accept()
{
    qtd_QDialog_accept_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWizard_cleanupPage_int_dispatch, (void *dId, int id0))
QTD_FUNC(GUI, QWizard_cleanupPage_int_dispatch)
void QWizard_QtDShell::cleanupPage(int  id0)
{
    qtd_QWizard_cleanupPage_int_dispatch(QObjectLink::getLink(this)->dId, (int )id0);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QWizard_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QDialog_done_int_dispatch, (void *dId, int result0))
void QWizard_QtDShell::done(int  result0)
{
    qtd_QDialog_done_int_dispatch(QObjectLink::getLink(this)->dId, (int )result0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QWizard_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QWizard_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QWizard_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QWizard_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWizard_initializePage_int_dispatch, (void *dId, int id0))
QTD_FUNC(GUI, QWizard_initializePage_int_dispatch)
void QWizard_QtDShell::initializePage(int  id0)
{
    qtd_QWizard_initializePage_int_dispatch(QObjectLink::getLink(this)->dId, (int )id0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QWizard_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QWizard_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QWizard_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWizard_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWizard_nextId_const_dispatch, (void *dId))
QTD_FUNC(GUI, QWizard_nextId_const_dispatch)
int  QWizard_QtDShell::nextId() const
{
    return qtd_QWizard_nextId_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QWizard_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QWizard_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QDialog_reject_dispatch, (void *dId))
void QWizard_QtDShell::reject()
{
    qtd_QDialog_reject_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QWizard_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QWizard_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWizard_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWizard_validateCurrentPage_dispatch, (void *dId))
QTD_FUNC(GUI, QWizard_validateCurrentPage_dispatch)
bool  QWizard_QtDShell::validateCurrentPage()
{
    return qtd_QWizard_validateCurrentPage_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QWizard_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_open_dispatch, (void *dId))
void QWizard_QtDShell::open()
{
    qtd_QDialog_open_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QWizard_initCallBacks(VoidFunc *virts) {
    qtd_QWizard_cleanupPage_int_dispatch = (qtd_QWizard_cleanupPage_int_dispatch_t) virts[0];
    qtd_QWizard_initializePage_int_dispatch = (qtd_QWizard_initializePage_int_dispatch_t) virts[1];
    qtd_QWizard_nextId_const_dispatch = (qtd_QWizard_nextId_const_dispatch_t) virts[2];
    qtd_QWizard_validateCurrentPage_dispatch = (qtd_QWizard_validateCurrentPage_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QWizard_QtDShell::__public_adjustPosition(QWidget*  arg__1)
{
    QDialog::adjustPosition((QWidget* )arg__1);
}

void QWizard_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QWizard_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QWizard_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QWizard_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QWizard_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QWizard_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QWizard_QtDShell::__public_accepted()
{
    QDialog::accepted();
}

void QWizard_QtDShell::__public_currentIdChanged(int  id0)
{
    QWizard::currentIdChanged((int )id0);
}

void QWizard_QtDShell::__public_customButtonClicked(int  which0)
{
    QWizard::customButtonClicked((int )which0);
}

void QWizard_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QWizard_QtDShell::__public_finished(int  result0)
{
    QDialog::finished((int )result0);
}

void QWizard_QtDShell::__public_helpRequested()
{
    QWizard::helpRequested();
}

void QWizard_QtDShell::__public_pageAdded(int  id0)
{
    QWizard::pageAdded((int )id0);
}

void QWizard_QtDShell::__public_pageRemoved(int  id0)
{
    QWizard::pageRemoved((int )id0);
}

void QWizard_QtDShell::__public_rejected()
{
    QDialog::rejected();
}

// Write virtual function overries used to decide on static/virtual calls
void QWizard_QtDShell::__override_accept(bool static_call)
{
    if (static_call) {
        QDialog::accept();
    } else {
        accept();
    }
}

void QWizard_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_cleanupPage(int  id0, bool static_call)
{
    if (static_call) {
        QWizard::cleanupPage((int )id0);
    } else {
        cleanupPage((int )id0);
    }
}

void QWizard_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QWizard_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QWizard_QtDShell::__override_done(int  result0, bool static_call)
{
    if (static_call) {
        QWizard::done((int )result0);
    } else {
        done((int )result0);
    }
}

void QWizard_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QWizard_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QWizard::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QWizard_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QDialog::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QWizard_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QWizard_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QWizard_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QWizard_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QWizard_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_initializePage(int  id0, bool static_call)
{
    if (static_call) {
        QWizard::initializePage((int )id0);
    } else {
        initializePage((int )id0);
    }
}

void QWizard_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QWizard_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QWizard_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QWizard_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QWizard_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QWizard_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QDialog::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QWizard_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

int  QWizard_QtDShell::__override_nextId(bool static_call) const
{
    if (static_call) {
        return QWizard::nextId();
    } else {
        return nextId();
    }
}

QPaintEngine*  QWizard_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QWizard_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QWizard::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QWizard_QtDShell::__override_reject(bool static_call)
{
    if (static_call) {
        QDialog::reject();
    } else {
        reject();
    }
}

void QWizard_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QWizard::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QWizard_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWizard::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QWizard_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QWizard_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWizard::sizeHint();
    } else {
        return sizeHint();
    }
}

void QWizard_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QWizard_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QWizard_QtDShell::__override_validateCurrentPage(bool static_call)
{
    if (static_call) {
        return QWizard::validateCurrentPage();
    } else {
        return validateCurrentPage();
    }
}

void QWizard_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QWizard::currentIdChanged(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_currentIdChanged_int
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->__public_currentIdChanged((int )id0);

}

// QWizard::customButtonClicked(int which)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_customButtonClicked_int
(void* __this_nativeId,
 int which0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->__public_customButtonClicked((int )which0);

}

// QWizard::helpRequested()
QTD_EXTERN QTD_EXPORT void qtd_QWizard_helpRequested
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->__public_helpRequested();

}

// QWizard::pageAdded(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_pageAdded_int
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->__public_pageAdded((int )id0);

}

// QWizard::pageRemoved(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_pageRemoved_int
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->__public_pageRemoved((int )id0);

}

// ---externC---
// QWizard::QWizard(QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QWizard_QWizard_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int flags1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QWizard_QtDShell *__qt_this = new QWizard_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QWizard::addPage(QWizardPage * page)
QTD_EXTERN QTD_EXPORT int qtd_QWizard_addPage_QWizardPage
(void* __this_nativeId,
 void* page0)
{
    QWizardPage*  __qt_page0 = (QWizardPage* ) page0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addPage((QWizardPage* )__qt_page0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::back()
QTD_EXTERN QTD_EXPORT void qtd_QWizard_back
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->back();

}

// QWizard::button(QWizard::WizardButton which) const
QTD_EXTERN QTD_EXPORT void* qtd_QWizard_button_WizardButton_const
(void* __this_nativeId,
 int which0)
{
    QWizard::WizardButton __qt_which0 = (QWizard::WizardButton) which0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QAbstractButton*  __qt_return_value = __qt_this->button((QWizard::WizardButton )__qt_which0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWizard::buttonText(QWizard::WizardButton which) const
QTD_EXTERN QTD_EXPORT void qtd_QWizard_buttonText_WizardButton_const
(void* __this_nativeId,
 void* __d_return_value,
 int which0)
{
    QWizard::WizardButton __qt_which0 = (QWizard::WizardButton) which0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->buttonText((QWizard::WizardButton )__qt_which0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWizard::currentId() const
QTD_EXTERN QTD_EXPORT int qtd_QWizard_currentId_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::currentPage() const
QTD_EXTERN QTD_EXPORT void* qtd_QWizard_currentPage_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QWizardPage*  __qt_return_value = __qt_this->currentPage();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWizard::field(const QString & name) const
QTD_EXTERN QTD_EXPORT void* qtd_QWizard_field_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->field((const QString& )__qt_name0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QWizard::hasVisitedPage(int id) const
QTD_EXTERN QTD_EXPORT bool qtd_QWizard_hasVisitedPage_int_const
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasVisitedPage((int )id0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::next()
QTD_EXTERN QTD_EXPORT void qtd_QWizard_next
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->next();

}

// QWizard::options() const
QTD_EXTERN QTD_EXPORT int qtd_QWizard_options_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->options();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::page(int id) const
QTD_EXTERN QTD_EXPORT void* qtd_QWizard_page_int_const
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QWizardPage*  __qt_return_value = __qt_this->page((int )id0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWizard::pageIds() const
QTD_EXTERN QTD_EXPORT void qtd_QWizard_pageIds_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QList<int >  __qt_return_value = __qt_this->pageIds();

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWizard::pixmap(QWizard::WizardPixmap which) const
QTD_EXTERN QTD_EXPORT void* qtd_QWizard_pixmap_WizardPixmap_const
(void* __this_nativeId,
 int which0)
{
    QWizard::WizardPixmap __qt_which0 = (QWizard::WizardPixmap) which0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap((QWizard::WizardPixmap )__qt_which0);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QWizard::removePage(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_removePage_int
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->removePage((int )id0);

}

// QWizard::restart()
QTD_EXTERN QTD_EXPORT void qtd_QWizard_restart
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->restart();

}

// QWizard::setButton(QWizard::WizardButton which, QAbstractButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setButton_WizardButton_QAbstractButton
(void* __this_nativeId,
 int which0,
 void* button1)
{
    QWizard::WizardButton __qt_which0 = (QWizard::WizardButton) which0;
    QAbstractButton*  __qt_button1 = (QAbstractButton* ) button1;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setButton((QWizard::WizardButton )__qt_which0, (QAbstractButton* )__qt_button1);

}

// QWizard::setButtonLayout(const QList<QWizard::WizardButton > & layout)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setButtonLayout_QList
(void* __this_nativeId,
 void* layout0)
{
QList<QWizard::WizardButton > __qt_layout0 = (*(QList<QWizard::WizardButton > *)layout0);
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setButtonLayout((const QList<QWizard::WizardButton >& )__qt_layout0);

}

// QWizard::setButtonText(QWizard::WizardButton which, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setButtonText_WizardButton_string
(void* __this_nativeId,
 int which0,
 DArray text1)
{
    QWizard::WizardButton __qt_which0 = (QWizard::WizardButton) which0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setButtonText((QWizard::WizardButton )__qt_which0, (const QString& )__qt_text1);

}

// QWizard::setField(const QString & name, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setField_string_QVariant
(void* __this_nativeId,
 DArray name0,
 QVariant* value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setField((const QString& )__qt_name0, (const QVariant& )__qt_value1);

}

// QWizard::setOption(QWizard::WizardOption option, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setOption_WizardOption_bool
(void* __this_nativeId,
 int option0,
 bool on1)
{
    QWizard::WizardOption __qt_option0 = (QWizard::WizardOption) option0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setOption((QWizard::WizardOption )__qt_option0, (bool )on1);

}

// QWizard::setOptions(QFlags<QWizard::WizardOption> options)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setOptions_WizardOptions
(void* __this_nativeId,
 int options0)
{
    QFlags<QWizard::WizardOption> __qt_options0 = (QFlags<QWizard::WizardOption>) options0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setOptions((QWizard::WizardOptions )__qt_options0);

}

// QWizard::setPage(int id, QWizardPage * page)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setPage_int_QWizardPage
(void* __this_nativeId,
 int id0,
 void* page1)
{
    QWizardPage*  __qt_page1 = (QWizardPage* ) page1;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setPage((int )id0, (QWizardPage* )__qt_page1);

}

// QWizard::setPixmap(QWizard::WizardPixmap which, const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setPixmap_WizardPixmap_QPixmap
(void* __this_nativeId,
 int which0,
 void* pixmap1)
{
    QWizard::WizardPixmap __qt_which0 = (QWizard::WizardPixmap) which0;
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setPixmap((QWizard::WizardPixmap )__qt_which0, (const QPixmap& )__qt_pixmap1);

}

// QWizard::setSideWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setSideWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setSideWidget((QWidget* )__qt_widget0);

}

// QWizard::setStartId(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setStartId_int
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setStartId((int )id0);

}

// QWizard::setSubTitleFormat(Qt::TextFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setSubTitleFormat_TextFormat
(void* __this_nativeId,
 int format0)
{
    Qt::TextFormat __qt_format0 = (Qt::TextFormat) format0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setSubTitleFormat((Qt::TextFormat )__qt_format0);

}

// QWizard::setTitleFormat(Qt::TextFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setTitleFormat_TextFormat
(void* __this_nativeId,
 int format0)
{
    Qt::TextFormat __qt_format0 = (Qt::TextFormat) format0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setTitleFormat((Qt::TextFormat )__qt_format0);

}

// QWizard::setWizardStyle(QWizard::WizardStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setWizardStyle_WizardStyle
(void* __this_nativeId,
 int style0)
{
    QWizard::WizardStyle __qt_style0 = (QWizard::WizardStyle) style0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    __qt_this->setWizardStyle((QWizard::WizardStyle )__qt_style0);

}

// QWizard::sideWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QWizard_sideWidget_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->sideWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWizard::startId() const
QTD_EXTERN QTD_EXPORT int qtd_QWizard_startId_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->startId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::subTitleFormat() const
QTD_EXTERN QTD_EXPORT int qtd_QWizard_subTitleFormat_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->subTitleFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::testOption(QWizard::WizardOption option) const
QTD_EXTERN QTD_EXPORT bool qtd_QWizard_testOption_WizardOption_const
(void* __this_nativeId,
 int option0)
{
    QWizard::WizardOption __qt_option0 = (QWizard::WizardOption) option0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testOption((QWizard::WizardOption )__qt_option0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::titleFormat() const
QTD_EXTERN QTD_EXPORT int qtd_QWizard_titleFormat_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->titleFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::visitedPages() const
QTD_EXTERN QTD_EXPORT void qtd_QWizard_visitedPages_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    QList<int >  __qt_return_value = __qt_this->visitedPages();

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWizard::wizardStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QWizard_wizardStyle_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->wizardStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::cleanupPage(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_cleanupPage_int
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_cleanupPage((int )id0, __do_static_call);

}

// QWizard::done(int result)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_done_int
(void* __this_nativeId,
 int result0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_done((int )result0, __do_static_call);

}

// QWizard::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QWizard_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::initializePage(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_initializePage_int
(void* __this_nativeId,
 int id0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_initializePage((int )id0, __do_static_call);

}

// QWizard::nextId() const
QTD_EXTERN QTD_EXPORT int qtd_QWizard_nextId_const
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_nextId(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizard::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// QWizard::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QWizard::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QWizard_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setVisible((bool )visible0, __do_static_call);

}

// QWizard::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QWizard_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWizard::validateCurrentPage()
QTD_EXTERN QTD_EXPORT bool qtd_QWizard_validateCurrentPage
(void* __this_nativeId)
{
    QWizard_QtDShell *__qt_this = (QWizard_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_validateCurrentPage(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWizard_staticMetaObject() {
    return (void*)&QWizard::staticMetaObject;
}


