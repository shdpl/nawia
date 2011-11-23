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
#include <qprogressbar.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QProgressBar_shell.h"
#include <iostream>
#include <qprogressbar.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QProgressBarEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QProgressBarEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_createEntity(void *nativeId, void* dId)
{
    new QProgressBarEntity((QObject*)nativeId, dId);
}

QProgressBar_QtDShell::QProgressBar_QtDShell(void *d_ptr, QWidget*  parent0)
    : QProgressBar(parent0),
      QObjectLink(this, d_ptr)
{
}

QProgressBar_QtDShell::~QProgressBar_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QProgressBar_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QProgressBar::metaObject();
}

int QProgressBar_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QProgressBar::qt_metacall(_c, _id, _a);
}

int QProgressBar_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QProgressBar::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QProgressBar_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QProgressBar_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QProgressBar_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QProgressBar_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QProgressBar_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QProgressBar_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QProgressBar_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QProgressBar_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QProgressBar_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QProgressBar_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QProgressBar_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QProgressBar_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QProgressBar_text_const_dispatch, (void *dId, DArray* ret_str))
QTD_FUNC(GUI, QProgressBar_text_const_dispatch)
QString  QProgressBar_QtDShell::text() const
{
    DArray ret_str;
    qtd_QProgressBar_text_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QProgressBar_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_initCallBacks(VoidFunc *virts) {
    qtd_QProgressBar_text_const_dispatch = (qtd_QProgressBar_text_const_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QProgressBar_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QProgressBar_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QProgressBar_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QProgressBar_QtDShell::__public_initStyleOption(QStyleOptionProgressBar*  option0) const
{
    QProgressBar::initStyleOption((QStyleOptionProgressBar* )option0);
}

void QProgressBar_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QProgressBar_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QProgressBar_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QProgressBar_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QProgressBar_QtDShell::__public_valueChanged(int  value0)
{
    QProgressBar::valueChanged((int )value0);
}

// Write virtual function overries used to decide on static/virtual calls
void QProgressBar_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QProgressBar_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QProgressBar_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QProgressBar_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QProgressBar::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QProgressBar_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QProgressBar_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QProgressBar_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QProgressBar_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QProgressBar_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QProgressBar_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QProgressBar_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QProgressBar_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QProgressBar_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QProgressBar_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QProgressBar_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QProgressBar::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QProgressBar_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QProgressBar_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QProgressBar_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QProgressBar::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QProgressBar_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QProgressBar_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QProgressBar::sizeHint();
    } else {
        return sizeHint();
    }
}

void QProgressBar_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

QString  QProgressBar_QtDShell::__override_text(bool static_call) const
{
    if (static_call) {
        return QProgressBar::text();
    } else {
        return text();
    }
}

void QProgressBar_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QProgressBar_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QProgressBar::valueChanged(int value)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_valueChanged_int
(void* __this_nativeId,
 int value0)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->__public_valueChanged((int )value0);

}

// ---externC---
// QProgressBar::QProgressBar(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QProgressBar_QProgressBar_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QProgressBar_QtDShell *__qt_this = new QProgressBar_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QProgressBar::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_alignment_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::format() const
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_format_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->format();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QProgressBar::initStyleOption(QStyleOptionProgressBar * option) const
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_initStyleOption_nativepointerQStyleOptionProgressBar_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionProgressBar*  __qt_option0 = (QStyleOptionProgressBar* ) option0;
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionProgressBar* )__qt_option0);

}

// QProgressBar::invertedAppearance()
QTD_EXTERN QTD_EXPORT bool qtd_QProgressBar_invertedAppearance
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->invertedAppearance();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::invertedAppearance() const
QTD_EXTERN QTD_EXPORT bool qtd_QProgressBar_invertedAppearance_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->invertedAppearance();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::isTextVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QProgressBar_isTextVisible_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTextVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::maximum() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_maximum_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::minimum() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_minimum_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_orientation_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::reset()
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_reset
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->reset();

}

// QProgressBar::setAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_alignment0);

}

// QProgressBar::setFormat(const QString & format)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setFormat_string
(void* __this_nativeId,
 DArray format0)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QString& )__qt_format0);

}

// QProgressBar::setInvertedAppearance(bool invert)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setInvertedAppearance_bool
(void* __this_nativeId,
 bool invert0)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setInvertedAppearance((bool )invert0);

}

// QProgressBar::setMaximum(int maximum)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setMaximum_int
(void* __this_nativeId,
 int maximum0)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setMaximum((int )maximum0);

}

// QProgressBar::setMinimum(int minimum)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setMinimum_int
(void* __this_nativeId,
 int minimum0)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setMinimum((int )minimum0);

}

// QProgressBar::setOrientation(Qt::Orientation arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setOrientation_Orientation
(void* __this_nativeId,
 int arg__1)
{
    Qt::Orientation __qt_arg__1 = (Qt::Orientation) arg__1;
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_arg__1);

}

// QProgressBar::setRange(int minimum, int maximum)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setRange_int_int
(void* __this_nativeId,
 int minimum0,
 int maximum1)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setRange((int )minimum0, (int )maximum1);

}

// QProgressBar::setTextDirection(QProgressBar::Direction textDirection)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setTextDirection_Direction
(void* __this_nativeId,
 int textDirection0)
{
    QProgressBar::Direction __qt_textDirection0 = (QProgressBar::Direction) textDirection0;
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setTextDirection((QProgressBar::Direction )__qt_textDirection0);

}

// QProgressBar::setTextVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setTextVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setTextVisible((bool )visible0);

}

// QProgressBar::setValue(int value)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_setValue_int
(void* __this_nativeId,
 int value0)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    __qt_this->setValue((int )value0);

}

// QProgressBar::textDirection()
QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_textDirection
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::textDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_textDirection_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::value() const
QTD_EXTERN QTD_EXPORT int qtd_QProgressBar_value_const
(void* __this_nativeId)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->value();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QProgressBar_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProgressBar::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QProgressBar::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QProgressBar::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QProgressBar::text() const
QTD_EXTERN QTD_EXPORT void qtd_QProgressBar_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QProgressBar_QtDShell *__qt_this = (QProgressBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_text(__do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QProgressBar_staticMetaObject() {
    return (void*)&QProgressBar::staticMetaObject;
}


