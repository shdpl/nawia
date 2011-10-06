#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdockwidget.h>
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
#include <qmainwindow.h>
#include <qmenu.h>
#include <qmenubar.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstatusbar.h>
#include <qstyle.h>
#include <qtoolbar.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QMainWindow_shell.h"
#include <iostream>
#include <qmainwindow.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMainWindowEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMainWindowEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_createEntity(void *nativeId, void* dId)
{
    new QMainWindowEntity((QObject*)nativeId, dId);
}

QMainWindow_QtDShell::QMainWindow_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1)
    : QMainWindow(parent0, flags1),
      QObjectLink(this, d_ptr)
{
}

QMainWindow_QtDShell::~QMainWindow_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMainWindow_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMainWindow::metaObject();
}

int QMainWindow_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMainWindow::qt_metacall(_c, _id, _a);
}

int QMainWindow_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMainWindow::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* event0))
void QMainWindow_QtDShell::contextMenuEvent(QContextMenuEvent*  event0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QMainWindow_createPopupMenu_dispatch, (void *dId))
QTD_FUNC(GUI, QMainWindow_createPopupMenu_dispatch)
QMenu*  QMainWindow_QtDShell::createPopupMenu()
{
    return (QMenu*) qtd_QMainWindow_createPopupMenu_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QMainWindow_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QMainWindow_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QMainWindow_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QMainWindow_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QMainWindow_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QMainWindow_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QMainWindow_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QMainWindow_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMainWindow_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QMainWindow_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QMainWindow_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMainWindow_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QMainWindow_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_initCallBacks(VoidFunc *virts) {
    qtd_QMainWindow_createPopupMenu_dispatch = (qtd_QMainWindow_createPopupMenu_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QMainWindow_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QMainWindow_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QMainWindow_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QMainWindow_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QMainWindow_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QMainWindow_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QMainWindow_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QMainWindow_QtDShell::__public_iconSizeChanged(const QSize&  iconSize0)
{
    QMainWindow::iconSizeChanged((const QSize& )iconSize0);
}

void QMainWindow_QtDShell::__public_toolButtonStyleChanged(int  toolButtonStyle0)
{
    QMainWindow::toolButtonStyleChanged((Qt::ToolButtonStyle )toolButtonStyle0);
}

// Write virtual function overries used to decide on static/virtual calls
void QMainWindow_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QMainWindow::contextMenuEvent((QContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QContextMenuEvent* )event0);
    }
}

QMenu*  QMainWindow_QtDShell::__override_createPopupMenu(bool static_call)
{
    if (static_call) {
        return QMainWindow::createPopupMenu();
    } else {
        return createPopupMenu();
    }
}

void QMainWindow_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QMainWindow_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QMainWindow_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QMainWindow_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QMainWindow::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QMainWindow_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QMainWindow_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QMainWindow_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QMainWindow_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QMainWindow_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QMainWindow_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QMainWindow_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QMainWindow_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QMainWindow_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QMainWindow_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QMainWindow_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QMainWindow_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QMainWindow_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QMainWindow_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QMainWindow_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QMainWindow_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QMainWindow_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QMainWindow_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QMainWindow::iconSizeChanged(const QSize & iconSize)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_iconSizeChanged_QSize
(void* __this_nativeId,
 QSize iconSize0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->__public_iconSizeChanged((const QSize& )iconSize0);

}

// QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle toolButtonStyle)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_toolButtonStyleChanged_ToolButtonStyle
(void* __this_nativeId,
 int toolButtonStyle0)
{
    Qt::ToolButtonStyle __qt_toolButtonStyle0 = (Qt::ToolButtonStyle) toolButtonStyle0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->__public_toolButtonStyleChanged((Qt::ToolButtonStyle )__qt_toolButtonStyle0);

}

// ---externC---
// QMainWindow::QMainWindow(QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_QMainWindow_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int flags1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QMainWindow_QtDShell *__qt_this = new QMainWindow_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QMainWindow::addDockWidget(Qt::DockWidgetArea area, QDockWidget * dockwidget)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_addDockWidget_DockWidgetArea_QDockWidget
(void* __this_nativeId,
 int area0,
 void* dockwidget1)
{
    Qt::DockWidgetArea __qt_area0 = (Qt::DockWidgetArea) area0;
    QDockWidget*  __qt_dockwidget1 = (QDockWidget* ) dockwidget1;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->addDockWidget((Qt::DockWidgetArea )__qt_area0, (QDockWidget* )__qt_dockwidget1);

}

// QMainWindow::addDockWidget(Qt::DockWidgetArea area, QDockWidget * dockwidget, Qt::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_addDockWidget_DockWidgetArea_QDockWidget_Orientation
(void* __this_nativeId,
 int area0,
 void* dockwidget1,
 int orientation2)
{
    Qt::DockWidgetArea __qt_area0 = (Qt::DockWidgetArea) area0;
    QDockWidget*  __qt_dockwidget1 = (QDockWidget* ) dockwidget1;
    Qt::Orientation __qt_orientation2 = (Qt::Orientation) orientation2;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->addDockWidget((Qt::DockWidgetArea )__qt_area0, (QDockWidget* )__qt_dockwidget1, (Qt::Orientation )__qt_orientation2);

}

// QMainWindow::addToolBar(QToolBar * toolbar)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_addToolBar_QToolBar
(void* __this_nativeId,
 void* toolbar0)
{
    QToolBar*  __qt_toolbar0 = (QToolBar* ) toolbar0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->addToolBar((QToolBar* )__qt_toolbar0);

}

// QMainWindow::addToolBar(Qt::ToolBarArea area, QToolBar * toolbar)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_addToolBar_ToolBarArea_QToolBar
(void* __this_nativeId,
 int area0,
 void* toolbar1)
{
    Qt::ToolBarArea __qt_area0 = (Qt::ToolBarArea) area0;
    QToolBar*  __qt_toolbar1 = (QToolBar* ) toolbar1;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->addToolBar((Qt::ToolBarArea )__qt_area0, (QToolBar* )__qt_toolbar1);

}

// QMainWindow::addToolBar(const QString & title)
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_addToolBar_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QToolBar*  __qt_return_value = __qt_this->addToolBar((const QString& )__qt_title0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMainWindow::addToolBarBreak(Qt::ToolBarArea area)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_addToolBarBreak_ToolBarArea
(void* __this_nativeId,
 int area0)
{
    Qt::ToolBarArea __qt_area0 = (Qt::ToolBarArea) area0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->addToolBarBreak((Qt::ToolBarArea )__qt_area0);

}

// QMainWindow::centralWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_centralWidget_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->centralWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMainWindow::corner(Qt::Corner corner) const
QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_corner_Corner_const
(void* __this_nativeId,
 int corner0)
{
    Qt::Corner __qt_corner0 = (Qt::Corner) corner0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->corner((Qt::Corner )__qt_corner0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::dockOptions() const
QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_dockOptions_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dockOptions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::dockWidgetArea(QDockWidget * dockwidget) const
QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_dockWidgetArea_QDockWidget_const
(void* __this_nativeId,
 void* dockwidget0)
{
    QDockWidget*  __qt_dockwidget0 = (QDockWidget* ) dockwidget0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dockWidgetArea((QDockWidget* )__qt_dockwidget0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::documentMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_documentMode_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->documentMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::iconSize() const
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_iconSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->iconSize();

    *__d_return_value = __qt_return_value;

}

// QMainWindow::insertToolBar(QToolBar * before, QToolBar * toolbar)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_insertToolBar_QToolBar_QToolBar
(void* __this_nativeId,
 void* before0,
 void* toolbar1)
{
    QToolBar*  __qt_before0 = (QToolBar* ) before0;
    QToolBar*  __qt_toolbar1 = (QToolBar* ) toolbar1;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->insertToolBar((QToolBar* )__qt_before0, (QToolBar* )__qt_toolbar1);

}

// QMainWindow::insertToolBarBreak(QToolBar * before)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_insertToolBarBreak_QToolBar
(void* __this_nativeId,
 void* before0)
{
    QToolBar*  __qt_before0 = (QToolBar* ) before0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->insertToolBarBreak((QToolBar* )__qt_before0);

}

// QMainWindow::isAnimated() const
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_isAnimated_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAnimated();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::isDockNestingEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_isDockNestingEnabled_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDockNestingEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::isSeparator(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_isSeparator_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSeparator((const QPoint& )pos0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::menuBar() const
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_menuBar_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QMenuBar*  __qt_return_value = __qt_this->menuBar();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMainWindow::menuWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_menuWidget_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->menuWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMainWindow::removeDockWidget(QDockWidget * dockwidget)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_removeDockWidget_QDockWidget
(void* __this_nativeId,
 void* dockwidget0)
{
    QDockWidget*  __qt_dockwidget0 = (QDockWidget* ) dockwidget0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->removeDockWidget((QDockWidget* )__qt_dockwidget0);

}

// QMainWindow::removeToolBar(QToolBar * toolbar)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_removeToolBar_QToolBar
(void* __this_nativeId,
 void* toolbar0)
{
    QToolBar*  __qt_toolbar0 = (QToolBar* ) toolbar0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->removeToolBar((QToolBar* )__qt_toolbar0);

}

// QMainWindow::removeToolBarBreak(QToolBar * before)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_removeToolBarBreak_QToolBar
(void* __this_nativeId,
 void* before0)
{
    QToolBar*  __qt_before0 = (QToolBar* ) before0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->removeToolBarBreak((QToolBar* )__qt_before0);

}

// QMainWindow::restoreDockWidget(QDockWidget * dockwidget)
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_restoreDockWidget_QDockWidget
(void* __this_nativeId,
 void* dockwidget0)
{
    QDockWidget*  __qt_dockwidget0 = (QDockWidget* ) dockwidget0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->restoreDockWidget((QDockWidget* )__qt_dockwidget0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::restoreState(const QByteArray & state, int version_)
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_restoreState_QByteArray_int
(void* __this_nativeId,
 void* state0,
 int version1)
{
    const QByteArray&  __qt_state0 = (const QByteArray& ) *(QByteArray *)state0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->restoreState((const QByteArray& )__qt_state0, (int )version1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::saveState(int version_) const
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_saveState_int_const
(void* __this_nativeId,
 int version0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->saveState((int )version0);

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QMainWindow::setAnimated(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setAnimated_bool
(void* __this_nativeId,
 bool enabled0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setAnimated((bool )enabled0);

}

// QMainWindow::setCentralWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setCentralWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setCentralWidget((QWidget* )__qt_widget0);

}

// QMainWindow::setCorner(Qt::Corner corner, Qt::DockWidgetArea area)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setCorner_Corner_DockWidgetArea
(void* __this_nativeId,
 int corner0,
 int area1)
{
    Qt::Corner __qt_corner0 = (Qt::Corner) corner0;
    Qt::DockWidgetArea __qt_area1 = (Qt::DockWidgetArea) area1;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setCorner((Qt::Corner )__qt_corner0, (Qt::DockWidgetArea )__qt_area1);

}

// QMainWindow::setDockNestingEnabled(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setDockNestingEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setDockNestingEnabled((bool )enabled0);

}

// QMainWindow::setDockOptions(QFlags<QMainWindow::DockOption> options)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setDockOptions_DockOptions
(void* __this_nativeId,
 int options0)
{
    QFlags<QMainWindow::DockOption> __qt_options0 = (QFlags<QMainWindow::DockOption>) options0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setDockOptions((QMainWindow::DockOptions )__qt_options0);

}

// QMainWindow::setDocumentMode(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setDocumentMode_bool
(void* __this_nativeId,
 bool enabled0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setDocumentMode((bool )enabled0);

}

// QMainWindow::setIconSize(const QSize & iconSize)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setIconSize_QSize
(void* __this_nativeId,
 QSize iconSize0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setIconSize((const QSize& )iconSize0);

}

// QMainWindow::setMenuBar(QMenuBar * menubar)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setMenuBar_QMenuBar
(void* __this_nativeId,
 void* menubar0)
{
    QMenuBar*  __qt_menubar0 = (QMenuBar* ) menubar0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setMenuBar((QMenuBar* )__qt_menubar0);

}

// QMainWindow::setMenuWidget(QWidget * menubar)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setMenuWidget_QWidget
(void* __this_nativeId,
 void* menubar0)
{
    QWidget*  __qt_menubar0 = (QWidget* ) menubar0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setMenuWidget((QWidget* )__qt_menubar0);

}

// QMainWindow::setStatusBar(QStatusBar * statusbar)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setStatusBar_QStatusBar
(void* __this_nativeId,
 void* statusbar0)
{
    QStatusBar*  __qt_statusbar0 = (QStatusBar* ) statusbar0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setStatusBar((QStatusBar* )__qt_statusbar0);

}

// QMainWindow::setTabPosition(QFlags<Qt::DockWidgetArea> areas, QTabWidget::TabPosition tabPosition)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setTabPosition_DockWidgetAreas_TabPosition
(void* __this_nativeId,
 int areas0,
 int tabPosition1)
{
    QFlags<Qt::DockWidgetArea> __qt_areas0 = (QFlags<Qt::DockWidgetArea>) areas0;
    QTabWidget::TabPosition __qt_tabPosition1 = (QTabWidget::TabPosition) tabPosition1;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setTabPosition((Qt::DockWidgetAreas )__qt_areas0, (QTabWidget::TabPosition )__qt_tabPosition1);

}

// QMainWindow::setTabShape(QTabWidget::TabShape tabShape)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setTabShape_TabShape
(void* __this_nativeId,
 int tabShape0)
{
    QTabWidget::TabShape __qt_tabShape0 = (QTabWidget::TabShape) tabShape0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setTabShape((QTabWidget::TabShape )__qt_tabShape0);

}

// QMainWindow::setToolButtonStyle(Qt::ToolButtonStyle toolButtonStyle)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setToolButtonStyle_ToolButtonStyle
(void* __this_nativeId,
 int toolButtonStyle0)
{
    Qt::ToolButtonStyle __qt_toolButtonStyle0 = (Qt::ToolButtonStyle) toolButtonStyle0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setToolButtonStyle((Qt::ToolButtonStyle )__qt_toolButtonStyle0);

}

// QMainWindow::setUnifiedTitleAndToolBarOnMac(bool set)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_setUnifiedTitleAndToolBarOnMac_bool
(void* __this_nativeId,
 bool set0)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->setUnifiedTitleAndToolBarOnMac((bool )set0);

}

// QMainWindow::splitDockWidget(QDockWidget * after, QDockWidget * dockwidget, Qt::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_splitDockWidget_QDockWidget_QDockWidget_Orientation
(void* __this_nativeId,
 void* after0,
 void* dockwidget1,
 int orientation2)
{
    QDockWidget*  __qt_after0 = (QDockWidget* ) after0;
    QDockWidget*  __qt_dockwidget1 = (QDockWidget* ) dockwidget1;
    Qt::Orientation __qt_orientation2 = (Qt::Orientation) orientation2;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->splitDockWidget((QDockWidget* )__qt_after0, (QDockWidget* )__qt_dockwidget1, (Qt::Orientation )__qt_orientation2);

}

// QMainWindow::statusBar() const
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_statusBar_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QStatusBar*  __qt_return_value = __qt_this->statusBar();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMainWindow::tabPosition(Qt::DockWidgetArea area) const
QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_tabPosition_DockWidgetArea_const
(void* __this_nativeId,
 int area0)
{
    Qt::DockWidgetArea __qt_area0 = (Qt::DockWidgetArea) area0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabPosition((Qt::DockWidgetArea )__qt_area0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::tabShape() const
QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_tabShape_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabShape();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::tabifiedDockWidgets(QDockWidget * dockwidget) const
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_tabifiedDockWidgets_QDockWidget_const
(void* __this_nativeId,
 void* __d_return_value,
 void* dockwidget0)
{
    QDockWidget*  __qt_dockwidget0 = (QDockWidget* ) dockwidget0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    QList<QDockWidget* >  __qt_return_value = __qt_this->tabifiedDockWidgets((QDockWidget* )__qt_dockwidget0);

QList<QDockWidget* > &__d_return_value_tmp = (*(QList<QDockWidget* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QMainWindow::tabifyDockWidget(QDockWidget * first, QDockWidget * second)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_tabifyDockWidget_QDockWidget_QDockWidget
(void* __this_nativeId,
 void* first0,
 void* second1)
{
    QDockWidget*  __qt_first0 = (QDockWidget* ) first0;
    QDockWidget*  __qt_second1 = (QDockWidget* ) second1;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    __qt_this->tabifyDockWidget((QDockWidget* )__qt_first0, (QDockWidget* )__qt_second1);

}

// QMainWindow::toolBarArea(QToolBar * toolbar) const
QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_toolBarArea_QToolBar_const
(void* __this_nativeId,
 void* toolbar0)
{
    QToolBar*  __qt_toolbar0 = (QToolBar* ) toolbar0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->toolBarArea((QToolBar* )__qt_toolbar0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::toolBarBreak(QToolBar * toolbar) const
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_toolBarBreak_QToolBar_const
(void* __this_nativeId,
 void* toolbar0)
{
    QToolBar*  __qt_toolbar0 = (QToolBar* ) toolbar0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->toolBarBreak((QToolBar* )__qt_toolbar0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::toolButtonStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QMainWindow_toolButtonStyle_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->toolButtonStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::unifiedTitleAndToolBarOnMac() const
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_unifiedTitleAndToolBarOnMac_const
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->unifiedTitleAndToolBarOnMac();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMainWindow::contextMenuEvent(QContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QMainWindow_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QContextMenuEvent*  __qt_event0 = (QContextMenuEvent* ) event0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_event0, __do_static_call);

}

// QMainWindow::createPopupMenu()
QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_createPopupMenu
(void* __this_nativeId)
{
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMenu*  __qt_return_value = __qt_this->__override_createPopupMenu(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMainWindow::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QMainWindow_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QMainWindow_QtDShell *__qt_this = (QMainWindow_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMainWindow_staticMetaObject() {
    return (void*)&QMainWindow::staticMetaObject;
}


