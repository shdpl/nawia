#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdial.h>
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
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QDial_shell.h"
#include <iostream>
#include <qdial.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDialEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDialEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDial_createEntity(void *nativeId, void* dId)
{
    new QDialEntity((QObject*)nativeId, dId);
}

QDial_QtDShell::QDial_QtDShell(void *d_ptr, QWidget*  parent0)
    : QDial(parent0),
      QObjectLink(this, d_ptr)
{
}

QDial_QtDShell::~QDial_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDial_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDial::metaObject();
}

int QDial_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDial::qt_metacall(_c, _id, _a);
}

int QDial_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDial::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDial_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QDial_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QDial_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QDial_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDial_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QDial_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QDial_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QDial_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* ev0))
void QDial_QtDShell::keyPressEvent(QKeyEvent*  ev0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )ev0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QDial_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QDial_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDial_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* me0))
void QDial_QtDShell::mouseMoveEvent(QMouseEvent*  me0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )me0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* me0))
void QDial_QtDShell::mousePressEvent(QMouseEvent*  me0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )me0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* me0))
void QDial_QtDShell::mouseReleaseEvent(QMouseEvent*  me0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )me0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QDial_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* pe0))
void QDial_QtDShell::paintEvent(QPaintEvent*  pe0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )pe0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* re0))
void QDial_QtDShell::resizeEvent(QResizeEvent*  re0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )re0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QDial_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDial_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractSlider_sliderChange_SliderChange_dispatch, (void *dId, int change0))
void QDial_QtDShell::sliderChange(QAbstractSlider::SliderChange  change0)
{
    qtd_QAbstractSlider_sliderChange_SliderChange_dispatch(QObjectLink::getLink(this)->dId, (QAbstractSlider::SliderChange )change0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QDial_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* e0))
void QDial_QtDShell::wheelEvent(QWheelEvent*  e0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QDial_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QDial_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QDial_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QDial_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QDial_QtDShell::__public_initStyleOption(QStyleOptionSlider*  option0) const
{
    QDial::initStyleOption((QStyleOptionSlider* )option0);
}

int  QDial_QtDShell::__public_repeatAction() const
{
    return QAbstractSlider::repeatAction();
}

void QDial_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QDial_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDial_QtDShell::__public_setRepeatAction(int  action0, int  thresholdTime1, int  repeatTime2)
{
    QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction )action0, (int )thresholdTime1, (int )repeatTime2);
}

void QDial_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QDial_QtDShell::__public_actionTriggered(int  action0)
{
    QAbstractSlider::actionTriggered((int )action0);
}

void QDial_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QDial_QtDShell::__public_rangeChanged(int  min0, int  max1)
{
    QAbstractSlider::rangeChanged((int )min0, (int )max1);
}

void QDial_QtDShell::__public_sliderMoved(int  position0)
{
    QAbstractSlider::sliderMoved((int )position0);
}

void QDial_QtDShell::__public_sliderPressed()
{
    QAbstractSlider::sliderPressed();
}

void QDial_QtDShell::__public_sliderReleased()
{
    QAbstractSlider::sliderReleased();
}

void QDial_QtDShell::__public_valueChanged(int  value0)
{
    QAbstractSlider::valueChanged((int )value0);
}

// Write virtual function overries used to decide on static/virtual calls
void QDial_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractSlider::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QDial_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QDial_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QDial_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QDial_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QDial::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QDial_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDial_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QDial_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QDial_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QDial_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QDial_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QDial_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QDial_QtDShell::__override_keyPressEvent(QKeyEvent*  ev0, bool static_call)
{
    if (static_call) {
        QAbstractSlider::keyPressEvent((QKeyEvent* )ev0);
    } else {
        keyPressEvent((QKeyEvent* )ev0);
    }
}

void QDial_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QDial_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QDial_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QDial_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QDial::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QDial_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_mouseMoveEvent(QMouseEvent*  me0, bool static_call)
{
    if (static_call) {
        QDial::mouseMoveEvent((QMouseEvent* )me0);
    } else {
        mouseMoveEvent((QMouseEvent* )me0);
    }
}

void QDial_QtDShell::__override_mousePressEvent(QMouseEvent*  me0, bool static_call)
{
    if (static_call) {
        QDial::mousePressEvent((QMouseEvent* )me0);
    } else {
        mousePressEvent((QMouseEvent* )me0);
    }
}

void QDial_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  me0, bool static_call)
{
    if (static_call) {
        QDial::mouseReleaseEvent((QMouseEvent* )me0);
    } else {
        mouseReleaseEvent((QMouseEvent* )me0);
    }
}

void QDial_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QDial_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QDial_QtDShell::__override_paintEvent(QPaintEvent*  pe0, bool static_call)
{
    if (static_call) {
        QDial::paintEvent((QPaintEvent* )pe0);
    } else {
        paintEvent((QPaintEvent* )pe0);
    }
}

void QDial_QtDShell::__override_resizeEvent(QResizeEvent*  re0, bool static_call)
{
    if (static_call) {
        QDial::resizeEvent((QResizeEvent* )re0);
    } else {
        resizeEvent((QResizeEvent* )re0);
    }
}

void QDial_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QDial_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QDial_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QDial::sizeHint();
    } else {
        return sizeHint();
    }
}

void QDial_QtDShell::__override_sliderChange(int  change0, bool static_call)
{
    if (static_call) {
        QDial::sliderChange((QAbstractSlider::SliderChange )change0);
    } else {
        sliderChange((QAbstractSlider::SliderChange )change0);
    }
}

void QDial_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractSlider::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QDial_QtDShell::__override_wheelEvent(QWheelEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractSlider::wheelEvent((QWheelEvent* )e0);
    } else {
        wheelEvent((QWheelEvent* )e0);
    }
}

// ---externC---
// QDial::QDial(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDial_QDial_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QDial_QtDShell *__qt_this = new QDial_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QDial::initStyleOption(QStyleOptionSlider * option) const
QTD_EXTERN QTD_EXPORT void qtd_QDial_initStyleOption_nativepointerQStyleOptionSlider_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionSlider*  __qt_option0 = (QStyleOptionSlider* ) option0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionSlider* )__qt_option0);

}

// QDial::notchSize() const
QTD_EXTERN QTD_EXPORT int qtd_QDial_notchSize_const
(void* __this_nativeId)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->notchSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDial::notchTarget() const
QTD_EXTERN QTD_EXPORT double qtd_QDial_notchTarget_const
(void* __this_nativeId)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->notchTarget();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDial::notchesVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QDial_notchesVisible_const
(void* __this_nativeId)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->notchesVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDial::setNotchTarget(double target)
QTD_EXTERN QTD_EXPORT void qtd_QDial_setNotchTarget_double
(void* __this_nativeId,
 double target0)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    __qt_this->setNotchTarget((double )target0);

}

// QDial::setNotchesVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QDial_setNotchesVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    __qt_this->setNotchesVisible((bool )visible0);

}

// QDial::setWrapping(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QDial_setWrapping_bool
(void* __this_nativeId,
 bool on0)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    __qt_this->setWrapping((bool )on0);

}

// QDial::wrapping() const
QTD_EXTERN QTD_EXPORT bool qtd_QDial_wrapping_const
(void* __this_nativeId)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wrapping();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDial::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QDial_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDial::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QDial_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QDial::mouseMoveEvent(QMouseEvent * me)
QTD_EXTERN QTD_EXPORT void qtd_QDial_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* me0)
{
    QMouseEvent*  __qt_me0 = (QMouseEvent* ) me0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_me0, __do_static_call);

}

// QDial::mousePressEvent(QMouseEvent * me)
QTD_EXTERN QTD_EXPORT void qtd_QDial_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* me0)
{
    QMouseEvent*  __qt_me0 = (QMouseEvent* ) me0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_me0, __do_static_call);

}

// QDial::mouseReleaseEvent(QMouseEvent * me)
QTD_EXTERN QTD_EXPORT void qtd_QDial_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* me0)
{
    QMouseEvent*  __qt_me0 = (QMouseEvent* ) me0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_me0, __do_static_call);

}

// QDial::paintEvent(QPaintEvent * pe)
QTD_EXTERN QTD_EXPORT void qtd_QDial_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* pe0)
{
    QPaintEvent*  __qt_pe0 = (QPaintEvent* ) pe0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_pe0, __do_static_call);

}

// QDial::resizeEvent(QResizeEvent * re)
QTD_EXTERN QTD_EXPORT void qtd_QDial_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* re0)
{
    QResizeEvent*  __qt_re0 = (QResizeEvent* ) re0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_re0, __do_static_call);

}

// QDial::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QDial_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QDial::sliderChange(QAbstractSlider::SliderChange change)
QTD_EXTERN QTD_EXPORT void qtd_QDial_sliderChange_SliderChange
(void* __this_nativeId,
 int change0)
{
    int __qt_change0 = change0;
    QDial_QtDShell *__qt_this = (QDial_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sliderChange(__qt_change0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDial_staticMetaObject() {
    return (void*)&QDial::staticMetaObject;
}


