#include <QTextCharFormat>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
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
#include <qtextformat.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QCalendarWidget_shell.h"
#include <iostream>
#include <qcalendarwidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QCalendarWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QCalendarWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_createEntity(void *nativeId, void* dId)
{
    new QCalendarWidgetEntity((QObject*)nativeId, dId);
}

QCalendarWidget_QtDShell::QCalendarWidget_QtDShell(void *d_ptr, QWidget*  parent0)
    : QCalendarWidget(parent0),
      QObjectLink(this, d_ptr)
{
}

QCalendarWidget_QtDShell::~QCalendarWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QCalendarWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QCalendarWidget::metaObject();
}

int QCalendarWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QCalendarWidget::qt_metacall(_c, _id, _a);
}

int QCalendarWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QCalendarWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QCalendarWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QCalendarWidget_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* watched0, void* event1))
bool  QCalendarWidget_QtDShell::eventFilter(QObject*  watched0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )watched0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QCalendarWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QCalendarWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QCalendarWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QCalendarWidget_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QCalendarWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QCalendarWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QCalendarWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QCalendarWidget_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch, (void *dId, void* painter0, QRect* rect1, void* date2))
QTD_FUNC(GUI, QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch)
void QCalendarWidget_QtDShell::paintCell(QPainter*  painter0, const QRect&  rect1, const QDate&  date2) const
{
    qtd_QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, &(QDate& )date2);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QCalendarWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QCalendarWidget_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QCalendarWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QCalendarWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QCalendarWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_initCallBacks(VoidFunc *virts) {
    qtd_QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch = (qtd_QCalendarWidget_paintCell_QPainter_QRect_QDate_const_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QCalendarWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QCalendarWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QCalendarWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QCalendarWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QCalendarWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QCalendarWidget_QtDShell::__public_updateCell(const QDate&  date0)
{
    QCalendarWidget::updateCell((const QDate& )date0);
}

void QCalendarWidget_QtDShell::__public_updateCells()
{
    QCalendarWidget::updateCells();
}

void QCalendarWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QCalendarWidget_QtDShell::__public_activated(const QDate&  date0)
{
    QCalendarWidget::activated((const QDate& )date0);
}

void QCalendarWidget_QtDShell::__public_clicked(const QDate&  date0)
{
    QCalendarWidget::clicked((const QDate& )date0);
}

void QCalendarWidget_QtDShell::__public_currentPageChanged(int  year0, int  month1)
{
    QCalendarWidget::currentPageChanged((int )year0, (int )month1);
}

void QCalendarWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QCalendarWidget_QtDShell::__public_selectionChanged()
{
    QCalendarWidget::selectionChanged();
}

// Write virtual function overries used to decide on static/virtual calls
void QCalendarWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QCalendarWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QCalendarWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QCalendarWidget_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QCalendarWidget::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QCalendarWidget_QtDShell::__override_eventFilter(QObject*  watched0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QCalendarWidget::eventFilter((QObject* )watched0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )watched0, (QEvent* )event1);
    }
}

void QCalendarWidget_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QCalendarWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QCalendarWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QCalendarWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QCalendarWidget_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QCalendarWidget::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QCalendarWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QCalendarWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QCalendarWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QCalendarWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QCalendarWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QCalendarWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QCalendarWidget::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QCalendarWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_paintCell(QPainter*  painter0, const QRect&  rect1, const QDate&  date2, bool static_call) const
{
    if (static_call) {
        QCalendarWidget::paintCell((QPainter* )painter0, (const QRect& )rect1, (const QDate& )date2);
    } else {
        paintCell((QPainter* )painter0, (const QRect& )rect1, (const QDate& )date2);
    }
}

QPaintEngine*  QCalendarWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QCalendarWidget_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QCalendarWidget::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QCalendarWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QCalendarWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QCalendarWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QCalendarWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QCalendarWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QCalendarWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QCalendarWidget::activated(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_activated_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((const QDate& )__qt_date0);

}

// QCalendarWidget::clicked(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_clicked_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_clicked((const QDate& )__qt_date0);

}

// QCalendarWidget::currentPageChanged(int year, int month)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_currentPageChanged_int_int
(void* __this_nativeId,
 int year0,
 int month1)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentPageChanged((int )year0, (int )month1);

}

// QCalendarWidget::selectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_selectionChanged
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged();

}

// ---externC---
// QCalendarWidget::QCalendarWidget(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_QCalendarWidget_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QCalendarWidget_QtDShell *__qt_this = new QCalendarWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QCalendarWidget::dateEditAcceptDelay() const
QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_dateEditAcceptDelay_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dateEditAcceptDelay();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::dateTextFormat() const
// QCalendarWidget::dateTextFormat(const QDate & date) const
QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_dateTextFormat_QDate_const
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->dateTextFormat((const QDate& )__qt_date0);

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QCalendarWidget::firstDayOfWeek() const
QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_firstDayOfWeek_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->firstDayOfWeek();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::headerTextFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_headerTextFormat_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->headerTextFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QCalendarWidget::horizontalHeaderFormat() const
QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_horizontalHeaderFormat_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->horizontalHeaderFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::isDateEditEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QCalendarWidget_isDateEditEnabled_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDateEditEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::isGridVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QCalendarWidget_isGridVisible_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isGridVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::isNavigationBarVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QCalendarWidget_isNavigationBarVisible_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNavigationBarVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::maximumDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_maximumDate_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->maximumDate();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QCalendarWidget::minimumDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_minimumDate_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->minimumDate();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QCalendarWidget::monthShown() const
QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_monthShown_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->monthShown();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::selectedDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_selectedDate_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->selectedDate();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QCalendarWidget::selectionMode() const
QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_selectionMode_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->selectionMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::setCurrentPage(int year, int month)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setCurrentPage_int_int
(void* __this_nativeId,
 int year0,
 int month1)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentPage((int )year0, (int )month1);

}

// QCalendarWidget::setDateEditAcceptDelay(int delay)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setDateEditAcceptDelay_int
(void* __this_nativeId,
 int delay0)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setDateEditAcceptDelay((int )delay0);

}

// QCalendarWidget::setDateEditEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setDateEditEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setDateEditEnabled((bool )enable0);

}

// QCalendarWidget::setDateRange(const QDate & min, const QDate & max)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setDateRange_QDate_QDate
(void* __this_nativeId,
 void* min0,
 void* max1)
{
    const QDate&  __qt_min0 = (const QDate& ) *(QDate *)min0;
    const QDate&  __qt_max1 = (const QDate& ) *(QDate *)max1;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setDateRange((const QDate& )__qt_min0, (const QDate& )__qt_max1);

}

// QCalendarWidget::setDateTextFormat(const QDate & date, const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setDateTextFormat_QDate_QTextCharFormat
(void* __this_nativeId,
 void* date0,
 void* format1)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    const QTextCharFormat&  __qt_format1 = (const QTextCharFormat& ) *(QTextCharFormat *)format1;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setDateTextFormat((const QDate& )__qt_date0, (const QTextCharFormat& )__qt_format1);

}

// QCalendarWidget::setFirstDayOfWeek(Qt::DayOfWeek dayOfWeek)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setFirstDayOfWeek_DayOfWeek
(void* __this_nativeId,
 int dayOfWeek0)
{
    Qt::DayOfWeek __qt_dayOfWeek0 = (Qt::DayOfWeek) dayOfWeek0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setFirstDayOfWeek((Qt::DayOfWeek )__qt_dayOfWeek0);

}

// QCalendarWidget::setGridVisible(bool show)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setGridVisible_bool
(void* __this_nativeId,
 bool show0)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setGridVisible((bool )show0);

}

// QCalendarWidget::setHeaderTextFormat(const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setHeaderTextFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextCharFormat&  __qt_format0 = (const QTextCharFormat& ) *(QTextCharFormat *)format0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setHeaderTextFormat((const QTextCharFormat& )__qt_format0);

}

// QCalendarWidget::setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setHorizontalHeaderFormat_HorizontalHeaderFormat
(void* __this_nativeId,
 int format0)
{
    QCalendarWidget::HorizontalHeaderFormat __qt_format0 = (QCalendarWidget::HorizontalHeaderFormat) format0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalHeaderFormat((QCalendarWidget::HorizontalHeaderFormat )__qt_format0);

}

// QCalendarWidget::setMaximumDate(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setMaximumDate_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setMaximumDate((const QDate& )__qt_date0);

}

// QCalendarWidget::setMinimumDate(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setMinimumDate_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setMinimumDate((const QDate& )__qt_date0);

}

// QCalendarWidget::setNavigationBarVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setNavigationBarVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setNavigationBarVisible((bool )visible0);

}

// QCalendarWidget::setSelectedDate(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setSelectedDate_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setSelectedDate((const QDate& )__qt_date0);

}

// QCalendarWidget::setSelectionMode(QCalendarWidget::SelectionMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setSelectionMode_SelectionMode
(void* __this_nativeId,
 int mode0)
{
    QCalendarWidget::SelectionMode __qt_mode0 = (QCalendarWidget::SelectionMode) mode0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setSelectionMode((QCalendarWidget::SelectionMode )__qt_mode0);

}

// QCalendarWidget::setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat format)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setVerticalHeaderFormat_VerticalHeaderFormat
(void* __this_nativeId,
 int format0)
{
    QCalendarWidget::VerticalHeaderFormat __qt_format0 = (QCalendarWidget::VerticalHeaderFormat) format0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setVerticalHeaderFormat((QCalendarWidget::VerticalHeaderFormat )__qt_format0);

}

// QCalendarWidget::setWeekdayTextFormat(Qt::DayOfWeek dayOfWeek, const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_setWeekdayTextFormat_DayOfWeek_QTextCharFormat
(void* __this_nativeId,
 int dayOfWeek0,
 void* format1)
{
    Qt::DayOfWeek __qt_dayOfWeek0 = (Qt::DayOfWeek) dayOfWeek0;
    const QTextCharFormat&  __qt_format1 = (const QTextCharFormat& ) *(QTextCharFormat *)format1;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->setWeekdayTextFormat((Qt::DayOfWeek )__qt_dayOfWeek0, (const QTextCharFormat& )__qt_format1);

}

// QCalendarWidget::showNextMonth()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_showNextMonth
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->showNextMonth();

}

// QCalendarWidget::showNextYear()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_showNextYear
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->showNextYear();

}

// QCalendarWidget::showPreviousMonth()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_showPreviousMonth
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->showPreviousMonth();

}

// QCalendarWidget::showPreviousYear()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_showPreviousYear
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->showPreviousYear();

}

// QCalendarWidget::showSelectedDate()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_showSelectedDate
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->showSelectedDate();

}

// QCalendarWidget::showToday()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_showToday
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->showToday();

}

// QCalendarWidget::updateCell(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_updateCell_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_updateCell((const QDate& )__qt_date0);

}

// QCalendarWidget::updateCells()
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_updateCells
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_updateCells();

}

// QCalendarWidget::verticalHeaderFormat() const
QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_verticalHeaderFormat_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalHeaderFormat();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::weekdayTextFormat(Qt::DayOfWeek dayOfWeek) const
QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_weekdayTextFormat_DayOfWeek_const
(void* __this_nativeId,
 int dayOfWeek0)
{
    Qt::DayOfWeek __qt_dayOfWeek0 = (Qt::DayOfWeek) dayOfWeek0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->weekdayTextFormat((Qt::DayOfWeek )__qt_dayOfWeek0);

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QCalendarWidget::yearShown() const
QTD_EXTERN QTD_EXPORT int qtd_QCalendarWidget_yearShown_const
(void* __this_nativeId)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->yearShown();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QCalendarWidget_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::eventFilter(QObject * watched, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QCalendarWidget_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* watched0,
 void* event1)
{
    QObject*  __qt_watched0 = (QObject* ) watched0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_watched0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCalendarWidget::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QCalendarWidget::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QCalendarWidget::mousePressEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QCalendarWidget::paintCell(QPainter * painter, const QRect & rect, const QDate & date) const
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_paintCell_QPainter_QRect_QDate_const
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 void* date2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QDate&  __qt_date2 = (const QDate& ) *(QDate *)date2;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintCell((QPainter* )__qt_painter0, (const QRect& )rect1, (const QDate& )__qt_date2, __do_static_call);

}

// QCalendarWidget::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QCalendarWidget::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QCalendarWidget_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QCalendarWidget_QtDShell *__qt_this = (QCalendarWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QCalendarWidget_staticMetaObject() {
    return (void*)&QCalendarWidget::staticMetaObject;
}


