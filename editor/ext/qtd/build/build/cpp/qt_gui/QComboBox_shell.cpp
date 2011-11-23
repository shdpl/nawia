#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcombobox.h>
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
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvalidator.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QComboBox_shell.h"
#include <iostream>
#include <qcombobox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QComboBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QComboBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QComboBox_createEntity(void *nativeId, void* dId)
{
    new QComboBoxEntity((QObject*)nativeId, dId);
}

QComboBox_QtDShell::QComboBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QComboBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QComboBox_QtDShell::~QComboBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QComboBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QComboBox::metaObject();
}

int QComboBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QComboBox::qt_metacall(_c, _id, _a);
}

int QComboBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QComboBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QComboBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::contextMenuEvent(QContextMenuEvent*  e0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QComboBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QComboBox_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QComboBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::focusInEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QComboBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::focusOutEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QComboBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::hideEvent(QHideEvent*  e0)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QComboBox_hidePopup_dispatch, (void *dId))
QTD_FUNC(GUI, QComboBox_hidePopup_dispatch)
void QComboBox_QtDShell::hidePopup()
{
    qtd_QComboBox_hidePopup_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QComboBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::keyPressEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::keyReleaseEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QComboBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QComboBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QComboBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::mousePressEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QComboBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QComboBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::showEvent(QShowEvent*  e0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QComboBox_showPopup_dispatch, (void *dId))
QTD_FUNC(GUI, QComboBox_showPopup_dispatch)
void QComboBox_QtDShell::showPopup()
{
    qtd_QComboBox_showPopup_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QComboBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QComboBox_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* e0))
void QComboBox_QtDShell::wheelEvent(QWheelEvent*  e0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QComboBox_initCallBacks(VoidFunc *virts) {
    qtd_QComboBox_hidePopup_dispatch = (qtd_QComboBox_hidePopup_dispatch_t) virts[0];
    qtd_QComboBox_showPopup_dispatch = (qtd_QComboBox_showPopup_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QComboBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QComboBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QComboBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QComboBox_QtDShell::__public_initStyleOption(QStyleOptionComboBox*  option0) const
{
    QComboBox::initStyleOption((QStyleOptionComboBox* )option0);
}

void QComboBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QComboBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QComboBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QComboBox_QtDShell::__public_activated(const QString&  arg__1)
{
    QComboBox::activated((const QString& )arg__1);
}

void QComboBox_QtDShell::__public_activated(int  index0)
{
    QComboBox::activated((int )index0);
}

void QComboBox_QtDShell::__public_currentIndexChanged(const QString&  arg__1)
{
    QComboBox::currentIndexChanged((const QString& )arg__1);
}

void QComboBox_QtDShell::__public_currentIndexChanged(int  index0)
{
    QComboBox::currentIndexChanged((int )index0);
}

void QComboBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QComboBox_QtDShell::__public_editTextChanged(const QString&  arg__1)
{
    QComboBox::editTextChanged((const QString& )arg__1);
}

void QComboBox_QtDShell::__public_highlighted(const QString&  arg__1)
{
    QComboBox::highlighted((const QString& )arg__1);
}

void QComboBox_QtDShell::__public_highlighted(int  index0)
{
    QComboBox::highlighted((int )index0);
}

// Write virtual function overries used to decide on static/virtual calls
void QComboBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::contextMenuEvent((QContextMenuEvent* )e0);
    } else {
        contextMenuEvent((QContextMenuEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QComboBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QComboBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QComboBox_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QComboBox::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QComboBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QComboBox_QtDShell::__override_focusInEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::focusInEvent((QFocusEvent* )e0);
    } else {
        focusInEvent((QFocusEvent* )e0);
    }
}

bool  QComboBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QComboBox_QtDShell::__override_focusOutEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::focusOutEvent((QFocusEvent* )e0);
    } else {
        focusOutEvent((QFocusEvent* )e0);
    }
}

int  QComboBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QComboBox_QtDShell::__override_hideEvent(QHideEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::hideEvent((QHideEvent* )e0);
    } else {
        hideEvent((QHideEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_hidePopup(bool static_call)
{
    if (static_call) {
        QComboBox::hidePopup();
    } else {
        hidePopup();
    }
}

void QComboBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QComboBox::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QComboBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QComboBox::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QComboBox_QtDShell::__override_keyPressEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::keyPressEvent((QKeyEvent* )e0);
    } else {
        keyPressEvent((QKeyEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::keyReleaseEvent((QKeyEvent* )e0);
    } else {
        keyReleaseEvent((QKeyEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QComboBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QComboBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QComboBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QComboBox::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QComboBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_mousePressEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::mousePressEvent((QMouseEvent* )e0);
    } else {
        mousePressEvent((QMouseEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QComboBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QComboBox_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QComboBox_QtDShell::__override_showEvent(QShowEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::showEvent((QShowEvent* )e0);
    } else {
        showEvent((QShowEvent* )e0);
    }
}

void QComboBox_QtDShell::__override_showPopup(bool static_call)
{
    if (static_call) {
        QComboBox::showPopup();
    } else {
        showPopup();
    }
}

QSize  QComboBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QComboBox::sizeHint();
    } else {
        return sizeHint();
    }
}

void QComboBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QComboBox_QtDShell::__override_wheelEvent(QWheelEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::wheelEvent((QWheelEvent* )e0);
    } else {
        wheelEvent((QWheelEvent* )e0);
    }
}

// QComboBox::activated(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_activated_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((const QString& )__qt_arg__1);

}

// QComboBox::activated(int index)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_activated_int
(void* __this_nativeId,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((int )index0);

}

// QComboBox::currentIndexChanged(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_currentIndexChanged_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_currentIndexChanged((const QString& )__qt_arg__1);

}

// QComboBox::currentIndexChanged(int index)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_currentIndexChanged_int
(void* __this_nativeId,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_currentIndexChanged((int )index0);

}

// QComboBox::editTextChanged(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_editTextChanged_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_editTextChanged((const QString& )__qt_arg__1);

}

// QComboBox::highlighted(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_highlighted_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_highlighted((const QString& )__qt_arg__1);

}

// QComboBox::highlighted(int index)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_highlighted_int
(void* __this_nativeId,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_highlighted((int )index0);

}

// ---externC---
// QComboBox::QComboBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_QComboBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QComboBox_QtDShell *__qt_this = new QComboBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QComboBox::addItem(const QIcon & icon, const QString & text, const QVariant & userData)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_addItem_QIcon_string_QVariant
(void* __this_nativeId,
 void* icon0,
 DArray text1,
 QVariant* userData2)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QVariant __qt_userData2 = userData2 == NULL ? QVariant() : QVariant(*userData2);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->addItem((const QIcon& )__qt_icon0, (const QString& )__qt_text1, (const QVariant& )__qt_userData2);

}

// QComboBox::addItem(const QString & text, const QVariant & userData)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_addItem_string_QVariant
(void* __this_nativeId,
 DArray text0,
 QVariant* userData1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QVariant __qt_userData1 = userData1 == NULL ? QVariant() : QVariant(*userData1);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->addItem((const QString& )__qt_text0, (const QVariant& )__qt_userData1);

}

// QComboBox::addItems(const QStringList & texts)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_addItems_QList
(void* __this_nativeId,
 void* texts0)
{
QStringList __qt_texts0 = (*(QStringList *)texts0);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->addItems((const QStringList& )__qt_texts0);

}

// QComboBox::clear()
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_clear
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QComboBox::clearEditText()
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_clearEditText
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->clearEditText();

}

// QComboBox::completer() const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_completer_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QCompleter*  __qt_return_value = __qt_this->completer();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QComboBox::count() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_count_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::currentIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_currentIndex_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::currentText() const
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_currentText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->currentText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QComboBox::duplicatesEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QComboBox_duplicatesEnabled_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->duplicatesEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::findData(const QVariant & data, int role, QFlags<Qt::MatchFlag> flags) const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_findData_QVariant_int_MatchFlags_const
(void* __this_nativeId,
 QVariant* data0,
 int role1,
 int flags2)
{
    QVariant __qt_data0 = data0 == NULL ? QVariant() : QVariant(*data0);
    QFlags<Qt::MatchFlag> __qt_flags2 = (QFlags<Qt::MatchFlag>) flags2;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->findData((const QVariant& )__qt_data0, (int )role1, (Qt::MatchFlags )__qt_flags2);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::findText(const QString & text, QFlags<Qt::MatchFlag> flags) const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_findText_string_MatchFlags_const
(void* __this_nativeId,
 DArray text0,
 int flags1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFlags<Qt::MatchFlag> __qt_flags1 = (QFlags<Qt::MatchFlag>) flags1;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->findText((const QString& )__qt_text0, (Qt::MatchFlags )__qt_flags1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::hasFrame() const
QTD_EXTERN QTD_EXPORT bool qtd_QComboBox_hasFrame_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasFrame();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::iconSize() const
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_iconSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->iconSize();

    *__d_return_value = __qt_return_value;

}

// QComboBox::initStyleOption(QStyleOptionComboBox * option) const
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_initStyleOption_nativepointerQStyleOptionComboBox_const
(void* __this_nativeId,
 void* option0)
{
    QStyleOptionComboBox*  __qt_option0 = (QStyleOptionComboBox* ) option0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_initStyleOption((QStyleOptionComboBox* )__qt_option0);

}

// QComboBox::insertItem(int index, const QIcon & icon, const QString & text, const QVariant & userData)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_insertItem_int_QIcon_string_QVariant
(void* __this_nativeId,
 int index0,
 void* icon1,
 DArray text2,
 QVariant* userData3)
{
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QString __qt_text2 = QString::fromUtf8((const char *)text2.ptr, text2.length);
    QVariant __qt_userData3 = userData3 == NULL ? QVariant() : QVariant(*userData3);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->insertItem((int )index0, (const QIcon& )__qt_icon1, (const QString& )__qt_text2, (const QVariant& )__qt_userData3);

}

// QComboBox::insertItem(int index, const QString & text, const QVariant & userData)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_insertItem_int_string_QVariant
(void* __this_nativeId,
 int index0,
 DArray text1,
 QVariant* userData2)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QVariant __qt_userData2 = userData2 == NULL ? QVariant() : QVariant(*userData2);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->insertItem((int )index0, (const QString& )__qt_text1, (const QVariant& )__qt_userData2);

}

// QComboBox::insertItems(int index, const QStringList & texts)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_insertItems_int_QList
(void* __this_nativeId,
 int index0,
 void* texts1)
{
QStringList __qt_texts1 = (*(QStringList *)texts1);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->insertItems((int )index0, (const QStringList& )__qt_texts1);

}

// QComboBox::insertPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_insertPolicy_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::insertSeparator(int index)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_insertSeparator_int
(void* __this_nativeId,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->insertSeparator((int )index0);

}

// QComboBox::isEditable() const
QTD_EXTERN QTD_EXPORT bool qtd_QComboBox_isEditable_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEditable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::itemData(int index, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_itemData_int_int_const
(void* __this_nativeId,
 int index0,
 int role1)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->itemData((int )index0, (int )role1);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QComboBox::itemDelegate() const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_itemDelegate_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QAbstractItemDelegate*  __qt_return_value = __qt_this->itemDelegate();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QComboBox::itemIcon(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_itemIcon_int_const
(void* __this_nativeId,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->itemIcon((int )index0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QComboBox::itemText(int index) const
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_itemText_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->itemText((int )index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QComboBox::lineEdit() const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_lineEdit_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QLineEdit*  __qt_return_value = __qt_this->lineEdit();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QComboBox::maxCount() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_maxCount_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::maxVisibleItems() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_maxVisibleItems_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxVisibleItems();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::minimumContentsLength() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_minimumContentsLength_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->minimumContentsLength();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_model_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QComboBox::modelColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_modelColumn_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modelColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::removeItem(int index)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_removeItem_int
(void* __this_nativeId,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->removeItem((int )index0);

}

// QComboBox::rootModelIndex() const
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_rootModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->rootModelIndex();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QComboBox::setCompleter(QCompleter * c)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setCompleter_QCompleter
(void* __this_nativeId,
 void* c0)
{
    QCompleter*  __qt_c0 = (QCompleter* ) c0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setCompleter((QCompleter* )__qt_c0);

}

// QComboBox::setCurrentIndex(int index)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setCurrentIndex_int
(void* __this_nativeId,
 int index0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setCurrentIndex((int )index0);

}

// QComboBox::setDuplicatesEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setDuplicatesEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setDuplicatesEnabled((bool )enable0);

}

// QComboBox::setEditText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setEditText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setEditText((const QString& )__qt_text0);

}

// QComboBox::setEditable(bool editable)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setEditable_bool
(void* __this_nativeId,
 bool editable0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setEditable((bool )editable0);

}

// QComboBox::setFrame(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setFrame_bool
(void* __this_nativeId,
 bool arg__1)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setFrame((bool )arg__1);

}

// QComboBox::setIconSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setIconSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setIconSize((const QSize& )size0);

}

// QComboBox::setInsertPolicy(QComboBox::InsertPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setInsertPolicy_InsertPolicy
(void* __this_nativeId,
 int policy0)
{
    QComboBox::InsertPolicy __qt_policy0 = (QComboBox::InsertPolicy) policy0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setInsertPolicy((QComboBox::InsertPolicy )__qt_policy0);

}

// QComboBox::setItemData(int index, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setItemData_int_QVariant_int
(void* __this_nativeId,
 int index0,
 QVariant* value1,
 int role2)
{
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setItemData((int )index0, (const QVariant& )__qt_value1, (int )role2);

}

// QComboBox::setItemDelegate(QAbstractItemDelegate * delegate_)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setItemDelegate_QAbstractItemDelegate
(void* __this_nativeId,
 void* delegate0)
{
    QAbstractItemDelegate*  __qt_delegate0 = (QAbstractItemDelegate* ) delegate0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setItemDelegate((QAbstractItemDelegate* )__qt_delegate0);

}

// QComboBox::setItemIcon(int index, const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setItemIcon_int_QIcon
(void* __this_nativeId,
 int index0,
 void* icon1)
{
    const QIcon&  __qt_icon1 = (const QIcon& ) *(QIcon *)icon1;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setItemIcon((int )index0, (const QIcon& )__qt_icon1);

}

// QComboBox::setItemText(int index, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setItemText_int_string
(void* __this_nativeId,
 int index0,
 DArray text1)
{
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setItemText((int )index0, (const QString& )__qt_text1);

}

// QComboBox::setLineEdit(QLineEdit * edit)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setLineEdit_QLineEdit
(void* __this_nativeId,
 void* edit0)
{
    QLineEdit*  __qt_edit0 = (QLineEdit* ) edit0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setLineEdit((QLineEdit* )__qt_edit0);

}

// QComboBox::setMaxCount(int max)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setMaxCount_int
(void* __this_nativeId,
 int max0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setMaxCount((int )max0);

}

// QComboBox::setMaxVisibleItems(int maxItems)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setMaxVisibleItems_int
(void* __this_nativeId,
 int maxItems0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setMaxVisibleItems((int )maxItems0);

}

// QComboBox::setMinimumContentsLength(int characters)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setMinimumContentsLength_int
(void* __this_nativeId,
 int characters0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setMinimumContentsLength((int )characters0);

}

// QComboBox::setModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setModel((QAbstractItemModel* )__qt_model0);

}

// QComboBox::setModelColumn(int visibleColumn)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setModelColumn_int
(void* __this_nativeId,
 int visibleColumn0)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setModelColumn((int )visibleColumn0);

}

// QComboBox::setRootModelIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setRootModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setRootModelIndex((const QModelIndex& )__qt_index0);

}

// QComboBox::setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setSizeAdjustPolicy_SizeAdjustPolicy
(void* __this_nativeId,
 int policy0)
{
    QComboBox::SizeAdjustPolicy __qt_policy0 = (QComboBox::SizeAdjustPolicy) policy0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setSizeAdjustPolicy((QComboBox::SizeAdjustPolicy )__qt_policy0);

}

// QComboBox::setValidator(const QValidator * v)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setValidator_QValidator
(void* __this_nativeId,
 void* v0)
{
    const QValidator*  __qt_v0 = (const QValidator* ) v0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setValidator((const QValidator* )__qt_v0);

}

// QComboBox::setView(QAbstractItemView * itemView)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_setView_QAbstractItemView
(void* __this_nativeId,
 void* itemView0)
{
    QAbstractItemView*  __qt_itemView0 = (QAbstractItemView* ) itemView0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    __qt_this->setView((QAbstractItemView* )__qt_itemView0);

}

// QComboBox::sizeAdjustPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QComboBox_sizeAdjustPolicy_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sizeAdjustPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::validator() const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_validator_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    const QValidator*  __qt_return_value = __qt_this->validator();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QComboBox::view() const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_view_const
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    QAbstractItemView*  __qt_return_value = __qt_this->view();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QComboBox::changeEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_changeEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_e0, __do_static_call);

}

// QComboBox::contextMenuEvent(QContextMenuEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* e0)
{
    QContextMenuEvent*  __qt_e0 = (QContextMenuEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_e0, __do_static_call);

}

// QComboBox::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QComboBox_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QComboBox::focusInEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QComboBox::focusOutEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QComboBox::hideEvent(QHideEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_hideEvent_QHideEvent
(void* __this_nativeId,
 void* e0)
{
    QHideEvent*  __qt_e0 = (QHideEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hideEvent((QHideEvent* )__qt_e0, __do_static_call);

}

// QComboBox::hidePopup()
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_hidePopup
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_hidePopup(__do_static_call);

}

// QComboBox::inputMethodEvent(QInputMethodEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* arg__1)
{
    QInputMethodEvent*  __qt_arg__1 = (QInputMethodEvent* ) arg__1;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_arg__1, __do_static_call);

}

// QComboBox::inputMethodQuery(Qt::InputMethodQuery arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int arg__1)
{
    Qt::InputMethodQuery __qt_arg__1 = (Qt::InputMethodQuery) arg__1;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_arg__1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QComboBox::keyPressEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QComboBox::keyReleaseEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QComboBox::minimumSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_minimumSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QComboBox::mousePressEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QComboBox::mouseReleaseEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QComboBox::paintEvent(QPaintEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* e0)
{
    QPaintEvent*  __qt_e0 = (QPaintEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_e0, __do_static_call);

}

// QComboBox::resizeEvent(QResizeEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* e0)
{
    QResizeEvent*  __qt_e0 = (QResizeEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_e0, __do_static_call);

}

// QComboBox::showEvent(QShowEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_showEvent_QShowEvent
(void* __this_nativeId,
 void* e0)
{
    QShowEvent*  __qt_e0 = (QShowEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_e0, __do_static_call);

}

// QComboBox::showPopup()
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_showPopup
(void* __this_nativeId)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showPopup(__do_static_call);

}

// QComboBox::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QComboBox::wheelEvent(QWheelEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QComboBox_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* e0)
{
    QWheelEvent*  __qt_e0 = (QWheelEvent* ) e0;
    QComboBox_QtDShell *__qt_this = (QComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_e0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QComboBox_staticMetaObject() {
    return (void*)&QComboBox::staticMetaObject;
}


