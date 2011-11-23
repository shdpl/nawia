#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcompleter.h>
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
#include <qmenu.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QLineEdit_shell.h"
#include <iostream>
#include <qlineedit.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QLineEditEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QLineEditEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_createEntity(void *nativeId, void* dId)
{
    new QLineEditEntity((QObject*)nativeId, dId);
}

QLineEdit_QtDShell::QLineEdit_QtDShell(void *d_ptr, QWidget*  parent0)
    : QLineEdit(parent0),
      QObjectLink(this, d_ptr)
{
}

QLineEdit_QtDShell::QLineEdit_QtDShell(void *d_ptr, const QString&  arg__1, QWidget*  parent1)
    : QLineEdit(arg__1, parent1),
      QObjectLink(this, d_ptr)
{
}

QLineEdit_QtDShell::~QLineEdit_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QLineEdit_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QLineEdit::metaObject();
}

int QLineEdit_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QLineEdit::qt_metacall(_c, _id, _a);
}

int QLineEdit_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QLineEdit::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QLineEdit_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QLineEdit_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* e0))
void QLineEdit_QtDShell::dragLeaveEvent(QDragLeaveEvent*  e0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* e0))
void QLineEdit_QtDShell::dragMoveEvent(QDragMoveEvent*  e0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QLineEdit_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QLineEdit_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QLineEdit_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QLineEdit_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QLineEdit_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QLineEdit_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QLineEdit_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QLineEdit_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QLineEdit_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QLineEdit_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QLineEdit_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QLineEdit_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QRect  QLineEdit_QtDShell::__public_cursorRect() const
{
    return QLineEdit::cursorRect();
}

void QLineEdit_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QLineEdit_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QLineEdit_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QLineEdit_QtDShell::__public_initStyleOption(QStyleOptionFrame*  option0) const
{
    QLineEdit::initStyleOption((QStyleOptionFrame* )option0);
}

void QLineEdit_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QLineEdit_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QLineEdit_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QLineEdit_QtDShell::__public_cursorPositionChanged(int  arg__1, int  arg__2)
{
    QLineEdit::cursorPositionChanged((int )arg__1, (int )arg__2);
}

void QLineEdit_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QLineEdit_QtDShell::__public_editingFinished()
{
    QLineEdit::editingFinished();
}

void QLineEdit_QtDShell::__public_returnPressed()
{
    QLineEdit::returnPressed();
}

void QLineEdit_QtDShell::__public_selectionChanged()
{
    QLineEdit::selectionChanged();
}

void QLineEdit_QtDShell::__public_textChanged(const QString&  arg__1)
{
    QLineEdit::textChanged((const QString& )arg__1);
}

void QLineEdit_QtDShell::__public_textEdited(const QString&  arg__1)
{
    QLineEdit::textEdited((const QString& )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QLineEdit_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QLineEdit_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QLineEdit_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call)
{
    if (static_call) {
        QLineEdit::dragLeaveEvent((QDragLeaveEvent* )e0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )e0);
    }
}

void QLineEdit_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call)
{
    if (static_call) {
        QLineEdit::dragMoveEvent((QDragMoveEvent* )e0);
    } else {
        dragMoveEvent((QDragMoveEvent* )e0);
    }
}

void QLineEdit_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QLineEdit_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QLineEdit::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QLineEdit_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QLineEdit_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QLineEdit_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QLineEdit_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QLineEdit_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QLineEdit_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QLineEdit_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLineEdit::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QLineEdit_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QLineEdit_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QLineEdit_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QLineEdit_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QLineEdit::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QLineEdit_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QLineEdit_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QLineEdit_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QLineEdit::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QLineEdit_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QLineEdit_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QLineEdit::sizeHint();
    } else {
        return sizeHint();
    }
}

void QLineEdit_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QLineEdit_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QLineEdit::cursorPositionChanged(int arg__1, int arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_cursorPositionChanged_int_int
(void* __this_nativeId,
 int arg__1,
 int arg__2)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_cursorPositionChanged((int )arg__1, (int )arg__2);

}

// QLineEdit::editingFinished()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_editingFinished
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_editingFinished();

}

// QLineEdit::returnPressed()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_returnPressed
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_returnPressed();

}

// QLineEdit::selectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_selectionChanged
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged();

}

// QLineEdit::textChanged(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_textChanged_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_textChanged((const QString& )__qt_arg__1);

}

// QLineEdit::textEdited(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_textEdited_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_textEdited((const QString& )__qt_arg__1);

}

// ---externC---
// QLineEdit::QLineEdit(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QLineEdit_QLineEdit_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QLineEdit_QtDShell *__qt_this = new QLineEdit_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QLineEdit::QLineEdit(const QString & arg__1, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QLineEdit_QLineEdit_string_QWidget
(void *d_ptr,
 DArray arg__1,
 void* parent1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QLineEdit_QtDShell *__qt_this = new QLineEdit_QtDShell(d_ptr, (const QString& )__qt_arg__1, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QLineEdit::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QLineEdit_alignment_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::backspace()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_backspace
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->backspace();

}

// QLineEdit::clear()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_clear
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QLineEdit::completer() const
QTD_EXTERN QTD_EXPORT void* qtd_QLineEdit_completer_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QCompleter*  __qt_return_value = __qt_this->completer();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLineEdit::copy() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_copy_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->copy();

}

// QLineEdit::createStandardContextMenu()
QTD_EXTERN QTD_EXPORT void* qtd_QLineEdit_createStandardContextMenu
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->createStandardContextMenu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLineEdit::cursorBackward(bool mark, int steps)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_cursorBackward_bool_int
(void* __this_nativeId,
 bool mark0,
 int steps1)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->cursorBackward((bool )mark0, (int )steps1);

}

// QLineEdit::cursorForward(bool mark, int steps)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_cursorForward_bool_int
(void* __this_nativeId,
 bool mark0,
 int steps1)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->cursorForward((bool )mark0, (int )steps1);

}

// QLineEdit::cursorPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QLineEdit_cursorPosition_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cursorPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::cursorPositionAt(const QPoint & pos)
QTD_EXTERN QTD_EXPORT int qtd_QLineEdit_cursorPositionAt_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cursorPositionAt((const QPoint& )pos0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::cursorRect() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_cursorRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->__public_cursorRect();

    *__d_return_value = __qt_return_value;

}

// QLineEdit::cursorWordBackward(bool mark)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_cursorWordBackward_bool
(void* __this_nativeId,
 bool mark0)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->cursorWordBackward((bool )mark0);

}

// QLineEdit::cursorWordForward(bool mark)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_cursorWordForward_bool
(void* __this_nativeId,
 bool mark0)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->cursorWordForward((bool )mark0);

}

// QLineEdit::cut()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_cut
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->cut();

}

// QLineEdit::del()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_del
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->del();

}

// QLineEdit::deselect()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_deselect
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->deselect();

}

// QLineEdit::displayText() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_displayText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->displayText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLineEdit::dragEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_dragEnabled_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->dragEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::echoMode() const
QTD_EXTERN QTD_EXPORT int qtd_QLineEdit_echoMode_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->echoMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::end(bool mark)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_end_bool
(void* __this_nativeId,
 bool mark0)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->end((bool )mark0);

}

// QLineEdit::getTextMargins(int * left, int * top, int * right, int * bottom) const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_getTextMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const
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
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->getTextMargins((int* )__qt_left0, (int* )__qt_top1, (int* )__qt_right2, (int* )__qt_bottom3);

}

// QLineEdit::hasAcceptableInput() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_hasAcceptableInput_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAcceptableInput();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::hasFrame() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_hasFrame_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFrame();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::hasSelectedText() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_hasSelectedText_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasSelectedText();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::home(bool mark)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_home_bool
(void* __this_nativeId,
 bool mark0)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->home((bool )mark0);

}

// QLineEdit::initStyleOption(QStyleOptionFrame * option) const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_initStyleOption_nativepointerQStyleOptionFrame_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionFrame*  __qt_option0 = (QStyleOptionFrame* ) option0;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionFrame* )__qt_option0);

}

// QLineEdit::inputMask() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_inputMask_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->inputMask();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLineEdit::insert(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_insert_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->insert((const QString& )__qt_arg__1);

}

// QLineEdit::isModified() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_isModified_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isModified();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::isReadOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_isReadOnly_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::isRedoAvailable() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_isRedoAvailable_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRedoAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::isUndoAvailable() const
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_isUndoAvailable_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isUndoAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::maxLength() const
QTD_EXTERN QTD_EXPORT int qtd_QLineEdit_maxLength_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxLength();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::paste()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_paste
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->paste();

}

// QLineEdit::placeholderText() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_placeholderText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->placeholderText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLineEdit::redo()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_redo
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->redo();

}

// QLineEdit::selectAll()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_selectAll
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->selectAll();

}

// QLineEdit::selectedText() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_selectedText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->selectedText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLineEdit::selectionStart() const
QTD_EXTERN QTD_EXPORT int qtd_QLineEdit_selectionStart_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->selectionStart();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::setAlignment(QFlags<Qt::AlignmentFlag> flag)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setAlignment_Alignment
(void* __this_nativeId,
 int flag0)
{
    QFlags<Qt::AlignmentFlag> __qt_flag0 = (QFlags<Qt::AlignmentFlag>) flag0;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_flag0);

}

// QLineEdit::setCompleter(QCompleter * completer)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setCompleter_QCompleter
(void* __this_nativeId,
 void* completer0)
{
    QCompleter*  __qt_completer0 = (QCompleter* ) completer0;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setCompleter((QCompleter* )__qt_completer0);

}

// QLineEdit::setCursorPosition(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setCursorPosition_int
(void* __this_nativeId,
 int arg__1)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setCursorPosition((int )arg__1);

}

// QLineEdit::setDragEnabled(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setDragEnabled_bool
(void* __this_nativeId,
 bool b0)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setDragEnabled((bool )b0);

}

// QLineEdit::setEchoMode(QLineEdit::EchoMode arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setEchoMode_EchoMode
(void* __this_nativeId,
 int arg__1)
{
    QLineEdit::EchoMode __qt_arg__1 = (QLineEdit::EchoMode) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setEchoMode((QLineEdit::EchoMode )__qt_arg__1);

}

// QLineEdit::setFrame(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setFrame_bool
(void* __this_nativeId,
 bool arg__1)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setFrame((bool )arg__1);

}

// QLineEdit::setInputMask(const QString & inputMask)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setInputMask_string
(void* __this_nativeId,
 DArray inputMask0)
{
    QString __qt_inputMask0 = QString::fromUtf8((const char *)inputMask0.ptr, inputMask0.length);
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setInputMask((const QString& )__qt_inputMask0);

}

// QLineEdit::setMaxLength(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setMaxLength_int
(void* __this_nativeId,
 int arg__1)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setMaxLength((int )arg__1);

}

// QLineEdit::setModified(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setModified_bool
(void* __this_nativeId,
 bool arg__1)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setModified((bool )arg__1);

}

// QLineEdit::setPlaceholderText(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setPlaceholderText_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setPlaceholderText((const QString& )__qt_arg__1);

}

// QLineEdit::setReadOnly(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setReadOnly_bool
(void* __this_nativeId,
 bool arg__1)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setReadOnly((bool )arg__1);

}

// QLineEdit::setSelection(int arg__1, int arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setSelection_int_int
(void* __this_nativeId,
 int arg__1,
 int arg__2)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setSelection((int )arg__1, (int )arg__2);

}

// QLineEdit::setText(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setText_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_arg__1);

}

// QLineEdit::setTextMargins(int left, int top, int right, int bottom)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setTextMargins_int_int_int_int
(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setTextMargins((int )left0, (int )top1, (int )right2, (int )bottom3);

}

// QLineEdit::setValidator(const QValidator * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_setValidator_QValidator
(void* __this_nativeId,
 void* arg__1)
{
    const QValidator*  __qt_arg__1 = (const QValidator* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->setValidator((const QValidator* )__qt_arg__1);

}

// QLineEdit::text() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_text_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QLineEdit::undo()
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_undo
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    __qt_this->undo();

}

// QLineEdit::validator() const
QTD_EXTERN QTD_EXPORT void* qtd_QLineEdit_validator_const
(void* __this_nativeId)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    const QValidator*  __qt_return_value = __qt_this->validator();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLineEdit::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::contextMenuEvent(QContextMenuEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* arg__1)
{
    QContextMenuEvent*  __qt_arg__1 = (QContextMenuEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::dragEnterEvent(QDragEnterEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragEnterEvent*  __qt_arg__1 = (QDragEnterEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::dragLeaveEvent(QDragLeaveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragLeaveEvent*  __qt_e0 = (QDragLeaveEvent* ) e0;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_e0, __do_static_call);

}

// QLineEdit::dragMoveEvent(QDragMoveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragMoveEvent*  __qt_e0 = (QDragMoveEvent* ) e0;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_e0, __do_static_call);

}

// QLineEdit::dropEvent(QDropEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_dropEvent_QDropEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDropEvent*  __qt_arg__1 = (QDropEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QLineEdit_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLineEdit::focusInEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::focusOutEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::inputMethodEvent(QInputMethodEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* arg__1)
{
    QInputMethodEvent*  __qt_arg__1 = (QInputMethodEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::inputMethodQuery(Qt::InputMethodQuery arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QLineEdit_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int arg__1)
{
    Qt::InputMethodQuery __qt_arg__1 = (Qt::InputMethodQuery) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_arg__1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QLineEdit::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLineEdit::mouseDoubleClickEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::mouseMoveEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QLineEdit::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QLineEdit_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLineEdit_QtDShell *__qt_this = (QLineEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QLineEdit_staticMetaObject() {
    return (void*)&QLineEdit::staticMetaObject;
}


