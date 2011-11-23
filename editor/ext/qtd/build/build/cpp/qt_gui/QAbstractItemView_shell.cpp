#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
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
#include <qitemselectionmodel.h>
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
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QAbstractItemView_shell.h"
#include <iostream>
#include <qabstractitemview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QAbstractItemViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractItemViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_createEntity(void *nativeId, void* dId)
{
    new QAbstractItemViewEntity((QObject*)nativeId, dId);
}

QAbstractItemView_QtDShell::QAbstractItemView_QtDShell(void *d_ptr, QWidget*  parent0)
    : QAbstractItemView(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractItemView_QtDShell::~QAbstractItemView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractItemView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractItemView::metaObject();
}

int QAbstractItemView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractItemView::qt_metacall(_c, _id, _a);
}

int QAbstractItemView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractItemView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
QTD_FUNC(GUI, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch)
void QAbstractItemView_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
QTD_FUNC(GUI, QAbstractItemView_commitData_QWidget_dispatch)
void QAbstractItemView_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
QTD_FUNC(GUI, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch)
void QAbstractItemView_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
QTD_FUNC(GUI, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch)
void QAbstractItemView_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QAbstractItemView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_doItemsLayout_dispatch)
void QAbstractItemView_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  event0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::dragMoveEvent(QDragMoveEvent*  event0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
QTD_FUNC(GUI, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch)
bool  QAbstractItemView_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
QTD_FUNC(GUI, QAbstractItemView_editorDestroyed_QObject_dispatch)
void QAbstractItemView_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QAbstractItemView_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractItemView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QAbstractItemView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QAbstractItemView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_horizontalOffset_const_dispatch)
int  QAbstractItemView_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
QTD_FUNC(GUI, QAbstractItemView_horizontalScrollbarAction_int_dispatch)
void QAbstractItemView_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
QTD_FUNC(GUI, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch)
void QAbstractItemView_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* point0))
QTD_FUNC(GUI, QAbstractItemView_indexAt_QPoint_const_dispatch)
QModelIndex  QAbstractItemView_QtDShell::indexAt(const QPoint&  point0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )point0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QAbstractItemView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
QTD_FUNC(GUI, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch)
bool  QAbstractItemView_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
QTD_FUNC(GUI, QAbstractItemView_keyboardSearch_string_dispatch)
void QAbstractItemView_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QAbstractItemView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QAbstractItemView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractItemView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QTD_FUNC(GUI, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch)
QModelIndex  QAbstractItemView_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QAbstractItemView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_reset_dispatch)
void QAbstractItemView_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
QTD_FUNC(GUI, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch)
void QAbstractItemView_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
QTD_FUNC(GUI, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch)
void QAbstractItemView_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QAbstractItemView_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
QTD_FUNC(GUI, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch)
void QAbstractItemView_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_selectAll_dispatch)
void QAbstractItemView_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QAbstractItemView_selectedIndexes_const_dispatch)
QList<QModelIndex >  QAbstractItemView_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
QTD_FUNC(GUI, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch)
void QAbstractItemView_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QTD_FUNC(GUI, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch)
QItemSelectionModel::SelectionFlags  QAbstractItemView_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setModel_QAbstractItemModel_dispatch, (void *dId, void* model0))
QTD_FUNC(GUI, QAbstractItemView_setModel_QAbstractItemModel_dispatch)
void QAbstractItemView_QtDShell::setModel(QAbstractItemModel*  model0)
{
    qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )model0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
QTD_FUNC(GUI, QAbstractItemView_setRootIndex_QModelIndex_dispatch)
void QAbstractItemView_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
QTD_FUNC(GUI, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch)
void QAbstractItemView_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
QTD_FUNC(GUI, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch)
void QAbstractItemView_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QAbstractItemView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QAbstractItemView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
QTD_FUNC(GUI, QAbstractItemView_sizeHintForColumn_int_const_dispatch)
int  QAbstractItemView_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
QTD_FUNC(GUI, QAbstractItemView_sizeHintForRow_int_const_dispatch)
int  QAbstractItemView_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
QTD_FUNC(GUI, QAbstractItemView_startDrag_DropActions_dispatch)
void QAbstractItemView_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QAbstractItemView_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_updateEditorData_dispatch)
void QAbstractItemView_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_updateEditorGeometries_dispatch)
void QAbstractItemView_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_updateGeometries_dispatch)
void QAbstractItemView_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_verticalOffset_const_dispatch)
int  QAbstractItemView_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
QTD_FUNC(GUI, QAbstractItemView_verticalScrollbarAction_int_dispatch)
void QAbstractItemView_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
QTD_FUNC(GUI, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch)
void QAbstractItemView_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QTD_FUNC(GUI, QAbstractItemView_viewOptions_const_dispatch)
QStyleOptionViewItem  QAbstractItemView_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QAbstractItemView_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QTD_FUNC(GUI, QAbstractItemView_visualRect_QModelIndex_const_dispatch)
QRect  QAbstractItemView_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QTD_FUNC(GUI, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch)
QRegion  QAbstractItemView_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemView_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch = (qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch_t) virts[0];
    qtd_QAbstractItemView_commitData_QWidget_dispatch = (qtd_QAbstractItemView_commitData_QWidget_dispatch_t) virts[1];
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch = (qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch_t) virts[2];
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch = (qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch_t) virts[3];
    qtd_QAbstractItemView_doItemsLayout_dispatch = (qtd_QAbstractItemView_doItemsLayout_dispatch_t) virts[4];
    qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch = (qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch_t) virts[5];
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch = (qtd_QAbstractItemView_editorDestroyed_QObject_dispatch_t) virts[6];
    qtd_QAbstractItemView_horizontalOffset_const_dispatch = (qtd_QAbstractItemView_horizontalOffset_const_dispatch_t) virts[7];
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch = (qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch_t) virts[8];
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch = (qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch_t) virts[9];
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch = (qtd_QAbstractItemView_indexAt_QPoint_const_dispatch_t) virts[10];
    qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch = (qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch_t) virts[11];
    qtd_QAbstractItemView_keyboardSearch_string_dispatch = (qtd_QAbstractItemView_keyboardSearch_string_dispatch_t) virts[12];
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch = (qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch_t) virts[13];
    qtd_QAbstractItemView_reset_dispatch = (qtd_QAbstractItemView_reset_dispatch_t) virts[14];
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch = (qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch_t) virts[15];
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch = (qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch_t) virts[16];
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch = (qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch_t) virts[17];
    qtd_QAbstractItemView_selectAll_dispatch = (qtd_QAbstractItemView_selectAll_dispatch_t) virts[18];
    qtd_QAbstractItemView_selectedIndexes_const_dispatch = (qtd_QAbstractItemView_selectedIndexes_const_dispatch_t) virts[19];
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch = (qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch_t) virts[20];
    qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch = (qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch_t) virts[21];
    qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch = (qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch_t) virts[22];
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch = (qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch_t) virts[23];
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch = (qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch_t) virts[24];
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch = (qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch_t) virts[25];
    qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch = (qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch_t) virts[26];
    qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch = (qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch_t) virts[27];
    qtd_QAbstractItemView_startDrag_DropActions_dispatch = (qtd_QAbstractItemView_startDrag_DropActions_dispatch_t) virts[28];
    qtd_QAbstractItemView_updateEditorData_dispatch = (qtd_QAbstractItemView_updateEditorData_dispatch_t) virts[29];
    qtd_QAbstractItemView_updateEditorGeometries_dispatch = (qtd_QAbstractItemView_updateEditorGeometries_dispatch_t) virts[30];
    qtd_QAbstractItemView_updateGeometries_dispatch = (qtd_QAbstractItemView_updateGeometries_dispatch_t) virts[31];
    qtd_QAbstractItemView_verticalOffset_const_dispatch = (qtd_QAbstractItemView_verticalOffset_const_dispatch_t) virts[32];
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch = (qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch_t) virts[33];
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch = (qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch_t) virts[34];
    qtd_QAbstractItemView_viewOptions_const_dispatch = (qtd_QAbstractItemView_viewOptions_const_dispatch_t) virts[35];
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch = (qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch_t) virts[36];
    qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch = (qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch_t) virts[37];
}
// Functions in shell class
void QAbstractItemView_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
void QAbstractItemView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QAbstractItemView_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QAbstractItemView_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QAbstractItemView_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

int  QAbstractItemView_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QAbstractItemView_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QAbstractItemView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QAbstractItemView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QAbstractItemView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

void QAbstractItemView_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QAbstractItemView_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QAbstractItemView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractItemView_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QAbstractItemView_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QAbstractItemView_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QAbstractItemView_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QAbstractItemView_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QAbstractItemView_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QAbstractItemView_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QAbstractItemView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QAbstractItemView_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QAbstractItemView_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QAbstractItemView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QAbstractItemView_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QAbstractItemView_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QAbstractItemView_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QAbstractItemView_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QAbstractItemView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QAbstractItemView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QAbstractItemView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QAbstractItemView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QAbstractItemView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QAbstractItemView_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QAbstractItemView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QAbstractItemView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragLeaveEvent((QDragLeaveEvent* )event0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragMoveEvent((QDragMoveEvent* )event0);
    } else {
        dragMoveEvent((QDragMoveEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

bool  QAbstractItemView_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QAbstractItemView_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QAbstractItemView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QAbstractItemView_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QAbstractItemView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractItemView_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QAbstractItemView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QAbstractItemView_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QAbstractItemView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QAbstractItemView_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return horizontalOffset();
    }
}

void QAbstractItemView_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QAbstractItemView_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QAbstractItemView_QtDShell::__override_indexAt(const QPoint&  point0, bool static_call) const
{
    if (static_call) {
        return QModelIndex();
    } else {
        return indexAt((const QPoint& )point0);
    }
}

void QAbstractItemView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QAbstractItemView_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QAbstractItemView_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QAbstractItemView_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QAbstractItemView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QAbstractItemView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QAbstractItemView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QAbstractItemView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QAbstractItemView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

QModelIndex  QAbstractItemView_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QModelIndex();
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QAbstractItemView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QAbstractItemView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QAbstractItemView_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QAbstractItemView::reset();
    } else {
        reset();
    }
}

void QAbstractItemView_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QAbstractItemView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QAbstractItemView_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QAbstractItemView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QAbstractItemView_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QAbstractItemView_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QAbstractItemView_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QAbstractItemView_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QAbstractItemView_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QAbstractItemView_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QAbstractItemView_QtDShell::__override_setModel(QAbstractItemModel*  model0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setModel((QAbstractItemModel* )model0);
    } else {
        setModel((QAbstractItemModel* )model0);
    }
}

void QAbstractItemView_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QAbstractItemView_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QAbstractItemView_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QAbstractItemView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QAbstractItemView_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QAbstractItemView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QAbstractItemView_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QAbstractItemView_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QAbstractItemView_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

void QAbstractItemView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QAbstractItemView_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QAbstractItemView_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QAbstractItemView_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QAbstractItemView_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QAbstractItemView_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return verticalOffset();
    }
}

void QAbstractItemView_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QAbstractItemView_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QAbstractItemView_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QAbstractItemView_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QAbstractItemView_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QRect();
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QAbstractItemView_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QRegion();
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QAbstractItemView_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QAbstractItemView::activated(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_activated_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_activated((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::clicked(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_clicked_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_clicked((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::doubleClicked(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_doubleClicked_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_doubleClicked((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::entered(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_entered_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_entered((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::pressed(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_pressed_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_pressed((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::viewportEntered()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_viewportEntered
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_viewportEntered();

}

// ---externC---
// QAbstractItemView::QAbstractItemView(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_QAbstractItemView_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QAbstractItemView_QtDShell *__qt_this = new QAbstractItemView_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractItemView::alternatingRowColors() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_alternatingRowColors_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->alternatingRowColors();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::autoScrollMargin() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_autoScrollMargin_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->autoScrollMargin();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::clearSelection()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_clearSelection
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->clearSelection();

}

// QAbstractItemView::closePersistentEditor(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_closePersistentEditor_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->closePersistentEditor((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::currentIndex() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_currentIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->currentIndex();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemView::defaultDropAction() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_defaultDropAction_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->defaultDropAction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::dirtyRegionOffset() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_dirtyRegionOffset_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->__public_dirtyRegionOffset();

    *__d_return_value = __qt_return_value;

}

// QAbstractItemView::doAutoScroll()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_doAutoScroll
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_doAutoScroll();

}

// QAbstractItemView::dragDropMode() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_dragDropMode_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dragDropMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::dragDropOverwriteMode() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_dragDropOverwriteMode_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->dragDropOverwriteMode();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::dragEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_dragEnabled_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->dragEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::dropIndicatorPosition() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_dropIndicatorPosition_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_dropIndicatorPosition();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::edit(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_edit_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView *__qt_this = (QAbstractItemView *) __this_nativeId;
    __qt_this->edit((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::editTriggers() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_editTriggers_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->editTriggers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::executeDelayedItemsLayout()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_executeDelayedItemsLayout
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_executeDelayedItemsLayout();

}

// QAbstractItemView::hasAutoScroll() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_hasAutoScroll_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAutoScroll();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::horizontalScrollMode() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_horizontalScrollMode_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->horizontalScrollMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::iconSize() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_iconSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->iconSize();

    *__d_return_value = __qt_return_value;

}

// QAbstractItemView::indexWidget(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_indexWidget_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->indexWidget((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::itemDelegate() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_itemDelegate_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QAbstractItemDelegate*  __qt_return_value = __qt_this->itemDelegate();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::itemDelegate(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_itemDelegate_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QAbstractItemDelegate*  __qt_return_value = __qt_this->itemDelegate((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::itemDelegateForColumn(int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_itemDelegateForColumn_int_const
(void* __this_nativeId,
 int column0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QAbstractItemDelegate*  __qt_return_value = __qt_this->itemDelegateForColumn((int )column0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::itemDelegateForRow(int row) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_itemDelegateForRow_int_const
(void* __this_nativeId,
 int row0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QAbstractItemDelegate*  __qt_return_value = __qt_this->itemDelegateForRow((int )row0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_model_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::openPersistentEditor(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_openPersistentEditor_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->openPersistentEditor((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::rootIndex() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_rootIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->rootIndex();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemView::scheduleDelayedItemsLayout()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_scheduleDelayedItemsLayout
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_scheduleDelayedItemsLayout();

}

// QAbstractItemView::scrollDirtyRegion(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_scrollDirtyRegion_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_scrollDirtyRegion((int )dx0, (int )dy1);

}

// QAbstractItemView::scrollToBottom()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_scrollToBottom
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->scrollToBottom();

}

// QAbstractItemView::scrollToTop()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_scrollToTop
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->scrollToTop();

}

// QAbstractItemView::selectionBehavior() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_selectionBehavior_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->selectionBehavior();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::selectionMode() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_selectionMode_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->selectionMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::selectionModel() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_selectionModel_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QItemSelectionModel*  __qt_return_value = __qt_this->selectionModel();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::setAlternatingRowColors(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setAlternatingRowColors_bool
(void* __this_nativeId,
 bool enable0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setAlternatingRowColors((bool )enable0);

}

// QAbstractItemView::setAutoScroll(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setAutoScroll_bool
(void* __this_nativeId,
 bool enable0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setAutoScroll((bool )enable0);

}

// QAbstractItemView::setAutoScrollMargin(int margin)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setAutoScrollMargin_int
(void* __this_nativeId,
 int margin0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setAutoScrollMargin((int )margin0);

}

// QAbstractItemView::setCurrentIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setCurrentIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setCurrentIndex((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::setDefaultDropAction(Qt::DropAction dropAction)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setDefaultDropAction_DropAction
(void* __this_nativeId,
 int dropAction0)
{
    Qt::DropAction __qt_dropAction0 = (Qt::DropAction) dropAction0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setDefaultDropAction((Qt::DropAction )__qt_dropAction0);

}

// QAbstractItemView::setDirtyRegion(const QRegion & region)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setDirtyRegion_QRegion
(void* __this_nativeId,
 void* region0)
{
    const QRegion&  __qt_region0 = (const QRegion& ) *(QRegion *)region0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_setDirtyRegion((const QRegion& )__qt_region0);

}

// QAbstractItemView::setDragDropMode(QAbstractItemView::DragDropMode behavior)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setDragDropMode_DragDropMode
(void* __this_nativeId,
 int behavior0)
{
    QAbstractItemView::DragDropMode __qt_behavior0 = (QAbstractItemView::DragDropMode) behavior0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setDragDropMode((QAbstractItemView::DragDropMode )__qt_behavior0);

}

// QAbstractItemView::setDragDropOverwriteMode(bool overwrite)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setDragDropOverwriteMode_bool
(void* __this_nativeId,
 bool overwrite0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setDragDropOverwriteMode((bool )overwrite0);

}

// QAbstractItemView::setDragEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setDragEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setDragEnabled((bool )enable0);

}

// QAbstractItemView::setDropIndicatorShown(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setDropIndicatorShown_bool
(void* __this_nativeId,
 bool enable0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setDropIndicatorShown((bool )enable0);

}

// QAbstractItemView::setEditTriggers(QFlags<QAbstractItemView::EditTrigger> triggers)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setEditTriggers_EditTriggers
(void* __this_nativeId,
 int triggers0)
{
    QFlags<QAbstractItemView::EditTrigger> __qt_triggers0 = (QFlags<QAbstractItemView::EditTrigger>) triggers0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setEditTriggers((QAbstractItemView::EditTriggers )__qt_triggers0);

}

// QAbstractItemView::setHorizontalScrollMode(QAbstractItemView::ScrollMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setHorizontalScrollMode_ScrollMode
(void* __this_nativeId,
 int mode0)
{
    QAbstractItemView::ScrollMode __qt_mode0 = (QAbstractItemView::ScrollMode) mode0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalScrollMode((QAbstractItemView::ScrollMode )__qt_mode0);

}

// QAbstractItemView::setIconSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setIconSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setIconSize((const QSize& )size0);

}

// QAbstractItemView::setIndexWidget(const QModelIndex & index, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setIndexWidget_QModelIndex_QWidget
(void* __this_nativeId,
 QModelIndexAccessor index0,
 void* widget1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setIndexWidget((const QModelIndex& )__qt_index0, (QWidget* )__qt_widget1);

}

// QAbstractItemView::setItemDelegate(QAbstractItemDelegate * delegate_)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setItemDelegate_QAbstractItemDelegate
(void* __this_nativeId,
 void* delegate0)
{
    QAbstractItemDelegate*  __qt_delegate0 = (QAbstractItemDelegate* ) delegate0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setItemDelegate((QAbstractItemDelegate* )__qt_delegate0);

}

// QAbstractItemView::setItemDelegateForColumn(int column, QAbstractItemDelegate * delegate_)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setItemDelegateForColumn_int_QAbstractItemDelegate
(void* __this_nativeId,
 int column0,
 void* delegate1)
{
    QAbstractItemDelegate*  __qt_delegate1 = (QAbstractItemDelegate* ) delegate1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setItemDelegateForColumn((int )column0, (QAbstractItemDelegate* )__qt_delegate1);

}

// QAbstractItemView::setItemDelegateForRow(int row, QAbstractItemDelegate * delegate_)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setItemDelegateForRow_int_QAbstractItemDelegate
(void* __this_nativeId,
 int row0,
 void* delegate1)
{
    QAbstractItemDelegate*  __qt_delegate1 = (QAbstractItemDelegate* ) delegate1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setItemDelegateForRow((int )row0, (QAbstractItemDelegate* )__qt_delegate1);

}

// QAbstractItemView::setSelectionBehavior(QAbstractItemView::SelectionBehavior behavior)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setSelectionBehavior_SelectionBehavior
(void* __this_nativeId,
 int behavior0)
{
    QAbstractItemView::SelectionBehavior __qt_behavior0 = (QAbstractItemView::SelectionBehavior) behavior0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setSelectionBehavior((QAbstractItemView::SelectionBehavior )__qt_behavior0);

}

// QAbstractItemView::setSelectionMode(QAbstractItemView::SelectionMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setSelectionMode_SelectionMode
(void* __this_nativeId,
 int mode0)
{
    QAbstractItemView::SelectionMode __qt_mode0 = (QAbstractItemView::SelectionMode) mode0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setSelectionMode((QAbstractItemView::SelectionMode )__qt_mode0);

}

// QAbstractItemView::setState(QAbstractItemView::State state)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setState_State
(void* __this_nativeId,
 int state0)
{
    int __qt_state0 = state0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_setState(__qt_state0);

}

// QAbstractItemView::setTabKeyNavigation(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setTabKeyNavigation_bool
(void* __this_nativeId,
 bool enable0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setTabKeyNavigation((bool )enable0);

}

// QAbstractItemView::setTextElideMode(Qt::TextElideMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setTextElideMode_TextElideMode
(void* __this_nativeId,
 int mode0)
{
    Qt::TextElideMode __qt_mode0 = (Qt::TextElideMode) mode0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setTextElideMode((Qt::TextElideMode )__qt_mode0);

}

// QAbstractItemView::setVerticalScrollMode(QAbstractItemView::ScrollMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setVerticalScrollMode_ScrollMode
(void* __this_nativeId,
 int mode0)
{
    QAbstractItemView::ScrollMode __qt_mode0 = (QAbstractItemView::ScrollMode) mode0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->setVerticalScrollMode((QAbstractItemView::ScrollMode )__qt_mode0);

}

// QAbstractItemView::showDropIndicator() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_showDropIndicator_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->showDropIndicator();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::sizeHintForIndex(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_sizeHintForIndex_QModelIndex_const
(void* __this_nativeId,
 QSize * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->sizeHintForIndex((const QModelIndex& )__qt_index0);

    *__d_return_value = __qt_return_value;

}

// QAbstractItemView::startAutoScroll()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_startAutoScroll
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_startAutoScroll();

}

// QAbstractItemView::state() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_state_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::stopAutoScroll()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_stopAutoScroll
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->__public_stopAutoScroll();

}

// QAbstractItemView::tabKeyNavigation() const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_tabKeyNavigation_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tabKeyNavigation();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::textElideMode() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_textElideMode_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->textElideMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::update(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_update_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    __qt_this->update((const QModelIndex& )__qt_index0);

}

// QAbstractItemView::verticalScrollMode() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_verticalScrollMode_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalScrollMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint
(void* __this_nativeId,
 void* editor0,
 int hint1)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QAbstractItemDelegate::EndEditHint __qt_hint1 = (QAbstractItemDelegate::EndEditHint) hint1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closeEditor((QWidget* )__qt_editor0, (QAbstractItemDelegate::EndEditHint )__qt_hint1, __do_static_call);

}

// QAbstractItemView::commitData(QWidget * editor)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_commitData_QWidget
(void* __this_nativeId,
 void* editor0)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_commitData((QWidget* )__qt_editor0, __do_static_call);

}

// QAbstractItemView::currentChanged(const QModelIndex & current, const QModelIndex & previous)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor previous1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_previous1 = qtd_to_QModelIndex(previous1);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_currentChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_previous1, __do_static_call);

}

// QAbstractItemView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dataChanged((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1, __do_static_call);

}

// QAbstractItemView::doItemsLayout()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_doItemsLayout
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_doItemsLayout(__do_static_call);

}

// QAbstractItemView::dragEnterEvent(QDragEnterEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_dragEnterEvent_QDragEnterEvent
(void* __this_nativeId,
 void* event0)
{
    QDragEnterEvent*  __qt_event0 = (QDragEnterEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragEnterEvent((QDragEnterEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::dragLeaveEvent(QDragLeaveEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* event0)
{
    QDragLeaveEvent*  __qt_event0 = (QDragLeaveEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::dragMoveEvent(QDragMoveEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* event0)
{
    QDragMoveEvent*  __qt_event0 = (QDragMoveEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::dropEvent(QDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_dropEvent_QDropEvent
(void* __this_nativeId,
 void* event0)
{
    QDropEvent*  __qt_event0 = (QDropEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::edit(const QModelIndex & index, QAbstractItemView::EditTrigger trigger, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int trigger1,
 void* event2)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView::EditTrigger __qt_trigger1 = (QAbstractItemView::EditTrigger) trigger1;
    QEvent*  __qt_event2 = (QEvent* ) event2;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_edit((const QModelIndex& )__qt_index0, (QAbstractItemView::EditTrigger )__qt_trigger1, (QEvent* )__qt_event2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::editorDestroyed(QObject * editor)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_editorDestroyed_QObject
(void* __this_nativeId,
 void* editor0)
{
    QObject*  __qt_editor0 = (QObject* ) editor0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_editorDestroyed((QObject* )__qt_editor0, __do_static_call);

}

// QAbstractItemView::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::focusInEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_focusInEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusInEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::focusNextPrevChild(bool next)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_focusNextPrevChild_bool
(void* __this_nativeId,
 bool next0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_focusNextPrevChild((bool )next0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::focusOutEvent(QFocusEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_focusOutEvent_QFocusEvent
(void* __this_nativeId,
 void* event0)
{
    QFocusEvent*  __qt_event0 = (QFocusEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_focusOutEvent((QFocusEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::horizontalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_horizontalOffset_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_horizontalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::horizontalScrollbarAction(int action)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_horizontalScrollbarAction_int
(void* __this_nativeId,
 int action0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_horizontalScrollbarAction((int )action0, __do_static_call);

}

// QAbstractItemView::horizontalScrollbarValueChanged(int value)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_horizontalScrollbarValueChanged_int
(void* __this_nativeId,
 int value0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_horizontalScrollbarValueChanged((int )value0, __do_static_call);

}

// QAbstractItemView::indexAt(const QPoint & point) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_indexAt_QPoint_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint point0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_indexAt((const QPoint& )point0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemView::inputMethodEvent(QInputMethodEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_inputMethodEvent_QInputMethodEvent
(void* __this_nativeId,
 void* event0)
{
    QInputMethodEvent*  __qt_event0 = (QInputMethodEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_inputMethodEvent((QInputMethodEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::inputMethodQuery(Qt::InputMethodQuery query) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_inputMethodQuery_InputMethodQuery_const
(void* __this_nativeId,
 int query0)
{
    Qt::InputMethodQuery __qt_query0 = (Qt::InputMethodQuery) query0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_inputMethodQuery((Qt::InputMethodQuery )__qt_query0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAbstractItemView::isIndexHidden(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_isIndexHidden_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isIndexHidden((const QModelIndex& )__qt_index0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::keyboardSearch(const QString & search)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_keyboardSearch_string
(void* __this_nativeId,
 DArray search0)
{
    QString __qt_search0 = QString::fromUtf8((const char *)search0.ptr, search0.length);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyboardSearch((const QString& )__qt_search0, __do_static_call);

}

// QAbstractItemView::mouseDoubleClickEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::mouseMoveEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::mousePressEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::mouseReleaseEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1)
{
    int __qt_cursorAction0 = cursorAction0;
    QFlags<Qt::KeyboardModifier> __qt_modifiers1 = (QFlags<Qt::KeyboardModifier>) modifiers1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_moveCursor(__qt_cursorAction0, (Qt::KeyboardModifiers )__qt_modifiers1, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemView::reset()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_reset
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_reset(__do_static_call);

}

// QAbstractItemView::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::rowsAboutToBeRemoved(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsAboutToBeRemoved((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QAbstractItemView::rowsInserted(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsInserted((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QAbstractItemView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int hint1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollTo((const QModelIndex& )__qt_index0, (QAbstractItemView::ScrollHint )__qt_hint1, __do_static_call);

}

// QAbstractItemView::selectAll()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_selectAll
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_selectAll(__do_static_call);

}

// QAbstractItemView::selectedIndexes() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_selectedIndexes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QModelIndex >  __qt_return_value = __qt_this->__override_selectedIndexes(__do_static_call);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractItemView::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection
(void* __this_nativeId,
 void* selected0,
 void* deselected1)
{
    const QItemSelection&  __qt_selected0 = (const QItemSelection& ) *(QItemSelection *)selected0;
    const QItemSelection&  __qt_deselected1 = (const QItemSelection& ) *(QItemSelection *)deselected1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_selectionChanged((const QItemSelection& )__qt_selected0, (const QItemSelection& )__qt_deselected1, __do_static_call);

}

// QAbstractItemView::selectionCommand(const QModelIndex & index, const QEvent * event) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 void* event1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    const QEvent*  __qt_event1 = (const QEvent* ) event1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_selectionCommand((const QModelIndex& )__qt_index0, (const QEvent* )__qt_event1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::setModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModel((QAbstractItemModel* )__qt_model0, __do_static_call);

}

// QAbstractItemView::setRootIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setRootIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setRootIndex((const QModelIndex& )__qt_index0, __do_static_call);

}

// QAbstractItemView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setSelection_QRect_SelectionFlags
(void* __this_nativeId,
 QRect rect0,
 int command1)
{
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )__qt_command1, __do_static_call);

}

// QAbstractItemView::setSelectionModel(QItemSelectionModel * selectionModel)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel
(void* __this_nativeId,
 void* selectionModel0)
{
    QItemSelectionModel*  __qt_selectionModel0 = (QItemSelectionModel* ) selectionModel0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelectionModel((QItemSelectionModel* )__qt_selectionModel0, __do_static_call);

}

// QAbstractItemView::sizeHintForColumn(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_sizeHintForColumn_int_const
(void* __this_nativeId,
 int column0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_sizeHintForColumn((int )column0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::sizeHintForRow(int row) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_sizeHintForRow_int_const
(void* __this_nativeId,
 int row0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_sizeHintForRow((int )row0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::startDrag(QFlags<Qt::DropAction> supportedActions)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_startDrag_DropActions
(void* __this_nativeId,
 int supportedActions0)
{
    QFlags<Qt::DropAction> __qt_supportedActions0 = (QFlags<Qt::DropAction>) supportedActions0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_startDrag((Qt::DropActions )__qt_supportedActions0, __do_static_call);

}

// QAbstractItemView::timerEvent(QTimerEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* event0)
{
    QTimerEvent*  __qt_event0 = (QTimerEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_event0, __do_static_call);

}

// QAbstractItemView::updateEditorData()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_updateEditorData
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateEditorData(__do_static_call);

}

// QAbstractItemView::updateEditorGeometries()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_updateEditorGeometries
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateEditorGeometries(__do_static_call);

}

// QAbstractItemView::updateGeometries()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_updateGeometries
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateGeometries(__do_static_call);

}

// QAbstractItemView::verticalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemView_verticalOffset_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_verticalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::verticalScrollbarAction(int action)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_verticalScrollbarAction_int
(void* __this_nativeId,
 int action0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_verticalScrollbarAction((int )action0, __do_static_call);

}

// QAbstractItemView::verticalScrollbarValueChanged(int value)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_verticalScrollbarValueChanged_int
(void* __this_nativeId,
 int value0)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_verticalScrollbarValueChanged((int )value0, __do_static_call);

}

// QAbstractItemView::viewOptions() const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_viewOptions_const
(void* __this_nativeId)
{
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStyleOptionViewItem  __qt_return_value = __qt_this->__override_viewOptions(__do_static_call);

    void* __d_return_value = (void*) new QStyleOptionViewItem(__qt_return_value);

    return __d_return_value;
}

// QAbstractItemView::viewportEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemView_viewportEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_viewportEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemView::visualRect(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemView_visualRect_QModelIndex_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_visualRect((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractItemView::visualRegionForSelection(const QItemSelection & selection) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const
(void* __this_nativeId,
 void* selection0)
{
    const QItemSelection&  __qt_selection0 = (const QItemSelection& ) *(QItemSelection *)selection0;
    QAbstractItemView_QtDShell *__qt_this = (QAbstractItemView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRegion  __qt_return_value = __qt_this->__override_visualRegionForSelection((const QItemSelection& )__qt_selection0, __do_static_call);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemView_staticMetaObject() {
    return (void*)&QAbstractItemView::staticMetaObject;
}


