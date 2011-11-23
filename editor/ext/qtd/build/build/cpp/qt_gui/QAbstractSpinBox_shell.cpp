#include <QVariant>
#include <qabstractspinbox.h>
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
#include <qlineedit.h>
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

#include "QAbstractSpinBox_shell.h"
#include <iostream>
#include <qabstractspinbox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QAbstractSpinBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractSpinBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_createEntity(void *nativeId, void* dId)
{
    new QAbstractSpinBoxEntity((QObject*)nativeId, dId);
}

QAbstractSpinBox_QtDShell::QAbstractSpinBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QAbstractSpinBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractSpinBox_QtDShell::~QAbstractSpinBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractSpinBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractSpinBox::metaObject();
}

int QAbstractSpinBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractSpinBox::qt_metacall(_c, _id, _a);
}

int QAbstractSpinBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractSpinBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractSpinBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_clear_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractSpinBox_clear_dispatch)
void QAbstractSpinBox_QtDShell::clear()
{
    qtd_QAbstractSpinBox_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::contextMenuEvent(QContextMenuEvent*  event0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QAbstractSpinBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QAbstractSpinBox_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractSpinBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_fixup_nativepointerstring_const_dispatch, (void *dId, void* input0))
QTD_FUNC(GUI, QAbstractSpinBox_fixup_nativepointerstring_const_dispatch)
void QAbstractSpinBox_QtDShell::fixup(QString&  input0) const
{
    qtd_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QAbstractSpinBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QAbstractSpinBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::hideEvent(QHideEvent*  event0)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QAbstractSpinBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QAbstractSpinBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QAbstractSpinBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractSpinBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QAbstractSpinBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QAbstractSpinBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractSpinBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_stepBy_int_dispatch, (void *dId, int steps0))
QTD_FUNC(GUI, QAbstractSpinBox_stepBy_int_dispatch)
void QAbstractSpinBox_QtDShell::stepBy(int  steps0)
{
    qtd_QAbstractSpinBox_stepBy_int_dispatch(QObjectLink::getLink(this)->dId, (int )steps0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_stepEnabled_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractSpinBox_stepEnabled_const_dispatch)
QAbstractSpinBox::StepEnabled  QAbstractSpinBox_QtDShell::stepEnabled() const
{
    return (QFlags<QAbstractSpinBox::StepEnabledFlag>) qtd_QAbstractSpinBox_stepEnabled_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QAbstractSpinBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* input0, int * pos1))
QTD_FUNC(GUI, QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch)
QValidator::State  QAbstractSpinBox_QtDShell::validate(QString&  input0, int&  pos1) const
{
    return (QValidator::State) qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0, &(int& )pos1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* event0))
void QAbstractSpinBox_QtDShell::wheelEvent(QWheelEvent*  event0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractSpinBox_clear_dispatch = (qtd_QAbstractSpinBox_clear_dispatch_t) virts[0];
    qtd_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch = (qtd_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch_t) virts[1];
    qtd_QAbstractSpinBox_stepBy_int_dispatch = (qtd_QAbstractSpinBox_stepBy_int_dispatch_t) virts[2];
    qtd_QAbstractSpinBox_stepEnabled_const_dispatch = (qtd_QAbstractSpinBox_stepEnabled_const_dispatch_t) virts[3];
    qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch = (qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QAbstractSpinBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QAbstractSpinBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QAbstractSpinBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QAbstractSpinBox_QtDShell::__public_initStyleOption(QStyleOptionSpinBox*  option0) const
{
    QAbstractSpinBox::initStyleOption((QStyleOptionSpinBox* )option0);
}

QLineEdit*  QAbstractSpinBox_QtDShell::__public_lineEdit() const
{
    return QAbstractSpinBox::lineEdit();
}

void QAbstractSpinBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QAbstractSpinBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractSpinBox_QtDShell::__public_setLineEdit(QLineEdit*  edit0)
{
    QAbstractSpinBox::setLineEdit((QLineEdit* )edit0);
}

void QAbstractSpinBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QAbstractSpinBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QAbstractSpinBox_QtDShell::__public_editingFinished()
{
    QAbstractSpinBox::editingFinished();
}

// Write virtual function overries used to decide on static/virtual calls
void QAbstractSpinBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::clear();
    } else {
        clear();
    }
}

void QAbstractSpinBox_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::contextMenuEvent((QContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QContextMenuEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QAbstractSpinBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QAbstractSpinBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QAbstractSpinBox_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractSpinBox::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QAbstractSpinBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractSpinBox_QtDShell::__override_fixup(QString&  input0, bool static_call) const
{
    if (static_call) {
        QAbstractSpinBox::fixup((QString& )input0);
    } else {
        fixup((QString& )input0);
    }
}

void QAbstractSpinBox_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QAbstractSpinBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QAbstractSpinBox_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QAbstractSpinBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_hideEvent(QHideEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::hideEvent((QHideEvent* )event0);
    } else {
        hideEvent((QHideEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QAbstractSpinBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QAbstractSpinBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QAbstractSpinBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QAbstractSpinBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QAbstractSpinBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QAbstractSpinBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QAbstractSpinBox_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QAbstractSpinBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QAbstractSpinBox_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSize  QAbstractSpinBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::sizeHint();
    } else {
        return sizeHint();
    }
}

void QAbstractSpinBox_QtDShell::__override_stepBy(int  steps0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::stepBy((int )steps0);
    } else {
        stepBy((int )steps0);
    }
}

int  QAbstractSpinBox_QtDShell::__override_stepEnabled(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::stepEnabled();
    } else {
        return stepEnabled();
    }
}

void QAbstractSpinBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QAbstractSpinBox_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

int  QAbstractSpinBox_QtDShell::__override_validate(QString&  input0, int&  pos1, bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::validate((QString& )input0, (int& )pos1);
    } else {
        return validate((QString& )input0, (int& )pos1);
    }
}

void QAbstractSpinBox_QtDShell::__override_wheelEvent(QWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::wheelEvent((QWheelEvent* )event0);
    } else {
        wheelEvent((QWheelEvent* )event0);
    }
}

// QAbstractSpinBox::editingFinished()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_editingFinished
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->__public_editingFinished();

}

// ---externC---
// QAbstractSpinBox::QAbstractSpinBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSpinBox_QAbstractSpinBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QAbstractSpinBox_QtDShell *__qt_this = new QAbstractSpinBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractSpinBox::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSpinBox_alignment_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::buttonSymbols() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSpinBox_buttonSymbols_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttonSymbols();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::correctionMode() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSpinBox_correctionMode_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->correctionMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::hasAcceptableInput() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSpinBox_hasAcceptableInput_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAcceptableInput();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::hasFrame() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSpinBox_hasFrame_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFrame();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::initStyleOption(QStyleOptionSpinBox * option) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_initStyleOption_nativepointerQStyleOptionSpinBox_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionSpinBox*  __qt_option0 = (QStyleOptionSpinBox* ) option0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionSpinBox* )__qt_option0);

}

// QAbstractSpinBox::interpretText()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_interpretText
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->interpretText();

}

// QAbstractSpinBox::isAccelerated() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSpinBox_isAccelerated_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAccelerated();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::isReadOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSpinBox_isReadOnly_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::keyboardTracking() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSpinBox_keyboardTracking_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->keyboardTracking();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::lineEdit() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSpinBox_lineEdit_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    QLineEdit*  __qt_return_value = __qt_this->__public_lineEdit();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::selectAll()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_selectAll
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->selectAll();

}

// QAbstractSpinBox::setAccelerated(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setAccelerated_bool
(void* __this_nativeId,
 bool on0)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setAccelerated((bool )on0);

}

// QAbstractSpinBox::setAlignment(QFlags<Qt::AlignmentFlag> flag)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setAlignment_Alignment
(void* __this_nativeId,
 int flag0)
{
    QFlags<Qt::AlignmentFlag> __qt_flag0 = (QFlags<Qt::AlignmentFlag>) flag0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_flag0);

}

// QAbstractSpinBox::setButtonSymbols(QAbstractSpinBox::ButtonSymbols bs)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setButtonSymbols_ButtonSymbols
(void* __this_nativeId,
 int bs0)
{
    QAbstractSpinBox::ButtonSymbols __qt_bs0 = (QAbstractSpinBox::ButtonSymbols) bs0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setButtonSymbols((QAbstractSpinBox::ButtonSymbols )__qt_bs0);

}

// QAbstractSpinBox::setCorrectionMode(QAbstractSpinBox::CorrectionMode cm)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setCorrectionMode_CorrectionMode
(void* __this_nativeId,
 int cm0)
{
    QAbstractSpinBox::CorrectionMode __qt_cm0 = (QAbstractSpinBox::CorrectionMode) cm0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setCorrectionMode((QAbstractSpinBox::CorrectionMode )__qt_cm0);

}

// QAbstractSpinBox::setFrame(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setFrame_bool
(void* __this_nativeId,
 bool arg__1)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setFrame((bool )arg__1);

}

// QAbstractSpinBox::setKeyboardTracking(bool kt)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setKeyboardTracking_bool
(void* __this_nativeId,
 bool kt0)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setKeyboardTracking((bool )kt0);

}

// QAbstractSpinBox::setLineEdit(QLineEdit * edit)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setLineEdit_QLineEdit
(void* __this_nativeId,
 void* edit0)
{
    QLineEdit*  __qt_edit0 = (QLineEdit* ) edit0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->__public_setLineEdit((QLineEdit* )__qt_edit0);

}

// QAbstractSpinBox::setReadOnly(bool r)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setReadOnly_bool
(void* __this_nativeId,
 bool r0)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setReadOnly((bool )r0);

}

// QAbstractSpinBox::setSpecialValueText(const QString & txt)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setSpecialValueText_string
(void* __this_nativeId,
 DArray txt0)
{
    QString __qt_txt0 = QString::fromUtf8((const char *)txt0.ptr, txt0.length);
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setSpecialValueText((const QString& )__qt_txt0);

}

// QAbstractSpinBox::setWrapping(bool w)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_setWrapping_bool
(void* __this_nativeId,
 bool w0)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setWrapping((bool )w0);

}

// QAbstractSpinBox::specialValueText() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_specialValueText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->specialValueText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractSpinBox::stepDown()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_stepDown
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->stepDown();

}

// QAbstractSpinBox::stepUp()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_stepUp
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    __qt_this->stepUp();

}

// QAbstractSpinBox::text() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractSpinBox::wrapping() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSpinBox_wrapping_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wrapping();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::changeEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_changeEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::clear()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_clear
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_clear(__do_static_call);

}

// QAbstractSpinBox::closeEvent(QCloseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_closeEvent_QCloseEvent
(void* __this_nativeId,
 void* event0)
{
    QCloseEvent*  __qt_event0 = (QCloseEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEvent((QCloseEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::contextMenuEvent(QContextMenuEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* event0)
{
    QContextMenuEvent*  __qt_event0 = (QContextMenuEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractSpinBox_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::fixup(QString & input) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_fixup_nativepointerstring_const
(void* __this_nativeId,
 DArray input0)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fixup((QString& )__qt_input0, __do_static_call);
    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);

}

// QAbstractSpinBox::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::hideEvent(QHideEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_hideEvent_QHideEvent
(void* __this_nativeId,
 void* event0)
{
    QHideEvent*  __qt_event0 = (QHideEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::inputMethodQuery(Qt::InputMethodQuery arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSpinBox_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int arg__1)
{
    Qt::InputMethodQuery __qt_arg__1 = (Qt::InputMethodQuery) arg__1;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_arg__1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAbstractSpinBox::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::keyReleaseEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractSpinBox::mouseMoveEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::mousePressEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::mouseReleaseEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::showEvent(QShowEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_showEvent_QShowEvent
(void* __this_nativeId,
 void* event0)
{
    QShowEvent*  __qt_event0 = (QShowEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractSpinBox::stepBy(int steps)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_stepBy_int
(void* __this_nativeId,
 int steps0)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_stepBy((int )steps0, __do_static_call);

}

// QAbstractSpinBox::stepEnabled() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSpinBox_stepEnabled_const
(void* __this_nativeId)
{
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_stepEnabled(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::timerEvent(QTimerEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* event0)
{
    QTimerEvent*  __qt_event0 = (QTimerEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_event0, __do_static_call);

}

// QAbstractSpinBox::validate(QString & input, int & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray input0,
 int * pos1)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    int&  __qt_pos1 = (int& ) * (int *) pos1;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_input0, (int& )__qt_pos1, __do_static_call);

    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractSpinBox::wheelEvent(QWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractSpinBox_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QWheelEvent*  __qt_event0 = (QWheelEvent* ) event0;
    QAbstractSpinBox_QtDShell *__qt_this = (QAbstractSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractSpinBox_staticMetaObject() {
    return (void*)&QAbstractSpinBox::staticMetaObject;
}


