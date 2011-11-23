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
#include <qsplitter.h>
#include <qstyle.h>
#include <qtextstream.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QSplitter_shell.h"
#include <iostream>
#include <qsplitter.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QSplitterEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSplitterEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSplitter_createEntity(void *nativeId, void* dId)
{
    new QSplitterEntity((QObject*)nativeId, dId);
}

QSplitter_QtDShell::QSplitter_QtDShell(void *d_ptr, QWidget*  parent0)
    : QSplitter(parent0),
      QObjectLink(this, d_ptr)
{
}

QSplitter_QtDShell::QSplitter_QtDShell(void *d_ptr, Qt::Orientation  arg__1, QWidget*  parent1)
    : QSplitter(arg__1, parent1),
      QObjectLink(this, d_ptr)
{
}

QSplitter_QtDShell::~QSplitter_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSplitter_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSplitter::metaObject();
}

int QSplitter_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSplitter::qt_metacall(_c, _id, _a);
}

int QSplitter_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSplitter::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSplitter_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QSplitter_createHandle_dispatch, (void *dId))
QTD_FUNC(GUI, QSplitter_createHandle_dispatch)
QSplitterHandle*  QSplitter_QtDShell::createHandle()
{
    return (QSplitterHandle*) qtd_QSplitter_createHandle_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QSplitter_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSplitter_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSplitter_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QSplitter_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QSplitter_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QSplitter_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QSplitter_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QSplitter_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QSplitter_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QSplitter_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QSplitter_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QSplitter_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QSplitter_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSplitter_initCallBacks(VoidFunc *virts) {
    qtd_QSplitter_createHandle_dispatch = (qtd_QSplitter_createHandle_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
int  QSplitter_QtDShell::__public_closestLegalPosition(int  arg__1, int  arg__2)
{
    return QSplitter::closestLegalPosition((int )arg__1, (int )arg__2);
}

void QSplitter_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QSplitter_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QSplitter_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QSplitter_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QSplitter_QtDShell::__public_moveSplitter(int  pos0, int  index1)
{
    QSplitter::moveSplitter((int )pos0, (int )index1);
}

void QSplitter_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QSplitter_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSplitter_QtDShell::__public_setRubberBand(int  position0)
{
    QSplitter::setRubberBand((int )position0);
}

void QSplitter_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QSplitter_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QSplitter_QtDShell::__public_splitterMoved(int  pos0, int  index1)
{
    QSplitter::splitterMoved((int )pos0, (int )index1);
}

// Write virtual function overries used to decide on static/virtual calls
void QSplitter_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QSplitter::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QSplitter::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

QSplitterHandle*  QSplitter_QtDShell::__override_createHandle(bool static_call)
{
    if (static_call) {
        return QSplitter::createHandle();
    } else {
        return createHandle();
    }
}

void QSplitter_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QSplitter_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QSplitter_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QSplitter_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QSplitter::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSplitter_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSplitter_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QSplitter_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QSplitter_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QSplitter_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QSplitter_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QSplitter_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QSplitter_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QSplitter_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QSplitter_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QSplitter_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QSplitter::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QSplitter_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QSplitter_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QSplitter_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QSplitter::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QSplitter_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QSplitter_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QSplitter::sizeHint();
    } else {
        return sizeHint();
    }
}

void QSplitter_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QSplitter_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QSplitter::splitterMoved(int pos, int index)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_splitterMoved_int_int
(void* __this_nativeId,
 int pos0,
 int index1)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->__public_splitterMoved((int )pos0, (int )index1);

}

// ---externC---
// QSplitter::QSplitter(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSplitter_QSplitter_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QSplitter_QtDShell *__qt_this = new QSplitter_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QSplitter::QSplitter(Qt::Orientation arg__1, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSplitter_QSplitter_Orientation_QWidget
(void *d_ptr,
 int arg__1,
 void* parent1)
{
    Qt::Orientation __qt_arg__1 = (Qt::Orientation) arg__1;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QSplitter_QtDShell *__qt_this = new QSplitter_QtDShell(d_ptr, (Qt::Orientation )__qt_arg__1, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QSplitter::addWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_addWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->addWidget((QWidget* )__qt_widget0);

}

// QSplitter::childrenCollapsible() const
QTD_EXTERN QTD_EXPORT bool qtd_QSplitter_childrenCollapsible_const
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->childrenCollapsible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::closestLegalPosition(int arg__1, int arg__2)
QTD_EXTERN QTD_EXPORT int qtd_QSplitter_closestLegalPosition_int_int
(void* __this_nativeId,
 int arg__1,
 int arg__2)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_closestLegalPosition((int )arg__1, (int )arg__2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::count() const
QTD_EXTERN QTD_EXPORT int qtd_QSplitter_count_const
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::getRange(int index, int * arg__2, int * arg__3) const
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_getRange_int_nativepointerint_nativepointerint_const
(void* __this_nativeId,
 int index0,
 int* arg__2,
 int* arg__3)
{
    int*  __qt_arg__2 = (int* ) arg__2;
    int*  __qt_arg__3 = (int* ) arg__3;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->getRange((int )index0, (int* )__qt_arg__2, (int* )__qt_arg__3);

}

// QSplitter::handle(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QSplitter_handle_int_const
(void* __this_nativeId,
 int index0)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    QSplitterHandle*  __qt_return_value = __qt_this->handle((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSplitter::handleWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QSplitter_handleWidth_const
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->handleWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::indexOf(QWidget * w) const
QTD_EXTERN QTD_EXPORT int qtd_QSplitter_indexOf_QWidget_const
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOf((QWidget* )__qt_w0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::insertWidget(int index, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_insertWidget_int_QWidget
(void* __this_nativeId,
 int index0,
 void* widget1)
{
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->insertWidget((int )index0, (QWidget* )__qt_widget1);

}

// QSplitter::isCollapsible(int index) const
QTD_EXTERN QTD_EXPORT bool qtd_QSplitter_isCollapsible_int_const
(void* __this_nativeId,
 int index0)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCollapsible((int )index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::moveSplitter(int pos, int index)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_moveSplitter_int_int
(void* __this_nativeId,
 int pos0,
 int index1)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->__public_moveSplitter((int )pos0, (int )index1);

}

// QSplitter::opaqueResize() const
QTD_EXTERN QTD_EXPORT bool qtd_QSplitter_opaqueResize_const
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->opaqueResize();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::operator<<(QTextStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_writeTo_QTextStream
(void* __this_nativeId,
 void* arg__1)
{
    QTextStream&  __qt_arg__1 = (QTextStream& ) * (QTextStream *) arg__1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QTextStream& )__qt_arg__1, *__qt_this);

}

// QSplitter::operator>>(QTextStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_readFrom_QTextStream
(void* __this_nativeId,
 void* arg__1)
{
    QTextStream&  __qt_arg__1 = (QTextStream& ) * (QTextStream *) arg__1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QTextStream& )__qt_arg__1, *__qt_this);

}

// QSplitter::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QSplitter_orientation_const
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::refresh()
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_refresh
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->refresh();

}

// QSplitter::restoreState(const QByteArray & state)
QTD_EXTERN QTD_EXPORT bool qtd_QSplitter_restoreState_QByteArray
(void* __this_nativeId,
 void* state0)
{
    const QByteArray&  __qt_state0 = (const QByteArray& ) *(QByteArray *)state0;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->restoreState((const QByteArray& )__qt_state0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::saveState() const
QTD_EXTERN QTD_EXPORT void* qtd_QSplitter_saveState_const
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->saveState();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QSplitter::setChildrenCollapsible(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setChildrenCollapsible_bool
(void* __this_nativeId,
 bool arg__1)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->setChildrenCollapsible((bool )arg__1);

}

// QSplitter::setCollapsible(int index, bool arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setCollapsible_int_bool
(void* __this_nativeId,
 int index0,
 bool arg__2)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->setCollapsible((int )index0, (bool )arg__2);

}

// QSplitter::setHandleWidth(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setHandleWidth_int
(void* __this_nativeId,
 int arg__1)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->setHandleWidth((int )arg__1);

}

// QSplitter::setOpaqueResize(bool opaque)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setOpaqueResize_bool
(void* __this_nativeId,
 bool opaque0)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->setOpaqueResize((bool )opaque0);

}

// QSplitter::setOrientation(Qt::Orientation arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setOrientation_Orientation
(void* __this_nativeId,
 int arg__1)
{
    Qt::Orientation __qt_arg__1 = (Qt::Orientation) arg__1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_arg__1);

}

// QSplitter::setRubberBand(int position)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setRubberBand_int
(void* __this_nativeId,
 int position0)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->__public_setRubberBand((int )position0);

}

// QSplitter::setSizes(const QList<int > & list)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setSizes_QList
(void* __this_nativeId,
 void* list0)
{
QList<int > __qt_list0 = (*(QList<int > *)list0);
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->setSizes((const QList<int >& )__qt_list0);

}

// QSplitter::setStretchFactor(int index, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_setStretchFactor_int_int
(void* __this_nativeId,
 int index0,
 int stretch1)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    __qt_this->setStretchFactor((int )index0, (int )stretch1);

}

// QSplitter::sizes() const
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_sizes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    QList<int >  __qt_return_value = __qt_this->sizes();

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSplitter::widget(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QSplitter_widget_int_const
(void* __this_nativeId,
 int index0)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSplitter::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QSplitter::childEvent(QChildEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_childEvent_QChildEvent
(void* __this_nativeId,
 void* arg__1)
{
    QChildEvent*  __qt_arg__1 = (QChildEvent* ) arg__1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_childEvent((QChildEvent* )__qt_arg__1, __do_static_call);

}

// QSplitter::createHandle()
QTD_EXTERN QTD_EXPORT void* qtd_QSplitter_createHandle
(void* __this_nativeId)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSplitterHandle*  __qt_return_value = __qt_this->__override_createHandle(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSplitter::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QSplitter_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSplitter::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QSplitter::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QSplitter::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QSplitter_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QSplitter_QtDShell *__qt_this = (QSplitter_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSplitter_staticMetaObject() {
    return (void*)&QSplitter::staticMetaObject;
}


