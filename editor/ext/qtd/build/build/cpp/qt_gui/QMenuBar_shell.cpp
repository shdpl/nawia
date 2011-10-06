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
#include <qmenubar.h>
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

#include "QMenuBar_shell.h"
#include <iostream>
#include <qmenubar.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMenuBarEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMenuBarEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_createEntity(void *nativeId, void* dId)
{
    new QMenuBarEntity((QObject*)nativeId, dId);
}

QMenuBar_QtDShell::QMenuBar_QtDShell(void *d_ptr, QWidget*  parent0)
    : QMenuBar(parent0),
      QObjectLink(this, d_ptr)
{
}

QMenuBar_QtDShell::~QMenuBar_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMenuBar_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMenuBar::metaObject();
}

int QMenuBar_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMenuBar::qt_metacall(_c, _id, _a);
}

int QMenuBar_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMenuBar::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMenuBar_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QMenuBar_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QMenuBar_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QMenuBar_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QMenuBar_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QMenuBar_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QMenuBar_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QMenuBar_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QMenuBar_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMenuBar_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QMenuBar_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QMenuBar_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMenuBar_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QMenuBar_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QMenuBar_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QMenuBar_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QMenuBar_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QMenuBar_QtDShell::__public_initStyleOption(QStyleOptionMenuItem*  option0, const QAction*  action1) const
{
    QMenuBar::initStyleOption((QStyleOptionMenuItem* )option0, (const QAction* )action1);
}

void QMenuBar_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QMenuBar_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QMenuBar_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QMenuBar_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QMenuBar_QtDShell::__public_hovered(QAction*  action0)
{
    QMenuBar::hovered((QAction* )action0);
}

void QMenuBar_QtDShell::__public_triggered(QAction*  action0)
{
    QMenuBar::triggered((QAction* )action0);
}

// Write virtual function overries used to decide on static/virtual calls
void QMenuBar_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QMenuBar_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QMenuBar_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QMenuBar_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QMenuBar::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QMenuBar_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QMenuBar::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QMenuBar_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QMenuBar_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QMenuBar_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QMenuBar_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QMenuBar::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QMenuBar_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QMenuBar_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QMenuBar_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QMenuBar_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QMenuBar_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QMenuBar_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QMenuBar::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QMenuBar_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QMenuBar_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QMenuBar_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QMenuBar::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QMenuBar_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QMenuBar_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QMenuBar::sizeHint();
    } else {
        return sizeHint();
    }
}

void QMenuBar_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QMenuBar::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QMenuBar_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QMenuBar::hovered(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_hovered_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->__public_hovered((QAction* )__qt_action0);

}

// QMenuBar::triggered(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_triggered_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->__public_triggered((QAction* )__qt_action0);

}

// ---externC---
// QMenuBar::QMenuBar(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_QMenuBar_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QMenuBar_QtDShell *__qt_this = new QMenuBar_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QMenuBar::actionAt(const QPoint & arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_actionAt_QPoint_const
(void* __this_nativeId,
 QPoint arg__1)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->actionAt((const QPoint& )arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::actionGeometry(QAction * arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_actionGeometry_QAction_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* arg__1)
{
    QAction*  __qt_arg__1 = (QAction* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->actionGeometry((QAction* )__qt_arg__1);

    *__d_return_value = __qt_return_value;

}

// QMenuBar::activeAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_activeAction_const
(void* __this_nativeId)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->activeAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::addAction(const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_addAction_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((const QString& )__qt_text0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::addMenu(QMenu * menu)
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_addMenu_QMenu
(void* __this_nativeId,
 void* menu0)
{
    QMenu*  __qt_menu0 = (QMenu* ) menu0;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addMenu((QMenu* )__qt_menu0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::addMenu(const QIcon & icon, const QString & title)
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_addMenu_QIcon_string
(void* __this_nativeId,
 void* icon0,
 DArray title1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_title1 = QString::fromUtf8((const char *)title1.ptr, title1.length);
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->addMenu((const QIcon& )__qt_icon0, (const QString& )__qt_title1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::addMenu(const QString & title)
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_addMenu_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->addMenu((const QString& )__qt_title0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::addSeparator()
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_addSeparator
(void* __this_nativeId)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addSeparator();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::clear()
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_clear
(void* __this_nativeId)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QMenuBar::cornerWidget(Qt::Corner corner) const
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_cornerWidget_Corner_const
(void* __this_nativeId,
 int corner0)
{
    Qt::Corner __qt_corner0 = (Qt::Corner) corner0;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->cornerWidget((Qt::Corner )__qt_corner0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::initStyleOption(QStyleOptionMenuItem * option, const QAction * action) const
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_initStyleOption_nativepointerQStyleOptionMenuItem_QAction_const
(void* __this_nativeId,
 void* option0,
 void* action1)
{
    QStyleOptionMenuItem*  __qt_option0 = (QStyleOptionMenuItem* ) option0;
    const QAction*  __qt_action1 = (const QAction* ) action1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionMenuItem* )__qt_option0, (const QAction* )__qt_action1);

}

// QMenuBar::insertMenu(QAction * before, QMenu * menu)
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_insertMenu_QAction_QMenu
(void* __this_nativeId,
 void* before0,
 void* menu1)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QMenu*  __qt_menu1 = (QMenu* ) menu1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->insertMenu((QAction* )__qt_before0, (QMenu* )__qt_menu1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::insertSeparator(QAction * before)
QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_insertSeparator_QAction
(void* __this_nativeId,
 void* before0)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->insertSeparator((QAction* )__qt_before0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMenuBar::isDefaultUp() const
QTD_EXTERN QTD_EXPORT bool qtd_QMenuBar_isDefaultUp_const
(void* __this_nativeId)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDefaultUp();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenuBar::isNativeMenuBar() const
QTD_EXTERN QTD_EXPORT bool qtd_QMenuBar_isNativeMenuBar_const
(void* __this_nativeId)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNativeMenuBar();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenuBar::setActiveAction(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_setActiveAction_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->setActiveAction((QAction* )__qt_action0);

}

// QMenuBar::setCornerWidget(QWidget * w, Qt::Corner corner)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_setCornerWidget_QWidget_Corner
(void* __this_nativeId,
 void* w0,
 int corner1)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    Qt::Corner __qt_corner1 = (Qt::Corner) corner1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->setCornerWidget((QWidget* )__qt_w0, (Qt::Corner )__qt_corner1);

}

// QMenuBar::setDefaultUp(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_setDefaultUp_bool
(void* __this_nativeId,
 bool arg__1)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->setDefaultUp((bool )arg__1);

}

// QMenuBar::setNativeMenuBar(bool nativeMenuBar)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_setNativeMenuBar_bool
(void* __this_nativeId,
 bool nativeMenuBar0)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    __qt_this->setNativeMenuBar((bool )nativeMenuBar0);

}

// QMenuBar::actionEvent(QActionEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_actionEvent_QActionEvent
(void* __this_nativeId,
 void* arg__1)
{
    QActionEvent*  __qt_arg__1 = (QActionEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_actionEvent((QActionEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QMenuBar_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenuBar::eventFilter(QObject * arg__1, QEvent * arg__2)
QTD_EXTERN QTD_EXPORT bool qtd_QMenuBar_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* arg__1,
 void* arg__2)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QEvent*  __qt_arg__2 = (QEvent* ) arg__2;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_arg__1, (QEvent* )__qt_arg__2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenuBar::focusInEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::focusOutEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QMenuBar_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMenuBar::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::leaveEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_leaveEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_leaveEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMenuBar::mouseMoveEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QMenuBar::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setVisible((bool )visible0, __do_static_call);

}

// QMenuBar::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMenuBar::timerEvent(QTimerEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMenuBar_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* arg__1)
{
    QTimerEvent*  __qt_arg__1 = (QTimerEvent* ) arg__1;
    QMenuBar_QtDShell *__qt_this = (QMenuBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_arg__1, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMenuBar_staticMetaObject() {
    return (void*)&QMenuBar::staticMetaObject;
}


