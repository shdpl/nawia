#include <QPainterPath>
#include <QVarLengthArray>
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
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsscene.h>
#include <qgraphicsview.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpolygon.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QGraphicsView_shell.h"
#include <iostream>
#include <qgraphicsview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QGraphicsViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGraphicsViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_createEntity(void *nativeId, void* dId)
{
    new QGraphicsViewEntity((QObject*)nativeId, dId);
}

QGraphicsView_QtDShell::QGraphicsView_QtDShell(void *d_ptr, QGraphicsScene*  scene0, QWidget*  parent1)
    : QGraphicsView(scene0, parent1),
      QObjectLink(this, d_ptr)
{
}

QGraphicsView_QtDShell::QGraphicsView_QtDShell(void *d_ptr, QWidget*  parent0)
    : QGraphicsView(parent0),
      QObjectLink(this, d_ptr)
{
}

QGraphicsView_QtDShell::~QGraphicsView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGraphicsView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGraphicsView::metaObject();
}

int QGraphicsView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGraphicsView::qt_metacall(_c, _id, _a);
}

int QGraphicsView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGraphicsView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::contextMenuEvent(QContextMenuEvent*  event0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QGraphicsView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  event0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::dragMoveEvent(QDragMoveEvent*  event0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsView_drawBackground_QPainter_QRectF_dispatch, (void *dId, void* painter0, QRectF* rect1))
QTD_FUNC(GUI, QGraphicsView_drawBackground_QPainter_QRectF_dispatch)
void QGraphicsView_QtDShell::drawBackground(QPainter*  painter0, const QRectF&  rect1)
{
    qtd_QGraphicsView_drawBackground_QPainter_QRectF_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRectF& )rect1);
}

QTD_FUNC_DECL(GUI, void, QGraphicsView_drawForeground_QPainter_QRectF_dispatch, (void *dId, void* painter0, QRectF* rect1))
QTD_FUNC(GUI, QGraphicsView_drawForeground_QPainter_QRectF_dispatch)
void QGraphicsView_QtDShell::drawForeground(QPainter*  painter0, const QRectF&  rect1)
{
    qtd_QGraphicsView_drawForeground_QPainter_QRectF_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRectF& )rect1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsView_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGraphicsView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QGraphicsView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QGraphicsView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QGraphicsView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QGraphicsView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QGraphicsView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGraphicsView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QGraphicsView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QGraphicsView_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QGraphicsView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGraphicsView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsView_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QGraphicsView_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* event0))
void QGraphicsView_QtDShell::wheelEvent(QWheelEvent*  event0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_initCallBacks(VoidFunc *virts) {
    qtd_QGraphicsView_drawBackground_QPainter_QRectF_dispatch = (qtd_QGraphicsView_drawBackground_QPainter_QRectF_dispatch_t) virts[0];
    qtd_QGraphicsView_drawForeground_QPainter_QRectF_dispatch = (qtd_QGraphicsView_drawForeground_QPainter_QRectF_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QGraphicsView_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QGraphicsView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QGraphicsView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QGraphicsView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QGraphicsView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGraphicsView_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QGraphicsView_QtDShell::__public_setupViewport(QWidget*  widget0)
{
    QGraphicsView::setupViewport((QWidget* )widget0);
}

void QGraphicsView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QGraphicsView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QGraphicsView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QGraphicsView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QGraphicsView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QGraphicsView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::contextMenuEvent((QContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QContextMenuEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QGraphicsView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QGraphicsView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::dragLeaveEvent((QDragLeaveEvent* )event0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::dragMoveEvent((QDragMoveEvent* )event0);
    } else {
        dragMoveEvent((QDragMoveEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_drawBackground(QPainter*  painter0, const QRectF&  rect1, bool static_call)
{
    if (static_call) {
        QGraphicsView::drawBackground((QPainter* )painter0, (const QRectF& )rect1);
    } else {
        drawBackground((QPainter* )painter0, (const QRectF& )rect1);
    }
}

void QGraphicsView_QtDShell::__override_drawForeground(QPainter*  painter0, const QRectF&  rect1, bool static_call)
{
    if (static_call) {
        QGraphicsView::drawForeground((QPainter* )painter0, (const QRectF& )rect1);
    } else {
        drawForeground((QPainter* )painter0, (const QRectF& )rect1);
    }
}

void QGraphicsView_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QGraphicsView_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsView::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QGraphicsView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QGraphicsView_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QGraphicsView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QGraphicsView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QGraphicsView_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QGraphicsView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QGraphicsView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QGraphicsView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QGraphicsView_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QGraphicsView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

void QGraphicsView_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QGraphicsView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QGraphicsView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QGraphicsView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QGraphicsView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QGraphicsView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QGraphicsView_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QGraphicsView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QGraphicsView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QGraphicsView_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSize  QGraphicsView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QGraphicsView::sizeHint();
    } else {
        return sizeHint();
    }
}

void QGraphicsView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QGraphicsView_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

bool  QGraphicsView_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QGraphicsView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

void QGraphicsView_QtDShell::__override_wheelEvent(QWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QGraphicsView::wheelEvent((QWheelEvent* )event0);
    } else {
        wheelEvent((QWheelEvent* )event0);
    }
}

// ---externC---
// QGraphicsView::QGraphicsView(QGraphicsScene * scene, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_QGraphicsView_QGraphicsScene_QWidget
(void *d_ptr,
 void* scene0,
 void* parent1)
{
    QGraphicsScene*  __qt_scene0 = (QGraphicsScene* ) scene0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QGraphicsView_QtDShell *__qt_this = new QGraphicsView_QtDShell(d_ptr, (QGraphicsScene* )__qt_scene0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QGraphicsView::QGraphicsView(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_QGraphicsView_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QGraphicsView_QtDShell *__qt_this = new QGraphicsView_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QGraphicsView::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_alignment_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::backgroundBrush() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_backgroundBrush_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->backgroundBrush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::cacheMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_cacheMode_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cacheMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::centerOn(const QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_centerOn_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->centerOn((const QGraphicsItem* )__qt_item0);

}

// QGraphicsView::centerOn(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_centerOn_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->centerOn((const QPointF& )pos0);

}

// QGraphicsView::centerOn(double x, double y)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_centerOn_double_double
(void* __this_nativeId,
 double x0,
 double y1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->centerOn((double )x0, (double )y1);

}

// QGraphicsView::dragMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_dragMode_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dragMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::ensureVisible(const QGraphicsItem * item, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_ensureVisible_QGraphicsItem_int_int
(void* __this_nativeId,
 void* item0,
 int xmargin1,
 int ymargin2)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->ensureVisible((const QGraphicsItem* )__qt_item0, (int )xmargin1, (int )ymargin2);

}

// QGraphicsView::ensureVisible(const QRectF & rect, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_ensureVisible_QRectF_int_int
(void* __this_nativeId,
 QRectF rect0,
 int xmargin1,
 int ymargin2)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->ensureVisible((const QRectF& )rect0, (int )xmargin1, (int )ymargin2);

}

// QGraphicsView::ensureVisible(double x, double y, double w, double h, int xmargin, int ymargin)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_ensureVisible_double_double_double_double_int_int
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int xmargin4,
 int ymargin5)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->ensureVisible((double )x0, (double )y1, (double )w2, (double )h3, (int )xmargin4, (int )ymargin5);

}

// QGraphicsView::fitInView(const QGraphicsItem * item, Qt::AspectRatioMode aspectRadioMode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_fitInView_QGraphicsItem_AspectRatioMode
(void* __this_nativeId,
 void* item0,
 int aspectRadioMode1)
{
    const QGraphicsItem*  __qt_item0 = (const QGraphicsItem* ) item0;
    Qt::AspectRatioMode __qt_aspectRadioMode1 = (Qt::AspectRatioMode) aspectRadioMode1;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->fitInView((const QGraphicsItem* )__qt_item0, (Qt::AspectRatioMode )__qt_aspectRadioMode1);

}

// QGraphicsView::fitInView(const QRectF & rect, Qt::AspectRatioMode aspectRadioMode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_fitInView_QRectF_AspectRatioMode
(void* __this_nativeId,
 QRectF rect0,
 int aspectRadioMode1)
{
    Qt::AspectRatioMode __qt_aspectRadioMode1 = (Qt::AspectRatioMode) aspectRadioMode1;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->fitInView((const QRectF& )rect0, (Qt::AspectRatioMode )__qt_aspectRadioMode1);

}

// QGraphicsView::fitInView(double x, double y, double w, double h, Qt::AspectRatioMode aspectRadioMode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_fitInView_double_double_double_double_AspectRatioMode
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3,
 int aspectRadioMode4)
{
    Qt::AspectRatioMode __qt_aspectRadioMode4 = (Qt::AspectRatioMode) aspectRadioMode4;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->fitInView((double )x0, (double )y1, (double )w2, (double )h3, (Qt::AspectRatioMode )__qt_aspectRadioMode4);

}

// QGraphicsView::foregroundBrush() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_foregroundBrush_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QBrush  __qt_return_value = __qt_this->foregroundBrush();

    void* __d_return_value = (void*) new QBrush(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::invalidateScene(const QRectF & rect, QFlags<QGraphicsScene::SceneLayer> layers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_invalidateScene_QRectF_SceneLayers
(void* __this_nativeId,
 QRectF rect0,
 int layers1)
{
    QFlags<QGraphicsScene::SceneLayer> __qt_layers1 = (QFlags<QGraphicsScene::SceneLayer>) layers1;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->invalidateScene((const QRectF& )rect0, (QGraphicsScene::SceneLayers )__qt_layers1);

}

// QGraphicsView::isInteractive() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsView_isInteractive_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isInteractive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::isTransformed() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsView_isTransformed_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isTransformed();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::itemAt(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_itemAt_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->itemAt((const QPoint& )pos0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::itemAt(int x, int y) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_itemAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->itemAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::items() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_items_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items();

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsView::items(const QPainterPath & path, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_items_QPainterPath_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 void* path0,
 int mode1)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPainterPath& )__qt_path0, (Qt::ItemSelectionMode )__qt_mode1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsView::items(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_items_QPoint_const
(void* __this_nativeId,
 void* __d_return_value,
 QPoint pos0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPoint& )pos0);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsView::items(const QPolygon & polygon, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_items_QPolygon_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 void* polygon0,
 int mode1)
{
    const QPolygon&  __qt_polygon0 = (const QPolygon& ) *(QPolygon *)polygon0;
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QPolygon& )__qt_polygon0, (Qt::ItemSelectionMode )__qt_mode1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsView::items(const QRect & rect, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_items_QRect_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 QRect rect0,
 int mode1)
{
    Qt::ItemSelectionMode __qt_mode1 = (Qt::ItemSelectionMode) mode1;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((const QRect& )rect0, (Qt::ItemSelectionMode )__qt_mode1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsView::items(int x, int y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_items_int_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int x0,
 int y1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((int )x0, (int )y1);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsView::items(int x, int y, int w, int h, Qt::ItemSelectionMode mode) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_items_int_int_int_int_ItemSelectionMode_const
(void* __this_nativeId,
 void* __d_return_value,
 int x0,
 int y1,
 int w2,
 int h3,
 int mode4)
{
    Qt::ItemSelectionMode __qt_mode4 = (Qt::ItemSelectionMode) mode4;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QList<QGraphicsItem* >  __qt_return_value = __qt_this->items((int )x0, (int )y1, (int )w2, (int )h3, (Qt::ItemSelectionMode )__qt_mode4);

QList<QGraphicsItem* > &__d_return_value_tmp = (*(QList<QGraphicsItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QGraphicsView::mapFromScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapFromScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapFromScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::mapFromScene(const QPointF & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mapFromScene_QPointF_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 QPointF point0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapFromScene((const QPointF& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsView::mapFromScene(const QPolygonF & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapFromScene_QPolygonF_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygonF&  __qt_polygon0 = (const QPolygonF& ) *(QPolygonF *)polygon0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->mapFromScene((const QPolygonF& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::mapFromScene(const QRectF & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapFromScene_QRectF_const
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->mapFromScene((const QRectF& )rect0);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::mapFromScene(double x, double y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mapFromScene_double_double_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 double x0,
 double y1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapFromScene((double )x0, (double )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsView::mapFromScene(double x, double y, double w, double h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapFromScene_double_double_double_double_const
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPolygon  __qt_return_value = __qt_this->mapFromScene((double )x0, (double )y1, (double )w2, (double )h3);

    void* __d_return_value = (void*) new QPolygon(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::mapToScene(const QPainterPath & path) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapToScene_QPainterPath_const
(void* __this_nativeId,
 void* path0)
{
    const QPainterPath&  __qt_path0 = (const QPainterPath& ) *(QPainterPath *)path0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPainterPath  __qt_return_value = __qt_this->mapToScene((const QPainterPath& )__qt_path0);

    void* __d_return_value = (void*) new QPainterPath(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::mapToScene(const QPoint & point) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mapToScene_QPoint_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 QPoint point0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToScene((const QPoint& )point0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsView::mapToScene(const QPolygon & polygon) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapToScene_QPolygon_const
(void* __this_nativeId,
 void* polygon0)
{
    const QPolygon&  __qt_polygon0 = (const QPolygon& ) *(QPolygon *)polygon0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToScene((const QPolygon& )__qt_polygon0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::mapToScene(const QRect & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapToScene_QRect_const
(void* __this_nativeId,
 QRect rect0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToScene((const QRect& )rect0);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::mapToScene(int x, int y) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mapToScene_int_int_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 int x0,
 int y1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->mapToScene((int )x0, (int )y1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsView::mapToScene(int x, int y, int w, int h) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_mapToScene_int_int_int_int_const
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QPolygonF  __qt_return_value = __qt_this->mapToScene((int )x0, (int )y1, (int )w2, (int )h3);

    void* __d_return_value = (void*) new QPolygonF(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::matrix() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_matrix_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QMatrix  __qt_return_value = __qt_this->matrix();

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::optimizationFlags() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_optimizationFlags_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->optimizationFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::render(QPainter * painter, const QRectF & target, const QRect & source, Qt::AspectRatioMode aspectRatioMode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_render_QPainter_QRectF_QRect_AspectRatioMode
(void* __this_nativeId,
 void* painter0,
 QRectF target1,
 QRect source2,
 int aspectRatioMode3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    Qt::AspectRatioMode __qt_aspectRatioMode3 = (Qt::AspectRatioMode) aspectRatioMode3;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_painter0, (const QRectF& )target1, (const QRect& )source2, (Qt::AspectRatioMode )__qt_aspectRatioMode3);

}

// QGraphicsView::renderHints() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_renderHints_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->renderHints();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::resetCachedContent()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_resetCachedContent
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->resetCachedContent();

}

// QGraphicsView::resetMatrix()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_resetMatrix
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->resetMatrix();

}

// QGraphicsView::resetTransform()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_resetTransform
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->resetTransform();

}

// QGraphicsView::resizeAnchor() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_resizeAnchor_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->resizeAnchor();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::rotate(double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_rotate_double
(void* __this_nativeId,
 double angle0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->rotate((double )angle0);

}

// QGraphicsView::rubberBandSelectionMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_rubberBandSelectionMode_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rubberBandSelectionMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::scale(double sx, double sy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_scale_double_double
(void* __this_nativeId,
 double sx0,
 double sy1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->scale((double )sx0, (double )sy1);

}

// QGraphicsView::scene() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_scene_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QGraphicsScene*  __qt_return_value = __qt_this->scene();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::sceneRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_sceneRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->sceneRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsView::setAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_alignment0);

}

// QGraphicsView::setBackgroundBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setBackgroundBrush_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setBackgroundBrush((const QBrush& )__qt_brush0);

}

// QGraphicsView::setCacheMode(QFlags<QGraphicsView::CacheModeFlag> mode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setCacheMode_CacheMode
(void* __this_nativeId,
 int mode0)
{
    QFlags<QGraphicsView::CacheModeFlag> __qt_mode0 = (QFlags<QGraphicsView::CacheModeFlag>) mode0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setCacheMode((QGraphicsView::CacheMode )__qt_mode0);

}

// QGraphicsView::setDragMode(QGraphicsView::DragMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setDragMode_DragMode
(void* __this_nativeId,
 int mode0)
{
    QGraphicsView::DragMode __qt_mode0 = (QGraphicsView::DragMode) mode0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setDragMode((QGraphicsView::DragMode )__qt_mode0);

}

// QGraphicsView::setForegroundBrush(const QBrush & brush)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setForegroundBrush_QBrush
(void* __this_nativeId,
 void* brush0)
{
    const QBrush&  __qt_brush0 = (const QBrush& ) *(QBrush *)brush0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setForegroundBrush((const QBrush& )__qt_brush0);

}

// QGraphicsView::setInteractive(bool allowed)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setInteractive_bool
(void* __this_nativeId,
 bool allowed0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setInteractive((bool )allowed0);

}

// QGraphicsView::setMatrix(const QMatrix & matrix, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setMatrix_QMatrix_bool
(void* __this_nativeId,
 void* matrix0,
 bool combine1)
{
    const QMatrix&  __qt_matrix0 = (const QMatrix& ) *(QMatrix *)matrix0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setMatrix((const QMatrix& )__qt_matrix0, (bool )combine1);

}

// QGraphicsView::setOptimizationFlag(QGraphicsView::OptimizationFlag flag, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setOptimizationFlag_OptimizationFlag_bool
(void* __this_nativeId,
 int flag0,
 bool enabled1)
{
    QGraphicsView::OptimizationFlag __qt_flag0 = (QGraphicsView::OptimizationFlag) flag0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setOptimizationFlag((QGraphicsView::OptimizationFlag )__qt_flag0, (bool )enabled1);

}

// QGraphicsView::setOptimizationFlags(QFlags<QGraphicsView::OptimizationFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setOptimizationFlags_OptimizationFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QGraphicsView::OptimizationFlag> __qt_flags0 = (QFlags<QGraphicsView::OptimizationFlag>) flags0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setOptimizationFlags((QGraphicsView::OptimizationFlags )__qt_flags0);

}

// QGraphicsView::setRenderHint(QPainter::RenderHint hint, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setRenderHint_RenderHint_bool
(void* __this_nativeId,
 int hint0,
 bool enabled1)
{
    QPainter::RenderHint __qt_hint0 = (QPainter::RenderHint) hint0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setRenderHint((QPainter::RenderHint )__qt_hint0, (bool )enabled1);

}

// QGraphicsView::setRenderHints(QFlags<QPainter::RenderHint> hints)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setRenderHints_RenderHints
(void* __this_nativeId,
 int hints0)
{
    QFlags<QPainter::RenderHint> __qt_hints0 = (QFlags<QPainter::RenderHint>) hints0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setRenderHints((QPainter::RenderHints )__qt_hints0);

}

// QGraphicsView::setResizeAnchor(QGraphicsView::ViewportAnchor anchor)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setResizeAnchor_ViewportAnchor
(void* __this_nativeId,
 int anchor0)
{
    QGraphicsView::ViewportAnchor __qt_anchor0 = (QGraphicsView::ViewportAnchor) anchor0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setResizeAnchor((QGraphicsView::ViewportAnchor )__qt_anchor0);

}

// QGraphicsView::setRubberBandSelectionMode(Qt::ItemSelectionMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setRubberBandSelectionMode_ItemSelectionMode
(void* __this_nativeId,
 int mode0)
{
    Qt::ItemSelectionMode __qt_mode0 = (Qt::ItemSelectionMode) mode0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setRubberBandSelectionMode((Qt::ItemSelectionMode )__qt_mode0);

}

// QGraphicsView::setScene(QGraphicsScene * scene)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setScene_QGraphicsScene
(void* __this_nativeId,
 void* scene0)
{
    QGraphicsScene*  __qt_scene0 = (QGraphicsScene* ) scene0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setScene((QGraphicsScene* )__qt_scene0);

}

// QGraphicsView::setSceneRect(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setSceneRect_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setSceneRect((const QRectF& )rect0);

}

// QGraphicsView::setSceneRect(double x, double y, double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setSceneRect_double_double_double_double
(void* __this_nativeId,
 double x0,
 double y1,
 double w2,
 double h3)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setSceneRect((double )x0, (double )y1, (double )w2, (double )h3);

}

// QGraphicsView::setTransform(const QTransform & matrix, bool combine)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setTransform_QTransform_bool
(void* __this_nativeId,
 void* matrix0,
 bool combine1)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setTransform((const QTransform& )__qt_matrix0, (bool )combine1);

}

// QGraphicsView::setTransformationAnchor(QGraphicsView::ViewportAnchor anchor)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setTransformationAnchor_ViewportAnchor
(void* __this_nativeId,
 int anchor0)
{
    QGraphicsView::ViewportAnchor __qt_anchor0 = (QGraphicsView::ViewportAnchor) anchor0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setTransformationAnchor((QGraphicsView::ViewportAnchor )__qt_anchor0);

}

// QGraphicsView::setViewportUpdateMode(QGraphicsView::ViewportUpdateMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setViewportUpdateMode_ViewportUpdateMode
(void* __this_nativeId,
 int mode0)
{
    QGraphicsView::ViewportUpdateMode __qt_mode0 = (QGraphicsView::ViewportUpdateMode) mode0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->setViewportUpdateMode((QGraphicsView::ViewportUpdateMode )__qt_mode0);

}

// QGraphicsView::setupViewport(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_setupViewport_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->__public_setupViewport((QWidget* )__qt_widget0);

}

// QGraphicsView::shear(double sh, double sv)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_shear_double_double
(void* __this_nativeId,
 double sh0,
 double sv1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->shear((double )sh0, (double )sv1);

}

// QGraphicsView::transform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_transform_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->transform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::transformationAnchor() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_transformationAnchor_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->transformationAnchor();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::translate(double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_translate_double_double
(void* __this_nativeId,
 double dx0,
 double dy1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->translate((double )dx0, (double )dy1);

}

// QGraphicsView::updateScene(const QList<QRectF > & rects)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_updateScene_QList
(void* __this_nativeId,
 void* rects0)
{
QList<QRectF > __qt_rects0 = (*(QList<QRectF > *)rects0);
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->updateScene((const QList<QRectF >& )__qt_rects0);

}

// QGraphicsView::updateSceneRect(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_updateSceneRect_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    __qt_this->updateSceneRect((const QRectF& )rect0);

}

// QGraphicsView::viewportTransform() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_viewportTransform_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    QTransform  __qt_return_value = __qt_this->viewportTransform();

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::viewportUpdateMode() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsView_viewportUpdateMode_const
(void* __this_nativeId)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->viewportUpdateMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::contextMenuEvent(QContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QContextMenuEvent*  __qt_event0 = (QContextMenuEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::dragEnterEvent(QDragEnterEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* event0)
{
    QDragEnterEvent*  __qt_event0 = (QDragEnterEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::dragLeaveEvent(QDragLeaveEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* event0)
{
    QDragLeaveEvent*  __qt_event0 = (QDragLeaveEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::dragMoveEvent(QDragMoveEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* event0)
{
    QDragMoveEvent*  __qt_event0 = (QDragMoveEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::drawBackground(QPainter * painter, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_drawBackground_QPainter_QRectF
(void* __this_nativeId,
 void* painter0,
 QRectF rect1)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawBackground((QPainter* )__qt_painter0, (const QRectF& )rect1, __do_static_call);

}

// QGraphicsView::drawForeground(QPainter * painter, const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_drawForeground_QPainter_QRectF
(void* __this_nativeId,
 void* painter0,
 QRectF rect1)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawForeground((QPainter* )__qt_painter0, (const QRectF& )rect1, __do_static_call);

}

// QGraphicsView::dropEvent(QDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_dropEvent_QDropEvent
(void* __this_nativeId,
 void* event0)
{
    QDropEvent*  __qt_event0 = (QDropEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsView_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsView_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::inputMethodEvent(QInputMethodEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* event0)
{
    QInputMethodEvent*  __qt_event0 = (QInputMethodEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::inputMethodQuery(Qt::InputMethodQuery query) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int query0)
{
    Qt::InputMethodQuery __qt_query0 = (Qt::InputMethodQuery) query0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_query0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QGraphicsView::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::keyReleaseEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::mouseDoubleClickEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::mouseMoveEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::mousePressEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::mouseReleaseEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QGraphicsView::showEvent(QShowEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_showEvent_QShowEvent
(void* __this_nativeId,
 void* event0)
{
    QShowEvent*  __qt_event0 = (QShowEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_event0, __do_static_call);

}

// QGraphicsView::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsView::viewportEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsView_viewportEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_viewportEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsView::wheelEvent(QWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsView_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QWheelEvent*  __qt_event0 = (QWheelEvent* ) event0;
    QGraphicsView_QtDShell *__qt_this = (QGraphicsView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsView_staticMetaObject() {
    return (void*)&QGraphicsView::staticMetaObject;
}


