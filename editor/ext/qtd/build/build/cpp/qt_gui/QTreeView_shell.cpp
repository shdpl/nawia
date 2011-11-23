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
#include <qheaderview.h>
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
#include <qtreeview.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QTreeView_shell.h"
#include <iostream>
#include <qtreeview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTreeViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTreeViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTreeView_createEntity(void *nativeId, void* dId)
{
    new QTreeViewEntity((QObject*)nativeId, dId);
}

QTreeView_QtDShell::QTreeView_QtDShell(void *d_ptr, QWidget*  parent0)
    : QTreeView(parent0),
      QObjectLink(this, d_ptr)
{
}

QTreeView_QtDShell::~QTreeView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTreeView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTreeView::metaObject();
}

int QTreeView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTreeView::qt_metacall(_c, _id, _a);
}

int QTreeView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTreeView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTreeView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QTreeView_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QTreeView_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
void QTreeView_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QTreeView_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QTreeView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QTreeView_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  event0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::dragMoveEvent(QDragMoveEvent*  event0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch, (void *dId, void* painter0, QRect* rect1, QModelIndexAccessor* index2))
QTD_FUNC(GUI, QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch)
void QTreeView_QtDShell::drawBranches(QPainter*  painter0, const QRect&  rect1, const QModelIndex&  index2) const
{
    qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* painter0, void* options1, QModelIndexAccessor* index2))
QTD_FUNC(GUI, QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch)
void QTreeView_QtDShell::drawRow(QPainter*  painter0, const QStyleOptionViewItem&  options1, const QModelIndex&  index2) const
{
    qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )options1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QTreeView_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QTreeView_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QTreeView_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTreeView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QTreeView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QTreeView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QTreeView_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QTreeView_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QTreeView_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* p0))
QModelIndex  QTreeView_QtDShell::indexAt(const QPoint&  p0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )p0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QTreeView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QTreeView_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QTreeView_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QTreeView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QTreeView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTreeView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QModelIndex  QTreeView_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QTreeView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QTreeView_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QTreeView_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QTreeView_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QTreeView_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QTreeView_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QTreeView_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QTreeView_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QTreeView_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QTreeView_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setModel_QAbstractItemModel_dispatch, (void *dId, void* model0))
void QTreeView_QtDShell::setModel(QAbstractItemModel*  model0)
{
    qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )model0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QTreeView_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
void QTreeView_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QTreeView_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QTreeView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTreeView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QTreeView_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QTreeView_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QTreeView_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QTreeView_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QTreeView_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QTreeView_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QTreeView_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QTreeView_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QTreeView_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QTreeView_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QTreeView_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QTreeView_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QTreeView_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QTreeView_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QTreeView_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTreeView_initCallBacks(VoidFunc *virts) {
    qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch = (qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch_t) virts[0];
    qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch = (qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch_t) virts[1];
}
// Functions in shell class
void QTreeView_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
void QTreeView_QtDShell::__public_columnCountChanged(int  oldCount0, int  newCount1)
{
    QTreeView::columnCountChanged((int )oldCount0, (int )newCount1);
}

void QTreeView_QtDShell::__public_columnMoved()
{
    QTreeView::columnMoved();
}

void QTreeView_QtDShell::__public_columnResized(int  column0, int  oldSize1, int  newSize2)
{
    QTreeView::columnResized((int )column0, (int )oldSize1, (int )newSize2);
}

void QTreeView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QTreeView_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QTreeView_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QTreeView_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

void QTreeView_QtDShell::__public_drawTree(QPainter*  painter0, const QRegion&  region1) const
{
    QTreeView::drawTree((QPainter* )painter0, (const QRegion& )region1);
}

int  QTreeView_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QTreeView_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QTreeView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QTreeView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

int  QTreeView_QtDShell::__public_indexRowSizeHint(const QModelIndex&  index0) const
{
    return QTreeView::indexRowSizeHint((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_reexpand()
{
    QTreeView::reexpand();
}

void QTreeView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

int  QTreeView_QtDShell::__public_rowHeight(const QModelIndex&  index0) const
{
    return QTreeView::rowHeight((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_rowsRemoved(const QModelIndex&  parent0, int  first1, int  last2)
{
    QTreeView::rowsRemoved((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QTreeView_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QTreeView_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QTreeView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTreeView_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QTreeView_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QTreeView_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QTreeView_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QTreeView_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QTreeView_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QTreeView_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QTreeView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QTreeView_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_collapsed(const QModelIndex&  index0)
{
    QTreeView::collapsed((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QTreeView_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_expanded(const QModelIndex&  index0)
{
    QTreeView::expanded((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QTreeView_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QTreeView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QTreeView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QTreeView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QTreeView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QTreeView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QTreeView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QTreeView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QTreeView_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QTreeView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QTreeView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragLeaveEvent((QDragLeaveEvent* )event0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::dragMoveEvent((QDragMoveEvent* )event0);
    } else {
        dragMoveEvent((QDragMoveEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_drawBranches(QPainter*  painter0, const QRect&  rect1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QTreeView::drawBranches((QPainter* )painter0, (const QRect& )rect1, (const QModelIndex& )index2);
    } else {
        drawBranches((QPainter* )painter0, (const QRect& )rect1, (const QModelIndex& )index2);
    }
}

void QTreeView_QtDShell::__override_drawRow(QPainter*  painter0, const QStyleOptionViewItem&  options1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QTreeView::drawRow((QPainter* )painter0, (const QStyleOptionViewItem& )options1, (const QModelIndex& )index2);
    } else {
        drawRow((QPainter* )painter0, (const QStyleOptionViewItem& )options1, (const QModelIndex& )index2);
    }
}

void QTreeView_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

bool  QTreeView_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QTreeView_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QTreeView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QTreeView_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QTreeView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTreeView_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QTreeView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QTreeView_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QTreeView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QTreeView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QTreeView_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QTreeView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QTreeView_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QTreeView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QTreeView_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QTreeView_QtDShell::__override_indexAt(const QPoint&  p0, bool static_call) const
{
    if (static_call) {
        return QTreeView::indexAt((const QPoint& )p0);
    } else {
        return indexAt((const QPoint& )p0);
    }
}

void QTreeView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QTreeView_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QTreeView_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QTreeView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QTreeView_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QTreeView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QTreeView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QTreeView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QTreeView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QTreeView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QTreeView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

QModelIndex  QTreeView_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QTreeView::moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QTreeView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QTreeView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QTreeView_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QTreeView::reset();
    } else {
        reset();
    }
}

void QTreeView_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QTreeView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QTreeView_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QTreeView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QTreeView_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QTreeView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QTreeView_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QTreeView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QTreeView_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QTreeView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QTreeView_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QTreeView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QTreeView_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QTreeView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QTreeView_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QTreeView_QtDShell::__override_setModel(QAbstractItemModel*  model0, bool static_call)
{
    if (static_call) {
        QTreeView::setModel((QAbstractItemModel* )model0);
    } else {
        setModel((QAbstractItemModel* )model0);
    }
}

void QTreeView_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QTreeView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QTreeView_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        QTreeView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QTreeView_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QTreeView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QTreeView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QTreeView_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QTreeView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QTreeView_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QTreeView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QTreeView_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QTreeView_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

void QTreeView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QTreeView_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QTreeView_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QTreeView_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QTreeView_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QTreeView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QTreeView_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QTreeView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QTreeView_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QTreeView_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QTreeView_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QTreeView_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QTreeView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QTreeView_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QTreeView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QTreeView_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QTreeView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QTreeView_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QTreeView::collapsed(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_collapsed_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_collapsed((const QModelIndex& )__qt_index0);

}

// QTreeView::expanded(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_expanded_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_expanded((const QModelIndex& )__qt_index0);

}

// ---externC---
// QTreeView::QTreeView(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeView_QTreeView_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QTreeView_QtDShell *__qt_this = new QTreeView_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QTreeView::allColumnsShowFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_allColumnsShowFocus_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->allColumnsShowFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::autoExpandDelay() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_autoExpandDelay_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->autoExpandDelay();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::collapse(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_collapse_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->collapse((const QModelIndex& )__qt_index0);

}

// QTreeView::collapseAll()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_collapseAll
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->collapseAll();

}

// QTreeView::columnAt(int x) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_columnAt_int_const
(void* __this_nativeId,
 int x0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnAt((int )x0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::columnCountChanged(int oldCount, int newCount)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_columnCountChanged_int_int
(void* __this_nativeId,
 int oldCount0,
 int newCount1)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_columnCountChanged((int )oldCount0, (int )newCount1);

}

// QTreeView::columnMoved()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_columnMoved
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_columnMoved();

}

// QTreeView::columnResized(int column, int oldSize, int newSize)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_columnResized_int_int_int
(void* __this_nativeId,
 int column0,
 int oldSize1,
 int newSize2)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_columnResized((int )column0, (int )oldSize1, (int )newSize2);

}

// QTreeView::columnViewportPosition(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_columnViewportPosition_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnViewportPosition((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::columnWidth(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_columnWidth_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnWidth((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::drawTree(QPainter * painter, const QRegion & region) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_drawTree_QPainter_QRegion_const
(void* __this_nativeId,
 void* painter0,
 void* region1)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QRegion&  __qt_region1 = (const QRegion& ) *(QRegion *)region1;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_drawTree((QPainter* )__qt_painter0, (const QRegion& )__qt_region1);

}

// QTreeView::expand(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_expand_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->expand((const QModelIndex& )__qt_index0);

}

// QTreeView::expandAll()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_expandAll
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->expandAll();

}

// QTreeView::expandToDepth(int depth)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_expandToDepth_int
(void* __this_nativeId,
 int depth0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->expandToDepth((int )depth0);

}

// QTreeView::expandsOnDoubleClick() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_expandsOnDoubleClick_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->expandsOnDoubleClick();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::header() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeView_header_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    QHeaderView*  __qt_return_value = __qt_this->header();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeView::hideColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_hideColumn_int
(void* __this_nativeId,
 int column0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->hideColumn((int )column0);

}

// QTreeView::indentation() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_indentation_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indentation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::indexAbove(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_indexAbove_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->indexAbove((const QModelIndex& )__qt_index0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QTreeView::indexBelow(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_indexBelow_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->indexBelow((const QModelIndex& )__qt_index0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QTreeView::indexRowSizeHint(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_indexRowSizeHint_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_indexRowSizeHint((const QModelIndex& )__qt_index0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::isAnimated() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isAnimated_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAnimated();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::isColumnHidden(int column) const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isColumnHidden_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isColumnHidden((int )column0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::isExpanded(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isExpanded_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isExpanded((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::isFirstColumnSpanned(int row, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isFirstColumnSpanned_int_QModelIndex_const
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFirstColumnSpanned((int )row0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::isHeaderHidden() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isHeaderHidden_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isHeaderHidden();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::isRowHidden(int row, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isRowHidden_int_QModelIndex_const
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRowHidden((int )row0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::isSortingEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isSortingEnabled_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSortingEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::itemsExpandable() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_itemsExpandable_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->itemsExpandable();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::reexpand()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_reexpand
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_reexpand();

}

// QTreeView::resizeColumnToContents(int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_resizeColumnToContents_int
(void* __this_nativeId,
 int column0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->resizeColumnToContents((int )column0);

}

// QTreeView::rootIsDecorated() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_rootIsDecorated_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rootIsDecorated();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::rowHeight(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_rowHeight_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->__public_rowHeight((const QModelIndex& )__qt_index0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::rowsRemoved(const QModelIndex & parent_, int first, int last)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_rowsRemoved_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int first1,
 int last2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->__public_rowsRemoved((const QModelIndex& )__qt_parent0, (int )first1, (int )last2);

}

// QTreeView::setAllColumnsShowFocus(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setAllColumnsShowFocus_bool
(void* __this_nativeId,
 bool enable0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setAllColumnsShowFocus((bool )enable0);

}

// QTreeView::setAnimated(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setAnimated_bool
(void* __this_nativeId,
 bool enable0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setAnimated((bool )enable0);

}

// QTreeView::setAutoExpandDelay(int delay)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setAutoExpandDelay_int
(void* __this_nativeId,
 int delay0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setAutoExpandDelay((int )delay0);

}

// QTreeView::setColumnHidden(int column, bool hide)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setColumnHidden_int_bool
(void* __this_nativeId,
 int column0,
 bool hide1)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setColumnHidden((int )column0, (bool )hide1);

}

// QTreeView::setColumnWidth(int column, int width)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setColumnWidth_int_int
(void* __this_nativeId,
 int column0,
 int width1)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setColumnWidth((int )column0, (int )width1);

}

// QTreeView::setExpanded(const QModelIndex & index, bool expand)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setExpanded_QModelIndex_bool
(void* __this_nativeId,
 QModelIndexAccessor index0,
 bool expand1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setExpanded((const QModelIndex& )__qt_index0, (bool )expand1);

}

// QTreeView::setExpandsOnDoubleClick(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setExpandsOnDoubleClick_bool
(void* __this_nativeId,
 bool enable0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setExpandsOnDoubleClick((bool )enable0);

}

// QTreeView::setFirstColumnSpanned(int row, const QModelIndex & parent_, bool span)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setFirstColumnSpanned_int_QModelIndex_bool
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1,
 bool span2)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setFirstColumnSpanned((int )row0, (const QModelIndex& )__qt_parent1, (bool )span2);

}

// QTreeView::setHeader(QHeaderView * header)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setHeader_QHeaderView
(void* __this_nativeId,
 void* header0)
{
    QHeaderView*  __qt_header0 = (QHeaderView* ) header0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setHeader((QHeaderView* )__qt_header0);

}

// QTreeView::setHeaderHidden(bool hide)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setHeaderHidden_bool
(void* __this_nativeId,
 bool hide0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setHeaderHidden((bool )hide0);

}

// QTreeView::setIndentation(int i)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setIndentation_int
(void* __this_nativeId,
 int i0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setIndentation((int )i0);

}

// QTreeView::setItemsExpandable(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setItemsExpandable_bool
(void* __this_nativeId,
 bool enable0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setItemsExpandable((bool )enable0);

}

// QTreeView::setRootIsDecorated(bool show)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setRootIsDecorated_bool
(void* __this_nativeId,
 bool show0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setRootIsDecorated((bool )show0);

}

// QTreeView::setRowHidden(int row, const QModelIndex & parent_, bool hide)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setRowHidden_int_QModelIndex_bool
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1,
 bool hide2)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setRowHidden((int )row0, (const QModelIndex& )__qt_parent1, (bool )hide2);

}

// QTreeView::setSortingEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setSortingEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setSortingEnabled((bool )enable0);

}

// QTreeView::setUniformRowHeights(bool uniform)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setUniformRowHeights_bool
(void* __this_nativeId,
 bool uniform0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setUniformRowHeights((bool )uniform0);

}

// QTreeView::setWordWrap(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setWordWrap_bool
(void* __this_nativeId,
 bool on0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->setWordWrap((bool )on0);

}

// QTreeView::showColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_showColumn_int
(void* __this_nativeId,
 int column0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->showColumn((int )column0);

}

// QTreeView::sortByColumn(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_sortByColumn_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    __qt_this->sortByColumn((int )column0, (Qt::SortOrder )__qt_order1);

}

// QTreeView::uniformRowHeights() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_uniformRowHeights_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->uniformRowHeights();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::wordWrap() const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_wordWrap_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wordWrap();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::currentChanged(const QModelIndex & current, const QModelIndex & previous)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_currentChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor previous1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_previous1 = qtd_to_QModelIndex(previous1);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_currentChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_previous1, __do_static_call);

}

// QTreeView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_dataChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dataChanged((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1, __do_static_call);

}

// QTreeView::doItemsLayout()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_doItemsLayout
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_doItemsLayout(__do_static_call);

}

// QTreeView::dragMoveEvent(QDragMoveEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* event0)
{
    QDragMoveEvent*  __qt_event0 = (QDragMoveEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_event0, __do_static_call);

}

// QTreeView::drawBranches(QPainter * painter, const QRect & rect, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const
(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 QModelIndexAccessor index2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawBranches((QPainter* )__qt_painter0, (const QRect& )rect1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QTreeView::drawRow(QPainter * painter, const QStyleOptionViewItem & options, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* painter0,
 void* options1,
 QModelIndexAccessor index2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_options1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)options1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_drawRow((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_options1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QTreeView::horizontalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_horizontalOffset_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_horizontalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::horizontalScrollbarAction(int action)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_horizontalScrollbarAction_int
(void* __this_nativeId,
 int action0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_horizontalScrollbarAction((int )action0, __do_static_call);

}

// QTreeView::indexAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_indexAt_QPoint_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint p0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_indexAt((const QPoint& )p0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QTreeView::isIndexHidden(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_isIndexHidden_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isIndexHidden((const QModelIndex& )__qt_index0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::keyPressEvent(QKeyEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_keyPressEvent_QKeyEvent
(void* __this_nativeId,
 void* event0)
{
    QKeyEvent*  __qt_event0 = (QKeyEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyPressEvent((QKeyEvent* )__qt_event0, __do_static_call);

}

// QTreeView::keyboardSearch(const QString & search)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_keyboardSearch_string
(void* __this_nativeId,
 DArray search0)
{
    QString __qt_search0 = QString::fromUtf8((const char *)search0.ptr, search0.length);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_keyboardSearch((const QString& )__qt_search0, __do_static_call);

}

// QTreeView::mouseDoubleClickEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_mouseDoubleClickEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseDoubleClickEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QTreeView::mouseMoveEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QTreeView::mousePressEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_mousePressEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mousePressEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QTreeView::mouseReleaseEvent(QMouseEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* event0)
{
    QMouseEvent*  __qt_event0 = (QMouseEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_event0, __do_static_call);

}

// QTreeView::moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_moveCursor_CursorAction_KeyboardModifiers
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1)
{
    int __qt_cursorAction0 = cursorAction0;
    QFlags<Qt::KeyboardModifier> __qt_modifiers1 = (QFlags<Qt::KeyboardModifier>) modifiers1;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_moveCursor(__qt_cursorAction0, (Qt::KeyboardModifiers )__qt_modifiers1, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QTreeView::paintEvent(QPaintEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* event0)
{
    QPaintEvent*  __qt_event0 = (QPaintEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_event0, __do_static_call);

}

// QTreeView::reset()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_reset
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_reset(__do_static_call);

}

// QTreeView::rowsAboutToBeRemoved(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_rowsAboutToBeRemoved_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsAboutToBeRemoved((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QTreeView::rowsInserted(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_rowsInserted_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsInserted((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QTreeView::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QTreeView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_scrollTo_QModelIndex_ScrollHint
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int hint1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollTo((const QModelIndex& )__qt_index0, (QAbstractItemView::ScrollHint )__qt_hint1, __do_static_call);

}

// QTreeView::selectAll()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_selectAll
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_selectAll(__do_static_call);

}

// QTreeView::selectedIndexes() const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_selectedIndexes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QModelIndex >  __qt_return_value = __qt_this->__override_selectedIndexes(__do_static_call);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTreeView::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_selectionChanged_QItemSelection_QItemSelection
(void* __this_nativeId,
 void* selected0,
 void* deselected1)
{
    const QItemSelection&  __qt_selected0 = (const QItemSelection& ) *(QItemSelection *)selected0;
    const QItemSelection&  __qt_deselected1 = (const QItemSelection& ) *(QItemSelection *)deselected1;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_selectionChanged((const QItemSelection& )__qt_selected0, (const QItemSelection& )__qt_deselected1, __do_static_call);

}

// QTreeView::setModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModel((QAbstractItemModel* )__qt_model0, __do_static_call);

}

// QTreeView::setRootIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setRootIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setRootIndex((const QModelIndex& )__qt_index0, __do_static_call);

}

// QTreeView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setSelection_QRect_SelectionFlags
(void* __this_nativeId,
 QRect rect0,
 int command1)
{
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )__qt_command1, __do_static_call);

}

// QTreeView::setSelectionModel(QItemSelectionModel * selectionModel)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_setSelectionModel_QItemSelectionModel
(void* __this_nativeId,
 void* selectionModel0)
{
    QItemSelectionModel*  __qt_selectionModel0 = (QItemSelectionModel* ) selectionModel0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelectionModel((QItemSelectionModel* )__qt_selectionModel0, __do_static_call);

}

// QTreeView::sizeHintForColumn(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_sizeHintForColumn_int_const
(void* __this_nativeId,
 int column0)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_sizeHintForColumn((int )column0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::timerEvent(QTimerEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* event0)
{
    QTimerEvent*  __qt_event0 = (QTimerEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_event0, __do_static_call);

}

// QTreeView::updateGeometries()
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_updateGeometries
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateGeometries(__do_static_call);

}

// QTreeView::verticalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeView_verticalOffset_const
(void* __this_nativeId)
{
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_verticalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::viewportEvent(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QTreeView_viewportEvent_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_viewportEvent((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeView::visualRect(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeView_visualRect_QModelIndex_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_visualRect((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QTreeView::visualRegionForSelection(const QItemSelection & selection) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeView_visualRegionForSelection_QItemSelection_const
(void* __this_nativeId,
 void* selection0)
{
    const QItemSelection&  __qt_selection0 = (const QItemSelection& ) *(QItemSelection *)selection0;
    QTreeView_QtDShell *__qt_this = (QTreeView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRegion  __qt_return_value = __qt_this->__override_visualRegionForSelection((const QItemSelection& )__qt_selection0, __do_static_call);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTreeView_staticMetaObject() {
    return (void*)&QTreeView::staticMetaObject;
}


