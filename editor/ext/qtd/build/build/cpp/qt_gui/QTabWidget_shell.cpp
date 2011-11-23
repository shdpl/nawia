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
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtabbar.h>
#include <qtabwidget.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QTabWidget_shell.h"
#include <iostream>
#include <qtabwidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTabWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTabWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_createEntity(void *nativeId, void* dId)
{
    new QTabWidgetEntity((QObject*)nativeId, dId);
}

QTabWidget_QtDShell::QTabWidget_QtDShell(void *d_ptr, QWidget*  parent0)
    : QTabWidget(parent0),
      QObjectLink(this, d_ptr)
{
}

QTabWidget_QtDShell::~QTabWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTabWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTabWidget::metaObject();
}

int QTabWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTabWidget::qt_metacall(_c, _id, _a);
}

int QTabWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTabWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QTabWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTabWidget_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTabWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QTabWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QTabWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QTabWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QTabWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QTabWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTabWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QTabWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QTabWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTabWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QTabWidget_tabInserted_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QTabWidget_tabInserted_int_dispatch)
void QTabWidget_QtDShell::tabInserted(int  index0)
{
    qtd_QTabWidget_tabInserted_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QTabWidget_tabRemoved_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QTabWidget_tabRemoved_int_dispatch)
void QTabWidget_QtDShell::tabRemoved(int  index0)
{
    qtd_QTabWidget_tabRemoved_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QTabWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_initCallBacks(VoidFunc *virts) {
    qtd_QTabWidget_tabInserted_int_dispatch = (qtd_QTabWidget_tabInserted_int_dispatch_t) virts[0];
    qtd_QTabWidget_tabRemoved_int_dispatch = (qtd_QTabWidget_tabRemoved_int_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QTabWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QTabWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QTabWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QTabWidget_QtDShell::__public_initStyleOption(QStyleOptionTabWidgetFrame*  option0) const
{
    QTabWidget::initStyleOption((QStyleOptionTabWidgetFrame* )option0);
}

void QTabWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QTabWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTabWidget_QtDShell::__public_setTabBar(QTabBar*  arg__1)
{
    QTabWidget::setTabBar((QTabBar* )arg__1);
}

QTabBar*  QTabWidget_QtDShell::__public_tabBar() const
{
    return QTabWidget::tabBar();
}

void QTabWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QTabWidget_QtDShell::__public_currentChanged(int  index0)
{
    QTabWidget::currentChanged((int )index0);
}

void QTabWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QTabWidget_QtDShell::__public_tabCloseRequested(int  index0)
{
    QTabWidget::tabCloseRequested((int )index0);
}

// Write virtual function overries used to decide on static/virtual calls
void QTabWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QTabWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QTabWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QTabWidget_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QTabWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTabWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTabWidget_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QTabWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QTabWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QTabWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QTabWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QTabWidget_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QTabWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QTabWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QTabWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QTabWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QTabWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QTabWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QTabWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QTabWidget_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QTabWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTabWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QTabWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QTabWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QTabWidget_QtDShell::__override_tabInserted(int  index0, bool static_call)
{
    if (static_call) {
        QTabWidget::tabInserted((int )index0);
    } else {
        tabInserted((int )index0);
    }
}

void QTabWidget_QtDShell::__override_tabRemoved(int  index0, bool static_call)
{
    if (static_call) {
        QTabWidget::tabRemoved((int )index0);
    } else {
        tabRemoved((int )index0);
    }
}

void QTabWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QTabWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QTabWidget::currentChanged(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_currentChanged_int
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentChanged((int )index0);

}

// QTabWidget::tabCloseRequested(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_tabCloseRequested_int
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_tabCloseRequested((int )index0);

}

// ---externC---
// QTabWidget::QTabWidget(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTabWidget_QTabWidget_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QTabWidget_QtDShell *__qt_this = new QTabWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QTabWidget::addTab(QWidget * widget, const QIcon & icon, const QString & label)
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_addTab_QWidget_QIcon_string
(void* __this_nativeId,
 void* widget0,
 void* icon1,
 DArray label2)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QString __qt_label2 = QString::fromUtf8((const char *)label2.ptr, label2.length);
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addTab((QWidget* )__qt_widget0, (const QIcon& )__qt_icon1, (const QString& )__qt_label2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::addTab(QWidget * widget, const QString & arg__2)
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_addTab_QWidget_string
(void* __this_nativeId,
 void* widget0,
 DArray arg__2)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QString __qt_arg__2 = QString::fromUtf8((const char *)arg__2.ptr, arg__2.length);
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addTab((QWidget* )__qt_widget0, (const QString& )__qt_arg__2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::clear()
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_clear
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QTabWidget::cornerWidget(Qt::Corner corner) const
QTD_EXTERN QTD_EXPORT void* qtd_QTabWidget_cornerWidget_Corner_const
(void* __this_nativeId,
 int corner0)
{
    Qt::Corner __qt_corner0 = (Qt::Corner) corner0;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->cornerWidget((Qt::Corner )__qt_corner0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTabWidget::count() const
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_count_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::currentIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_currentIndex_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::currentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QTabWidget_currentWidget_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->currentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTabWidget::documentMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabWidget_documentMode_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->documentMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::elideMode() const
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_elideMode_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->elideMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::iconSize() const
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_iconSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->iconSize();

    *__d_return_value = __qt_return_value;

}

// QTabWidget::indexOf(QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_indexOf_QWidget_const
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((QWidget* )__qt_widget0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::initStyleOption(QStyleOptionTabWidgetFrame * option) const
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_initStyleOption_nativepointerQStyleOptionTabWidgetFrame_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionTabWidgetFrame*  __qt_option0 = (QStyleOptionTabWidgetFrame* ) option0;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionTabWidgetFrame* )__qt_option0);

}

// QTabWidget::insertTab(int index, QWidget * widget, const QIcon & icon, const QString & label)
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_insertTab_int_QWidget_QIcon_string
(void* __this_nativeId,
 int index0,
 void* widget1,
 void* icon2,
 DArray label3)
{
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    const QIcon&  __qt_icon2 = (const QIcon& ) *(QIcon *)icon2;
    QString __qt_label3 = QString::fromUtf8((const char *)label3.ptr, label3.length);
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertTab((int )index0, (QWidget* )__qt_widget1, (const QIcon& )__qt_icon2, (const QString& )__qt_label3);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::insertTab(int index, QWidget * widget, const QString & arg__3)
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_insertTab_int_QWidget_string
(void* __this_nativeId,
 int index0,
 void* widget1,
 DArray arg__3)
{
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QString __qt_arg__3 = QString::fromUtf8((const char *)arg__3.ptr, arg__3.length);
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertTab((int )index0, (QWidget* )__qt_widget1, (const QString& )__qt_arg__3);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::isMovable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabWidget_isMovable_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMovable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::isTabEnabled(int index) const
QTD_EXTERN QTD_EXPORT bool qtd_QTabWidget_isTabEnabled_int_const
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTabEnabled((int )index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::removeTab(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_removeTab_int
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->removeTab((int )index0);

}

// QTabWidget::setCornerWidget(QWidget * w, Qt::Corner corner)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setCornerWidget_QWidget_Corner
(void* __this_nativeId,
 void* w0,
 int corner1)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    Qt::Corner __qt_corner1 = (Qt::Corner) corner1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setCornerWidget((QWidget* )__qt_w0, (Qt::Corner )__qt_corner1);

}

// QTabWidget::setCurrentIndex(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setCurrentIndex_int
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentIndex((int )index0);

}

// QTabWidget::setCurrentWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setCurrentWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentWidget((QWidget* )__qt_widget0);

}

// QTabWidget::setDocumentMode(bool set)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setDocumentMode_bool
(void* __this_nativeId,
 bool set0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setDocumentMode((bool )set0);

}

// QTabWidget::setElideMode(Qt::TextElideMode arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setElideMode_TextElideMode
(void* __this_nativeId,
 int arg__1)
{
    Qt::TextElideMode __qt_arg__1 = (Qt::TextElideMode) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setElideMode((Qt::TextElideMode )__qt_arg__1);

}

// QTabWidget::setIconSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setIconSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setIconSize((const QSize& )size0);

}

// QTabWidget::setMovable(bool movable)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setMovable_bool
(void* __this_nativeId,
 bool movable0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setMovable((bool )movable0);

}

// QTabWidget::setTabBar(QTabBar * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabBar_QTabBar
(void* __this_nativeId,
 void* arg__1)
{
    QTabBar*  __qt_arg__1 = (QTabBar* ) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_setTabBar((QTabBar* )__qt_arg__1);

}

// QTabWidget::setTabEnabled(int index, bool arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabEnabled_int_bool
(void* __this_nativeId,
 int index0,
 bool arg__2)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabEnabled((int )index0, (bool )arg__2);

}

// QTabWidget::setTabIcon(int index, const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabIcon_int_QIcon
(void* __this_nativeId,
 int index0,
 void* icon1)
{
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabIcon((int )index0, (const QIcon& )__qt_icon1);

}

// QTabWidget::setTabPosition(QTabWidget::TabPosition arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabPosition_TabPosition
(void* __this_nativeId,
 int arg__1)
{
    QTabWidget::TabPosition __qt_arg__1 = (QTabWidget::TabPosition) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabPosition((QTabWidget::TabPosition )__qt_arg__1);

}

// QTabWidget::setTabShape(QTabWidget::TabShape s)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabShape_TabShape
(void* __this_nativeId,
 int s0)
{
    QTabWidget::TabShape __qt_s0 = (QTabWidget::TabShape) s0;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabShape((QTabWidget::TabShape )__qt_s0);

}

// QTabWidget::setTabText(int index, const QString & arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabText_int_string
(void* __this_nativeId,
 int index0,
 DArray arg__2)
{
    QString __qt_arg__2 = QString::fromUtf8((const char *)arg__2.ptr, arg__2.length);
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabText((int )index0, (const QString& )__qt_arg__2);

}

// QTabWidget::setTabToolTip(int index, const QString & tip)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabToolTip_int_string
(void* __this_nativeId,
 int index0,
 DArray tip1)
{
    QString __qt_tip1 = QString::fromUtf8((const char *)tip1.ptr, tip1.length);
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabToolTip((int )index0, (const QString& )__qt_tip1);

}

// QTabWidget::setTabWhatsThis(int index, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabWhatsThis_int_string
(void* __this_nativeId,
 int index0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabWhatsThis((int )index0, (const QString& )__qt_text1);

}

// QTabWidget::setTabsClosable(bool closeable)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setTabsClosable_bool
(void* __this_nativeId,
 bool closeable0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setTabsClosable((bool )closeable0);

}

// QTabWidget::setUsesScrollButtons(bool useButtons)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_setUsesScrollButtons_bool
(void* __this_nativeId,
 bool useButtons0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    __qt_this->setUsesScrollButtons((bool )useButtons0);

}

// QTabWidget::tabBar() const
QTD_EXTERN QTD_EXPORT void* qtd_QTabWidget_tabBar_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QTabBar*  __qt_return_value = __qt_this->__public_tabBar();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTabWidget::tabIcon(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTabWidget_tabIcon_int_const
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->tabIcon((int )index0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QTabWidget::tabPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_tabPosition_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::tabShape() const
QTD_EXTERN QTD_EXPORT int qtd_QTabWidget_tabShape_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabShape();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::tabText(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_tabText_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tabText((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTabWidget::tabToolTip(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_tabToolTip_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tabToolTip((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTabWidget::tabWhatsThis(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_tabWhatsThis_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tabWhatsThis((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTabWidget::tabsClosable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabWidget_tabsClosable_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tabsClosable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::usesScrollButtons() const
QTD_EXTERN QTD_EXPORT bool qtd_QTabWidget_usesScrollButtons_const
(void* __this_nativeId)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->usesScrollButtons();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::widget(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTabWidget_widget_int_const
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTabWidget::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QTabWidget::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QTabWidget_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTabWidget::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QTabWidget::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QTabWidget::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QTabWidget::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QTabWidget::showEvent(QShowEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_showEvent_QShowEvent
(void* __this_nativeId,
 void* arg__1)
{
    QShowEvent*  __qt_arg__1 = (QShowEvent* ) arg__1;
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_arg__1, __do_static_call);

}

// QTabWidget::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QTabWidget::tabInserted(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_tabInserted_int
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_tabInserted((int )index0, __do_static_call);

}

// QTabWidget::tabRemoved(int index)
QTD_EXTERN QTD_EXPORT void qtd_QTabWidget_tabRemoved_int
(void* __this_nativeId,
 int index0)
{
    QTabWidget_QtDShell *__qt_this = (QTabWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_tabRemoved((int )index0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTabWidget_staticMetaObject() {
    return (void*)&QTabWidget::staticMetaObject;
}


