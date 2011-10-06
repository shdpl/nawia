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
#include <qscrollarea.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QScrollArea_shell.h"
#include <iostream>
#include <qscrollarea.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QScrollAreaEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QScrollAreaEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_createEntity(void *nativeId, void* dId)
{
    new QScrollAreaEntity((QObject*)nativeId, dId);
}

QScrollArea_QtDShell::QScrollArea_QtDShell(void *d_ptr, QWidget*  parent0)
    : QScrollArea(parent0),
      QObjectLink(this, d_ptr)
{
}

QScrollArea_QtDShell::~QScrollArea_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QScrollArea_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QScrollArea::metaObject();
}

int QScrollArea_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QScrollArea::qt_metacall(_c, _id, _a);
}

int QScrollArea_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QScrollArea::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QScrollArea_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QScrollArea_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QScrollArea_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QScrollArea_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QScrollArea_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QScrollArea_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QScrollArea_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QScrollArea_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QScrollArea_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QScrollArea_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QScrollArea_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QScrollArea_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QScrollArea_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QScrollArea_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* arg__1))
bool  QScrollArea_QtDShell::viewportEvent(QEvent*  arg__1)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QScrollArea_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QScrollArea_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QScrollArea_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QScrollArea_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QScrollArea_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QScrollArea_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QScrollArea_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QScrollArea_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QScrollArea_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QScrollArea_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QScrollArea_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

// Write virtual function overries used to decide on static/virtual calls
void QScrollArea_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QScrollArea_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QScrollArea_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QScrollArea_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QScrollArea::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QScrollArea_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QScrollArea::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QScrollArea_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QScrollArea_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QScrollArea::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QScrollArea_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QScrollArea_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QScrollArea_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QScrollArea_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QScrollArea_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QScrollArea_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QScrollArea_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QScrollArea_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QScrollArea_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QScrollArea_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QScrollArea_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QScrollArea::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QScrollArea::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QScrollArea_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QScrollArea_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QScrollArea_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

void QScrollArea_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QScrollArea_QtDShell::__override_viewportEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QAbstractScrollArea::viewportEvent((QEvent* )arg__1);
    } else {
        return viewportEvent((QEvent* )arg__1);
    }
}

void QScrollArea_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// ---externC---
// QScrollArea::QScrollArea(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QScrollArea_QScrollArea_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QScrollArea_QtDShell *__qt_this = new QScrollArea_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QScrollArea::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QScrollArea_alignment_const
(void* __this_nativeId)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QScrollArea::ensureVisible(int x, int y, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_ensureVisible_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int xmargin2,
 int ymargin3)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    __qt_this->ensureVisible((int )x0, (int )y1, (int )xmargin2, (int )ymargin3);

}

// QScrollArea::ensureWidgetVisible(QWidget * childWidget, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_ensureWidgetVisible_QWidget_int_int
(void* __this_nativeId,
 void* childWidget0,
 int xmargin1,
 int ymargin2)
{
    QWidget*  __qt_childWidget0 = (QWidget* ) childWidget0;
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    __qt_this->ensureWidgetVisible((QWidget* )__qt_childWidget0, (int )xmargin1, (int )ymargin2);

}

// QScrollArea::setAlignment(QFlags<Qt::AlignmentFlag> arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_setAlignment_Alignment
(void* __this_nativeId,
 int arg__1)
{
    QFlags<Qt::AlignmentFlag> __qt_arg__1 = (QFlags<Qt::AlignmentFlag>) arg__1;
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_arg__1);

}

// QScrollArea::setWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_setWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setWidget((QWidget* )__qt_widget0);

}

// QScrollArea::setWidgetResizable(bool resizable)
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_setWidgetResizable_bool
(void* __this_nativeId,
 bool resizable0)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setWidgetResizable((bool )resizable0);

}

// QScrollArea::takeWidget()
QTD_EXTERN QTD_EXPORT void* qtd_QScrollArea_takeWidget
(void* __this_nativeId)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->takeWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QScrollArea::widget() const
QTD_EXTERN QTD_EXPORT void* qtd_QScrollArea_widget_const
(void* __this_nativeId)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QScrollArea::widgetResizable() const
QTD_EXTERN QTD_EXPORT bool qtd_QScrollArea_widgetResizable_const
(void* __this_nativeId)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->widgetResizable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QScrollArea::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QScrollArea_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)
QTD_EXTERN QTD_EXPORT bool qtd_QScrollArea_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* arg__1,
 void* arg__2)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QEvent*  __qt_arg__2 = (QEvent* ) arg__2;
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_arg__1, (QEvent* )__qt_arg__2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QScrollArea::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QScrollArea_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QScrollArea::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QScrollArea::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QScrollArea::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QScrollArea_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QScrollArea_QtDShell *__qt_this = (QScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QScrollArea_staticMetaObject() {
    return (void*)&QScrollArea::staticMetaObject;
}


