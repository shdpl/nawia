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
#include <qgroupbox.h>
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

#include "QGroupBox_shell.h"
#include <iostream>
#include <qgroupbox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QGroupBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGroupBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_createEntity(void *nativeId, void* dId)
{
    new QGroupBoxEntity((QObject*)nativeId, dId);
}

QGroupBox_QtDShell::QGroupBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QGroupBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QGroupBox_QtDShell::QGroupBox_QtDShell(void *d_ptr, const QString&  title0, QWidget*  parent1)
    : QGroupBox(title0, parent1),
      QObjectLink(this, d_ptr)
{
}

QGroupBox_QtDShell::~QGroupBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGroupBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGroupBox::metaObject();
}

int QGroupBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGroupBox::qt_metacall(_c, _id, _a);
}

int QGroupBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGroupBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGroupBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::childEvent(QChildEvent*  event0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QGroupBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QGroupBox_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGroupBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QGroupBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QGroupBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QGroupBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QGroupBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QGroupBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGroupBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QGroupBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QGroupBox_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QGroupBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGroupBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QGroupBox_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGroupBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QGroupBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QGroupBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QGroupBox_QtDShell::__public_initStyleOption(QStyleOptionGroupBox*  option0) const
{
    QGroupBox::initStyleOption((QStyleOptionGroupBox* )option0);
}

void QGroupBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QGroupBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGroupBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QGroupBox_QtDShell::__public_clicked(bool  checked0)
{
    QGroupBox::clicked((bool )checked0);
}

void QGroupBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QGroupBox_QtDShell::__public_toggled(bool  arg__1)
{
    QGroupBox::toggled((bool )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QGroupBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QGroupBox_QtDShell::__override_childEvent(QChildEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::childEvent((QChildEvent* )event0);
    } else {
        childEvent((QChildEvent* )event0);
    }
}

void QGroupBox_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QGroupBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QGroupBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QGroupBox_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGroupBox::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QGroupBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QGroupBox_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QGroupBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QGroupBox_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QGroupBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QGroupBox_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QGroupBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QGroupBox_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QGroupBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QGroupBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QGroupBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QGroupBox::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QGroupBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QGroupBox_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QGroupBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

void QGroupBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QGroupBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QGroupBox_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QGroupBox_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QGroupBox::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QGroupBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QGroupBox_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QGroupBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QGroupBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QGroupBox_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QGroupBox::clicked(bool checked)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_clicked_bool
(void* __this_nativeId,
 bool checked0)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->__public_clicked((bool )checked0);

}

// QGroupBox::toggled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_toggled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->__public_toggled((bool )arg__1);

}

// ---externC---
// QGroupBox::QGroupBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGroupBox_QGroupBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QGroupBox_QtDShell *__qt_this = new QGroupBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QGroupBox::QGroupBox(const QString & title, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGroupBox_QGroupBox_string_QWidget
(void *d_ptr,
 DArray title0,
 void* parent1)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QGroupBox_QtDShell *__qt_this = new QGroupBox_QtDShell(d_ptr, (const QString& )__qt_title0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QGroupBox::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QGroupBox_alignment_const
(void* __this_nativeId)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGroupBox::initStyleOption(QStyleOptionGroupBox * option) const
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_initStyleOption_nativepointerQStyleOptionGroupBox_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionGroupBox*  __qt_option0 = (QStyleOptionGroupBox* ) option0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionGroupBox* )__qt_option0);

}

// QGroupBox::isCheckable() const
QTD_EXTERN QTD_EXPORT bool qtd_QGroupBox_isCheckable_const
(void* __this_nativeId)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCheckable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGroupBox::isChecked() const
QTD_EXTERN QTD_EXPORT bool qtd_QGroupBox_isChecked_const
(void* __this_nativeId)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isChecked();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGroupBox::isFlat() const
QTD_EXTERN QTD_EXPORT bool qtd_QGroupBox_isFlat_const
(void* __this_nativeId)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFlat();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGroupBox::setAlignment(int alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_setAlignment_int
(void* __this_nativeId,
 int alignment0)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((int )alignment0);

}

// QGroupBox::setCheckable(bool checkable)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_setCheckable_bool
(void* __this_nativeId,
 bool checkable0)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->setCheckable((bool )checkable0);

}

// QGroupBox::setChecked(bool checked)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_setChecked_bool
(void* __this_nativeId,
 bool checked0)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->setChecked((bool )checked0);

}

// QGroupBox::setFlat(bool flat)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_setFlat_bool
(void* __this_nativeId,
 bool flat0)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->setFlat((bool )flat0);

}

// QGroupBox::setTitle(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_setTitle_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    __qt_this->setTitle((const QString& )__qt_title0);

}

// QGroupBox::title() const
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QGroupBox::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QGroupBox::childEvent(QChildEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_childEvent_QChildEvent
(void* __this_nativeId,
 void* event0)
{
    QChildEvent*  __qt_event0 = (QChildEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_childEvent((QChildEvent* )__qt_event0, __do_static_call);

}

// QGroupBox::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGroupBox_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGroupBox::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGroupBox::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGroupBox::mouseMoveEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QGroupBox::mousePressEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QGroupBox::mouseReleaseEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QGroupBox::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// QGroupBox::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGroupBox_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QGroupBox_QtDShell *__qt_this = (QGroupBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGroupBox_staticMetaObject() {
    return (void*)&QGroupBox::staticMetaObject;
}


