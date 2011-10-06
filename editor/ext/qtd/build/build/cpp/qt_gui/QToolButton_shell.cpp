#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
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
#include <qtoolbutton.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QToolButton_shell.h"
#include <iostream>
#include <qtoolbutton.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QToolButtonEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QToolButtonEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QToolButton_createEntity(void *nativeId, void* dId)
{
    new QToolButtonEntity((QObject*)nativeId, dId);
}

QToolButton_QtDShell::QToolButton_QtDShell(void *d_ptr, QWidget*  parent0)
    : QToolButton(parent0),
      QObjectLink(this, d_ptr)
{
}

QToolButton_QtDShell::~QToolButton_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QToolButton_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QToolButton::metaObject();
}

int QToolButton_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QToolButton::qt_metacall(_c, _id, _a);
}

int QToolButton_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QToolButton::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QToolButton_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractButton_checkStateSet_dispatch, (void *dId))
void QToolButton_QtDShell::checkStateSet()
{
    qtd_QAbstractButton_checkStateSet_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QToolButton_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QToolButton_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QToolButton_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QToolButton_QtDShell::focusInEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QToolButton_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QToolButton_QtDShell::focusOutEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QToolButton_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QAbstractButton_hitButton_QPoint_const_dispatch, (void *dId, QPoint* pos0))
bool  QToolButton_QtDShell::hitButton(const QPoint&  pos0) const
{
    return qtd_QAbstractButton_hitButton_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &(QPoint& )pos0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QToolButton_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QToolButton_QtDShell::keyPressEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QToolButton_QtDShell::keyReleaseEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QToolButton_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QToolButton_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QToolButton_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QToolButton_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractButton_nextCheckState_dispatch, (void *dId))
void QToolButton_QtDShell::nextCheckState()
{
    qtd_QAbstractButton_nextCheckState_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QToolButton_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QToolButton_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QToolButton_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QToolButton_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QToolButton_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QToolButton_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QToolButton_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QToolButton_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QToolButton_QtDShell::__public_initStyleOption(QStyleOptionToolButton*  option0) const
{
    QToolButton::initStyleOption((QStyleOptionToolButton* )option0);
}

void QToolButton_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QToolButton_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QToolButton_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QToolButton_QtDShell::__public_clicked(bool  checked0)
{
    QAbstractButton::clicked((bool )checked0);
}

void QToolButton_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QToolButton_QtDShell::__public_pressed()
{
    QAbstractButton::pressed();
}

void QToolButton_QtDShell::__public_released()
{
    QAbstractButton::released();
}

void QToolButton_QtDShell::__public_toggled(bool  checked0)
{
    QAbstractButton::toggled((bool )checked0);
}

void QToolButton_QtDShell::__public_triggered(QAction*  arg__1)
{
    QToolButton::triggered((QAction* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QToolButton_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_checkStateSet(bool static_call)
{
    if (static_call) {
        QAbstractButton::checkStateSet();
    } else {
        checkStateSet();
    }
}

void QToolButton_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QToolButton_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QToolButton_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QToolButton_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QToolButton::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QToolButton_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QToolButton_QtDShell::__override_focusInEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::focusInEvent((QFocusEvent* )e0);
    } else {
        focusInEvent((QFocusEvent* )e0);
    }
}

bool  QToolButton_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QToolButton_QtDShell::__override_focusOutEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::focusOutEvent((QFocusEvent* )e0);
    } else {
        focusOutEvent((QFocusEvent* )e0);
    }
}

int  QToolButton_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QToolButton_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

bool  QToolButton_QtDShell::__override_hitButton(const QPoint&  pos0, bool static_call) const
{
    if (static_call) {
        return QToolButton::hitButton((const QPoint& )pos0);
    } else {
        return hitButton((const QPoint& )pos0);
    }
}

void QToolButton_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QToolButton_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QToolButton_QtDShell::__override_keyPressEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::keyPressEvent((QKeyEvent* )e0);
    } else {
        keyPressEvent((QKeyEvent* )e0);
    }
}

void QToolButton_QtDShell::__override_keyReleaseEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::keyReleaseEvent((QKeyEvent* )e0);
    } else {
        keyReleaseEvent((QKeyEvent* )e0);
    }
}

void QToolButton_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QToolButton_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QToolButton_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QToolButton_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QToolButton::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QToolButton_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QToolButton_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_nextCheckState(bool static_call)
{
    if (static_call) {
        QToolButton::nextCheckState();
    } else {
        nextCheckState();
    }
}

QPaintEngine*  QToolButton_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QToolButton_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QToolButton_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QToolButton_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QToolButton::sizeHint();
    } else {
        return sizeHint();
    }
}

void QToolButton_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolButton::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QToolButton_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QToolButton::triggered(QAction * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_triggered_QAction
(void* __this_nativeId,
 void* arg__1)
{
    QAction*  __qt_arg__1 = (QAction* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->__public_triggered((QAction* )__qt_arg__1);

}

// ---externC---
// QToolButton::QToolButton(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QToolButton_QToolButton_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QToolButton_QtDShell *__qt_this = new QToolButton_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QToolButton::arrowType() const
QTD_EXTERN QTD_EXPORT int qtd_QToolButton_arrowType_const
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->arrowType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolButton::autoRaise() const
QTD_EXTERN QTD_EXPORT bool qtd_QToolButton_autoRaise_const
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoRaise();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolButton::defaultAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QToolButton_defaultAction_const
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->defaultAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolButton::initStyleOption(QStyleOptionToolButton * option) const
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_initStyleOption_nativepointerQStyleOptionToolButton_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionToolButton*  __qt_option0 = (QStyleOptionToolButton* ) option0;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionToolButton* )__qt_option0);

}

// QToolButton::menu() const
QTD_EXTERN QTD_EXPORT void* qtd_QToolButton_menu_const
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->menu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolButton::popupMode() const
QTD_EXTERN QTD_EXPORT int qtd_QToolButton_popupMode_const
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->popupMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolButton::setArrowType(Qt::ArrowType type)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_setArrowType_ArrowType
(void* __this_nativeId,
 int type0)
{
    Qt::ArrowType __qt_type0 = (Qt::ArrowType) type0;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->setArrowType((Qt::ArrowType )__qt_type0);

}

// QToolButton::setAutoRaise(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_setAutoRaise_bool
(void* __this_nativeId,
 bool enable0)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->setAutoRaise((bool )enable0);

}

// QToolButton::setDefaultAction(QAction * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_setDefaultAction_QAction
(void* __this_nativeId,
 void* arg__1)
{
    QAction*  __qt_arg__1 = (QAction* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->setDefaultAction((QAction* )__qt_arg__1);

}

// QToolButton::setMenu(QMenu * menu)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_setMenu_QMenu
(void* __this_nativeId,
 void* menu0)
{
    QMenu*  __qt_menu0 = (QMenu* ) menu0;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->setMenu((QMenu* )__qt_menu0);

}

// QToolButton::setPopupMode(QToolButton::ToolButtonPopupMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_setPopupMode_ToolButtonPopupMode
(void* __this_nativeId,
 int mode0)
{
    QToolButton::ToolButtonPopupMode __qt_mode0 = (QToolButton::ToolButtonPopupMode) mode0;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->setPopupMode((QToolButton::ToolButtonPopupMode )__qt_mode0);

}

// QToolButton::setToolButtonStyle(Qt::ToolButtonStyle style)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_setToolButtonStyle_ToolButtonStyle
(void* __this_nativeId,
 int style0)
{
    Qt::ToolButtonStyle __qt_style0 = (Qt::ToolButtonStyle) style0;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->setToolButtonStyle((Qt::ToolButtonStyle )__qt_style0);

}

// QToolButton::showMenu()
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_showMenu
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    __qt_this->showMenu();

}

// QToolButton::toolButtonStyle() const
QTD_EXTERN QTD_EXPORT int qtd_QToolButton_toolButtonStyle_const
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->toolButtonStyle();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolButton::actionEvent(QActionEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_actionEvent_QActionEvent
(void* __this_nativeId,
 void* arg__1)
{
    QActionEvent*  __qt_arg__1 = (QActionEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_actionEvent((QActionEvent* )__qt_arg__1, __do_static_call);

}

// QToolButton::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QToolButton::enterEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_enterEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_enterEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QToolButton::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QToolButton_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolButton::hitButton(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT bool qtd_QToolButton_hitButton_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hitButton((const QPoint& )pos0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolButton::leaveEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_leaveEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_leaveEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QToolButton::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QToolButton::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QToolButton::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QToolButton::nextCheckState()
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_nextCheckState
(void* __this_nativeId)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_nextCheckState(__do_static_call);

}

// QToolButton::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QToolButton::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QToolButton::timerEvent(QTimerEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolButton_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* arg__1)
{
    QTimerEvent*  __qt_arg__1 = (QTimerEvent* ) arg__1;
    QToolButton_QtDShell *__qt_this = (QToolButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_arg__1, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QToolButton_staticMetaObject() {
    return (void*)&QToolButton::staticMetaObject;
}


