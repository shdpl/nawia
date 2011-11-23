#include <QTextEdit>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
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
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qprinter.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qtextbrowser.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QTextBrowser_shell.h"
#include <iostream>
#include <qtextbrowser.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextBrowserEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextBrowserEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_createEntity(void *nativeId, void* dId)
{
    new QTextBrowserEntity((QObject*)nativeId, dId);
}

QTextBrowser_QtDShell::QTextBrowser_QtDShell(void *d_ptr, QWidget*  parent0)
    : QTextBrowser(parent0),
      QObjectLink(this, d_ptr)
{
}

QTextBrowser_QtDShell::~QTextBrowser_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextBrowser_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextBrowser::metaObject();
}

int QTextBrowser_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextBrowser::qt_metacall(_c, _id, _a);
}

int QTextBrowser_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextBrowser::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextBrowser_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QTextBrowser_backward_dispatch, (void *dId))
QTD_FUNC(GUI, QTextBrowser_backward_dispatch)
void QTextBrowser_QtDShell::backward()
{
    qtd_QTextBrowser_backward_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, bool, QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch, (void *dId, void* source0))
bool  QTextBrowser_QtDShell::canInsertFromMimeData(const QMimeData*  source0) const
{
    return qtd_QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )source0);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::contextMenuEvent(QContextMenuEvent*  e0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )e0);
}

QTD_FUNC_DECL(GUI, void*, QTextEdit_createMimeDataFromSelection_const_dispatch, (void *dId))
QMimeData*  QTextBrowser_QtDShell::createMimeDataFromSelection() const
{
    return (QMimeData*) qtd_QTextEdit_createMimeDataFromSelection_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QTextBrowser_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::dragEnterEvent(QDragEnterEvent*  e0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::dragLeaveEvent(QDragLeaveEvent*  e0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::dragMoveEvent(QDragMoveEvent*  e0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::dropEvent(QDropEvent*  e0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QTextBrowser_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextBrowser_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::focusInEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QTextBrowser_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* ev0))
void QTextBrowser_QtDShell::focusOutEvent(QFocusEvent*  ev0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )ev0);
}

QTD_FUNC_DECL(GUI, void, QTextBrowser_forward_dispatch, (void *dId))
QTD_FUNC(GUI, QTextBrowser_forward_dispatch)
void QTextBrowser_QtDShell::forward()
{
    qtd_QTextBrowser_forward_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QTextBrowser_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QTextBrowser_home_dispatch, (void *dId))
QTD_FUNC(GUI, QTextBrowser_home_dispatch)
void QTextBrowser_QtDShell::home()
{
    qtd_QTextBrowser_home_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int property0))
QVariant  QTextBrowser_QtDShell::inputMethodQuery(Qt::InputMethodQuery  property0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )property0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QTextEdit_insertFromMimeData_QMimeData_dispatch, (void *dId, void* source0))
void QTextBrowser_QtDShell::insertFromMimeData(const QMimeData*  source0)
{
    qtd_QTextEdit_insertFromMimeData_QMimeData_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )source0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* ev0))
void QTextBrowser_QtDShell::keyPressEvent(QKeyEvent*  ev0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )ev0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::keyReleaseEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QTextBrowser_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QTextEdit_loadResource_int_QUrl_dispatch, (void *dId, int type0, void* name1))
QVariant  QTextBrowser_QtDShell::loadResource(int  type0, const QUrl&  name1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QTextEdit_loadResource_int_QUrl_dispatch(QObjectLink::getLink(this)->dId, (int )type0, &(QUrl& )name1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QTextBrowser_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTextBrowser_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::mouseDoubleClickEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* ev0))
void QTextBrowser_QtDShell::mouseMoveEvent(QMouseEvent*  ev0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )ev0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* ev0))
void QTextBrowser_QtDShell::mousePressEvent(QMouseEvent*  ev0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )ev0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* ev0))
void QTextBrowser_QtDShell::mouseReleaseEvent(QMouseEvent*  ev0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )ev0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QTextBrowser_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QTextBrowser_reload_dispatch, (void *dId))
QTD_FUNC(GUI, QTextBrowser_reload_dispatch)
void QTextBrowser_QtDShell::reload()
{
    qtd_QTextBrowser_reload_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QTextBrowser_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QTextBrowser_setSource_QUrl_dispatch, (void *dId, void* name0))
QTD_FUNC(GUI, QTextBrowser_setSource_QUrl_dispatch)
void QTextBrowser_QtDShell::setSource(const QUrl&  name0)
{
    qtd_QTextBrowser_setSource_QUrl_dispatch(QObjectLink::getLink(this)->dId, &(QUrl& )name0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QTextBrowser_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTextBrowser_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QTextBrowser_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::timerEvent(QTimerEvent*  e0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextBrowser_QtDShell::viewportEvent(QEvent*  arg__1)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* e0))
void QTextBrowser_QtDShell::wheelEvent(QWheelEvent*  e0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_initCallBacks(VoidFunc *virts) {
    qtd_QTextBrowser_backward_dispatch = (qtd_QTextBrowser_backward_dispatch_t) virts[0];
    qtd_QTextBrowser_forward_dispatch = (qtd_QTextBrowser_forward_dispatch_t) virts[1];
    qtd_QTextBrowser_home_dispatch = (qtd_QTextBrowser_home_dispatch_t) virts[2];
    qtd_QTextBrowser_reload_dispatch = (qtd_QTextBrowser_reload_dispatch_t) virts[3];
    qtd_QTextBrowser_setSource_QUrl_dispatch = (qtd_QTextBrowser_setSource_QUrl_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QTextBrowser_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QTextBrowser_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QTextBrowser_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QTextBrowser_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QTextBrowser_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QTextBrowser_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTextBrowser_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QTextBrowser_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QTextBrowser_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QTextBrowser_QtDShell::__public_anchorClicked(const QUrl&  arg__1)
{
    QTextBrowser::anchorClicked((const QUrl& )arg__1);
}

void QTextBrowser_QtDShell::__public_backwardAvailable(bool  arg__1)
{
    QTextBrowser::backwardAvailable((bool )arg__1);
}

void QTextBrowser_QtDShell::__public_copyAvailable(bool  b0)
{
    QTextEdit::copyAvailable((bool )b0);
}

void QTextBrowser_QtDShell::__public_currentCharFormatChanged(const QTextCharFormat&  format0)
{
    QTextEdit::currentCharFormatChanged((const QTextCharFormat& )format0);
}

void QTextBrowser_QtDShell::__public_cursorPositionChanged()
{
    QTextEdit::cursorPositionChanged();
}

void QTextBrowser_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QTextBrowser_QtDShell::__public_forwardAvailable(bool  arg__1)
{
    QTextBrowser::forwardAvailable((bool )arg__1);
}

void QTextBrowser_QtDShell::__public_highlighted(const QString&  arg__1)
{
    QTextBrowser::highlighted((const QString& )arg__1);
}

void QTextBrowser_QtDShell::__public_highlighted(const QUrl&  arg__1)
{
    QTextBrowser::highlighted((const QUrl& )arg__1);
}

void QTextBrowser_QtDShell::__public_historyChanged()
{
    QTextBrowser::historyChanged();
}

void QTextBrowser_QtDShell::__public_redoAvailable(bool  b0)
{
    QTextEdit::redoAvailable((bool )b0);
}

void QTextBrowser_QtDShell::__public_selectionChanged()
{
    QTextEdit::selectionChanged();
}

void QTextBrowser_QtDShell::__public_sourceChanged(const QUrl&  arg__1)
{
    QTextBrowser::sourceChanged((const QUrl& )arg__1);
}

void QTextBrowser_QtDShell::__public_textChanged()
{
    QTextEdit::textChanged();
}

void QTextBrowser_QtDShell::__public_undoAvailable(bool  b0)
{
    QTextEdit::undoAvailable((bool )b0);
}

// Write virtual function overries used to decide on static/virtual calls
void QTextBrowser_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QTextBrowser_QtDShell::__override_backward(bool static_call)
{
    if (static_call) {
        QTextBrowser::backward();
    } else {
        backward();
    }
}

bool  QTextBrowser_QtDShell::__override_canInsertFromMimeData(const QMimeData*  source0, bool static_call) const
{
    if (static_call) {
        return QTextEdit::canInsertFromMimeData((const QMimeData* )source0);
    } else {
        return canInsertFromMimeData((const QMimeData* )source0);
    }
}

void QTextBrowser_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextBrowser_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QTextBrowser_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::contextMenuEvent((QContextMenuEvent* )e0);
    } else {
        contextMenuEvent((QContextMenuEvent* )e0);
    }
}

QMimeData*  QTextBrowser_QtDShell::__override_createMimeDataFromSelection(bool static_call) const
{
    if (static_call) {
        return QTextEdit::createMimeDataFromSelection();
    } else {
        return createMimeDataFromSelection();
    }
}

void QTextBrowser_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QTextBrowser_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QTextBrowser_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dragEnterEvent((QDragEnterEvent* )e0);
    } else {
        dragEnterEvent((QDragEnterEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dragLeaveEvent((QDragLeaveEvent* )e0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dragMoveEvent((QDragMoveEvent* )e0);
    } else {
        dragMoveEvent((QDragMoveEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_dropEvent(QDropEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dropEvent((QDropEvent* )e0);
    } else {
        dropEvent((QDropEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QTextBrowser_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QTextBrowser::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QTextBrowser_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTextBrowser_QtDShell::__override_focusInEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::focusInEvent((QFocusEvent* )e0);
    } else {
        focusInEvent((QFocusEvent* )e0);
    }
}

bool  QTextBrowser_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QTextBrowser::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QTextBrowser_QtDShell::__override_focusOutEvent(QFocusEvent*  ev0, bool static_call)
{
    if (static_call) {
        QTextBrowser::focusOutEvent((QFocusEvent* )ev0);
    } else {
        focusOutEvent((QFocusEvent* )ev0);
    }
}

void QTextBrowser_QtDShell::__override_forward(bool static_call)
{
    if (static_call) {
        QTextBrowser::forward();
    } else {
        forward();
    }
}

int  QTextBrowser_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QTextBrowser_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QTextBrowser_QtDShell::__override_home(bool static_call)
{
    if (static_call) {
        QTextBrowser::home();
    } else {
        home();
    }
}

void QTextBrowser_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTextEdit::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QTextBrowser_QtDShell::__override_inputMethodQuery(int  property0, bool static_call) const
{
    if (static_call) {
        return QTextEdit::inputMethodQuery((Qt::InputMethodQuery )property0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )property0);
    }
}

void QTextBrowser_QtDShell::__override_insertFromMimeData(const QMimeData*  source0, bool static_call)
{
    if (static_call) {
        QTextEdit::insertFromMimeData((const QMimeData* )source0);
    } else {
        insertFromMimeData((const QMimeData* )source0);
    }
}

void QTextBrowser_QtDShell::__override_keyPressEvent(QKeyEvent*  ev0, bool static_call)
{
    if (static_call) {
        QTextBrowser::keyPressEvent((QKeyEvent* )ev0);
    } else {
        keyPressEvent((QKeyEvent* )ev0);
    }
}

void QTextBrowser_QtDShell::__override_keyReleaseEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::keyReleaseEvent((QKeyEvent* )e0);
    } else {
        keyReleaseEvent((QKeyEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QTextBrowser_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

QVariant  QTextBrowser_QtDShell::__override_loadResource(int  type0, const QUrl&  name1, bool static_call)
{
    if (static_call) {
        return QTextBrowser::loadResource((int )type0, (const QUrl& )name1);
    } else {
        return loadResource((int )type0, (const QUrl& )name1);
    }
}

int  QTextBrowser_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QTextBrowser_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QTextBrowser_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::mouseDoubleClickEvent((QMouseEvent* )e0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_mouseMoveEvent(QMouseEvent*  ev0, bool static_call)
{
    if (static_call) {
        QTextBrowser::mouseMoveEvent((QMouseEvent* )ev0);
    } else {
        mouseMoveEvent((QMouseEvent* )ev0);
    }
}

void QTextBrowser_QtDShell::__override_mousePressEvent(QMouseEvent*  ev0, bool static_call)
{
    if (static_call) {
        QTextBrowser::mousePressEvent((QMouseEvent* )ev0);
    } else {
        mousePressEvent((QMouseEvent* )ev0);
    }
}

void QTextBrowser_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  ev0, bool static_call)
{
    if (static_call) {
        QTextBrowser::mouseReleaseEvent((QMouseEvent* )ev0);
    } else {
        mouseReleaseEvent((QMouseEvent* )ev0);
    }
}

void QTextBrowser_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QTextBrowser_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QTextBrowser_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextBrowser::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_reload(bool static_call)
{
    if (static_call) {
        QTextBrowser::reload();
    } else {
        reload();
    }
}

void QTextBrowser_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QTextBrowser_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QTextEdit::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QTextBrowser_QtDShell::__override_setSource(const QUrl&  name0, bool static_call)
{
    if (static_call) {
        QTextBrowser::setSource((const QUrl& )name0);
    } else {
        setSource((const QUrl& )name0);
    }
}

void QTextBrowser_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QTextBrowser_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTextEdit::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QTextBrowser_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

void QTextBrowser_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QTextBrowser_QtDShell::__override_timerEvent(QTimerEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::timerEvent((QTimerEvent* )e0);
    } else {
        timerEvent((QTimerEvent* )e0);
    }
}

bool  QTextBrowser_QtDShell::__override_viewportEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QAbstractScrollArea::viewportEvent((QEvent* )arg__1);
    } else {
        return viewportEvent((QEvent* )arg__1);
    }
}

void QTextBrowser_QtDShell::__override_wheelEvent(QWheelEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::wheelEvent((QWheelEvent* )e0);
    } else {
        wheelEvent((QWheelEvent* )e0);
    }
}

// QTextBrowser::anchorClicked(const QUrl & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_anchorClicked_QUrl
(void* __this_nativeId,
 void* arg__1)
{
    const QUrl&  __qt_arg__1 = (const QUrl& ) *(QUrl *)arg__1;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->__public_anchorClicked((const QUrl& )__qt_arg__1);

}

// QTextBrowser::backwardAvailable(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_backwardAvailable_bool
(void* __this_nativeId,
 bool arg__1)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->__public_backwardAvailable((bool )arg__1);

}

// QTextBrowser::forwardAvailable(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_forwardAvailable_bool
(void* __this_nativeId,
 bool arg__1)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->__public_forwardAvailable((bool )arg__1);

}

// QTextBrowser::highlighted(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_highlighted_string
(void* __this_nativeId,
 DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->__public_highlighted((const QString& )__qt_arg__1);

}

// QTextBrowser::highlighted(const QUrl & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_highlighted_QUrl
(void* __this_nativeId,
 void* arg__1)
{
    const QUrl&  __qt_arg__1 = (const QUrl& ) *(QUrl *)arg__1;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->__public_highlighted((const QUrl& )__qt_arg__1);

}

// QTextBrowser::historyChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_historyChanged
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->__public_historyChanged();

}

// QTextBrowser::sourceChanged(const QUrl & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_sourceChanged_QUrl
(void* __this_nativeId,
 void* arg__1)
{
    const QUrl&  __qt_arg__1 = (const QUrl& ) *(QUrl *)arg__1;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->__public_sourceChanged((const QUrl& )__qt_arg__1);

}

// ---externC---
// QTextBrowser::QTextBrowser(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBrowser_QTextBrowser_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QTextBrowser_QtDShell *__qt_this = new QTextBrowser_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QTextBrowser::backwardHistoryCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBrowser_backwardHistoryCount_const
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->backwardHistoryCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::clearHistory()
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_clearHistory
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->clearHistory();

}

// QTextBrowser::forwardHistoryCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTextBrowser_forwardHistoryCount_const
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->forwardHistoryCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::historyTitle(int arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_historyTitle_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int arg__1)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->historyTitle((int )arg__1);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextBrowser::historyUrl(int arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBrowser_historyUrl_int_const
(void* __this_nativeId,
 int arg__1)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->historyUrl((int )arg__1);

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QTextBrowser::isBackwardAvailable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBrowser_isBackwardAvailable_const
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isBackwardAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::isForwardAvailable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBrowser_isForwardAvailable_const
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isForwardAvailable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::openExternalLinks() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBrowser_openExternalLinks_const
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->openExternalLinks();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::openLinks() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextBrowser_openLinks_const
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->openLinks();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::searchPaths() const
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_searchPaths_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->searchPaths();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextBrowser::setOpenExternalLinks(bool open)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_setOpenExternalLinks_bool
(void* __this_nativeId,
 bool open0)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->setOpenExternalLinks((bool )open0);

}

// QTextBrowser::setOpenLinks(bool open)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_setOpenLinks_bool
(void* __this_nativeId,
 bool open0)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->setOpenLinks((bool )open0);

}

// QTextBrowser::setSearchPaths(const QStringList & paths)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_setSearchPaths_QList
(void* __this_nativeId,
 void* paths0)
{
QStringList __qt_paths0 = (*(QStringList *)paths0);
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    __qt_this->setSearchPaths((const QStringList& )__qt_paths0);

}

// QTextBrowser::source() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextBrowser_source_const
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->source();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// QTextBrowser::backward()
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_backward
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_backward(__do_static_call);

}

// QTextBrowser::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QTextBrowser_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QTextBrowser_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextBrowser::focusOutEvent(QFocusEvent * ev)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* ev0)
{
    QFocusEvent*  __qt_ev0 = (QFocusEvent* ) ev0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_ev0, __do_static_call);

}

// QTextBrowser::forward()
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_forward
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_forward(__do_static_call);

}

// QTextBrowser::home()
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_home
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_home(__do_static_call);

}

// QTextBrowser::keyPressEvent(QKeyEvent * ev)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* ev0)
{
    QKeyEvent*  __qt_ev0 = (QKeyEvent* ) ev0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_ev0, __do_static_call);

}

// QTextBrowser::loadResource(int type, const QUrl & name)
QTD_EXTERN QTD_EXPORT void* qtd_QTextBrowser_loadResource_int_QUrl
(void* __this_nativeId,
 int type0,
 void* name1)
{
    const QUrl&  __qt_name1 = (const QUrl& ) *(QUrl *)name1;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_loadResource((int )type0, (const QUrl& )__qt_name1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTextBrowser::mouseMoveEvent(QMouseEvent * ev)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* ev0)
{
    QMouseEvent*  __qt_ev0 = (QMouseEvent* ) ev0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_ev0, __do_static_call);

}

// QTextBrowser::mousePressEvent(QMouseEvent * ev)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* ev0)
{
    QMouseEvent*  __qt_ev0 = (QMouseEvent* ) ev0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_ev0, __do_static_call);

}

// QTextBrowser::mouseReleaseEvent(QMouseEvent * ev)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* ev0)
{
    QMouseEvent*  __qt_ev0 = (QMouseEvent* ) ev0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_ev0, __do_static_call);

}

// QTextBrowser::paintEvent(QPaintEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* e0)
{
    QPaintEvent*  __qt_e0 = (QPaintEvent* ) e0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_e0, __do_static_call);

}

// QTextBrowser::reload()
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_reload
(void* __this_nativeId)
{
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_reload(__do_static_call);

}

// QTextBrowser::setSource(const QUrl & name)
QTD_EXTERN QTD_EXPORT void qtd_QTextBrowser_setSource_QUrl
(void* __this_nativeId,
 void* name0)
{
    const QUrl&  __qt_name0 = (const QUrl& ) *(QUrl *)name0;
    QTextBrowser_QtDShell *__qt_this = (QTextBrowser_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSource((const QUrl& )__qt_name0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextBrowser_staticMetaObject() {
    return (void*)&QTextBrowser::staticMetaObject;
}


