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
#include <qspinbox.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QSpinBox_shell.h"
#include <iostream>
#include <qspinbox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QSpinBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSpinBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_createEntity(void *nativeId, void* dId)
{
    new QSpinBoxEntity((QObject*)nativeId, dId);
}

QSpinBox_QtDShell::QSpinBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QSpinBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QSpinBox_QtDShell::~QSpinBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSpinBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSpinBox::metaObject();
}

int QSpinBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSpinBox::qt_metacall(_c, _id, _a);
}

int QSpinBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSpinBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSpinBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_clear_dispatch, (void *dId))
void QSpinBox_QtDShell::clear()
{
    qtd_QAbstractSpinBox_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::contextMenuEvent(QContextMenuEvent*  event0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QSpinBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QSpinBox_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSpinBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_fixup_nativepointerstring_const_dispatch, (void *dId, void* str0))
void QSpinBox_QtDShell::fixup(QString&  str0) const
{
    qtd_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )str0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QSpinBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QSpinBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::hideEvent(QHideEvent*  event0)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QSpinBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QSpinBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QSpinBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QSpinBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QSpinBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QSpinBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QSpinBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_stepBy_int_dispatch, (void *dId, int steps0))
void QSpinBox_QtDShell::stepBy(int  steps0)
{
    qtd_QAbstractSpinBox_stepBy_int_dispatch(QObjectLink::getLink(this)->dId, (int )steps0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_stepEnabled_const_dispatch, (void *dId))
QAbstractSpinBox::StepEnabled  QSpinBox_QtDShell::stepEnabled() const
{
    return (QFlags<QAbstractSpinBox::StepEnabledFlag>) qtd_QAbstractSpinBox_stepEnabled_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QSpinBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QSpinBox_textFromValue_int_const_dispatch, (void *dId, DArray* ret_str, int val0))
QTD_FUNC(GUI, QSpinBox_textFromValue_int_const_dispatch)
QString  QSpinBox_QtDShell::textFromValue(int  val0) const
{
    DArray ret_str;
    qtd_QSpinBox_textFromValue_int_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str, (int )val0);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* input0, int * pos1))
QValidator::State  QSpinBox_QtDShell::validate(QString&  input0, int&  pos1) const
{
    return (QValidator::State) qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0, &(int& )pos1);
}

QTD_FUNC_DECL(GUI, int, QSpinBox_valueFromText_string_const_dispatch, (void *dId, const unsigned short* text0, int text0_size))
QTD_FUNC(GUI, QSpinBox_valueFromText_string_const_dispatch)
int  QSpinBox_QtDShell::valueFromText(const QString&  text0) const
{
    return qtd_QSpinBox_valueFromText_string_const_dispatch(QObjectLink::getLink(this)->dId, text0.utf16(), text0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* event0))
void QSpinBox_QtDShell::wheelEvent(QWheelEvent*  event0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_initCallBacks(VoidFunc *virts) {
    qtd_QSpinBox_textFromValue_int_const_dispatch = (qtd_QSpinBox_textFromValue_int_const_dispatch_t) virts[0];
    qtd_QSpinBox_valueFromText_string_const_dispatch = (qtd_QSpinBox_valueFromText_string_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QSpinBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QSpinBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QSpinBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QSpinBox_QtDShell::__public_initStyleOption(QStyleOptionSpinBox*  option0) const
{
    QAbstractSpinBox::initStyleOption((QStyleOptionSpinBox* )option0);
}

QLineEdit*  QSpinBox_QtDShell::__public_lineEdit() const
{
    return QAbstractSpinBox::lineEdit();
}

void QSpinBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QSpinBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSpinBox_QtDShell::__public_setLineEdit(QLineEdit*  edit0)
{
    QAbstractSpinBox::setLineEdit((QLineEdit* )edit0);
}

void QSpinBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QSpinBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QSpinBox_QtDShell::__public_editingFinished()
{
    QAbstractSpinBox::editingFinished();
}

void QSpinBox_QtDShell::__public_valueChanged(const QString&  arg__1)
{
    QSpinBox::valueChanged((const QString& )arg__1);
}

void QSpinBox_QtDShell::__public_valueChanged(int  arg__1)
{
    QSpinBox::valueChanged((int )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QSpinBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QSpinBox_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QSpinBox_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::clear();
    } else {
        clear();
    }
}

void QSpinBox_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::contextMenuEvent((QContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QContextMenuEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QSpinBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QSpinBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QSpinBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QSpinBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QSpinBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QSpinBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QSpinBox_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QSpinBox::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QSpinBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSpinBox_QtDShell::__override_fixup(QString&  str0, bool static_call) const
{
    if (static_call) {
        QSpinBox::fixup((QString& )str0);
    } else {
        fixup((QString& )str0);
    }
}

void QSpinBox_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QSpinBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QSpinBox_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QSpinBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QSpinBox_QtDShell::__override_hideEvent(QHideEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::hideEvent((QHideEvent* )event0);
    } else {
        hideEvent((QHideEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QSpinBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QSpinBox_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QSpinBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QSpinBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QSpinBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QSpinBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QSpinBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QSpinBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QSpinBox_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QSpinBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QSpinBox_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSize  QSpinBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::sizeHint();
    } else {
        return sizeHint();
    }
}

void QSpinBox_QtDShell::__override_stepBy(int  steps0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::stepBy((int )steps0);
    } else {
        stepBy((int )steps0);
    }
}

int  QSpinBox_QtDShell::__override_stepEnabled(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::stepEnabled();
    } else {
        return stepEnabled();
    }
}

void QSpinBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

QString  QSpinBox_QtDShell::__override_textFromValue(int  val0, bool static_call) const
{
    if (static_call) {
        return QSpinBox::textFromValue((int )val0);
    } else {
        return textFromValue((int )val0);
    }
}

void QSpinBox_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

int  QSpinBox_QtDShell::__override_validate(QString&  input0, int&  pos1, bool static_call) const
{
    if (static_call) {
        return QSpinBox::validate((QString& )input0, (int& )pos1);
    } else {
        return validate((QString& )input0, (int& )pos1);
    }
}

int  QSpinBox_QtDShell::__override_valueFromText(const QString&  text0, bool static_call) const
{
    if (static_call) {
        return QSpinBox::valueFromText((const QString& )text0);
    } else {
        return valueFromText((const QString& )text0);
    }
}

void QSpinBox_QtDShell::__override_wheelEvent(QWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::wheelEvent((QWheelEvent* )event0);
    } else {
        wheelEvent((QWheelEvent* )event0);
    }
}

// QSpinBox::valueChanged(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_valueChanged_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->__public_valueChanged((const QString& )__qt_arg__1);

}

// QSpinBox::valueChanged(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_valueChanged_int
(void* __this_nativeId,
 int arg__1)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->__public_valueChanged((int )arg__1);

}

// ---externC---
// QSpinBox::QSpinBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSpinBox_QSpinBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QSpinBox_QtDShell *__qt_this = new QSpinBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QSpinBox::cleanText() const
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_cleanText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->cleanText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSpinBox::maximum() const
QTD_EXTERN QTD_EXPORT int qtd_QSpinBox_maximum_const
(void* __this_nativeId)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpinBox::minimum() const
QTD_EXTERN QTD_EXPORT int qtd_QSpinBox_minimum_const
(void* __this_nativeId)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpinBox::prefix() const
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_prefix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->prefix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSpinBox::setMaximum(int max)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_setMaximum_int
(void* __this_nativeId,
 int max0)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setMaximum((int )max0);

}

// QSpinBox::setMinimum(int min)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_setMinimum_int
(void* __this_nativeId,
 int min0)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setMinimum((int )min0);

}

// QSpinBox::setPrefix(const QString & prefix)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_setPrefix_string
(void* __this_nativeId,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setPrefix((const QString& )__qt_prefix0);

}

// QSpinBox::setRange(int min, int max)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_setRange_int_int
(void* __this_nativeId,
 int min0,
 int max1)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setRange((int )min0, (int )max1);

}

// QSpinBox::setSingleStep(int val)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_setSingleStep_int
(void* __this_nativeId,
 int val0)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setSingleStep((int )val0);

}

// QSpinBox::setSuffix(const QString & suffix)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_setSuffix_string
(void* __this_nativeId,
 DArray suffix0)
{
    QString __qt_suffix0 = QString::fromUtf8((const char *)suffix0.ptr, suffix0.length);
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setSuffix((const QString& )__qt_suffix0);

}

// QSpinBox::setValue(int val)
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_setValue_int
(void* __this_nativeId,
 int val0)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setValue((int )val0);

}

// QSpinBox::singleStep() const
QTD_EXTERN QTD_EXPORT int qtd_QSpinBox_singleStep_const
(void* __this_nativeId)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->singleStep();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpinBox::suffix() const
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_suffix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->suffix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSpinBox::value() const
QTD_EXTERN QTD_EXPORT int qtd_QSpinBox_value_const
(void* __this_nativeId)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->value();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpinBox::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QSpinBox_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpinBox::fixup(QString & str) const
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_fixup_nativepointerstring_const
(void* __this_nativeId,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fixup((QString& )__qt_str0, __do_static_call);
    qtd_toUtf8(__qt_str0.utf16(), __qt_str0.size(), &str0);

}

// QSpinBox::textFromValue(int val) const
QTD_EXTERN QTD_EXPORT void qtd_QSpinBox_textFromValue_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int val0)
{
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_textFromValue((int )val0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSpinBox::validate(QString & input, int & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QSpinBox_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray input0,
 int * pos1)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    int&  __qt_pos1 = (int& ) * (int *) pos1;
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_input0, (int& )__qt_pos1, __do_static_call);

    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpinBox::valueFromText(const QString & text) const
QTD_EXTERN QTD_EXPORT int qtd_QSpinBox_valueFromText_string_const
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QSpinBox_QtDShell *__qt_this = (QSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_valueFromText((const QString& )__qt_text0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSpinBox_staticMetaObject() {
    return (void*)&QSpinBox::staticMetaObject;
}


