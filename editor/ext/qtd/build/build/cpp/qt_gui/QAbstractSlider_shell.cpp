#include <QVariant>
#include <qabstractslider.h>
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
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QAbstractSlider_shell.h"
#include <iostream>
#include <qabstractslider.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QAbstractSliderEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractSliderEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_createEntity(void *nativeId, void* dId)
{
    new QAbstractSliderEntity((QObject*)nativeId, dId);
}

QAbstractSlider_QtDShell::QAbstractSlider_QtDShell(void *d_ptr, QWidget*  parent0)
    : QAbstractSlider(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractSlider_QtDShell::~QAbstractSlider_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractSlider_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractSlider::metaObject();
}

int QAbstractSlider_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractSlider::qt_metacall(_c, _id, _a);
}

int QAbstractSlider_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractSlider::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QAbstractSlider_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QAbstractSlider_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QAbstractSlider_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractSlider_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QAbstractSlider_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QAbstractSlider_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QAbstractSlider_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* ev0))
void QAbstractSlider_QtDShell::keyPressEvent(QKeyEvent*  ev0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )ev0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QAbstractSlider_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QAbstractSlider_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractSlider_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QAbstractSlider_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QAbstractSlider_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractSlider_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractSlider_sliderChange_SliderChange_dispatch, (void *dId, int change0))
QTD_FUNC(GUI, QAbstractSlider_sliderChange_SliderChange_dispatch)
void QAbstractSlider_QtDShell::sliderChange(QAbstractSlider::SliderChange  change0)
{
    qtd_QAbstractSlider_sliderChange_SliderChange_dispatch(QObjectLink::getLink(this)->dId, (QAbstractSlider::SliderChange )change0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSlider_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* e0))
void QAbstractSlider_QtDShell::wheelEvent(QWheelEvent*  e0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractSlider_sliderChange_SliderChange_dispatch = (qtd_QAbstractSlider_sliderChange_SliderChange_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QAbstractSlider_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QAbstractSlider_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QAbstractSlider_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

int  QAbstractSlider_QtDShell::__public_repeatAction() const
{
    return QAbstractSlider::repeatAction();
}

void QAbstractSlider_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QAbstractSlider_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractSlider_QtDShell::__public_setRepeatAction(int  action0, int  thresholdTime1, int  repeatTime2)
{
    QAbstractSlider::setRepeatAction((QAbstractSlider::SliderAction )action0, (int )thresholdTime1, (int )repeatTime2);
}

void QAbstractSlider_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QAbstractSlider_QtDShell::__public_actionTriggered(int  action0)
{
    QAbstractSlider::actionTriggered((int )action0);
}

void QAbstractSlider_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QAbstractSlider_QtDShell::__public_rangeChanged(int  min0, int  max1)
{
    QAbstractSlider::rangeChanged((int )min0, (int )max1);
}

void QAbstractSlider_QtDShell::__public_sliderMoved(int  position0)
{
    QAbstractSlider::sliderMoved((int )position0);
}

void QAbstractSlider_QtDShell::__public_sliderPressed()
{
    QAbstractSlider::sliderPressed();
}

void QAbstractSlider_QtDShell::__public_sliderReleased()
{
    QAbstractSlider::sliderReleased();
}

void QAbstractSlider_QtDShell::__public_valueChanged(int  value0)
{
    QAbstractSlider::valueChanged((int )value0);
}

// Write virtual function overries used to decide on static/virtual calls
void QAbstractSlider_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractSlider::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QAbstractSlider_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QAbstractSlider_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QAbstractSlider_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QAbstractSlider_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QAbstractSlider::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QAbstractSlider_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractSlider_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QAbstractSlider_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QAbstractSlider_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QAbstractSlider_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QAbstractSlider_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_keyPressEvent(QKeyEvent*  ev0, bool static_call)
{
    if (static_call) {
        QAbstractSlider::keyPressEvent((QKeyEvent* )ev0);
    } else {
        keyPressEvent((QKeyEvent* )ev0);
    }
}

void QAbstractSlider_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QAbstractSlider_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QAbstractSlider_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QAbstractSlider_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QAbstractSlider_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QAbstractSlider_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QAbstractSlider_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QAbstractSlider_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QAbstractSlider_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QAbstractSlider_QtDShell::__override_sliderChange(int  change0, bool static_call)
{
    if (static_call) {
        QAbstractSlider::sliderChange((QAbstractSlider::SliderChange )change0);
    } else {
        sliderChange((QAbstractSlider::SliderChange )change0);
    }
}

void QAbstractSlider_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractSlider::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QAbstractSlider_QtDShell::__override_wheelEvent(QWheelEvent*  e0, bool static_call)
{
    if (static_call) {
        QAbstractSlider::wheelEvent((QWheelEvent* )e0);
    } else {
        wheelEvent((QWheelEvent* )e0);
    }
}

// QAbstractSlider::actionTriggered(int action)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_actionTriggered_int
(void* __this_nativeId,
 int action0)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->__public_actionTriggered((int )action0);

}

// QAbstractSlider::rangeChanged(int min, int max)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_rangeChanged_int_int
(void* __this_nativeId,
 int min0,
 int max1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->__public_rangeChanged((int )min0, (int )max1);

}

// QAbstractSlider::sliderMoved(int position)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_sliderMoved_int
(void* __this_nativeId,
 int position0)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->__public_sliderMoved((int )position0);

}

// QAbstractSlider::sliderPressed()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_sliderPressed
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->__public_sliderPressed();

}

// QAbstractSlider::sliderReleased()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_sliderReleased
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->__public_sliderReleased();

}

// QAbstractSlider::valueChanged(int value)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_valueChanged_int
(void* __this_nativeId,
 int value0)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->__public_valueChanged((int )value0);

}

// ---externC---
// QAbstractSlider::QAbstractSlider(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSlider_QAbstractSlider_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QAbstractSlider_QtDShell *__qt_this = new QAbstractSlider_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractSlider::hasTracking() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSlider_hasTracking_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasTracking();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::invertedAppearance() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSlider_invertedAppearance_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->invertedAppearance();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::invertedControls() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSlider_invertedControls_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->invertedControls();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::isSliderDown() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSlider_isSliderDown_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSliderDown();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::maximum() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_maximum_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::minimum() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_minimum_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_orientation_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::pageStep() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_pageStep_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pageStep();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::repeatAction() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_repeatAction_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_repeatAction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::setInvertedAppearance(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setInvertedAppearance_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setInvertedAppearance((bool )arg__1);

}

// QAbstractSlider::setInvertedControls(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setInvertedControls_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setInvertedControls((bool )arg__1);

}

// QAbstractSlider::setMaximum(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setMaximum_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setMaximum((int )arg__1);

}

// QAbstractSlider::setMinimum(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setMinimum_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setMinimum((int )arg__1);

}

// QAbstractSlider::setOrientation(Qt::Orientation arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setOrientation_Orientation
(void* __this_nativeId,
 int arg__1)
{
    Qt::Orientation __qt_arg__1 = (Qt::Orientation) arg__1;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_arg__1);

}

// QAbstractSlider::setPageStep(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setPageStep_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setPageStep((int )arg__1);

}

// QAbstractSlider::setRange(int min, int max)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setRange_int_int
(void* __this_nativeId,
 int min0,
 int max1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setRange((int )min0, (int )max1);

}

// QAbstractSlider::setRepeatAction(QAbstractSlider::SliderAction action, int thresholdTime, int repeatTime)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setRepeatAction_SliderAction_int_int
(void* __this_nativeId,
 int action0,
 int thresholdTime1,
 int repeatTime2)
{
    QAbstractSlider::SliderAction __qt_action0 = (QAbstractSlider::SliderAction) action0;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->__public_setRepeatAction((QAbstractSlider::SliderAction )__qt_action0, (int )thresholdTime1, (int )repeatTime2);

}

// QAbstractSlider::setSingleStep(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setSingleStep_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setSingleStep((int )arg__1);

}

// QAbstractSlider::setSliderDown(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setSliderDown_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setSliderDown((bool )arg__1);

}

// QAbstractSlider::setSliderPosition(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setSliderPosition_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setSliderPosition((int )arg__1);

}

// QAbstractSlider::setTracking(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setTracking_bool
(void* __this_nativeId,
 bool enable0)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setTracking((bool )enable0);

}

// QAbstractSlider::setValue(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_setValue_int
(void* __this_nativeId,
 int arg__1)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->setValue((int )arg__1);

}

// QAbstractSlider::singleStep() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_singleStep_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->singleStep();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::sliderPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_sliderPosition_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sliderPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::triggerAction(QAbstractSlider::SliderAction action)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_triggerAction_SliderAction
(void* __this_nativeId,
 int action0)
{
    QAbstractSlider::SliderAction __qt_action0 = (QAbstractSlider::SliderAction) action0;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    __qt_this->triggerAction((QAbstractSlider::SliderAction )__qt_action0);

}

// QAbstractSlider::value() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSlider_value_const
(void* __this_nativeId)
{
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->value();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::changeEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_changeEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_e0, __do_static_call);

}

// QAbstractSlider::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSlider_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSlider::keyPressEvent(QKeyEvent * ev)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* ev0)
{
    QKeyEvent*  __qt_ev0 = (QKeyEvent* ) ev0;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_ev0, __do_static_call);

}

// QAbstractSlider::sliderChange(QAbstractSlider::SliderChange change)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_sliderChange_SliderChange
(void* __this_nativeId,
 int change0)
{
    int __qt_change0 = change0;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sliderChange(__qt_change0, __do_static_call);

}

// QAbstractSlider::timerEvent(QTimerEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* arg__1)
{
    QTimerEvent*  __qt_arg__1 = (QTimerEvent* ) arg__1;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractSlider::wheelEvent(QWheelEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSlider_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* e0)
{
    QWheelEvent*  __qt_e0 = (QWheelEvent* ) e0;
    QAbstractSlider_QtDShell *__qt_this = (QAbstractSlider_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_e0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSlider_staticMetaObject() {
    return (void*)&QAbstractSlider::staticMetaObject;
}


