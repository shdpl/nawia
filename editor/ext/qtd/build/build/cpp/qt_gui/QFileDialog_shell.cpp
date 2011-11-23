#include <QUrl>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractproxymodel.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdir.h>
#include <qevent.h>
#include <qfiledialog.h>
#include <qfileiconprovider.h>
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
#include <qstringlist.h>
#include <qstyle.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QFileDialog_shell.h"
#include <iostream>
#include <qfiledialog.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QFileDialogEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFileDialogEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_createEntity(void *nativeId, void* dId)
{
    new QFileDialogEntity((QObject*)nativeId, dId);
}

QFileDialog_QtDShell::QFileDialog_QtDShell(void *d_ptr, QWidget*  parent0, Qt::WindowFlags  f1)
    : QFileDialog(parent0, f1),
      QObjectLink(this, d_ptr)
{
}

QFileDialog_QtDShell::QFileDialog_QtDShell(void *d_ptr, QWidget*  parent0, const QString&  caption1, const QString&  directory2, const QString&  filter3)
    : QFileDialog(parent0, caption1, directory2, filter3),
      QObjectLink(this, d_ptr)
{
}

QFileDialog_QtDShell::~QFileDialog_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFileDialog_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFileDialog::metaObject();
}

int QFileDialog_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFileDialog::qt_metacall(_c, _id, _a);
}

int QFileDialog_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFileDialog::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFileDialog_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QDialog_accept_dispatch, (void *dId))
void QFileDialog_QtDShell::accept()
{
    qtd_QDialog_accept_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QFileDialog_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QFileDialog_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QDialog_done_int_dispatch, (void *dId, int result0))
void QFileDialog_QtDShell::done(int  result0)
{
    qtd_QDialog_done_int_dispatch(QObjectLink::getLink(this)->dId, (int )result0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QFileDialog_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFileDialog_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QFileDialog_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QFileDialog_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int arg__1))
QVariant  QFileDialog_QtDShell::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )arg__1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QFileDialog_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QFileDialog_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFileDialog_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QFileDialog_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QDialog_reject_dispatch, (void *dId))
void QFileDialog_QtDShell::reject()
{
    qtd_QDialog_reject_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QFileDialog_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFileDialog_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QFileDialog_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QFileDialog_QtDShell::__public_adjustPosition(QWidget*  arg__1)
{
    QDialog::adjustPosition((QWidget* )arg__1);
}

void QFileDialog_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QFileDialog_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QFileDialog_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QFileDialog_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QFileDialog_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFileDialog_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QFileDialog_QtDShell::__public_accepted()
{
    QDialog::accepted();
}

void QFileDialog_QtDShell::__public_currentChanged(const QString&  path0)
{
    QFileDialog::currentChanged((const QString& )path0);
}

void QFileDialog_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QFileDialog_QtDShell::__public_directoryEntered(const QString&  directory0)
{
    QFileDialog::directoryEntered((const QString& )directory0);
}

void QFileDialog_QtDShell::__public_fileSelected(const QString&  file0)
{
    QFileDialog::fileSelected((const QString& )file0);
}

void QFileDialog_QtDShell::__public_filesSelected(const QStringList&  files0)
{
    QFileDialog::filesSelected((const QStringList& )files0);
}

void QFileDialog_QtDShell::__public_filterSelected(const QString&  filter0)
{
    QFileDialog::filterSelected((const QString& )filter0);
}

void QFileDialog_QtDShell::__public_finished(int  result0)
{
    QDialog::finished((int )result0);
}

void QFileDialog_QtDShell::__public_rejected()
{
    QDialog::rejected();
}

// Write virtual function overries used to decide on static/virtual calls
void QFileDialog_QtDShell::__override_accept(bool static_call)
{
    if (static_call) {
        QFileDialog::accept();
    } else {
        accept();
    }
}

void QFileDialog_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QFileDialog::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QFileDialog_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QFileDialog_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QFileDialog_QtDShell::__override_done(int  result0, bool static_call)
{
    if (static_call) {
        QFileDialog::done((int )result0);
    } else {
        done((int )result0);
    }
}

void QFileDialog_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QFileDialog_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWidget::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QFileDialog_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QDialog::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QFileDialog_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QFileDialog_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWidget::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QFileDialog_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QFileDialog_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QFileDialog_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QFileDialog_QtDShell::__override_inputMethodQuery(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::inputMethodQuery((Qt::InputMethodQuery )arg__1);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )arg__1);
    }
}

void QFileDialog_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QFileDialog_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QFileDialog_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QFileDialog_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QDialog::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QFileDialog_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QFileDialog_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QFileDialog_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_reject(bool static_call)
{
    if (static_call) {
        QDialog::reject();
    } else {
        reject();
    }
}

void QFileDialog_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QFileDialog::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QFileDialog_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QDialog::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QFileDialog_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QDialog::sizeHint();
    } else {
        return sizeHint();
    }
}

void QFileDialog_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QFileDialog_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QFileDialog::currentChanged(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_currentChanged_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_currentChanged((const QString& )__qt_path0);

}

// QFileDialog::directoryEntered(const QString & directory)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_directoryEntered_string
(void* __this_nativeId,
 DArray directory0)
{
    QString __qt_directory0 = QString::fromUtf8((const char *)directory0.ptr, directory0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_directoryEntered((const QString& )__qt_directory0);

}

// QFileDialog::fileSelected(const QString & file)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_fileSelected_string
(void* __this_nativeId,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_fileSelected((const QString& )__qt_file0);

}

// QFileDialog::filesSelected(const QStringList & files)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_filesSelected_QList
(void* __this_nativeId,
 void* files0)
{
QStringList __qt_files0 = (*(QStringList *)files0);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_filesSelected((const QStringList& )__qt_files0);

}

// QFileDialog::filterSelected(const QString & filter)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_filterSelected_string
(void* __this_nativeId,
 DArray filter0)
{
    QString __qt_filter0 = QString::fromUtf8((const char *)filter0.ptr, filter0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->__public_filterSelected((const QString& )__qt_filter0);

}

// ---externC---
// QFileDialog::QFileDialog(QWidget * parent_, QFlags<Qt::WindowType> f)
QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_QFileDialog_QWidget_WindowFlags
(void *d_ptr,
 void* parent0,
 int f1)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFlags<Qt::WindowType> __qt_f1 = (QFlags<Qt::WindowType>) f1;
    QFileDialog_QtDShell *__qt_this = new QFileDialog_QtDShell(d_ptr, (QWidget* )__qt_parent0, (Qt::WindowFlags )__qt_f1);
    return (void *) __qt_this;

}

// QFileDialog::QFileDialog(QWidget * parent_, const QString & caption, const QString & directory, const QString & filter)
QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_QFileDialog_QWidget_string_string_string
(void *d_ptr,
 void* parent0,
 DArray caption1,
 DArray directory2,
 DArray filter3)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_caption1 = QString::fromUtf8((const char *)caption1.ptr, caption1.length);
    QString __qt_directory2 = QString::fromUtf8((const char *)directory2.ptr, directory2.length);
    QString __qt_filter3 = QString::fromUtf8((const char *)filter3.ptr, filter3.length);
    QFileDialog_QtDShell *__qt_this = new QFileDialog_QtDShell(d_ptr, (QWidget* )__qt_parent0, (const QString& )__qt_caption1, (const QString& )__qt_directory2, (const QString& )__qt_filter3);
    return (void *) __qt_this;

}

// QFileDialog::acceptMode() const
QTD_EXTERN QTD_EXPORT int qtd_QFileDialog_acceptMode_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->acceptMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::confirmOverwrite() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileDialog_confirmOverwrite_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->confirmOverwrite();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::defaultSuffix() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_defaultSuffix_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->defaultSuffix();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileDialog::directory() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_directory_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QDir  __qt_return_value = __qt_this->directory();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QFileDialog::fileMode() const
QTD_EXTERN QTD_EXPORT int qtd_QFileDialog_fileMode_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fileMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::filter() const
QTD_EXTERN QTD_EXPORT int qtd_QFileDialog_filter_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->filter();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::filters() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_filters_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->filters();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileDialog::history() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_history_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->history();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileDialog::iconProvider() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_iconProvider_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QFileIconProvider*  __qt_return_value = __qt_this->iconProvider();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFileDialog::isNameFilterDetailsVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileDialog_isNameFilterDetailsVisible_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNameFilterDetailsVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::isReadOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileDialog_isReadOnly_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::itemDelegate() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_itemDelegate_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QAbstractItemDelegate*  __qt_return_value = __qt_this->itemDelegate();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFileDialog::labelText(QFileDialog::DialogLabel label) const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_labelText_DialogLabel_const
(void* __this_nativeId,
 void* __d_return_value,
 int label0)
{
    QFileDialog::DialogLabel __qt_label0 = (QFileDialog::DialogLabel) label0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->labelText((QFileDialog::DialogLabel )__qt_label0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileDialog::nameFilters() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_nameFilters_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->nameFilters();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileDialog::open(QObject * receiver, const char * member)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_open_QObject_nativepointerchar
(void* __this_nativeId,
 void* receiver0,
 char* member1)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    const char*  __qt_member1 = (const char* ) member1;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->open((QObject* )__qt_receiver0, (const char* )__qt_member1);

}

// QFileDialog::options() const
QTD_EXTERN QTD_EXPORT int qtd_QFileDialog_options_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->options();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::proxyModel() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_proxyModel_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QAbstractProxyModel*  __qt_return_value = __qt_this->proxyModel();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFileDialog::resolveSymlinks() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileDialog_resolveSymlinks_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->resolveSymlinks();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::restoreState(const QByteArray & state)
QTD_EXTERN QTD_EXPORT bool qtd_QFileDialog_restoreState_QByteArray
(void* __this_nativeId,
 void* state0)
{
    const QByteArray&  __qt_state0 = (const QByteArray& ) *(QByteArray *)state0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->restoreState((const QByteArray& )__qt_state0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::saveState() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_saveState_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->saveState();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// QFileDialog::selectFile(const QString & filename)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_selectFile_string
(void* __this_nativeId,
 DArray filename0)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->selectFile((const QString& )__qt_filename0);

}

// QFileDialog::selectFilter(const QString & filter)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_selectFilter_string
(void* __this_nativeId,
 DArray filter0)
{
    QString __qt_filter0 = QString::fromUtf8((const char *)filter0.ptr, filter0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->selectFilter((const QString& )__qt_filter0);

}

// QFileDialog::selectNameFilter(const QString & filter)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_selectNameFilter_string
(void* __this_nativeId,
 DArray filter0)
{
    QString __qt_filter0 = QString::fromUtf8((const char *)filter0.ptr, filter0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->selectNameFilter((const QString& )__qt_filter0);

}

// QFileDialog::selectedFiles() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_selectedFiles_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->selectedFiles();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileDialog::selectedFilter() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_selectedFilter_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->selectedFilter();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileDialog::selectedNameFilter() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_selectedNameFilter_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->selectedNameFilter();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileDialog::setAcceptMode(QFileDialog::AcceptMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setAcceptMode_AcceptMode
(void* __this_nativeId,
 int mode0)
{
    QFileDialog::AcceptMode __qt_mode0 = (QFileDialog::AcceptMode) mode0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setAcceptMode((QFileDialog::AcceptMode )__qt_mode0);

}

// QFileDialog::setConfirmOverwrite(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setConfirmOverwrite_bool
(void* __this_nativeId,
 bool enabled0)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setConfirmOverwrite((bool )enabled0);

}

// QFileDialog::setDefaultSuffix(const QString & suffix)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setDefaultSuffix_string
(void* __this_nativeId,
 DArray suffix0)
{
    QString __qt_suffix0 = QString::fromUtf8((const char *)suffix0.ptr, suffix0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setDefaultSuffix((const QString& )__qt_suffix0);

}

// QFileDialog::setDirectory(const QDir & directory)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setDirectory_QDir
(void* __this_nativeId,
 void* directory0)
{
    const QDir&  __qt_directory0 = (const QDir& ) *(QDir *)directory0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setDirectory((const QDir& )__qt_directory0);

}

// QFileDialog::setDirectory(const QString & directory)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setDirectory_string
(void* __this_nativeId,
 DArray directory0)
{
    QString __qt_directory0 = QString::fromUtf8((const char *)directory0.ptr, directory0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setDirectory((const QString& )__qt_directory0);

}

// QFileDialog::setFileMode(QFileDialog::FileMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setFileMode_FileMode
(void* __this_nativeId,
 int mode0)
{
    QFileDialog::FileMode __qt_mode0 = (QFileDialog::FileMode) mode0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setFileMode((QFileDialog::FileMode )__qt_mode0);

}

// QFileDialog::setFilter(QFlags<QDir::Filter> filters)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setFilter_Filters
(void* __this_nativeId,
 int filters0)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setFilter((QDir::Filters )__qt_filters0);

}

// QFileDialog::setFilter(const QString & filter)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setFilter_string
(void* __this_nativeId,
 DArray filter0)
{
    QString __qt_filter0 = QString::fromUtf8((const char *)filter0.ptr, filter0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setFilter((const QString& )__qt_filter0);

}

// QFileDialog::setFilters(const QStringList & filters)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setFilters_QList
(void* __this_nativeId,
 void* filters0)
{
QStringList __qt_filters0 = (*(QStringList *)filters0);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setFilters((const QStringList& )__qt_filters0);

}

// QFileDialog::setHistory(const QStringList & paths)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setHistory_QList
(void* __this_nativeId,
 void* paths0)
{
QStringList __qt_paths0 = (*(QStringList *)paths0);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setHistory((const QStringList& )__qt_paths0);

}

// QFileDialog::setIconProvider(QFileIconProvider * provider)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setIconProvider_QFileIconProvider
(void* __this_nativeId,
 void* provider0)
{
    QFileIconProvider*  __qt_provider0 = (QFileIconProvider* ) provider0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setIconProvider((QFileIconProvider* )__qt_provider0);

}

// QFileDialog::setItemDelegate(QAbstractItemDelegate * delegate_)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setItemDelegate_QAbstractItemDelegate
(void* __this_nativeId,
 void* delegate0)
{
    QAbstractItemDelegate*  __qt_delegate0 = (QAbstractItemDelegate* ) delegate0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setItemDelegate((QAbstractItemDelegate* )__qt_delegate0);

}

// QFileDialog::setLabelText(QFileDialog::DialogLabel label, const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setLabelText_DialogLabel_string
(void* __this_nativeId,
 int label0,
 DArray text1)
{
    QFileDialog::DialogLabel __qt_label0 = (QFileDialog::DialogLabel) label0;
    QString __qt_text1 = QString::fromUtf8((const char *)text1.ptr, text1.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setLabelText((QFileDialog::DialogLabel )__qt_label0, (const QString& )__qt_text1);

}

// QFileDialog::setNameFilter(const QString & filter)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setNameFilter_string
(void* __this_nativeId,
 DArray filter0)
{
    QString __qt_filter0 = QString::fromUtf8((const char *)filter0.ptr, filter0.length);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setNameFilter((const QString& )__qt_filter0);

}

// QFileDialog::setNameFilterDetailsVisible(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setNameFilterDetailsVisible_bool
(void* __this_nativeId,
 bool enabled0)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setNameFilterDetailsVisible((bool )enabled0);

}

// QFileDialog::setNameFilters(const QStringList & filters)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setNameFilters_QList
(void* __this_nativeId,
 void* filters0)
{
QStringList __qt_filters0 = (*(QStringList *)filters0);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setNameFilters((const QStringList& )__qt_filters0);

}

// QFileDialog::setOption(QFileDialog::Option option, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setOption_Option_bool
(void* __this_nativeId,
 int option0,
 bool on1)
{
    QFileDialog::Option __qt_option0 = (QFileDialog::Option) option0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setOption((QFileDialog::Option )__qt_option0, (bool )on1);

}

// QFileDialog::setOptions(QFlags<QFileDialog::Option> options)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setOptions_Options
(void* __this_nativeId,
 int options0)
{
    QFlags<QFileDialog::Option> __qt_options0 = (QFlags<QFileDialog::Option>) options0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setOptions((QFileDialog::Options )__qt_options0);

}

// QFileDialog::setProxyModel(QAbstractProxyModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setProxyModel_QAbstractProxyModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractProxyModel*  __qt_model0 = (QAbstractProxyModel* ) model0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setProxyModel((QAbstractProxyModel* )__qt_model0);

}

// QFileDialog::setReadOnly(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setReadOnly_bool
(void* __this_nativeId,
 bool enabled0)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setReadOnly((bool )enabled0);

}

// QFileDialog::setResolveSymlinks(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setResolveSymlinks_bool
(void* __this_nativeId,
 bool enabled0)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setResolveSymlinks((bool )enabled0);

}

// QFileDialog::setSidebarUrls(const QList<QUrl > & urls)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setSidebarUrls_QList
(void* __this_nativeId,
 void* urls0)
{
QList<QUrl > __qt_urls0 = (*(QList<QUrl > *)urls0);
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setSidebarUrls((const QList<QUrl >& )__qt_urls0);

}

// QFileDialog::setViewMode(QFileDialog::ViewMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setViewMode_ViewMode
(void* __this_nativeId,
 int mode0)
{
    QFileDialog::ViewMode __qt_mode0 = (QFileDialog::ViewMode) mode0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    __qt_this->setViewMode((QFileDialog::ViewMode )__qt_mode0);

}

// QFileDialog::sidebarUrls() const
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_sidebarUrls_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    QList<QUrl >  __qt_return_value = __qt_this->sidebarUrls();

QList<QUrl > &__d_return_value_tmp = (*(QList<QUrl > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileDialog::testOption(QFileDialog::Option option) const
QTD_EXTERN QTD_EXPORT bool qtd_QFileDialog_testOption_Option_const
(void* __this_nativeId,
 int option0)
{
    QFileDialog::Option __qt_option0 = (QFileDialog::Option) option0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testOption((QFileDialog::Option )__qt_option0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::viewMode() const
QTD_EXTERN QTD_EXPORT int qtd_QFileDialog_viewMode_const
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->viewMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileDialog::accept()
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_accept
(void* __this_nativeId)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_accept(__do_static_call);

}

// QFileDialog::changeEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_changeEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_e0, __do_static_call);

}

// QFileDialog::done(int result)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_done_int
(void* __this_nativeId,
 int result0)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_done((int )result0, __do_static_call);

}

// QFileDialog::setVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_setVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QFileDialog_QtDShell *__qt_this = (QFileDialog_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setVisible((bool )visible0, __do_static_call);

}

// QFileDialog::getExistingDirectory(QWidget * parent_, const QString & caption, const QString & dir, QFlags<QFileDialog::Option> options)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_getExistingDirectory_QWidget_string_string_Options
(void* __d_return_value,
 void* parent0,
 DArray caption1,
 DArray dir2,
 int options3)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_caption1 = QString::fromUtf8((const char *)caption1.ptr, caption1.length);
    QString __qt_dir2 = QString::fromUtf8((const char *)dir2.ptr, dir2.length);
    QFlags<QFileDialog::Option> __qt_options3 = (QFlags<QFileDialog::Option>) options3;
    QString  __qt_return_value = QFileDialog_QtDShell::getExistingDirectory((QWidget* )__qt_parent0, (const QString& )__qt_caption1, (const QString& )__qt_dir2, (QFileDialog::Options )__qt_options3);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileDialog::getOpenFileName(QWidget * parent_, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_getOpenFileName_QWidget_string_string_string_nativepointerstring_Options
(void* __d_return_value,
 void* parent0,
 DArray caption1,
 DArray dir2,
 DArray filter3,
 DArray selectedFilter4,
 int options5)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_caption1 = QString::fromUtf8((const char *)caption1.ptr, caption1.length);
    QString __qt_dir2 = QString::fromUtf8((const char *)dir2.ptr, dir2.length);
    QString __qt_filter3 = QString::fromUtf8((const char *)filter3.ptr, filter3.length);
    QString __qt_selectedFilter4 = QString::fromUtf8((const char *)selectedFilter4.ptr, selectedFilter4.length);
    QFlags<QFileDialog::Option> __qt_options5 = (QFlags<QFileDialog::Option>) options5;
    QString  __qt_return_value = QFileDialog_QtDShell::getOpenFileName((QWidget* )__qt_parent0, (const QString& )__qt_caption1, (const QString& )__qt_dir2, (const QString& )__qt_filter3, (QString* )&__qt_selectedFilter4, (QFileDialog::Options )__qt_options5);

    qtd_toUtf8(__qt_selectedFilter4.utf16(), __qt_selectedFilter4.size(), &selectedFilter4);
    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileDialog::getOpenFileNames(QWidget * parent_, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_getOpenFileNames_QWidget_string_string_string_nativepointerstring_Options
(void* __d_return_value,
 void* parent0,
 DArray caption1,
 DArray dir2,
 DArray filter3,
 DArray selectedFilter4,
 int options5)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_caption1 = QString::fromUtf8((const char *)caption1.ptr, caption1.length);
    QString __qt_dir2 = QString::fromUtf8((const char *)dir2.ptr, dir2.length);
    QString __qt_filter3 = QString::fromUtf8((const char *)filter3.ptr, filter3.length);
    QString __qt_selectedFilter4 = QString::fromUtf8((const char *)selectedFilter4.ptr, selectedFilter4.length);
    QFlags<QFileDialog::Option> __qt_options5 = (QFlags<QFileDialog::Option>) options5;
    QStringList  __qt_return_value = QFileDialog_QtDShell::getOpenFileNames((QWidget* )__qt_parent0, (const QString& )__qt_caption1, (const QString& )__qt_dir2, (const QString& )__qt_filter3, (QString* )&__qt_selectedFilter4, (QFileDialog::Options )__qt_options5);

    qtd_toUtf8(__qt_selectedFilter4.utf16(), __qt_selectedFilter4.size(), &selectedFilter4);
QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileDialog::getSaveFileName(QWidget * parent_, const QString & caption, const QString & dir, const QString & filter, QString * selectedFilter, QFlags<QFileDialog::Option> options)
QTD_EXTERN QTD_EXPORT void qtd_QFileDialog_getSaveFileName_QWidget_string_string_string_nativepointerstring_Options
(void* __d_return_value,
 void* parent0,
 DArray caption1,
 DArray dir2,
 DArray filter3,
 DArray selectedFilter4,
 int options5)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QString __qt_caption1 = QString::fromUtf8((const char *)caption1.ptr, caption1.length);
    QString __qt_dir2 = QString::fromUtf8((const char *)dir2.ptr, dir2.length);
    QString __qt_filter3 = QString::fromUtf8((const char *)filter3.ptr, filter3.length);
    QString __qt_selectedFilter4 = QString::fromUtf8((const char *)selectedFilter4.ptr, selectedFilter4.length);
    QFlags<QFileDialog::Option> __qt_options5 = (QFlags<QFileDialog::Option>) options5;
    QString  __qt_return_value = QFileDialog_QtDShell::getSaveFileName((QWidget* )__qt_parent0, (const QString& )__qt_caption1, (const QString& )__qt_dir2, (const QString& )__qt_filter3, (QString* )&__qt_selectedFilter4, (QFileDialog::Options )__qt_options5);

    qtd_toUtf8(__qt_selectedFilter4.utf16(), __qt_selectedFilter4.size(), &selectedFilter4);
    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFileDialog_staticMetaObject() {
    return (void*)&QFileDialog::staticMetaObject;
}


