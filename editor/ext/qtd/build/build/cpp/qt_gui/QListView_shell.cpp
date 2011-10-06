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
#include <qlistview.h>
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

#include "QListView_shell.h"
#include <iostream>
#include <qlistview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QListViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QListViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QListView_createEntity(void *nativeId, void* dId)
{
    new QListViewEntity((QObject*)nativeId, dId);
}

QListView_QtDShell::QListView_QtDShell(void *d_ptr, QWidget*  parent0)
    : QListView(parent0),
      QObjectLink(this, d_ptr)
{
}

QListView_QtDShell::~QListView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QListView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QListView::metaObject();
}

int QListView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QListView::qt_metacall(_c, _id, _a);
}

int QListView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QListView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QListView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QListView_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QListView_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
void QListView_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QListView_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QListView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QListView_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QListView_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  e0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::dragMoveEvent(QDragMoveEvent*  e0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::dropEvent(QDropEvent*  e0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QListView_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QListView_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QListView_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QListView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QListView_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QListView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QListView_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QListView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QListView_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QListView_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QListView_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* p0))
QModelIndex  QListView_QtDShell::indexAt(const QPoint&  p0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )p0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QListView_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QListView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QListView_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QListView_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QListView_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QListView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QListView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QListView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QListView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QListView_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QModelIndex  QListView_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QListView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QListView_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QListView_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QListView_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QListView_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QListView_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QListView_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QListView_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QListView_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QListView_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setModel_QAbstractItemModel_dispatch, (void *dId, void* model0))
void QListView_QtDShell::setModel(QAbstractItemModel*  model0)
{
    qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )model0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QListView_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
void QListView_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QListView_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QListView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QListView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QListView_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QListView_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QListView_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* e0))
void QListView_QtDShell::timerEvent(QTimerEvent*  e0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QListView_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QListView_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QListView_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QListView_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QListView_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QListView_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QListView_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QListView_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QListView_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QListView_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QListView_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QListView_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
void QListView_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
QSize  QListView_QtDShell::__public_contentsSize() const
{
    return QListView::contentsSize();
}

void QListView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QListView_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QListView_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QListView_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

int  QListView_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QListView_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QListView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QListView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QListView_QtDShell::__public_internalDrag(int  supportedActions0)
{
    QListView::internalDrag((Qt::DropActions )supportedActions0);
}

void QListView_QtDShell::__public_internalDrop(QDropEvent*  e0)
{
    QListView::internalDrop((QDropEvent* )e0);
}

QRect  QListView_QtDShell::__public_rectForIndex(const QModelIndex&  index0) const
{
    return QListView::rectForIndex((const QModelIndex& )index0);
}

void QListView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

void QListView_QtDShell::__public_resizeContents(int  width0, int  height1)
{
    QListView::resizeContents((int )width0, (int )height1);
}

void QListView_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QListView_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QListView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QListView_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QListView_QtDShell::__public_setPositionForIndex(const QPoint&  position0, const QModelIndex&  index1)
{
    QListView::setPositionForIndex((const QPoint& )position0, (const QModelIndex& )index1);
}

void QListView_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QListView_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QListView_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QListView_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QListView_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QListView_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QListView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QListView_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QListView_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QListView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QListView_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QListView_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QListView_QtDShell::__public_indexesMoved(const QList<QModelIndex >&  indexes0)
{
    QListView::indexesMoved((const QList<QModelIndex >& )indexes0);
}

void QListView_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QListView_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QListView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QListView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QListView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QListView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QListView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QListView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QListView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QListView_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QListView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QListView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QListView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dragLeaveEvent((QDragLeaveEvent* )e0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )e0);
    }
}

void QListView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dragMoveEvent((QDragMoveEvent* )e0);
    } else {
        dragMoveEvent((QDragMoveEvent* )e0);
    }
}

void QListView_QtDShell::__override_dropEvent(QDropEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dropEvent((QDropEvent* )e0);
    } else {
        dropEvent((QDropEvent* )e0);
    }
}

bool  QListView_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QListView_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QListView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QListView_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QListView::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QListView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QListView_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QListView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QListView_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QListView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QListView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QListView_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QListView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QListView_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QListView_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QListView_QtDShell::__override_indexAt(const QPoint&  p0, bool static_call) const
{
    if (static_call) {
        return QListView::indexAt((const QPoint& )p0);
    } else {
        return indexAt((const QPoint& )p0);
    }
}

void QListView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QListView_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QListView_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QListView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QListView_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QListView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QListView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QListView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QListView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QListView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QListView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QListView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QListView_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QListView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

QModelIndex  QListView_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QListView::moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QListView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QListView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QListView_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QListView_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QListView::reset();
    } else {
        reset();
    }
}

void QListView_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QListView_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QListView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QListView_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QListView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QListView_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QListView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QListView_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QListView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QListView_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QListView_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QListView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QListView_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QListView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QListView_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QListView_QtDShell::__override_setModel(QAbstractItemModel*  model0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setModel((QAbstractItemModel* )model0);
    } else {
        setModel((QAbstractItemModel* )model0);
    }
}

void QListView_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QListView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QListView_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        QListView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QListView_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QListView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QListView_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QListView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QListView_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QListView_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QListView_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QListView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

void QListView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QListView_QtDShell::__override_timerEvent(QTimerEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::timerEvent((QTimerEvent* )e0);
    } else {
        timerEvent((QTimerEvent* )e0);
    }
}

void QListView_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QListView_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QListView_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QListView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QListView_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QListView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QListView_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QListView_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QListView_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QListView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QListView_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QListView_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QListView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QListView_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QListView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QListView_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QListView::indexesMoved(const QList<QModelIndex > & indexes)
QTD_EXTERN QTD_EXPORT void qtd_QListView_indexesMoved_QList
(void* __this_nativeId,
 void* indexes0)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->__public_indexesMoved((const QList<QModelIndex >& )__qt_indexes0);

}

// ---externC---
// QListView::QListView(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QListView_QListView_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QListView_QtDShell *__qt_this = new QListView_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QListView::batchSize() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_batchSize_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->batchSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::clearPropertyFlags()
QTD_EXTERN QTD_EXPORT void qtd_QListView_clearPropertyFlags
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->clearPropertyFlags();

}

// QListView::contentsSize() const
QTD_EXTERN QTD_EXPORT void qtd_QListView_contentsSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->__public_contentsSize();

    *__d_return_value = __qt_return_value;

}

// QListView::flow() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_flow_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->flow();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::gridSize() const
QTD_EXTERN QTD_EXPORT void qtd_QListView_gridSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->gridSize();

    *__d_return_value = __qt_return_value;

}

// QListView::internalDrag(QFlags<Qt::DropAction> supportedActions)
QTD_EXTERN QTD_EXPORT void qtd_QListView_internalDrag_DropActions
(void* __this_nativeId,
 int supportedActions0)
{
    QFlags<Qt::DropAction> __qt_supportedActions0 = (QFlags<Qt::DropAction>) supportedActions0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->__public_internalDrag((Qt::DropActions )__qt_supportedActions0);

}

// QListView::internalDrop(QDropEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_internalDrop_QDropEvent
(void* __this_nativeId,
 void* e0)
{
    QDropEvent*  __qt_e0 = (QDropEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->__public_internalDrop((QDropEvent* )__qt_e0);

}

// QListView::isRowHidden(int row) const
QTD_EXTERN QTD_EXPORT bool qtd_QListView_isRowHidden_int_const
(void* __this_nativeId,
 int row0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRowHidden((int )row0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::isSelectionRectVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QListView_isSelectionRectVisible_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSelectionRectVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::isWrapping() const
QTD_EXTERN QTD_EXPORT bool qtd_QListView_isWrapping_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isWrapping();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::layoutMode() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_layoutMode_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->layoutMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::modelColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_modelColumn_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modelColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::movement() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_movement_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->movement();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::rectForIndex(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QListView_rectForIndex_QModelIndex_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->__public_rectForIndex((const QModelIndex& )__qt_index0);

    *__d_return_value = __qt_return_value;

}

// QListView::resizeContents(int width, int height)
QTD_EXTERN QTD_EXPORT void qtd_QListView_resizeContents_int_int
(void* __this_nativeId,
 int width0,
 int height1)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->__public_resizeContents((int )width0, (int )height1);

}

// QListView::resizeMode() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_resizeMode_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->resizeMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::setBatchSize(int batchSize)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setBatchSize_int
(void* __this_nativeId,
 int batchSize0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setBatchSize((int )batchSize0);

}

// QListView::setFlow(QListView::Flow flow)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setFlow_Flow
(void* __this_nativeId,
 int flow0)
{
    QListView::Flow __qt_flow0 = (QListView::Flow) flow0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setFlow((QListView::Flow )__qt_flow0);

}

// QListView::setGridSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setGridSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setGridSize((const QSize& )size0);

}

// QListView::setLayoutMode(QListView::LayoutMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setLayoutMode_LayoutMode
(void* __this_nativeId,
 int mode0)
{
    QListView::LayoutMode __qt_mode0 = (QListView::LayoutMode) mode0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setLayoutMode((QListView::LayoutMode )__qt_mode0);

}

// QListView::setModelColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setModelColumn_int
(void* __this_nativeId,
 int column0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setModelColumn((int )column0);

}

// QListView::setMovement(QListView::Movement movement)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setMovement_Movement
(void* __this_nativeId,
 int movement0)
{
    QListView::Movement __qt_movement0 = (QListView::Movement) movement0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setMovement((QListView::Movement )__qt_movement0);

}

// QListView::setPositionForIndex(const QPoint & position, const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setPositionForIndex_QPoint_QModelIndex
(void* __this_nativeId,
 QPoint position0,
 QModelIndexAccessor index1)
{
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->__public_setPositionForIndex((const QPoint& )position0, (const QModelIndex& )__qt_index1);

}

// QListView::setResizeMode(QListView::ResizeMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setResizeMode_ResizeMode
(void* __this_nativeId,
 int mode0)
{
    QListView::ResizeMode __qt_mode0 = (QListView::ResizeMode) mode0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setResizeMode((QListView::ResizeMode )__qt_mode0);

}

// QListView::setRowHidden(int row, bool hide)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setRowHidden_int_bool
(void* __this_nativeId,
 int row0,
 bool hide1)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setRowHidden((int )row0, (bool )hide1);

}

// QListView::setSelectionRectVisible(bool show)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setSelectionRectVisible_bool
(void* __this_nativeId,
 bool show0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setSelectionRectVisible((bool )show0);

}

// QListView::setSpacing(int space)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setSpacing_int
(void* __this_nativeId,
 int space0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setSpacing((int )space0);

}

// QListView::setUniformItemSizes(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setUniformItemSizes_bool
(void* __this_nativeId,
 bool enable0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setUniformItemSizes((bool )enable0);

}

// QListView::setViewMode(QListView::ViewMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setViewMode_ViewMode
(void* __this_nativeId,
 int mode0)
{
    QListView::ViewMode __qt_mode0 = (QListView::ViewMode) mode0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setViewMode((QListView::ViewMode )__qt_mode0);

}

// QListView::setWordWrap(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setWordWrap_bool
(void* __this_nativeId,
 bool on0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setWordWrap((bool )on0);

}

// QListView::setWrapping(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setWrapping_bool
(void* __this_nativeId,
 bool enable0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    __qt_this->setWrapping((bool )enable0);

}

// QListView::spacing() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_spacing_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->spacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::uniformItemSizes() const
QTD_EXTERN QTD_EXPORT bool qtd_QListView_uniformItemSizes_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->uniformItemSizes();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::viewMode() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_viewMode_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->viewMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::wordWrap() const
QTD_EXTERN QTD_EXPORT bool qtd_QListView_wordWrap_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wordWrap();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::currentChanged(const QModelIndex & current, const QModelIndex & previous)
QTD_EXTERN QTD_EXPORT void qtd_QListView_currentChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor previous1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_previous1 = qtd_to_QModelIndex(previous1);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_currentChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_previous1, __do_static_call);

}

// QListView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void qtd_QListView_dataChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dataChanged((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1, __do_static_call);

}

// QListView::doItemsLayout()
QTD_EXTERN QTD_EXPORT void qtd_QListView_doItemsLayout
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_doItemsLayout(__do_static_call);

}

// QListView::dragLeaveEvent(QDragLeaveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_dragLeaveEvent_QDragLeaveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragLeaveEvent*  __qt_e0 = (QDragLeaveEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragLeaveEvent((QDragLeaveEvent* )__qt_e0, __do_static_call);

}

// QListView::dragMoveEvent(QDragMoveEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_dragMoveEvent_QDragMoveEvent
(void* __this_nativeId,
 void* e0)
{
    QDragMoveEvent*  __qt_e0 = (QDragMoveEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dragMoveEvent((QDragMoveEvent* )__qt_e0, __do_static_call);

}

// QListView::dropEvent(QDropEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_dropEvent_QDropEvent
(void* __this_nativeId,
 void* e0)
{
    QDropEvent*  __qt_e0 = (QDropEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_e0, __do_static_call);

}

// QListView::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QListView_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::horizontalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_horizontalOffset_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_horizontalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::indexAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void qtd_QListView_indexAt_QPoint_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint p0)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_indexAt((const QPoint& )p0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QListView::isIndexHidden(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QListView_isIndexHidden_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isIndexHidden((const QModelIndex& )__qt_index0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::mouseMoveEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_mouseMoveEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseMoveEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QListView::mouseReleaseEvent(QMouseEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_mouseReleaseEvent_QMouseEvent
(void* __this_nativeId,
 void* e0)
{
    QMouseEvent*  __qt_e0 = (QMouseEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_mouseReleaseEvent((QMouseEvent* )__qt_e0, __do_static_call);

}

// QListView::moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QListView_moveCursor_CursorAction_KeyboardModifiers
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1)
{
    int __qt_cursorAction0 = cursorAction0;
    QFlags<Qt::KeyboardModifier> __qt_modifiers1 = (QFlags<Qt::KeyboardModifier>) modifiers1;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_moveCursor(__qt_cursorAction0, (Qt::KeyboardModifiers )__qt_modifiers1, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QListView::paintEvent(QPaintEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_paintEvent_QPaintEvent
(void* __this_nativeId,
 void* e0)
{
    QPaintEvent*  __qt_e0 = (QPaintEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paintEvent((QPaintEvent* )__qt_e0, __do_static_call);

}

// QListView::reset()
QTD_EXTERN QTD_EXPORT void qtd_QListView_reset
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_reset(__do_static_call);

}

// QListView::resizeEvent(QResizeEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* e0)
{
    QResizeEvent*  __qt_e0 = (QResizeEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_e0, __do_static_call);

}

// QListView::rowsAboutToBeRemoved(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QListView_rowsAboutToBeRemoved_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsAboutToBeRemoved((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QListView::rowsInserted(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QListView_rowsInserted_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsInserted((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QListView::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QListView_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QListView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QListView_scrollTo_QModelIndex_ScrollHint
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int hint1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollTo((const QModelIndex& )__qt_index0, (QAbstractItemView::ScrollHint )__qt_hint1, __do_static_call);

}

// QListView::selectedIndexes() const
QTD_EXTERN QTD_EXPORT void qtd_QListView_selectedIndexes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QModelIndex >  __qt_return_value = __qt_this->__override_selectedIndexes(__do_static_call);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QListView::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
QTD_EXTERN QTD_EXPORT void qtd_QListView_selectionChanged_QItemSelection_QItemSelection
(void* __this_nativeId,
 void* selected0,
 void* deselected1)
{
    const QItemSelection&  __qt_selected0 = (const QItemSelection& ) *(QItemSelection *)selected0;
    const QItemSelection&  __qt_deselected1 = (const QItemSelection& ) *(QItemSelection *)deselected1;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_selectionChanged((const QItemSelection& )__qt_selected0, (const QItemSelection& )__qt_deselected1, __do_static_call);

}

// QListView::setRootIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setRootIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setRootIndex((const QModelIndex& )__qt_index0, __do_static_call);

}

// QListView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QListView_setSelection_QRect_SelectionFlags
(void* __this_nativeId,
 QRect rect0,
 int command1)
{
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )__qt_command1, __do_static_call);

}

// QListView::startDrag(QFlags<Qt::DropAction> supportedActions)
QTD_EXTERN QTD_EXPORT void qtd_QListView_startDrag_DropActions
(void* __this_nativeId,
 int supportedActions0)
{
    QFlags<Qt::DropAction> __qt_supportedActions0 = (QFlags<Qt::DropAction>) supportedActions0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_startDrag((Qt::DropActions )__qt_supportedActions0, __do_static_call);

}

// QListView::timerEvent(QTimerEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QListView_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* e0)
{
    QTimerEvent*  __qt_e0 = (QTimerEvent* ) e0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_e0, __do_static_call);

}

// QListView::updateGeometries()
QTD_EXTERN QTD_EXPORT void qtd_QListView_updateGeometries
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateGeometries(__do_static_call);

}

// QListView::verticalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QListView_verticalOffset_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_verticalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListView::viewOptions() const
QTD_EXTERN QTD_EXPORT void* qtd_QListView_viewOptions_const
(void* __this_nativeId)
{
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStyleOptionViewItem  __qt_return_value = __qt_this->__override_viewOptions(__do_static_call);

    void* __d_return_value = (void*) new QStyleOptionViewItem(__qt_return_value);

    return __d_return_value;
}

// QListView::visualRect(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QListView_visualRect_QModelIndex_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_visualRect((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QListView::visualRegionForSelection(const QItemSelection & selection) const
QTD_EXTERN QTD_EXPORT void* qtd_QListView_visualRegionForSelection_QItemSelection_const
(void* __this_nativeId,
 void* selection0)
{
    const QItemSelection&  __qt_selection0 = (const QItemSelection& ) *(QItemSelection *)selection0;
    QListView_QtDShell *__qt_this = (QListView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRegion  __qt_return_value = __qt_this->__override_visualRegionForSelection((const QItemSelection& )__qt_selection0, __do_static_call);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QListView_staticMetaObject() {
    return (void*)&QListView::staticMetaObject;
}


