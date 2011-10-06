#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
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
#include <qmdiarea.h>
#include <qmdisubwindow.h>
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

#include "QMdiArea_shell.h"
#include <iostream>
#include <qmdiarea.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QMdiAreaEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QMdiAreaEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_createEntity(void *nativeId, void* dId)
{
    new QMdiAreaEntity((QObject*)nativeId, dId);
}

QMdiArea_QtDShell::QMdiArea_QtDShell(void *d_ptr, QWidget*  parent0)
    : QMdiArea(parent0),
      QObjectLink(this, d_ptr)
{
}

QMdiArea_QtDShell::~QMdiArea_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QMdiArea_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QMdiArea::metaObject();
}

int QMdiArea_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QMdiArea::qt_metacall(_c, _id, _a);
}

int QMdiArea_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QMdiArea::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QMdiArea_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* childEvent0))
void QMdiArea_QtDShell::childEvent(QChildEvent*  childEvent0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )childEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QMdiArea_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QMdiArea_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* object0, void* event1))
bool  QMdiArea_QtDShell::eventFilter(QObject*  object0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )object0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QMdiArea_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QMdiArea_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QMdiArea_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QMdiArea_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QMdiArea_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMdiArea_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QMdiArea_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* paintEvent0))
void QMdiArea_QtDShell::paintEvent(QPaintEvent*  paintEvent0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )paintEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* resizeEvent0))
void QMdiArea_QtDShell::resizeEvent(QResizeEvent*  resizeEvent0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )resizeEvent0);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QMdiArea_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QMdiArea_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* showEvent0))
void QMdiArea_QtDShell::showEvent(QShowEvent*  showEvent0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )showEvent0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QMdiArea_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* timerEvent0))
void QMdiArea_QtDShell::timerEvent(QTimerEvent*  timerEvent0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )timerEvent0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QMdiArea_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QMdiArea_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QMdiArea_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QMdiArea_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QMdiArea_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QMdiArea_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QMdiArea_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QMdiArea_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QMdiArea_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QMdiArea_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QMdiArea::setupViewport((QWidget* )viewport0);
}

void QMdiArea_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QMdiArea_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QMdiArea_QtDShell::__public_subWindowActivated(QMdiSubWindow*  arg__1)
{
    QMdiArea::subWindowActivated((QMdiSubWindow* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QMdiArea_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_childEvent(QChildEvent*  childEvent0, bool static_call)
{
    if (static_call) {
        QMdiArea::childEvent((QChildEvent* )childEvent0);
    } else {
        childEvent((QChildEvent* )childEvent0);
    }
}

void QMdiArea_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QMdiArea_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QMdiArea_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QMdiArea_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QMdiArea::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QMdiArea_QtDShell::__override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QMdiArea::eventFilter((QObject* )object0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )object0, (QEvent* )event1);
    }
}

void QMdiArea_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QMdiArea_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QMdiArea_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QMdiArea_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QMdiArea_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QMdiArea_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QMdiArea_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QMdiArea_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QMdiArea_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QMdiArea_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QMdiArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QMdiArea_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QMdiArea_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QMdiArea_QtDShell::__override_paintEvent(QPaintEvent*  paintEvent0, bool static_call)
{
    if (static_call) {
        QMdiArea::paintEvent((QPaintEvent* )paintEvent0);
    } else {
        paintEvent((QPaintEvent* )paintEvent0);
    }
}

void QMdiArea_QtDShell::__override_resizeEvent(QResizeEvent*  resizeEvent0, bool static_call)
{
    if (static_call) {
        QMdiArea::resizeEvent((QResizeEvent* )resizeEvent0);
    } else {
        resizeEvent((QResizeEvent* )resizeEvent0);
    }
}

void QMdiArea_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QMdiArea::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QMdiArea_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QMdiArea_QtDShell::__override_showEvent(QShowEvent*  showEvent0, bool static_call)
{
    if (static_call) {
        QMdiArea::showEvent((QShowEvent* )showEvent0);
    } else {
        showEvent((QShowEvent* )showEvent0);
    }
}

QSize  QMdiArea_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QMdiArea::sizeHint();
    } else {
        return sizeHint();
    }
}

void QMdiArea_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QMdiArea_QtDShell::__override_timerEvent(QTimerEvent*  timerEvent0, bool static_call)
{
    if (static_call) {
        QMdiArea::timerEvent((QTimerEvent* )timerEvent0);
    } else {
        timerEvent((QTimerEvent* )timerEvent0);
    }
}

bool  QMdiArea_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QMdiArea::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

void QMdiArea_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QMdiArea::subWindowActivated(QMdiSubWindow * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_subWindowActivated_QMdiSubWindow
(void* __this_nativeId,
 void* arg__1)
{
    QMdiSubWindow*  __qt_arg__1 = (QMdiSubWindow* ) arg__1;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->__public_subWindowActivated((QMdiSubWindow* )__qt_arg__1);

}

// ---externC---
// QMdiArea::QMdiArea(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QMdiArea_QMdiArea_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QMdiArea_QtDShell *__qt_this = new QMdiArea_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QMdiArea::activateNextSubWindow()
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_activateNextSubWindow
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->activateNextSubWindow();

}

// QMdiArea::activatePreviousSubWindow()
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_activatePreviousSubWindow
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->activatePreviousSubWindow();

}

// QMdiArea::activationOrder() const
QTD_EXTERN QTD_EXPORT int qtd_QMdiArea_activationOrder_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->activationOrder();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::activeSubWindow() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiArea_activeSubWindow_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    QMdiSubWindow*  __qt_return_value = __qt_this->activeSubWindow();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiArea::addSubWindow(QWidget * widget, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QMdiArea_addSubWindow_QWidget_WindowFlags
(void* __this_nativeId,
 void* widget0,
 int flags1)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    QMdiSubWindow*  __qt_return_value = __qt_this->addSubWindow((QWidget* )__qt_widget0, (Qt::WindowFlags )__qt_flags1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiArea::background() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiArea_background_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->background();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QMdiArea::cascadeSubWindows()
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_cascadeSubWindows
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->cascadeSubWindows();

}

// QMdiArea::closeActiveSubWindow()
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_closeActiveSubWindow
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->closeActiveSubWindow();

}

// QMdiArea::closeAllSubWindows()
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_closeAllSubWindows
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->closeAllSubWindows();

}

// QMdiArea::currentSubWindow() const
QTD_EXTERN QTD_EXPORT void* qtd_QMdiArea_currentSubWindow_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    QMdiSubWindow*  __qt_return_value = __qt_this->currentSubWindow();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QMdiArea::documentMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QMdiArea_documentMode_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->documentMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::removeSubWindow(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_removeSubWindow_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->removeSubWindow((QWidget* )__qt_widget0);

}

// QMdiArea::setActivationOrder(QMdiArea::WindowOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setActivationOrder_WindowOrder
(void* __this_nativeId,
 int order0)
{
    QMdiArea::WindowOrder __qt_order0 = (QMdiArea::WindowOrder) order0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setActivationOrder((QMdiArea::WindowOrder )__qt_order0);

}

// QMdiArea::setActiveSubWindow(QMdiSubWindow * window)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setActiveSubWindow_QMdiSubWindow
(void* __this_nativeId,
 void* window0)
{
    QMdiSubWindow*  __qt_window0 = (QMdiSubWindow* ) window0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setActiveSubWindow((QMdiSubWindow* )__qt_window0);

}

// QMdiArea::setBackground(const QBrush & background)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setBackground_QBrush
(void* __this_nativeId,
 void* background0)
{
    const QBrush&  __qt_background0 = (const QBrush& ) *(QBrush *)background0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setBackground((const QBrush& )__qt_background0);

}

// QMdiArea::setDocumentMode(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setDocumentMode_bool
(void* __this_nativeId,
 bool enabled0)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setDocumentMode((bool )enabled0);

}

// QMdiArea::setOption(QMdiArea::AreaOption option, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setOption_AreaOption_bool
(void* __this_nativeId,
 int option0,
 bool on1)
{
    QMdiArea::AreaOption __qt_option0 = (QMdiArea::AreaOption) option0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setOption((QMdiArea::AreaOption )__qt_option0, (bool )on1);

}

// QMdiArea::setTabPosition(QTabWidget::TabPosition position)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setTabPosition_TabPosition
(void* __this_nativeId,
 int position0)
{
    QTabWidget::TabPosition __qt_position0 = (QTabWidget::TabPosition) position0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setTabPosition((QTabWidget::TabPosition )__qt_position0);

}

// QMdiArea::setTabShape(QTabWidget::TabShape shape)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setTabShape_TabShape
(void* __this_nativeId,
 int shape0)
{
    QTabWidget::TabShape __qt_shape0 = (QTabWidget::TabShape) shape0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setTabShape((QTabWidget::TabShape )__qt_shape0);

}

// QMdiArea::setViewMode(QMdiArea::ViewMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setViewMode_ViewMode
(void* __this_nativeId,
 int mode0)
{
    QMdiArea::ViewMode __qt_mode0 = (QMdiArea::ViewMode) mode0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->setViewMode((QMdiArea::ViewMode )__qt_mode0);

}

// QMdiArea::setupViewport(QWidget * viewport)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_setupViewport_QWidget
(void* __this_nativeId,
 void* viewport0)
{
    QWidget*  __qt_viewport0 = (QWidget* ) viewport0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->__public_setupViewport((QWidget* )__qt_viewport0);

}

// QMdiArea::subWindowList(QMdiArea::WindowOrder order) const
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_subWindowList_WindowOrder_const
(void* __this_nativeId,
 void* __d_return_value,
 int order0)
{
    QMdiArea::WindowOrder __qt_order0 = (QMdiArea::WindowOrder) order0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    QList<QMdiSubWindow* >  __qt_return_value = __qt_this->subWindowList((QMdiArea::WindowOrder )__qt_order0);

QList<QMdiSubWindow* > &__d_return_value_tmp = (*(QList<QMdiSubWindow* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QMdiArea::tabPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QMdiArea_tabPosition_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::tabShape() const
QTD_EXTERN QTD_EXPORT int qtd_QMdiArea_tabShape_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabShape();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::testOption(QMdiArea::AreaOption opton) const
QTD_EXTERN QTD_EXPORT bool qtd_QMdiArea_testOption_AreaOption_const
(void* __this_nativeId,
 int opton0)
{
    QMdiArea::AreaOption __qt_opton0 = (QMdiArea::AreaOption) opton0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testOption((QMdiArea::AreaOption )__qt_opton0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::tileSubWindows()
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_tileSubWindows
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    __qt_this->tileSubWindows();

}

// QMdiArea::viewMode() const
QTD_EXTERN QTD_EXPORT int qtd_QMdiArea_viewMode_const
(void* __this_nativeId)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->viewMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::childEvent(QChildEvent * childEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_childEvent_QChildEvent
(void* __this_nativeId,
 void* childEvent0)
{
    QChildEvent*  __qt_childEvent0 = (QChildEvent* ) childEvent0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_childEvent((QChildEvent* )__qt_childEvent0, __do_static_call);

}

// QMdiArea::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QMdiArea_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::eventFilter(QObject * object, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QMdiArea_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* object0,
 void* event1)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_object0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMdiArea::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMdiArea::paintEvent(QPaintEvent * paintEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* paintEvent0)
{
    QPaintEvent*  __qt_paintEvent0 = (QPaintEvent* ) paintEvent0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_paintEvent0, __do_static_call);

}

// QMdiArea::resizeEvent(QResizeEvent * resizeEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* resizeEvent0)
{
    QResizeEvent*  __qt_resizeEvent0 = (QResizeEvent* ) resizeEvent0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_resizeEvent0, __do_static_call);

}

// QMdiArea::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QMdiArea::showEvent(QShowEvent * showEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_showEvent_QShowEvent
(void* __this_nativeId,
 void* showEvent0)
{
    QShowEvent*  __qt_showEvent0 = (QShowEvent* ) showEvent0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_showEvent0, __do_static_call);

}

// QMdiArea::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QMdiArea::timerEvent(QTimerEvent * timerEvent)
QTD_EXTERN QTD_EXPORT void qtd_QMdiArea_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* timerEvent0)
{
    QTimerEvent*  __qt_timerEvent0 = (QTimerEvent* ) timerEvent0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_timerEvent0, __do_static_call);

}

// QMdiArea::viewportEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QMdiArea_viewportEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QMdiArea_QtDShell *__qt_this = (QMdiArea_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_viewportEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QMdiArea_staticMetaObject() {
    return (void*)&QMdiArea::staticMetaObject;
}


