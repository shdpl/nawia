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
#include <qlistwidget.h>
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
#include <qvariant.h>
#include <qwidget.h>

#include <QPainter>

#include "QListWidget_shell.h"
#include <iostream>
#include <qlistwidget.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QListWidgetEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QListWidgetEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QListWidget_createEntity(void *nativeId, void* dId)
{
    new QListWidgetEntity((QObject*)nativeId, dId);
}

QListWidget_QtDShell::QListWidget_QtDShell(void *d_ptr, QWidget*  parent0)
    : QListWidget(parent0),
      QObjectLink(this, d_ptr)
{
}

QListWidget_QtDShell::~QListWidget_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QListWidget_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QListWidget::metaObject();
}

int QListWidget_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QListWidget::qt_metacall(_c, _id, _a);
}

int QListWidget_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QListWidget::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QListWidget_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QWidget_actionEvent_QActionEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::actionEvent(QActionEvent*  arg__1)
{
    qtd_QWidget_actionEvent_QActionEvent_dispatch(QObjectLink::getLink(this)->dId, (QActionEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_changeEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::changeEvent(QEvent*  arg__1)
{
    qtd_QWidget_changeEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch, (void *dId, void* editor0, int hint1))
void QListWidget_QtDShell::closeEditor(QWidget*  editor0, QAbstractItemDelegate::EndEditHint  hint1)
{
    qtd_QAbstractItemView_closeEditor_QWidget_EndEditHint_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QWidget_closeEvent_QCloseEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::closeEvent(QCloseEvent*  arg__1)
{
    qtd_QWidget_closeEvent_QCloseEvent_dispatch(QObjectLink::getLink(this)->dId, (QCloseEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_commitData_QWidget_dispatch, (void *dId, void* editor0))
void QListWidget_QtDShell::commitData(QWidget*  editor0)
{
    qtd_QAbstractItemView_commitData_QWidget_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_contextMenuEvent_QContextMenuEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::contextMenuEvent(QContextMenuEvent*  arg__1)
{
    qtd_QWidget_contextMenuEvent_QContextMenuEvent_dispatch(QObjectLink::getLink(this)->dId, (QContextMenuEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* current0, QModelIndexAccessor* previous1))
void QListWidget_QtDShell::currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    qtd_QAbstractItemView_currentChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(current0), &qtd_from_QModelIndex(previous1));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* topLeft0, QModelIndexAccessor* bottomRight1))
void QListWidget_QtDShell::dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    qtd_QAbstractItemView_dataChanged_QModelIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(topLeft0), &qtd_from_QModelIndex(bottomRight1));
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QListWidget_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_doItemsLayout_dispatch, (void *dId))
void QListWidget_QtDShell::doItemsLayout()
{
    qtd_QAbstractItemView_doItemsLayout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragEnterEvent_QDragEnterEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::dragEnterEvent(QDragEnterEvent*  event0)
{
    qtd_QWidget_dragEnterEvent_QDragEnterEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragEnterEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch, (void *dId, void* e0))
void QListWidget_QtDShell::dragLeaveEvent(QDragLeaveEvent*  e0)
{
    qtd_QWidget_dragLeaveEvent_QDragLeaveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragLeaveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dragMoveEvent_QDragMoveEvent_dispatch, (void *dId, void* e0))
void QListWidget_QtDShell::dragMoveEvent(QDragMoveEvent*  e0)
{
    qtd_QWidget_dragMoveEvent_QDragMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QDragMoveEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_dropEvent_QDropEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::dropEvent(QDropEvent*  event0)
{
    qtd_QWidget_dropEvent_QDropEvent_dispatch(QObjectLink::getLink(this)->dId, (QDropEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch, (void *dId, int index0, void* data1, int action2))
QTD_FUNC(GUI, QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch)
bool  QListWidget_QtDShell::dropMimeData(int  index0, const QMimeData*  data1, Qt::DropAction  action2)
{
    return qtd_QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch(QObjectLink::getLink(this)->dId, (int )index0, (QMimeData* )data1, (Qt::DropAction )action2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch, (void *dId, QModelIndexAccessor* index0, int trigger1, void* event2))
bool  QListWidget_QtDShell::edit(const QModelIndex&  index0, QAbstractItemView::EditTrigger  trigger1, QEvent*  event2)
{
    return qtd_QAbstractItemView_edit_QModelIndex_EditTrigger_QEvent_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_editorDestroyed_QObject_dispatch, (void *dId, void* editor0))
void QListWidget_QtDShell::editorDestroyed(QObject*  editor0)
{
    qtd_QAbstractItemView_editorDestroyed_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )editor0);
}

QTD_FUNC_DECL(GUI, void, QWidget_enterEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::enterEvent(QEvent*  arg__1)
{
    qtd_QWidget_enterEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* e0))
bool  QListWidget_QtDShell::event(QEvent*  e0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )e0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QListWidget_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusInEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::focusInEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusInEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QWidget_focusNextPrevChild_bool_dispatch, (void *dId, bool next0))
bool  QListWidget_QtDShell::focusNextPrevChild(bool  next0)
{
    return qtd_QWidget_focusNextPrevChild_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )next0);
}

QTD_FUNC_DECL(GUI, void, QWidget_focusOutEvent_QFocusEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::focusOutEvent(QFocusEvent*  event0)
{
    qtd_QWidget_focusOutEvent_QFocusEvent_dispatch(QObjectLink::getLink(this)->dId, (QFocusEvent* )event0);
}

QTD_FUNC_DECL(GUI, int, QWidget_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QListWidget_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QWidget_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_hideEvent_QHideEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::hideEvent(QHideEvent*  arg__1)
{
    qtd_QWidget_hideEvent_QHideEvent_dispatch(QObjectLink::getLink(this)->dId, (QHideEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_horizontalOffset_const_dispatch, (void *dId))
int  QListWidget_QtDShell::horizontalOffset() const
{
    return qtd_QAbstractItemView_horizontalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarAction_int_dispatch, (void *dId, int action0))
void QListWidget_QtDShell::horizontalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_horizontalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QListWidget_QtDShell::horizontalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_horizontalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_indexAt_QPoint_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QPoint* p0))
QModelIndex  QListWidget_QtDShell::indexAt(const QPoint&  p0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_indexAt_QPoint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QPoint& )p0);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_inputMethodEvent_QInputMethodEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::inputMethodEvent(QInputMethodEvent*  event0)
{
    qtd_QWidget_inputMethodEvent_QInputMethodEvent_dispatch(QObjectLink::getLink(this)->dId, (QInputMethodEvent* )event0);
}

QTD_FUNC_DECL(GUI, void*, QWidget_inputMethodQuery_InputMethodQuery_const_dispatch, (void *dId, int query0))
QVariant  QListWidget_QtDShell::inputMethodQuery(Qt::InputMethodQuery  query0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QWidget_inputMethodQuery_InputMethodQuery_const_dispatch(QObjectLink::getLink(this)->dId, (Qt::InputMethodQuery )query0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QListWidget_QtDShell::isIndexHidden(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemView_isIndexHidden_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QWidget_keyPressEvent_QKeyEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::keyPressEvent(QKeyEvent*  event0)
{
    qtd_QWidget_keyPressEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_keyReleaseEvent_QKeyEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::keyReleaseEvent(QKeyEvent*  arg__1)
{
    qtd_QWidget_keyReleaseEvent_QKeyEvent_dispatch(QObjectLink::getLink(this)->dId, (QKeyEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_keyboardSearch_string_dispatch, (void *dId, const unsigned short* search0, int search0_size))
void QListWidget_QtDShell::keyboardSearch(const QString&  search0)
{
    qtd_QAbstractItemView_keyboardSearch_string_dispatch(QObjectLink::getLink(this)->dId, search0.utf16(), search0.size());
}

QTD_FUNC_DECL(GUI, void, QWidget_languageChange_dispatch, (void *dId))
void QListWidget_QtDShell::languageChange()
{
    qtd_QWidget_languageChange_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_leaveEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::leaveEvent(QEvent*  arg__1)
{
    qtd_QWidget_leaveEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QListWidget_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(QObjectLink::getLink(this)->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QListWidget_mimeData_QList_const_dispatch, (void *dId, void* items0))
QTD_FUNC(GUI, QListWidget_mimeData_QList_const_dispatch)
QMimeData*  QListWidget_QtDShell::mimeData(const QList<QListWidgetItem* >  items0) const
{
    return (QMimeData*) qtd_QListWidget_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&items0);
}

QTD_FUNC_DECL(GUI, void, QListWidget_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(GUI, QListWidget_mimeTypes_const_dispatch)
QStringList  QListWidget_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QListWidget_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_minimumSizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QListWidget_QtDShell::minimumSizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_minimumSizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::mouseDoubleClickEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mouseDoubleClickEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseMoveEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QListWidget_QtDShell::mouseMoveEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseMoveEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mousePressEvent_QMouseEvent_dispatch, (void *dId, void* event0))
void QListWidget_QtDShell::mousePressEvent(QMouseEvent*  event0)
{
    qtd_QWidget_mousePressEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QWidget_mouseReleaseEvent_QMouseEvent_dispatch, (void *dId, void* e0))
void QListWidget_QtDShell::mouseReleaseEvent(QMouseEvent*  e0)
{
    qtd_QWidget_mouseReleaseEvent_QMouseEvent_dispatch(QObjectLink::getLink(this)->dId, (QMouseEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int cursorAction0, int modifiers1))
QModelIndex  QListWidget_QtDShell::moveCursor(QAbstractItemView::CursorAction  cursorAction0, Qt::KeyboardModifiers  modifiers1)
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemView_moveCursor_CursorAction_KeyboardModifiers_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QWidget_moveEvent_QMoveEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::moveEvent(QMoveEvent*  arg__1)
{
    qtd_QWidget_moveEvent_QMoveEvent_dispatch(QObjectLink::getLink(this)->dId, (QMoveEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QListWidget_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_paintEvent_QPaintEvent_dispatch, (void *dId, void* e0))
void QListWidget_QtDShell::paintEvent(QPaintEvent*  e0)
{
    qtd_QWidget_paintEvent_QPaintEvent_dispatch(QObjectLink::getLink(this)->dId, (QPaintEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_reset_dispatch, (void *dId))
void QListWidget_QtDShell::reset()
{
    qtd_QAbstractItemView_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_resizeEvent_QResizeEvent_dispatch, (void *dId, void* e0))
void QListWidget_QtDShell::resizeEvent(QResizeEvent*  e0)
{
    qtd_QWidget_resizeEvent_QResizeEvent_dispatch(QObjectLink::getLink(this)->dId, (QResizeEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QListWidget_QtDShell::rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsAboutToBeRemoved_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch, (void *dId, QModelIndexAccessor* parent0, int start1, int end2))
void QListWidget_QtDShell::rowsInserted(const QModelIndex&  parent0, int  start1, int  end2)
{
    qtd_QAbstractItemView_rowsInserted_QModelIndex_int_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0), (int )start1, (int )end2);
}

QTD_FUNC_DECL(GUI, void, QAbstractScrollArea_scrollContentsBy_int_int_dispatch, (void *dId, int dx0, int dy1))
void QListWidget_QtDShell::scrollContentsBy(int  dx0, int  dy1)
{
    qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(QObjectLink::getLink(this)->dId, (int )dx0, (int )dy1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch, (void *dId, QModelIndexAccessor* index0, int hint1))
void QListWidget_QtDShell::scrollTo(const QModelIndex&  index0, QAbstractItemView::ScrollHint  hint1)
{
    qtd_QAbstractItemView_scrollTo_QModelIndex_ScrollHint_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QAbstractItemView::ScrollHint )hint1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectAll_dispatch, (void *dId))
void QListWidget_QtDShell::selectAll()
{
    qtd_QAbstractItemView_selectAll_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectedIndexes_const_dispatch, (void *dId, void * __d_arr))
QList<QModelIndex >  QListWidget_QtDShell::selectedIndexes() const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemView_selectedIndexes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch, (void *dId, void* selected0, void* deselected1))
void QListWidget_QtDShell::selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    qtd_QAbstractItemView_selectionChanged_QItemSelection_QItemSelection_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selected0, &(QItemSelection& )deselected1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch, (void *dId, QModelIndexAccessor* index0, void* event1))
QItemSelectionModel::SelectionFlags  QListWidget_QtDShell::selectionCommand(const QModelIndex&  index0, const QEvent*  event1) const
{
    return (QFlags<QItemSelectionModel::SelectionFlag>) qtd_QAbstractItemView_selectionCommand_QModelIndex_QEvent_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setRootIndex_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* index0))
void QListWidget_QtDShell::setRootIndex(const QModelIndex&  index0)
{
    qtd_QAbstractItemView_setRootIndex_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch, (void *dId, QRect* rect0, int command1))
void QListWidget_QtDShell::setSelection(const QRect&  rect0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QAbstractItemView_setSelection_QRect_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch, (void *dId, void* selectionModel0))
void QListWidget_QtDShell::setSelectionModel(QItemSelectionModel*  selectionModel0)
{
    qtd_QAbstractItemView_setSelectionModel_QItemSelectionModel_dispatch(QObjectLink::getLink(this)->dId, (QItemSelectionModel* )selectionModel0);
}

QTD_FUNC_DECL(GUI, void, QWidget_setVisible_bool_dispatch, (void *dId, bool visible0))
void QListWidget_QtDShell::setVisible(bool  visible0)
{
    qtd_QWidget_setVisible_bool_dispatch(QObjectLink::getLink(this)->dId, (bool )visible0);
}

QTD_FUNC_DECL(GUI, void, QWidget_showEvent_QShowEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::showEvent(QShowEvent*  arg__1)
{
    qtd_QWidget_showEvent_QShowEvent_dispatch(QObjectLink::getLink(this)->dId, (QShowEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QWidget_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QListWidget_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QWidget_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForColumn_int_const_dispatch, (void *dId, int column0))
int  QListWidget_QtDShell::sizeHintForColumn(int  column0) const
{
    return qtd_QAbstractItemView_sizeHintForColumn_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )column0);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_sizeHintForRow_int_const_dispatch, (void *dId, int row0))
int  QListWidget_QtDShell::sizeHintForRow(int  row0) const
{
    return qtd_QAbstractItemView_sizeHintForRow_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )row0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_startDrag_DropActions_dispatch, (void *dId, int supportedActions0))
void QListWidget_QtDShell::startDrag(Qt::DropActions  supportedActions0)
{
    qtd_QAbstractItemView_startDrag_DropActions_dispatch(QObjectLink::getLink(this)->dId, (Qt::DropActions )supportedActions0);
}

QTD_FUNC_DECL(GUI, int, QListWidget_supportedDropActions_const_dispatch, (void *dId))
QTD_FUNC(GUI, QListWidget_supportedDropActions_const_dispatch)
Qt::DropActions  QListWidget_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QListWidget_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QWidget_tabletEvent_QTabletEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::tabletEvent(QTabletEvent*  arg__1)
{
    qtd_QWidget_tabletEvent_QTabletEvent_dispatch(QObjectLink::getLink(this)->dId, (QTabletEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* e0))
void QListWidget_QtDShell::timerEvent(QTimerEvent*  e0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )e0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorData_dispatch, (void *dId))
void QListWidget_QtDShell::updateEditorData()
{
    qtd_QAbstractItemView_updateEditorData_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateEditorGeometries_dispatch, (void *dId))
void QListWidget_QtDShell::updateEditorGeometries()
{
    qtd_QAbstractItemView_updateEditorGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_updateGeometries_dispatch, (void *dId))
void QListWidget_QtDShell::updateGeometries()
{
    qtd_QAbstractItemView_updateGeometries_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemView_verticalOffset_const_dispatch, (void *dId))
int  QListWidget_QtDShell::verticalOffset() const
{
    return qtd_QAbstractItemView_verticalOffset_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarAction_int_dispatch, (void *dId, int action0))
void QListWidget_QtDShell::verticalScrollbarAction(int  action0)
{
    qtd_QAbstractItemView_verticalScrollbarAction_int_dispatch(QObjectLink::getLink(this)->dId, (int )action0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_verticalScrollbarValueChanged_int_dispatch, (void *dId, int value0))
void QListWidget_QtDShell::verticalScrollbarValueChanged(int  value0)
{
    qtd_QAbstractItemView_verticalScrollbarValueChanged_int_dispatch(QObjectLink::getLink(this)->dId, (int )value0);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_viewOptions_const_dispatch, (void *dId))
QStyleOptionViewItem  QListWidget_QtDShell::viewOptions() const
{
    QStyleOptionViewItem *__qt_return_value = (QStyleOptionViewItem*) qtd_QAbstractItemView_viewOptions_const_dispatch(QObjectLink::getLink(this)->dId);
    return QStyleOptionViewItem(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractScrollArea_viewportEvent_QEvent_dispatch, (void *dId, void* event0))
bool  QListWidget_QtDShell::viewportEvent(QEvent*  event0)
{
    return qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemView_visualRect_QModelIndex_const_dispatch, (void *dId, QRect *__d_return_value, QModelIndexAccessor* index0))
QRect  QListWidget_QtDShell::visualRect(const QModelIndex&  index0) const
{
    QRect __d_return_value;
    qtd_QAbstractItemView_visualRect_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch, (void *dId, void* selection0))
QRegion  QListWidget_QtDShell::visualRegionForSelection(const QItemSelection&  selection0) const
{
    QRegion *__qt_return_value = (QRegion*) qtd_QAbstractItemView_visualRegionForSelection_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0);
    return QRegion(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QWidget_wheelEvent_QWheelEvent_dispatch, (void *dId, void* arg__1))
void QListWidget_QtDShell::wheelEvent(QWheelEvent*  arg__1)
{
    qtd_QWidget_wheelEvent_QWheelEvent_dispatch(QObjectLink::getLink(this)->dId, (QWheelEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QListWidget_initCallBacks(VoidFunc *virts) {
    qtd_QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch = (qtd_QListWidget_dropMimeData_int_QMimeData_DropAction_dispatch_t) virts[0];
    qtd_QListWidget_mimeData_QList_const_dispatch = (qtd_QListWidget_mimeData_QList_const_dispatch_t) virts[1];
    qtd_QListWidget_mimeTypes_const_dispatch = (qtd_QListWidget_mimeTypes_const_dispatch_t) virts[2];
    qtd_QListWidget_supportedDropActions_const_dispatch = (qtd_QListWidget_supportedDropActions_const_dispatch_t) virts[3];
}
// Functions in shell class
void QListWidget_QtDShell::edit(const QModelIndex&  index0)
{
    QAbstractItemView::edit((const QModelIndex& )index0);
}

// public overrides for functions that are protected in the base class
QSize  QListWidget_QtDShell::__public_contentsSize() const
{
    return QListView::contentsSize();
}

void QListWidget_QtDShell::__public_destroy(bool  destroyWindow0, bool  destroySubWindows1)
{
    QWidget::destroy((bool )destroyWindow0, (bool )destroySubWindows1);
}

QPoint  QListWidget_QtDShell::__public_dirtyRegionOffset() const
{
    return QAbstractItemView::dirtyRegionOffset();
}

void QListWidget_QtDShell::__public_doAutoScroll()
{
    QAbstractItemView::doAutoScroll();
}

void QListWidget_QtDShell::__public_drawFrame(QPainter*  arg__1)
{
    QFrame::drawFrame((QPainter* )arg__1);
}

int  QListWidget_QtDShell::__public_dropIndicatorPosition() const
{
    return QAbstractItemView::dropIndicatorPosition();
}

void QListWidget_QtDShell::__public_executeDelayedItemsLayout()
{
    QAbstractItemView::executeDelayedItemsLayout();
}

bool  QListWidget_QtDShell::__public_focusNextChild()
{
    return QWidget::focusNextChild();
}

bool  QListWidget_QtDShell::__public_focusPreviousChild()
{
    return QWidget::focusPreviousChild();
}

QModelIndex  QListWidget_QtDShell::__public_indexFromItem(QListWidgetItem*  item0) const
{
    return QListWidget::indexFromItem((QListWidgetItem* )item0);
}

void QListWidget_QtDShell::__public_internalDrag(int  supportedActions0)
{
    QListView::internalDrag((Qt::DropActions )supportedActions0);
}

void QListWidget_QtDShell::__public_internalDrop(QDropEvent*  e0)
{
    QListView::internalDrop((QDropEvent* )e0);
}

QListWidgetItem*  QListWidget_QtDShell::__public_itemFromIndex(const QModelIndex&  index0) const
{
    return QListWidget::itemFromIndex((const QModelIndex& )index0);
}

QList<QListWidgetItem* >  QListWidget_QtDShell::__public_items(const QMimeData*  data0) const
{
    return QListWidget::items((const QMimeData* )data0);
}

QRect  QListWidget_QtDShell::__public_rectForIndex(const QModelIndex&  index0) const
{
    return QListView::rectForIndex((const QModelIndex& )index0);
}

void QListWidget_QtDShell::__public_resetInputContext()
{
    QWidget::resetInputContext();
}

void QListWidget_QtDShell::__public_resizeContents(int  width0, int  height1)
{
    QListView::resizeContents((int )width0, (int )height1);
}

void QListWidget_QtDShell::__public_scheduleDelayedItemsLayout()
{
    QAbstractItemView::scheduleDelayedItemsLayout();
}

void QListWidget_QtDShell::__public_scrollDirtyRegion(int  dx0, int  dy1)
{
    QAbstractItemView::scrollDirtyRegion((int )dx0, (int )dy1);
}

QObject*  QListWidget_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QListWidget_QtDShell::__public_setDirtyRegion(const QRegion&  region0)
{
    QAbstractItemView::setDirtyRegion((const QRegion& )region0);
}

void QListWidget_QtDShell::__public_setPositionForIndex(const QPoint&  position0, const QModelIndex&  index1)
{
    QListView::setPositionForIndex((const QPoint& )position0, (const QModelIndex& )index1);
}

void QListWidget_QtDShell::__public_setState(int  state0)
{
    QAbstractItemView::setState((QAbstractItemView::State )state0);
}

void QListWidget_QtDShell::__public_setViewportMargins(int  left0, int  top1, int  right2, int  bottom3)
{
    QAbstractScrollArea::setViewportMargins((int )left0, (int )top1, (int )right2, (int )bottom3);
}

void QListWidget_QtDShell::__public_setupViewport(QWidget*  viewport0)
{
    QAbstractScrollArea::setupViewport((QWidget* )viewport0);
}

void QListWidget_QtDShell::__public_startAutoScroll()
{
    QAbstractItemView::startAutoScroll();
}

int  QListWidget_QtDShell::__public_state() const
{
    return QAbstractItemView::state();
}

void QListWidget_QtDShell::__public_stopAutoScroll()
{
    QAbstractItemView::stopAutoScroll();
}

void QListWidget_QtDShell::__public_updateMicroFocus()
{
    QWidget::updateMicroFocus();
}

void QListWidget_QtDShell::__public_activated(const QModelIndex&  index0)
{
    QAbstractItemView::activated((const QModelIndex& )index0);
}

void QListWidget_QtDShell::__public_clicked(const QModelIndex&  index0)
{
    QAbstractItemView::clicked((const QModelIndex& )index0);
}

void QListWidget_QtDShell::__public_currentItemChanged(QListWidgetItem*  current0, QListWidgetItem*  previous1)
{
    QListWidget::currentItemChanged((QListWidgetItem* )current0, (QListWidgetItem* )previous1);
}

void QListWidget_QtDShell::__public_currentRowChanged(int  currentRow0)
{
    QListWidget::currentRowChanged((int )currentRow0);
}

void QListWidget_QtDShell::__public_currentTextChanged(const QString&  currentText0)
{
    QListWidget::currentTextChanged((const QString& )currentText0);
}

void QListWidget_QtDShell::__public_customContextMenuRequested(const QPoint&  pos0)
{
    QWidget::customContextMenuRequested((const QPoint& )pos0);
}

void QListWidget_QtDShell::__public_doubleClicked(const QModelIndex&  index0)
{
    QAbstractItemView::doubleClicked((const QModelIndex& )index0);
}

void QListWidget_QtDShell::__public_entered(const QModelIndex&  index0)
{
    QAbstractItemView::entered((const QModelIndex& )index0);
}

void QListWidget_QtDShell::__public_indexesMoved(const QList<QModelIndex >&  indexes0)
{
    QListView::indexesMoved((const QList<QModelIndex >& )indexes0);
}

void QListWidget_QtDShell::__public_itemActivated(QListWidgetItem*  item0)
{
    QListWidget::itemActivated((QListWidgetItem* )item0);
}

void QListWidget_QtDShell::__public_itemChanged(QListWidgetItem*  item0)
{
    QListWidget::itemChanged((QListWidgetItem* )item0);
}

void QListWidget_QtDShell::__public_itemClicked(QListWidgetItem*  item0)
{
    QListWidget::itemClicked((QListWidgetItem* )item0);
}

void QListWidget_QtDShell::__public_itemDoubleClicked(QListWidgetItem*  item0)
{
    QListWidget::itemDoubleClicked((QListWidgetItem* )item0);
}

void QListWidget_QtDShell::__public_itemEntered(QListWidgetItem*  item0)
{
    QListWidget::itemEntered((QListWidgetItem* )item0);
}

void QListWidget_QtDShell::__public_itemPressed(QListWidgetItem*  item0)
{
    QListWidget::itemPressed((QListWidgetItem* )item0);
}

void QListWidget_QtDShell::__public_itemSelectionChanged()
{
    QListWidget::itemSelectionChanged();
}

void QListWidget_QtDShell::__public_pressed(const QModelIndex&  index0)
{
    QAbstractItemView::pressed((const QModelIndex& )index0);
}

void QListWidget_QtDShell::__public_viewportEntered()
{
    QAbstractItemView::viewportEntered();
}

// Write virtual function overries used to decide on static/virtual calls
void QListWidget_QtDShell::__override_actionEvent(QActionEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::actionEvent((QActionEvent* )arg__1);
    } else {
        actionEvent((QActionEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_changeEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QFrame::changeEvent((QEvent* )arg__1);
    } else {
        changeEvent((QEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_closeEditor(QWidget*  editor0, int  hint1, bool static_call)
{
    if (static_call) {
        QAbstractItemView::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    } else {
        closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
    }
}

void QListWidget_QtDShell::__override_closeEvent(QCloseEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::closeEvent((QCloseEvent* )arg__1);
    } else {
        closeEvent((QCloseEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_commitData(QWidget*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::commitData((QWidget* )editor0);
    } else {
        commitData((QWidget* )editor0);
    }
}

void QListWidget_QtDShell::__override_contextMenuEvent(QContextMenuEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::contextMenuEvent((QContextMenuEvent* )arg__1);
    } else {
        contextMenuEvent((QContextMenuEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1, bool static_call)
{
    if (static_call) {
        QListView::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    } else {
        currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
    }
}

void QListWidget_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1, bool static_call)
{
    if (static_call) {
        QListView::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    } else {
        dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
    }
}

int  QListWidget_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QWidget::devType();
    } else {
        return devType();
    }
}

void QListWidget_QtDShell::__override_doItemsLayout(bool static_call)
{
    if (static_call) {
        QListView::doItemsLayout();
    } else {
        doItemsLayout();
    }
}

void QListWidget_QtDShell::__override_dragEnterEvent(QDragEnterEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::dragEnterEvent((QDragEnterEvent* )event0);
    } else {
        dragEnterEvent((QDragEnterEvent* )event0);
    }
}

void QListWidget_QtDShell::__override_dragLeaveEvent(QDragLeaveEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dragLeaveEvent((QDragLeaveEvent* )e0);
    } else {
        dragLeaveEvent((QDragLeaveEvent* )e0);
    }
}

void QListWidget_QtDShell::__override_dragMoveEvent(QDragMoveEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::dragMoveEvent((QDragMoveEvent* )e0);
    } else {
        dragMoveEvent((QDragMoveEvent* )e0);
    }
}

void QListWidget_QtDShell::__override_dropEvent(QDropEvent*  event0, bool static_call)
{
    if (static_call) {
        QListWidget::dropEvent((QDropEvent* )event0);
    } else {
        dropEvent((QDropEvent* )event0);
    }
}

bool  QListWidget_QtDShell::__override_dropMimeData(int  index0, const QMimeData*  data1, int  action2, bool static_call)
{
    if (static_call) {
        return QListWidget::dropMimeData((int )index0, (const QMimeData* )data1, (Qt::DropAction )action2);
    } else {
        return dropMimeData((int )index0, (const QMimeData* )data1, (Qt::DropAction )action2);
    }
}

bool  QListWidget_QtDShell::__override_edit(const QModelIndex&  index0, int  trigger1, QEvent*  event2, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    } else {
        return edit((const QModelIndex& )index0, (QAbstractItemView::EditTrigger )trigger1, (QEvent* )event2);
    }
}

void QListWidget_QtDShell::__override_editorDestroyed(QObject*  editor0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::editorDestroyed((QObject* )editor0);
    } else {
        editorDestroyed((QObject* )editor0);
    }
}

void QListWidget_QtDShell::__override_enterEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::enterEvent((QEvent* )arg__1);
    } else {
        enterEvent((QEvent* )arg__1);
    }
}

bool  QListWidget_QtDShell::__override_event(QEvent*  e0, bool static_call)
{
    if (static_call) {
        return QListWidget::event((QEvent* )e0);
    } else {
        return event((QEvent* )e0);
    }
}

bool  QListWidget_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QListWidget_QtDShell::__override_focusInEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusInEvent((QFocusEvent* )event0);
    } else {
        focusInEvent((QFocusEvent* )event0);
    }
}

bool  QListWidget_QtDShell::__override_focusNextPrevChild(bool  next0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::focusNextPrevChild((bool )next0);
    } else {
        return focusNextPrevChild((bool )next0);
    }
}

void QListWidget_QtDShell::__override_focusOutEvent(QFocusEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::focusOutEvent((QFocusEvent* )event0);
    } else {
        focusOutEvent((QFocusEvent* )event0);
    }
}

int  QListWidget_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QListWidget_QtDShell::__override_hideEvent(QHideEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::hideEvent((QHideEvent* )arg__1);
    } else {
        hideEvent((QHideEvent* )arg__1);
    }
}

int  QListWidget_QtDShell::__override_horizontalOffset(bool static_call) const
{
    if (static_call) {
        return QListView::horizontalOffset();
    } else {
        return horizontalOffset();
    }
}

void QListWidget_QtDShell::__override_horizontalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarAction((int )action0);
    } else {
        horizontalScrollbarAction((int )action0);
    }
}

void QListWidget_QtDShell::__override_horizontalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::horizontalScrollbarValueChanged((int )value0);
    } else {
        horizontalScrollbarValueChanged((int )value0);
    }
}

QModelIndex  QListWidget_QtDShell::__override_indexAt(const QPoint&  p0, bool static_call) const
{
    if (static_call) {
        return QListView::indexAt((const QPoint& )p0);
    } else {
        return indexAt((const QPoint& )p0);
    }
}

void QListWidget_QtDShell::__override_inputMethodEvent(QInputMethodEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::inputMethodEvent((QInputMethodEvent* )event0);
    } else {
        inputMethodEvent((QInputMethodEvent* )event0);
    }
}

QVariant  QListWidget_QtDShell::__override_inputMethodQuery(int  query0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::inputMethodQuery((Qt::InputMethodQuery )query0);
    } else {
        return inputMethodQuery((Qt::InputMethodQuery )query0);
    }
}

bool  QListWidget_QtDShell::__override_isIndexHidden(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QListView::isIndexHidden((const QModelIndex& )index0);
    } else {
        return isIndexHidden((const QModelIndex& )index0);
    }
}

void QListWidget_QtDShell::__override_keyPressEvent(QKeyEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyPressEvent((QKeyEvent* )event0);
    } else {
        keyPressEvent((QKeyEvent* )event0);
    }
}

void QListWidget_QtDShell::__override_keyReleaseEvent(QKeyEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::keyReleaseEvent((QKeyEvent* )arg__1);
    } else {
        keyReleaseEvent((QKeyEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_keyboardSearch(const QString&  search0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::keyboardSearch((const QString& )search0);
    } else {
        keyboardSearch((const QString& )search0);
    }
}

void QListWidget_QtDShell::__override_languageChange(bool static_call)
{
    if (static_call) {
        QWidget::languageChange();
    } else {
        languageChange();
    }
}

void QListWidget_QtDShell::__override_leaveEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::leaveEvent((QEvent* )arg__1);
    } else {
        leaveEvent((QEvent* )arg__1);
    }
}

int  QListWidget_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidget::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QMimeData*  QListWidget_QtDShell::__override_mimeData(const QList<QListWidgetItem* >  items0, bool static_call) const
{
    if (static_call) {
        return QListWidget::mimeData((const QList<QListWidgetItem* > )items0);
    } else {
        return mimeData((const QList<QListWidgetItem* > )items0);
    }
}

QStringList  QListWidget_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QListWidget::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QSize  QListWidget_QtDShell::__override_minimumSizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::minimumSizeHint();
    } else {
        return minimumSizeHint();
    }
}

void QListWidget_QtDShell::__override_mouseDoubleClickEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mouseDoubleClickEvent((QMouseEvent* )event0);
    } else {
        mouseDoubleClickEvent((QMouseEvent* )event0);
    }
}

void QListWidget_QtDShell::__override_mouseMoveEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::mouseMoveEvent((QMouseEvent* )e0);
    } else {
        mouseMoveEvent((QMouseEvent* )e0);
    }
}

void QListWidget_QtDShell::__override_mousePressEvent(QMouseEvent*  event0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::mousePressEvent((QMouseEvent* )event0);
    } else {
        mousePressEvent((QMouseEvent* )event0);
    }
}

void QListWidget_QtDShell::__override_mouseReleaseEvent(QMouseEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::mouseReleaseEvent((QMouseEvent* )e0);
    } else {
        mouseReleaseEvent((QMouseEvent* )e0);
    }
}

QModelIndex  QListWidget_QtDShell::__override_moveCursor(int  cursorAction0, int  modifiers1, bool static_call)
{
    if (static_call) {
        return QListView::moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    } else {
        return moveCursor((QAbstractItemView::CursorAction )cursorAction0, (Qt::KeyboardModifiers )modifiers1);
    }
}

void QListWidget_QtDShell::__override_moveEvent(QMoveEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::moveEvent((QMoveEvent* )arg__1);
    } else {
        moveEvent((QMoveEvent* )arg__1);
    }
}

QPaintEngine*  QListWidget_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QWidget::paintEngine();
    } else {
        return paintEngine();
    }
}

void QListWidget_QtDShell::__override_paintEvent(QPaintEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::paintEvent((QPaintEvent* )e0);
    } else {
        paintEvent((QPaintEvent* )e0);
    }
}

void QListWidget_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QListView::reset();
    } else {
        reset();
    }
}

void QListWidget_QtDShell::__override_resizeEvent(QResizeEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::resizeEvent((QResizeEvent* )e0);
    } else {
        resizeEvent((QResizeEvent* )e0);
    }
}

void QListWidget_QtDShell::__override_rowsAboutToBeRemoved(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QListView::rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsAboutToBeRemoved((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QListWidget_QtDShell::__override_rowsInserted(const QModelIndex&  parent0, int  start1, int  end2, bool static_call)
{
    if (static_call) {
        QListView::rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    } else {
        rowsInserted((const QModelIndex& )parent0, (int )start1, (int )end2);
    }
}

void QListWidget_QtDShell::__override_scrollContentsBy(int  dx0, int  dy1, bool static_call)
{
    if (static_call) {
        QListView::scrollContentsBy((int )dx0, (int )dy1);
    } else {
        scrollContentsBy((int )dx0, (int )dy1);
    }
}

void QListWidget_QtDShell::__override_scrollTo(const QModelIndex&  index0, int  hint1, bool static_call)
{
    if (static_call) {
        QListView::scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    } else {
        scrollTo((const QModelIndex& )index0, (QAbstractItemView::ScrollHint )hint1);
    }
}

void QListWidget_QtDShell::__override_selectAll(bool static_call)
{
    if (static_call) {
        QAbstractItemView::selectAll();
    } else {
        selectAll();
    }
}

QList<QModelIndex >  QListWidget_QtDShell::__override_selectedIndexes(bool static_call) const
{
    if (static_call) {
        return QListView::selectedIndexes();
    } else {
        return selectedIndexes();
    }
}

void QListWidget_QtDShell::__override_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1, bool static_call)
{
    if (static_call) {
        QListView::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    } else {
        selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
    }
}

int  QListWidget_QtDShell::__override_selectionCommand(const QModelIndex&  index0, const QEvent*  event1, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    } else {
        return selectionCommand((const QModelIndex& )index0, (const QEvent* )event1);
    }
}

void QListWidget_QtDShell::__override_setRootIndex(const QModelIndex&  index0, bool static_call)
{
    if (static_call) {
        QListView::setRootIndex((const QModelIndex& )index0);
    } else {
        setRootIndex((const QModelIndex& )index0);
    }
}

void QListWidget_QtDShell::__override_setSelection(const QRect&  rect0, int  command1, bool static_call)
{
    if (static_call) {
        QListView::setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        setSelection((const QRect& )rect0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QListWidget_QtDShell::__override_setSelectionModel(QItemSelectionModel*  selectionModel0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::setSelectionModel((QItemSelectionModel* )selectionModel0);
    } else {
        setSelectionModel((QItemSelectionModel* )selectionModel0);
    }
}

void QListWidget_QtDShell::__override_setVisible(bool  visible0, bool static_call)
{
    if (static_call) {
        QWidget::setVisible((bool )visible0);
    } else {
        setVisible((bool )visible0);
    }
}

void QListWidget_QtDShell::__override_showEvent(QShowEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::showEvent((QShowEvent* )arg__1);
    } else {
        showEvent((QShowEvent* )arg__1);
    }
}

QSize  QListWidget_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QAbstractScrollArea::sizeHint();
    } else {
        return sizeHint();
    }
}

int  QListWidget_QtDShell::__override_sizeHintForColumn(int  column0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForColumn((int )column0);
    } else {
        return sizeHintForColumn((int )column0);
    }
}

int  QListWidget_QtDShell::__override_sizeHintForRow(int  row0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemView::sizeHintForRow((int )row0);
    } else {
        return sizeHintForRow((int )row0);
    }
}

void QListWidget_QtDShell::__override_startDrag(int  supportedActions0, bool static_call)
{
    if (static_call) {
        QListView::startDrag((Qt::DropActions )supportedActions0);
    } else {
        startDrag((Qt::DropActions )supportedActions0);
    }
}

int  QListWidget_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QListWidget::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QListWidget_QtDShell::__override_tabletEvent(QTabletEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QWidget::tabletEvent((QTabletEvent* )arg__1);
    } else {
        tabletEvent((QTabletEvent* )arg__1);
    }
}

void QListWidget_QtDShell::__override_timerEvent(QTimerEvent*  e0, bool static_call)
{
    if (static_call) {
        QListView::timerEvent((QTimerEvent* )e0);
    } else {
        timerEvent((QTimerEvent* )e0);
    }
}

void QListWidget_QtDShell::__override_updateEditorData(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorData();
    } else {
        updateEditorData();
    }
}

void QListWidget_QtDShell::__override_updateEditorGeometries(bool static_call)
{
    if (static_call) {
        QAbstractItemView::updateEditorGeometries();
    } else {
        updateEditorGeometries();
    }
}

void QListWidget_QtDShell::__override_updateGeometries(bool static_call)
{
    if (static_call) {
        QListView::updateGeometries();
    } else {
        updateGeometries();
    }
}

int  QListWidget_QtDShell::__override_verticalOffset(bool static_call) const
{
    if (static_call) {
        return QListView::verticalOffset();
    } else {
        return verticalOffset();
    }
}

void QListWidget_QtDShell::__override_verticalScrollbarAction(int  action0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarAction((int )action0);
    } else {
        verticalScrollbarAction((int )action0);
    }
}

void QListWidget_QtDShell::__override_verticalScrollbarValueChanged(int  value0, bool static_call)
{
    if (static_call) {
        QAbstractItemView::verticalScrollbarValueChanged((int )value0);
    } else {
        verticalScrollbarValueChanged((int )value0);
    }
}

QStyleOptionViewItem  QListWidget_QtDShell::__override_viewOptions(bool static_call) const
{
    if (static_call) {
        return QListView::viewOptions();
    } else {
        return viewOptions();
    }
}

bool  QListWidget_QtDShell::__override_viewportEvent(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QAbstractItemView::viewportEvent((QEvent* )event0);
    } else {
        return viewportEvent((QEvent* )event0);
    }
}

QRect  QListWidget_QtDShell::__override_visualRect(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QListView::visualRect((const QModelIndex& )index0);
    } else {
        return visualRect((const QModelIndex& )index0);
    }
}

QRegion  QListWidget_QtDShell::__override_visualRegionForSelection(const QItemSelection&  selection0, bool static_call) const
{
    if (static_call) {
        return QListView::visualRegionForSelection((const QItemSelection& )selection0);
    } else {
        return visualRegionForSelection((const QItemSelection& )selection0);
    }
}

void QListWidget_QtDShell::__override_wheelEvent(QWheelEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QAbstractScrollArea::wheelEvent((QWheelEvent* )arg__1);
    } else {
        wheelEvent((QWheelEvent* )arg__1);
    }
}

// QListWidget::currentItemChanged(QListWidgetItem * current, QListWidgetItem * previous)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_currentItemChanged_QListWidgetItem_QListWidgetItem
(void* __this_nativeId,
 void* current0,
 void* previous1)
{
    QListWidgetItem*  __qt_current0 = (QListWidgetItem* ) current0;
    QListWidgetItem*  __qt_previous1 = (QListWidgetItem* ) previous1;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentItemChanged((QListWidgetItem* )__qt_current0, (QListWidgetItem* )__qt_previous1);

}

// QListWidget::currentRowChanged(int currentRow)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_currentRowChanged_int
(void* __this_nativeId,
 int currentRow0)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentRowChanged((int )currentRow0);

}

// QListWidget::currentTextChanged(const QString & currentText)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_currentTextChanged_string
(void* __this_nativeId,
 DArray currentText0)
{
    QString __qt_currentText0 = QString::fromUtf8((const char *)currentText0.ptr, currentText0.length);
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_currentTextChanged((const QString& )__qt_currentText0);

}

// QListWidget::itemActivated(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_itemActivated_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemActivated((QListWidgetItem* )__qt_item0);

}

// QListWidget::itemChanged(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_itemChanged_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemChanged((QListWidgetItem* )__qt_item0);

}

// QListWidget::itemClicked(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_itemClicked_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemClicked((QListWidgetItem* )__qt_item0);

}

// QListWidget::itemDoubleClicked(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_itemDoubleClicked_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemDoubleClicked((QListWidgetItem* )__qt_item0);

}

// QListWidget::itemEntered(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_itemEntered_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemEntered((QListWidgetItem* )__qt_item0);

}

// QListWidget::itemPressed(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_itemPressed_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemPressed((QListWidgetItem* )__qt_item0);

}

// QListWidget::itemSelectionChanged()
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_itemSelectionChanged
(void* __this_nativeId)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->__public_itemSelectionChanged();

}

// ---externC---
// QListWidget::QListWidget(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_QListWidget_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QListWidget_QtDShell *__qt_this = new QListWidget_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QListWidget::addItem(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_addItem_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->addItem((QListWidgetItem* )__qt_item0);

}

// QListWidget::addItem(const QString & label)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_addItem_string
(void* __this_nativeId,
 DArray label0)
{
    QString __qt_label0 = QString::fromUtf8((const char *)label0.ptr, label0.length);
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->addItem((const QString& )__qt_label0);

}

// QListWidget::clear()
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_clear
(void* __this_nativeId)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QListWidget::closePersistentEditor(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_closePersistentEditor_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->closePersistentEditor((QListWidgetItem* )__qt_item0);

}

// QListWidget::count() const
QTD_EXTERN QTD_EXPORT int qtd_QListWidget_count_const
(void* __this_nativeId)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->count();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidget::currentItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_currentItem_const
(void* __this_nativeId)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QListWidgetItem*  __qt_return_value = __qt_this->currentItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::currentRow() const
QTD_EXTERN QTD_EXPORT int qtd_QListWidget_currentRow_const
(void* __this_nativeId)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentRow();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidget::editItem(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_editItem_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->editItem((QListWidgetItem* )__qt_item0);

}

// QListWidget::findItems(const QString & text, QFlags<Qt::MatchFlag> flags) const
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_findItems_string_MatchFlags_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray text0,
 int flags1)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFlags<Qt::MatchFlag> __qt_flags1 = (QFlags<Qt::MatchFlag>) flags1;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QList<QListWidgetItem* >  __qt_return_value = __qt_this->findItems((const QString& )__qt_text0, (Qt::MatchFlags )__qt_flags1);

QList<QListWidgetItem* > &__d_return_value_tmp = (*(QList<QListWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QListWidget::indexFromItem(QListWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_indexFromItem_QListWidgetItem_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_indexFromItem((QListWidgetItem* )__qt_item0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QListWidget::insertItem(int row, QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_insertItem_int_QListWidgetItem
(void* __this_nativeId,
 int row0,
 void* item1)
{
    QListWidgetItem*  __qt_item1 = (QListWidgetItem* ) item1;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->insertItem((int )row0, (QListWidgetItem* )__qt_item1);

}

// QListWidget::isSortingEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QListWidget_isSortingEnabled_const
(void* __this_nativeId)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSortingEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidget::item(int row) const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_item_int_const
(void* __this_nativeId,
 int row0)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QListWidgetItem*  __qt_return_value = __qt_this->item((int )row0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::itemAt(const QPoint & p) const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_itemAt_QPoint_const
(void* __this_nativeId,
 QPoint p0)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QListWidgetItem*  __qt_return_value = __qt_this->itemAt((const QPoint& )p0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::itemAt(int x, int y) const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_itemAt_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QListWidgetItem*  __qt_return_value = __qt_this->itemAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::itemFromIndex(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_itemFromIndex_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QListWidgetItem*  __qt_return_value = __qt_this->__public_itemFromIndex((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::itemWidget(QListWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_itemWidget_QListWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->itemWidget((QListWidgetItem* )__qt_item0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::items(const QMimeData * data) const
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_items_QMimeData_const
(void* __this_nativeId,
 void* __d_return_value,
 void* data0)
{
    const QMimeData*  __qt_data0 = (const QMimeData* ) data0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QList<QListWidgetItem* >  __qt_return_value = __qt_this->__public_items((const QMimeData* )__qt_data0);

QList<QListWidgetItem* > &__d_return_value_tmp = (*(QList<QListWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QListWidget::openPersistentEditor(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_openPersistentEditor_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->openPersistentEditor((QListWidgetItem* )__qt_item0);

}

// QListWidget::removeItemWidget(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_removeItemWidget_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->removeItemWidget((QListWidgetItem* )__qt_item0);

}

// QListWidget::row(const QListWidgetItem * item) const
QTD_EXTERN QTD_EXPORT int qtd_QListWidget_row_QListWidgetItem_const
(void* __this_nativeId,
 void* item0)
{
    const QListWidgetItem*  __qt_item0 = (const QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->row((const QListWidgetItem* )__qt_item0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidget::scrollToItem(const QListWidgetItem * item, QAbstractItemView::ScrollHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_scrollToItem_QListWidgetItem_ScrollHint
(void* __this_nativeId,
 void* item0,
 int hint1)
{
    const QListWidgetItem*  __qt_item0 = (const QListWidgetItem* ) item0;
    QAbstractItemView::ScrollHint __qt_hint1 = (QAbstractItemView::ScrollHint) hint1;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->scrollToItem((const QListWidgetItem* )__qt_item0, (QAbstractItemView::ScrollHint )__qt_hint1);

}

// QListWidget::selectedItems() const
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_selectedItems_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QList<QListWidgetItem* >  __qt_return_value = __qt_this->selectedItems();

QList<QListWidgetItem* > &__d_return_value_tmp = (*(QList<QListWidgetItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QListWidget::setCurrentItem(QListWidgetItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_setCurrentItem_QListWidgetItem
(void* __this_nativeId,
 void* item0)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentItem((QListWidgetItem* )__qt_item0);

}

// QListWidget::setCurrentItem(QListWidgetItem * item, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_setCurrentItem_QListWidgetItem_SelectionFlags
(void* __this_nativeId,
 void* item0,
 int command1)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentItem((QListWidgetItem* )__qt_item0, (QItemSelectionModel::SelectionFlags )__qt_command1);

}

// QListWidget::setCurrentRow(int row)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_setCurrentRow_int
(void* __this_nativeId,
 int row0)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentRow((int )row0);

}

// QListWidget::setCurrentRow(int row, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_setCurrentRow_int_SelectionFlags
(void* __this_nativeId,
 int row0,
 int command1)
{
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->setCurrentRow((int )row0, (QItemSelectionModel::SelectionFlags )__qt_command1);

}

// QListWidget::setItemWidget(QListWidgetItem * item, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_setItemWidget_QListWidgetItem_QWidget
(void* __this_nativeId,
 void* item0,
 void* widget1)
{
    QListWidgetItem*  __qt_item0 = (QListWidgetItem* ) item0;
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->setItemWidget((QListWidgetItem* )__qt_item0, (QWidget* )__qt_widget1);

}

// QListWidget::setSortingEnabled(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_setSortingEnabled_bool
(void* __this_nativeId,
 bool enable0)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->setSortingEnabled((bool )enable0);

}

// QListWidget::sortItems(Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_sortItems_SortOrder
(void* __this_nativeId,
 int order0)
{
    Qt::SortOrder __qt_order0 = (Qt::SortOrder) order0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    __qt_this->sortItems((Qt::SortOrder )__qt_order0);

}

// QListWidget::takeItem(int row)
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_takeItem_int
(void* __this_nativeId,
 int row0)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QListWidgetItem*  __qt_return_value = __qt_this->takeItem((int )row0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::visualItemRect(const QListWidgetItem * item) const
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_visualItemRect_QListWidgetItem_const
(void* __this_nativeId,
 QRect * __d_return_value,
 void* item0)
{
    const QListWidgetItem*  __qt_item0 = (const QListWidgetItem* ) item0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->visualItemRect((const QListWidgetItem* )__qt_item0);

    *__d_return_value = __qt_return_value;

}

// QListWidget::dropEvent(QDropEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_dropEvent_QDropEvent
(void* __this_nativeId,
 void* event0)
{
    QDropEvent*  __qt_event0 = (QDropEvent* ) event0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_dropEvent((QDropEvent* )__qt_event0, __do_static_call);

}

// QListWidget::dropMimeData(int index, const QMimeData * data, Qt::DropAction action)
QTD_EXTERN QTD_EXPORT bool qtd_QListWidget_dropMimeData_int_QMimeData_DropAction
(void* __this_nativeId,
 int index0,
 void* data1,
 int action2)
{
    const QMimeData*  __qt_data1 = (const QMimeData* ) data1;
    Qt::DropAction __qt_action2 = (Qt::DropAction) action2;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((int )index0, (const QMimeData* )__qt_data1, (Qt::DropAction )__qt_action2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidget::event(QEvent * e)
QTD_EXTERN QTD_EXPORT bool qtd_QListWidget_event_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_e0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QListWidget::mimeData(const QList<QListWidgetItem * > items) const
QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_mimeData_QList_const
(void* __this_nativeId,
 void* items0)
{
QList<QListWidgetItem* > __qt_items0 = (*(QList<QListWidgetItem* > *)items0);
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QListWidgetItem* > )__qt_items0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QListWidget::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QListWidget_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QListWidget::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QListWidget_supportedDropActions_const
(void* __this_nativeId)
{
    QListWidget_QtDShell *__qt_this = (QListWidget_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QListWidget_staticMetaObject() {
    return (void*)&QListWidget::staticMetaObject;
}


