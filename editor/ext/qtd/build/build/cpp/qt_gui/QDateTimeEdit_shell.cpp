#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
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

#include "QDateTimeEdit_shell.h"
#include <iostream>
#include <qdatetimeedit.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDateTimeEditEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDateTimeEditEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_createEntity(void *nativeId, void* dId)
{
    new QDateTimeEditEntity((QObject*)nativeId, dId);
}

QDateTimeEdit_QtDShell::QDateTimeEdit_QtDShell(void *d_ptr, QWidget*  parent0)
    : QDateTimeEdit(parent0),
      QObjectLink(this, d_ptr)
{
}

QDateTimeEdit_QtDShell::QDateTimeEdit_QtDShell(void *d_ptr, const QDate&  d0, QWidget*  parent1)
    : QDateTimeEdit(d0, parent1),
      QObjectLink(this, d_ptr)
{
}

QDateTimeEdit_QtDShell::QDateTimeEdit_QtDShell(void *d_ptr, const QDateTime&  dt0, QWidget*  parent1)
    : QDateTimeEdit(dt0, parent1),
      QObjectLink(this, d_ptr)
{
}

QDateTimeEdit_QtDShell::QDateTimeEdit_QtDShell(void *d_ptr, const QTime&  t0, QWidget*  parent1)
    : QDateTimeEdit(t0, parent1),
      QObjectLink(this, d_ptr)
{
}

QDateTimeEdit_QtDShell::~QDateTimeEdit_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDateTimeEdit_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDateTimeEdit::metaObject();
}

int QDateTimeEdit_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDateTimeEdit::qt_metacall(_c, _id, _a);
}

int QDateTimeEdit_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDateTimeEdit::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::changeEvent(QEvent*  event0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_clear_dispatch, (void *dId))
void QDateTimeEdit_QtDShell::clear()
{
    qtd_QAbstractSpinBox_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::closeEvent(QCloseEvent*  event0)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::contextMenuEvent(QContextMenuEvent*  event0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QDateTimeEdit_dateTimeFromText_string_const_dispatch, (void *dId, const unsigned short* text0, int text0_size))
QTD_FUNC(GUI, QDateTimeEdit_dateTimeFromText_string_const_dispatch)
QDateTime  QDateTimeEdit_QtDShell::dateTimeFromText(const QString&  text0) const
{
    QDateTime *__qt_return_value = (QDateTime*) qtd_QDateTimeEdit_dateTimeFromText_string_const_dispatch(QObjectLink::getLink(this)->dId, text0.utf16(), text0.size());
    return QDateTime(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QDateTimeEdit_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QDateTimeEdit_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDateTimeEdit_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_fixup_nativepointerstring_const_dispatch, (void *dId, void* input0))
void QDateTimeEdit_QtDShell::fixup(QString&  input0) const
{
    qtd_QAbstractSpinBox_fixup_nativepointerstring_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QDateTimeEdit_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QDateTimeEdit_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::hideEvent(QHideEvent*  event0)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QDateTimeEdit_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::keyReleaseEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QDateTimeEdit_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QDateTimeEdit_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDateTimeEdit_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QDateTimeEdit_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QDateTimeEdit_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::showEvent(QShowEvent*  event0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QDateTimeEdit_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractSpinBox_stepBy_int_dispatch, (void *dId, int steps0))
void QDateTimeEdit_QtDShell::stepBy(int  steps0)
{
    qtd_QAbstractSpinBox_stepBy_int_dispatch(QObjectLink::getLink(this)->dId, (int )steps0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_stepEnabled_const_dispatch, (void *dId))
QAbstractSpinBox::StepEnabled  QDateTimeEdit_QtDShell::stepEnabled() const
{
    return (QFlags<QAbstractSpinBox::StepEnabledFlag>) qtd_QAbstractSpinBox_stepEnabled_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QDateTimeEdit_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch, (void *dId, DArray* ret_str, void* dt0))
QTD_FUNC(GUI, QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch)
QString  QDateTimeEdit_QtDShell::textFromDateTime(const QDateTime&  dt0) const
{
    DArray ret_str;
    qtd_QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str, &(QDateTime& )dt0);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch, (void *dId, void* input0, int * pos1))
QValidator::State  QDateTimeEdit_QtDShell::validate(QString&  input0, int&  pos1) const
{
    return (QValidator::State) qtd_QAbstractSpinBox_validate_nativepointerstring_nativepointerint_const_dispatch(QObjectLink::getLink(this)->dId, &(QString& )input0, &(int& )pos1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* event0))
void QDateTimeEdit_QtDShell::wheelEvent(QWheelEvent*  event0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_initCallBacks(VoidFunc *virts) {
    qtd_QDateTimeEdit_dateTimeFromText_string_const_dispatch = (qtd_QDateTimeEdit_dateTimeFromText_string_const_dispatch_t) virts[0];
    qtd_QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch = (qtd_QDateTimeEdit_textFromDateTime_QDateTime_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QDateTimeEdit_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QDateTimeEdit_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QDateTimeEdit_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QDateTimeEdit_QtDShell::__public_initStyleOption(QStyleOptionSpinBox*  option0) const
{
    QDateTimeEdit::initStyleOption((QStyleOptionSpinBox* )option0);
}

QLineEdit*  QDateTimeEdit_QtDShell::__public_lineEdit() const
{
    return QAbstractSpinBox::lineEdit();
}

void QDateTimeEdit_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QDateTimeEdit_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDateTimeEdit_QtDShell::__public_setLineEdit(QLineEdit*  edit0)
{
    QAbstractSpinBox::setLineEdit((QLineEdit* )edit0);
}

void QDateTimeEdit_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QDateTimeEdit_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QDateTimeEdit_QtDShell::__public_dateChanged(const QDate&  date0)
{
    QDateTimeEdit::dateChanged((const QDate& )date0);
}

void QDateTimeEdit_QtDShell::__public_dateTimeChanged(const QDateTime&  date0)
{
    QDateTimeEdit::dateTimeChanged((const QDateTime& )date0);
}

void QDateTimeEdit_QtDShell::__public_editingFinished()
{
    QAbstractSpinBox::editingFinished();
}

void QDateTimeEdit_QtDShell::__public_timeChanged(const QTime&  date0)
{
    QDateTimeEdit::timeChanged((const QTime& )date0);
}

// Write virtual function overries used to decide on static/virtual calls
void QDateTimeEdit_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_changeEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::changeEvent((QEvent* )event0);
    } else {
        changeEvent((QEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        QDateTimeEdit::clear();
    } else {
        clear();
    }
}

void QDateTimeEdit_QtDShell::__override_closeEvent(QCloseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::closeEvent((QCloseEvent* )event0);
    } else {
        closeEvent((QCloseEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::contextMenuEvent((QContextMenuEvent* )event0);
    } else {
        contextMenuEvent((QContextMenuEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QDateTime  QDateTimeEdit_QtDShell::__override_dateTimeFromText(const QString&  text0, bool static_call) const
{
    if (static_call) {
        return QDateTimeEdit::dateTimeFromText((const QString& )text0);
    } else {
        return dateTimeFromText((const QString& )text0);
    }
}

int  QDateTimeEdit_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QDateTimeEdit_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QDateTimeEdit_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QDateTimeEdit::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QDateTimeEdit_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDateTimeEdit_QtDShell::__override_fixup(QString&  input0, bool static_call) const
{
    if (static_call) {
        QDateTimeEdit::fixup((QString& )input0);
    } else {
        fixup((QString& )input0);
    }
}

void QDateTimeEdit_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QDateTimeEdit::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QDateTimeEdit_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QDateTimeEdit::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QDateTimeEdit_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QDateTimeEdit_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_hideEvent(QHideEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::hideEvent((QHideEvent* )event0);
    } else {
        hideEvent((QHideEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QDateTimeEdit_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QDateTimeEdit::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_keyReleaseEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::keyReleaseEvent((QKeyEvent* )event0);
    } else {
        keyReleaseEvent((QKeyEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QDateTimeEdit_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QDateTimeEdit_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QDateTimeEdit_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractSpinBox::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QDateTimeEdit_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QDateTimeEdit_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QDateTimeEdit::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QDateTimeEdit_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QDateTimeEdit_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QDateTimeEdit::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QDateTimeEdit_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QDateTimeEdit_QtDShell::__override_showEvent(QShowEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::showEvent((QShowEvent* )event0);
    } else {
        showEvent((QShowEvent* )event0);
    }
}

QSize  QDateTimeEdit_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QDateTimeEdit::sizeHint();
    } else {
        return sizeHint();
    }
}

void QDateTimeEdit_QtDShell::__override_stepBy(int  steps0, bool static_call)
{
    if (static_call) {
        QDateTimeEdit::stepBy((int )steps0);
    } else {
        stepBy((int )steps0);
    }
}

int  QDateTimeEdit_QtDShell::__override_stepEnabled(bool static_call) const
{
    if (static_call) {
        return QDateTimeEdit::stepEnabled();
    } else {
        return stepEnabled();
    }
}

void QDateTimeEdit_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

QString  QDateTimeEdit_QtDShell::__override_textFromDateTime(const QDateTime&  dt0, bool static_call) const
{
    if (static_call) {
        return QDateTimeEdit::textFromDateTime((const QDateTime& )dt0);
    } else {
        return textFromDateTime((const QDateTime& )dt0);
    }
}

void QDateTimeEdit_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractSpinBox::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

int  QDateTimeEdit_QtDShell::__override_validate(QString&  input0, int&  pos1, bool static_call) const
{
    if (static_call) {
        return QDateTimeEdit::validate((QString& )input0, (int& )pos1);
    } else {
        return validate((QString& )input0, (int& )pos1);
    }
}

void QDateTimeEdit_QtDShell::__override_wheelEvent(QWheelEvent*  event0, bool static_call)
{
    if (static_call) {
        QDateTimeEdit::wheelEvent((QWheelEvent* )event0);
    } else {
        wheelEvent((QWheelEvent* )event0);
    }
}

// QDateTimeEdit::dateChanged(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_dateChanged_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_dateChanged((const QDate& )__qt_date0);

}

// QDateTimeEdit::dateTimeChanged(const QDateTime & date)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_dateTimeChanged_QDateTime
(void* __this_nativeId,
 void* date0)
{
    const QDateTime&  __qt_date0 = (const QDateTime& ) *(QDateTime *)date0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_dateTimeChanged((const QDateTime& )__qt_date0);

}

// QDateTimeEdit::timeChanged(const QTime & date)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_timeChanged_QTime
(void* __this_nativeId,
 void* date0)
{
    const QTime&  __qt_date0 = (const QTime& ) *(QTime *)date0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_timeChanged((const QTime& )__qt_date0);

}

// ---externC---
// QDateTimeEdit::QDateTimeEdit(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_QDateTimeEdit_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QDateTimeEdit_QtDShell *__qt_this = new QDateTimeEdit_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QDateTimeEdit::QDateTimeEdit(const QDate & d, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_QDateTimeEdit_QDate_QWidget
(void *d_ptr,
 void* d0,
 void* parent1)
{
    const QDate&  __qt_d0 = (const QDate& ) *(QDate *)d0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QDateTimeEdit_QtDShell *__qt_this = new QDateTimeEdit_QtDShell(d_ptr, (const QDate& )__qt_d0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QDateTimeEdit::QDateTimeEdit(const QDateTime & dt, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_QDateTimeEdit_QDateTime_QWidget
(void *d_ptr,
 void* dt0,
 void* parent1)
{
    const QDateTime&  __qt_dt0 = (const QDateTime& ) *(QDateTime *)dt0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QDateTimeEdit_QtDShell *__qt_this = new QDateTimeEdit_QtDShell(d_ptr, (const QDateTime& )__qt_dt0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QDateTimeEdit::QDateTimeEdit(const QTime & t, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_QDateTimeEdit_QTime_QWidget
(void *d_ptr,
 void* t0,
 void* parent1)
{
    const QTime&  __qt_t0 = (const QTime& ) *(QTime *)t0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QDateTimeEdit_QtDShell *__qt_this = new QDateTimeEdit_QtDShell(d_ptr, (const QTime& )__qt_t0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QDateTimeEdit::calendarPopup() const
QTD_EXTERN QTD_EXPORT bool qtd_QDateTimeEdit_calendarPopup_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->calendarPopup();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::calendarWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_calendarWidget_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QCalendarWidget*  __qt_return_value = __qt_this->calendarWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::clearMaximumDate()
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_clearMaximumDate
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->clearMaximumDate();

}

// QDateTimeEdit::clearMaximumDateTime()
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_clearMaximumDateTime
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->clearMaximumDateTime();

}

// QDateTimeEdit::clearMaximumTime()
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_clearMaximumTime
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->clearMaximumTime();

}

// QDateTimeEdit::clearMinimumDate()
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_clearMinimumDate
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->clearMinimumDate();

}

// QDateTimeEdit::clearMinimumDateTime()
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_clearMinimumDateTime
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->clearMinimumDateTime();

}

// QDateTimeEdit::clearMinimumTime()
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_clearMinimumTime
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->clearMinimumTime();

}

// QDateTimeEdit::currentSection() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_currentSection_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentSection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::currentSectionIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_currentSectionIndex_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentSectionIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::date() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_date_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->date();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::dateTime() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_dateTime_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->dateTime();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::displayFormat() const
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_displayFormat_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->displayFormat();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDateTimeEdit::displayedSections() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_displayedSections_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->displayedSections();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::initStyleOption(QStyleOptionSpinBox * option) const
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_initStyleOption_nativepointerQStyleOptionSpinBox_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionSpinBox*  __qt_option0 = (QStyleOptionSpinBox* ) option0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionSpinBox* )__qt_option0);

}

// QDateTimeEdit::maximumDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_maximumDate_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->maximumDate();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::maximumDateTime() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_maximumDateTime_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->maximumDateTime();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::maximumTime() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_maximumTime_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->maximumTime();

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::minimumDate() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_minimumDate_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QDate  __qt_return_value = __qt_this->minimumDate();

    void* __d_return_value = (void*) new QDate(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::minimumDateTime() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_minimumDateTime_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->minimumDateTime();

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::minimumTime() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_minimumTime_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->minimumTime();

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::sectionAt(int index) const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_sectionAt_int_const
(void* __this_nativeId,
 int index0)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sectionAt((int )index0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::sectionCount() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_sectionCount_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sectionCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::sectionText(QDateTimeEdit::Section section) const
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_sectionText_Section_const
(void* __this_nativeId,
 void* __d_return_value,
 int section0)
{
    QDateTimeEdit::Section __qt_section0 = (QDateTimeEdit::Section) section0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->sectionText((QDateTimeEdit::Section )__qt_section0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDateTimeEdit::setCalendarPopup(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setCalendarPopup_bool
(void* __this_nativeId,
 bool enable0)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setCalendarPopup((bool )enable0);

}

// QDateTimeEdit::setCalendarWidget(QCalendarWidget * calendarWidget)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setCalendarWidget_QCalendarWidget
(void* __this_nativeId,
 void* calendarWidget0)
{
    QCalendarWidget*  __qt_calendarWidget0 = (QCalendarWidget* ) calendarWidget0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setCalendarWidget((QCalendarWidget* )__qt_calendarWidget0);

}

// QDateTimeEdit::setCurrentSection(QDateTimeEdit::Section section)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setCurrentSection_Section
(void* __this_nativeId,
 int section0)
{
    QDateTimeEdit::Section __qt_section0 = (QDateTimeEdit::Section) section0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setCurrentSection((QDateTimeEdit::Section )__qt_section0);

}

// QDateTimeEdit::setCurrentSectionIndex(int index)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setCurrentSectionIndex_int
(void* __this_nativeId,
 int index0)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setCurrentSectionIndex((int )index0);

}

// QDateTimeEdit::setDate(const QDate & date)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setDate_QDate
(void* __this_nativeId,
 void* date0)
{
    const QDate&  __qt_date0 = (const QDate& ) *(QDate *)date0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setDate((const QDate& )__qt_date0);

}

// QDateTimeEdit::setDateRange(const QDate & min, const QDate & max)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setDateRange_QDate_QDate
(void* __this_nativeId,
 void* min0,
 void* max1)
{
    const QDate&  __qt_min0 = (const QDate& ) *(QDate *)min0;
    const QDate&  __qt_max1 = (const QDate& ) *(QDate *)max1;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setDateRange((const QDate& )__qt_min0, (const QDate& )__qt_max1);

}

// QDateTimeEdit::setDateTime(const QDateTime & dateTime)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setDateTime_QDateTime
(void* __this_nativeId,
 void* dateTime0)
{
    const QDateTime&  __qt_dateTime0 = (const QDateTime& ) *(QDateTime *)dateTime0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setDateTime((const QDateTime& )__qt_dateTime0);

}

// QDateTimeEdit::setDateTimeRange(const QDateTime & min, const QDateTime & max)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setDateTimeRange_QDateTime_QDateTime
(void* __this_nativeId,
 void* min0,
 void* max1)
{
    const QDateTime&  __qt_min0 = (const QDateTime& ) *(QDateTime *)min0;
    const QDateTime&  __qt_max1 = (const QDateTime& ) *(QDateTime *)max1;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setDateTimeRange((const QDateTime& )__qt_min0, (const QDateTime& )__qt_max1);

}

// QDateTimeEdit::setDisplayFormat(const QString & format)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setDisplayFormat_string
(void* __this_nativeId,
 DArray format0)
{
    QString __qt_format0 = QString::fromUtf8((const char *)format0.ptr, format0.length);
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setDisplayFormat((const QString& )__qt_format0);

}

// QDateTimeEdit::setMaximumDate(const QDate & max)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setMaximumDate_QDate
(void* __this_nativeId,
 void* max0)
{
    const QDate&  __qt_max0 = (const QDate& ) *(QDate *)max0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setMaximumDate((const QDate& )__qt_max0);

}

// QDateTimeEdit::setMaximumDateTime(const QDateTime & dt)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setMaximumDateTime_QDateTime
(void* __this_nativeId,
 void* dt0)
{
    const QDateTime&  __qt_dt0 = (const QDateTime& ) *(QDateTime *)dt0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setMaximumDateTime((const QDateTime& )__qt_dt0);

}

// QDateTimeEdit::setMaximumTime(const QTime & max)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setMaximumTime_QTime
(void* __this_nativeId,
 void* max0)
{
    const QTime&  __qt_max0 = (const QTime& ) *(QTime *)max0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setMaximumTime((const QTime& )__qt_max0);

}

// QDateTimeEdit::setMinimumDate(const QDate & min)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setMinimumDate_QDate
(void* __this_nativeId,
 void* min0)
{
    const QDate&  __qt_min0 = (const QDate& ) *(QDate *)min0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setMinimumDate((const QDate& )__qt_min0);

}

// QDateTimeEdit::setMinimumDateTime(const QDateTime & dt)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setMinimumDateTime_QDateTime
(void* __this_nativeId,
 void* dt0)
{
    const QDateTime&  __qt_dt0 = (const QDateTime& ) *(QDateTime *)dt0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setMinimumDateTime((const QDateTime& )__qt_dt0);

}

// QDateTimeEdit::setMinimumTime(const QTime & min)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setMinimumTime_QTime
(void* __this_nativeId,
 void* min0)
{
    const QTime&  __qt_min0 = (const QTime& ) *(QTime *)min0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setMinimumTime((const QTime& )__qt_min0);

}

// QDateTimeEdit::setSelectedSection(QDateTimeEdit::Section section)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setSelectedSection_Section
(void* __this_nativeId,
 int section0)
{
    QDateTimeEdit::Section __qt_section0 = (QDateTimeEdit::Section) section0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setSelectedSection((QDateTimeEdit::Section )__qt_section0);

}

// QDateTimeEdit::setTime(const QTime & time)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setTime_QTime
(void* __this_nativeId,
 void* time0)
{
    const QTime&  __qt_time0 = (const QTime& ) *(QTime *)time0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setTime((const QTime& )__qt_time0);

}

// QDateTimeEdit::setTimeRange(const QTime & min, const QTime & max)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setTimeRange_QTime_QTime
(void* __this_nativeId,
 void* min0,
 void* max1)
{
    const QTime&  __qt_min0 = (const QTime& ) *(QTime *)min0;
    const QTime&  __qt_max1 = (const QTime& ) *(QTime *)max1;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setTimeRange((const QTime& )__qt_min0, (const QTime& )__qt_max1);

}

// QDateTimeEdit::setTimeSpec(Qt::TimeSpec spec)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_setTimeSpec_TimeSpec
(void* __this_nativeId,
 int spec0)
{
    Qt::TimeSpec __qt_spec0 = (Qt::TimeSpec) spec0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    __qt_this->setTimeSpec((Qt::TimeSpec )__qt_spec0);

}

// QDateTimeEdit::time() const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_time_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    QTime  __qt_return_value = __qt_this->time();

    void* __d_return_value = (void*) new QTime(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::timeSpec() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_timeSpec_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->timeSpec();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::clear()
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_clear
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_clear(__do_static_call);

}

// QDateTimeEdit::dateTimeFromText(const QString & text) const
QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_dateTimeFromText_string_const
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QDateTime  __qt_return_value = __qt_this->__override_dateTimeFromText((const QString& )__qt_text0, __do_static_call);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QDateTimeEdit::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QDateTimeEdit_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::fixup(QString & input) const
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_fixup_nativepointerstring_const
(void* __this_nativeId,
 DArray input0)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fixup((QString& )__qt_input0, __do_static_call);
    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);

}

// QDateTimeEdit::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QDateTimeEdit::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QDateTimeEdit_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QDateTimeEdit::mousePressEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QDateTimeEdit::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// QDateTimeEdit::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QDateTimeEdit::stepBy(int steps)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_stepBy_int
(void* __this_nativeId,
 int steps0)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_stepBy((int )steps0, __do_static_call);

}

// QDateTimeEdit::stepEnabled() const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_stepEnabled_const
(void* __this_nativeId)
{
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_stepEnabled(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::textFromDateTime(const QDateTime & dt) const
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_textFromDateTime_QDateTime_const
(void* __this_nativeId,
 void* __d_return_value,
 void* dt0)
{
    const QDateTime&  __qt_dt0 = (const QDateTime& ) *(QDateTime *)dt0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_textFromDateTime((const QDateTime& )__qt_dt0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDateTimeEdit::validate(QString & input, int & pos) const
QTD_EXTERN QTD_EXPORT int qtd_QDateTimeEdit_validate_nativepointerstring_nativepointerint_const
(void* __this_nativeId,
 DArray input0,
 int * pos1)
{
    QString __qt_input0 = QString::fromUtf8((const char *)input0.ptr, input0.length);
    int&  __qt_pos1 = (int& ) * (int *) pos1;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_validate((QString& )__qt_input0, (int& )__qt_pos1, __do_static_call);

    qtd_toUtf8(__qt_input0.utf16(), __qt_input0.size(), &input0);
    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDateTimeEdit::wheelEvent(QWheelEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QDateTimeEdit_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* event0)
{
    QWheelEvent*  __qt_event0 = (QWheelEvent* ) event0;
    QDateTimeEdit_QtDShell *__qt_this = (QDateTimeEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDateTimeEdit_staticMetaObject() {
    return (void*)&QDateTimeEdit::staticMetaObject;
}


