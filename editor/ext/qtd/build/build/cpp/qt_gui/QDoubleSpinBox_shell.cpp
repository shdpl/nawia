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

#include "QDoubleSpinBox_shell.h"
#include <iostream>
#include <qspinbox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDoubleSpinBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDoubleSpinBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_createEntity(void *nativeId, void* dId)
{
    new QDoubleSpinBoxEntity((QObject*)nativeId, dId);
}

QDoubleSpinBox_QtDShell::QDoubleSpinBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QDoubleSpinBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QDoubleSpinBox_QtDShell::~QDoubleSpinBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDoubleSpinBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDoubleSpinBox::metaObject();
}

int QDoubleSpinBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDoubleSpinBox::qt_metacall(_c, _id, _a);
}

int QDoubleSpinBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDoubleSpinBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDoubleSpinBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_clear_dispatch, (void *dId))
void QDoubleSpinBox_QtDShell::clear()
{
    qtd_QAbstractSpinBox_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::contextMenuEvent(QContextMenuEvent*  event0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QDoubleSpinBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QDoubleSpinBox_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDoubleSpinBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_fixup_nativepointerstring_const_dispatch, (void *dId, void* str0))
void QDoubleSpinBox_QtDShell::fixup(QString&  str0) const
{
    qtd_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )str0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QDoubleSpinBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QDoubleSpinBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::hideEvent(QHideEvent*  event0)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QDoubleSpinBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QDoubleSpinBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QDoubleSpinBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDoubleSpinBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QDoubleSpinBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QDoubleSpinBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDoubleSpinBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_stepBy_int_dispatch, (void *dId, int steps0))
void QDoubleSpinBox_QtDShell::stepBy(int  steps0)
{
    qtd_QAbstractSpinBox_stepBy_int_dispatch(QObjectLink::getLink(this)->dId, (int )steps0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_stepEnabled_const_dispatch, (void *dId))
QAbstractSpinBox::StepEnabled  QDoubleSpinBox_QtDShell::stepEnabled() const
{
    return (QFlags<QAbstractSpinBox::StepEnabledFlag>) qtd_QAbstractSpinBox_stepEnabled_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QDoubleSpinBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDoubleSpinBox_textFromValue_double_const_dispatch, (void *dId, DArray* ret_str, double val0))
QTD_FUNC(GUI, QDoubleSpinBox_textFromValue_double_const_dispatch)
QString  QDoubleSpinBox_QtDShell::textFromValue(double  val0) const
{
    DArray ret_str;
    qtd_QDoubleSpinBox_textFromValue_double_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str, (double )val0);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* input0, int * pos1))
QValidator::State  QDoubleSpinBox_QtDShell::validate(QString&  input0, int&  pos1) const
{
    return (QValidator::State) qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0, &(int& )pos1);
}

QTD_FUNC_DECL(GUI, double, QDoubleSpinBox_valueFromText_string_const_dispatch, (void *dId, const unsigned short* text0, int text0_size))
QTD_FUNC(GUI, QDoubleSpinBox_valueFromText_string_const_dispatch)
double  QDoubleSpinBox_QtDShell::valueFromText(const QString&  text0) const
{
    return qtd_QDoubleSpinBox_valueFromText_string_const_dispatch(QObjectLink::getLink(this)->dId, text0.utf16(), text0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* event0))
void QDoubleSpinBox_QtDShell::wheelEvent(QWheelEvent*  event0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_initCallBacks(VoidFunc *virts) {
    qtd_QDoubleSpinBox_textFromValue_double_const_dispatch = (qtd_QDoubleSpinBox_textFromValue_double_const_dispatch_t) virts[0];
    qtd_QDoubleSpinBox_valueFromText_string_const_dispatch = (qtd_QDoubleSpinBox_valueFromText_string_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QDoubleSpinBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QDoubleSpinBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QDoubleSpinBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QDoubleSpinBox_QtDShell::__public_initStyleOption(QStyleOptionSpinBox*  option0) const
{
    QAbstractSpinBox::initStyleOption((QStyleOptionSpinBox* )option0);
}

QLineEdit*  QDoubleSpinBox_QtDShell::__public_lineEdit() const
{
    return QAbstractSpinBox::lineEdit();
}

void QDoubleSpinBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QDoubleSpinBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDoubleSpinBox_QtDShell::__public_setLineEdit(QLineEdit*  edit0)
{
    QAbstractSpinBox::setLineEdit((QLineEdit* )edit0);
}

void QDoubleSpinBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QDoubleSpinBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QDoubleSpinBox_QtDShell::__public_editingFinished()
{
    QAbstractSpinBox::editingFinished();
}

void QDoubleSpinBox_QtDShell::__public_valueChanged(const QString&  arg__1)
{
    QDoubleSpinBox::valueChanged((const QString& )arg__1);
}

void QDoubleSpinBox_QtDShell::__public_valueChanged(double  arg__1)
{
    QDoubleSpinBox::valueChanged((double )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QDoubleSpinBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::clear();
    } else {
        clear();
    }
}

void QDoubleSpinBox_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::contextMenuEvent((QContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QContextMenuEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QDoubleSpinBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QDoubleSpinBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QDoubleSpinBox_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractSpinBox::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QDoubleSpinBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDoubleSpinBox_QtDShell::__override_fixup(QString&  str0, bool static_call) const
{
    if (static_call) {
        QDoubleSpinBox::fixup((QString& )str0);
    } else {
        fixup((QString& )str0);
    }
}

void QDoubleSpinBox_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QDoubleSpinBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QDoubleSpinBox_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QDoubleSpinBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_hideEvent(QHideEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::hideEvent((QHideEvent* )event0);
    } else {
        hideEvent((QHideEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QDoubleSpinBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QDoubleSpinBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QDoubleSpinBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QDoubleSpinBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QDoubleSpinBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QDoubleSpinBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QDoubleSpinBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QDoubleSpinBox_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QDoubleSpinBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QDoubleSpinBox_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSize  QDoubleSpinBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::sizeHint();
    } else {
        return sizeHint();
    }
}

void QDoubleSpinBox_QtDShell::__override_stepBy(int  steps0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::stepBy((int )steps0);
    } else {
        stepBy((int )steps0);
    }
}

int  QDoubleSpinBox_QtDShell::__override_stepEnabled(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::stepEnabled();
    } else {
        return stepEnabled();
    }
}

void QDoubleSpinBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

QString  QDoubleSpinBox_QtDShell::__override_textFromValue(double  val0, bool static_call) const
{
    if (static_call) {
        return QDoubleSpinBox::textFromValue((double )val0);
    } else {
        return textFromValue((double )val0);
    }
}

void QDoubleSpinBox_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

int  QDoubleSpinBox_QtDShell::__override_validate(QString&  input0, int&  pos1, bool static_call) const
{
    if (static_call) {
        return QDoubleSpinBox::validate((QString& )input0, (int& )pos1);
    } else {
        return validate((QString& )input0, (int& )pos1);
    }
}

double  QDoubleSpinBox_QtDShell::__override_valueFromText(const QString&  text0, bool static_call) const
{
    if (static_call) {
        return QDoubleSpinBox::valueFromText((const QString& )text0);
    } else {
        return valueFromText((const QString& )text0);
    }
}

void QDoubleSpinBox_QtDShell::__override_wheelEvent(QWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::wheelEvent((QWheelEvent* )event0);
    } else {
        wheelEvent((QWheelEvent* )event0);
    }
}

// QDoubleSpinBox::valueChanged(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_valueChanged_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->__public_valueChanged((const QString& )__qt_arg__1);

}

// QDoubleSpinBox::valueChanged(double arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_valueChanged_double
(void* __this_nativeId,
 double arg__1)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->__public_valueChanged((double )arg__1);

}

// ---externC---
// QDoubleSpinBox::QDoubleSpinBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDoubleSpinBox_QDoubleSpinBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QDoubleSpinBox_QtDShell *__qt_this = new QDoubleSpinBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QDoubleSpinBox::cleanText() const
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_cleanText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->cleanText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDoubleSpinBox::decimals() const
QTD_EXTERN QTD_EXPORT int qtd_QDoubleSpinBox_decimals_const
(void* __this_nativeId)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->decimals();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleSpinBox::maximum() const
QTD_EXTERN QTD_EXPORT double qtd_QDoubleSpinBox_maximum_const
(void* __this_nativeId)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->maximum();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleSpinBox::minimum() const
QTD_EXTERN QTD_EXPORT double qtd_QDoubleSpinBox_minimum_const
(void* __this_nativeId)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->minimum();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleSpinBox::prefix() const
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_prefix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->prefix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDoubleSpinBox::setDecimals(int prec)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setDecimals_int
(void* __this_nativeId,
 int prec0)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setDecimals((int )prec0);

}

// QDoubleSpinBox::setMaximum(double max)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setMaximum_double
(void* __this_nativeId,
 double max0)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setMaximum((double )max0);

}

// QDoubleSpinBox::setMinimum(double min)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setMinimum_double
(void* __this_nativeId,
 double min0)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setMinimum((double )min0);

}

// QDoubleSpinBox::setPrefix(const QString & prefix)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setPrefix_string
(void* __this_nativeId,
 DArray prefix0)
{
    QString __qt_prefix0 = QString::fromUtf8((const char *)prefix0.ptr, prefix0.length);
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setPrefix((const QString& )__qt_prefix0);

}

// QDoubleSpinBox::setRange(double min, double max)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setRange_double_double
(void* __this_nativeId,
 double min0,
 double max1)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setRange((double )min0, (double )max1);

}

// QDoubleSpinBox::setSingleStep(double val)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setSingleStep_double
(void* __this_nativeId,
 double val0)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setSingleStep((double )val0);

}

// QDoubleSpinBox::setSuffix(const QString & suffix)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setSuffix_string
(void* __this_nativeId,
 DArray suffix0)
{
    QString __qt_suffix0 = QString::fromUtf8((const char *)suffix0.ptr, suffix0.length);
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setSuffix((const QString& )__qt_suffix0);

}

// QDoubleSpinBox::setValue(double val)
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_setValue_double
(void* __this_nativeId,
 double val0)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    __qt_this->setValue((double )val0);

}

// QDoubleSpinBox::singleStep() const
QTD_EXTERN QTD_EXPORT double qtd_QDoubleSpinBox_singleStep_const
(void* __this_nativeId)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->singleStep();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleSpinBox::suffix() const
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_suffix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->suffix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDoubleSpinBox::value() const
QTD_EXTERN QTD_EXPORT double qtd_QDoubleSpinBox_value_const
(void* __this_nativeId)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->value();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleSpinBox::fixup(QString & str) const
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_fixup_nativepointerstring_const
(void* __this_nativeId,
 DArray str0)
{
    QString __qt_str0 = QString::fromUtf8((const char *)str0.ptr, str0.length);
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fixup((QString& )__qt_str0, __do_static_call);
    qtd_toUtf8(__qt_str0.utf16(), __qt_str0.size(), &str0);

}

// QDoubleSpinBox::textFromValue(double val) const
QTD_EXTERN QTD_EXPORT void qtd_QDoubleSpinBox_textFromValue_double_const
(void* __this_nativeId,
 void* __d_return_value,
 double val0)
{
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_textFromValue((double )val0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDoubleSpinBox::validate(QString & input, int & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QDoubleSpinBox_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray input0,
 int * pos1)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    int&  __qt_pos1 = (int& ) * (int *) pos1;
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_input0, (int& )__qt_pos1, __do_static_call);

    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDoubleSpinBox::valueFromText(const QString & text) const
QTD_EXTERN QTD_EXPORT double qtd_QDoubleSpinBox_valueFromText_string_const
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QDoubleSpinBox_QtDShell *__qt_this = (QDoubleSpinBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    double  __qt_return_value = __qt_this->__override_valueFromText((const QString& )__qt_text0, __do_static_call);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDoubleSpinBox_staticMetaObject() {
    return (void*)&QDoubleSpinBox::staticMetaObject;
}


