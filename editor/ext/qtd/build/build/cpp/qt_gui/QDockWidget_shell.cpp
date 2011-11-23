#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdockwidget.h>
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

#include "QDockWidget_shell.h"
#include <iostream>
#include <qdockwidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDockWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDockWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_createEntity(void *nativeId, void* dId)
{
    new QDockWidgetEntity((QObject*)nativeId, dId);
}

QDockWidget_QtDShell::QDockWidget_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1)
    : QDockWidget(parent0, flags1),
      QObjectLink(this, d_ptr)
{
}

QDockWidget_QtDShell::QDockWidget_QtDShell(void *d_ptr, const QString&  title0, QWidget*  parent1, Qt::WindowFlags  flags2)
    : QDockWidget(title0, parent1, flags2),
      QObjectLink(this, d_ptr)
{
}

QDockWidget_QtDShell::~QDockWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDockWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDockWidget::metaObject();
}

int QDockWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDockWidget::qt_metacall(_c, _id, _a);
}

int QDockWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDockWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDockWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QDockWidget_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QDockWidget_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QDockWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QDockWidget_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDockWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QDockWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QDockWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QDockWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QDockWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QDockWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDockWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QDockWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QDockWidget_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QDockWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDockWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QDockWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QDockWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QDockWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QDockWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QDockWidget_QtDShell::__public_initStyleOption(QStyleOptionDockWidget*  option0) const
{
    QDockWidget::initStyleOption((QStyleOptionDockWidget* )option0);
}

void QDockWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QDockWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDockWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QDockWidget_QtDShell::__public_allowedAreasChanged(int  allowedAreas0)
{
    QDockWidget::allowedAreasChanged((Qt::DockWidgetAreas )allowedAreas0);
}

void QDockWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QDockWidget_QtDShell::__public_dockLocationChanged(int  area0)
{
    QDockWidget::dockLocationChanged((Qt::DockWidgetArea )area0);
}

void QDockWidget_QtDShell::__public_featuresChanged(int  features0)
{
    QDockWidget::featuresChanged((QDockWidget::DockWidgetFeatures )features0);
}

void QDockWidget_QtDShell::__public_topLevelChanged(bool  topLevel0)
{
    QDockWidget::topLevelChanged((bool )topLevel0);
}

void QDockWidget_QtDShell::__public_visibilityChanged(bool  visible0)
{
    QDockWidget::visibilityChanged((bool )visible0);
}

// Write virtual function overries used to decide on static/virtual calls
void QDockWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QDockWidget::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QDockWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QDockWidget::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

void QDockWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QDockWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QDockWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QDockWidget_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QDockWidget::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QDockWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDockWidget_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QDockWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QDockWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QDockWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QDockWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QDockWidget_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QDockWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QDockWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QDockWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QDockWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QDockWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QDockWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QDockWidget_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QDockWidget::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QDockWidget_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QDockWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QDockWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QDockWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QDockWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QDockWidget::allowedAreasChanged(QFlags<Qt::DockWidgetArea> allowedAreas)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_allowedAreasChanged_DockWidgetAreas
(void* __this_nativeId,
 int allowedAreas0)
{
    QFlags<Qt::DockWidgetArea> __qt_allowedAreas0 = (QFlags<Qt::DockWidgetArea>) allowedAreas0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_allowedAreasChanged((Qt::DockWidgetAreas )__qt_allowedAreas0);

}

// QDockWidget::dockLocationChanged(Qt::DockWidgetArea area)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_dockLocationChanged_DockWidgetArea
(void* __this_nativeId,
 int area0)
{
    Qt::DockWidgetArea __qt_area0 = (Qt::DockWidgetArea) area0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_dockLocationChanged((Qt::DockWidgetArea )__qt_area0);

}

// QDockWidget::featuresChanged(QFlags<QDockWidget::DockWidgetFeature> features)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_featuresChanged_DockWidgetFeatures
(void* __this_nativeId,
 int features0)
{
    QFlags<QDockWidget::DockWidgetFeature> __qt_features0 = (QFlags<QDockWidget::DockWidgetFeature>) features0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_featuresChanged((QDockWidget::DockWidgetFeatures )__qt_features0);

}

// QDockWidget::topLevelChanged(bool topLevel)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_topLevelChanged_bool
(void* __this_nativeId,
 bool topLevel0)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_topLevelChanged((bool )topLevel0);

}

// QDockWidget::visibilityChanged(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_visibilityChanged_bool
(void* __this_nativeId,
 bool visible0)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_visibilityChanged((bool )visible0);

}

// ---externC---
// QDockWidget::QDockWidget(QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QDockWidget_QDockWidget_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int flags1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QDockWidget_QtDShell *__qt_this = new QDockWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QDockWidget::QDockWidget(const QString & title, QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QDockWidget_QDockWidget_string_QWidget_WindowFlags
(void *d_ptr,
 DArray title0,
 void* parent1,
 int flags2)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QFlags<Qt::WindowType> __qt_flags2 = (QFlags<Qt::WindowType>) flags2;
    QDockWidget_QtDShell *__qt_this = new QDockWidget_QtDShell(d_ptr, (const QString& )__qt_title0, (QWidget* )__qt_parent1, (Qt::WindowFlags )__qt_flags2);
    return (void *) __qt_this;

}

// QDockWidget::allowedAreas() const
QTD_EXTERN QTD_EXPORT int qtd_QDockWidget_allowedAreas_const
(void* __this_nativeId)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->allowedAreas();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDockWidget::features() const
QTD_EXTERN QTD_EXPORT int qtd_QDockWidget_features_const
(void* __this_nativeId)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->features();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDockWidget::initStyleOption(QStyleOptionDockWidget * option) const
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_initStyleOption_nativepointerQStyleOptionDockWidget_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionDockWidget*  __qt_option0 = (QStyleOptionDockWidget* ) option0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionDockWidget* )__qt_option0);

}

// QDockWidget::isAreaAllowed(Qt::DockWidgetArea area) const
QTD_EXTERN QTD_EXPORT bool qtd_QDockWidget_isAreaAllowed_DockWidgetArea_const
(void* __this_nativeId,
 int area0)
{
    Qt::DockWidgetArea __qt_area0 = (Qt::DockWidgetArea) area0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAreaAllowed((Qt::DockWidgetArea )__qt_area0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDockWidget::isFloating() const
QTD_EXTERN QTD_EXPORT bool qtd_QDockWidget_isFloating_const
(void* __this_nativeId)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFloating();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDockWidget::setAllowedAreas(QFlags<Qt::DockWidgetArea> areas)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_setAllowedAreas_DockWidgetAreas
(void* __this_nativeId,
 int areas0)
{
    QFlags<Qt::DockWidgetArea> __qt_areas0 = (QFlags<Qt::DockWidgetArea>) areas0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->setAllowedAreas((Qt::DockWidgetAreas )__qt_areas0);

}

// QDockWidget::setFeatures(QFlags<QDockWidget::DockWidgetFeature> features)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_setFeatures_DockWidgetFeatures
(void* __this_nativeId,
 int features0)
{
    QFlags<QDockWidget::DockWidgetFeature> __qt_features0 = (QFlags<QDockWidget::DockWidgetFeature>) features0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->setFeatures((QDockWidget::DockWidgetFeatures )__qt_features0);

}

// QDockWidget::setFloating(bool floating)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_setFloating_bool
(void* __this_nativeId,
 bool floating0)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->setFloating((bool )floating0);

}

// QDockWidget::setTitleBarWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_setTitleBarWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->setTitleBarWidget((QWidget* )__qt_widget0);

}

// QDockWidget::setWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_setWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    __qt_this->setWidget((QWidget* )__qt_widget0);

}

// QDockWidget::titleBarWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QDockWidget_titleBarWidget_const
(void* __this_nativeId)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->titleBarWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDockWidget::toggleViewAction() const
QTD_EXTERN QTD_EXPORT void* qtd_QDockWidget_toggleViewAction_const
(void* __this_nativeId)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->toggleViewAction();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDockWidget::widget() const
QTD_EXTERN QTD_EXPORT void* qtd_QDockWidget_widget_const
(void* __this_nativeId)
{
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDockWidget::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QDockWidget::closeEvent(QCloseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_closeEvent_QCloseEvent
(void* __this_nativeId,
 void* event0)
{
    QCloseEvent*  __qt_event0 = (QCloseEvent* ) event0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEvent((QCloseEvent* )__qt_event0, __do_static_call);

}

// QDockWidget::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QDockWidget_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDockWidget::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDockWidget_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QDockWidget_QtDShell *__qt_this = (QDockWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDockWidget_staticMetaObject() {
    return (void*)&QDockWidget::staticMetaObject;
}


