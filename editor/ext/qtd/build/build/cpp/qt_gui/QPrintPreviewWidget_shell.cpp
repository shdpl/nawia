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
#include <qprinter.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QPrintPreviewWidget_shell.h"
#include <iostream>
#include <qprintpreviewwidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QPrintPreviewWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QPrintPreviewWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_createEntity(void *nativeId, void* dId)
{
    new QPrintPreviewWidgetEntity((QObject*)nativeId, dId);
}

QPrintPreviewWidget_QtDShell::QPrintPreviewWidget_QtDShell(void *d_ptr, QPrinter*  printer0, QWidget*  parent1, Qt::WindowFlags  flags2)
    : QPrintPreviewWidget(printer0, parent1, flags2),
      QObjectLink(this, d_ptr)
{
}

QPrintPreviewWidget_QtDShell::QPrintPreviewWidget_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  flags1)
    : QPrintPreviewWidget(parent0, flags1),
      QObjectLink(this, d_ptr)
{
}

QPrintPreviewWidget_QtDShell::~QPrintPreviewWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QPrintPreviewWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QPrintPreviewWidget::metaObject();
}

int QPrintPreviewWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QPrintPreviewWidget::qt_metacall(_c, _id, _a);
}

int QPrintPreviewWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QPrintPreviewWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QPrintPreviewWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QPrintPreviewWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QPrintPreviewWidget_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QPrintPreviewWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QPrintPreviewWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QPrintPreviewWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QPrintPreviewWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QPrintPreviewWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QPrintPreviewWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QPrintPreviewWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QPrintPreviewWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QPrintPreviewWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QPrintPreviewWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QPrintPreviewWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QPrintPreviewWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QPrintPreviewWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QPrintPreviewWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QPrintPreviewWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QPrintPreviewWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QPrintPreviewWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QPrintPreviewWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QPrintPreviewWidget_QtDShell::__public_paintRequested(QPrinter*  printer0)
{
    QPrintPreviewWidget::paintRequested((QPrinter* )printer0);
}

void QPrintPreviewWidget_QtDShell::__public_previewChanged()
{
    QPrintPreviewWidget::previewChanged();
}

// Write virtual function overries used to decide on static/virtual calls
void QPrintPreviewWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QPrintPreviewWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QPrintPreviewWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QPrintPreviewWidget_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QPrintPreviewWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QPrintPreviewWidget_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QPrintPreviewWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QPrintPreviewWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QPrintPreviewWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QPrintPreviewWidget_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QPrintPreviewWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QPrintPreviewWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QPrintPreviewWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QPrintPreviewWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QPrintPreviewWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QPrintPreviewWidget_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QPrintPreviewWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QPrintPreviewWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QPrintPreviewWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QPrintPreviewWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QPrintPreviewWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QPrintPreviewWidget::paintRequested(QPrinter * printer)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_paintRequested_QPrinter
(void* __this_nativeId,
 void* printer0)
{
    QPrinter*  __qt_printer0 = (QPrinter* ) printer0;
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_paintRequested((QPrinter* )__qt_printer0);

}

// QPrintPreviewWidget::previewChanged()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_previewChanged
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_previewChanged();

}

// ---externC---
// QPrintPreviewWidget::QPrintPreviewWidget(QPrinter * printer, QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QPrintPreviewWidget_QPrintPreviewWidget_QPrinter_QWidget_WindowFlags
(void *d_ptr,
 void* printer0,
 void* parent1,
 int flags2)
{
    QPrinter*  __qt_printer0 = (QPrinter* ) printer0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QFlags<Qt::WindowType> __qt_flags2 = (QFlags<Qt::WindowType>) flags2;
    QPrintPreviewWidget_QtDShell *__qt_this = new QPrintPreviewWidget_QtDShell(d_ptr, (QPrinter* )__qt_printer0, (QWidget* )__qt_parent1, (Qt::WindowFlags )__qt_flags2);
    return (void *) __qt_this;

}

// QPrintPreviewWidget::QPrintPreviewWidget(QWidget * parent_, QFlags<Qt::WindowType> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QPrintPreviewWidget_QPrintPreviewWidget_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int flags1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_flags1 = (QFlags<Qt::WindowType>) flags1;
    QPrintPreviewWidget_QtDShell *__qt_this = new QPrintPreviewWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_flags1);
    return (void *) __qt_this;

}

// QPrintPreviewWidget::currentPage() const
QTD_EXTERN QTD_EXPORT int qtd_QPrintPreviewWidget_currentPage_const
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentPage();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintPreviewWidget::fitInView()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_fitInView
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->fitInView();

}

// QPrintPreviewWidget::fitToWidth()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_fitToWidth
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->fitToWidth();

}

// QPrintPreviewWidget::numPages() const
QTD_EXTERN QTD_EXPORT int qtd_QPrintPreviewWidget_numPages_const
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->numPages();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintPreviewWidget::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QPrintPreviewWidget_orientation_const
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintPreviewWidget::pageCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPrintPreviewWidget_pageCount_const
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pageCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintPreviewWidget::print()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_print
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->print();

}

// QPrintPreviewWidget::setAllPagesViewMode()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setAllPagesViewMode
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setAllPagesViewMode();

}

// QPrintPreviewWidget::setCurrentPage(int pageNumber)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setCurrentPage_int
(void* __this_nativeId,
 int pageNumber0)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentPage((int )pageNumber0);

}

// QPrintPreviewWidget::setFacingPagesViewMode()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setFacingPagesViewMode
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setFacingPagesViewMode();

}

// QPrintPreviewWidget::setLandscapeOrientation()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setLandscapeOrientation
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setLandscapeOrientation();

}

// QPrintPreviewWidget::setOrientation(QPrinter::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0)
{
    QPrinter::Orientation __qt_orientation0 = (QPrinter::Orientation) orientation0;
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((QPrinter::Orientation )__qt_orientation0);

}

// QPrintPreviewWidget::setPortraitOrientation()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setPortraitOrientation
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setPortraitOrientation();

}

// QPrintPreviewWidget::setSinglePageViewMode()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setSinglePageViewMode
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setSinglePageViewMode();

}

// QPrintPreviewWidget::setViewMode(QPrintPreviewWidget::ViewMode viewMode)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setViewMode_ViewMode
(void* __this_nativeId,
 int viewMode0)
{
    QPrintPreviewWidget::ViewMode __qt_viewMode0 = (QPrintPreviewWidget::ViewMode) viewMode0;
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setViewMode((QPrintPreviewWidget::ViewMode )__qt_viewMode0);

}

// QPrintPreviewWidget::setZoomFactor(double zoomFactor)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setZoomFactor_double
(void* __this_nativeId,
 double zoomFactor0)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setZoomFactor((double )zoomFactor0);

}

// QPrintPreviewWidget::setZoomMode(QPrintPreviewWidget::ZoomMode zoomMode)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setZoomMode_ZoomMode
(void* __this_nativeId,
 int zoomMode0)
{
    QPrintPreviewWidget::ZoomMode __qt_zoomMode0 = (QPrintPreviewWidget::ZoomMode) zoomMode0;
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->setZoomMode((QPrintPreviewWidget::ZoomMode )__qt_zoomMode0);

}

// QPrintPreviewWidget::updatePreview()
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_updatePreview
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->updatePreview();

}

// QPrintPreviewWidget::viewMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPrintPreviewWidget_viewMode_const
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->viewMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintPreviewWidget::zoomFactor() const
QTD_EXTERN QTD_EXPORT double qtd_QPrintPreviewWidget_zoomFactor_const
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->zoomFactor();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintPreviewWidget::zoomIn(double zoom)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_zoomIn_double
(void* __this_nativeId,
 double zoom0)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->zoomIn((double )zoom0);

}

// QPrintPreviewWidget::zoomMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPrintPreviewWidget_zoomMode_const
(void* __this_nativeId)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->zoomMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintPreviewWidget::zoomOut(double zoom)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_zoomOut_double
(void* __this_nativeId,
 double zoom0)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    __qt_this->zoomOut((double )zoom0);

}

// QPrintPreviewWidget::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QPrintPreviewWidget_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QPrintPreviewWidget_QtDShell *__qt_this = (QPrintPreviewWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setVisible((bool )visible0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QPrintPreviewWidget_staticMetaObject() {
    return (void*)&QPrintPreviewWidget::staticMetaObject;
}


