#include <QVariant>
#include <qabstractbutton.h>
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

#include "QAbstractButton_shell.h"
#include <iostream>
#include <qabstractbutton.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QAbstractButtonEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractButtonEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_createEntity(void *nativeId, void* dId)
{
    new QAbstractButtonEntity((QObject*)nativeId, dId);
}

QAbstractButton_QtDShell::QAbstractButton_QtDShell(void *d_ptr, QWidget*  parent0)
    : QAbstractButton(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractButton_QtDShell::~QAbstractButton_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractButton_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractButton::metaObject();
}

int QAbstractButton_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractButton::qt_metacall(_c, _id, _a);
}

int QAbstractButton_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractButton::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractButton_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractButton_checkStateSet_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractButton_checkStateSet_dispatch)
void QAbstractButton_QtDShell::checkStateSet()
{
    qtd_QAbstractButton_checkStateSet_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QAbstractButton_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QAbstractButton_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractButton_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::focusInEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QAbstractButton_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::focusOutEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QAbstractButton_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QAbstractButton_hitButton_QPoint_const_dispatch, (void *dId, QPoint* pos0))
QTD_FUNC(GUI, QAbstractButton_hitButton_QPoint_const_dispatch)
bool  QAbstractButton_QtDShell::hitButton(const QPoint&  pos0) const
{
    return qtd_QAbstractButton_hitButton_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &(QPoint& )pos0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QAbstractButton_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::keyPressEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::keyReleaseEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QAbstractButton_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QAbstractButton_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractButton_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::mousePressEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractButton_nextCheckState_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractButton_nextCheckState_dispatch)
void QAbstractButton_QtDShell::nextCheckState()
{
    qtd_QAbstractButton_nextCheckState_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QAbstractButton_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QAbstractButton_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractButton_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* e0))
void QAbstractButton_QtDShell::timerEvent(QTimerEvent*  e0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QAbstractButton_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractButton_checkStateSet_dispatch = (qtd_QAbstractButton_checkStateSet_dispatch_t) virts[0];
    qtd_QAbstractButton_hitButton_QPoint_const_dispatch = (qtd_QAbstractButton_hitButton_QPoint_const_dispatch_t) virts[1];
    qtd_QAbstractButton_nextCheckState_dispatch = (qtd_QAbstractButton_nextCheckState_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QAbstractButton_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QAbstractButton_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QAbstractButton_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QAbstractButton_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QAbstractButton_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractButton_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QAbstractButton_QtDShell::__public_clicked(bool  checked0)
{
    QAbstractButton::clicked((bool )checked0);
}

void QAbstractButton_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QAbstractButton_QtDShell::__public_pressed()
{
    QAbstractButton::pressed();
}

void QAbstractButton_QtDShell::__public_released()
{
    QAbstractButton::released();
}

void QAbstractButton_QtDShell::__public_toggled(bool  checked0)
{
    QAbstractButton::toggled((bool )checked0);
}

// Write virtual function overries used to decide on static/virtual calls
void QAbstractButton_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_checkStateSet(bool static_call)
{
    if (static_call) {
        QAbstractButton::checkStateSet();
    } else {
        checkStateSet();
    }
}

void QAbstractButton_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QAbstractButton_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QAbstractButton_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QAbstractButton_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QAbstractButton::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QAbstractButton_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractButton_QtDShell::__override_focusInEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::focusInEvent((QFocusEvent* )e0);
    } else {
        focusInEvent((QFocusEvent* )e0);
    }
}

bool  QAbstractButton_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QAbstractButton_QtDShell::__override_focusOutEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::focusOutEvent((QFocusEvent* )e0);
    } else {
        focusOutEvent((QFocusEvent* )e0);
    }
}

int  QAbstractButton_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

bool  QAbstractButton_QtDShell::__override_hitButton(const QPoint&  pos0, bool static_call) const
{
    if (static_call) {
        return QAbstractButton::hitButton((const QPoint& )pos0);
    } else {
        return hitButton((const QPoint& )pos0);
    }
}

void QAbstractButton_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QAbstractButton_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_keyPressEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::keyPressEvent((QKeyEvent* )e0);
    } else {
        keyPressEvent((QKeyEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_keyReleaseEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::keyReleaseEvent((QKeyEvent* )e0);
    } else {
        keyReleaseEvent((QKeyEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QAbstractButton_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QAbstractButton_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QAbstractButton_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QAbstractButton_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_mousePressEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::mousePressEvent((QMouseEvent* )e0);
    } else {
        mousePressEvent((QMouseEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_nextCheckState(bool static_call)
{
    if (static_call) {
        QAbstractButton::nextCheckState();
    } else {
        nextCheckState();
    }
}

QPaintEngine*  QAbstractButton_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QAbstractButton_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QAbstractButton_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QAbstractButton_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QAbstractButton_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QAbstractButton_QtDShell::__override_timerEvent(QTimerEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractButton::timerEvent((QTimerEvent* )e0);
    } else {
        timerEvent((QTimerEvent* )e0);
    }
}

void QAbstractButton_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QAbstractButton::clicked(bool checked)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_clicked_bool
(void* __this_nativeId,
 bool checked0)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->__public_clicked((bool )checked0);

}

// QAbstractButton::pressed()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_pressed
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->__public_pressed();

}

// QAbstractButton::released()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_released
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->__public_released();

}

// QAbstractButton::toggled(bool checked)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_toggled_bool
(void* __this_nativeId,
 bool checked0)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->__public_toggled((bool )checked0);

}

// ---externC---
// QAbstractButton::QAbstractButton(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractButton_QAbstractButton_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QAbstractButton_QtDShell *__qt_this = new QAbstractButton_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractButton::animateClick(int msec)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_animateClick_int
(void* __this_nativeId,
 int msec0)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->animateClick((int )msec0);

}

// QAbstractButton::autoExclusive() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractButton_autoExclusive_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoExclusive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::autoRepeat() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractButton_autoRepeat_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoRepeat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::autoRepeatDelay() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractButton_autoRepeatDelay_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->autoRepeatDelay();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::autoRepeatInterval() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractButton_autoRepeatInterval_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->autoRepeatInterval();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::click()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_click
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->click();

}

// QAbstractButton::group() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractButton_group_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    QButtonGroup*  __qt_return_value = __qt_this->group();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractButton_icon_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QAbstractButton::iconSize() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_iconSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->iconSize();

    *__d_return_value = __qt_return_value;

}

// QAbstractButton::isCheckable() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractButton_isCheckable_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCheckable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::isChecked() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractButton_isChecked_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isChecked();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::isDown() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractButton_isDown_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDown();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::setAutoExclusive(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setAutoExclusive_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setAutoExclusive((bool )arg__1);

}

// QAbstractButton::setAutoRepeat(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setAutoRepeat_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setAutoRepeat((bool )arg__1);

}

// QAbstractButton::setAutoRepeatDelay(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setAutoRepeatDelay_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setAutoRepeatDelay((int )arg__1);

}

// QAbstractButton::setAutoRepeatInterval(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setAutoRepeatInterval_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setAutoRepeatInterval((int )arg__1);

}

// QAbstractButton::setCheckable(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setCheckable_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setCheckable((bool )arg__1);

}

// QAbstractButton::setChecked(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setChecked_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setChecked((bool )arg__1);

}

// QAbstractButton::setDown(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setDown_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setDown((bool )arg__1);

}

// QAbstractButton::setIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setIcon((const QIcon& )__qt_icon0);

}

// QAbstractButton::setIconSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setIconSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setIconSize((const QSize& )size0);

}

// QAbstractButton::setShortcut(const QKeySequence & key)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setShortcut_QKeySequence
(void* __this_nativeId,
 void* key0)
{
    const QKeySequence&  __qt_key0 = (const QKeySequence& ) *(QKeySequence *)key0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setShortcut((const QKeySequence& )__qt_key0);

}

// QAbstractButton::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QAbstractButton::shortcut() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractButton_shortcut_const
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    QKeySequence  __qt_return_value = __qt_this->shortcut();

    void* __d_return_value = (void*) new QKeySequence(__qt_return_value);

    return __d_return_value;
}

// QAbstractButton::text() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractButton::toggle()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_toggle
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    __qt_this->toggle();

}

// QAbstractButton::changeEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_changeEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::checkStateSet()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_checkStateSet
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_checkStateSet(__do_static_call);

}

// QAbstractButton::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractButton_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::focusInEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::focusOutEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::hitButton(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractButton_hitButton_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hitButton((const QPoint& )pos0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractButton::keyPressEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::keyReleaseEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::mouseMoveEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::mousePressEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::mouseReleaseEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::nextCheckState()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_nextCheckState
(void* __this_nativeId)
{
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_nextCheckState(__do_static_call);

}

// QAbstractButton::paintEvent(QPaintEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* e0)
{
    QPaintEvent*  __qt_e0 = (QPaintEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_e0, __do_static_call);

}

// QAbstractButton::timerEvent(QTimerEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractButton_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* e0)
{
    QTimerEvent*  __qt_e0 = (QTimerEvent* ) e0;
    QAbstractButton_QtDShell *__qt_this = (QAbstractButton_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_e0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractButton_staticMetaObject() {
    return (void*)&QAbstractButton::staticMetaObject;
}


