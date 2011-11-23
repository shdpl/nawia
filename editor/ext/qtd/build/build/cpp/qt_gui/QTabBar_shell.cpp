#include <QIcon>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qtabbar.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QTabBar_shell.h"
#include <iostream>
#include <qtabbar.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTabBarEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTabBarEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTabBar_createEntity(void *nativeId, void* dId)
{
    new QTabBarEntity((QObject*)nativeId, dId);
}

QTabBar_QtDShell::QTabBar_QtDShell(void *d_ptr, QWidget*  parent0)
    : QTabBar(parent0),
      QObjectLink(this, d_ptr)
{
}

QTabBar_QtDShell::~QTabBar_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTabBar_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTabBar::metaObject();
}

int QTabBar_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTabBar::qt_metacall(_c, _id, _a);
}

int QTabBar_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTabBar::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTabBar_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QTabBar_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTabBar_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTabBar_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QTabBar_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QTabBar_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QTabBar_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QTabBar_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QTabBar_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTabBar_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QTabBar_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QTabBar_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTabBar_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QTabBar_tabInserted_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QTabBar_tabInserted_int_dispatch)
void QTabBar_QtDShell::tabInserted(int  index0)
{
    qtd_QTabBar_tabInserted_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QTabBar_tabLayoutChange_dispatch, (void *dId))
QTD_FUNC(GUI, QTabBar_tabLayoutChange_dispatch)
void QTabBar_QtDShell::tabLayoutChange()
{
    qtd_QTabBar_tabLayoutChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QTabBar_tabRemoved_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QTabBar_tabRemoved_int_dispatch)
void QTabBar_QtDShell::tabRemoved(int  index0)
{
    qtd_QTabBar_tabRemoved_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QTabBar_tabSizeHint_int_const_dispatch, (void *dId, QSize *__d_return_value, int index0))
QTD_FUNC(GUI, QTabBar_tabSizeHint_int_const_dispatch)
QSize  QTabBar_QtDShell::tabSizeHint(int  index0) const
{
    QSize __d_return_value;
    qtd_QTabBar_tabSizeHint_int_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )index0);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTabBar_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* event0))
void QTabBar_QtDShell::wheelEvent(QWheelEvent*  event0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QTabBar_initCallBacks(VoidFunc *virts) {
    qtd_QTabBar_tabInserted_int_dispatch = (qtd_QTabBar_tabInserted_int_dispatch_t) virts[0];
    qtd_QTabBar_tabLayoutChange_dispatch = (qtd_QTabBar_tabLayoutChange_dispatch_t) virts[1];
    qtd_QTabBar_tabRemoved_int_dispatch = (qtd_QTabBar_tabRemoved_int_dispatch_t) virts[2];
    qtd_QTabBar_tabSizeHint_int_const_dispatch = (qtd_QTabBar_tabSizeHint_int_const_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QTabBar_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QTabBar_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QTabBar_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QTabBar_QtDShell::__public_initStyleOption(QStyleOptionTab*  option0, int  tabIndex1) const
{
    QTabBar::initStyleOption((QStyleOptionTab* )option0, (int )tabIndex1);
}

void QTabBar_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QTabBar_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTabBar_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QTabBar_QtDShell::__public_currentChanged(int  index0)
{
    QTabBar::currentChanged((int )index0);
}

void QTabBar_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QTabBar_QtDShell::__public_tabCloseRequested(int  index0)
{
    QTabBar::tabCloseRequested((int )index0);
}

void QTabBar_QtDShell::__public_tabMoved(int  from0, int  to1)
{
    QTabBar::tabMoved((int )from0, (int )to1);
}

// Write virtual function overries used to decide on static/virtual calls
void QTabBar_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QTabBar_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QTabBar_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QTabBar_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QTabBar::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTabBar_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTabBar_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QTabBar_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QTabBar_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QTabBar_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QTabBar_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QTabBar_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QTabBar_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QTabBar_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QTabBar_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QTabBar_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QTabBar::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QTabBar_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QTabBar_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QTabBar_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QTabBar_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabBar::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QTabBar_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QTabBar::sizeHint();
    } else {
        return sizeHint();
    }
}

void QTabBar_QtDShell::__override_tabInserted(int  index0, bool static_call)
{
    if (static_call) {
        QTabBar::tabInserted((int )index0);
    } else {
        tabInserted((int )index0);
    }
}

void QTabBar_QtDShell::__override_tabLayoutChange(bool static_call)
{
    if (static_call) {
        QTabBar::tabLayoutChange();
    } else {
        tabLayoutChange();
    }
}

void QTabBar_QtDShell::__override_tabRemoved(int  index0, bool static_call)
{
    if (static_call) {
        QTabBar::tabRemoved((int )index0);
    } else {
        tabRemoved((int )index0);
    }
}

QSize  QTabBar_QtDShell::__override_tabSizeHint(int  index0, bool static_call) const
{
    if (static_call) {
        return QTabBar::tabSizeHint((int )index0);
    } else {
        return tabSizeHint((int )index0);
    }
}

void QTabBar_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QTabBar_QtDShell::__override_wheelEvent(QWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QTabBar::wheelEvent((QWheelEvent* )event0);
    } else {
        wheelEvent((QWheelEvent* )event0);
    }
}

// QTabBar::currentChanged(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_currentChanged_int
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->__public_currentChanged((int )index0);

}

// QTabBar::tabCloseRequested(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabCloseRequested_int
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->__public_tabCloseRequested((int )index0);

}

// QTabBar::tabMoved(int from, int to)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabMoved_int_int
(void* __this_nativeId,
 int from0,
 int to1)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->__public_tabMoved((int )from0, (int )to1);

}

// ---externC---
// QTabBar::QTabBar(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTabBar_QTabBar_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QTabBar_QtDShell *__qt_this = new QTabBar_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QTabBar::addTab(const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_addTab_QIcon_string
(void* __this_nativeId,
 void* icon0,
 DArray text1)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addTab((const QIcon& )__qt_icon0, (const QString& )__qt_text1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::addTab(const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_addTab_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addTab((const QString& )__qt_text0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::count() const
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_count_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::currentIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_currentIndex_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::documentMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_documentMode_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->documentMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::drawBase() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_drawBase_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->drawBase();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::elideMode() const
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_elideMode_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->elideMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::expanding() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_expanding_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->expanding();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::iconSize() const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_iconSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->iconSize();

    *__d_return_value = __qt_return_value;

}

// QTabBar::initStyleOption(QStyleOptionTab * option, int tabIndex) const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_initStyleOption_nativepointerQStyleOptionTab_int_const
(void* __this_nativeId,
 void* option0,
 int tabIndex1)
{
    QStyleOptionTab*  __qt_option0 = (QStyleOptionTab* ) option0;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionTab* )__qt_option0, (int )tabIndex1);

}

// QTabBar::insertTab(int index, const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_insertTab_int_QIcon_string
(void* __this_nativeId,
 int index0,
 void* icon1,
 DArray text2)
{
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertTab((int )index0, (const QIcon& )__qt_icon1, (const QString& )__qt_text2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::insertTab(int index, const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_insertTab_int_string
(void* __this_nativeId,
 int index0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertTab((int )index0, (const QString& )__qt_text1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::isMovable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_isMovable_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMovable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::isTabEnabled(int index) const
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_isTabEnabled_int_const
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTabEnabled((int )index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::moveTab(int from, int to)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_moveTab_int_int
(void* __this_nativeId,
 int from0,
 int to1)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->moveTab((int )from0, (int )to1);

}

// QTabBar::removeTab(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_removeTab_int
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->removeTab((int )index0);

}

// QTabBar::setCurrentIndex(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setCurrentIndex_int
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setCurrentIndex((int )index0);

}

// QTabBar::setDocumentMode(bool set)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setDocumentMode_bool
(void* __this_nativeId,
 bool set0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setDocumentMode((bool )set0);

}

// QTabBar::setDrawBase(bool drawTheBase)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setDrawBase_bool
(void* __this_nativeId,
 bool drawTheBase0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setDrawBase((bool )drawTheBase0);

}

// QTabBar::setElideMode(Qt::TextElideMode arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setElideMode_TextElideMode
(void* __this_nativeId,
 int arg__1)
{
    Qt::TextElideMode __qt_arg__1 = (Qt::TextElideMode) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setElideMode((Qt::TextElideMode )__qt_arg__1);

}

// QTabBar::setExpanding(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setExpanding_bool
(void* __this_nativeId,
 bool enabled0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setExpanding((bool )enabled0);

}

// QTabBar::setIconSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setIconSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setIconSize((const QSize& )size0);

}

// QTabBar::setMovable(bool movable)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setMovable_bool
(void* __this_nativeId,
 bool movable0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setMovable((bool )movable0);

}

// QTabBar::setShape(QTabBar::Shape shape)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setShape_Shape
(void* __this_nativeId,
 int shape0)
{
    QTabBar::Shape __qt_shape0 = (QTabBar::Shape) shape0;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setShape((QTabBar::Shape )__qt_shape0);

}

// QTabBar::setTabData(int index, const QVariant & data)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabData_int_QVariant
(void* __this_nativeId,
 int index0,
 QVariant* data1)
{
    QVariant __qt_data1 = data1 == NULL ? QVariant() : QVariant(*data1);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabData((int )index0, (const QVariant& )__qt_data1);

}

// QTabBar::setTabEnabled(int index, bool arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabEnabled_int_bool
(void* __this_nativeId,
 int index0,
 bool arg__2)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabEnabled((int )index0, (bool )arg__2);

}

// QTabBar::setTabIcon(int index, const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabIcon_int_QIcon
(void* __this_nativeId,
 int index0,
 void* icon1)
{
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabIcon((int )index0, (const QIcon& )__qt_icon1);

}

// QTabBar::setTabText(int index, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabText_int_string
(void* __this_nativeId,
 int index0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabText((int )index0, (const QString& )__qt_text1);

}

// QTabBar::setTabTextColor(int index, const QColor & color)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabTextColor_int_QColor
(void* __this_nativeId,
 int index0,
 void* color1)
{
    const QColor&  __qt_color1 = (const QColor& ) *(QColor *)color1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabTextColor((int )index0, (const QColor& )__qt_color1);

}

// QTabBar::setTabToolTip(int index, const QString & tip)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabToolTip_int_string
(void* __this_nativeId,
 int index0,
 DArray tip1)
{
    QString __qt_tip1 = QString::fromUtf8((const char *)tip1.ptr, tip1.length);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabToolTip((int )index0, (const QString& )__qt_tip1);

}

// QTabBar::setTabWhatsThis(int index, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabWhatsThis_int_string
(void* __this_nativeId,
 int index0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabWhatsThis((int )index0, (const QString& )__qt_text1);

}

// QTabBar::setTabsClosable(bool closable)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setTabsClosable_bool
(void* __this_nativeId,
 bool closable0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setTabsClosable((bool )closable0);

}

// QTabBar::setUsesScrollButtons(bool useButtons)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_setUsesScrollButtons_bool
(void* __this_nativeId,
 bool useButtons0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    __qt_this->setUsesScrollButtons((bool )useButtons0);

}

// QTabBar::shape() const
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_shape_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->shape();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::tabAt(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QTabBar_tabAt_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabAt((const QPoint& )pos0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::tabData(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTabBar_tabData_int_const
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->tabData((int )index0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTabBar::tabIcon(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTabBar_tabIcon_int_const
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->tabIcon((int )index0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QTabBar::tabRect(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabRect_int_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->tabRect((int )index0);

    *__d_return_value = __qt_return_value;

}

// QTabBar::tabText(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabText_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tabText((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTabBar::tabTextColor(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTabBar_tabTextColor_int_const
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->tabTextColor((int )index0);

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QTabBar::tabToolTip(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabToolTip_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tabToolTip((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTabBar::tabWhatsThis(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabWhatsThis_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tabWhatsThis((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTabBar::tabsClosable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_tabsClosable_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tabsClosable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::usesScrollButtons() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_usesScrollButtons_const
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->usesScrollButtons();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QTabBar_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabBar::hideEvent(QHideEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_hideEvent_QHideEvent
(void* __this_nativeId,
 void* arg__1)
{
    QHideEvent*  __qt_arg__1 = (QHideEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QTabBar::mouseMoveEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::showEvent(QShowEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_showEvent_QShowEvent
(void* __this_nativeId,
 void* arg__1)
{
    QShowEvent*  __qt_arg__1 = (QShowEvent* ) arg__1;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_arg__1, __do_static_call);

}

// QTabBar::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QTabBar::tabInserted(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabInserted_int
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_tabInserted((int )index0, __do_static_call);

}

// QTabBar::tabLayoutChange()
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabLayoutChange
(void* __this_nativeId)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_tabLayoutChange(__do_static_call);

}

// QTabBar::tabRemoved(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabRemoved_int
(void* __this_nativeId,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_tabRemoved((int )index0, __do_static_call);

}

// QTabBar::tabSizeHint(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_tabSizeHint_int_const
(void* __this_nativeId,
 QSize * __d_return_value,
 int index0)
{
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_tabSizeHint((int )index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QTabBar::wheelEvent(QWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTabBar_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QWheelEvent*  __qt_event0 = (QWheelEvent* ) event0;
    QTabBar_QtDShell *__qt_this = (QTabBar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTabBar_staticMetaObject() {
    return (void*)&QTabBar::staticMetaObject;
}


