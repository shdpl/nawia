#include <QVariant>
#include <qabstractscrollarea.h>
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
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QAbstractScrollArea_shell.h"
#include <iostream>
#include <qabstractscrollarea.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QAbstractScrollAreaEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractScrollAreaEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_createEntity(void *nativeId, void* dId)
{
    new QAbstractScrollAreaEntity((QObject*)nativeId, dId);
}

QAbstractScrollArea_QtDShell::QAbstractScrollArea_QtDShell(void *d_ptr, QWidget*  parent0)
    : QAbstractScrollArea(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractScrollArea_QtDShell::~QAbstractScrollArea_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractScrollArea_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractScrollArea::metaObject();
}

int QAbstractScrollArea_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractScrollArea::qt_metacall(_c, _id, _a);
}

int QAbstractScrollArea_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractScrollArea::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractScrollArea_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QAbstractScrollArea_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAbstractScrollArea_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractScrollArea_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QAbstractScrollArea_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QAbstractScrollArea_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QAbstractScrollArea_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QAbstractScrollArea_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QAbstractScrollArea_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractScrollArea_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QAbstractScrollArea_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
QTD_FUNC(GUI, QAbstractScrollArea_scrollContentsBy_int_int_dispatch)
void QAbstractScrollArea_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QAbstractScrollArea_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractScrollArea_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QAbstractScrollArea_viewportEvent_QEvent_dispatch)
bool  QAbstractScrollArea_QtDShell::viewportEvent(QEvent*  arg__1)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QAbstractScrollArea_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch = (qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch_t) virts[0];
    qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch = (qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QAbstractScrollArea_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QAbstractScrollArea_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QAbstractScrollArea_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QAbstractScrollArea_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QAbstractScrollArea_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QAbstractScrollArea_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractScrollArea_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QAbstractScrollArea_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QAbstractScrollArea_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QAbstractScrollArea_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

// Write virtual function overries used to decide on static/virtual calls
void QAbstractScrollArea_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QAbstractScrollArea_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QAbstractScrollArea_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QAbstractScrollArea_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QAbstractScrollArea::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAbstractScrollArea_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractScrollArea_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QAbstractScrollArea_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QAbstractScrollArea_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QAbstractScrollArea_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QAbstractScrollArea_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QAbstractScrollArea_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QAbstractScrollArea_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QAbstractScrollArea_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QAbstractScrollArea_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QAbstractScrollArea_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QAbstractScrollArea_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QAbstractScrollArea_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QAbstractScrollArea_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QAbstractScrollArea_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

void QAbstractScrollArea_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QAbstractScrollArea_QtDShell::__override_viewportEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QAbstractScrollArea::viewportEvent((QEvent* )arg__1);
    } else {
        return viewportEvent((QEvent* )arg__1);
    }
}

void QAbstractScrollArea_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// ---externC---
// QAbstractScrollArea::QAbstractScrollArea(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractScrollArea_QAbstractScrollArea_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QAbstractScrollArea_QtDShell *__qt_this = new QAbstractScrollArea_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractScrollArea::addScrollBarWidget(QWidget * widget, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_addScrollBarWidget_QWidget_Alignment
(void* __this_nativeId,
 void* widget0,
 int alignment1)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->addScrollBarWidget((QWidget* )__qt_widget0, (Qt::Alignment )__qt_alignment1);

}

// QAbstractScrollArea::cornerWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractScrollArea_cornerWidget_const
(void* __this_nativeId)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->cornerWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::horizontalScrollBar() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractScrollArea_horizontalScrollBar_const
(void* __this_nativeId)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    QScrollBar*  __qt_return_value = __qt_this->horizontalScrollBar();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::horizontalScrollBarPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractScrollArea_horizontalScrollBarPolicy_const
(void* __this_nativeId)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->horizontalScrollBarPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::maximumViewportSize() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_maximumViewportSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->maximumViewportSize();

    *__d_return_value = __qt_return_value;

}

// QAbstractScrollArea::scrollBarWidgets(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_scrollBarWidgets_Alignment
(void* __this_nativeId,
 void* __d_return_value,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    QList<QWidget* >  __qt_return_value = __qt_this->scrollBarWidgets((Qt::Alignment )__qt_alignment0);

QList<QWidget* > &__d_return_value_tmp = (*(QList<QWidget* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractScrollArea::setCornerWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setCornerWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setCornerWidget((QWidget* )__qt_widget0);

}

// QAbstractScrollArea::setHorizontalScrollBar(QScrollBar * scrollbar)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setHorizontalScrollBar_QScrollBar
(void* __this_nativeId,
 void* scrollbar0)
{
    QScrollBar*  __qt_scrollbar0 = (QScrollBar* ) scrollbar0;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalScrollBar((QScrollBar* )__qt_scrollbar0);

}

// QAbstractScrollArea::setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setHorizontalScrollBarPolicy_ScrollBarPolicy
(void* __this_nativeId,
 int arg__1)
{
    Qt::ScrollBarPolicy __qt_arg__1 = (Qt::ScrollBarPolicy) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalScrollBarPolicy((Qt::ScrollBarPolicy )__qt_arg__1);

}

// QAbstractScrollArea::setVerticalScrollBar(QScrollBar * scrollbar)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setVerticalScrollBar_QScrollBar
(void* __this_nativeId,
 void* scrollbar0)
{
    QScrollBar*  __qt_scrollbar0 = (QScrollBar* ) scrollbar0;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setVerticalScrollBar((QScrollBar* )__qt_scrollbar0);

}

// QAbstractScrollArea::setVerticalScrollBarPolicy(Qt::ScrollBarPolicy arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setVerticalScrollBarPolicy_ScrollBarPolicy
(void* __this_nativeId,
 int arg__1)
{
    Qt::ScrollBarPolicy __qt_arg__1 = (Qt::ScrollBarPolicy) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setVerticalScrollBarPolicy((Qt::ScrollBarPolicy )__qt_arg__1);

}

// QAbstractScrollArea::setViewport(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setViewport_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->setViewport((QWidget* )__qt_widget0);

}

// QAbstractScrollArea::setViewportMargins(int left, int top, int right, int bottom)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setViewportMargins_int_int_int_int
(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->__public_setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);

}

// QAbstractScrollArea::setupViewport(QWidget * viewport)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_setupViewport_QWidget
(void* __this_nativeId,
 void* viewport0)
{
    QWidget*  __qt_viewport0 = (QWidget* ) viewport0;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    __qt_this->__public_setupViewport((QWidget* )__qt_viewport0);

}

// QAbstractScrollArea::verticalScrollBar() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractScrollArea_verticalScrollBar_const
(void* __this_nativeId)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    QScrollBar*  __qt_return_value = __qt_this->verticalScrollBar();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::verticalScrollBarPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractScrollArea_verticalScrollBarPolicy_const
(void* __this_nativeId)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalScrollBarPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::viewport() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractScrollArea_viewport_const
(void* __this_nativeId)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->viewport();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::contextMenuEvent(QContextMenuEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* arg__1)
{
    QContextMenuEvent*  __qt_arg__1 = (QContextMenuEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::dragEnterEvent(QDragEnterEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragEnterEvent*  __qt_arg__1 = (QDragEnterEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::dragLeaveEvent(QDragLeaveEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragLeaveEvent*  __qt_arg__1 = (QDragLeaveEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::dragMoveEvent(QDragMoveEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragMoveEvent*  __qt_arg__1 = (QDragMoveEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::dropEvent(QDropEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_dropEvent_QDropEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDropEvent*  __qt_arg__1 = (QDropEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractScrollArea_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::mouseMoveEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QAbstractScrollArea::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QAbstractScrollArea::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractScrollArea::viewportEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractScrollArea_viewportEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_viewportEvent((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractScrollArea::wheelEvent(QWheelEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractScrollArea_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* arg__1)
{
    QWheelEvent*  __qt_arg__1 = (QWheelEvent* ) arg__1;
    QAbstractScrollArea_QtDShell *__qt_this = (QAbstractScrollArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_arg__1, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractScrollArea_staticMetaObject() {
    return (void*)&QAbstractScrollArea::staticMetaObject;
}


