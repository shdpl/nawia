#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
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
#include <qundogroup.h>
#include <qundostack.h>
#include <qundoview.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QUndoView_shell.h"
#include <iostream>
#include <qundoview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QUndoViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QUndoViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QUndoView_createEntity(void *nativeId, void* dId)
{
    new QUndoViewEntity((QObject*)nativeId, dId);
}

QUndoView_QtDShell::QUndoView_QtDShell(void *d_ptr, QUndoGroup*  group0, QWidget*  parent1)
    : QUndoView(group0, parent1),
      QObjectLink(this, d_ptr)
{
}

QUndoView_QtDShell::QUndoView_QtDShell(void *d_ptr, QUndoStack*  stack0, QWidget*  parent1)
    : QUndoView(stack0, parent1),
      QObjectLink(this, d_ptr)
{
}

QUndoView_QtDShell::QUndoView_QtDShell(void *d_ptr, QWidget*  parent0)
    : QUndoView(parent0),
      QObjectLink(this, d_ptr)
{
}

QUndoView_QtDShell::~QUndoView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QUndoView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QUndoView::metaObject();
}

int QUndoView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QUndoView::qt_metacall(_c, _id, _a);
}

int QUndoView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QUndoView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QUndoView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QUndoView_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QUndoView_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
void QUndoView_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QUndoView_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QUndoView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QUndoView_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QUndoView_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  e0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::dragMoveEvent(QDragMoveEvent*  e0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::dropEvent(QDropEvent*  e0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QUndoView_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QUndoView_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QUndoView_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QUndoView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QUndoView_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QUndoView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QUndoView_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QUndoView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QUndoView_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QUndoView_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QUndoView_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* p0))
QModelIndex  QUndoView_QtDShell::indexAt(const QPoint&  p0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )p0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QUndoView_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QUndoView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QUndoView_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QUndoView_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QUndoView_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QUndoView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QUndoView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QUndoView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QUndoView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QUndoView_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QModelIndex  QUndoView_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QUndoView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QUndoView_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QUndoView_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QUndoView_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QUndoView_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QUndoView_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QUndoView_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QUndoView_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QUndoView_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QUndoView_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setModel_QAbstractItemModel_dispatch, (void *dId, void* model0))
void QUndoView_QtDShell::setModel(QAbstractItemModel*  model0)
{
    qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )model0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QUndoView_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
void QUndoView_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QUndoView_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QUndoView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QUndoView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QUndoView_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QUndoView_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QUndoView_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* e0))
void QUndoView_QtDShell::timerEvent(QTimerEvent*  e0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QUndoView_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QUndoView_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QUndoView_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QUndoView_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QUndoView_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QUndoView_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QUndoView_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QUndoView_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QUndoView_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QUndoView_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QUndoView_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QUndoView_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
void QUndoView_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
QSize  QUndoView_QtDShell::__public_contentsSize() const
{
    return QListView::contentsSize();
}

void QUndoView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QUndoView_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QUndoView_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QUndoView_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

int  QUndoView_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QUndoView_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QUndoView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QUndoView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QUndoView_QtDShell::__public_internalDrag(int  supportedActions0)
{
    QListView::internalDrag((Qt::DropActions )supportedActions0);
}

void QUndoView_QtDShell::__public_internalDrop(QDropEvent*  e0)
{
    QListView::internalDrop((QDropEvent* )e0);
}

QRect  QUndoView_QtDShell::__public_rectForIndex(const QModelIndex&  index0) const
{
    return QListView::rectForIndex((const QModelIndex& )index0);
}

void QUndoView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

void QUndoView_QtDShell::__public_resizeContents(int  width0, int  height1)
{
    QListView::resizeContents((int )width0, (int )height1);
}

void QUndoView_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QUndoView_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QUndoView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QUndoView_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QUndoView_QtDShell::__public_setPositionForIndex(const QPoint&  position0, const QModelIndex&  index1)
{
    QListView::setPositionForIndex((const QPoint& )position0, (const QModelIndex& )index1);
}

void QUndoView_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QUndoView_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QUndoView_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QUndoView_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QUndoView_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QUndoView_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QUndoView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QUndoView_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QUndoView_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QUndoView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QUndoView_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QUndoView_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QUndoView_QtDShell::__public_indexesMoved(const QList<QModelIndex >&  indexes0)
{
    QListView::indexesMoved((const QList<QModelIndex >& )indexes0);
}

void QUndoView_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QUndoView_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QUndoView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QUndoView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QUndoView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QListView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QUndoView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QListView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QUndoView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QUndoView_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QListView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QUndoView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QUndoView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dragLeaveEvent((QDragLeaveEvent* )e0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )e0);
    }
}

void QUndoView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dragMoveEvent((QDragMoveEvent* )e0);
    } else {
        dragMoveEvent((QDragMoveEvent* )e0);
    }
}

void QUndoView_QtDShell::__override_dropEvent(QDropEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dropEvent((QDropEvent* )e0);
    } else {
        dropEvent((QDropEvent* )e0);
    }
}

bool  QUndoView_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QUndoView_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QUndoView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QUndoView_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QListView::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QUndoView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QUndoView_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QUndoView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QUndoView_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QUndoView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QUndoView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QUndoView_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QListView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QUndoView_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QUndoView_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QUndoView_QtDShell::__override_indexAt(const QPoint&  p0, bool static_call) const
{
    if (static_call) {
        return QListView::indexAt((const QPoint& )p0);
    } else {
        return indexAt((const QPoint& )p0);
    }
}

void QUndoView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QUndoView_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QUndoView_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QListView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QUndoView_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QUndoView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QUndoView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QUndoView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QUndoView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QUndoView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QUndoView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QUndoView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QUndoView_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QUndoView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

QModelIndex  QUndoView_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QListView::moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QUndoView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QUndoView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QUndoView_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QUndoView_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QListView::reset();
    } else {
        reset();
    }
}

void QUndoView_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QUndoView_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QListView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QUndoView_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QListView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QUndoView_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QListView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QUndoView_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QListView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QUndoView_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QUndoView_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QListView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QUndoView_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QListView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QUndoView_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QUndoView_QtDShell::__override_setModel(QAbstractItemModel*  model0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setModel((QAbstractItemModel* )model0);
    } else {
        setModel((QAbstractItemModel* )model0);
    }
}

void QUndoView_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QListView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QUndoView_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        QListView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QUndoView_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QUndoView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QUndoView_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QUndoView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QUndoView_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QUndoView_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QUndoView_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QListView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

void QUndoView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QUndoView_QtDShell::__override_timerEvent(QTimerEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::timerEvent((QTimerEvent* )e0);
    } else {
        timerEvent((QTimerEvent* )e0);
    }
}

void QUndoView_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QUndoView_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QUndoView_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QListView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QUndoView_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QListView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QUndoView_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QUndoView_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QUndoView_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QListView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QUndoView_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QUndoView_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QListView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QUndoView_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QListView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QUndoView_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// ---externC---
// QUndoView::QUndoView(QUndoGroup * group, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUndoView_QUndoView_QUndoGroup_QWidget
(void *d_ptr,
 void* group0,
 void* parent1)
{
    QUndoGroup*  __qt_group0 = (QUndoGroup* ) group0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QUndoView_QtDShell *__qt_this = new QUndoView_QtDShell(d_ptr, (QUndoGroup* )__qt_group0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QUndoView::QUndoView(QUndoStack * stack, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUndoView_QUndoView_QUndoStack_QWidget
(void *d_ptr,
 void* stack0,
 void* parent1)
{
    QUndoStack*  __qt_stack0 = (QUndoStack* ) stack0;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QUndoView_QtDShell *__qt_this = new QUndoView_QtDShell(d_ptr, (QUndoStack* )__qt_stack0, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QUndoView::QUndoView(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QUndoView_QUndoView_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QUndoView_QtDShell *__qt_this = new QUndoView_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QUndoView::cleanIcon() const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoView_cleanIcon_const
(void* __this_nativeId)
{
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->cleanIcon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QUndoView::emptyLabel() const
QTD_EXTERN QTD_EXPORT void qtd_QUndoView_emptyLabel_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->emptyLabel();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QUndoView::group() const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoView_group_const
(void* __this_nativeId)
{
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    QUndoGroup*  __qt_return_value = __qt_this->group();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QUndoView::setCleanIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QUndoView_setCleanIcon_QIcon
(void* __this_nativeId,
 void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    __qt_this->setCleanIcon((const QIcon& )__qt_icon0);

}

// QUndoView::setEmptyLabel(const QString & label)
QTD_EXTERN QTD_EXPORT void qtd_QUndoView_setEmptyLabel_string
(void* __this_nativeId,
 DArray label0)
{
    QString __qt_label0 = QString::fromUtf8((const char *)label0.ptr, label0.length);
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    __qt_this->setEmptyLabel((const QString& )__qt_label0);

}

// QUndoView::setGroup(QUndoGroup * group)
QTD_EXTERN QTD_EXPORT void qtd_QUndoView_setGroup_QUndoGroup
(void* __this_nativeId,
 void* group0)
{
    QUndoGroup*  __qt_group0 = (QUndoGroup* ) group0;
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    __qt_this->setGroup((QUndoGroup* )__qt_group0);

}

// QUndoView::setStack(QUndoStack * stack)
QTD_EXTERN QTD_EXPORT void qtd_QUndoView_setStack_QUndoStack
(void* __this_nativeId,
 void* stack0)
{
    QUndoStack*  __qt_stack0 = (QUndoStack* ) stack0;
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    __qt_this->setStack((QUndoStack* )__qt_stack0);

}

// QUndoView::stack() const
QTD_EXTERN QTD_EXPORT void* qtd_QUndoView_stack_const
(void* __this_nativeId)
{
    QUndoView_QtDShell *__qt_this = (QUndoView_QtDShell *) __this_nativeId;
    QUndoStack*  __qt_return_value = __qt_this->stack();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QUndoView_staticMetaObject() {
    return (void*)&QUndoView::staticMetaObject;
}


