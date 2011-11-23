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
#include <qtoolbox.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QToolBox_shell.h"
#include <iostream>
#include <qtoolbox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QToolBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QToolBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QToolBox_createEntity(void *nativeId, void* dId)
{
    new QToolBoxEntity((QObject*)nativeId, dId);
}

QToolBox_QtDShell::QToolBox_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  f1)
    : QToolBox(parent0, f1),
      QObjectLink(this, d_ptr)
{
}

QToolBox_QtDShell::~QToolBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QToolBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QToolBox::metaObject();
}

int QToolBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QToolBox::qt_metacall(_c, _id, _a);
}

int QToolBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QToolBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QToolBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QToolBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QToolBox_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QToolBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QToolBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QToolBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QToolBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QToolBox_itemInserted_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QToolBox_itemInserted_int_dispatch)
void QToolBox_QtDShell::itemInserted(int  index0)
{
    qtd_QToolBox_itemInserted_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QToolBox_itemRemoved_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QToolBox_itemRemoved_int_dispatch)
void QToolBox_QtDShell::itemRemoved(int  index0)
{
    qtd_QToolBox_itemRemoved_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QToolBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QToolBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QToolBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QToolBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QToolBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* e0))
void QToolBox_QtDShell::showEvent(QShowEvent*  e0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QToolBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QToolBox_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QToolBox_initCallBacks(VoidFunc *virts) {
    qtd_QToolBox_itemInserted_int_dispatch = (qtd_QToolBox_itemInserted_int_dispatch_t) virts[0];
    qtd_QToolBox_itemRemoved_int_dispatch = (qtd_QToolBox_itemRemoved_int_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QToolBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QToolBox_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QToolBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QToolBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QToolBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QToolBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QToolBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QToolBox_QtDShell::__public_currentChanged(int  index0)
{
    QToolBox::currentChanged((int )index0);
}

void QToolBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

// Write virtual function overries used to decide on static/virtual calls
void QToolBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QToolBox::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QToolBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QToolBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QToolBox_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QToolBox::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QToolBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QToolBox_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QToolBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QToolBox_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QToolBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QToolBox_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QToolBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QToolBox_QtDShell::__override_itemInserted(int  index0, bool static_call)
{
    if (static_call) {
        QToolBox::itemInserted((int )index0);
    } else {
        itemInserted((int )index0);
    }
}

void QToolBox_QtDShell::__override_itemRemoved(int  index0, bool static_call)
{
    if (static_call) {
        QToolBox::itemRemoved((int )index0);
    } else {
        itemRemoved((int )index0);
    }
}

void QToolBox_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QToolBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QToolBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QToolBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QToolBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QToolBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QToolBox_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QToolBox_QtDShell::__override_showEvent(QShowEvent*  e0, bool static_call)
{
    if (static_call) {
        QToolBox::showEvent((QShowEvent* )e0);
    } else {
        showEvent((QShowEvent* )e0);
    }
}

QSize  QToolBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QFrame::sizeHint();
    } else {
        return sizeHint();
    }
}

void QToolBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QToolBox_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QToolBox::currentChanged(int index)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_currentChanged_int
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->__public_currentChanged((int )index0);

}

// ---externC---
// QToolBox::QToolBox(QWidget * parent_, QFlags<Qt::WindowType> f)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBox_QToolBox_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int f1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_f1 = (QFlags<Qt::WindowType>) f1;
    QToolBox_QtDShell *__qt_this = new QToolBox_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_f1);
    return (void *) __qt_this;

}

// QToolBox::addItem(QWidget * widget, const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QToolBox_addItem_QWidget_QIcon_string
(void* __this_nativeId,
 void* widget0,
 void* icon1,
 DArray text2)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addItem((QWidget* )__qt_widget0, (const QIcon& )__qt_icon1, (const QString& )__qt_text2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::addItem(QWidget * widget, const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QToolBox_addItem_QWidget_string
(void* __this_nativeId,
 void* widget0,
 DArray text1)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addItem((QWidget* )__qt_widget0, (const QString& )__qt_text1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::count() const
QTD_EXTERN QTD_EXPORT int qtd_QToolBox_count_const
(void* __this_nativeId)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::currentIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QToolBox_currentIndex_const
(void* __this_nativeId)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::currentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QToolBox_currentWidget_const
(void* __this_nativeId)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->currentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBox::indexOf(QWidget * widget) const
QTD_EXTERN QTD_EXPORT int qtd_QToolBox_indexOf_QWidget_const
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((QWidget* )__qt_widget0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::insertItem(int index, QWidget * widget, const QIcon & icon, const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QToolBox_insertItem_int_QWidget_QIcon_string
(void* __this_nativeId,
 int index0,
 void* widget1,
 void* icon2,
 DArray text3)
{
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    const QIcon&  __qt_icon2 = (const QIcon& ) *(QIcon *)icon2;
    QString __qt_text3 = QString::fromUtf8((const char *)text3.ptr, text3.length);
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertItem((int )index0, (QWidget* )__qt_widget1, (const QIcon& )__qt_icon2, (const QString& )__qt_text3);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::insertItem(int index, QWidget * widget, const QString & text)
QTD_EXTERN QTD_EXPORT int qtd_QToolBox_insertItem_int_QWidget_string
(void* __this_nativeId,
 int index0,
 void* widget1,
 DArray text2)
{
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertItem((int )index0, (QWidget* )__qt_widget1, (const QString& )__qt_text2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::isItemEnabled(int index) const
QTD_EXTERN QTD_EXPORT bool qtd_QToolBox_isItemEnabled_int_const
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isItemEnabled((int )index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::itemIcon(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QToolBox_itemIcon_int_const
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->itemIcon((int )index0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QToolBox::itemText(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_itemText_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->itemText((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QToolBox::itemToolTip(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_itemToolTip_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->itemToolTip((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QToolBox::removeItem(int index)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_removeItem_int
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->removeItem((int )index0);

}

// QToolBox::setCurrentIndex(int index)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_setCurrentIndex_int
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->setCurrentIndex((int )index0);

}

// QToolBox::setCurrentWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_setCurrentWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->setCurrentWidget((QWidget* )__qt_widget0);

}

// QToolBox::setItemEnabled(int index, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_setItemEnabled_int_bool
(void* __this_nativeId,
 int index0,
 bool enabled1)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->setItemEnabled((int )index0, (bool )enabled1);

}

// QToolBox::setItemIcon(int index, const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_setItemIcon_int_QIcon
(void* __this_nativeId,
 int index0,
 void* icon1)
{
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->setItemIcon((int )index0, (const QIcon& )__qt_icon1);

}

// QToolBox::setItemText(int index, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_setItemText_int_string
(void* __this_nativeId,
 int index0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->setItemText((int )index0, (const QString& )__qt_text1);

}

// QToolBox::setItemToolTip(int index, const QString & toolTip)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_setItemToolTip_int_string
(void* __this_nativeId,
 int index0,
 DArray toolTip1)
{
    QString __qt_toolTip1 = QString::fromUtf8((const char *)toolTip1.ptr, toolTip1.length);
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    __qt_this->setItemToolTip((int )index0, (const QString& )__qt_toolTip1);

}

// QToolBox::widget(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QToolBox_widget_int_const
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QToolBox::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QToolBox::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QToolBox_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QToolBox::itemInserted(int index)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_itemInserted_int
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_itemInserted((int )index0, __do_static_call);

}

// QToolBox::itemRemoved(int index)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_itemRemoved_int
(void* __this_nativeId,
 int index0)
{
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_itemRemoved((int )index0, __do_static_call);

}

// QToolBox::showEvent(QShowEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QToolBox_showEvent_QShowEvent
(void* __this_nativeId,
 void* e0)
{
    QShowEvent*  __qt_e0 = (QShowEvent* ) e0;
    QToolBox_QtDShell *__qt_this = (QToolBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_e0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QToolBox_staticMetaObject() {
    return (void*)&QToolBox::staticMetaObject;
}


