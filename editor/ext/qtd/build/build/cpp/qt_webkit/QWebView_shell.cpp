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
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qprinter.h>
#include <qregion.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwebhistory.h>
#include <qwebpage.h>
#include <qwebsettings.h>
#include <qwebview.h>
#include <qwidget.h>

#include <QPainter>

#include "QWebView_shell.h"
#include <iostream>
#include <qwebview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_webkit.h"

class QWebViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QWebViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QWebView_createEntity(void *nativeId, void* dId)
{
    new QWebViewEntity((QObject*)nativeId, dId);
}

QWebView_QtDShell::QWebView_QtDShell(void *d_ptr, QWidget*  parent0)
    : QWebView(parent0),
      QObjectLink(this, d_ptr)
{
}

QWebView_QtDShell::~QWebView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(WEBKIT, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(WEBKIT, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QWebView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QWebView::metaObject();
}

int QWebView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QWebView::qt_metacall(_c, _id, _a);
}

int QWebView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QWebView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QWebView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(WEBKIT, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void*, QWebView_createWindow_WebWindowType_dispatch, (void *dId, int type0))
QTD_FUNC(WEBKIT, QWebView_createWindow_WebWindowType_dispatch)
QWebView*  QWebView_QtDShell::createWindow(QWebPage::WebWindowType  type0)
{
    return (QWebView*) qtd_QWebView_createWindow_WebWindowType_dispatch(QObjectLink::getLink(this)->dId, (QWebPage::WebWindowType )type0);
}

QTD_FUNC_DECL(WEBKIT, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QWebView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::dragEnterEvent(QDragEnterEvent*  arg__1)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::dragMoveEvent(QDragMoveEvent*  arg__1)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::dropEvent(QDropEvent*  arg__1)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QWebView_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QWebView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::focusInEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QWebView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::focusOutEvent(QFocusEvent*  arg__1)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QWebView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int property0))
QVariant  QWebView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  property0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )property0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::keyPressEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_languageChange_dispatch, (void *dId))
void QWebView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QWebView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWebView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::mouseMoveEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::mousePressEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::mouseReleaseEvent(QMouseEvent*  arg__1)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QWebView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::resizeEvent(QResizeEvent*  arg__1)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QWebView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWebView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(WEBKIT, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QWebView_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QWebView_initCallBacks(VoidFunc *virts) {
    qtd_QWebView_createWindow_WebWindowType_dispatch = (qtd_QWebView_createWindow_WebWindowType_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QWebView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

bool  QWebView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QWebView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QWebView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QWebView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QWebView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QWebView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QWebView_QtDShell::__public_iconChanged()
{
    QWebView::iconChanged();
}

void QWebView_QtDShell::__public_linkClicked(const QUrl&  arg__1)
{
    QWebView::linkClicked((const QUrl& )arg__1);
}

void QWebView_QtDShell::__public_loadFinished(bool  arg__1)
{
    QWebView::loadFinished((bool )arg__1);
}

void QWebView_QtDShell::__public_loadProgress(int  progress0)
{
    QWebView::loadProgress((int )progress0);
}

void QWebView_QtDShell::__public_loadStarted()
{
    QWebView::loadStarted();
}

void QWebView_QtDShell::__public_selectionChanged()
{
    QWebView::selectionChanged();
}

void QWebView_QtDShell::__public_statusBarMessage(const QString&  text0)
{
    QWebView::statusBarMessage((const QString& )text0);
}

void QWebView_QtDShell::__public_titleChanged(const QString&  title0)
{
    QWebView::titleChanged((const QString& )title0);
}

void QWebView_QtDShell::__public_urlChanged(const QUrl&  arg__1)
{
    QWebView::urlChanged((const QUrl& )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QWebView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

QWebView*  QWebView_QtDShell::__override_createWindow(int  type0, bool static_call)
{
    if (static_call) {
        return QWebView::createWindow((QWebPage::WebWindowType )type0);
    } else {
        return createWindow((QWebPage::WebWindowType )type0);
    }
}

void QWebView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QWebView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QWebView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::dragEnterEvent((QDragEnterEvent* )arg__1);
    } else {
        dragEnterEvent((QDragEnterEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::dragLeaveEvent((QDragLeaveEvent* )arg__1);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::dragMoveEvent((QDragMoveEvent* )arg__1);
    } else {
        dragMoveEvent((QDragMoveEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_dropEvent(QDropEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::dropEvent((QDropEvent* )arg__1);
    } else {
        dropEvent((QDropEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QWebView_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QWebView::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QWebView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QWebView_QtDShell::__override_focusInEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::focusInEvent((QFocusEvent* )arg__1);
    } else {
        focusInEvent((QFocusEvent* )arg__1);
    }
}

bool  QWebView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QWebView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QWebView_QtDShell::__override_focusOutEvent(QFocusEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::focusOutEvent((QFocusEvent* )arg__1);
    } else {
        focusOutEvent((QFocusEvent* )arg__1);
    }
}

int  QWebView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QWebView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QWebView_QtDShell::__override_inputMethodQuery(int  property0, bool static_call) const
{
    if (static_call) {
        return QWebView::inputMethodQuery((Qt::InputMethodQuery )property0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )property0);
    }
}

void QWebView_QtDShell::__override_keyPressEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::keyPressEvent((QKeyEvent* )arg__1);
    } else {
        keyPressEvent((QKeyEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QWebView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QWebView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QWebView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QWidget::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QWebView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::mouseDoubleClickEvent((QMouseEvent* )arg__1);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::mouseMoveEvent((QMouseEvent* )arg__1);
    } else {
        mouseMoveEvent((QMouseEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_mousePressEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::mousePressEvent((QMouseEvent* )arg__1);
    } else {
        mousePressEvent((QMouseEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::mouseReleaseEvent((QMouseEvent* )arg__1);
    } else {
        mouseReleaseEvent((QMouseEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QWebView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QWebView_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_resizeEvent(QResizeEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::resizeEvent((QResizeEvent* )arg__1);
    } else {
        resizeEvent((QResizeEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QWebView_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QWebView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWebView::sizeHint();
    } else {
        return sizeHint();
    }
}

void QWebView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QWebView_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWebView::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QWebView::iconChanged()
QTD_EXTERN QTD_EXPORT void qtd_QWebView_iconChanged
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_iconChanged();

}

// QWebView::linkClicked(const QUrl & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_linkClicked_QUrl
(void* __this_nativeId,
 void* arg__1)
{
    const QUrl&  __qt_arg__1 = (const QUrl& ) *(QUrl *)arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_linkClicked((const QUrl& )__qt_arg__1);

}

// QWebView::loadFinished(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_loadFinished_bool
(void* __this_nativeId,
 bool arg__1)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_loadFinished((bool )arg__1);

}

// QWebView::loadProgress(int progress)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_loadProgress_int
(void* __this_nativeId,
 int progress0)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_loadProgress((int )progress0);

}

// QWebView::loadStarted()
QTD_EXTERN QTD_EXPORT void qtd_QWebView_loadStarted
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_loadStarted();

}

// QWebView::selectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QWebView_selectionChanged
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged();

}

// QWebView::statusBarMessage(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_statusBarMessage_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_statusBarMessage((const QString& )__qt_text0);

}

// QWebView::titleChanged(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_titleChanged_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_titleChanged((const QString& )__qt_title0);

}

// QWebView::urlChanged(const QUrl & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_urlChanged_QUrl
(void* __this_nativeId,
 void* arg__1)
{
    const QUrl&  __qt_arg__1 = (const QUrl& ) *(QUrl *)arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->__public_urlChanged((const QUrl& )__qt_arg__1);

}

// ---externC---
// QWebView::QWebView(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_QWebView_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QWebView_QtDShell *__qt_this = new QWebView_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QWebView::back()
QTD_EXTERN QTD_EXPORT void qtd_QWebView_back
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->back();

}

// QWebView::findText(const QString & subString, QFlags<QWebPage::FindFlag> options)
QTD_EXTERN QTD_EXPORT bool qtd_QWebView_findText_string_FindFlags
(void* __this_nativeId,
 DArray subString0,
 int options1)
{
    QString __qt_subString0 = QString::fromUtf8((const char *)subString0.ptr, subString0.length);
    QFlags<QWebPage::FindFlag> __qt_options1 = (QFlags<QWebPage::FindFlag>) options1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->findText((const QString& )__qt_subString0, (QWebPage::FindFlags )__qt_options1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebView::forward()
QTD_EXTERN QTD_EXPORT void qtd_QWebView_forward
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->forward();

}

// QWebView::history() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_history_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QWebHistory*  __qt_return_value = __qt_this->history();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebView::icon() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_icon_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->icon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QWebView::isModified() const
QTD_EXTERN QTD_EXPORT bool qtd_QWebView_isModified_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isModified();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebView::load(const QNetworkRequest & request, QNetworkAccessManager::Operation operation, const QByteArray & body_)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_load_QNetworkRequest_Operation_QByteArray
(void* __this_nativeId,
 void* request0,
 int operation1,
 void* body2)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QNetworkAccessManager::Operation __qt_operation1 = (QNetworkAccessManager::Operation) operation1;
    const QByteArray&  __qt_body2 = (const QByteArray& ) *(QByteArray *)body2;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->load((const QNetworkRequest& )__qt_request0, (QNetworkAccessManager::Operation )__qt_operation1, (const QByteArray& )__qt_body2);

}

// QWebView::load(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_load_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->load((const QUrl& )__qt_url0);

}

// QWebView::page() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_page_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QWebPage*  __qt_return_value = __qt_this->page();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebView::pageAction(QWebPage::WebAction action) const
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_pageAction_WebAction_const
(void* __this_nativeId,
 int action0)
{
    QWebPage::WebAction __qt_action0 = (QWebPage::WebAction) action0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->pageAction((QWebPage::WebAction )__qt_action0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebView::print(QPrinter * arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QWebView_print_QPrinter_const
(void* __this_nativeId,
 void* arg__1)
{
    QPrinter*  __qt_arg__1 = (QPrinter* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->print((QPrinter* )__qt_arg__1);

}

// QWebView::reload()
QTD_EXTERN QTD_EXPORT void qtd_QWebView_reload
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->reload();

}

// QWebView::renderHints() const
QTD_EXTERN QTD_EXPORT int qtd_QWebView_renderHints_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->renderHints();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebView::selectedText() const
QTD_EXTERN QTD_EXPORT void qtd_QWebView_selectedText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->selectedText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebView::setContent(const QByteArray & data, const QString & mimeType, const QUrl & baseUrl)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setContent_QByteArray_string_QUrl
(void* __this_nativeId,
 void* data0,
 DArray mimeType1,
 void* baseUrl2)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    QString __qt_mimeType1 = QString::fromUtf8((const char *)mimeType1.ptr, mimeType1.length);
    const QUrl&  __qt_baseUrl2 = (const QUrl& ) *(QUrl *)baseUrl2;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setContent((const QByteArray& )__qt_data0, (const QString& )__qt_mimeType1, (const QUrl& )__qt_baseUrl2);

}

// QWebView::setHtml(const QString & html, const QUrl & baseUrl)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setHtml_string_QUrl
(void* __this_nativeId,
 DArray html0,
 void* baseUrl1)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    const QUrl&  __qt_baseUrl1 = (const QUrl& ) *(QUrl *)baseUrl1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setHtml((const QString& )__qt_html0, (const QUrl& )__qt_baseUrl1);

}

// QWebView::setPage(QWebPage * page)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setPage_QWebPage
(void* __this_nativeId,
 void* page0)
{
    QWebPage*  __qt_page0 = (QWebPage* ) page0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setPage((QWebPage* )__qt_page0);

}

// QWebView::setRenderHint(QPainter::RenderHint hint, bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setRenderHint_RenderHint_bool
(void* __this_nativeId,
 int hint0,
 bool enabled1)
{
    QPainter::RenderHint __qt_hint0 = (QPainter::RenderHint) hint0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setRenderHint((QPainter::RenderHint )__qt_hint0, (bool )enabled1);

}

// QWebView::setRenderHints(QFlags<QPainter::RenderHint> hints)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setRenderHints_RenderHints
(void* __this_nativeId,
 int hints0)
{
    QFlags<QPainter::RenderHint> __qt_hints0 = (QFlags<QPainter::RenderHint>) hints0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setRenderHints((QPainter::RenderHints )__qt_hints0);

}

// QWebView::setTextSizeMultiplier(double factor)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setTextSizeMultiplier_double
(void* __this_nativeId,
 double factor0)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setTextSizeMultiplier((double )factor0);

}

// QWebView::setUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setUrl_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setUrl((const QUrl& )__qt_url0);

}

// QWebView::setZoomFactor(double factor)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_setZoomFactor_double
(void* __this_nativeId,
 double factor0)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->setZoomFactor((double )factor0);

}

// QWebView::settings() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_settings_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QWebSettings*  __qt_return_value = __qt_this->settings();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebView::stop()
QTD_EXTERN QTD_EXPORT void qtd_QWebView_stop
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->stop();

}

// QWebView::textSizeMultiplier() const
QTD_EXTERN QTD_EXPORT double qtd_QWebView_textSizeMultiplier_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->textSizeMultiplier();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebView::title() const
QTD_EXTERN QTD_EXPORT void qtd_QWebView_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QWebView::triggerPageAction(QWebPage::WebAction action, bool checked)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_triggerPageAction_WebAction_bool
(void* __this_nativeId,
 int action0,
 bool checked1)
{
    QWebPage::WebAction __qt_action0 = (QWebPage::WebAction) action0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    __qt_this->triggerPageAction((QWebPage::WebAction )__qt_action0, (bool )checked1);

}

// QWebView::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_url_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QWebView::zoomFactor() const
QTD_EXTERN QTD_EXPORT double qtd_QWebView_zoomFactor_const
(void* __this_nativeId)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->zoomFactor();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebView::changeEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_changeEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::contextMenuEvent(QContextMenuEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* arg__1)
{
    QContextMenuEvent*  __qt_arg__1 = (QContextMenuEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::createWindow(QWebPage::WebWindowType type)
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_createWindow_WebWindowType
(void* __this_nativeId,
 int type0)
{
    QWebPage::WebWindowType __qt_type0 = (QWebPage::WebWindowType) type0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWebView*  __qt_return_value = __qt_this->__override_createWindow((QWebPage::WebWindowType )__qt_type0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWebView::dragEnterEvent(QDragEnterEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragEnterEvent*  __qt_arg__1 = (QDragEnterEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::dragLeaveEvent(QDragLeaveEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragLeaveEvent*  __qt_arg__1 = (QDragLeaveEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::dragMoveEvent(QDragMoveEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDragMoveEvent*  __qt_arg__1 = (QDragMoveEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::dropEvent(QDropEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_dropEvent_QDropEvent
(void* __this_nativeId,
 void* arg__1)
{
    QDropEvent*  __qt_arg__1 = (QDropEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QWebView_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebView::focusInEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QWebView_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWebView::focusOutEvent(QFocusEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* arg__1)
{
    QFocusEvent*  __qt_arg__1 = (QFocusEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::inputMethodEvent(QInputMethodEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* arg__1)
{
    QInputMethodEvent*  __qt_arg__1 = (QInputMethodEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::inputMethodQuery(Qt::InputMethodQuery property) const
QTD_EXTERN QTD_EXPORT void* qtd_QWebView_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int property0)
{
    Qt::InputMethodQuery __qt_property0 = (Qt::InputMethodQuery) property0;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_property0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QWebView::keyPressEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::keyReleaseEvent(QKeyEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* arg__1)
{
    QKeyEvent*  __qt_arg__1 = (QKeyEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::mouseDoubleClickEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::mouseMoveEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::mousePressEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::mouseReleaseEvent(QMouseEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* arg__1)
{
    QMouseEvent*  __qt_arg__1 = (QMouseEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::paintEvent(QPaintEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* arg__1)
{
    QPaintEvent*  __qt_arg__1 = (QPaintEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::resizeEvent(QResizeEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* arg__1)
{
    QResizeEvent*  __qt_arg__1 = (QResizeEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_arg__1, __do_static_call);

}

// QWebView::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QWebView_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWebView::wheelEvent(QWheelEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWebView_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* arg__1)
{
    QWheelEvent*  __qt_arg__1 = (QWheelEvent* ) arg__1;
    QWebView_QtDShell *__qt_this = (QWebView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_arg__1, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QWebView_staticMetaObject() {
    return (void*)&QWebView::staticMetaObject;
}


