#include <QVariant>
#include <qabstractbutton.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdialogbuttonbox.h>
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
#include <qpushbutton.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QDialogButtonBox_shell.h"
#include <iostream>
#include <qdialogbuttonbox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDialogButtonBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDialogButtonBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_createEntity(void *nativeId, void* dId)
{
    new QDialogButtonBoxEntity((QObject*)nativeId, dId);
}

QDialogButtonBox_QtDShell::QDialogButtonBox_QtDShell(void *d_ptr, QDialogButtonBox::StandardButtons  buttons0, Qt::Orientation  orientation1, QWidget*  parent2)
    : QDialogButtonBox(buttons0, orientation1, parent2),
      QObjectLink(this, d_ptr)
{
}

QDialogButtonBox_QtDShell::QDialogButtonBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QDialogButtonBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QDialogButtonBox_QtDShell::QDialogButtonBox_QtDShell(void *d_ptr, Qt::Orientation  orientation0, QWidget*  parent1)
    : QDialogButtonBox(orientation0, parent1),
      QObjectLink(this, d_ptr)
{
}

QDialogButtonBox_QtDShell::~QDialogButtonBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDialogButtonBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDialogButtonBox::metaObject();
}

int QDialogButtonBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDialogButtonBox::qt_metacall(_c, _id, _a);
}

int QDialogButtonBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDialogButtonBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDialogButtonBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QDialogButtonBox_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QDialogButtonBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QDialogButtonBox_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDialogButtonBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QDialogButtonBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QDialogButtonBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QDialogButtonBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QDialogButtonBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QDialogButtonBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDialogButtonBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QDialogButtonBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QDialogButtonBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDialogButtonBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QDialogButtonBox_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QDialogButtonBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QDialogButtonBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QDialogButtonBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QDialogButtonBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QDialogButtonBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDialogButtonBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QDialogButtonBox_QtDShell::__public_accepted()
{
    QDialogButtonBox::accepted();
}

void QDialogButtonBox_QtDShell::__public_clicked(QAbstractButton*  button0)
{
    QDialogButtonBox::clicked((QAbstractButton* )button0);
}

void QDialogButtonBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QDialogButtonBox_QtDShell::__public_helpRequested()
{
    QDialogButtonBox::helpRequested();
}

void QDialogButtonBox_QtDShell::__public_rejected()
{
    QDialogButtonBox::rejected();
}

// Write virtual function overries used to decide on static/virtual calls
void QDialogButtonBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QDialogButtonBox::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QDialogButtonBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QDialogButtonBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QDialogButtonBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QDialogButtonBox_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QDialogButtonBox::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QDialogButtonBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDialogButtonBox_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QDialogButtonBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QDialogButtonBox_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QDialogButtonBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QDialogButtonBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QDialogButtonBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QDialogButtonBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QDialogButtonBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QDialogButtonBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QDialogButtonBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QDialogButtonBox_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QDialogButtonBox_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QDialogButtonBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QDialogButtonBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QDialogButtonBox_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QDialogButtonBox::accepted()
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_accepted
(void* __this_nativeId)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->__public_accepted();

}

// QDialogButtonBox::clicked(QAbstractButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_clicked_QAbstractButton
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->__public_clicked((QAbstractButton* )__qt_button0);

}

// QDialogButtonBox::helpRequested()
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_helpRequested
(void* __this_nativeId)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->__public_helpRequested();

}

// QDialogButtonBox::rejected()
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_rejected
(void* __this_nativeId)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->__public_rejected();

}

// ---externC---
// QDialogButtonBox::QDialogButtonBox(QFlags<QDialogButtonBox::StandardButton> buttons, Qt::Orientation orientation, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDialogButtonBox_QDialogButtonBox_StandardButtons_Orientation_QWidget
(void *d_ptr,
 int buttons0,
 int orientation1,
 void* parent2)
{
    QFlags<QDialogButtonBox::StandardButton> __qt_buttons0 = (QFlags<QDialogButtonBox::StandardButton>) buttons0;
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QWidget*  __qt_parent2 = (QWidget* ) parent2;
    QDialogButtonBox_QtDShell *__qt_this = new QDialogButtonBox_QtDShell(d_ptr, (QDialogButtonBox::StandardButtons )__qt_buttons0, (Qt::Orientation )__qt_orientation1, (QWidget* )__qt_parent2);
    return (void *) __qt_this;

}

// QDialogButtonBox::QDialogButtonBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDialogButtonBox_QDialogButtonBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QDialogButtonBox_QtDShell *__qt_this = new QDialogButtonBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QDialogButtonBox::QDialogButtonBox(Qt::Orientation orientation, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDialogButtonBox_QDialogButtonBox_Orientation_QWidget
(void *d_ptr,
 int orientation0,
 void* parent1)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QDialogButtonBox_QtDShell *__qt_this = new QDialogButtonBox_QtDShell(d_ptr, (Qt::Orientation )__qt_orientation0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QDialogButtonBox::addButton(QAbstractButton * button, QDialogButtonBox::ButtonRole role)
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_addButton_QAbstractButton_ButtonRole
(void* __this_nativeId,
 void* button0,
 int role1)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QDialogButtonBox::ButtonRole __qt_role1 = (QDialogButtonBox::ButtonRole) role1;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->addButton((QAbstractButton* )__qt_button0, (QDialogButtonBox::ButtonRole )__qt_role1);

}

// QDialogButtonBox::addButton(QDialogButtonBox::StandardButton button)
QTD_EXTERN QTD_EXPORT void* qtd_QDialogButtonBox_addButton_StandardButton
(void* __this_nativeId,
 int button0)
{
    QDialogButtonBox::StandardButton __qt_button0 = (QDialogButtonBox::StandardButton) button0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    QPushButton*  __qt_return_value = __qt_this->addButton((QDialogButtonBox::StandardButton )__qt_button0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::addButton(const QString & text, QDialogButtonBox::ButtonRole role)
QTD_EXTERN QTD_EXPORT void* qtd_QDialogButtonBox_addButton_string_ButtonRole
(void* __this_nativeId,
 DArray text0,
 int role1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QDialogButtonBox::ButtonRole __qt_role1 = (QDialogButtonBox::ButtonRole) role1;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    QPushButton*  __qt_return_value = __qt_this->addButton((const QString& )__qt_text0, (QDialogButtonBox::ButtonRole )__qt_role1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::button(QDialogButtonBox::StandardButton which) const
QTD_EXTERN QTD_EXPORT void* qtd_QDialogButtonBox_button_StandardButton_const
(void* __this_nativeId,
 int which0)
{
    QDialogButtonBox::StandardButton __qt_which0 = (QDialogButtonBox::StandardButton) which0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    QPushButton*  __qt_return_value = __qt_this->button((QDialogButtonBox::StandardButton )__qt_which0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::buttonRole(QAbstractButton * button) const
QTD_EXTERN QTD_EXPORT int qtd_QDialogButtonBox_buttonRole_QAbstractButton_const
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttonRole((QAbstractButton* )__qt_button0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::buttons() const
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_buttons_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    QList<QAbstractButton* >  __qt_return_value = __qt_this->buttons();

QList<QAbstractButton* > &__d_return_value_tmp = (*(QList<QAbstractButton* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDialogButtonBox::centerButtons() const
QTD_EXTERN QTD_EXPORT bool qtd_QDialogButtonBox_centerButtons_const
(void* __this_nativeId)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->centerButtons();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::clear()
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_clear
(void* __this_nativeId)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QDialogButtonBox::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QDialogButtonBox_orientation_const
(void* __this_nativeId)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::removeButton(QAbstractButton * button)
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_removeButton_QAbstractButton
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->removeButton((QAbstractButton* )__qt_button0);

}

// QDialogButtonBox::setCenterButtons(bool center)
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_setCenterButtons_bool
(void* __this_nativeId,
 bool center0)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->setCenterButtons((bool )center0);

}

// QDialogButtonBox::setOrientation(Qt::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_orientation0);

}

// QDialogButtonBox::setStandardButtons(QFlags<QDialogButtonBox::StandardButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_setStandardButtons_StandardButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<QDialogButtonBox::StandardButton> __qt_buttons0 = (QFlags<QDialogButtonBox::StandardButton>) buttons0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    __qt_this->setStandardButtons((QDialogButtonBox::StandardButtons )__qt_buttons0);

}

// QDialogButtonBox::standardButton(QAbstractButton * button) const
QTD_EXTERN QTD_EXPORT int qtd_QDialogButtonBox_standardButton_QAbstractButton_const
(void* __this_nativeId,
 void* button0)
{
    QAbstractButton*  __qt_button0 = (QAbstractButton* ) button0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->standardButton((QAbstractButton* )__qt_button0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::standardButtons() const
QTD_EXTERN QTD_EXPORT int qtd_QDialogButtonBox_standardButtons_const
(void* __this_nativeId)
{
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->standardButtons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDialogButtonBox::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDialogButtonBox_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QDialogButtonBox::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QDialogButtonBox_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QDialogButtonBox_QtDShell *__qt_this = (QDialogButtonBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDialogButtonBox_staticMetaObject() {
    return (void*)&QDialogButtonBox::staticMetaObject;
}


