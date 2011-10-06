#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontdialog.h>
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

#include "QFontDialog_shell.h"
#include <iostream>
#include <qfontdialog.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QFontDialogEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFontDialogEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_createEntity(void *nativeId, void* dId)
{
    new QFontDialogEntity((QObject*)nativeId, dId);
}

QFontDialog_QtDShell::QFontDialog_QtDShell(void *d_ptr, QWidget*  parent0)
    : QFontDialog(parent0),
      QObjectLink(this, d_ptr)
{
}

QFontDialog_QtDShell::QFontDialog_QtDShell(void *d_ptr, const QFont&  initial0, QWidget*  parent1)
    : QFontDialog(initial0, parent1),
      QObjectLink(this, d_ptr)
{
}

QFontDialog_QtDShell::~QFontDialog_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFontDialog_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFontDialog::metaObject();
}

int QFontDialog_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFontDialog::qt_metacall(_c, _id, _a);
}

int QFontDialog_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFontDialog::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFontDialog_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QDialog_accept_dispatch, (void *dId))
void QFontDialog_QtDShell::accept()
{
    qtd_QDialog_accept_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QFontDialog_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QFontDialog_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QDialog_done_int_dispatch, (void *dId, int result0))
void QFontDialog_QtDShell::done(int  result0)
{
    qtd_QDialog_done_int_dispatch(QObjectLink::getLink(this)->dId, (int )result0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QFontDialog_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QFontDialog_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QFontDialog_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QFontDialog_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QFontDialog_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QFontDialog_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFontDialog_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QFontDialog_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_reject_dispatch, (void *dId))
void QFontDialog_QtDShell::reject()
{
    qtd_QDialog_reject_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QFontDialog_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFontDialog_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QFontDialog_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_open_dispatch, (void *dId))
void QFontDialog_QtDShell::open()
{
    qtd_QDialog_open_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QFontDialog_QtDShell::__public_adjustPosition(QWidget*  arg__1)
{
    QDialog::adjustPosition((QWidget* )arg__1);
}

void QFontDialog_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QFontDialog_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QFontDialog_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QFontDialog_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QFontDialog_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFontDialog_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QFontDialog_QtDShell::__public_accepted()
{
    QDialog::accepted();
}

void QFontDialog_QtDShell::__public_currentFontChanged(const QFont&  font0)
{
    QFontDialog::currentFontChanged((const QFont& )font0);
}

void QFontDialog_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QFontDialog_QtDShell::__public_finished(int  result0)
{
    QDialog::finished((int )result0);
}

void QFontDialog_QtDShell::__public_fontSelected(const QFont&  font0)
{
    QFontDialog::fontSelected((const QFont& )font0);
}

void QFontDialog_QtDShell::__public_rejected()
{
    QDialog::rejected();
}

// Write virtual function overries used to decide on static/virtual calls
void QFontDialog_QtDShell::__override_accept(bool static_call)
{
    if (static_call) {
        QDialog::accept();
    } else {
        accept();
    }
}

void QFontDialog_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QFontDialog::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QFontDialog_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QFontDialog_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QFontDialog_QtDShell::__override_done(int  result0, bool static_call)
{
    if (static_call) {
        QFontDialog::done((int )result0);
    } else {
        done((int )result0);
    }
}

void QFontDialog_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QFontDialog_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QFontDialog_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QFontDialog_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QFontDialog_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QFontDialog_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QFontDialog_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QFontDialog_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QFontDialog_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QFontDialog_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QFontDialog_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QDialog::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QFontDialog_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QFontDialog_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QFontDialog_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_reject(bool static_call)
{
    if (static_call) {
        QDialog::reject();
    } else {
        reject();
    }
}

void QFontDialog_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QFontDialog::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QFontDialog_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QFontDialog_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QDialog::sizeHint();
    } else {
        return sizeHint();
    }
}

void QFontDialog_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QFontDialog_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QFontDialog::currentFontChanged(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_currentFontChanged_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_currentFontChanged((const QFont& )__qt_font0);

}

// QFontDialog::fontSelected(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_fontSelected_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_fontSelected((const QFont& )__qt_font0);

}

// ---externC---
// QFontDialog::QFontDialog(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_QFontDialog_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFontDialog_QtDShell *__qt_this = new QFontDialog_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QFontDialog::QFontDialog(const QFont & initial, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_QFontDialog_QFont_QWidget
(void *d_ptr,
 void* initial0,
 void* parent1)
{
    const QFont&  __qt_initial0 = (const QFont& ) *(QFont *)initial0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QFontDialog_QtDShell *__qt_this = new QFontDialog_QtDShell(d_ptr, (const QFont& )__qt_initial0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QFontDialog::currentFont() const
QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_currentFont_const
(void* __this_nativeId)
{
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->currentFont();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QFontDialog::open()
QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_open
(void* __this_nativeId)
{
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    __qt_this->open();

}

// QFontDialog::selectedFont() const
QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_selectedFont_const
(void* __this_nativeId)
{
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->selectedFont();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QFontDialog::setCurrentFont(const QFont & font)
QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_setCurrentFont_QFont
(void* __this_nativeId,
 void* font0)
{
    const QFont&  __qt_font0 = (const QFont& ) *(QFont *)font0;
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    __qt_this->setCurrentFont((const QFont& )__qt_font0);

}

// QFontDialog::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QFontDialog::done(int result)
QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_done_int
(void* __this_nativeId,
 int result0)
{
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_done((int )result0, __do_static_call);

}

// QFontDialog::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QFontDialog_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QFontDialog_QtDShell *__qt_this = (QFontDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setVisible((bool )visible0, __do_static_call);

}

// QFontDialog::getFont(bool * ok, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_getFont_nativepointerbool_QWidget
(bool* ok0,
 void* parent1)
{
    bool*  __qt_ok0 = (bool* ) ok0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QFont  __qt_return_value = QFontDialog_QtDShell::getFont((bool* )__qt_ok0, (QWidget* )__qt_parent1);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QFontDialog::getFont(bool * ok, const QFont & initial, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_getFont_nativepointerbool_QFont_QWidget
(bool* ok0,
 void* initial1,
 void* parent2)
{
    bool*  __qt_ok0 = (bool* ) ok0;
    const QFont&  __qt_initial1 = (const QFont& ) *(QFont *)initial1;
    QWidget*  __qt_parent2 = (QWidget* ) parent2;
    QFont  __qt_return_value = QFontDialog_QtDShell::getFont((bool* )__qt_ok0, (const QFont& )__qt_initial1, (QWidget* )__qt_parent2);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QFontDialog::getFont(bool * ok, const QFont & initial, QWidget * parent_, const QString & title)
QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_getFont_nativepointerbool_QFont_QWidget_string
(bool* ok0,
 void* initial1,
 void* parent2,
 DArray title3)
{
    bool*  __qt_ok0 = (bool* ) ok0;
    const QFont&  __qt_initial1 = (const QFont& ) *(QFont *)initial1;
    QWidget*  __qt_parent2 = (QWidget* ) parent2;
    QString __qt_title3 = QString::fromUtf8((const char *)title3.ptr, title3.length);
    QFont  __qt_return_value = QFontDialog_QtDShell::getFont((bool* )__qt_ok0, (const QFont& )__qt_initial1, (QWidget* )__qt_parent2, (const QString& )__qt_title3);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFontDialog_staticMetaObject() {
    return (void*)&QFontDialog::staticMetaObject;
}


