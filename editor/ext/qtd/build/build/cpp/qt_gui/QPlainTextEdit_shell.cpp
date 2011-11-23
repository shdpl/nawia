#include <QAbstractTextDocumentLayout>
#include <QTextEdit>
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
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qplaintextedit.h>
#include <qprinter.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qurl.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QPlainTextEdit_shell.h"
#include <iostream>
#include <qplaintextedit.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QPlainTextEditEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QPlainTextEditEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_createEntity(void *nativeId, void* dId)
{
    new QPlainTextEditEntity((QObject*)nativeId, dId);
}

QPlainTextEdit_QtDShell::QPlainTextEdit_QtDShell(void *d_ptr, QWidget*  parent0)
    : QPlainTextEdit(parent0),
      QObjectLink(this, d_ptr)
{
}

QPlainTextEdit_QtDShell::QPlainTextEdit_QtDShell(void *d_ptr, const QString&  text0, QWidget*  parent1)
    : QPlainTextEdit(text0, parent1),
      QObjectLink(this, d_ptr)
{
}

QPlainTextEdit_QtDShell::~QPlainTextEdit_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QPlainTextEdit_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QPlainTextEdit::metaObject();
}

int QPlainTextEdit_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QPlainTextEdit::qt_metacall(_c, _id, _a);
}

int QPlainTextEdit_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QPlainTextEdit::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch, (void *dId, void* source0))
QTD_FUNC(GUI, QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch)
bool  QPlainTextEdit_QtDShell::canInsertFromMimeData(const QMimeData*  source0) const
{
    return qtd_QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )source0);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::changeEvent(QEvent*  e0)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::contextMenuEvent(QContextMenuEvent*  e0)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )e0);
}

QTD_FUNC_DECL(GUI, void*, QPlainTextEdit_createMimeDataFromSelection_const_dispatch, (void *dId))
QTD_FUNC(GUI, QPlainTextEdit_createMimeDataFromSelection_const_dispatch)
QMimeData*  QPlainTextEdit_QtDShell::createMimeDataFromSelection() const
{
    return (QMimeData*) qtd_QPlainTextEdit_createMimeDataFromSelection_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QPlainTextEdit_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::dragEnterEvent(QDragEnterEvent*  e0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::dragLeaveEvent(QDragLeaveEvent*  e0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::dragMoveEvent(QDragMoveEvent*  e0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::dropEvent(QDropEvent*  e0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QPlainTextEdit_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QPlainTextEdit_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::focusInEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QPlainTextEdit_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::focusOutEvent(QFocusEvent*  e0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QPlainTextEdit_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::inputMethodEvent(QInputMethodEvent*  arg__1)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int property0))
QVariant  QPlainTextEdit_QtDShell::inputMethodQuery(Qt::InputMethodQuery  property0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )property0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QPlainTextEdit_insertFromMimeData_QMimeData_dispatch, (void *dId, void* source0))
QTD_FUNC(GUI, QPlainTextEdit_insertFromMimeData_QMimeData_dispatch)
void QPlainTextEdit_QtDShell::insertFromMimeData(const QMimeData*  source0)
{
    qtd_QPlainTextEdit_insertFromMimeData_QMimeData_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )source0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::keyPressEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::keyReleaseEvent(QKeyEvent*  e0)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QPlainTextEdit_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPlainTextEdit_loadResource_int_QUrl_dispatch, (void *dId, int type0, void* name1))
QTD_FUNC(GUI, QPlainTextEdit_loadResource_int_QUrl_dispatch)
QVariant  QPlainTextEdit_QtDShell::loadResource(int  type0, const QUrl&  name1)
{
    QVariant *__qt_return_value = (QVariant*) qtd_QPlainTextEdit_loadResource_int_QUrl_dispatch(QObjectLink::getLink(this)->dId, (int )type0, &(QUrl& )name1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QPlainTextEdit_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QPlainTextEdit_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::mouseDoubleClickEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::mousePressEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QPlainTextEdit_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QPlainTextEdit_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QPlainTextEdit_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QPlainTextEdit_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QPlainTextEdit_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::timerEvent(QTimerEvent*  e0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* arg__1))
bool  QPlainTextEdit_QtDShell::viewportEvent(QEvent*  arg__1)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* e0))
void QPlainTextEdit_QtDShell::wheelEvent(QWheelEvent*  e0)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_initCallBacks(VoidFunc *virts) {
    qtd_QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch = (qtd_QPlainTextEdit_canInsertFromMimeData_QMimeData_const_dispatch_t) virts[0];
    qtd_QPlainTextEdit_createMimeDataFromSelection_const_dispatch = (qtd_QPlainTextEdit_createMimeDataFromSelection_const_dispatch_t) virts[1];
    qtd_QPlainTextEdit_insertFromMimeData_QMimeData_dispatch = (qtd_QPlainTextEdit_insertFromMimeData_QMimeData_dispatch_t) virts[2];
    qtd_QPlainTextEdit_loadResource_int_QUrl_dispatch = (qtd_QPlainTextEdit_loadResource_int_QUrl_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QRectF  QPlainTextEdit_QtDShell::__public_blockBoundingGeometry(const QTextBlock&  block0) const
{
    return QPlainTextEdit::blockBoundingGeometry((const QTextBlock& )block0);
}

QRectF  QPlainTextEdit_QtDShell::__public_blockBoundingRect(const QTextBlock&  block0) const
{
    return QPlainTextEdit::blockBoundingRect((const QTextBlock& )block0);
}

QPointF  QPlainTextEdit_QtDShell::__public_contentOffset() const
{
    return QPlainTextEdit::contentOffset();
}

void QPlainTextEdit_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

void QPlainTextEdit_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

QTextBlock  QPlainTextEdit_QtDShell::__public_firstVisibleBlock() const
{
    return QPlainTextEdit::firstVisibleBlock();
}

bool  QPlainTextEdit_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QPlainTextEdit_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

QAbstractTextDocumentLayout::PaintContext  QPlainTextEdit_QtDShell::__public_getPaintContext() const
{
    return QPlainTextEdit::getPaintContext();
}

void QPlainTextEdit_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

QObject*  QPlainTextEdit_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QPlainTextEdit_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QPlainTextEdit_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QPlainTextEdit_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QPlainTextEdit_QtDShell::__public_blockCountChanged(int  newBlockCount0)
{
    QPlainTextEdit::blockCountChanged((int )newBlockCount0);
}

void QPlainTextEdit_QtDShell::__public_copyAvailable(bool  b0)
{
    QPlainTextEdit::copyAvailable((bool )b0);
}

void QPlainTextEdit_QtDShell::__public_cursorPositionChanged()
{
    QPlainTextEdit::cursorPositionChanged();
}

void QPlainTextEdit_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QPlainTextEdit_QtDShell::__public_modificationChanged(bool  arg__1)
{
    QPlainTextEdit::modificationChanged((bool )arg__1);
}

void QPlainTextEdit_QtDShell::__public_redoAvailable(bool  b0)
{
    QPlainTextEdit::redoAvailable((bool )b0);
}

void QPlainTextEdit_QtDShell::__public_selectionChanged()
{
    QPlainTextEdit::selectionChanged();
}

void QPlainTextEdit_QtDShell::__public_textChanged()
{
    QPlainTextEdit::textChanged();
}

void QPlainTextEdit_QtDShell::__public_undoAvailable(bool  b0)
{
    QPlainTextEdit::undoAvailable((bool )b0);
}

void QPlainTextEdit_QtDShell::__public_updateRequest(const QRect&  rect0, int  dy1)
{
    QPlainTextEdit::updateRequest((const QRect& )rect0, (int )dy1);
}

// Write virtual function overries used to decide on static/virtual calls
void QPlainTextEdit_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

bool  QPlainTextEdit_QtDShell::__override_canInsertFromMimeData(const QMimeData*  source0, bool static_call) const
{
    if (static_call) {
        return QPlainTextEdit::canInsertFromMimeData((const QMimeData* )source0);
    } else {
        return canInsertFromMimeData((const QMimeData* )source0);
    }
}

void QPlainTextEdit_QtDShell::__override_changeEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::changeEvent((QEvent* )e0);
    } else {
        changeEvent((QEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QPlainTextEdit_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QPlainTextEdit_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::contextMenuEvent((QContextMenuEvent* )e0);
    } else {
        contextMenuEvent((QContextMenuEvent* )e0);
    }
}

QMimeData*  QPlainTextEdit_QtDShell::__override_createMimeDataFromSelection(bool static_call) const
{
    if (static_call) {
        return QPlainTextEdit::createMimeDataFromSelection();
    } else {
        return createMimeDataFromSelection();
    }
}

void QPlainTextEdit_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

int  QPlainTextEdit_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QPlainTextEdit_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::dragEnterEvent((QDragEnterEvent* )e0);
    } else {
        dragEnterEvent((QDragEnterEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::dragLeaveEvent((QDragLeaveEvent* )e0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::dragMoveEvent((QDragMoveEvent* )e0);
    } else {
        dragMoveEvent((QDragMoveEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_dropEvent(QDropEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::dropEvent((QDropEvent* )e0);
    } else {
        dropEvent((QDropEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QPlainTextEdit_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QPlainTextEdit::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QPlainTextEdit_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QPlainTextEdit_QtDShell::__override_focusInEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::focusInEvent((QFocusEvent* )e0);
    } else {
        focusInEvent((QFocusEvent* )e0);
    }
}

bool  QPlainTextEdit_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QPlainTextEdit::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QPlainTextEdit_QtDShell::__override_focusOutEvent(QFocusEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::focusOutEvent((QFocusEvent* )e0);
    } else {
        focusOutEvent((QFocusEvent* )e0);
    }
}

int  QPlainTextEdit_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QPlainTextEdit_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

void QPlainTextEdit_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::inputMethodEvent((QInputMethodEvent* )arg__1);
    } else {
        inputMethodEvent((QInputMethodEvent* )arg__1);
    }
}

QVariant  QPlainTextEdit_QtDShell::__override_inputMethodQuery(int  property0, bool static_call) const
{
    if (static_call) {
        return QPlainTextEdit::inputMethodQuery((Qt::InputMethodQuery )property0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )property0);
    }
}

void QPlainTextEdit_QtDShell::__override_insertFromMimeData(const QMimeData*  source0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::insertFromMimeData((const QMimeData* )source0);
    } else {
        insertFromMimeData((const QMimeData* )source0);
    }
}

void QPlainTextEdit_QtDShell::__override_keyPressEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::keyPressEvent((QKeyEvent* )e0);
    } else {
        keyPressEvent((QKeyEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_keyReleaseEvent(QKeyEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::keyReleaseEvent((QKeyEvent* )e0);
    } else {
        keyReleaseEvent((QKeyEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QPlainTextEdit_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

QVariant  QPlainTextEdit_QtDShell::__override_loadResource(int  type0, const QUrl&  name1, bool static_call)
{
    if (static_call) {
        return QPlainTextEdit::loadResource((int )type0, (const QUrl& )name1);
    } else {
        return loadResource((int )type0, (const QUrl& )name1);
    }
}

int  QPlainTextEdit_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QPlainTextEdit_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QPlainTextEdit_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::mouseDoubleClickEvent((QMouseEvent* )e0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_mousePressEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::mousePressEvent((QMouseEvent* )e0);
    } else {
        mousePressEvent((QMouseEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QPlainTextEdit_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QPlainTextEdit_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QPlainTextEdit_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QPlainTextEdit_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QPlainTextEdit_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QPlainTextEdit_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

void QPlainTextEdit_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QPlainTextEdit_QtDShell::__override_timerEvent(QTimerEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::timerEvent((QTimerEvent* )e0);
    } else {
        timerEvent((QTimerEvent* )e0);
    }
}

bool  QPlainTextEdit_QtDShell::__override_viewportEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QAbstractScrollArea::viewportEvent((QEvent* )arg__1);
    } else {
        return viewportEvent((QEvent* )arg__1);
    }
}

void QPlainTextEdit_QtDShell::__override_wheelEvent(QWheelEvent*  e0, bool static_call)
{
    if (static_call) {
        QPlainTextEdit::wheelEvent((QWheelEvent* )e0);
    } else {
        wheelEvent((QWheelEvent* )e0);
    }
}

// QPlainTextEdit::blockCountChanged(int newBlockCount)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_blockCountChanged_int
(void* __this_nativeId,
 int newBlockCount0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_blockCountChanged((int )newBlockCount0);

}

// QPlainTextEdit::copyAvailable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_copyAvailable_bool
(void* __this_nativeId,
 bool b0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_copyAvailable((bool )b0);

}

// QPlainTextEdit::cursorPositionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_cursorPositionChanged
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_cursorPositionChanged();

}

// QPlainTextEdit::modificationChanged(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_modificationChanged_bool
(void* __this_nativeId,
 bool arg__1)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_modificationChanged((bool )arg__1);

}

// QPlainTextEdit::redoAvailable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_redoAvailable_bool
(void* __this_nativeId,
 bool b0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_redoAvailable((bool )b0);

}

// QPlainTextEdit::selectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_selectionChanged
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged();

}

// QPlainTextEdit::textChanged()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_textChanged
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_textChanged();

}

// QPlainTextEdit::undoAvailable(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_undoAvailable_bool
(void* __this_nativeId,
 bool b0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_undoAvailable((bool )b0);

}

// QPlainTextEdit::updateRequest(const QRect & rect, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_updateRequest_QRect_int
(void* __this_nativeId,
 QRect rect0,
 int dy1)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->__public_updateRequest((const QRect& )rect0, (int )dy1);

}

// ---externC---
// QPlainTextEdit::QPlainTextEdit(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_QPlainTextEdit_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QPlainTextEdit_QtDShell *__qt_this = new QPlainTextEdit_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QPlainTextEdit::QPlainTextEdit(const QString & text, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_QPlainTextEdit_string_QWidget
(void *d_ptr,
 DArray text0,
 void* parent1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QPlainTextEdit_QtDShell *__qt_this = new QPlainTextEdit_QtDShell(d_ptr, (const QString& )__qt_text0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QPlainTextEdit::anchorAt(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_anchorAt_QPoint_const
(void* __this_nativeId,
 void* __d_return_value,
 QPoint pos0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->anchorAt((const QPoint& )pos0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPlainTextEdit::appendHtml(const QString & html)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_appendHtml_string
(void* __this_nativeId,
 DArray html0)
{
    QString __qt_html0 = QString::fromUtf8((const char *)html0.ptr, html0.length);
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->appendHtml((const QString& )__qt_html0);

}

// QPlainTextEdit::appendPlainText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_appendPlainText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->appendPlainText((const QString& )__qt_text0);

}

// QPlainTextEdit::backgroundVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_backgroundVisible_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->backgroundVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::blockBoundingGeometry(const QTextBlock & block) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_blockBoundingGeometry_QTextBlock_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->__public_blockBoundingGeometry((const QTextBlock& )__qt_block0);

    *__d_return_value = __qt_return_value;

}

// QPlainTextEdit::blockBoundingRect(const QTextBlock & block) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_blockBoundingRect_QTextBlock_const
(void* __this_nativeId,
 QRectF * __d_return_value,
 void* block0)
{
    const QTextBlock&  __qt_block0 = (const QTextBlock& ) *(QTextBlock *)block0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->__public_blockBoundingRect((const QTextBlock& )__qt_block0);

    *__d_return_value = __qt_return_value;

}

// QPlainTextEdit::blockCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_blockCount_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->blockCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::canPaste() const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_canPaste_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->canPaste();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::centerCursor()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_centerCursor
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->centerCursor();

}

// QPlainTextEdit::centerOnScroll() const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_centerOnScroll_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->centerOnScroll();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::clear()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_clear
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QPlainTextEdit::contentOffset() const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_contentOffset_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->__public_contentOffset();

    *__d_return_value = __qt_return_value;

}

// QPlainTextEdit::copy()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_copy
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->copy();

}

// QPlainTextEdit::createStandardContextMenu()
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_createStandardContextMenu
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QMenu*  __qt_return_value = __qt_this->createStandardContextMenu();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::currentCharFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_currentCharFormat_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QTextCharFormat  __qt_return_value = __qt_this->currentCharFormat();

    void* __d_return_value = (void*) new QTextCharFormat(__qt_return_value);

    return __d_return_value;
}

// QPlainTextEdit::cursorForPosition(const QPoint & pos) const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_cursorForPosition_QPoint_const
(void* __this_nativeId,
 QPoint pos0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->cursorForPosition((const QPoint& )pos0);

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QPlainTextEdit::cursorRect() const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_cursorRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->cursorRect();

    *__d_return_value = __qt_return_value;

}

// QPlainTextEdit::cursorRect(const QTextCursor & cursor) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_cursorRect_QTextCursor_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* cursor0)
{
    const QTextCursor&  __qt_cursor0 = (const QTextCursor& ) *(QTextCursor *)cursor0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->cursorRect((const QTextCursor& )__qt_cursor0);

    *__d_return_value = __qt_return_value;

}

// QPlainTextEdit::cursorWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_cursorWidth_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->cursorWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::cut()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_cut
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->cut();

}

// QPlainTextEdit::document() const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_document_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QTextDocument*  __qt_return_value = __qt_this->document();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::documentTitle() const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_documentTitle_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->documentTitle();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPlainTextEdit::ensureCursorVisible()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_ensureCursorVisible
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->ensureCursorVisible();

}

// QPlainTextEdit::extraSelections() const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_extraSelections_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QList<QTextEdit::ExtraSelection >  __qt_return_value = __qt_this->extraSelections();

QList<QTextEdit::ExtraSelection > &__d_return_value_tmp = (*(QList<QTextEdit::ExtraSelection > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QPlainTextEdit::find(const QString & exp, QFlags<QTextDocument::FindFlag> options)
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_find_string_FindFlags
(void* __this_nativeId,
 DArray exp0,
 int options1)
{
    QString __qt_exp0 = QString::fromUtf8((const char *)exp0.ptr, exp0.length);
    QFlags<QTextDocument::FindFlag> __qt_options1 = (QFlags<QTextDocument::FindFlag>) options1;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->find((const QString& )__qt_exp0, (QTextDocument::FindFlags )__qt_options1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::firstVisibleBlock() const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_firstVisibleBlock_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QTextBlock  __qt_return_value = __qt_this->__public_firstVisibleBlock();

    void* __d_return_value = (void*) new QTextBlock(__qt_return_value);

    return __d_return_value;
}

// QPlainTextEdit::getPaintContext() const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_getPaintContext_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QAbstractTextDocumentLayout::PaintContext  __qt_return_value = __qt_this->__public_getPaintContext();

    void* __d_return_value = (void*) new QAbstractTextDocumentLayout::PaintContext(__qt_return_value);

    return __d_return_value;
}

// QPlainTextEdit::insertPlainText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_insertPlainText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->insertPlainText((const QString& )__qt_text0);

}

// QPlainTextEdit::isReadOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_isReadOnly_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::isUndoRedoEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_isUndoRedoEnabled_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isUndoRedoEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::lineWrapMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_lineWrapMode_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->lineWrapMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::maximumBlockCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_maximumBlockCount_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maximumBlockCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::mergeCurrentCharFormat(const QTextCharFormat & modifier)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_mergeCurrentCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* modifier0)
{
    const QTextCharFormat&  __qt_modifier0 = (const QTextCharFormat& ) *(QTextCharFormat *)modifier0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->mergeCurrentCharFormat((const QTextCharFormat& )__qt_modifier0);

}

// QPlainTextEdit::moveCursor(QTextCursor::MoveOperation operation, QTextCursor::MoveMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_moveCursor_MoveOperation_MoveMode
(void* __this_nativeId,
 int operation0,
 int mode1)
{
    QTextCursor::MoveOperation __qt_operation0 = (QTextCursor::MoveOperation) operation0;
    QTextCursor::MoveMode __qt_mode1 = (QTextCursor::MoveMode) mode1;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->moveCursor((QTextCursor::MoveOperation )__qt_operation0, (QTextCursor::MoveMode )__qt_mode1);

}

// QPlainTextEdit::overwriteMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_overwriteMode_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->overwriteMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::paste()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_paste
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->paste();

}

// QPlainTextEdit::print(QPrinter * printer) const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_print_QPrinter_const
(void* __this_nativeId,
 void* printer0)
{
    QPrinter*  __qt_printer0 = (QPrinter* ) printer0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->print((QPrinter* )__qt_printer0);

}

// QPlainTextEdit::redo()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_redo
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->redo();

}

// QPlainTextEdit::selectAll()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_selectAll
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->selectAll();

}

// QPlainTextEdit::setBackgroundVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setBackgroundVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setBackgroundVisible((bool )visible0);

}

// QPlainTextEdit::setCenterOnScroll(bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setCenterOnScroll_bool
(void* __this_nativeId,
 bool enabled0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setCenterOnScroll((bool )enabled0);

}

// QPlainTextEdit::setCurrentCharFormat(const QTextCharFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setCurrentCharFormat_QTextCharFormat
(void* __this_nativeId,
 void* format0)
{
    const QTextCharFormat&  __qt_format0 = (const QTextCharFormat& ) *(QTextCharFormat *)format0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setCurrentCharFormat((const QTextCharFormat& )__qt_format0);

}

// QPlainTextEdit::setCursorWidth(int width)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setCursorWidth_int
(void* __this_nativeId,
 int width0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setCursorWidth((int )width0);

}

// QPlainTextEdit::setDocument(QTextDocument * document)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setDocument_QTextDocument
(void* __this_nativeId,
 void* document0)
{
    QTextDocument*  __qt_document0 = (QTextDocument* ) document0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setDocument((QTextDocument* )__qt_document0);

}

// QPlainTextEdit::setDocumentTitle(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setDocumentTitle_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setDocumentTitle((const QString& )__qt_title0);

}

// QPlainTextEdit::setExtraSelections(const QList<QTextEdit::ExtraSelection > & selections)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setExtraSelections_QList
(void* __this_nativeId,
 void* selections0)
{
QList<QTextEdit::ExtraSelection > __qt_selections0 = (*(QList<QTextEdit::ExtraSelection > *)selections0);
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setExtraSelections((const QList<QTextEdit::ExtraSelection >& )__qt_selections0);

}

// QPlainTextEdit::setLineWrapMode(QPlainTextEdit::LineWrapMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setLineWrapMode_LineWrapMode
(void* __this_nativeId,
 int mode0)
{
    QPlainTextEdit::LineWrapMode __qt_mode0 = (QPlainTextEdit::LineWrapMode) mode0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setLineWrapMode((QPlainTextEdit::LineWrapMode )__qt_mode0);

}

// QPlainTextEdit::setMaximumBlockCount(int maximum)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setMaximumBlockCount_int
(void* __this_nativeId,
 int maximum0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setMaximumBlockCount((int )maximum0);

}

// QPlainTextEdit::setOverwriteMode(bool overwrite)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setOverwriteMode_bool
(void* __this_nativeId,
 bool overwrite0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setOverwriteMode((bool )overwrite0);

}

// QPlainTextEdit::setPlainText(const QString & text)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setPlainText_string
(void* __this_nativeId,
 DArray text0)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setPlainText((const QString& )__qt_text0);

}

// QPlainTextEdit::setReadOnly(bool ro)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setReadOnly_bool
(void* __this_nativeId,
 bool ro0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setReadOnly((bool )ro0);

}

// QPlainTextEdit::setTabChangesFocus(bool b)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setTabChangesFocus_bool
(void* __this_nativeId,
 bool b0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTabChangesFocus((bool )b0);

}

// QPlainTextEdit::setTabStopWidth(int width)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setTabStopWidth_int
(void* __this_nativeId,
 int width0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTabStopWidth((int )width0);

}

// QPlainTextEdit::setTextCursor(const QTextCursor & cursor)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setTextCursor_QTextCursor
(void* __this_nativeId,
 void* cursor0)
{
    const QTextCursor&  __qt_cursor0 = (const QTextCursor& ) *(QTextCursor *)cursor0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTextCursor((const QTextCursor& )__qt_cursor0);

}

// QPlainTextEdit::setTextInteractionFlags(QFlags<Qt::TextInteractionFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setTextInteractionFlags_TextInteractionFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<Qt::TextInteractionFlag> __qt_flags0 = (QFlags<Qt::TextInteractionFlag>) flags0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setTextInteractionFlags((Qt::TextInteractionFlags )__qt_flags0);

}

// QPlainTextEdit::setUndoRedoEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setUndoRedoEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setUndoRedoEnabled((bool )enable0);

}

// QPlainTextEdit::setWordWrapMode(QTextOption::WrapMode policy)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_setWordWrapMode_WrapMode
(void* __this_nativeId,
 int policy0)
{
    QTextOption::WrapMode __qt_policy0 = (QTextOption::WrapMode) policy0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->setWordWrapMode((QTextOption::WrapMode )__qt_policy0);

}

// QPlainTextEdit::tabChangesFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_tabChangesFocus_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tabChangesFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::tabStopWidth() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_tabStopWidth_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->tabStopWidth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::textCursor() const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_textCursor_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QTextCursor  __qt_return_value = __qt_this->textCursor();

    void* __d_return_value = (void*) new QTextCursor(__qt_return_value);

    return __d_return_value;
}

// QPlainTextEdit::textInteractionFlags() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_textInteractionFlags_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textInteractionFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::toPlainText() const
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_toPlainText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->toPlainText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QPlainTextEdit::undo()
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_undo
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    __qt_this->undo();

}

// QPlainTextEdit::wordWrapMode() const
QTD_EXTERN QTD_EXPORT int qtd_QPlainTextEdit_wordWrapMode_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->wordWrapMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::canInsertFromMimeData(const QMimeData * source) const
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_canInsertFromMimeData_QMimeData_const
(void* __this_nativeId,
 void* source0)
{
    const QMimeData*  __qt_source0 = (const QMimeData* ) source0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canInsertFromMimeData((const QMimeData* )__qt_source0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::changeEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_changeEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_changeEvent((QEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::contextMenuEvent(QContextMenuEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_contextMenuEvent_QContextMenuEvent
(void* __this_nativeId,
 void* e0)
{
    QContextMenuEvent*  __qt_e0 = (QContextMenuEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_contextMenuEvent((QContextMenuEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::createMimeDataFromSelection() const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_createMimeDataFromSelection_const
(void* __this_nativeId)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_createMimeDataFromSelection(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::dragEnterEvent(QDragEnterEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* e0)
{
    QDragEnterEvent*  __qt_e0 = (QDragEnterEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::dragLeaveEvent(QDragLeaveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragLeaveEvent*  __qt_e0 = (QDragLeaveEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::dragMoveEvent(QDragMoveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragMoveEvent*  __qt_e0 = (QDragMoveEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::dropEvent(QDropEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_dropEvent_QDropEvent
(void* __this_nativeId,
 void* e0)
{
    QDropEvent*  __qt_e0 = (QDropEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::focusInEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QPlainTextEdit_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPlainTextEdit::focusOutEvent(QFocusEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* e0)
{
    QFocusEvent*  __qt_e0 = (QFocusEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::inputMethodEvent(QInputMethodEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* arg__1)
{
    QInputMethodEvent*  __qt_arg__1 = (QInputMethodEvent* ) arg__1;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_arg__1, __do_static_call);

}

// QPlainTextEdit::inputMethodQuery(Qt::InputMethodQuery property) const
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int property0)
{
    Qt::InputMethodQuery __qt_property0 = (Qt::InputMethodQuery) property0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_property0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPlainTextEdit::insertFromMimeData(const QMimeData * source)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_insertFromMimeData_QMimeData
(void* __this_nativeId,
 void* source0)
{
    const QMimeData*  __qt_source0 = (const QMimeData* ) source0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_insertFromMimeData((const QMimeData* )__qt_source0, __do_static_call);

}

// QPlainTextEdit::keyPressEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::keyReleaseEvent(QKeyEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_keyReleaseEvent_QKeyEvent
(void* __this_nativeId,
 void* e0)
{
    QKeyEvent*  __qt_e0 = (QKeyEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyReleaseEvent((QKeyEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::loadResource(int type, const QUrl & name)
QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_loadResource_int_QUrl
(void* __this_nativeId,
 int type0,
 void* name1)
{
    const QUrl&  __qt_name1 = (const QUrl& ) *(QUrl *)name1;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_loadResource((int )type0, (const QUrl& )__qt_name1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::mouseMoveEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::mousePressEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::mouseReleaseEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::paintEvent(QPaintEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* e0)
{
    QPaintEvent*  __qt_e0 = (QPaintEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::resizeEvent(QResizeEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* e0)
{
    QResizeEvent*  __qt_e0 = (QResizeEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QPlainTextEdit::showEvent(QShowEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_showEvent_QShowEvent
(void* __this_nativeId,
 void* arg__1)
{
    QShowEvent*  __qt_arg__1 = (QShowEvent* ) arg__1;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_showEvent((QShowEvent* )__qt_arg__1, __do_static_call);

}

// QPlainTextEdit::timerEvent(QTimerEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* e0)
{
    QTimerEvent*  __qt_e0 = (QTimerEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_e0, __do_static_call);

}

// QPlainTextEdit::wheelEvent(QWheelEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QPlainTextEdit_wheelEvent_QWheelEvent
(void* __this_nativeId,
 void* e0)
{
    QWheelEvent*  __qt_e0 = (QWheelEvent* ) e0;
    QPlainTextEdit_QtDShell *__qt_this = (QPlainTextEdit_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wheelEvent((QWheelEvent* )__qt_e0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QPlainTextEdit_staticMetaObject() {
    return (void*)&QPlainTextEdit::staticMetaObject;
}


