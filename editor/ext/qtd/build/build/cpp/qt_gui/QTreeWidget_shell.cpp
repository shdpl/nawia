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
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtreewidget.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QTreeWidget_shell.h"
#include <iostream>
#include <qtreewidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTreeWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTreeWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_createEntity(void *nativeId, void* dId)
{
    new QTreeWidgetEntity((QObject*)nativeId, dId);
}

QTreeWidget_QtDShell::QTreeWidget_QtDShell(void *d_ptr, QWidget*  parent0)
    : QTreeWidget(parent0),
      QObjectLink(this, d_ptr)
{
}

QTreeWidget_QtDShell::~QTreeWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTreeWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTreeWidget::metaObject();
}

int QTreeWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTreeWidget::qt_metacall(_c, _id, _a);
}

int QTreeWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTreeWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTreeWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QTreeWidget_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QTreeWidget_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
void QTreeWidget_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QTreeWidget_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QTreeWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QTreeWidget_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  event0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  event0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch, (void *dId, void* painter0, QRect* rect1, QModelIndexAccessor* index2))
void QTreeWidget_QtDShell::drawBranches(QPainter*  painter0, const QRect&  rect1, const QModelIndex&  index2) const
{
    qtd_QTreeView_drawBranches_QPainter_QRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QRect& )rect1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* painter0, void* options1, QModelIndexAccessor* index2))
void QTreeWidget_QtDShell::drawRow(QPainter*  painter0, const QStyleOptionViewItem&  options1, const QModelIndex&  index2) const
{
    qtd_QTreeView_drawRow_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )options1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch, (void *dId, void* parent0, int index1, void* data2, int action3))
QTD_FUNC(GUI, QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch)
bool  QTreeWidget_QtDShell::dropMimeData(QTreeWidgetItem*  parent0, int  index1, const QMimeData*  data2, Qt::DropAction  action3)
{
    return qtd_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch(QObjectLink::getLink(this)->dId, (QTreeWidgetItem* )parent0, (int )index1, (QMimeData* )data2, (Qt::DropAction )action3);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QTreeWidget_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QTreeWidget_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QTreeWidget_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTreeWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QTreeWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QTreeWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QTreeWidget_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QTreeWidget_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QTreeWidget_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* p0))
QModelIndex  QTreeWidget_QtDShell::indexAt(const QPoint&  p0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )p0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QTreeWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QTreeWidget_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QTreeWidget_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QTreeWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QTreeWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QTreeWidget_mimeData_QList_const_dispatch, (void *dId, void* items0))
QTD_FUNC(GUI, QTreeWidget_mimeData_QList_const_dispatch)
QMimeData*  QTreeWidget_QtDShell::mimeData(const QList<QTreeWidgetItem* >  items0) const
{
    return (QMimeData*) qtd_QTreeWidget_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&items0);
}

QTD_FUNC_DECL(GUI, void, QTreeWidget_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QTreeWidget_mimeTypes_const_dispatch)
QStringList  QTreeWidget_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QTreeWidget_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTreeWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QModelIndex  QTreeWidget_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QTreeWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::paintEvent(QPaintEvent*  event0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QTreeWidget_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QTreeWidget_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QTreeWidget_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QTreeWidget_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QTreeWidget_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QTreeWidget_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QTreeWidget_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QTreeWidget_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QTreeWidget_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QTreeWidget_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
void QTreeWidget_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QTreeWidget_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QTreeWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTreeWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QTreeWidget_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QTreeWidget_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QTreeWidget_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, int, QTreeWidget_supportedDropActions_const_dispatch, (void *dId))
QTD_FUNC(GUI, QTreeWidget_supportedDropActions_const_dispatch)
Qt::DropActions  QTreeWidget_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QTreeWidget_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QTreeWidget_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QTreeWidget_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QTreeWidget_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QTreeWidget_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QTreeWidget_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QTreeWidget_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QTreeWidget_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QTreeWidget_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QTreeWidget_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QTreeWidget_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QTreeWidget_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QTreeWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_initCallBacks(VoidFunc *virts) {
    qtd_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch = (qtd_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction_dispatch_t) virts[0];
    qtd_QTreeWidget_mimeData_QList_const_dispatch = (qtd_QTreeWidget_mimeData_QList_const_dispatch_t) virts[1];
    qtd_QTreeWidget_mimeTypes_const_dispatch = (qtd_QTreeWidget_mimeTypes_const_dispatch_t) virts[2];
    qtd_QTreeWidget_supportedDropActions_const_dispatch = (qtd_QTreeWidget_supportedDropActions_const_dispatch_t) virts[3];
}
// Functions in shell class
void QTreeWidget_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
void QTreeWidget_QtDShell::__public_columnCountChanged(int  oldCount0, int  newCount1)
{
    QTreeView::columnCountChanged((int )oldCount0, (int )newCount1);
}

void QTreeWidget_QtDShell::__public_columnMoved()
{
    QTreeView::columnMoved();
}

void QTreeWidget_QtDShell::__public_columnResized(int  column0, int  oldSize1, int  newSize2)
{
    QTreeView::columnResized((int )column0, (int )oldSize1, (int )newSize2);
}

void QTreeWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QTreeWidget_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QTreeWidget_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QTreeWidget_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

void QTreeWidget_QtDShell::__public_drawTree(QPainter*  painter0, const QRegion&  region1) const
{
    QTreeView::drawTree((QPainter* )painter0, (const QRegion& )region1);
}

int  QTreeWidget_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QTreeWidget_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QTreeWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QTreeWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

QModelIndex  QTreeWidget_QtDShell::__public_indexFromItem(QTreeWidgetItem*  item0, int  column1) const
{
    return QTreeWidget::indexFromItem((QTreeWidgetItem* )item0, (int )column1);
}

int  QTreeWidget_QtDShell::__public_indexRowSizeHint(const QModelIndex&  index0) const
{
    return QTreeView::indexRowSizeHint((const QModelIndex& )index0);
}

QTreeWidgetItem*  QTreeWidget_QtDShell::__public_itemFromIndex(const QModelIndex&  index0) const
{
    return QTreeWidget::itemFromIndex((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_reexpand()
{
    QTreeView::reexpand();
}

void QTreeWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

int  QTreeWidget_QtDShell::__public_rowHeight(const QModelIndex&  index0) const
{
    return QTreeView::rowHeight((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_rowsRemoved(const QModelIndex&  parent0, int  first1, int  last2)
{
    QTreeView::rowsRemoved((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QTreeWidget_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QTreeWidget_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QTreeWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTreeWidget_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QTreeWidget_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QTreeWidget_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QTreeWidget_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QTreeWidget_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QTreeWidget_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QTreeWidget_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QTreeWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QTreeWidget_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_collapsed(const QModelIndex&  index0)
{
    QTreeView::collapsed((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_currentItemChanged(QTreeWidgetItem*  current0, QTreeWidgetItem*  previous1)
{
    QTreeWidget::currentItemChanged((QTreeWidgetItem* )current0, (QTreeWidgetItem* )previous1);
}

void QTreeWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QTreeWidget_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_expanded(const QModelIndex&  index0)
{
    QTreeView::expanded((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_itemActivated(QTreeWidgetItem*  item0, int  column1)
{
    QTreeWidget::itemActivated((QTreeWidgetItem* )item0, (int )column1);
}

void QTreeWidget_QtDShell::__public_itemChanged(QTreeWidgetItem*  item0, int  column1)
{
    QTreeWidget::itemChanged((QTreeWidgetItem* )item0, (int )column1);
}

void QTreeWidget_QtDShell::__public_itemClicked(QTreeWidgetItem*  item0, int  column1)
{
    QTreeWidget::itemClicked((QTreeWidgetItem* )item0, (int )column1);
}

void QTreeWidget_QtDShell::__public_itemCollapsed(QTreeWidgetItem*  item0)
{
    QTreeWidget::itemCollapsed((QTreeWidgetItem* )item0);
}

void QTreeWidget_QtDShell::__public_itemDoubleClicked(QTreeWidgetItem*  item0, int  column1)
{
    QTreeWidget::itemDoubleClicked((QTreeWidgetItem* )item0, (int )column1);
}

void QTreeWidget_QtDShell::__public_itemEntered(QTreeWidgetItem*  item0, int  column1)
{
    QTreeWidget::itemEntered((QTreeWidgetItem* )item0, (int )column1);
}

void QTreeWidget_QtDShell::__public_itemExpanded(QTreeWidgetItem*  item0)
{
    QTreeWidget::itemExpanded((QTreeWidgetItem* )item0);
}

void QTreeWidget_QtDShell::__public_itemPressed(QTreeWidgetItem*  item0, int  column1)
{
    QTreeWidget::itemPressed((QTreeWidgetItem* )item0, (int )column1);
}

void QTreeWidget_QtDShell::__public_itemSelectionChanged()
{
    QTreeWidget::itemSelectionChanged();
}

void QTreeWidget_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QTreeWidget_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QTreeWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QTreeWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QTreeWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QTreeView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QTreeWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QTreeView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QTreeWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QTreeWidget_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QTreeView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QTreeWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragLeaveEvent((QDragLeaveEvent* )event0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::dragMoveEvent((QDragMoveEvent* )event0);
    } else {
        dragMoveEvent((QDragMoveEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_drawBranches(QPainter*  painter0, const QRect&  rect1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QTreeView::drawBranches((QPainter* )painter0, (const QRect& )rect1, (const QModelIndex& )index2);
    } else {
        drawBranches((QPainter* )painter0, (const QRect& )rect1, (const QModelIndex& )index2);
    }
}

void QTreeWidget_QtDShell::__override_drawRow(QPainter*  painter0, const QStyleOptionViewItem&  options1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QTreeView::drawRow((QPainter* )painter0, (const QStyleOptionViewItem& )options1, (const QModelIndex& )index2);
    } else {
        drawRow((QPainter* )painter0, (const QStyleOptionViewItem& )options1, (const QModelIndex& )index2);
    }
}

void QTreeWidget_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeWidget::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

bool  QTreeWidget_QtDShell::__override_dropMimeData(QTreeWidgetItem*  parent0, int  index1, const QMimeData*  data2, int  action3, bool static_call)
{
    if (static_call) {
        return QTreeWidget::dropMimeData((QTreeWidgetItem* )parent0, (int )index1, (const QMimeData* )data2, (Qt::DropAction )action3);
    } else {
        return dropMimeData((QTreeWidgetItem* )parent0, (int )index1, (const QMimeData* )data2, (Qt::DropAction )action3);
    }
}

bool  QTreeWidget_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QTreeWidget_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QTreeWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QTreeWidget_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QTreeWidget::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QTreeWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTreeWidget_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QTreeWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QTreeWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QTreeWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QTreeWidget_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QTreeView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QTreeWidget_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QTreeView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QTreeWidget_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QTreeWidget_QtDShell::__override_indexAt(const QPoint&  p0, bool static_call) const
{
    if (static_call) {
        return QTreeView::indexAt((const QPoint& )p0);
    } else {
        return indexAt((const QPoint& )p0);
    }
}

void QTreeWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QTreeWidget_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QTreeWidget_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QTreeView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QTreeWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QTreeView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QTreeWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QTreeWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QTreeWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QMimeData*  QTreeWidget_QtDShell::__override_mimeData(const QList<QTreeWidgetItem* >  items0, bool static_call) const
{
    if (static_call) {
        return QTreeWidget::mimeData((const QList<QTreeWidgetItem* > )items0);
    } else {
        return mimeData((const QList<QTreeWidgetItem* > )items0);
    }
}

QStringList  QTreeWidget_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QTreeWidget::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QSize  QTreeWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QTreeWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

QModelIndex  QTreeWidget_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QTreeView::moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QTreeWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QTreeWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QTreeWidget_QtDShell::__override_paintEvent(QPaintEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::paintEvent((QPaintEvent* )event0);
    } else {
        paintEvent((QPaintEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QTreeView::reset();
    } else {
        reset();
    }
}

void QTreeWidget_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QTreeView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QTreeWidget_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QTreeView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QTreeWidget_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QTreeView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QTreeWidget_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QTreeView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QTreeWidget_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QTreeView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QTreeWidget_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QTreeView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QTreeWidget_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QTreeView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QTreeWidget_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QTreeWidget_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QTreeView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QTreeWidget_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        QTreeView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QTreeWidget_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QTreeWidget::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QTreeWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QTreeWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QTreeWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QTreeWidget_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QTreeView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QTreeWidget_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QTreeWidget_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

int  QTreeWidget_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QTreeWidget::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QTreeWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QTreeWidget_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QTreeView::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QTreeWidget_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QTreeWidget_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QTreeWidget_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QTreeView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QTreeWidget_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QTreeView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QTreeWidget_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QTreeWidget_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QTreeWidget_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QTreeWidget_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QTreeView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QTreeWidget_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QTreeView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QTreeWidget_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QTreeView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QTreeWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QTreeWidget::currentItemChanged(QTreeWidgetItem * current, QTreeWidgetItem * previous)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_currentItemChanged_QTreeWidgetItem_QTreeWidgetItem
(void* __this_nativeId,
 void* current0,
 void* previous1)
{
    QTreeWidgetItem*  __qt_current0 = (QTreeWidgetItem* ) current0;
    QTreeWidgetItem*  __qt_previous1 = (QTreeWidgetItem* ) previous1;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentItemChanged((QTreeWidgetItem* )__qt_current0, (QTreeWidgetItem* )__qt_previous1);

}

// QTreeWidget::itemActivated(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemActivated_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemActivated((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::itemChanged(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemChanged_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemChanged((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::itemClicked(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemClicked_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemClicked((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::itemCollapsed(QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemCollapsed_QTreeWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemCollapsed((QTreeWidgetItem* )__qt_item0);

}

// QTreeWidget::itemDoubleClicked(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemDoubleClicked_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemDoubleClicked((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::itemEntered(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemEntered_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemEntered((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::itemExpanded(QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemExpanded_QTreeWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemExpanded((QTreeWidgetItem* )__qt_item0);

}

// QTreeWidget::itemPressed(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemPressed_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemPressed((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::itemSelectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_itemSelectionChanged
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemSelectionChanged();

}

// ---externC---
// QTreeWidget::QTreeWidget(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_QTreeWidget_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QTreeWidget_QtDShell *__qt_this = new QTreeWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QTreeWidget::addTopLevelItem(QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_addTopLevelItem_QTreeWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->addTopLevelItem((QTreeWidgetItem* )__qt_item0);

}

// QTreeWidget::addTopLevelItems(const QList<QTreeWidgetItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_addTopLevelItems_QList
(void* __this_nativeId,
 void* items0)
{
QList<QTreeWidgetItem* > __qt_items0 = (*(QList<QTreeWidgetItem* > *)items0);
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->addTopLevelItems((const QList<QTreeWidgetItem* >& )__qt_items0);

}

// QTreeWidget::clear()
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_clear
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QTreeWidget::closePersistentEditor(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_closePersistentEditor_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->closePersistentEditor((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::collapseItem(const QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_collapseItem_QTreeWidgetItem
(void* __this_nativeId,
 void* item0)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->collapseItem((const QTreeWidgetItem* )__qt_item0);

}

// QTreeWidget::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidget_columnCount_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::currentColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidget_currentColumn_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::currentItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_currentItem_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->currentItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::editItem(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_editItem_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->editItem((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::expandItem(const QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_expandItem_QTreeWidgetItem
(void* __this_nativeId,
 void* item0)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->expandItem((const QTreeWidgetItem* )__qt_item0);

}

// QTreeWidget::findItems(const QString & text, QFlags<Qt::MatchFlag> flags, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_findItems_string_MatchFlags_int_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray text0,
 int flags1,
 int column2)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFlags<Qt::MatchFlag> __qt_flags1 = (QFlags<Qt::MatchFlag>) flags1;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QList<QTreeWidgetItem* >  __qt_return_value = __qt_this->findItems((const QString& )__qt_text0, (Qt::MatchFlags )__qt_flags1, (int )column2);

QList<QTreeWidgetItem* > &__d_return_value_tmp = (*(QList<QTreeWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTreeWidget::headerItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_headerItem_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->headerItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::indexFromItem(QTreeWidgetItem * item, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_indexFromItem_QTreeWidgetItem_int_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_indexFromItem((QTreeWidgetItem* )__qt_item0, (int )column1);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QTreeWidget::indexOfTopLevelItem(QTreeWidgetItem * item) const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidget_indexOfTopLevelItem_QTreeWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->indexOfTopLevelItem((QTreeWidgetItem* )__qt_item0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::insertTopLevelItem(int index, QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_insertTopLevelItem_int_QTreeWidgetItem
(void* __this_nativeId,
 int index0,
 void* item1)
{
    QTreeWidgetItem*  __qt_item1 = (QTreeWidgetItem* ) item1;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->insertTopLevelItem((int )index0, (QTreeWidgetItem* )__qt_item1);

}

// QTreeWidget::insertTopLevelItems(int index, const QList<QTreeWidgetItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_insertTopLevelItems_int_QList
(void* __this_nativeId,
 int index0,
 void* items1)
{
QList<QTreeWidgetItem* > __qt_items1 = (*(QList<QTreeWidgetItem* > *)items1);
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->insertTopLevelItems((int )index0, (const QList<QTreeWidgetItem* >& )__qt_items1);

}

// QTreeWidget::invisibleRootItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_invisibleRootItem_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->invisibleRootItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::isFirstItemColumnSpanned(const QTreeWidgetItem * item) const
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidget_isFirstItemColumnSpanned_QTreeWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFirstItemColumnSpanned((const QTreeWidgetItem* )__qt_item0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::itemAbove(const QTreeWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_itemAbove_QTreeWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->itemAbove((const QTreeWidgetItem* )__qt_item0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::itemAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_itemAt_QPoint_const
(void* __this_nativeId,
 QPoint p0)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->itemAt((const QPoint& )p0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::itemAt(int x, int y) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_itemAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->itemAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::itemBelow(const QTreeWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_itemBelow_QTreeWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->itemBelow((const QTreeWidgetItem* )__qt_item0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::itemFromIndex(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_itemFromIndex_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->__public_itemFromIndex((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::itemWidget(QTreeWidgetItem * item, int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_itemWidget_QTreeWidgetItem_int_const
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->itemWidget((QTreeWidgetItem* )__qt_item0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::openPersistentEditor(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_openPersistentEditor_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->openPersistentEditor((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::removeItemWidget(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_removeItemWidget_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->removeItemWidget((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::scrollToItem(const QTreeWidgetItem * item, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_scrollToItem_QTreeWidgetItem_ScrollHint
(void* __this_nativeId,
 void* item0,
 int hint1)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->scrollToItem((const QTreeWidgetItem* )__qt_item0, (QAbstractItemView::ScrollHint )__qt_hint1);

}

// QTreeWidget::selectedItems() const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_selectedItems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QList<QTreeWidgetItem* >  __qt_return_value = __qt_this->selectedItems();

QList<QTreeWidgetItem* > &__d_return_value_tmp = (*(QList<QTreeWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTreeWidget::setColumnCount(int columns)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setColumnCount_int
(void* __this_nativeId,
 int columns0)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setColumnCount((int )columns0);

}

// QTreeWidget::setCurrentItem(QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentItem((QTreeWidgetItem* )__qt_item0);

}

// QTreeWidget::setCurrentItem(QTreeWidgetItem * item, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem_int
(void* __this_nativeId,
 void* item0,
 int column1)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentItem((QTreeWidgetItem* )__qt_item0, (int )column1);

}

// QTreeWidget::setCurrentItem(QTreeWidgetItem * item, int column, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setCurrentItem_QTreeWidgetItem_int_SelectionFlags
(void* __this_nativeId,
 void* item0,
 int column1,
 int command2)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command2 = (QFlags<QItemSelectionModel::SelectionFlag>) command2;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentItem((QTreeWidgetItem* )__qt_item0, (int )column1, (QItemSelectionModel::SelectionFlags )__qt_command2);

}

// QTreeWidget::setFirstItemColumnSpanned(const QTreeWidgetItem * item, bool span)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setFirstItemColumnSpanned_QTreeWidgetItem_bool
(void* __this_nativeId,
 void* item0,
 bool span1)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setFirstItemColumnSpanned((const QTreeWidgetItem* )__qt_item0, (bool )span1);

}

// QTreeWidget::setHeaderItem(QTreeWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setHeaderItem_QTreeWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setHeaderItem((QTreeWidgetItem* )__qt_item0);

}

// QTreeWidget::setHeaderLabel(const QString & label)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setHeaderLabel_string
(void* __this_nativeId,
 DArray label0)
{
    QString __qt_label0 = QString::fromUtf8((const char *)label0.ptr, label0.length);
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setHeaderLabel((const QString& )__qt_label0);

}

// QTreeWidget::setHeaderLabels(const QStringList & labels)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setHeaderLabels_QList
(void* __this_nativeId,
 void* labels0)
{
QStringList __qt_labels0 = (*(QStringList *)labels0);
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setHeaderLabels((const QStringList& )__qt_labels0);

}

// QTreeWidget::setItemWidget(QTreeWidgetItem * item, int column, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setItemWidget_QTreeWidgetItem_int_QWidget
(void* __this_nativeId,
 void* item0,
 int column1,
 void* widget2)
{
    QTreeWidgetItem*  __qt_item0 = (QTreeWidgetItem* ) item0;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->setItemWidget((QTreeWidgetItem* )__qt_item0, (int )column1, (QWidget* )__qt_widget2);

}

// QTreeWidget::sortColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidget_sortColumn_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::sortItems(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_sortItems_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    __qt_this->sortItems((int )column0, (Qt::SortOrder )__qt_order1);

}

// QTreeWidget::takeTopLevelItem(int index)
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_takeTopLevelItem_int
(void* __this_nativeId,
 int index0)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->takeTopLevelItem((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::topLevelItem(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_topLevelItem_int_const
(void* __this_nativeId,
 int index0)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QTreeWidgetItem*  __qt_return_value = __qt_this->topLevelItem((int )index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::topLevelItemCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidget_topLevelItemCount_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->topLevelItemCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::visualItemRect(const QTreeWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_visualItemRect_QTreeWidgetItem_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* item0)
{
    const QTreeWidgetItem*  __qt_item0 = (const QTreeWidgetItem* ) item0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->visualItemRect((const QTreeWidgetItem* )__qt_item0);

    *__d_return_value = __qt_return_value;

}

// QTreeWidget::dropEvent(QDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_dropEvent_QDropEvent
(void* __this_nativeId,
 void* event0)
{
    QDropEvent*  __qt_event0 = (QDropEvent* ) event0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_event0, __do_static_call);

}

// QTreeWidget::dropMimeData(QTreeWidgetItem * parent_, int index, const QMimeData * data, Qt::DropAction action)
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidget_dropMimeData_QTreeWidgetItem_int_QMimeData_DropAction
(void* __this_nativeId,
 void* parent0,
 int index1,
 void* data2,
 int action3)
{
    QTreeWidgetItem*  __qt_parent0 = (QTreeWidgetItem* ) parent0;
    const QMimeData*  __qt_data2 = (const QMimeData* ) data2;
    Qt::DropAction __qt_action3 = (Qt::DropAction) action3;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((QTreeWidgetItem* )__qt_parent0, (int )index1, (const QMimeData* )__qt_data2, (Qt::DropAction )__qt_action3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QTreeWidget_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::mimeData(const QList<QTreeWidgetItem * > items) const
QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_mimeData_QList_const
(void* __this_nativeId,
 void* items0)
{
QList<QTreeWidgetItem* > __qt_items0 = (*(QList<QTreeWidgetItem* > *)items0);
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QTreeWidgetItem* > )__qt_items0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTreeWidget::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTreeWidget::setSelectionModel(QItemSelectionModel * selectionModel)
QTD_EXTERN QTD_EXPORT void qtd_QTreeWidget_setSelectionModel_QItemSelectionModel
(void* __this_nativeId,
 void* selectionModel0)
{
    QItemSelectionModel*  __qt_selectionModel0 = (QItemSelectionModel* ) selectionModel0;
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSelectionModel((QItemSelectionModel* )__qt_selectionModel0, __do_static_call);

}

// QTreeWidget::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QTreeWidget_supportedDropActions_const
(void* __this_nativeId)
{
    QTreeWidget_QtDShell *__qt_this = (QTreeWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTreeWidget_staticMetaObject() {
    return (void*)&QTreeWidget::staticMetaObject;
}


