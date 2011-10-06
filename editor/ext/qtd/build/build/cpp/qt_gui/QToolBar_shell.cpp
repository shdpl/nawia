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
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtoolbar.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QToolBar_shell.h"
#include <iostream>
#include <qtoolbar.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QToolBarEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QToolBarEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QToolBar_createEntity(void *nativeId, void* dId)
{
    new QToolBarEntity((QObject*)nativeId, dId);
}

QToolBar_QtDShell::QToolBar_QtDShell(void *d_ptr, QWidget*  parent0)
    : QToolBar(parent0),
      QObjectLink(this, d_ptr)
{
}

QToolBar_QtDShell::QToolBar_QtDShell(void *d_ptr, const QString&  title0, QWidget*  parent1)
    : QToolBar(title0, parent1),
      QObjectLink(this, d_ptr)
{
}

QToolBar_QtDShell::~QToolBar_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QToolBar_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QToolBar::metaObject();
}

int QToolBar_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QToolBar::qt_metacall(_c, _id, _a);
}

int QToolBar_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QToolBar::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QToolBar_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* event0))
void QToolBar_QtDShell::actionEvent(QActionEvent*  event0)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QToolBar_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* event0))
void QToolBar_QtDShell::childEvent(QChildEvent*  event0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QToolBar_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QToolBar_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QToolBar_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QToolBar_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QToolBar_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QToolBar_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QToolBar_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QToolBar_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QToolBar_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QToolBar_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QToolBar_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QToolBar_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QToolBar_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QToolBar_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QToolBar_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QToolBar_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QToolBar_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QToolBar_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QToolBar_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QToolBar_QtDShell::__public_initStyleOption(QStyleOptionToolBar*  option0) const
{
    QToolBar::initStyleOption((QStyleOptionToolBar* )option0);
}

void QToolBar_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QToolBar_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QToolBar_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QToolBar_QtDShell::__public_actionTriggered(QAction*  action0)
{
    QToolBar::actionTriggered((QAction* )action0);
}

void QToolBar_QtDShell::__public_allowedAreasChanged(int  allowedAreas0)
{
    QToolBar::allowedAreasChanged((Qt::ToolBarAreas )allowedAreas0);
}

void QToolBar_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QToolBar_QtDShell::__public_iconSizeChanged(const QSize&  iconSize0)
{
    QToolBar::iconSizeChanged((const QSize& )iconSize0);
}

void QToolBar_QtDShell::__public_movableChanged(bool  movable0)
{
    QToolBar::movableChanged((bool )movable0);
}

void QToolBar_QtDShell::__public_orientationChanged(int  orientation0)
{
    QToolBar::orientationChanged((Qt::Orientation )orientation0);
}

void QToolBar_QtDShell::__public_toolButtonStyleChanged(int  toolButtonStyle0)
{
    QToolBar::toolButtonStyleChanged((Qt::ToolButtonStyle )toolButtonStyle0);
}

void QToolBar_QtDShell::__public_topLevelChanged(bool  topLevel0)
{
    QToolBar::topLevelChanged((bool )topLevel0);
}

void QToolBar_QtDShell::__public_visibilityChanged(bool  visible0)
{
    QToolBar::visibilityChanged((bool )visible0);
}

// Write virtual function overries used to decide on static/virtual calls
void QToolBar_QtDShell::__override_actionEvent(QActionEvent*  event0, bool static_call)
{
    if (static_call) {
        QToolBar::actionEvent((QActionEvent* )event0);
    } else {
        actionEvent((QActionEvent* )event0);
    }
}

void QToolBar_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QToolBar::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QToolBar_QtDShell::__override_childEvent(QChildEvent*  event0, bool static_call)
{
    if (static_call) {
        QToolBar::childEvent((QChildEvent* )event0);
    } else {
        childEvent((QChildEvent* )event0);
    }
}

void QToolBar_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QToolBar_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QToolBar_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QToolBar_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QToolBar::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QToolBar_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QToolBar_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QToolBar_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QToolBar_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QToolBar_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QToolBar_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QToolBar_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QToolBar_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QToolBar_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QToolBar_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QToolBar_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QToolBar_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QToolBar_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QToolBar_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QToolBar::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QToolBar_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QToolBar::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QToolBar_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QToolBar_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QToolBar_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QToolBar_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QToolBar_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QToolBar::actionTriggered(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_actionTriggered_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_actionTriggered((QAction* )__qt_action0);

}

// QToolBar::allowedAreasChanged(QFlags<Qt::ToolBarArea> allowedAreas)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_allowedAreasChanged_ToolBarAreas
(void* __this_nativeId,
 int allowedAreas0)
{
    QFlags<Qt::ToolBarArea> __qt_allowedAreas0 = (QFlags<Qt::ToolBarArea>) allowedAreas0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_allowedAreasChanged((Qt::ToolBarAreas )__qt_allowedAreas0);

}

// QToolBar::iconSizeChanged(const QSize & iconSize)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_iconSizeChanged_QSize
(void* __this_nativeId,
 QSize iconSize0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_iconSizeChanged((const QSize& )iconSize0);

}

// QToolBar::movableChanged(bool movable)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_movableChanged_bool
(void* __this_nativeId,
 bool movable0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_movableChanged((bool )movable0);

}

// QToolBar::orientationChanged(Qt::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_orientationChanged_Orientation
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_orientationChanged((Qt::Orientation )__qt_orientation0);

}

// QToolBar::toolButtonStyleChanged(Qt::ToolButtonStyle toolButtonStyle)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_toolButtonStyleChanged_ToolButtonStyle
(void* __this_nativeId,
 int toolButtonStyle0)
{
    Qt::ToolButtonStyle __qt_toolButtonStyle0 = (Qt::ToolButtonStyle) toolButtonStyle0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_toolButtonStyleChanged((Qt::ToolButtonStyle )__qt_toolButtonStyle0);

}

// QToolBar::topLevelChanged(bool topLevel)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_topLevelChanged_bool
(void* __this_nativeId,
 bool topLevel0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_topLevelChanged((bool )topLevel0);

}

// QToolBar::visibilityChanged(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_visibilityChanged_bool
(void* __this_nativeId,
 bool visible0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_visibilityChanged((bool )visible0);

}

// ---externC---
// QToolBar::QToolBar(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_QToolBar_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QToolBar_QtDShell *__qt_this = new QToolBar_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QToolBar::QToolBar(const QString & title, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_QToolBar_string_QWidget
(void *d_ptr,
 DArray title0,
 void* parent1)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QToolBar_QtDShell *__qt_this = new QToolBar_QtDShell(d_ptr, (const QString& )__qt_title0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QToolBar::actionAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_actionAt_QPoint_const
(void* __this_nativeId,
 QPoint p0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->actionAt((const QPoint& )p0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::actionAt(int x, int y) const
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_actionAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->actionAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::actionGeometry(QAction * action) const
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_actionGeometry_QAction_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->actionGeometry((QAction* )__qt_action0);

    *__d_return_value = __qt_return_value;

}

// QToolBar::addAction(const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_addAction_QIcon_string
(void* __this_nativeId,
 void* icon0,
 DArray text1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((const QIcon& )__qt_icon0, (const QString& )__qt_text1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::addAction(const QString & text)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_addAction_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addAction((const QString& )__qt_text0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::addSeparator()
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_addSeparator
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addSeparator();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::addWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_addWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->addWidget((QWidget* )__qt_widget0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::allowedAreas() const
QTD_EXTERN QTD_EXPORT int qtd_QToolBar_allowedAreas_const
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->allowedAreas();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::clear()
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_clear
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QToolBar::iconSize() const
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_iconSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->iconSize();

    *__d_return_value = __qt_return_value;

}

// QToolBar::initStyleOption(QStyleOptionToolBar * option) const
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_initStyleOption_nativepointerQStyleOptionToolBar_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionToolBar*  __qt_option0 = (QStyleOptionToolBar* ) option0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionToolBar* )__qt_option0);

}

// QToolBar::insertSeparator(QAction * before)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_insertSeparator_QAction
(void* __this_nativeId,
 void* before0)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->insertSeparator((QAction* )__qt_before0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::insertWidget(QAction * before, QWidget * widget)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_insertWidget_QAction_QWidget
(void* __this_nativeId,
 void* before0,
 void* widget1)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->insertWidget((QAction* )__qt_before0, (QWidget* )__qt_widget1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::isAreaAllowed(Qt::ToolBarArea area) const
QTD_EXTERN QTD_EXPORT bool qtd_QToolBar_isAreaAllowed_ToolBarArea_const
(void* __this_nativeId,
 int area0)
{
    Qt::ToolBarArea __qt_area0 = (Qt::ToolBarArea) area0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAreaAllowed((Qt::ToolBarArea )__qt_area0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::isFloatable() const
QTD_EXTERN QTD_EXPORT bool qtd_QToolBar_isFloatable_const
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFloatable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::isFloating() const
QTD_EXTERN QTD_EXPORT bool qtd_QToolBar_isFloating_const
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFloating();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::isMovable() const
QTD_EXTERN QTD_EXPORT bool qtd_QToolBar_isMovable_const
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMovable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QToolBar_orientation_const
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::setAllowedAreas(QFlags<Qt::ToolBarArea> areas)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_setAllowedAreas_ToolBarAreas
(void* __this_nativeId,
 int areas0)
{
    QFlags<Qt::ToolBarArea> __qt_areas0 = (QFlags<Qt::ToolBarArea>) areas0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->setAllowedAreas((Qt::ToolBarAreas )__qt_areas0);

}

// QToolBar::setFloatable(bool floatable)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_setFloatable_bool
(void* __this_nativeId,
 bool floatable0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->setFloatable((bool )floatable0);

}

// QToolBar::setIconSize(const QSize & iconSize)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_setIconSize_QSize
(void* __this_nativeId,
 QSize iconSize0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->setIconSize((const QSize& )iconSize0);

}

// QToolBar::setMovable(bool movable)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_setMovable_bool
(void* __this_nativeId,
 bool movable0)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->setMovable((bool )movable0);

}

// QToolBar::setOrientation(Qt::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_orientation0);

}

// QToolBar::setToolButtonStyle(Qt::ToolButtonStyle toolButtonStyle)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_setToolButtonStyle_ToolButtonStyle
(void* __this_nativeId,
 int toolButtonStyle0)
{
    Qt::ToolButtonStyle __qt_toolButtonStyle0 = (Qt::ToolButtonStyle) toolButtonStyle0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    __qt_this->setToolButtonStyle((Qt::ToolButtonStyle )__qt_toolButtonStyle0);

}

// QToolBar::toggleViewAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_toggleViewAction_const
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->toggleViewAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::toolButtonStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QToolBar_toolButtonStyle_const
(void* __this_nativeId)
{
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->toolButtonStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::widgetForAction(QAction * action) const
QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_widgetForAction_QAction_const
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widgetForAction((QAction* )__qt_action0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBar::actionEvent(QActionEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_actionEvent_QActionEvent
(void* __this_nativeId,
 void* event0)
{
    QActionEvent*  __qt_event0 = (QActionEvent* ) event0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_actionEvent((QActionEvent* )__qt_event0, __do_static_call);

}

// QToolBar::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QToolBar::childEvent(QChildEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_childEvent_QChildEvent
(void* __this_nativeId,
 void* event0)
{
    QChildEvent*  __qt_event0 = (QChildEvent* ) event0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_childEvent((QChildEvent* )__qt_event0, __do_static_call);

}

// QToolBar::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QToolBar_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBar::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// QToolBar::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QToolBar_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QToolBar_QtDShell *__qt_this = (QToolBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QToolBar_staticMetaObject() {
    return (void*)&QToolBar::staticMetaObject;
}


