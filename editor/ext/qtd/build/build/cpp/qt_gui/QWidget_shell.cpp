#include <QIcon>
#include <QMessageBox>
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
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QWidget_shell.h"
#include <iostream>
#include <qwidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QWidget_cast_to_QPaintDevice(QWidget *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

class QWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWidget_createEntity(void *nativeId, void* dId)
{
    new QWidgetEntity((QObject*)nativeId, dId);
}

QWidget_QtDShell::QWidget_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  f1)
    : QWidget(parent0, f1),
      QObjectLink(this, d_ptr)
{
}

QWidget_QtDShell::~QWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QWidget::metaObject();
}

int QWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QWidget::qt_metacall(_c, _id, _a);
}

int QWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_actionEvent_QActionEvent_dispatch)
void QWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_changeEvent_QEvent_dispatch)
void QWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_closeEvent_QCloseEvent_dispatch)
void QWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_contextMenuEvent_QContextMenuEvent_dispatch)
void QWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_dragEnterEvent_QDragEnterEvent_dispatch)
void QWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch)
void QWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_dragMoveEvent_QDragMoveEvent_dispatch)
void QWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_dropEvent_QDropEvent_dispatch)
void QWidget_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_enterEvent_QEvent_dispatch)
void QWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QWidget_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_focusInEvent_QFocusEvent_dispatch)
void QWidget_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
QTD_FUNC(GUI, QWidget_focusNextPrevChild_bool_dispatch)
bool  QWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_focusOutEvent_QFocusEvent_dispatch)
void QWidget_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
QTD_FUNC(GUI, QWidget_heightForWidth_int_const_dispatch)
int  QWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_hideEvent_QHideEvent_dispatch)
void QWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_inputMethodEvent_QInputMethodEvent_dispatch)
void QWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QTD_FUNC(GUI, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch)
QVariant  QWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_keyPressEvent_QKeyEvent_dispatch)
void QWidget_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_keyReleaseEvent_QKeyEvent_dispatch)
void QWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
QTD_FUNC(GUI, QWidget_languageChange_dispatch)
void QWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_leaveEvent_QEvent_dispatch)
void QWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QTD_FUNC(GUI, QWidget_minimumSizeHint_const_dispatch)
QSize  QWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch)
void QWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_mouseMoveEvent_QMouseEvent_dispatch)
void QWidget_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_mousePressEvent_QMouseEvent_dispatch)
void QWidget_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_mouseReleaseEvent_QMouseEvent_dispatch)
void QWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_moveEvent_QMoveEvent_dispatch)
void QWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_paintEvent_QPaintEvent_dispatch)
void QWidget_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_resizeEvent_QResizeEvent_dispatch)
void QWidget_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
QTD_FUNC(GUI, QWidget_setVisible_bool_dispatch)
void QWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_showEvent_QShowEvent_dispatch)
void QWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QTD_FUNC(GUI, QWidget_sizeHint_const_dispatch)
QSize  QWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_tabletEvent_QTabletEvent_dispatch)
void QWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QWidget_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QWidget_wheelEvent_QWheelEvent_dispatch)
void QWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QWidget_initCallBacks(VoidFunc *virts) {
    qtd_QWidget_actionEvent_QActionEvent_dispatch = (qtd_QWidget_actionEvent_QActionEvent_dispatch_t) virts[0];
    qtd_QWidget_changeEvent_QEvent_dispatch = (qtd_QWidget_changeEvent_QEvent_dispatch_t) virts[1];
    qtd_QWidget_closeEvent_QCloseEvent_dispatch = (qtd_QWidget_closeEvent_QCloseEvent_dispatch_t) virts[2];
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch = (qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch_t) virts[3];
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch = (qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch_t) virts[4];
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch = (qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch_t) virts[5];
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch = (qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch_t) virts[6];
    qtd_QWidget_dropEvent_QDropEvent_dispatch = (qtd_QWidget_dropEvent_QDropEvent_dispatch_t) virts[7];
    qtd_QWidget_enterEvent_QEvent_dispatch = (qtd_QWidget_enterEvent_QEvent_dispatch_t) virts[8];
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch = (qtd_QWidget_focusInEvent_QFocusEvent_dispatch_t) virts[9];
    qtd_QWidget_focusNextPrevChild_bool_dispatch = (qtd_QWidget_focusNextPrevChild_bool_dispatch_t) virts[10];
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch = (qtd_QWidget_focusOutEvent_QFocusEvent_dispatch_t) virts[11];
    qtd_QWidget_heightForWidth_int_const_dispatch = (qtd_QWidget_heightForWidth_int_const_dispatch_t) virts[12];
    qtd_QWidget_hideEvent_QHideEvent_dispatch = (qtd_QWidget_hideEvent_QHideEvent_dispatch_t) virts[13];
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch = (qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch_t) virts[14];
    qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch = (qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch_t) virts[15];
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch = (qtd_QWidget_keyPressEvent_QKeyEvent_dispatch_t) virts[16];
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch = (qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch_t) virts[17];
    qtd_QWidget_languageChange_dispatch = (qtd_QWidget_languageChange_dispatch_t) virts[18];
    qtd_QWidget_leaveEvent_QEvent_dispatch = (qtd_QWidget_leaveEvent_QEvent_dispatch_t) virts[19];
    qtd_QWidget_minimumSizeHint_const_dispatch = (qtd_QWidget_minimumSizeHint_const_dispatch_t) virts[20];
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch = (qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch_t) virts[21];
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch = (qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch_t) virts[22];
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch = (qtd_QWidget_mousePressEvent_QMouseEvent_dispatch_t) virts[23];
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch = (qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch_t) virts[24];
    qtd_QWidget_moveEvent_QMoveEvent_dispatch = (qtd_QWidget_moveEvent_QMoveEvent_dispatch_t) virts[25];
    qtd_QWidget_paintEvent_QPaintEvent_dispatch = (qtd_QWidget_paintEvent_QPaintEvent_dispatch_t) virts[26];
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch = (qtd_QWidget_resizeEvent_QResizeEvent_dispatch_t) virts[27];
    qtd_QWidget_setVisible_bool_dispatch = (qtd_QWidget_setVisible_bool_dispatch_t) virts[28];
    qtd_QWidget_showEvent_QShowEvent_dispatch = (qtd_QWidget_showEvent_QShowEvent_dispatch_t) virts[29];
    qtd_QWidget_sizeHint_const_dispatch = (qtd_QWidget_sizeHint_const_dispatch_t) virts[30];
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch = (qtd_QWidget_tabletEvent_QTabletEvent_dispatch_t) virts[31];
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch = (qtd_QWidget_wheelEvent_QWheelEvent_dispatch_t) virts[32];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

// Write virtual function overries used to decide on static/virtual calls
void QWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QWidget_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QWidget_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QWidget_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QWidget_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::sizeHint();
    } else {
        return sizeHint();
    }
}

void QWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QWidget::customContextMenuRequested(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_customContextMenuRequested_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_customContextMenuRequested((const QPoint& )pos0);

}

// ---externC---
// QWidget::QWidget(QWidget * parent_, QFlags<Qt::WindowType> f)
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_QWidget_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int f1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_f1 = (QFlags<Qt::WindowType>) f1;
    QWidget_QtDShell *__qt_this = new QWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_f1);
    return (void *) __qt_this;

}

// QWidget::acceptDrops() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_acceptDrops_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->acceptDrops();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::accessibleDescription() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_accessibleDescription_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->accessibleDescription();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::accessibleName() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_accessibleName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->accessibleName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::actions() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_actions_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QList<QAction* >  __qt_return_value = __qt_this->actions();

QList<QAction* > &__d_return_value_tmp = (*(QList<QAction* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QWidget::activateWindow()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_activateWindow
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->activateWindow();

}

// QWidget::addAction(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_addAction_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->addAction((QAction* )__qt_action0);

}

// QWidget::addActions(QList<QAction * > actions)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_addActions_QList
(void* __this_nativeId,
 void* actions0)
{
QList<QAction* > __qt_actions0 = (*(QList<QAction* > *)actions0);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->addActions((QList<QAction* > )__qt_actions0);

}

// QWidget::adjustSize()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_adjustSize
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->adjustSize();

}

// QWidget::autoFillBackground() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_autoFillBackground_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoFillBackground();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::backgroundRole() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_backgroundRole_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->backgroundRole();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::baseSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_baseSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->baseSize();

    *__d_return_value = __qt_return_value;

}

// QWidget::childAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_childAt_QPoint_const
(void* __this_nativeId,
 QPoint p0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->childAt((const QPoint& )p0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::childAt(int x, int y) const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_childAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->childAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::childrenRect() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_childrenRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->childrenRect();

    *__d_return_value = __qt_return_value;

}

// QWidget::childrenRegion() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_childrenRegion_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->childrenRegion();

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QWidget::clearFocus()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_clearFocus
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->clearFocus();

}

// QWidget::clearMask()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_clearMask
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->clearMask();

}

// QWidget::close()
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_close
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->close();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_colorCount_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::contentsRect() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_contentsRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->contentsRect();

    *__d_return_value = __qt_return_value;

}

// QWidget::contextMenuPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_contextMenuPolicy_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->contextMenuPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::createWinId()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_createWinId
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->createWinId();

}

// QWidget::cursor() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_cursor_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QCursor  __qt_return_value = __qt_this->cursor();

    void* __d_return_value = (void*) new QCursor(__qt_return_value);

    return __d_return_value;
}

// QWidget::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_depth_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::destroy(bool destroyWindow, bool destroySubWindows)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_destroy_bool_bool
(void* __this_nativeId,
 bool destroyWindow0,
 bool destroySubWindows1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_destroy((bool )destroyWindow0, (bool )destroySubWindows1);

}

// QWidget::effectiveWinId() const
QTD_EXTERN QTD_EXPORT WId qtd_QWidget_effectiveWinId_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    WId  __qt_return_value = __qt_this->effectiveWinId();

    WId __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::ensurePolished() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_ensurePolished_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->ensurePolished();

}

// QWidget::focusNextChild()
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_focusNextChild
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_focusNextChild();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::focusPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_focusPolicy_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->focusPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::focusPreviousChild()
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_focusPreviousChild
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_focusPreviousChild();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::focusProxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_focusProxy_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->focusProxy();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::focusWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_focusWidget_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->focusWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::font() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_font_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    const QFont&  __qt_return_value = __qt_this->font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QWidget::fontInfo() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_fontInfo_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QFontInfo  __qt_return_value = __qt_this->fontInfo();

    void* __d_return_value = (void*) new QFontInfo(__qt_return_value);

    return __d_return_value;
}

// QWidget::fontMetrics() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_fontMetrics_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QFontMetrics  __qt_return_value = __qt_this->fontMetrics();

    void* __d_return_value = (void*) new QFontMetrics(__qt_return_value);

    return __d_return_value;
}

// QWidget::foregroundRole() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_foregroundRole_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->foregroundRole();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::frameGeometry() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_frameGeometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->frameGeometry();

    *__d_return_value = __qt_return_value;

}

// QWidget::frameSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_frameSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->frameSize();

    *__d_return_value = __qt_return_value;

}

// QWidget::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_geometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    const QRect&  __qt_return_value = __qt_this->geometry();

    *__d_return_value = __qt_return_value;

}

// QWidget::getContentsMargins(int * left, int * top, int * right, int * bottom) const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_getContentsMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const
(void* __this_nativeId,
 int* left0,
 int* top1,
 int* right2,
 int* bottom3)
{
    int*  __qt_left0 = (int* ) left0;
    int*  __qt_top1 = (int* ) top1;
    int*  __qt_right2 = (int* ) right2;
    int*  __qt_bottom3 = (int* ) bottom3;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->getContentsMargins((int* )__qt_left0, (int* )__qt_top1, (int* )__qt_right2, (int* )__qt_bottom3);

}

// QWidget::grabKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_grabKeyboard
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->grabKeyboard();

}

// QWidget::grabMouse()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_grabMouse
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->grabMouse();

}

// QWidget::grabMouse(const QCursor & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_grabMouse_QCursor
(void* __this_nativeId,
 void* arg__1)
{
    const QCursor&  __qt_arg__1 = (const QCursor& ) *(QCursor *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->grabMouse((const QCursor& )__qt_arg__1);

}

// QWidget::grabShortcut(const QKeySequence & key, Qt::ShortcutContext context)
QTD_EXTERN QTD_EXPORT int qtd_QWidget_grabShortcut_QKeySequence_ShortcutContext
(void* __this_nativeId,
 void* key0,
 int context1)
{
    const QKeySequence&  __qt_key0 = (const QKeySequence& ) *(QKeySequence *)key0;
    Qt::ShortcutContext __qt_context1 = (Qt::ShortcutContext) context1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->grabShortcut((const QKeySequence& )__qt_key0, (Qt::ShortcutContext )__qt_context1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::graphicsProxyWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_graphicsProxyWidget_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QGraphicsProxyWidget*  __qt_return_value = __qt_this->graphicsProxyWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::hasFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_hasFocus_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::hasMouseTracking() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_hasMouseTracking_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasMouseTracking();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::height() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_height_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_heightMM_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::hide()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_hide
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->hide();

}

// QWidget::inputContext()
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_inputContext
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QInputContext*  __qt_return_value = __qt_this->inputContext();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::insertAction(QAction * before, QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_insertAction_QAction_QAction
(void* __this_nativeId,
 void* before0,
 void* action1)
{
    QAction*  __qt_before0 = (QAction* ) before0;
    QAction*  __qt_action1 = (QAction* ) action1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->insertAction((QAction* )__qt_before0, (QAction* )__qt_action1);

}

// QWidget::insertActions(QAction * before, QList<QAction * > actions)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_insertActions_QAction_QList
(void* __this_nativeId,
 void* before0,
 void* actions1)
{
    QAction*  __qt_before0 = (QAction* ) before0;
QList<QAction* > __qt_actions1 = (*(QList<QAction* > *)actions1);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->insertActions((QAction* )__qt_before0, (QList<QAction* > )__qt_actions1);

}

// QWidget::isActiveWindow() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isActiveWindow_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActiveWindow();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isAncestorOf(const QWidget * child) const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isAncestorOf_QWidget_const
(void* __this_nativeId,
 void* child0)
{
    const QWidget*  __qt_child0 = (const QWidget* ) child0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAncestorOf((const QWidget* )__qt_child0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isEnabled_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isEnabledTo(QWidget * arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isEnabledTo_QWidget_const
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabledTo((QWidget* )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isFullScreen() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isFullScreen_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFullScreen();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isHidden() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isHidden_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isHidden();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isLeftToRight() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isLeftToRight_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isLeftToRight();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isMaximized() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isMaximized_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMaximized();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isMinimized() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isMinimized_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isMinimized();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isModal() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isModal_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isModal();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isRightToLeft() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isRightToLeft_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRightToLeft();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isVisible_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isVisibleTo(QWidget * arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isVisibleTo_QWidget_const
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isVisibleTo((QWidget* )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isWindow() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isWindow_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWindow();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::isWindowModified() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_isWindowModified_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWindowModified();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::layout() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_layout_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QLayout*  __qt_return_value = __qt_this->layout();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::layoutDirection() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_layoutDirection_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->layoutDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::locale() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_locale_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QLocale  __qt_return_value = __qt_this->locale();

    void* __d_return_value = (void*) new QLocale(__qt_return_value);

    return __d_return_value;
}

// QWidget::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_logicalDpiX_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_logicalDpiY_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::lower()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_lower
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->lower();

}

// QWidget::mapFrom(QWidget * arg__1, const QPoint & arg__2) const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mapFrom_QWidget_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 void* arg__1,
 QPoint arg__2)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapFrom((QWidget* )__qt_arg__1, (const QPoint& )arg__2);

    *__d_return_value = __qt_return_value;

}

// QWidget::mapFromGlobal(const QPoint & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mapFromGlobal_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapFromGlobal((const QPoint& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QWidget::mapFromParent(const QPoint & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mapFromParent_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapFromParent((const QPoint& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QWidget::mapTo(QWidget * arg__1, const QPoint & arg__2) const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mapTo_QWidget_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 void* arg__1,
 QPoint arg__2)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapTo((QWidget* )__qt_arg__1, (const QPoint& )arg__2);

    *__d_return_value = __qt_return_value;

}

// QWidget::mapToGlobal(const QPoint & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mapToGlobal_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapToGlobal((const QPoint& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QWidget::mapToParent(const QPoint & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mapToParent_QPoint_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 QPoint arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->mapToParent((const QPoint& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QWidget::mask() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_mask_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->mask();

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QWidget::maximumHeight() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_maximumHeight_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximumHeight();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_maximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->maximumSize();

    *__d_return_value = __qt_return_value;

}

// QWidget::maximumWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_maximumWidth_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximumWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::minimumHeight() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_minimumHeight_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimumHeight();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->minimumSize();

    *__d_return_value = __qt_return_value;

}

// QWidget::minimumWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_minimumWidth_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimumWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::move(const QPoint & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_move_QPoint
(void* __this_nativeId,
 QPoint arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->move((const QPoint& )arg__1);

}

// QWidget::move(int x, int y)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_move_int_int
(void* __this_nativeId,
 int x0,
 int y1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->move((int )x0, (int )y1);

}

// QWidget::nativeParentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_nativeParentWidget_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->nativeParentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::nextInFocusChain() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_nextInFocusChain_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->nextInFocusChain();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::normalGeometry() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_normalGeometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->normalGeometry();

    *__d_return_value = __qt_return_value;

}

// QWidget::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_numColors_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::overrideWindowFlags(QFlags<Qt::WindowType> type)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_overrideWindowFlags_WindowFlags
(void* __this_nativeId,
 int type0)
{
    QFlags<Qt::WindowType> __qt_type0 = (QFlags<Qt::WindowType>) type0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->overrideWindowFlags((Qt::WindowFlags )__qt_type0);

}

// QWidget::overrideWindowState(QFlags<Qt::WindowState> state)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_overrideWindowState_WindowStates
(void* __this_nativeId,
 int state0)
{
    QFlags<Qt::WindowState> __qt_state0 = (QFlags<Qt::WindowState>) state0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->overrideWindowState((Qt::WindowStates )__qt_state0);

}

// QWidget::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_paintingActive_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::palette() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_palette_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    const QPalette&  __qt_return_value = __qt_this->palette();

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QWidget::parentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_parentWidget_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->parentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_physicalDpiX_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_physicalDpiY_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_pos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QWidget::previousInFocusChain() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_previousInFocusChain_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->previousInFocusChain();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::raise()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_raise
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->raise();

}

// QWidget::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_rect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QWidget::releaseKeyboard()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_releaseKeyboard
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->releaseKeyboard();

}

// QWidget::releaseMouse()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_releaseMouse
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->releaseMouse();

}

// QWidget::releaseShortcut(int id)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_releaseShortcut_int
(void* __this_nativeId,
 int id0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->releaseShortcut((int )id0);

}

// QWidget::removeAction(QAction * action)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_removeAction_QAction
(void* __this_nativeId,
 void* action0)
{
    QAction*  __qt_action0 = (QAction* ) action0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->removeAction((QAction* )__qt_action0);

}

// QWidget::render(QPaintDevice * target, const QPoint & targetOffset, const QRegion & sourceRegion, QFlags<QWidget::RenderFlag> renderFlags)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_render_QPaintDevice_QPoint_QRegion_RenderFlags
(void* __this_nativeId,
 void* target0,
 QPoint targetOffset1,
 void* sourceRegion2,
 int renderFlags3)
{
    QPaintDevice*  __qt_target0 = (QPaintDevice* ) target0;
    const QRegion&  __qt_sourceRegion2 = (const QRegion& ) *(QRegion *)sourceRegion2;
    QFlags<QWidget::RenderFlag> __qt_renderFlags3 = (QFlags<QWidget::RenderFlag>) renderFlags3;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->render((QPaintDevice* )__qt_target0, (const QPoint& )targetOffset1, (const QRegion& )__qt_sourceRegion2, (QWidget::RenderFlags )__qt_renderFlags3);

}

// QWidget::render(QPainter * painter, const QPoint & targetOffset, const QRegion & sourceRegion, QFlags<QWidget::RenderFlag> renderFlags)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_render_QPainter_QPoint_QRegion_RenderFlags
(void* __this_nativeId,
 void* painter0,
 QPoint targetOffset1,
 void* sourceRegion2,
 int renderFlags3)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QRegion&  __qt_sourceRegion2 = (const QRegion& ) *(QRegion *)sourceRegion2;
    QFlags<QWidget::RenderFlag> __qt_renderFlags3 = (QFlags<QWidget::RenderFlag>) renderFlags3;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->render((QPainter* )__qt_painter0, (const QPoint& )targetOffset1, (const QRegion& )__qt_sourceRegion2, (QWidget::RenderFlags )__qt_renderFlags3);

}

// QWidget::repaint()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_repaint
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->repaint();

}

// QWidget::repaint(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_repaint_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->repaint((const QRect& )arg__1);

}

// QWidget::repaint(const QRegion & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_repaint_QRegion
(void* __this_nativeId,
 void* arg__1)
{
    const QRegion&  __qt_arg__1 = (const QRegion& ) *(QRegion *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->repaint((const QRegion& )__qt_arg__1);

}

// QWidget::repaint(int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_repaint_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->repaint((int )x0, (int )y1, (int )w2, (int )h3);

}

// QWidget::resetInputContext()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_resetInputContext
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_resetInputContext();

}

// QWidget::resize(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_resize_QSize
(void* __this_nativeId,
 QSize arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->resize((const QSize& )arg__1);

}

// QWidget::resize(int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_resize_int_int
(void* __this_nativeId,
 int w0,
 int h1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->resize((int )w0, (int )h1);

}

// QWidget::restoreGeometry(const QByteArray & geometry)
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_restoreGeometry_QByteArray
(void* __this_nativeId,
 void* geometry0)
{
    const QByteArray&  __qt_geometry0 = (const QByteArray& ) *(QByteArray *)geometry0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->restoreGeometry((const QByteArray& )__qt_geometry0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::saveGeometry() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_saveGeometry_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->saveGeometry();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QWidget::scroll(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_scroll_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->scroll((int )dx0, (int )dy1);

}

// QWidget::scroll(int dx, int dy, const QRect & arg__3)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_scroll_int_int_QRect
(void* __this_nativeId,
 int dx0,
 int dy1,
 QRect arg__3)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->scroll((int )dx0, (int )dy1, (const QRect& )arg__3);

}

// QWidget::setAcceptDrops(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setAcceptDrops_bool
(void* __this_nativeId,
 bool on0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setAcceptDrops((bool )on0);

}

// QWidget::setAccessibleDescription(const QString & description)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setAccessibleDescription_string
(void* __this_nativeId,
 DArray description0)
{
    QString __qt_description0 = QString::fromUtf8((const char *)description0.ptr, description0.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setAccessibleDescription((const QString& )__qt_description0);

}

// QWidget::setAccessibleName(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setAccessibleName_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setAccessibleName((const QString& )__qt_name0);

}

// QWidget::setAttribute(Qt::WidgetAttribute arg__1, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setAttribute_WidgetAttribute_bool
(void* __this_nativeId,
 int arg__1,
 bool on1)
{
    Qt::WidgetAttribute __qt_arg__1 = (Qt::WidgetAttribute) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setAttribute((Qt::WidgetAttribute )__qt_arg__1, (bool )on1);

}

// QWidget::setAutoFillBackground(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setAutoFillBackground_bool
(void* __this_nativeId,
 bool enabled0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setAutoFillBackground((bool )enabled0);

}

// QWidget::setBackgroundRole(QPalette::ColorRole arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setBackgroundRole_ColorRole
(void* __this_nativeId,
 int arg__1)
{
    QPalette::ColorRole __qt_arg__1 = (QPalette::ColorRole) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setBackgroundRole((QPalette::ColorRole )__qt_arg__1);

}

// QWidget::setBaseSize(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setBaseSize_QSize
(void* __this_nativeId,
 QSize arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setBaseSize((const QSize& )arg__1);

}

// QWidget::setBaseSize(int basew, int baseh)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setBaseSize_int_int
(void* __this_nativeId,
 int basew0,
 int baseh1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setBaseSize((int )basew0, (int )baseh1);

}

// QWidget::setContentsMargins(int left, int top, int right, int bottom)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setContentsMargins_int_int_int_int
(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setContentsMargins((int )left0, (int )top1, (int )right2, (int )bottom3);

}

// QWidget::setContextMenuPolicy(Qt::ContextMenuPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setContextMenuPolicy_ContextMenuPolicy
(void* __this_nativeId,
 int policy0)
{
    Qt::ContextMenuPolicy __qt_policy0 = (Qt::ContextMenuPolicy) policy0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setContextMenuPolicy((Qt::ContextMenuPolicy )__qt_policy0);

}

// QWidget::setCursor(const QCursor & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setCursor_QCursor
(void* __this_nativeId,
 void* arg__1)
{
    const QCursor&  __qt_arg__1 = (const QCursor& ) *(QCursor *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setCursor((const QCursor& )__qt_arg__1);

}

// QWidget::setDisabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setDisabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setDisabled((bool )arg__1);

}

// QWidget::setEnabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setEnabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )arg__1);

}

// QWidget::setFixedHeight(int h)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFixedHeight_int
(void* __this_nativeId,
 int h0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFixedHeight((int )h0);

}

// QWidget::setFixedSize(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFixedSize_QSize
(void* __this_nativeId,
 QSize arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFixedSize((const QSize& )arg__1);

}

// QWidget::setFixedSize(int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFixedSize_int_int
(void* __this_nativeId,
 int w0,
 int h1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFixedSize((int )w0, (int )h1);

}

// QWidget::setFixedWidth(int w)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFixedWidth_int
(void* __this_nativeId,
 int w0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFixedWidth((int )w0);

}

// QWidget::setFocus()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFocus
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFocus();

}

// QWidget::setFocus(Qt::FocusReason reason)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFocus_FocusReason
(void* __this_nativeId,
 int reason0)
{
    Qt::FocusReason __qt_reason0 = (Qt::FocusReason) reason0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFocus((Qt::FocusReason )__qt_reason0);

}

// QWidget::setFocusPolicy(Qt::FocusPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFocusPolicy_FocusPolicy
(void* __this_nativeId,
 int policy0)
{
    Qt::FocusPolicy __qt_policy0 = (Qt::FocusPolicy) policy0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFocusPolicy((Qt::FocusPolicy )__qt_policy0);

}

// QWidget::setFocusProxy(QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFocusProxy_QWidget
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFocusProxy((QWidget* )__qt_arg__1);

}

// QWidget::setFont(const QFont & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setFont_QFont
(void* __this_nativeId,
 void* arg__1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setFont((const QFont& )__qt_arg__1);

}

// QWidget::setForegroundRole(QPalette::ColorRole arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setForegroundRole_ColorRole
(void* __this_nativeId,
 int arg__1)
{
    QPalette::ColorRole __qt_arg__1 = (QPalette::ColorRole) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setForegroundRole((QPalette::ColorRole )__qt_arg__1);

}

// QWidget::setGeometry(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setGeometry_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setGeometry((const QRect& )arg__1);

}

// QWidget::setGeometry(int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setGeometry_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setGeometry((int )x0, (int )y1, (int )w2, (int )h3);

}

// QWidget::setHidden(bool hidden)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setHidden_bool
(void* __this_nativeId,
 bool hidden0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setHidden((bool )hidden0);

}

// QWidget::setInputContext(QInputContext * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setInputContext_QInputContext
(void* __this_nativeId,
 void* arg__1)
{
    QInputContext*  __qt_arg__1 = (QInputContext* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setInputContext((QInputContext* )__qt_arg__1);

}

// QWidget::setLayout(QLayout * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setLayout_QLayout
(void* __this_nativeId,
 void* arg__1)
{
    QLayout*  __qt_arg__1 = (QLayout* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setLayout((QLayout* )__qt_arg__1);

}

// QWidget::setLayoutDirection(Qt::LayoutDirection direction)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setLayoutDirection_LayoutDirection
(void* __this_nativeId,
 int direction0)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setLayoutDirection((Qt::LayoutDirection )__qt_direction0);

}

// QWidget::setLocale(const QLocale & locale)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setLocale_QLocale
(void* __this_nativeId,
 void* locale0)
{
    const QLocale&  __qt_locale0 = (const QLocale& ) *(QLocale *)locale0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setLocale((const QLocale& )__qt_locale0);

}

// QWidget::setMask(const QBitmap & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMask_QBitmap
(void* __this_nativeId,
 void* arg__1)
{
    const QBitmap&  __qt_arg__1 = (const QBitmap& ) *(QBitmap *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMask((const QBitmap& )__qt_arg__1);

}

// QWidget::setMask(const QRegion & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMask_QRegion
(void* __this_nativeId,
 void* arg__1)
{
    const QRegion&  __qt_arg__1 = (const QRegion& ) *(QRegion *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMask((const QRegion& )__qt_arg__1);

}

// QWidget::setMaximumHeight(int maxh)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMaximumHeight_int
(void* __this_nativeId,
 int maxh0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMaximumHeight((int )maxh0);

}

// QWidget::setMaximumSize(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMaximumSize_QSize
(void* __this_nativeId,
 QSize arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMaximumSize((const QSize& )arg__1);

}

// QWidget::setMaximumSize(int maxw, int maxh)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMaximumSize_int_int
(void* __this_nativeId,
 int maxw0,
 int maxh1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMaximumSize((int )maxw0, (int )maxh1);

}

// QWidget::setMaximumWidth(int maxw)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMaximumWidth_int
(void* __this_nativeId,
 int maxw0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMaximumWidth((int )maxw0);

}

// QWidget::setMinimumHeight(int minh)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMinimumHeight_int
(void* __this_nativeId,
 int minh0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMinimumHeight((int )minh0);

}

// QWidget::setMinimumSize(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMinimumSize_QSize
(void* __this_nativeId,
 QSize arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMinimumSize((const QSize& )arg__1);

}

// QWidget::setMinimumSize(int minw, int minh)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMinimumSize_int_int
(void* __this_nativeId,
 int minw0,
 int minh1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMinimumSize((int )minw0, (int )minh1);

}

// QWidget::setMinimumWidth(int minw)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMinimumWidth_int
(void* __this_nativeId,
 int minw0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMinimumWidth((int )minw0);

}

// QWidget::setMouseTracking(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setMouseTracking_bool
(void* __this_nativeId,
 bool enable0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setMouseTracking((bool )enable0);

}

// QWidget::setPalette(const QPalette & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setPalette_QPalette
(void* __this_nativeId,
 void* arg__1)
{
    const QPalette&  __qt_arg__1 = (const QPalette& ) *(QPalette *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setPalette((const QPalette& )__qt_arg__1);

}

// QWidget::setParent(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setParent_QWidget
(void* __this_nativeId,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setParent((QWidget* )__qt_parent0);

}

// QWidget::setParent(QWidget * parent_, QFlags<Qt::WindowType> f)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setParent_QWidget_WindowFlags
(void* __this_nativeId,
 void* parent0,
 int f1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_f1 = (QFlags<Qt::WindowType>) f1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setParent((QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_f1);

}

// QWidget::setShortcutAutoRepeat(int id, bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setShortcutAutoRepeat_int_bool
(void* __this_nativeId,
 int id0,
 bool enable1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setShortcutAutoRepeat((int )id0, (bool )enable1);

}

// QWidget::setShortcutEnabled(int id, bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setShortcutEnabled_int_bool
(void* __this_nativeId,
 int id0,
 bool enable1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setShortcutEnabled((int )id0, (bool )enable1);

}

// QWidget::setSizeIncrement(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setSizeIncrement_QSize
(void* __this_nativeId,
 QSize arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setSizeIncrement((const QSize& )arg__1);

}

// QWidget::setSizeIncrement(int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setSizeIncrement_int_int
(void* __this_nativeId,
 int w0,
 int h1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setSizeIncrement((int )w0, (int )h1);

}

// QWidget::setSizePolicy(QSizePolicy arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setSizePolicy_QSizePolicy
(void* __this_nativeId,
 void* arg__1)
{
    QSizePolicy  __qt_arg__1 = (QSizePolicy ) *(QSizePolicy *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setSizePolicy((QSizePolicy )__qt_arg__1);

}

// QWidget::setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setSizePolicy_Policy_Policy
(void* __this_nativeId,
 int horizontal0,
 int vertical1)
{
    QSizePolicy::Policy __qt_horizontal0 = (QSizePolicy::Policy) horizontal0;
    QSizePolicy::Policy __qt_vertical1 = (QSizePolicy::Policy) vertical1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setSizePolicy((QSizePolicy::Policy )__qt_horizontal0, (QSizePolicy::Policy )__qt_vertical1);

}

// QWidget::setStatusTip(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setStatusTip_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setStatusTip((const QString& )__qt_arg__1);

}

// QWidget::setStyle(QStyle * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setStyle_QStyle
(void* __this_nativeId,
 void* arg__1)
{
    QStyle*  __qt_arg__1 = (QStyle* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setStyle((QStyle* )__qt_arg__1);

}

// QWidget::setStyleSheet(const QString & styleSheet)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setStyleSheet_string
(void* __this_nativeId,
 DArray styleSheet0)
{
    QString __qt_styleSheet0 = QString::fromUtf8((const char *)styleSheet0.ptr, styleSheet0.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setStyleSheet((const QString& )__qt_styleSheet0);

}

// QWidget::setToolTip(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setToolTip_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setToolTip((const QString& )__qt_arg__1);

}

// QWidget::setUpdatesEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setUpdatesEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setUpdatesEnabled((bool )enable0);

}

// QWidget::setWhatsThis(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWhatsThis_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWhatsThis((const QString& )__qt_arg__1);

}

// QWidget::setWindowFilePath(const QString & filePath)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowFilePath_string
(void* __this_nativeId,
 DArray filePath0)
{
    QString __qt_filePath0 = QString::fromUtf8((const char *)filePath0.ptr, filePath0.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowFilePath((const QString& )__qt_filePath0);

}

// QWidget::setWindowFlags(QFlags<Qt::WindowType> type)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowFlags_WindowFlags
(void* __this_nativeId,
 int type0)
{
    QFlags<Qt::WindowType> __qt_type0 = (QFlags<Qt::WindowType>) type0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowFlags((Qt::WindowFlags )__qt_type0);

}

// QWidget::setWindowIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowIcon((const QIcon& )__qt_icon0);

}

// QWidget::setWindowIconText(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowIconText_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowIconText((const QString& )__qt_arg__1);

}

// QWidget::setWindowModality(Qt::WindowModality windowModality)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowModality_WindowModality
(void* __this_nativeId,
 int windowModality0)
{
    Qt::WindowModality __qt_windowModality0 = (Qt::WindowModality) windowModality0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowModality((Qt::WindowModality )__qt_windowModality0);

}

// QWidget::setWindowModified(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowModified_bool
(void* __this_nativeId,
 bool arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowModified((bool )arg__1);

}

// QWidget::setWindowOpacity(double level)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowOpacity_double
(void* __this_nativeId,
 double level0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowOpacity((double )level0);

}

// QWidget::setWindowRole(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowRole_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowRole((const QString& )__qt_arg__1);

}

// QWidget::setWindowState(QFlags<Qt::WindowState> state)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowState_WindowStates
(void* __this_nativeId,
 int state0)
{
    QFlags<Qt::WindowState> __qt_state0 = (QFlags<Qt::WindowState>) state0;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowState((Qt::WindowStates )__qt_state0);

}

// QWidget::setWindowTitle(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setWindowTitle_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->setWindowTitle((const QString& )__qt_arg__1);

}

// QWidget::show()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_show
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->show();

}

// QWidget::showFullScreen()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_showFullScreen
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->showFullScreen();

}

// QWidget::showMaximized()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_showMaximized
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->showMaximized();

}

// QWidget::showMinimized()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_showMinimized
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->showMinimized();

}

// QWidget::showNormal()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_showNormal
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->showNormal();

}

// QWidget::size() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QWidget::sizeIncrement() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_sizeIncrement_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->sizeIncrement();

    *__d_return_value = __qt_return_value;

}

// QWidget::sizePolicy() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_sizePolicy_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QSizePolicy  __qt_return_value = __qt_this->sizePolicy();

    void* __d_return_value = (void*) new QSizePolicy(__qt_return_value);

    return __d_return_value;
}

// QWidget::stackUnder(QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_stackUnder_QWidget
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->stackUnder((QWidget* )__qt_arg__1);

}

// QWidget::statusTip() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_statusTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->statusTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::style() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_style_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QStyle*  __qt_return_value = __qt_this->style();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::styleSheet() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_styleSheet_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->styleSheet();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::testAttribute(Qt::WidgetAttribute arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_testAttribute_WidgetAttribute_const
(void* __this_nativeId,
 int arg__1)
{
    Qt::WidgetAttribute __qt_arg__1 = (Qt::WidgetAttribute) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testAttribute((Qt::WidgetAttribute )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::toolTip() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_toolTip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toolTip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::underMouse() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_underMouse_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->underMouse();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::unsetCursor()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_unsetCursor
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->unsetCursor();

}

// QWidget::unsetLayoutDirection()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_unsetLayoutDirection
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->unsetLayoutDirection();

}

// QWidget::unsetLocale()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_unsetLocale
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->unsetLocale();

}

// QWidget::update()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_update
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->update();

}

// QWidget::update(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_update_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->update((const QRect& )arg__1);

}

// QWidget::update(const QRegion & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_update_QRegion
(void* __this_nativeId,
 void* arg__1)
{
    const QRegion&  __qt_arg__1 = (const QRegion& ) *(QRegion *)arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->update((const QRegion& )__qt_arg__1);

}

// QWidget::update(int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_update_int_int_int_int
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->update((int )x0, (int )y1, (int )w2, (int )h3);

}

// QWidget::updateGeometry()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_updateGeometry
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->updateGeometry();

}

// QWidget::updateMicroFocus()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_updateMicroFocus
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_updateMicroFocus();

}

// QWidget::updatesEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_updatesEnabled_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->updatesEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::visibleRegion() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_visibleRegion_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QRegion  __qt_return_value = __qt_this->visibleRegion();

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// QWidget::whatsThis() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_whatsThis_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->whatsThis();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::width() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_width_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_widthMM_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::winId() const
QTD_EXTERN QTD_EXPORT WId qtd_QWidget_winId_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    WId  __qt_return_value = __qt_this->winId();

    WId __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::window() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_window_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->window();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::windowFilePath() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_windowFilePath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->windowFilePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::windowFlags() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_windowFlags_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->windowFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::windowIcon() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_windowIcon_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->windowIcon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QWidget::windowIconText() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_windowIconText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->windowIconText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::windowModality() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_windowModality_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->windowModality();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::windowOpacity() const
QTD_EXTERN QTD_EXPORT double qtd_QWidget_windowOpacity_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->windowOpacity();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::windowRole() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_windowRole_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->windowRole();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::windowState() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_windowState_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->windowState();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::windowTitle() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_windowTitle_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->windowTitle();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWidget::windowType() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_windowType_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->windowType();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::x() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_x_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->x();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::y() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_y_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->y();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::actionEvent(QActionEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_actionEvent_QActionEvent
(void* __this_nativeId,
 void* arg__1)
{
    QActionEvent*  __qt_arg__1 = (QActionEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_actionEvent((QActionEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::closeEvent(QCloseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_closeEvent_QCloseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QCloseEvent*  __qt_arg__1 = (QCloseEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEvent((QCloseEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::contextMenuEvent(QContextMenuEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* arg__1)
{
    QContextMenuEvent*  __qt_arg__1 = (QContextMenuEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_devType_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::dragEnterEvent(QDragEnterEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragEnterEvent*  __qt_arg__1 = (QDragEnterEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::dragLeaveEvent(QDragLeaveEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragLeaveEvent*  __qt_arg__1 = (QDragLeaveEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::dragMoveEvent(QDragMoveEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragMoveEvent*  __qt_arg__1 = (QDragMoveEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::dropEvent(QDropEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_dropEvent_QDropEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDropEvent*  __qt_arg__1 = (QDropEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::enterEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_enterEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_enterEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::focusInEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QWidget_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::focusOutEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::hideEvent(QHideEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_hideEvent_QHideEvent
(void* __this_nativeId,
 void* arg__1)
{
    QHideEvent*  __qt_arg__1 = (QHideEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::inputMethodEvent(QInputMethodEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* arg__1)
{
    QInputMethodEvent*  __qt_arg__1 = (QInputMethodEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::inputMethodQuery(Qt::InputMethodQuery arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int arg__1)
{
    Qt::InputMethodQuery __qt_arg__1 = (Qt::InputMethodQuery) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_arg__1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QWidget::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::keyReleaseEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::languageChange()
QTD_EXTERN QTD_EXPORT void qtd_QWidget_languageChange
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_languageChange(__do_static_call);

}

// QWidget::leaveEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_leaveEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_leaveEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::metric(QPaintDevice::PaintDeviceMetric arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QWidget_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int arg__1)
{
    QPaintDevice::PaintDeviceMetric __qt_arg__1 = (QPaintDevice::PaintDeviceMetric) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidget::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWidget::mouseDoubleClickEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::mouseMoveEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::moveEvent(QMoveEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_moveEvent_QMoveEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMoveEvent*  __qt_arg__1 = (QMoveEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_moveEvent((QMoveEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_paintEngine_const
(void* __this_nativeId)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setVisible((bool )visible0, __do_static_call);

}

// QWidget::showEvent(QShowEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_showEvent_QShowEvent
(void* __this_nativeId,
 void* arg__1)
{
    QShowEvent*  __qt_arg__1 = (QShowEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QWidget_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWidget::tabletEvent(QTabletEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_tabletEvent_QTabletEvent
(void* __this_nativeId,
 void* arg__1)
{
    QTabletEvent*  __qt_arg__1 = (QTabletEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_tabletEvent((QTabletEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::wheelEvent(QWheelEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* arg__1)
{
    QWheelEvent*  __qt_arg__1 = (QWheelEvent* ) arg__1;
    QWidget_QtDShell *__qt_this = (QWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_arg__1, __do_static_call);

}

// QWidget::keyboardGrabber()
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_keyboardGrabber
()
{
    QWidget*  __qt_return_value = QWidget_QtDShell::keyboardGrabber();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::mouseGrabber()
QTD_EXTERN QTD_EXPORT void* qtd_QWidget_mouseGrabber
()
{
    QWidget*  __qt_return_value = QWidget_QtDShell::mouseGrabber();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidget::setTabOrder(QWidget * arg__1, QWidget * arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QWidget_setTabOrder_QWidget_QWidget
(void* arg__1,
 void* arg__2)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QWidget*  __qt_arg__2 = (QWidget* ) arg__2;
    QWidget_QtDShell::setTabOrder((QWidget* )__qt_arg__1, (QWidget* )__qt_arg__2);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWidget_staticMetaObject() {
    return (void*)&QWidget::staticMetaObject;
}


