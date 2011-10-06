#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolumnview.h>
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

#include "QColumnView_shell.h"
#include <iostream>
#include <qcolumnview.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QColumnViewEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QColumnViewEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QColumnView_createEntity(void *nativeId, void* dId)
{
    new QColumnViewEntity((QObject*)nativeId, dId);
}

QColumnView_QtDShell::QColumnView_QtDShell(void *d_ptr, QWidget*  parent0)
    : QColumnView(parent0),
      QObjectLink(this, d_ptr)
{
}

QColumnView_QtDShell::~QColumnView_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QColumnView_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QColumnView::metaObject();
}

int QColumnView_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QColumnView::qt_metacall(_c, _id, _a);
}

int QColumnView_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QColumnView::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QColumnView_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QColumnView_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QColumnView_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QColumnView_createColumn_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* rootIndex0))
QTD_FUNC(GUI, QColumnView_createColumn_QModelIndex_dispatch)
QAbstractItemView*  QColumnView_QtDShell::createColumn(const QModelIndex&  rootIndex0)
{
    return (QAbstractItemView*) qtd_QColumnView_createColumn_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(rootIndex0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
void QColumnView_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QColumnView_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QColumnView_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QColumnView_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::dragLeaveEvent(QDragLeaveEvent*  event0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::dragMoveEvent(QDragMoveEvent*  event0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QColumnView_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QColumnView_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QColumnView_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QColumnView_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QColumnView_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QColumnView_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QColumnView_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QColumnView_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QColumnView_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* point0))
QModelIndex  QColumnView_QtDShell::indexAt(const QPoint&  point0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )point0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QColumnView_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QColumnView_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QColumnView_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QColumnView_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QColumnView_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QColumnView_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QModelIndex  QColumnView_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QColumnView_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::paintEvent(QPaintEvent*  arg__1)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QColumnView_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QColumnView_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QColumnView_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QColumnView_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QColumnView_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QColumnView_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QColumnView_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QColumnView_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QColumnView_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setModel_QAbstractItemModel_dispatch, (void *dId, void* model0))
void QColumnView_QtDShell::setModel(QAbstractItemModel*  model0)
{
    qtd_QAbstractItemView_setModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )model0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QColumnView_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
void QColumnView_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QColumnView_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QColumnView_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QColumnView_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QColumnView_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QColumnView_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QColumnView_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QColumnView_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QColumnView_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QColumnView_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QColumnView_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QColumnView_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QColumnView_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QColumnView_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QColumnView_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QColumnView_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QColumnView_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QColumnView_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QColumnView_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QColumnView_initCallBacks(VoidFunc *virts) {
    qtd_QColumnView_createColumn_QModelIndex_dispatch = (qtd_QColumnView_createColumn_QModelIndex_dispatch_t) virts[0];
}
// Functions in shell class
void QColumnView_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
void QColumnView_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QColumnView_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QColumnView_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QColumnView_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

int  QColumnView_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QColumnView_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QColumnView_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QColumnView_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

void QColumnView_QtDShell::__public_initializeColumn(QAbstractItemView*  column0) const
{
    QColumnView::initializeColumn((QAbstractItemView* )column0);
}

void QColumnView_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

void QColumnView_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QColumnView_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QColumnView_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QColumnView_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QColumnView_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QColumnView_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QColumnView_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QColumnView_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QColumnView_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QColumnView_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QColumnView_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QColumnView_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QColumnView_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QColumnView_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QColumnView_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QColumnView_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QColumnView_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QColumnView_QtDShell::__public_updatePreviewWidget(const QModelIndex&  index0)
{
    QColumnView::updatePreviewWidget((const QModelIndex& )index0);
}

void QColumnView_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QColumnView_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QColumnView_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QColumnView_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

QAbstractItemView*  QColumnView_QtDShell::__override_createColumn(const QModelIndex&  rootIndex0, bool static_call)
{
    if (static_call) {
        return QColumnView::createColumn((const QModelIndex& )rootIndex0);
    } else {
        return createColumn((const QModelIndex& )rootIndex0);
    }
}

void QColumnView_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QColumnView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QColumnView_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QColumnView_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QColumnView_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QAbstractItemView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QColumnView_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragLeaveEvent((QDragLeaveEvent* )event0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragMoveEvent((QDragMoveEvent* )event0);
    } else {
        dragMoveEvent((QDragMoveEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

bool  QColumnView_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QColumnView_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QColumnView_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QColumnView_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QColumnView_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QColumnView_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QColumnView_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QColumnView_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QColumnView_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QColumnView_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QColumnView_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QColumnView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QColumnView_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QColumnView_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QColumnView_QtDShell::__override_indexAt(const QPoint&  point0, bool static_call) const
{
    if (static_call) {
        return QColumnView::indexAt((const QPoint& )point0);
    } else {
        return indexAt((const QPoint& )point0);
    }
}

void QColumnView_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QColumnView_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QColumnView_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QColumnView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QColumnView_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QColumnView_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QColumnView_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QColumnView_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QSize  QColumnView_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QColumnView_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

QModelIndex  QColumnView_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QColumnView::moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QColumnView_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QColumnView_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QColumnView_QtDShell::__override_paintEvent(QPaintEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::paintEvent((QPaintEvent* )arg__1);
    } else {
        paintEvent((QPaintEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QAbstractItemView::reset();
    } else {
        reset();
    }
}

void QColumnView_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QColumnView::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QAbstractItemView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QColumnView_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QColumnView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QColumnView_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QColumnView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QColumnView_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QColumnView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QColumnView_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QColumnView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QColumnView_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QColumnView_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QColumnView_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QColumnView_QtDShell::__override_setModel(QAbstractItemModel*  model0, bool static_call)
{
    if (static_call) {
        QColumnView::setModel((QAbstractItemModel* )model0);
    } else {
        setModel((QAbstractItemModel* )model0);
    }
}

void QColumnView_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QColumnView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QColumnView_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        QColumnView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QColumnView_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QColumnView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QColumnView_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QColumnView_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QColumnView_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QColumnView::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QColumnView_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QColumnView_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QColumnView_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

void QColumnView_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QColumnView_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QColumnView_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QColumnView_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QColumnView_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QColumnView_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QColumnView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QColumnView_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QColumnView_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QColumnView_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QColumnView_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QColumnView_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QColumnView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QColumnView_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QColumnView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QColumnView_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QColumnView::updatePreviewWidget(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_updatePreviewWidget_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    __qt_this->__public_updatePreviewWidget((const QModelIndex& )__qt_index0);

}

// ---externC---
// QColumnView::QColumnView(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QColumnView_QColumnView_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QColumnView_QtDShell *__qt_this = new QColumnView_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QColumnView::columnWidths() const
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_columnWidths_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    QList<int >  __qt_return_value = __qt_this->columnWidths();

QList<int > &__d_return_value_tmp = (*(QList<int > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QColumnView::initializeColumn(QAbstractItemView * column) const
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_initializeColumn_QAbstractItemView_const
(void* __this_nativeId,
 void* column0)
{
    QAbstractItemView*  __qt_column0 = (QAbstractItemView* ) column0;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    __qt_this->__public_initializeColumn((QAbstractItemView* )__qt_column0);

}

// QColumnView::previewWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QColumnView_previewWidget_const
(void* __this_nativeId)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->previewWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QColumnView::resizeGripsVisible() const
QTD_EXTERN QTD_EXPORT bool qtd_QColumnView_resizeGripsVisible_const
(void* __this_nativeId)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->resizeGripsVisible();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColumnView::setColumnWidths(const QList<int > & list)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_setColumnWidths_QList
(void* __this_nativeId,
 void* list0)
{
QList<int > __qt_list0 = (*(QList<int > *)list0);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    __qt_this->setColumnWidths((const QList<int >& )__qt_list0);

}

// QColumnView::setPreviewWidget(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_setPreviewWidget_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    __qt_this->setPreviewWidget((QWidget* )__qt_widget0);

}

// QColumnView::setResizeGripsVisible(bool visible)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_setResizeGripsVisible_bool
(void* __this_nativeId,
 bool visible0)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    __qt_this->setResizeGripsVisible((bool )visible0);

}

// QColumnView::createColumn(const QModelIndex & rootIndex)
QTD_EXTERN QTD_EXPORT void* qtd_QColumnView_createColumn_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor rootIndex0)
{
    QModelIndex __qt_rootIndex0 = qtd_to_QModelIndex(rootIndex0);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QAbstractItemView*  __qt_return_value = __qt_this->__override_createColumn((const QModelIndex& )__qt_rootIndex0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QColumnView::currentChanged(const QModelIndex & current, const QModelIndex & previous)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_currentChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor previous1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_previous1 = qtd_to_QModelIndex(previous1);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_currentChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_previous1, __do_static_call);

}

// QColumnView::horizontalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QColumnView_horizontalOffset_const
(void* __this_nativeId)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_horizontalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColumnView::indexAt(const QPoint & point) const
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_indexAt_QPoint_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QPoint point0)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_indexAt((const QPoint& )point0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QColumnView::isIndexHidden(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QColumnView_isIndexHidden_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isIndexHidden((const QModelIndex& )__qt_index0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColumnView::moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_moveCursor_CursorAction_KeyboardModifiers
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int cursorAction0,
 int modifiers1)
{
    int __qt_cursorAction0 = cursorAction0;
    QFlags<Qt::KeyboardModifier> __qt_modifiers1 = (QFlags<Qt::KeyboardModifier>) modifiers1;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_moveCursor(__qt_cursorAction0, (Qt::KeyboardModifiers )__qt_modifiers1, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QColumnView::resizeEvent(QResizeEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_resizeEvent_QResizeEvent
(void* __this_nativeId,
 void* event0)
{
    QResizeEvent*  __qt_event0 = (QResizeEvent* ) event0;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_resizeEvent((QResizeEvent* )__qt_event0, __do_static_call);

}

// QColumnView::rowsInserted(const QModelIndex & parent_, int start, int end)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_rowsInserted_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int start1,
 int end2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_rowsInserted((const QModelIndex& )__qt_parent0, (int )start1, (int )end2, __do_static_call);

}

// QColumnView::scrollContentsBy(int dx, int dy)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_scrollContentsBy_int_int
(void* __this_nativeId,
 int dx0,
 int dy1)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollContentsBy((int )dx0, (int )dy1, __do_static_call);

}

// QColumnView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_scrollTo_QModelIndex_ScrollHint
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int hint1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_scrollTo((const QModelIndex& )__qt_index0, (QAbstractItemView::ScrollHint )__qt_hint1, __do_static_call);

}

// QColumnView::selectAll()
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_selectAll
(void* __this_nativeId)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_selectAll(__do_static_call);

}

// QColumnView::setModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModel((QAbstractItemModel* )__qt_model0, __do_static_call);

}

// QColumnView::setRootIndex(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_setRootIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setRootIndex((const QModelIndex& )__qt_index0, __do_static_call);

}

// QColumnView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_setSelection_QRect_SelectionFlags
(void* __this_nativeId,
 QRect rect0,
 int command1)
{
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )__qt_command1, __do_static_call);

}

// QColumnView::setSelectionModel(QItemSelectionModel * selectionModel)
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_setSelectionModel_QItemSelectionModel
(void* __this_nativeId,
 void* selectionModel0)
{
    QItemSelectionModel*  __qt_selectionModel0 = (QItemSelectionModel* ) selectionModel0;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelectionModel((QItemSelectionModel* )__qt_selectionModel0, __do_static_call);

}

// QColumnView::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QColumnView::verticalOffset() const
QTD_EXTERN QTD_EXPORT int qtd_QColumnView_verticalOffset_const
(void* __this_nativeId)
{
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_verticalOffset(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QColumnView::visualRect(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QColumnView_visualRect_QModelIndex_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_visualRect((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QColumnView::visualRegionForSelection(const QItemSelection & selection) const
QTD_EXTERN QTD_EXPORT void* qtd_QColumnView_visualRegionForSelection_QItemSelection_const
(void* __this_nativeId,
 void* selection0)
{
    const QItemSelection&  __qt_selection0 = (const QItemSelection& ) *(QItemSelection *)selection0;
    QColumnView_QtDShell *__qt_this = (QColumnView_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRegion  __qt_return_value = __qt_this->__override_visualRegionForSelection((const QItemSelection& )__qt_selection0, __do_static_call);

    void* __d_return_value = (void*) new QRegion(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QColumnView_staticMetaObject() {
    return (void*)&QColumnView::staticMetaObject;
}


