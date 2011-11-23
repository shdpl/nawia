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

#include <QPainter>

#include "QWizardPage_shell.h"
#include <iostream>
#include <qwizard.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QWizardPageEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWizardPageEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_createEntity(void *nativeId, void* dId)
{
    new QWizardPageEntity((QObject*)nativeId, dId);
}

QWizardPage_QtDShell::QWizardPage_QtDShell(void *d_ptr, QWidget*  parent0)
    : QWizardPage(parent0),
      QObjectLink(this, d_ptr)
{
}

QWizardPage_QtDShell::~QWizardPage_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QWizardPage_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QWizardPage::metaObject();
}

int QWizardPage_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QWizardPage::qt_metacall(_c, _id, _a);
}

int QWizardPage_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QWizardPage::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QWizardPage_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWizardPage_cleanupPage_dispatch, (void *dId))
QTD_FUNC(GUI, QWizardPage_cleanupPage_dispatch)
void QWizardPage_QtDShell::cleanupPage()
{
    qtd_QWizardPage_cleanupPage_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QWizardPage_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QWizardPage_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QWizardPage_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QWizardPage_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QWizardPage_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWizardPage_initializePage_dispatch, (void *dId))
QTD_FUNC(GUI, QWizardPage_initializePage_dispatch)
void QWizardPage_QtDShell::initializePage()
{
    qtd_QWizardPage_initializePage_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QWizardPage_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QWizardPage_isComplete_const_dispatch, (void *dId))
QTD_FUNC(GUI, QWizardPage_isComplete_const_dispatch)
bool  QWizardPage_QtDShell::isComplete() const
{
    return qtd_QWizardPage_isComplete_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QWizardPage_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QWizardPage_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWizardPage_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWizardPage_nextId_const_dispatch, (void *dId))
QTD_FUNC(GUI, QWizardPage_nextId_const_dispatch)
int  QWizardPage_QtDShell::nextId() const
{
    return qtd_QWizardPage_nextId_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QWizardPage_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QWizardPage_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWizardPage_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWizardPage_validatePage_dispatch, (void *dId))
QTD_FUNC(GUI, QWizardPage_validatePage_dispatch)
bool  QWizardPage_QtDShell::validatePage()
{
    return qtd_QWizardPage_validatePage_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QWizardPage_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_initCallBacks(VoidFunc *virts) {
    qtd_QWizardPage_cleanupPage_dispatch = (qtd_QWizardPage_cleanupPage_dispatch_t) virts[0];
    qtd_QWizardPage_initializePage_dispatch = (qtd_QWizardPage_initializePage_dispatch_t) virts[1];
    qtd_QWizardPage_isComplete_const_dispatch = (qtd_QWizardPage_isComplete_const_dispatch_t) virts[2];
    qtd_QWizardPage_nextId_const_dispatch = (qtd_QWizardPage_nextId_const_dispatch_t) virts[3];
    qtd_QWizardPage_validatePage_dispatch = (qtd_QWizardPage_validatePage_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QWizardPage_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QVariant  QWizardPage_QtDShell::__public_field(const QString&  name0) const
{
    return QWizardPage::field((const QString& )name0);
}

bool  QWizardPage_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QWizardPage_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QWizardPage_QtDShell::__public_registerField(const QString&  name0, QWidget*  widget1, const char*  property2, const char*  changedSignal3)
{
    QWizardPage::registerField((const QString& )name0, (QWidget* )widget1, (const char* )property2, (const char* )changedSignal3);
}

void QWizardPage_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QWizardPage_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QWizardPage_QtDShell::__public_setField(const QString&  name0, const QVariant&  value1)
{
    QWizardPage::setField((const QString& )name0, (const QVariant& )value1);
}

void QWizardPage_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

QWizard*  QWizardPage_QtDShell::__public_wizard() const
{
    return QWizardPage::wizard();
}

void QWizardPage_QtDShell::__public_completeChanged()
{
    QWizardPage::completeChanged();
}

void QWizardPage_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

// Write virtual function overries used to decide on static/virtual calls
void QWizardPage_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_cleanupPage(bool static_call)
{
    if (static_call) {
        QWizardPage::cleanupPage();
    } else {
        cleanupPage();
    }
}

void QWizardPage_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QWizardPage_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QWizardPage_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QWizardPage_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QWizardPage_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QWizardPage_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QWizardPage_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QWizardPage_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QWizardPage_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QWizardPage_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_initializePage(bool static_call)
{
    if (static_call) {
        QWizardPage::initializePage();
    } else {
        initializePage();
    }
}

void QWizardPage_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QWizardPage_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

bool  QWizardPage_QtDShell::__override_isComplete(bool static_call) const
{
    if (static_call) {
        return QWizardPage::isComplete();
    } else {
        return isComplete();
    }
}

void QWizardPage_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QWizardPage_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QWizardPage_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QWizardPage_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QWizardPage_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

int  QWizardPage_QtDShell::__override_nextId(bool static_call) const
{
    if (static_call) {
        return QWizardPage::nextId();
    } else {
        return nextId();
    }
}

QPaintEngine*  QWizardPage_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QWizardPage_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QWizardPage_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QWizardPage_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QWizardPage_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QWizardPage_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QWizardPage_QtDShell::__override_validatePage(bool static_call)
{
    if (static_call) {
        return QWizardPage::validatePage();
    } else {
        return validatePage();
    }
}

void QWizardPage_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QWizardPage::completeChanged()
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_completeChanged
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->__public_completeChanged();

}

// ---externC---
// QWizardPage::QWizardPage(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWizardPage_QWizardPage_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QWizardPage_QtDShell *__qt_this = new QWizardPage_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QWizardPage::buttonText(QWizard::WizardButton which) const
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_buttonText_WizardButton_const
(void* __this_nativeId,
 void* __d_return_value,
 int which0)
{
    QWizard::WizardButton __qt_which0 = (QWizard::WizardButton) which0;
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->buttonText((QWizard::WizardButton )__qt_which0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWizardPage::field(const QString & name) const
QTD_EXTERN QTD_EXPORT void* qtd_QWizardPage_field_string_const
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->__public_field((const QString& )__qt_name0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QWizardPage::isCommitPage() const
QTD_EXTERN QTD_EXPORT bool qtd_QWizardPage_isCommitPage_const
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCommitPage();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizardPage::isFinalPage() const
QTD_EXTERN QTD_EXPORT bool qtd_QWizardPage_isFinalPage_const
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFinalPage();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizardPage::pixmap(QWizard::WizardPixmap which) const
QTD_EXTERN QTD_EXPORT void* qtd_QWizardPage_pixmap_WizardPixmap_const
(void* __this_nativeId,
 int which0)
{
    QWizard::WizardPixmap __qt_which0 = (QWizard::WizardPixmap) which0;
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->pixmap((QWizard::WizardPixmap )__qt_which0);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QWizardPage::registerField(const QString & name, QWidget * widget, const char * property, const char * changedSignal)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_registerField_string_QWidget_nativepointerchar_nativepointerchar
(void* __this_nativeId,
 DArray name0,
 void* widget1,
 char* property2,
 char* changedSignal3)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    const char*  __qt_property2 = (const char* ) property2;
    const char*  __qt_changedSignal3 = (const char* ) changedSignal3;
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->__public_registerField((const QString& )__qt_name0, (QWidget* )__qt_widget1, (const char* )__qt_property2, (const char* )__qt_changedSignal3);

}

// QWizardPage::setButtonText(QWizard::WizardButton which, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_setButtonText_WizardButton_string
(void* __this_nativeId,
 int which0,
 DArray text1)
{
    QWizard::WizardButton __qt_which0 = (QWizard::WizardButton) which0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->setButtonText((QWizard::WizardButton )__qt_which0, (const QString& )__qt_text1);

}

// QWizardPage::setCommitPage(bool commitPage)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_setCommitPage_bool
(void* __this_nativeId,
 bool commitPage0)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->setCommitPage((bool )commitPage0);

}

// QWizardPage::setField(const QString & name, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_setField_string_QVariant
(void* __this_nativeId,
 DArray name0,
 QVariant* value1)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->__public_setField((const QString& )__qt_name0, (const QVariant& )__qt_value1);

}

// QWizardPage::setFinalPage(bool finalPage)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_setFinalPage_bool
(void* __this_nativeId,
 bool finalPage0)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->setFinalPage((bool )finalPage0);

}

// QWizardPage::setPixmap(QWizard::WizardPixmap which, const QPixmap & pixmap)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_setPixmap_WizardPixmap_QPixmap
(void* __this_nativeId,
 int which0,
 void* pixmap1)
{
    QWizard::WizardPixmap __qt_which0 = (QWizard::WizardPixmap) which0;
    const QPixmap&  __qt_pixmap1 = (const QPixmap& ) *(QPixmap *)pixmap1;
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->setPixmap((QWizard::WizardPixmap )__qt_which0, (const QPixmap& )__qt_pixmap1);

}

// QWizardPage::setSubTitle(const QString & subTitle)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_setSubTitle_string
(void* __this_nativeId,
 DArray subTitle0)
{
    QString __qt_subTitle0 = QString::fromUtf8((const char *)subTitle0.ptr, subTitle0.length);
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->setSubTitle((const QString& )__qt_subTitle0);

}

// QWizardPage::setTitle(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_setTitle_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    __qt_this->setTitle((const QString& )__qt_title0);

}

// QWizardPage::subTitle() const
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_subTitle_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->subTitle();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWizardPage::title() const
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWizardPage::wizard() const
QTD_EXTERN QTD_EXPORT void* qtd_QWizardPage_wizard_const
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    QWizard*  __qt_return_value = __qt_this->__public_wizard();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWizardPage::cleanupPage()
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_cleanupPage
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_cleanupPage(__do_static_call);

}

// QWizardPage::initializePage()
QTD_EXTERN QTD_EXPORT void qtd_QWizardPage_initializePage
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_initializePage(__do_static_call);

}

// QWizardPage::isComplete() const
QTD_EXTERN QTD_EXPORT bool qtd_QWizardPage_isComplete_const
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isComplete(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizardPage::nextId() const
QTD_EXTERN QTD_EXPORT int qtd_QWizardPage_nextId_const
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_nextId(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWizardPage::validatePage()
QTD_EXTERN QTD_EXPORT bool qtd_QWizardPage_validatePage
(void* __this_nativeId)
{
    QWizardPage_QtDShell *__qt_this = (QWizardPage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_validatePage(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWizardPage_staticMetaObject() {
    return (void*)&QWizardPage::staticMetaObject;
}


