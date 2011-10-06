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

#include <QPainter>

#include "QMdiSubWindow_shell.h"
#include <iostream>
#include <qmdisubwindow.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMdiSubWindowEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMdiSubWindowEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_createEntity(void *nativeId, void* dId)
{
    new QMdiSubWindowEntity((QObject*)nativeId, dId);
}

QMdiSubWindow_QtDShell::QMdiSubWindow_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1)
    : QMdiSubWindow(parent0, flags1),
      QObjectLink(this, d_ptr)
{
}

QMdiSubWindow_QtDShell::~QMdiSubWindow_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMdiSubWindow_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMdiSubWindow::metaObject();
}

int QMdiSubWindow_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMdiSubWindow::qt_metacall(_c, _id, _a);
}

int QMdiSubWindow_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMdiSubWindow::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMdiSubWindow_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* changeEvent0))
void QMdiSubWindow_QtDShell::changeEvent(QEvent*  changeEvent0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )changeEvent0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* childEvent0))
void QMdiSubWindow_QtDShell::childEvent(QChildEvent*  childEvent0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )childEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* closeEvent0))
void QMdiSubWindow_QtDShell::closeEvent(QCloseEvent*  closeEvent0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )closeEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* contextMenuEvent0))
void QMdiSubWindow_QtDShell::contextMenuEvent(QContextMenuEvent*  contextMenuEvent0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )contextMenuEvent0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QMdiSubWindow_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QMdiSubWindow_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* object0, void* event1))
bool  QMdiSubWindow_QtDShell::eventFilter(QObject*  object0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )object0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* focusInEvent0))
void QMdiSubWindow_QtDShell::focusInEvent(QFocusEvent*  focusInEvent0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )focusInEvent0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QMdiSubWindow_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* focusOutEvent0))
void QMdiSubWindow_QtDShell::focusOutEvent(QFocusEvent*  focusOutEvent0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )focusOutEvent0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QMdiSubWindow_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* hideEvent0))
void QMdiSubWindow_QtDShell::hideEvent(QHideEvent*  hideEvent0)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )hideEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QMdiSubWindow_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* keyEvent0))
void QMdiSubWindow_QtDShell::keyPressEvent(QKeyEvent*  keyEvent0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )keyEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QMdiSubWindow_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* leaveEvent0))
void QMdiSubWindow_QtDShell::leaveEvent(QEvent*  leaveEvent0)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )leaveEvent0);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QMdiSubWindow_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMdiSubWindow_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* mouseEvent0))
void QMdiSubWindow_QtDShell::mouseDoubleClickEvent(QMouseEvent*  mouseEvent0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )mouseEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* mouseEvent0))
void QMdiSubWindow_QtDShell::mouseMoveEvent(QMouseEvent*  mouseEvent0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )mouseEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* mouseEvent0))
void QMdiSubWindow_QtDShell::mousePressEvent(QMouseEvent*  mouseEvent0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )mouseEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* mouseEvent0))
void QMdiSubWindow_QtDShell::mouseReleaseEvent(QMouseEvent*  mouseEvent0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )mouseEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* moveEvent0))
void QMdiSubWindow_QtDShell::moveEvent(QMoveEvent*  moveEvent0)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )moveEvent0);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QMdiSubWindow_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* paintEvent0))
void QMdiSubWindow_QtDShell::paintEvent(QPaintEvent*  paintEvent0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )paintEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* resizeEvent0))
void QMdiSubWindow_QtDShell::resizeEvent(QResizeEvent*  resizeEvent0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )resizeEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QMdiSubWindow_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* showEvent0))
void QMdiSubWindow_QtDShell::showEvent(QShowEvent*  showEvent0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )showEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMdiSubWindow_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* timerEvent0))
void QMdiSubWindow_QtDShell::timerEvent(QTimerEvent*  timerEvent0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )timerEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QMdiSubWindow_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QMdiSubWindow_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QMdiSubWindow_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QMdiSubWindow_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QMdiSubWindow_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QMdiSubWindow_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QMdiSubWindow_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QMdiSubWindow_QtDShell::__public_aboutToActivate()
{
    QMdiSubWindow::aboutToActivate();
}

void QMdiSubWindow_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QMdiSubWindow_QtDShell::__public_windowStateChanged(int  oldState0, int  newState1)
{
    QMdiSubWindow::windowStateChanged((Qt::WindowStates )oldState0, (Qt::WindowStates )newState1);
}

// Write virtual function overries used to decide on static/virtual calls
void QMdiSubWindow_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_changeEvent(QEvent*  changeEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::changeEvent((QEvent* )changeEvent0);
    } else {
        changeEvent((QEvent* )changeEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_childEvent(QChildEvent*  childEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::childEvent((QChildEvent* )childEvent0);
    } else {
        childEvent((QChildEvent* )childEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_closeEvent(QCloseEvent*  closeEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::closeEvent((QCloseEvent* )closeEvent0);
    } else {
        closeEvent((QCloseEvent* )closeEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  contextMenuEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::contextMenuEvent((QContextMenuEvent* )contextMenuEvent0);
    } else {
        contextMenuEvent((QContextMenuEvent* )contextMenuEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QMdiSubWindow_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QMdiSubWindow_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QMdiSubWindow_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QMdiSubWindow::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QMdiSubWindow_QtDShell::__override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QMdiSubWindow::eventFilter((QObject* )object0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )object0, (QEvent* )event1);
    }
}

void QMdiSubWindow_QtDShell::__override_focusInEvent(QFocusEvent*  focusInEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::focusInEvent((QFocusEvent* )focusInEvent0);
    } else {
        focusInEvent((QFocusEvent* )focusInEvent0);
    }
}

bool  QMdiSubWindow_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QMdiSubWindow_QtDShell::__override_focusOutEvent(QFocusEvent*  focusOutEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::focusOutEvent((QFocusEvent* )focusOutEvent0);
    } else {
        focusOutEvent((QFocusEvent* )focusOutEvent0);
    }
}

int  QMdiSubWindow_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_hideEvent(QHideEvent*  hideEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::hideEvent((QHideEvent* )hideEvent0);
    } else {
        hideEvent((QHideEvent* )hideEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QMdiSubWindow_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_keyPressEvent(QKeyEvent*  keyEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::keyPressEvent((QKeyEvent* )keyEvent0);
    } else {
        keyPressEvent((QKeyEvent* )keyEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QMdiSubWindow_QtDShell::__override_leaveEvent(QEvent*  leaveEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::leaveEvent((QEvent* )leaveEvent0);
    } else {
        leaveEvent((QEvent* )leaveEvent0);
    }
}

int  QMdiSubWindow_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QMdiSubWindow_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QMdiSubWindow::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QMdiSubWindow_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  mouseEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::mouseDoubleClickEvent((QMouseEvent* )mouseEvent0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )mouseEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_mouseMoveEvent(QMouseEvent*  mouseEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::mouseMoveEvent((QMouseEvent* )mouseEvent0);
    } else {
        mouseMoveEvent((QMouseEvent* )mouseEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_mousePressEvent(QMouseEvent*  mouseEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::mousePressEvent((QMouseEvent* )mouseEvent0);
    } else {
        mousePressEvent((QMouseEvent* )mouseEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  mouseEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::mouseReleaseEvent((QMouseEvent* )mouseEvent0);
    } else {
        mouseReleaseEvent((QMouseEvent* )mouseEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_moveEvent(QMoveEvent*  moveEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::moveEvent((QMoveEvent* )moveEvent0);
    } else {
        moveEvent((QMoveEvent* )moveEvent0);
    }
}

QPaintEngine*  QMdiSubWindow_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QMdiSubWindow_QtDShell::__override_paintEvent(QPaintEvent*  paintEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::paintEvent((QPaintEvent* )paintEvent0);
    } else {
        paintEvent((QPaintEvent* )paintEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_resizeEvent(QResizeEvent*  resizeEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::resizeEvent((QResizeEvent* )resizeEvent0);
    } else {
        resizeEvent((QResizeEvent* )resizeEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QMdiSubWindow_QtDShell::__override_showEvent(QShowEvent*  showEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::showEvent((QShowEvent* )showEvent0);
    } else {
        showEvent((QShowEvent* )showEvent0);
    }
}

QSize  QMdiSubWindow_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QMdiSubWindow::sizeHint();
    } else {
        return sizeHint();
    }
}

void QMdiSubWindow_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QMdiSubWindow_QtDShell::__override_timerEvent(QTimerEvent*  timerEvent0, bool static_call)
{
    if (static_call) {
        QMdiSubWindow::timerEvent((QTimerEvent* )timerEvent0);
    } else {
        timerEvent((QTimerEvent* )timerEvent0);
    }
}

void QMdiSubWindow_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QMdiSubWindow::aboutToActivate()
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_aboutToActivate
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->__public_aboutToActivate();

}

// QMdiSubWindow::windowStateChanged(QFlags<Qt::WindowState> oldState, QFlags<Qt::WindowState> newState)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_windowStateChanged_WindowStates_WindowStates
(void* __this_nativeId,
 int oldState0,
 int newState1)
{
    QFlags<Qt::WindowState> __qt_oldState0 = (QFlags<Qt::WindowState>) oldState0;
    QFlags<Qt::WindowState> __qt_newState1 = (QFlags<Qt::WindowState>) newState1;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->__public_windowStateChanged((Qt::WindowStates )__qt_oldState0, (Qt::WindowStates )__qt_newState1);

}

// ---externC---
// QMdiSubWindow::QMdiSubWindow(QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QMdiSubWindow_QMdiSubWindow_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int flags1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QMdiSubWindow_QtDShell *__qt_this = new QMdiSubWindow_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QMdiSubWindow::isShaded() const
QTD_EXTERN QTD_EXPORT bool qtd_QMdiSubWindow_isShaded_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isShaded();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::keyboardPageStep() const
QTD_EXTERN QTD_EXPORT int qtd_QMdiSubWindow_keyboardPageStep_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->keyboardPageStep();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::keyboardSingleStep() const
QTD_EXTERN QTD_EXPORT int qtd_QMdiSubWindow_keyboardSingleStep_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->keyboardSingleStep();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::maximizedButtonsWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiSubWindow_maximizedButtonsWidget_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->maximizedButtonsWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::maximizedSystemMenuIconWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiSubWindow_maximizedSystemMenuIconWidget_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->maximizedSystemMenuIconWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::mdiArea() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiSubWindow_mdiArea_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    QMdiArea*  __qt_return_value = __qt_this->mdiArea();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::setKeyboardPageStep(int step)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_setKeyboardPageStep_int
(void* __this_nativeId,
 int step0)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->setKeyboardPageStep((int )step0);

}

// QMdiSubWindow::setKeyboardSingleStep(int step)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_setKeyboardSingleStep_int
(void* __this_nativeId,
 int step0)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->setKeyboardSingleStep((int )step0);

}

// QMdiSubWindow::setOption(QMdiSubWindow::SubWindowOption option, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_setOption_SubWindowOption_bool
(void* __this_nativeId,
 int option0,
 bool on1)
{
    QMdiSubWindow::SubWindowOption __qt_option0 = (QMdiSubWindow::SubWindowOption) option0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->setOption((QMdiSubWindow::SubWindowOption )__qt_option0, (bool )on1);

}

// QMdiSubWindow::setSystemMenu(QMenu * systemMenu)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_setSystemMenu_QMenu
(void* __this_nativeId,
 void* systemMenu0)
{
    QMenu*  __qt_systemMenu0 = (QMenu* ) systemMenu0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->setSystemMenu((QMenu* )__qt_systemMenu0);

}

// QMdiSubWindow::setWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_setWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->setWidget((QWidget* )__qt_widget0);

}

// QMdiSubWindow::showShaded()
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_showShaded
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->showShaded();

}

// QMdiSubWindow::showSystemMenu()
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_showSystemMenu
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    __qt_this->showSystemMenu();

}

// QMdiSubWindow::systemMenu() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiSubWindow_systemMenu_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->systemMenu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::testOption(QMdiSubWindow::SubWindowOption arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QMdiSubWindow_testOption_SubWindowOption_const
(void* __this_nativeId,
 int arg__1)
{
    QMdiSubWindow::SubWindowOption __qt_arg__1 = (QMdiSubWindow::SubWindowOption) arg__1;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testOption((QMdiSubWindow::SubWindowOption )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::widget() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiSubWindow_widget_const
(void* __this_nativeId)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::changeEvent(QEvent * changeEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_changeEvent_QEvent
(void* __this_nativeId,
 void* changeEvent0)
{
    QEvent*  __qt_changeEvent0 = (QEvent* ) changeEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_changeEvent0, __do_static_call);

}

// QMdiSubWindow::childEvent(QChildEvent * childEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_childEvent_QChildEvent
(void* __this_nativeId,
 void* childEvent0)
{
    QChildEvent*  __qt_childEvent0 = (QChildEvent* ) childEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_childEvent((QChildEvent* )__qt_childEvent0, __do_static_call);

}

// QMdiSubWindow::closeEvent(QCloseEvent * closeEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_closeEvent_QCloseEvent
(void* __this_nativeId,
 void* closeEvent0)
{
    QCloseEvent*  __qt_closeEvent0 = (QCloseEvent* ) closeEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEvent((QCloseEvent* )__qt_closeEvent0, __do_static_call);

}

// QMdiSubWindow::contextMenuEvent(QContextMenuEvent * contextMenuEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* contextMenuEvent0)
{
    QContextMenuEvent*  __qt_contextMenuEvent0 = (QContextMenuEvent* ) contextMenuEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_contextMenuEvent0, __do_static_call);

}

// QMdiSubWindow::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QMdiSubWindow_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::eventFilter(QObject * object, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QMdiSubWindow_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* object0,
 void* event1)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_object0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiSubWindow::focusInEvent(QFocusEvent * focusInEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* focusInEvent0)
{
    QFocusEvent*  __qt_focusInEvent0 = (QFocusEvent* ) focusInEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_focusInEvent0, __do_static_call);

}

// QMdiSubWindow::focusOutEvent(QFocusEvent * focusOutEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* focusOutEvent0)
{
    QFocusEvent*  __qt_focusOutEvent0 = (QFocusEvent* ) focusOutEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_focusOutEvent0, __do_static_call);

}

// QMdiSubWindow::hideEvent(QHideEvent * hideEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_hideEvent_QHideEvent
(void* __this_nativeId,
 void* hideEvent0)
{
    QHideEvent*  __qt_hideEvent0 = (QHideEvent* ) hideEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_hideEvent0, __do_static_call);

}

// QMdiSubWindow::keyPressEvent(QKeyEvent * keyEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* keyEvent0)
{
    QKeyEvent*  __qt_keyEvent0 = (QKeyEvent* ) keyEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_keyEvent0, __do_static_call);

}

// QMdiSubWindow::leaveEvent(QEvent * leaveEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_leaveEvent_QEvent
(void* __this_nativeId,
 void* leaveEvent0)
{
    QEvent*  __qt_leaveEvent0 = (QEvent* ) leaveEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_leaveEvent((QEvent* )__qt_leaveEvent0, __do_static_call);

}

// QMdiSubWindow::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMdiSubWindow::mouseDoubleClickEvent(QMouseEvent * mouseEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* mouseEvent0)
{
    QMouseEvent*  __qt_mouseEvent0 = (QMouseEvent* ) mouseEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_mouseEvent0, __do_static_call);

}

// QMdiSubWindow::mouseMoveEvent(QMouseEvent * mouseEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* mouseEvent0)
{
    QMouseEvent*  __qt_mouseEvent0 = (QMouseEvent* ) mouseEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_mouseEvent0, __do_static_call);

}

// QMdiSubWindow::mousePressEvent(QMouseEvent * mouseEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* mouseEvent0)
{
    QMouseEvent*  __qt_mouseEvent0 = (QMouseEvent* ) mouseEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_mouseEvent0, __do_static_call);

}

// QMdiSubWindow::mouseReleaseEvent(QMouseEvent * mouseEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* mouseEvent0)
{
    QMouseEvent*  __qt_mouseEvent0 = (QMouseEvent* ) mouseEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_mouseEvent0, __do_static_call);

}

// QMdiSubWindow::moveEvent(QMoveEvent * moveEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_moveEvent_QMoveEvent
(void* __this_nativeId,
 void* moveEvent0)
{
    QMoveEvent*  __qt_moveEvent0 = (QMoveEvent* ) moveEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_moveEvent((QMoveEvent* )__qt_moveEvent0, __do_static_call);

}

// QMdiSubWindow::paintEvent(QPaintEvent * paintEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* paintEvent0)
{
    QPaintEvent*  __qt_paintEvent0 = (QPaintEvent* ) paintEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_paintEvent0, __do_static_call);

}

// QMdiSubWindow::resizeEvent(QResizeEvent * resizeEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* resizeEvent0)
{
    QResizeEvent*  __qt_resizeEvent0 = (QResizeEvent* ) resizeEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_resizeEvent0, __do_static_call);

}

// QMdiSubWindow::showEvent(QShowEvent * showEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_showEvent_QShowEvent
(void* __this_nativeId,
 void* showEvent0)
{
    QShowEvent*  __qt_showEvent0 = (QShowEvent* ) showEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_showEvent0, __do_static_call);

}

// QMdiSubWindow::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMdiSubWindow::timerEvent(QTimerEvent * timerEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiSubWindow_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* timerEvent0)
{
    QTimerEvent*  __qt_timerEvent0 = (QTimerEvent* ) timerEvent0;
    QMdiSubWindow_QtDShell *__qt_this = (QMdiSubWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_timerEvent0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMdiSubWindow_staticMetaObject() {
    return (void*)&QMdiSubWindow::staticMetaObject;
}


