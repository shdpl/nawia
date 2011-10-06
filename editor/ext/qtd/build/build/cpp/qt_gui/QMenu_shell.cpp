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
#include <qmenu.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QMenu_shell.h"
#include <iostream>
#include <qmenu.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMenuEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMenuEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMenu_createEntity(void *nativeId, void* dId)
{
    new QMenuEntity((QObject*)nativeId, dId);
}

QMenu_QtDShell::QMenu_QtDShell(void *d_ptr, QWidget*  parent0)
    : QMenu(parent0),
      QObjectLink(this, d_ptr)
{
}

QMenu_QtDShell::QMenu_QtDShell(void *d_ptr, const QString&  title0, QWidget*  parent1)
    : QMenu(title0, parent1),
      QObjectLink(this, d_ptr)
{
}

QMenu_QtDShell::~QMenu_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMenu_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMenu::metaObject();
}

int QMenu_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMenu::qt_metacall(_c, _id, _a);
}

int QMenu_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMenu::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMenu_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QMenu_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QMenu_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QMenu_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QMenu_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QMenu_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QMenu_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QMenu_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QMenu_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMenu_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QMenu_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QMenu_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMenu_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QMenu_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMenu_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
int  QMenu_QtDShell::__public_columnCount() const
{
    return QMenu::columnCount();
}

void QMenu_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QMenu_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QMenu_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QMenu_QtDShell::__public_initStyleOption(QStyleOptionMenuItem*  option0, const QAction*  action1) const
{
    QMenu::initStyleOption((QStyleOptionMenuItem* )option0, (const QAction* )action1);
}

void QMenu_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QMenu_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QMenu_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QMenu_QtDShell::__public_aboutToHide()
{
    QMenu::aboutToHide();
}

void QMenu_QtDShell::__public_aboutToShow()
{
    QMenu::aboutToShow();
}

void QMenu_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QMenu_QtDShell::__public_hovered(QAction*  action0)
{
    QMenu::hovered((QAction* )action0);
}

void QMenu_QtDShell::__public_triggered(QAction*  action0)
{
    QMenu::triggered((QAction* )action0);
}

// Write virtual function overries used to decide on static/virtual calls
void QMenu_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QMenu_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QMenu_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QMenu_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QMenu::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QMenu_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QMenu_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QMenu_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QMenu::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QMenu_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QMenu_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QMenu_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QMenu_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QMenu_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QMenu_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QMenu_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QMenu_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QMenu_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QMenu_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QMenu_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QMenu_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QMenu_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QMenu::sizeHint();
    } else {
        return sizeHint();
    }
}

void QMenu_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QMenu_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenu::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QMenu::aboutToHide()
QTD_EXTERN QTD_EXPORT void qtd_QMenu_aboutToHide
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->__public_aboutToHide();

}

// QMenu::aboutToShow()
QTD_EXTERN QTD_EXPORT void qtd_QMenu_aboutToShow
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->__public_aboutToShow();

}

// QMenu::hovered(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_hovered_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->__public_hovered((QAction* )__qt_action0);

}

// QMenu::triggered(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_triggered_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->__public_triggered((QAction* )__qt_action0);

}

// ---externC---
// QMenu::QMenu(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_QMenu_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QMenu_QtDShell *__qt_this = new QMenu_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QMenu::QMenu(const QString & title, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_QMenu_string_QWidget
(void *d_ptr,
 DArray title0,
 void* parent1)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QMenu_QtDShell *__qt_this = new QMenu_QtDShell(d_ptr, (const QString& )__qt_title0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QMenu::actionAt(const QPoint & arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_actionAt_QPoint_const
(void* __this_nativeId,
 QPoint arg__1)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->actionAt((const QPoint& )arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::actionGeometry(QAction * arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QMenu_actionGeometry_QAction_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* arg__1)
{
    QAction*  __qt_arg__1 = (QAction* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->actionGeometry((QAction* )__qt_arg__1);

    *__d_return_value = __qt_return_value;

}

// QMenu::activeAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_activeAction_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->activeAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::addAction(const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_addAction_QIcon_string
(void* __this_nativeId,
 void* icon0,
 DArray text1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((const QIcon& )__qt_icon0, (const QString& )__qt_text1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::addAction(const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_addAction_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((const QString& )__qt_text0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::addMenu(QMenu * menu)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_addMenu_QMenu
(void* __this_nativeId,
 void* menu0)
{
    QMenu*  __qt_menu0 = (QMenu* ) menu0;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addMenu((QMenu* )__qt_menu0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::addMenu(const QIcon & icon, const QString & title)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_addMenu_QIcon_string
(void* __this_nativeId,
 void* icon0,
 DArray title1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->addMenu((const QIcon& )__qt_icon0, (const QString& )__qt_title1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::addMenu(const QString & title)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_addMenu_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->addMenu((const QString& )__qt_title0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::addSeparator()
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_addSeparator
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addSeparator();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::clear()
QTD_EXTERN QTD_EXPORT void qtd_QMenu_clear
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QMenu::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QMenu_columnCount_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenu::defaultAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_defaultAction_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->defaultAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::exec()
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_exec
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->exec();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::exec(const QPoint & pos, QAction * at)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_exec_QPoint_QAction
(void* __this_nativeId,
 QPoint pos0,
 void* at1)
{
    QAction*  __qt_at1 = (QAction* ) at1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->exec((const QPoint& )pos0, (QAction* )__qt_at1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::hideTearOffMenu()
QTD_EXTERN QTD_EXPORT void qtd_QMenu_hideTearOffMenu
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->hideTearOffMenu();

}

// QMenu::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_icon_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QMenu::initStyleOption(QStyleOptionMenuItem * option, const QAction * action) const
QTD_EXTERN QTD_EXPORT void qtd_QMenu_initStyleOption_nativepointerQStyleOptionMenuItem_QAction_const
(void* __this_nativeId,
 void* option0,
 void* action1)
{
    QStyleOptionMenuItem*  __qt_option0 = (QStyleOptionMenuItem* ) option0;
    const QAction*  __qt_action1 = (const QAction* ) action1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionMenuItem* )__qt_option0, (const QAction* )__qt_action1);

}

// QMenu::insertMenu(QAction * before, QMenu * menu)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_insertMenu_QAction_QMenu
(void* __this_nativeId,
 void* before0,
 void* menu1)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QMenu*  __qt_menu1 = (QMenu* ) menu1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->insertMenu((QAction* )__qt_before0, (QMenu* )__qt_menu1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::insertSeparator(QAction * before)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_insertSeparator_QAction
(void* __this_nativeId,
 void* before0)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->insertSeparator((QAction* )__qt_before0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QMenu_isEmpty_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEmpty();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenu::isTearOffEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QMenu_isTearOffEnabled_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTearOffEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenu::isTearOffMenuVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QMenu_isTearOffMenuVisible_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTearOffMenuVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenu::menuAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_menuAction_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->menuAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::popup(const QPoint & pos, QAction * at)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_popup_QPoint_QAction
(void* __this_nativeId,
 QPoint pos0,
 void* at1)
{
    QAction*  __qt_at1 = (QAction* ) at1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->popup((const QPoint& )pos0, (QAction* )__qt_at1);

}

// QMenu::separatorsCollapsible() const
QTD_EXTERN QTD_EXPORT bool qtd_QMenu_separatorsCollapsible_const
(void* __this_nativeId)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->separatorsCollapsible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenu::setActiveAction(QAction * act)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_setActiveAction_QAction
(void* __this_nativeId,
 void* act0)
{
    QAction*  __qt_act0 = (QAction* ) act0;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->setActiveAction((QAction* )__qt_act0);

}

// QMenu::setDefaultAction(QAction * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_setDefaultAction_QAction
(void* __this_nativeId,
 void* arg__1)
{
    QAction*  __qt_arg__1 = (QAction* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->setDefaultAction((QAction* )__qt_arg__1);

}

// QMenu::setIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_setIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->setIcon((const QIcon& )__qt_icon0);

}

// QMenu::setSeparatorsCollapsible(bool collapse)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_setSeparatorsCollapsible_bool
(void* __this_nativeId,
 bool collapse0)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->setSeparatorsCollapsible((bool )collapse0);

}

// QMenu::setTearOffEnabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_setTearOffEnabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->setTearOffEnabled((bool )arg__1);

}

// QMenu::setTitle(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_setTitle_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    __qt_this->setTitle((const QString& )__qt_title0);

}

// QMenu::title() const
QTD_EXTERN QTD_EXPORT void qtd_QMenu_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QMenu::actionEvent(QActionEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_actionEvent_QActionEvent
(void* __this_nativeId,
 void* arg__1)
{
    QActionEvent*  __qt_arg__1 = (QActionEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_actionEvent((QActionEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::enterEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_enterEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_enterEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QMenu_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenu::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QMenu_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenu::hideEvent(QHideEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_hideEvent_QHideEvent
(void* __this_nativeId,
 void* arg__1)
{
    QHideEvent*  __qt_arg__1 = (QHideEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::leaveEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_leaveEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_leaveEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::mouseMoveEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMenu_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMenu::timerEvent(QTimerEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* arg__1)
{
    QTimerEvent*  __qt_arg__1 = (QTimerEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::wheelEvent(QWheelEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenu_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* arg__1)
{
    QWheelEvent*  __qt_arg__1 = (QWheelEvent* ) arg__1;
    QMenu_QtDShell *__qt_this = (QMenu_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_arg__1, __do_static_call);

}

// QMenu::exec(QList<QAction * > actions, const QPoint & pos, QAction * at)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_exec_QList_QPoint_QAction
(void* actions0,
 QPoint pos1,
 void* at2)
{
QList<QAction* > __qt_actions0 = (*(QList<QAction* > *)actions0);
    QAction*  __qt_at2 = (QAction* ) at2;
    QAction*  __qt_return_value = QMenu_QtDShell::exec((QList<QAction* > )__qt_actions0, (const QPoint& )pos1, (QAction* )__qt_at2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenu::exec(QList<QAction * > actions, const QPoint & pos, QAction * at, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMenu_exec_QList_QPoint_QAction_QWidget
(void* actions0,
 QPoint pos1,
 void* at2,
 void* parent3)
{
QList<QAction* > __qt_actions0 = (*(QList<QAction* > *)actions0);
    QAction*  __qt_at2 = (QAction* ) at2;
    QWidget*  __qt_parent3 = (QWidget* ) parent3;
    QAction*  __qt_return_value = QMenu_QtDShell::exec((QList<QAction* > )__qt_actions0, (const QPoint& )pos1, (QAction* )__qt_at2, (QWidget* )__qt_parent3);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMenu_staticMetaObject() {
    return (void*)&QMenu::staticMetaObject;
}


