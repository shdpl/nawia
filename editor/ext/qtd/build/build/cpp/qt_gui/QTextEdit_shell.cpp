#include <QTextCursor>
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
#include <qstyle.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QTextEdit_shell.h"
#include <iostream>
#include <qtextedit.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTextEditEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTextEditEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_createEntity(void *nativeId, void* dId)
{
    new QTextEditEntity((QObject*)nativeId, dId);
}

QTextEdit_QtDShell::QTextEdit_QtDShell(void *d_ptr, QWidget*  parent0)
    : QTextEdit(parent0),
      QObjectLink(this, d_ptr)
{
}

QTextEdit_QtDShell::QTextEdit_QtDShell(void *d_ptr, const QString&  text0, QWidget*  parent1)
    : QTextEdit(text0, parent1),
      QObjectLink(this, d_ptr)
{
}

QTextEdit_QtDShell::~QTextEdit_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTextEdit_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTextEdit::metaObject();
}

int QTextEdit_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTextEdit::qt_metacall(_c, _id, _a);
}

int QTextEdit_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTextEdit::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch, (void *dId, void* source0))
QTD_FUNC(GUI, QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch)
bool  QTextEdit_QtDShell::canInsertFromMimeData(const QMimeData*  source0) const
{
    return qtd_QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )source0);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::contextMenuEvent(QContextMenuEvent*  e0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )e0);
}

QTD_FUNC_DECL(GUI, void*, QTextEdit_createMimeDataFromSelection_const_dispatch, (void *dId))
QTD_FUNC(GUI, QTextEdit_createMimeDataFromSelection_const_dispatch)
QMimeData*  QTextEdit_QtDShell::createMimeDataFromSelection() const
{
    return (QMimeData*) qtd_QTextEdit_createMimeDataFromSelection_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QTextEdit_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::dragEnterEvent(QDragEnterEvent*  e0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::dragLeaveEvent(QDragLeaveEvent*  e0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::dragMoveEvent(QDragMoveEvent*  e0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::dropEvent(QDropEvent*  e0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QTextEdit_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTextEdit_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::focusInEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QTextEdit_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::focusOutEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QTextEdit_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int property0))
QVariant  QTextEdit_QtDShell::inputMethodQuery(Qt::InputMethodQuery  property0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )property0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QTextEdit_insertFromMimeData_QMimeData_dispatch, (void *dId, void* source0))
QTD_FUNC(GUI, QTextEdit_insertFromMimeData_QMimeData_dispatch)
void QTextEdit_QtDShell::insertFromMimeData(const QMimeData*  source0)
{
    qtd_QTextEdit_insertFromMimeData_QMimeData_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )source0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::keyPressEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::keyReleaseEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QTextEdit_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QTextEdit_loadResource_int_QUrl_dispatch, (void *dId, int type0, void* name1))
QTD_FUNC(GUI, QTextEdit_loadResource_int_QUrl_dispatch)
QVariant  QTextEdit_QtDShell::loadResource(int  type0, const QUrl&  name1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QTextEdit_loadResource_int_QUrl_dispatch(QObjectLink::getLink(this)->dId, (int )type0, &(QUrl& )name1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QTextEdit_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTextEdit_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::mouseDoubleClickEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::mousePressEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QTextEdit_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QTextEdit_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QTextEdit_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTextEdit_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QTextEdit_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::timerEvent(QTimerEvent*  e0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTextEdit_QtDShell::viewportEvent(QEvent*  arg__1)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* e0))
void QTextEdit_QtDShell::wheelEvent(QWheelEvent*  e0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_initCallBacks(VoidFunc *virts) {
    qtd_QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch = (qtd_QTextEdit_canInsertFromMimeData_QMimeData_const_dispatch_t) virts[0];
    qtd_QTextEdit_createMimeDataFromSelection_const_dispatch = (qtd_QTextEdit_createMimeDataFromSelection_const_dispatch_t) virts[1];
    qtd_QTextEdit_insertFromMimeData_QMimeData_dispatch = (qtd_QTextEdit_insertFromMimeData_QMimeData_dispatch_t) virts[2];
    qtd_QTextEdit_loadResource_int_QUrl_dispatch = (qtd_QTextEdit_loadResource_int_QUrl_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QTextEdit_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QTextEdit_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

bool  QTextEdit_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QTextEdit_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QTextEdit_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QTextEdit_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTextEdit_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QTextEdit_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QTextEdit_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QTextEdit_QtDShell::__public_copyAvailable(bool  b0)
{
    QTextEdit::copyAvailable((bool )b0);
}

void QTextEdit_QtDShell::__public_currentCharFormatChanged(const QTextCharFormat&  format0)
{
    QTextEdit::currentCharFormatChanged((const QTextCharFormat& )format0);
}

void QTextEdit_QtDShell::__public_cursorPositionChanged()
{
    QTextEdit::cursorPositionChanged();
}

void QTextEdit_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QTextEdit_QtDShell::__public_redoAvailable(bool  b0)
{
    QTextEdit::redoAvailable((bool )b0);
}

void QTextEdit_QtDShell::__public_selectionChanged()
{
    QTextEdit::selectionChanged();
}

void QTextEdit_QtDShell::__public_textChanged()
{
    QTextEdit::textChanged();
}

void QTextEdit_QtDShell::__public_undoAvailable(bool  b0)
{
    QTextEdit::undoAvailable((bool )b0);
}

// Write virtual function overries used to decide on static/virtual calls
void QTextEdit_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

bool  QTextEdit_QtDShell::__override_canInsertFromMimeData(const QMimeData*  source0, bool static_call) const
{
    if (static_call) {
        return QTextEdit::canInsertFromMimeData((const QMimeData* )source0);
    } else {
        return canInsertFromMimeData((const QMimeData* )source0);
    }
}

void QTextEdit_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTextEdit_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QTextEdit_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::contextMenuEvent((QContextMenuEvent* )e0);
    } else {
        contextMenuEvent((QContextMenuEvent* )e0);
    }
}

QMimeData*  QTextEdit_QtDShell::__override_createMimeDataFromSelection(bool static_call) const
{
    if (static_call) {
        return QTextEdit::createMimeDataFromSelection();
    } else {
        return createMimeDataFromSelection();
    }
}

void QTextEdit_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QTextEdit_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QTextEdit_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dragEnterEvent((QDragEnterEvent* )e0);
    } else {
        dragEnterEvent((QDragEnterEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dragLeaveEvent((QDragLeaveEvent* )e0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dragMoveEvent((QDragMoveEvent* )e0);
    } else {
        dragMoveEvent((QDragMoveEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_dropEvent(QDropEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::dropEvent((QDropEvent* )e0);
    } else {
        dropEvent((QDropEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QTextEdit_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QTextEdit::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QTextEdit_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTextEdit_QtDShell::__override_focusInEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::focusInEvent((QFocusEvent* )e0);
    } else {
        focusInEvent((QFocusEvent* )e0);
    }
}

bool  QTextEdit_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QTextEdit::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QTextEdit_QtDShell::__override_focusOutEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::focusOutEvent((QFocusEvent* )e0);
    } else {
        focusOutEvent((QFocusEvent* )e0);
    }
}

int  QTextEdit_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QTextEdit_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QTextEdit_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTextEdit::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QTextEdit_QtDShell::__override_inputMethodQuery(int  property0, bool static_call) const
{
    if (static_call) {
        return QTextEdit::inputMethodQuery((Qt::InputMethodQuery )property0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )property0);
    }
}

void QTextEdit_QtDShell::__override_insertFromMimeData(const QMimeData*  source0, bool static_call)
{
    if (static_call) {
        QTextEdit::insertFromMimeData((const QMimeData* )source0);
    } else {
        insertFromMimeData((const QMimeData* )source0);
    }
}

void QTextEdit_QtDShell::__override_keyPressEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::keyPressEvent((QKeyEvent* )e0);
    } else {
        keyPressEvent((QKeyEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_keyReleaseEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::keyReleaseEvent((QKeyEvent* )e0);
    } else {
        keyReleaseEvent((QKeyEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QTextEdit_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

QVariant  QTextEdit_QtDShell::__override_loadResource(int  type0, const QUrl&  name1, bool static_call)
{
    if (static_call) {
        return QTextEdit::loadResource((int )type0, (const QUrl& )name1);
    } else {
        return loadResource((int )type0, (const QUrl& )name1);
    }
}

int  QTextEdit_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QTextEdit_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QTextEdit_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::mouseDoubleClickEvent((QMouseEvent* )e0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_mousePressEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::mousePressEvent((QMouseEvent* )e0);
    } else {
        mousePressEvent((QMouseEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QTextEdit_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QTextEdit_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QTextEdit_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QTextEdit::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QTextEdit_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QTextEdit_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTextEdit::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QTextEdit_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

void QTextEdit_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QTextEdit_QtDShell::__override_timerEvent(QTimerEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::timerEvent((QTimerEvent* )e0);
    } else {
        timerEvent((QTimerEvent* )e0);
    }
}

bool  QTextEdit_QtDShell::__override_viewportEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QAbstractScrollArea::viewportEvent((QEvent* )arg__1);
    } else {
        return viewportEvent((QEvent* )arg__1);
    }
}

void QTextEdit_QtDShell::__override_wheelEvent(QWheelEvent*  e0, bool static_call)
{
    if (static_call) {
        QTextEdit::wheelEvent((QWheelEvent* )e0);
    } else {
        wheelEvent((QWheelEvent* )e0);
    }
}

// QTextEdit::copyAvailable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_copyAvailable_bool
(void* __this_nativeId,
 bool b0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_copyAvailable((bool )b0);

}

// QTextEdit::currentCharFormatChanged(const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_currentCharFormatChanged_QTextCharFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextCharFormat&  __qt_format0 = (const QTextCharFormat& ) *(QTextCharFormat *)format0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_currentCharFormatChanged((const QTextCharFormat& )__qt_format0);

}

// QTextEdit::cursorPositionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_cursorPositionChanged
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_cursorPositionChanged();

}

// QTextEdit::redoAvailable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_redoAvailable_bool
(void* __this_nativeId,
 bool b0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_redoAvailable((bool )b0);

}

// QTextEdit::selectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_selectionChanged
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged();

}

// QTextEdit::textChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_textChanged
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_textChanged();

}

// QTextEdit::undoAvailable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_undoAvailable_bool
(void* __this_nativeId,
 bool b0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_undoAvailable((bool )b0);

}

// ---externC---
// QTextEdit::QTextEdit(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_QTextEdit_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QTextEdit_QtDShell *__qt_this = new QTextEdit_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QTextEdit::QTextEdit(const QString & text, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_QTextEdit_string_QWidget
(void *d_ptr,
 DArray text0,
 void* parent1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QTextEdit_QtDShell *__qt_this = new QTextEdit_QtDShell(d_ptr, (const QString& )__qt_text0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QTextEdit::acceptRichText() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_acceptRichText_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->acceptRichText();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_alignment_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::anchorAt(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_anchorAt_QPoint_const
(void* __this_nativeId,
 void* __d_return_value,
 QPoint pos0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->anchorAt((const QPoint& )pos0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextEdit::append(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_append_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->append((const QString& )__qt_text0);

}

// QTextEdit::autoFormatting() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_autoFormatting_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->autoFormatting();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::canPaste() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_canPaste_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canPaste();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::clear()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_clear
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QTextEdit::copy()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_copy
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->copy();

}

// QTextEdit::createStandardContextMenu()
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_createStandardContextMenu
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->createStandardContextMenu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextEdit::createStandardContextMenu(const QPoint & position)
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_createStandardContextMenu_QPoint
(void* __this_nativeId,
 QPoint position0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->createStandardContextMenu((const QPoint& )position0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextEdit::currentCharFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_currentCharFormat_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->currentCharFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::currentFont() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_currentFont_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QFont  __qt_return_value = __qt_this->currentFont();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::cursorForPosition(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_cursorForPosition_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->cursorForPosition((const QPoint& )pos0);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::cursorRect() const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_cursorRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->cursorRect();

    *__d_return_value = __qt_return_value;

}

// QTextEdit::cursorRect(const QTextCursor & cursor) const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_cursorRect_QTextCursor_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* cursor0)
{
    const QTextCursor&  __qt_cursor0 = (const QTextCursor& ) *(QTextCursor *)cursor0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->cursorRect((const QTextCursor& )__qt_cursor0);

    *__d_return_value = __qt_return_value;

}

// QTextEdit::cursorWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_cursorWidth_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cursorWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::cut()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_cut
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->cut();

}

// QTextEdit::document() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_document_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QTextDocument*  __qt_return_value = __qt_this->document();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextEdit::documentTitle() const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_documentTitle_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->documentTitle();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextEdit::ensureCursorVisible()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_ensureCursorVisible
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->ensureCursorVisible();

}

// QTextEdit::extraSelections() const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_extraSelections_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QList<QTextEdit::ExtraSelection >  __qt_return_value = __qt_this->extraSelections();

QList<QTextEdit::ExtraSelection > &__d_return_value_tmp = (*(QList<QTextEdit::ExtraSelection > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTextEdit::find(const QString & exp, QFlags<QTextDocument::FindFlag> options)
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_find_string_FindFlags
(void* __this_nativeId,
 DArray exp0,
 int options1)
{
    QString __qt_exp0 = QString::fromUtf8((const char *)exp0.ptr, exp0.length);
    QFlags<QTextDocument::FindFlag> __qt_options1 = (QFlags<QTextDocument::FindFlag>) options1;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->find((const QString& )__qt_exp0, (QTextDocument::FindFlags )__qt_options1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::fontFamily() const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_fontFamily_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fontFamily();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextEdit::fontItalic() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_fontItalic_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontItalic();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::fontPointSize() const
QTD_EXTERN QTD_EXPORT double qtd_QTextEdit_fontPointSize_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->fontPointSize();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::fontUnderline() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_fontUnderline_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->fontUnderline();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::fontWeight() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_fontWeight_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fontWeight();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::insertHtml(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_insertHtml_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->insertHtml((const QString& )__qt_text0);

}

// QTextEdit::insertPlainText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_insertPlainText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->insertPlainText((const QString& )__qt_text0);

}

// QTextEdit::isReadOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_isReadOnly_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::isUndoRedoEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_isUndoRedoEnabled_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isUndoRedoEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::lineWrapColumnOrWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_lineWrapColumnOrWidth_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineWrapColumnOrWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::lineWrapMode() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_lineWrapMode_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineWrapMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::mergeCurrentCharFormat(const QTextCharFormat & modifier)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_mergeCurrentCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* modifier0)
{
    const QTextCharFormat&  __qt_modifier0 = (const QTextCharFormat& ) *(QTextCharFormat *)modifier0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->mergeCurrentCharFormat((const QTextCharFormat& )__qt_modifier0);

}

// QTextEdit::moveCursor(QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_moveCursor_MoveOperation_MoveMode
(void* __this_nativeId,
 int operation0,
 int mode1)
{
    QTextCursor::MoveOperation __qt_operation0 = (QTextCursor::MoveOperation) operation0;
    QTextCursor::MoveMode __qt_mode1 = (QTextCursor::MoveMode) mode1;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->moveCursor((QTextCursor::MoveOperation )__qt_operation0, (QTextCursor::MoveMode )__qt_mode1);

}

// QTextEdit::overwriteMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_overwriteMode_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->overwriteMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::paste()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_paste
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->paste();

}

// QTextEdit::print(QPrinter * printer) const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_print_QPrinter_const
(void* __this_nativeId,
 void* printer0)
{
    QPrinter*  __qt_printer0 = (QPrinter* ) printer0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->print((QPrinter* )__qt_printer0);

}

// QTextEdit::redo()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_redo
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->redo();

}

// QTextEdit::scrollToAnchor(const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_scrollToAnchor_string
(void* __this_nativeId,
 DArray name0)
{
    QString __qt_name0 = QString::fromUtf8((const char *)name0.ptr, name0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->scrollToAnchor((const QString& )__qt_name0);

}

// QTextEdit::selectAll()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_selectAll
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->selectAll();

}

// QTextEdit::setAcceptRichText(bool accept)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setAcceptRichText_bool
(void* __this_nativeId,
 bool accept0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setAcceptRichText((bool )accept0);

}

// QTextEdit::setAlignment(QFlags<Qt::AlignmentFlag> a)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setAlignment_Alignment
(void* __this_nativeId,
 int a0)
{
    QFlags<Qt::AlignmentFlag> __qt_a0 = (QFlags<Qt::AlignmentFlag>) a0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_a0);

}

// QTextEdit::setAutoFormatting(QFlags<QTextEdit::AutoFormattingFlag> features)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setAutoFormatting_AutoFormatting
(void* __this_nativeId,
 int features0)
{
    QFlags<QTextEdit::AutoFormattingFlag> __qt_features0 = (QFlags<QTextEdit::AutoFormattingFlag>) features0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setAutoFormatting((QTextEdit::AutoFormatting )__qt_features0);

}

// QTextEdit::setCurrentCharFormat(const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setCurrentCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextCharFormat&  __qt_format0 = (const QTextCharFormat& ) *(QTextCharFormat *)format0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setCurrentCharFormat((const QTextCharFormat& )__qt_format0);

}

// QTextEdit::setCurrentFont(const QFont & f)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setCurrentFont_QFont
(void* __this_nativeId,
 void* f0)
{
    const QFont&  __qt_f0 = (const QFont& ) *(QFont *)f0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setCurrentFont((const QFont& )__qt_f0);

}

// QTextEdit::setCursorWidth(int width)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setCursorWidth_int
(void* __this_nativeId,
 int width0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setCursorWidth((int )width0);

}

// QTextEdit::setDocument(QTextDocument * document)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setDocument_QTextDocument
(void* __this_nativeId,
 void* document0)
{
    QTextDocument*  __qt_document0 = (QTextDocument* ) document0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setDocument((QTextDocument* )__qt_document0);

}

// QTextEdit::setDocumentTitle(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setDocumentTitle_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setDocumentTitle((const QString& )__qt_title0);

}

// QTextEdit::setExtraSelections(const QList<QTextEdit::ExtraSelection > & selections)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setExtraSelections_QList
(void* __this_nativeId,
 void* selections0)
{
QList<QTextEdit::ExtraSelection > __qt_selections0 = (*(QList<QTextEdit::ExtraSelection > *)selections0);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setExtraSelections((const QList<QTextEdit::ExtraSelection >& )__qt_selections0);

}

// QTextEdit::setFontFamily(const QString & fontFamily)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setFontFamily_string
(void* __this_nativeId,
 DArray fontFamily0)
{
    QString __qt_fontFamily0 = QString::fromUtf8((const char *)fontFamily0.ptr, fontFamily0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setFontFamily((const QString& )__qt_fontFamily0);

}

// QTextEdit::setFontItalic(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setFontItalic_bool
(void* __this_nativeId,
 bool b0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setFontItalic((bool )b0);

}

// QTextEdit::setFontPointSize(double s)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setFontPointSize_double
(void* __this_nativeId,
 double s0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setFontPointSize((double )s0);

}

// QTextEdit::setFontUnderline(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setFontUnderline_bool
(void* __this_nativeId,
 bool b0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setFontUnderline((bool )b0);

}

// QTextEdit::setFontWeight(int w)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setFontWeight_int
(void* __this_nativeId,
 int w0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setFontWeight((int )w0);

}

// QTextEdit::setHtml(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setHtml_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setHtml((const QString& )__qt_text0);

}

// QTextEdit::setLineWrapColumnOrWidth(int w)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setLineWrapColumnOrWidth_int
(void* __this_nativeId,
 int w0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setLineWrapColumnOrWidth((int )w0);

}

// QTextEdit::setLineWrapMode(QTextEdit::LineWrapMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setLineWrapMode_LineWrapMode
(void* __this_nativeId,
 int mode0)
{
    QTextEdit::LineWrapMode __qt_mode0 = (QTextEdit::LineWrapMode) mode0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setLineWrapMode((QTextEdit::LineWrapMode )__qt_mode0);

}

// QTextEdit::setOverwriteMode(bool overwrite)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setOverwriteMode_bool
(void* __this_nativeId,
 bool overwrite0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setOverwriteMode((bool )overwrite0);

}

// QTextEdit::setPlainText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setPlainText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setPlainText((const QString& )__qt_text0);

}

// QTextEdit::setReadOnly(bool ro)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setReadOnly_bool
(void* __this_nativeId,
 bool ro0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setReadOnly((bool )ro0);

}

// QTextEdit::setTabChangesFocus(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setTabChangesFocus_bool
(void* __this_nativeId,
 bool b0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTabChangesFocus((bool )b0);

}

// QTextEdit::setTabStopWidth(int width)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setTabStopWidth_int
(void* __this_nativeId,
 int width0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTabStopWidth((int )width0);

}

// QTextEdit::setText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_text0);

}

// QTextEdit::setTextBackgroundColor(const QColor & c)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setTextBackgroundColor_QColor
(void* __this_nativeId,
 void* c0)
{
    const QColor&  __qt_c0 = (const QColor& ) *(QColor *)c0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTextBackgroundColor((const QColor& )__qt_c0);

}

// QTextEdit::setTextColor(const QColor & c)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setTextColor_QColor
(void* __this_nativeId,
 void* c0)
{
    const QColor&  __qt_c0 = (const QColor& ) *(QColor *)c0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTextColor((const QColor& )__qt_c0);

}

// QTextEdit::setTextCursor(const QTextCursor & cursor)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setTextCursor_QTextCursor
(void* __this_nativeId,
 void* cursor0)
{
    const QTextCursor&  __qt_cursor0 = (const QTextCursor& ) *(QTextCursor *)cursor0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTextCursor((const QTextCursor& )__qt_cursor0);

}

// QTextEdit::setTextInteractionFlags(QFlags<Qt::TextInteractionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setTextInteractionFlags_TextInteractionFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<Qt::TextInteractionFlag> __qt_flags0 = (QFlags<Qt::TextInteractionFlag>) flags0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTextInteractionFlags((Qt::TextInteractionFlags )__qt_flags0);

}

// QTextEdit::setUndoRedoEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setUndoRedoEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setUndoRedoEnabled((bool )enable0);

}

// QTextEdit::setWordWrapMode(QTextOption::WrapMode policy)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_setWordWrapMode_WrapMode
(void* __this_nativeId,
 int policy0)
{
    QTextOption::WrapMode __qt_policy0 = (QTextOption::WrapMode) policy0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setWordWrapMode((QTextOption::WrapMode )__qt_policy0);

}

// QTextEdit::tabChangesFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_tabChangesFocus_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tabChangesFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::tabStopWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_tabStopWidth_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabStopWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::textBackgroundColor() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_textBackgroundColor_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->textBackgroundColor();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::textColor() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_textColor_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->textColor();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::textCursor() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_textCursor_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->textCursor();

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::textInteractionFlags() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_textInteractionFlags_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textInteractionFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::toHtml() const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_toHtml_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toHtml();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextEdit::toPlainText() const
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_toPlainText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toPlainText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QTextEdit::undo()
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_undo
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->undo();

}

// QTextEdit::wordWrapMode() const
QTD_EXTERN QTD_EXPORT int qtd_QTextEdit_wordWrapMode_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->wordWrapMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::zoomIn(int range)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_zoomIn_int
(void* __this_nativeId,
 int range0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->zoomIn((int )range0);

}

// QTextEdit::zoomOut(int range)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_zoomOut_int
(void* __this_nativeId,
 int range0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    __qt_this->zoomOut((int )range0);

}

// QTextEdit::canInsertFromMimeData(const QMimeData * source) const
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_canInsertFromMimeData_QMimeData_const
(void* __this_nativeId,
 void* source0)
{
    const QMimeData*  __qt_source0 = (const QMimeData* ) source0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canInsertFromMimeData((const QMimeData* )__qt_source0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::changeEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_changeEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::contextMenuEvent(QContextMenuEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* e0)
{
    QContextMenuEvent*  __qt_e0 = (QContextMenuEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::createMimeDataFromSelection() const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_createMimeDataFromSelection_const
(void* __this_nativeId)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_createMimeDataFromSelection(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTextEdit::dragEnterEvent(QDragEnterEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* e0)
{
    QDragEnterEvent*  __qt_e0 = (QDragEnterEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::dragLeaveEvent(QDragLeaveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragLeaveEvent*  __qt_e0 = (QDragLeaveEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::dragMoveEvent(QDragMoveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragMoveEvent*  __qt_e0 = (QDragMoveEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::dropEvent(QDropEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_dropEvent_QDropEvent
(void* __this_nativeId,
 void* e0)
{
    QDropEvent*  __qt_e0 = (QDropEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::focusInEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QTextEdit_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTextEdit::focusOutEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::inputMethodEvent(QInputMethodEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* arg__1)
{
    QInputMethodEvent*  __qt_arg__1 = (QInputMethodEvent* ) arg__1;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_arg__1, __do_static_call);

}

// QTextEdit::inputMethodQuery(Qt::InputMethodQuery property) const
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int property0)
{
    Qt::InputMethodQuery __qt_property0 = (Qt::InputMethodQuery) property0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_property0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::insertFromMimeData(const QMimeData * source)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_insertFromMimeData_QMimeData
(void* __this_nativeId,
 void* source0)
{
    const QMimeData*  __qt_source0 = (const QMimeData* ) source0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_insertFromMimeData((const QMimeData* )__qt_source0, __do_static_call);

}

// QTextEdit::keyPressEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::keyReleaseEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::loadResource(int type, const QUrl & name)
QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_loadResource_int_QUrl
(void* __this_nativeId,
 int type0,
 void* name1)
{
    const QUrl&  __qt_name1 = (const QUrl& ) *(QUrl *)name1;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_loadResource((int )type0, (const QUrl& )__qt_name1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::mouseMoveEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::mousePressEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::mouseReleaseEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::paintEvent(QPaintEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* e0)
{
    QPaintEvent*  __qt_e0 = (QPaintEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::resizeEvent(QResizeEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* e0)
{
    QResizeEvent*  __qt_e0 = (QResizeEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QTextEdit::showEvent(QShowEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_showEvent_QShowEvent
(void* __this_nativeId,
 void* arg__1)
{
    QShowEvent*  __qt_arg__1 = (QShowEvent* ) arg__1;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_arg__1, __do_static_call);

}

// QTextEdit::timerEvent(QTimerEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* e0)
{
    QTimerEvent*  __qt_e0 = (QTimerEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_e0, __do_static_call);

}

// QTextEdit::wheelEvent(QWheelEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QTextEdit_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* e0)
{
    QWheelEvent*  __qt_e0 = (QWheelEvent* ) e0;
    QTextEdit_QtDShell *__qt_this = (QTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_e0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTextEdit_staticMetaObject() {
    return (void*)&QTextEdit::staticMetaObject;
}


