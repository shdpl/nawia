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
#include <qtablewidget.h>
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QTableWidget_shell.h"
#include <iostream>
#include <qtablewidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QTableWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTableWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_createEntity(void *nativeId, void* dId)
{
    new QTableWidgetEntity((QObject*)nativeId, dId);
}

QTableWidget_QtDShell::QTableWidget_QtDShell(void *d_ptr, QWidget*  parent0)
    : QTableWidget(parent0),
      QObjectLink(this, d_ptr)
{
}

QTableWidget_QtDShell::QTableWidget_QtDShell(void *d_ptr, int  rows0, int  columns1, QWidget*  parent2)
    : QTableWidget(rows0, columns1, parent2),
      QObjectLink(this, d_ptr)
{
}

QTableWidget_QtDShell::~QTableWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTableWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTableWidget::metaObject();
}

int QTableWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTableWidget::qt_metacall(_c, _id, _a);
}

int QTableWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTableWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QTableWidget_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QTableWidget_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
void QTableWidget_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QTableWidget_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QTableWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QTableWidget_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  event0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  event0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch, (void *dId, int row0, int column1, void* data2, int action3))
QTD_FUNC(GUI, QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch)
bool  QTableWidget_QtDShell::dropMimeData(int  row0, int  column1, const QMimeData*  data2, Qt::DropAction  action3)
{
    return qtd_QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )column1, (QMimeData* )data2, (Qt::DropAction )action3);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QTableWidget_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QTableWidget_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QTableWidget_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTableWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QTableWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QTableWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QTableWidget_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QTableWidget_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QTableWidget_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* p0))
QModelIndex  QTableWidget_QtDShell::indexAt(const QPoint&  p0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )p0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QTableWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QTableWidget_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QTableWidget_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QTableWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QTableWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QTableWidget_mimeData_QList_const_dispatch, (void *dId, void* items0))
QTD_FUNC(GUI, QTableWidget_mimeData_QList_const_dispatch)
QMimeData*  QTableWidget_QtDShell::mimeData(const QList<QTableWidgetItem* >  items0) const
{
    return (QMimeData*) qtd_QTableWidget_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&items0);
}

QTD_FUNC_DECL(GUI, void, QTableWidget_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QTableWidget_mimeTypes_const_dispatch)
QStringList  QTableWidget_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QTableWidget_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTableWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::mouseMoveEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QModelIndex  QTableWidget_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QTableWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QTableWidget_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QTableWidget_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::resizeEvent(QResizeEvent*  event0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QTableWidget_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QTableWidget_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QTableWidget_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QTableWidget_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QTableWidget_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QTableWidget_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QTableWidget_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QTableWidget_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QTableWidget_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
void QTableWidget_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QTableWidget_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QTableWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QTableWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QTableWidget_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QTableWidget_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QTableWidget_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, int, QTableWidget_supportedDropActions_const_dispatch, (void *dId))
QTD_FUNC(GUI, QTableWidget_supportedDropActions_const_dispatch)
Qt::DropActions  QTableWidget_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QTableWidget_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QTableWidget_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QTableWidget_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QTableWidget_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QTableWidget_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QTableWidget_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QTableWidget_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QTableWidget_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QTableWidget_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QTableWidget_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QTableWidget_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QTableWidget_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QTableWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_initCallBacks(VoidFunc *virts) {
    qtd_QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch = (qtd_QTableWidget_dropMimeData_int_int_QMimeData_DropAction_dispatch_t) virts[0];
    qtd_QTableWidget_mimeData_QList_const_dispatch = (qtd_QTableWidget_mimeData_QList_const_dispatch_t) virts[1];
    qtd_QTableWidget_mimeTypes_const_dispatch = (qtd_QTableWidget_mimeTypes_const_dispatch_t) virts[2];
    qtd_QTableWidget_supportedDropActions_const_dispatch = (qtd_QTableWidget_supportedDropActions_const_dispatch_t) virts[3];
}
// Functions in shell class
void QTableWidget_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
void QTableWidget_QtDShell::__public_columnCountChanged(int  oldCount0, int  newCount1)
{
    QTableView::columnCountChanged((int )oldCount0, (int )newCount1);
}

void QTableWidget_QtDShell::__public_columnMoved(int  column0, int  oldIndex1, int  newIndex2)
{
    QTableView::columnMoved((int )column0, (int )oldIndex1, (int )newIndex2);
}

void QTableWidget_QtDShell::__public_columnResized(int  column0, int  oldWidth1, int  newWidth2)
{
    QTableView::columnResized((int )column0, (int )oldWidth1, (int )newWidth2);
}

void QTableWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QTableWidget_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QTableWidget_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QTableWidget_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

int  QTableWidget_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QTableWidget_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QTableWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QTableWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

QModelIndex  QTableWidget_QtDShell::__public_indexFromItem(QTableWidgetItem*  item0) const
{
    return QTableWidget::indexFromItem((QTableWidgetItem* )item0);
}

QTableWidgetItem*  QTableWidget_QtDShell::__public_itemFromIndex(const QModelIndex&  index0) const
{
    return QTableWidget::itemFromIndex((const QModelIndex& )index0);
}

QList<QTableWidgetItem* >  QTableWidget_QtDShell::__public_items(const QMimeData*  data0) const
{
    return QTableWidget::items((const QMimeData* )data0);
}

void QTableWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

void QTableWidget_QtDShell::__public_rowCountChanged(int  oldCount0, int  newCount1)
{
    QTableView::rowCountChanged((int )oldCount0, (int )newCount1);
}

void QTableWidget_QtDShell::__public_rowMoved(int  row0, int  oldIndex1, int  newIndex2)
{
    QTableView::rowMoved((int )row0, (int )oldIndex1, (int )newIndex2);
}

void QTableWidget_QtDShell::__public_rowResized(int  row0, int  oldHeight1, int  newHeight2)
{
    QTableView::rowResized((int )row0, (int )oldHeight1, (int )newHeight2);
}

void QTableWidget_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QTableWidget_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QTableWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTableWidget_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QTableWidget_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QTableWidget_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QTableWidget_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QTableWidget_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QTableWidget_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QTableWidget_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QTableWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QTableWidget_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QTableWidget_QtDShell::__public_cellActivated(int  row0, int  column1)
{
    QTableWidget::cellActivated((int )row0, (int )column1);
}

void QTableWidget_QtDShell::__public_cellChanged(int  row0, int  column1)
{
    QTableWidget::cellChanged((int )row0, (int )column1);
}

void QTableWidget_QtDShell::__public_cellClicked(int  row0, int  column1)
{
    QTableWidget::cellClicked((int )row0, (int )column1);
}

void QTableWidget_QtDShell::__public_cellDoubleClicked(int  row0, int  column1)
{
    QTableWidget::cellDoubleClicked((int )row0, (int )column1);
}

void QTableWidget_QtDShell::__public_cellEntered(int  row0, int  column1)
{
    QTableWidget::cellEntered((int )row0, (int )column1);
}

void QTableWidget_QtDShell::__public_cellPressed(int  row0, int  column1)
{
    QTableWidget::cellPressed((int )row0, (int )column1);
}

void QTableWidget_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QTableWidget_QtDShell::__public_currentCellChanged(int  currentRow0, int  currentColumn1, int  previousRow2, int  previousColumn3)
{
    QTableWidget::currentCellChanged((int )currentRow0, (int )currentColumn1, (int )previousRow2, (int )previousColumn3);
}

void QTableWidget_QtDShell::__public_currentItemChanged(QTableWidgetItem*  current0, QTableWidgetItem*  previous1)
{
    QTableWidget::currentItemChanged((QTableWidgetItem* )current0, (QTableWidgetItem* )previous1);
}

void QTableWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QTableWidget_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QTableWidget_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QTableWidget_QtDShell::__public_itemActivated(QTableWidgetItem*  item0)
{
    QTableWidget::itemActivated((QTableWidgetItem* )item0);
}

void QTableWidget_QtDShell::__public_itemChanged(QTableWidgetItem*  item0)
{
    QTableWidget::itemChanged((QTableWidgetItem* )item0);
}

void QTableWidget_QtDShell::__public_itemClicked(QTableWidgetItem*  item0)
{
    QTableWidget::itemClicked((QTableWidgetItem* )item0);
}

void QTableWidget_QtDShell::__public_itemDoubleClicked(QTableWidgetItem*  item0)
{
    QTableWidget::itemDoubleClicked((QTableWidgetItem* )item0);
}

void QTableWidget_QtDShell::__public_itemEntered(QTableWidgetItem*  item0)
{
    QTableWidget::itemEntered((QTableWidgetItem* )item0);
}

void QTableWidget_QtDShell::__public_itemPressed(QTableWidgetItem*  item0)
{
    QTableWidget::itemPressed((QTableWidgetItem* )item0);
}

void QTableWidget_QtDShell::__public_itemSelectionChanged()
{
    QTableWidget::itemSelectionChanged();
}

void QTableWidget_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QTableWidget_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QTableWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QTableWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QTableWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QTableView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QTableWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QTableWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QTableWidget_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QAbstractItemView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QTableWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragLeaveEvent((QDragLeaveEvent* )event0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragMoveEvent((QDragMoveEvent* )event0);
    } else {
        dragMoveEvent((QDragMoveEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QTableWidget::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

bool  QTableWidget_QtDShell::__override_dropMimeData(int  row0, int  column1, const QMimeData*  data2, int  action3, bool static_call)
{
    if (static_call) {
        return QTableWidget::dropMimeData((int )row0, (int )column1, (const QMimeData* )data2, (Qt::DropAction )action3);
    } else {
        return dropMimeData((int )row0, (int )column1, (const QMimeData* )data2, (Qt::DropAction )action3);
    }
}

bool  QTableWidget_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QTableWidget_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QTableWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QTableWidget_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QTableWidget::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QTableWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTableWidget_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QTableWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QTableWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QTableWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QTableWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QTableWidget_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QTableView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QTableWidget_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QTableView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QTableWidget_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QTableWidget_QtDShell::__override_indexAt(const QPoint&  p0, bool static_call) const
{
    if (static_call) {
        return QTableView::indexAt((const QPoint& )p0);
    } else {
        return indexAt((const QPoint& )p0);
    }
}

void QTableWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QTableWidget_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QTableWidget_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QTableView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QTableWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QTableWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QTableWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QTableWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QMimeData*  QTableWidget_QtDShell::__override_mimeData(const QList<QTableWidgetItem* >  items0, bool static_call) const
{
    if (static_call) {
        return QTableWidget::mimeData((const QList<QTableWidgetItem* > )items0);
    } else {
        return mimeData((const QList<QTableWidgetItem* > )items0);
    }
}

QStringList  QTableWidget_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QTableWidget::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QSize  QTableWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QTableWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseMoveEvent((QMouseEvent* )event0);
    } else {
        mouseMoveEvent((QMouseEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseReleaseEvent((QMouseEvent* )event0);
    } else {
        mouseReleaseEvent((QMouseEvent* )event0);
    }
}

QModelIndex  QTableWidget_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QTableView::moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QTableWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QTableWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QTableWidget_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QTableView::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QTableWidget_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QAbstractItemView::reset();
    } else {
        reset();
    }
}

void QTableWidget_QtDShell::__override_resizeEvent(QResizeEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::resizeEvent((QResizeEvent* )event0);
    } else {
        resizeEvent((QResizeEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QAbstractItemView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QTableWidget_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QAbstractItemView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QTableWidget_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QTableView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QTableWidget_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QTableView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QTableWidget_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QTableWidget_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QTableView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QTableWidget_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QTableView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QTableWidget_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QTableWidget_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QTableView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QTableWidget_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        QTableView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QTableWidget_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QTableView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QTableWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QTableWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QTableWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QTableWidget_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QTableView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QTableWidget_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QTableView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QTableWidget_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

int  QTableWidget_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QTableWidget::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QTableWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QTableWidget_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QTableView::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

void QTableWidget_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QTableWidget_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QTableWidget_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QTableView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QTableWidget_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QTableView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QTableWidget_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QTableView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QTableWidget_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QTableWidget_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QTableView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QTableWidget_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QTableWidget_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QTableView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QTableWidget_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QTableView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QTableWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QTableWidget::cellActivated(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_cellActivated_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_cellActivated((int )row0, (int )column1);

}

// QTableWidget::cellChanged(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_cellChanged_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_cellChanged((int )row0, (int )column1);

}

// QTableWidget::cellClicked(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_cellClicked_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_cellClicked((int )row0, (int )column1);

}

// QTableWidget::cellDoubleClicked(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_cellDoubleClicked_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_cellDoubleClicked((int )row0, (int )column1);

}

// QTableWidget::cellEntered(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_cellEntered_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_cellEntered((int )row0, (int )column1);

}

// QTableWidget::cellPressed(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_cellPressed_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_cellPressed((int )row0, (int )column1);

}

// QTableWidget::currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_currentCellChanged_int_int_int_int
(void* __this_nativeId,
 int currentRow0,
 int currentColumn1,
 int previousRow2,
 int previousColumn3)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentCellChanged((int )currentRow0, (int )currentColumn1, (int )previousRow2, (int )previousColumn3);

}

// QTableWidget::currentItemChanged(QTableWidgetItem * current, QTableWidgetItem * previous)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_currentItemChanged_QTableWidgetItem_QTableWidgetItem
(void* __this_nativeId,
 void* current0,
 void* previous1)
{
    QTableWidgetItem*  __qt_current0 = (QTableWidgetItem* ) current0;
    QTableWidgetItem*  __qt_previous1 = (QTableWidgetItem* ) previous1;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentItemChanged((QTableWidgetItem* )__qt_current0, (QTableWidgetItem* )__qt_previous1);

}

// QTableWidget::itemActivated(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_itemActivated_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemActivated((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::itemChanged(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_itemChanged_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemChanged((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::itemClicked(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_itemClicked_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemClicked((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::itemDoubleClicked(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_itemDoubleClicked_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemDoubleClicked((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::itemEntered(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_itemEntered_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemEntered((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::itemPressed(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_itemPressed_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemPressed((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::itemSelectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_itemSelectionChanged
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemSelectionChanged();

}

// ---externC---
// QTableWidget::QTableWidget(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_QTableWidget_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QTableWidget_QtDShell *__qt_this = new QTableWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QTableWidget::QTableWidget(int rows, int columns, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_QTableWidget_int_int_QWidget
(void *d_ptr,
 int rows0,
 int columns1,
 void* parent2)
{
    QWidget*  __qt_parent2 = (QWidget* ) parent2;
    QTableWidget_QtDShell *__qt_this = new QTableWidget_QtDShell(d_ptr, (int )rows0, (int )columns1, (QWidget* )__qt_parent2);
    return (void *) __qt_this;

}

// QTableWidget::cellWidget(int row, int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_cellWidget_int_int_const
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->cellWidget((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::clear()
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_clear
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QTableWidget::clearContents()
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_clearContents
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->clearContents();

}

// QTableWidget::closePersistentEditor(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_closePersistentEditor_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->closePersistentEditor((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::column(const QTableWidgetItem * item) const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_column_QTableWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    const QTableWidgetItem*  __qt_item0 = (const QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->column((const QTableWidgetItem* )__qt_item0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_columnCount_const
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::currentColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_currentColumn_const
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::currentItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_currentItem_const
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->currentItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::currentRow() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_currentRow_const
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentRow();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::editItem(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_editItem_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->editItem((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::findItems(const QString & text, QFlags<Qt::MatchFlag> flags) const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_findItems_string_MatchFlags_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray text0,
 int flags1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFlags<Qt::MatchFlag> __qt_flags1 = (QFlags<Qt::MatchFlag>) flags1;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QList<QTableWidgetItem* >  __qt_return_value = __qt_this->findItems((const QString& )__qt_text0, (Qt::MatchFlags )__qt_flags1);

QList<QTableWidgetItem* > &__d_return_value_tmp = (*(QList<QTableWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTableWidget::horizontalHeaderItem(int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_horizontalHeaderItem_int_const
(void* __this_nativeId,
 int column0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->horizontalHeaderItem((int )column0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::indexFromItem(QTableWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_indexFromItem_QTableWidgetItem_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_indexFromItem((QTableWidgetItem* )__qt_item0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QTableWidget::insertColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_insertColumn_int
(void* __this_nativeId,
 int column0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->insertColumn((int )column0);

}

// QTableWidget::insertRow(int row)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_insertRow_int
(void* __this_nativeId,
 int row0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0);

}

// QTableWidget::item(int row, int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_item_int_int_const
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->item((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::itemAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_itemAt_QPoint_const
(void* __this_nativeId,
 QPoint p0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->itemAt((const QPoint& )p0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::itemAt(int x, int y) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_itemAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->itemAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::itemFromIndex(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_itemFromIndex_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->__public_itemFromIndex((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::itemPrototype() const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_itemPrototype_const
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    const QTableWidgetItem*  __qt_return_value = __qt_this->itemPrototype();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::items(const QMimeData * data) const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_items_QMimeData_const
(void* __this_nativeId,
 void* __d_return_value,
 void* data0)
{
    const QMimeData*  __qt_data0 = (const QMimeData* ) data0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QList<QTableWidgetItem* >  __qt_return_value = __qt_this->__public_items((const QMimeData* )__qt_data0);

QList<QTableWidgetItem* > &__d_return_value_tmp = (*(QList<QTableWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTableWidget::openPersistentEditor(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_openPersistentEditor_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->openPersistentEditor((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::removeCellWidget(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_removeCellWidget_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->removeCellWidget((int )row0, (int )column1);

}

// QTableWidget::removeColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_removeColumn_int
(void* __this_nativeId,
 int column0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->removeColumn((int )column0);

}

// QTableWidget::removeRow(int row)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_removeRow_int
(void* __this_nativeId,
 int row0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->removeRow((int )row0);

}

// QTableWidget::row(const QTableWidgetItem * item) const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_row_QTableWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    const QTableWidgetItem*  __qt_item0 = (const QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->row((const QTableWidgetItem* )__qt_item0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::rowCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_rowCount_const
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::scrollToItem(const QTableWidgetItem * item, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_scrollToItem_QTableWidgetItem_ScrollHint
(void* __this_nativeId,
 void* item0,
 int hint1)
{
    const QTableWidgetItem*  __qt_item0 = (const QTableWidgetItem* ) item0;
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->scrollToItem((const QTableWidgetItem* )__qt_item0, (QAbstractItemView::ScrollHint )__qt_hint1);

}

// QTableWidget::selectedItems()
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_selectedItems
(void* __this_nativeId,
 void* __d_return_value)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QList<QTableWidgetItem* >  __qt_return_value = __qt_this->selectedItems();

QList<QTableWidgetItem* > &__d_return_value_tmp = (*(QList<QTableWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTableWidget::selectedRanges() const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_selectedRanges_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QList<QTableWidgetSelectionRange >  __qt_return_value = __qt_this->selectedRanges();

QList<QTableWidgetSelectionRange > &__d_return_value_tmp = (*(QList<QTableWidgetSelectionRange > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTableWidget::setCellWidget(int row, int column, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setCellWidget_int_int_QWidget
(void* __this_nativeId,
 int row0,
 int column1,
 void* widget2)
{
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setCellWidget((int )row0, (int )column1, (QWidget* )__qt_widget2);

}

// QTableWidget::setColumnCount(int columns)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setColumnCount_int
(void* __this_nativeId,
 int columns0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setColumnCount((int )columns0);

}

// QTableWidget::setCurrentCell(int row, int column)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setCurrentCell_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentCell((int )row0, (int )column1);

}

// QTableWidget::setCurrentCell(int row, int column, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setCurrentCell_int_int_SelectionFlags
(void* __this_nativeId,
 int row0,
 int column1,
 int command2)
{
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command2 = (QFlags<QItemSelectionModel::SelectionFlag>) command2;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentCell((int )row0, (int )column1, (QItemSelectionModel::SelectionFlags )__qt_command2);

}

// QTableWidget::setCurrentItem(QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setCurrentItem_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentItem((QTableWidgetItem* )__qt_item0);

}

// QTableWidget::setCurrentItem(QTableWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setCurrentItem_QTableWidgetItem_SelectionFlags
(void* __this_nativeId,
 void* item0,
 int command1)
{
    QTableWidgetItem*  __qt_item0 = (QTableWidgetItem* ) item0;
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentItem((QTableWidgetItem* )__qt_item0, (QItemSelectionModel::SelectionFlags )__qt_command1);

}

// QTableWidget::setHorizontalHeaderItem(int column, QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setHorizontalHeaderItem_int_QTableWidgetItem
(void* __this_nativeId,
 int column0,
 void* item1)
{
    QTableWidgetItem*  __qt_item1 = (QTableWidgetItem* ) item1;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalHeaderItem((int )column0, (QTableWidgetItem* )__qt_item1);

}

// QTableWidget::setHorizontalHeaderLabels(const QStringList & labels)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setHorizontalHeaderLabels_QList
(void* __this_nativeId,
 void* labels0)
{
QStringList __qt_labels0 = (*(QStringList *)labels0);
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalHeaderLabels((const QStringList& )__qt_labels0);

}

// QTableWidget::setItem(int row, int column, QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setItem_int_int_QTableWidgetItem
(void* __this_nativeId,
 int row0,
 int column1,
 void* item2)
{
    QTableWidgetItem*  __qt_item2 = (QTableWidgetItem* ) item2;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setItem((int )row0, (int )column1, (QTableWidgetItem* )__qt_item2);

}

// QTableWidget::setItemPrototype(const QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setItemPrototype_QTableWidgetItem
(void* __this_nativeId,
 void* item0)
{
    const QTableWidgetItem*  __qt_item0 = (const QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setItemPrototype((const QTableWidgetItem* )__qt_item0);

}

// QTableWidget::setRangeSelected(const QTableWidgetSelectionRange & range, bool select)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setRangeSelected_QTableWidgetSelectionRange_bool
(void* __this_nativeId,
 void* range0,
 bool select1)
{
    const QTableWidgetSelectionRange&  __qt_range0 = (const QTableWidgetSelectionRange& ) *(QTableWidgetSelectionRange *)range0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setRangeSelected((const QTableWidgetSelectionRange& )__qt_range0, (bool )select1);

}

// QTableWidget::setRowCount(int rows)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setRowCount_int
(void* __this_nativeId,
 int rows0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setRowCount((int )rows0);

}

// QTableWidget::setVerticalHeaderItem(int row, QTableWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setVerticalHeaderItem_int_QTableWidgetItem
(void* __this_nativeId,
 int row0,
 void* item1)
{
    QTableWidgetItem*  __qt_item1 = (QTableWidgetItem* ) item1;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setVerticalHeaderItem((int )row0, (QTableWidgetItem* )__qt_item1);

}

// QTableWidget::setVerticalHeaderLabels(const QStringList & labels)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_setVerticalHeaderLabels_QList
(void* __this_nativeId,
 void* labels0)
{
QStringList __qt_labels0 = (*(QStringList *)labels0);
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->setVerticalHeaderLabels((const QStringList& )__qt_labels0);

}

// QTableWidget::sortItems(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_sortItems_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    __qt_this->sortItems((int )column0, (Qt::SortOrder )__qt_order1);

}

// QTableWidget::takeHorizontalHeaderItem(int column)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_takeHorizontalHeaderItem_int
(void* __this_nativeId,
 int column0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->takeHorizontalHeaderItem((int )column0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::takeItem(int row, int column)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_takeItem_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->takeItem((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::takeVerticalHeaderItem(int row)
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_takeVerticalHeaderItem_int
(void* __this_nativeId,
 int row0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->takeVerticalHeaderItem((int )row0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::verticalHeaderItem(int row) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_verticalHeaderItem_int_const
(void* __this_nativeId,
 int row0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QTableWidgetItem*  __qt_return_value = __qt_this->verticalHeaderItem((int )row0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::visualColumn(int logicalColumn) const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_visualColumn_int_const
(void* __this_nativeId,
 int logicalColumn0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->visualColumn((int )logicalColumn0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::visualItemRect(const QTableWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_visualItemRect_QTableWidgetItem_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* item0)
{
    const QTableWidgetItem*  __qt_item0 = (const QTableWidgetItem* ) item0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->visualItemRect((const QTableWidgetItem* )__qt_item0);

    *__d_return_value = __qt_return_value;

}

// QTableWidget::visualRow(int logicalRow) const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_visualRow_int_const
(void* __this_nativeId,
 int logicalRow0)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->visualRow((int )logicalRow0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::dropEvent(QDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_dropEvent_QDropEvent
(void* __this_nativeId,
 void* event0)
{
    QDropEvent*  __qt_event0 = (QDropEvent* ) event0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_event0, __do_static_call);

}

// QTableWidget::dropMimeData(int row, int column, const QMimeData * data, Qt::DropAction action)
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidget_dropMimeData_int_int_QMimeData_DropAction
(void* __this_nativeId,
 int row0,
 int column1,
 void* data2,
 int action3)
{
    const QMimeData*  __qt_data2 = (const QMimeData* ) data2;
    Qt::DropAction __qt_action3 = (Qt::DropAction) action3;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((int )row0, (int )column1, (const QMimeData* )__qt_data2, (Qt::DropAction )__qt_action3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QTableWidget_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTableWidget::mimeData(const QList<QTableWidgetItem * > items) const
QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_mimeData_QList_const
(void* __this_nativeId,
 void* items0)
{
QList<QTableWidgetItem* > __qt_items0 = (*(QList<QTableWidgetItem* > *)items0);
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QTableWidgetItem* > )__qt_items0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QTableWidget::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QTableWidget_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QTableWidget::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QTableWidget_supportedDropActions_const
(void* __this_nativeId)
{
    QTableWidget_QtDShell *__qt_this = (QTableWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTableWidget_staticMetaObject() {
    return (void*)&QTableWidget::staticMetaObject;
}


