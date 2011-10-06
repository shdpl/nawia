#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontcombobox.h>
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

#include "QFontComboBox_shell.h"
#include <iostream>
#include <qfontcombobox.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QFontComboBoxEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFontComboBoxEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFontComboBox_createEntity(void *nativeId, void* dId)
{
    new QFontComboBoxEntity((QObject*)nativeId, dId);
}

QFontComboBox_QtDShell::QFontComboBox_QtDShell(void *d_ptr, QWidget*  parent0)
    : QFontComboBox(parent0),
      QObjectLink(this, d_ptr)
{
}

QFontComboBox_QtDShell::~QFontComboBox_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFontComboBox_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFontComboBox::metaObject();
}

int QFontComboBox_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFontComboBox::qt_metacall(_c, _id, _a);
}

int QFontComboBox_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFontComboBox::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFontComboBox_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::contextMenuEvent(QContextMenuEvent*  e0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QFontComboBox_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QFontComboBox_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFontComboBox_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::focusInEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QFontComboBox_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::focusOutEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QFontComboBox_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::hideEvent(QHideEvent*  e0)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QComboBox_hidePopup_dispatch, (void *dId))
void QFontComboBox_QtDShell::hidePopup()
{
    qtd_QComboBox_hidePopup_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QFontComboBox_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::keyPressEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::keyReleaseEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QFontComboBox_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QFontComboBox_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFontComboBox_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::mousePressEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QFontComboBox_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QFontComboBox_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::showEvent(QShowEvent*  e0)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QComboBox_showPopup_dispatch, (void *dId))
void QFontComboBox_QtDShell::showPopup()
{
    qtd_QComboBox_showPopup_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFontComboBox_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFontComboBox_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* e0))
void QFontComboBox_QtDShell::wheelEvent(QWheelEvent*  e0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QFontComboBox_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QFontComboBox_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QFontComboBox_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QFontComboBox_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QFontComboBox_QtDShell::__public_initStyleOption(QStyleOptionComboBox*  option0) const
{
    QComboBox::initStyleOption((QStyleOptionComboBox* )option0);
}

void QFontComboBox_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QFontComboBox_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFontComboBox_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QFontComboBox_QtDShell::__public_activated(const QString&  arg__1)
{
    QComboBox::activated((const QString& )arg__1);
}

void QFontComboBox_QtDShell::__public_activated(int  index0)
{
    QComboBox::activated((int )index0);
}

void QFontComboBox_QtDShell::__public_currentFontChanged(const QFont&  f0)
{
    QFontComboBox::currentFontChanged((const QFont& )f0);
}

void QFontComboBox_QtDShell::__public_currentIndexChanged(const QString&  arg__1)
{
    QComboBox::currentIndexChanged((const QString& )arg__1);
}

void QFontComboBox_QtDShell::__public_currentIndexChanged(int  index0)
{
    QComboBox::currentIndexChanged((int )index0);
}

void QFontComboBox_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QFontComboBox_QtDShell::__public_editTextChanged(const QString&  arg__1)
{
    QComboBox::editTextChanged((const QString& )arg__1);
}

void QFontComboBox_QtDShell::__public_highlighted(const QString&  arg__1)
{
    QComboBox::highlighted((const QString& )arg__1);
}

void QFontComboBox_QtDShell::__public_highlighted(int  index0)
{
    QComboBox::highlighted((int )index0);
}

// Write virtual function overries used to decide on static/virtual calls
void QFontComboBox_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::contextMenuEvent((QContextMenuEvent* )e0);
    } else {
        contextMenuEvent((QContextMenuEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QFontComboBox_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QFontComboBox_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QFontComboBox_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QFontComboBox::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QFontComboBox_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QFontComboBox_QtDShell::__override_focusInEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::focusInEvent((QFocusEvent* )e0);
    } else {
        focusInEvent((QFocusEvent* )e0);
    }
}

bool  QFontComboBox_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QFontComboBox_QtDShell::__override_focusOutEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::focusOutEvent((QFocusEvent* )e0);
    } else {
        focusOutEvent((QFocusEvent* )e0);
    }
}

int  QFontComboBox_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_hideEvent(QHideEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::hideEvent((QHideEvent* )e0);
    } else {
        hideEvent((QHideEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_hidePopup(bool static_call)
{
    if (static_call) {
        QComboBox::hidePopup();
    } else {
        hidePopup();
    }
}

void QFontComboBox_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QComboBox::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QFontComboBox_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QComboBox::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_keyPressEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::keyPressEvent((QKeyEvent* )e0);
    } else {
        keyPressEvent((QKeyEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_keyReleaseEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::keyReleaseEvent((QKeyEvent* )e0);
    } else {
        keyReleaseEvent((QKeyEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QFontComboBox_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QFontComboBox_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QFontComboBox_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QComboBox::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QFontComboBox_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_mousePressEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::mousePressEvent((QMouseEvent* )e0);
    } else {
        mousePressEvent((QMouseEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QFontComboBox_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QFontComboBox_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QFontComboBox_QtDShell::__override_showEvent(QShowEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::showEvent((QShowEvent* )e0);
    } else {
        showEvent((QShowEvent* )e0);
    }
}

void QFontComboBox_QtDShell::__override_showPopup(bool static_call)
{
    if (static_call) {
        QComboBox::showPopup();
    } else {
        showPopup();
    }
}

QSize  QFontComboBox_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QFontComboBox::sizeHint();
    } else {
        return sizeHint();
    }
}

void QFontComboBox_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QFontComboBox_QtDShell::__override_wheelEvent(QWheelEvent*  e0, bool static_call)
{
    if (static_call) {
        QComboBox::wheelEvent((QWheelEvent* )e0);
    } else {
        wheelEvent((QWheelEvent* )e0);
    }
}

// QFontComboBox::currentFontChanged(const QFont & f)
QTD_EXTERN QTD_EXPORT void qtd_QFontComboBox_currentFontChanged_QFont
(void* __this_nativeId,
 void* f0)
{
    const QFont&  __qt_f0 = (const QFont& ) *(QFont *)f0;
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    __qt_this->__public_currentFontChanged((const QFont& )__qt_f0);

}

// ---externC---
// QFontComboBox::QFontComboBox(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFontComboBox_QFontComboBox_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFontComboBox_QtDShell *__qt_this = new QFontComboBox_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QFontComboBox::currentFont() const
QTD_EXTERN QTD_EXPORT void* qtd_QFontComboBox_currentFont_const
(void* __this_nativeId)
{
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->currentFont();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QFontComboBox::fontFilters() const
QTD_EXTERN QTD_EXPORT int qtd_QFontComboBox_fontFilters_const
(void* __this_nativeId)
{
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fontFilters();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontComboBox::setCurrentFont(const QFont & f)
QTD_EXTERN QTD_EXPORT void qtd_QFontComboBox_setCurrentFont_QFont
(void* __this_nativeId,
 void* f0)
{
    const QFont&  __qt_f0 = (const QFont& ) *(QFont *)f0;
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    __qt_this->setCurrentFont((const QFont& )__qt_f0);

}

// QFontComboBox::setFontFilters(QFlags<QFontComboBox::FontFilter> filters)
QTD_EXTERN QTD_EXPORT void qtd_QFontComboBox_setFontFilters_FontFilters
(void* __this_nativeId,
 int filters0)
{
    QFlags<QFontComboBox::FontFilter> __qt_filters0 = (QFlags<QFontComboBox::FontFilter>) filters0;
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    __qt_this->setFontFilters((QFontComboBox::FontFilters )__qt_filters0);

}

// QFontComboBox::setWritingSystem(QFontDatabase::WritingSystem arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFontComboBox_setWritingSystem_WritingSystem
(void* __this_nativeId,
 int arg__1)
{
    QFontDatabase::WritingSystem __qt_arg__1 = (QFontDatabase::WritingSystem) arg__1;
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    __qt_this->setWritingSystem((QFontDatabase::WritingSystem )__qt_arg__1);

}

// QFontComboBox::writingSystem() const
QTD_EXTERN QTD_EXPORT int qtd_QFontComboBox_writingSystem_const
(void* __this_nativeId)
{
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->writingSystem();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontComboBox::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QFontComboBox_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFontComboBox::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QFontComboBox_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QFontComboBox_QtDShell *__qt_this = (QFontComboBox_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFontComboBox_staticMetaObject() {
    return (void*)&QFontComboBox::staticMetaObject;
}


